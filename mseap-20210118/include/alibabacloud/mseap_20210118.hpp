// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MSEAP20210118_H_
#define ALIBABACLOUD_MSEAP20210118_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Mseap20210118 {
class ActivateLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> licensePublisher{};
  shared_ptr<string> licenseCode{};

  ActivateLicenseRequest() {}

  explicit ActivateLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (licensePublisher) {
      res["LicensePublisher"] = boost::any(*licensePublisher);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("LicensePublisher") != m.end() && !m["LicensePublisher"].empty()) {
      licensePublisher = make_shared<string>(boost::any_cast<string>(m["LicensePublisher"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
  }


  virtual ~ActivateLicenseRequest() = default;
};
class ActivateLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> data{};

  ActivateLicenseResponseBody() {}

  explicit ActivateLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
  }


  virtual ~ActivateLicenseResponseBody() = default;
};
class ActivateLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ActivateLicenseResponseBody> body{};

  ActivateLicenseResponse() {}

  explicit ActivateLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ActivateLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActivateLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~ActivateLicenseResponse() = default;
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
  ActivateLicenseResponse activateLicenseWithOptions(shared_ptr<ActivateLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActivateLicenseResponse activateLicense(shared_ptr<ActivateLicenseRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Mseap20210118

#endif
