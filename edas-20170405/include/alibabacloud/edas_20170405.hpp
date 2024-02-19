// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EDAS20170405_H_
#define ALIBABACLOUD_EDAS20170405_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Edas20170405 {
class EdasProduceRequest : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> sourceFlag{};

  EdasProduceRequest() {}

  explicit EdasProduceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (sourceFlag) {
      res["sourceFlag"] = boost::any(*sourceFlag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("sourceFlag") != m.end() && !m["sourceFlag"].empty()) {
      sourceFlag = make_shared<string>(boost::any_cast<string>(m["sourceFlag"]));
    }
  }


  virtual ~EdasProduceRequest() = default;
};
class EdasProduceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<bool> synchro{};

  EdasProduceResponseBody() {}

  explicit EdasProduceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (synchro) {
      res["synchro"] = boost::any(*synchro);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("synchro") != m.end() && !m["synchro"].empty()) {
      synchro = make_shared<bool>(boost::any_cast<bool>(m["synchro"]));
    }
  }


  virtual ~EdasProduceResponseBody() = default;
};
class EdasProduceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EdasProduceResponseBody> body{};

  EdasProduceResponse() {}

  explicit EdasProduceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        EdasProduceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EdasProduceResponseBody>(model1);
      }
    }
  }


  virtual ~EdasProduceResponse() = default;
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
  EdasProduceResponse edasProduceWithOptions(shared_ptr<EdasProduceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EdasProduceResponse edasProduce(shared_ptr<EdasProduceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Edas20170405

#endif
