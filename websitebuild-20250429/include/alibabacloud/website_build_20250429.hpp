// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_WEBSITEBUILD20250429_H_
#define ALIBABACLOUD_WEBSITEBUILD20250429_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_WebsiteBuild20250429 {
class OperateAppInstanceForPartnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> extend{};
  shared_ptr<string> operateEvent{};

  OperateAppInstanceForPartnerRequest() {}

  explicit OperateAppInstanceForPartnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extend) {
      res["Extend"] = boost::any(*extend);
    }
    if (operateEvent) {
      res["OperateEvent"] = boost::any(*operateEvent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extend") != m.end() && !m["Extend"].empty()) {
      extend = make_shared<string>(boost::any_cast<string>(m["Extend"]));
    }
    if (m.find("OperateEvent") != m.end() && !m["OperateEvent"].empty()) {
      operateEvent = make_shared<string>(boost::any_cast<string>(m["OperateEvent"]));
    }
  }


  virtual ~OperateAppInstanceForPartnerRequest() = default;
};
class OperateAppInstanceForPartnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  OperateAppInstanceForPartnerResponseBody() {}

  explicit OperateAppInstanceForPartnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~OperateAppInstanceForPartnerResponseBody() = default;
};
class OperateAppInstanceForPartnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateAppInstanceForPartnerResponseBody> body{};

  OperateAppInstanceForPartnerResponse() {}

  explicit OperateAppInstanceForPartnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateAppInstanceForPartnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateAppInstanceForPartnerResponseBody>(model1);
      }
    }
  }


  virtual ~OperateAppInstanceForPartnerResponse() = default;
};
class OperateAppServiceForPartnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> extend{};
  shared_ptr<string> operateEvent{};
  shared_ptr<string> serviceType{};

  OperateAppServiceForPartnerRequest() {}

  explicit OperateAppServiceForPartnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (extend) {
      res["Extend"] = boost::any(*extend);
    }
    if (operateEvent) {
      res["OperateEvent"] = boost::any(*operateEvent);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Extend") != m.end() && !m["Extend"].empty()) {
      extend = make_shared<string>(boost::any_cast<string>(m["Extend"]));
    }
    if (m.find("OperateEvent") != m.end() && !m["OperateEvent"].empty()) {
      operateEvent = make_shared<string>(boost::any_cast<string>(m["OperateEvent"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
  }


  virtual ~OperateAppServiceForPartnerRequest() = default;
};
class OperateAppServiceForPartnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OperateAppServiceForPartnerResponseBody() {}

  explicit OperateAppServiceForPartnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~OperateAppServiceForPartnerResponseBody() = default;
};
class OperateAppServiceForPartnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateAppServiceForPartnerResponseBody> body{};

  OperateAppServiceForPartnerResponse() {}

  explicit OperateAppServiceForPartnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateAppServiceForPartnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateAppServiceForPartnerResponseBody>(model1);
      }
    }
  }


  virtual ~OperateAppServiceForPartnerResponse() = default;
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
  OperateAppInstanceForPartnerResponse operateAppInstanceForPartnerWithOptions(shared_ptr<OperateAppInstanceForPartnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateAppInstanceForPartnerResponse operateAppInstanceForPartner(shared_ptr<OperateAppInstanceForPartnerRequest> request);
  OperateAppServiceForPartnerResponse operateAppServiceForPartnerWithOptions(shared_ptr<OperateAppServiceForPartnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateAppServiceForPartnerResponse operateAppServiceForPartner(shared_ptr<OperateAppServiceForPartnerRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_WebsiteBuild20250429

#endif
