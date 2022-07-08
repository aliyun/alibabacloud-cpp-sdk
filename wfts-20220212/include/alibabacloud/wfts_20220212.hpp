// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_WFTS20220212_H_
#define ALIBABACLOUD_WFTS20220212_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Wfts20220212 {
class GetLjxAccountInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> ljxAccountInfoId{};

  GetLjxAccountInfoRequest() {}

  explicit GetLjxAccountInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ljxAccountInfoId) {
      res["LjxAccountInfoId"] = boost::any(*ljxAccountInfoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LjxAccountInfoId") != m.end() && !m["LjxAccountInfoId"].empty()) {
      ljxAccountInfoId = make_shared<string>(boost::any_cast<string>(m["LjxAccountInfoId"]));
    }
  }


  virtual ~GetLjxAccountInfoRequest() = default;
};
class GetLjxAccountInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ljxAccountInfoId{};
  shared_ptr<string> requestId{};

  GetLjxAccountInfoResponseBody() {}

  explicit GetLjxAccountInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ljxAccountInfoId) {
      res["LjxAccountInfoId"] = boost::any(*ljxAccountInfoId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LjxAccountInfoId") != m.end() && !m["LjxAccountInfoId"].empty()) {
      ljxAccountInfoId = make_shared<string>(boost::any_cast<string>(m["LjxAccountInfoId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetLjxAccountInfoResponseBody() = default;
};
class GetLjxAccountInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLjxAccountInfoResponseBody> body{};

  GetLjxAccountInfoResponse() {}

  explicit GetLjxAccountInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetLjxAccountInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLjxAccountInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetLjxAccountInfoResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  GetLjxAccountInfoResponse getLjxAccountInfo(shared_ptr<GetLjxAccountInfoRequest> request);
  GetLjxAccountInfoResponse getLjxAccountInfoWithOptions(shared_ptr<GetLjxAccountInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Wfts20220212

#endif
