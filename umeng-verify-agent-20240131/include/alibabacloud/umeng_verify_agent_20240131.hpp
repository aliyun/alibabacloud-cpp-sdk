// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_UMENG-VERIFY-AGENT20240131_H_
#define ALIBABACLOUD_UMENG-VERIFY-AGENT20240131_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Umeng-verify-agent20240131 {
class CreateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> bundleId{};
  shared_ptr<string> packName{};
  shared_ptr<string> platform{};
  shared_ptr<string> schemeName{};
  shared_ptr<string> signName{};

  CreateRequest() {}

  explicit CreateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["appName"] = boost::any(*appName);
    }
    if (bundleId) {
      res["bundleId"] = boost::any(*bundleId);
    }
    if (packName) {
      res["packName"] = boost::any(*packName);
    }
    if (platform) {
      res["platform"] = boost::any(*platform);
    }
    if (schemeName) {
      res["schemeName"] = boost::any(*schemeName);
    }
    if (signName) {
      res["signName"] = boost::any(*signName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appName") != m.end() && !m["appName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["appName"]));
    }
    if (m.find("bundleId") != m.end() && !m["bundleId"].empty()) {
      bundleId = make_shared<string>(boost::any_cast<string>(m["bundleId"]));
    }
    if (m.find("packName") != m.end() && !m["packName"].empty()) {
      packName = make_shared<string>(boost::any_cast<string>(m["packName"]));
    }
    if (m.find("platform") != m.end() && !m["platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["platform"]));
    }
    if (m.find("schemeName") != m.end() && !m["schemeName"].empty()) {
      schemeName = make_shared<string>(boost::any_cast<string>(m["schemeName"]));
    }
    if (m.find("signName") != m.end() && !m["signName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["signName"]));
    }
  }


  virtual ~CreateRequest() = default;
};
class CreateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> schemeCode{};

  CreateResponseBodyData() {}

  explicit CreateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schemeCode) {
      res["schemeCode"] = boost::any(*schemeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schemeCode") != m.end() && !m["schemeCode"].empty()) {
      schemeCode = make_shared<string>(boost::any_cast<string>(m["schemeCode"]));
    }
  }


  virtual ~CreateResponseBodyData() = default;
};
class CreateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateResponseBody() {}

  explicit CreateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateResponseBody() = default;
};
class CreateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResponseBody> body{};

  CreateResponse() {}

  explicit CreateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResponse() = default;
};
class GetMobileWithTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> apiCode{};
  shared_ptr<long> operatorId{};
  shared_ptr<string> osType{};
  shared_ptr<string> schemeCode{};
  shared_ptr<string> token{};

  GetMobileWithTokenRequest() {}

  explicit GetMobileWithTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiCode) {
      res["apiCode"] = boost::any(*apiCode);
    }
    if (operatorId) {
      res["operatorId"] = boost::any(*operatorId);
    }
    if (osType) {
      res["osType"] = boost::any(*osType);
    }
    if (schemeCode) {
      res["schemeCode"] = boost::any(*schemeCode);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiCode") != m.end() && !m["apiCode"].empty()) {
      apiCode = make_shared<long>(boost::any_cast<long>(m["apiCode"]));
    }
    if (m.find("operatorId") != m.end() && !m["operatorId"].empty()) {
      operatorId = make_shared<long>(boost::any_cast<long>(m["operatorId"]));
    }
    if (m.find("osType") != m.end() && !m["osType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["osType"]));
    }
    if (m.find("schemeCode") != m.end() && !m["schemeCode"].empty()) {
      schemeCode = make_shared<string>(boost::any_cast<string>(m["schemeCode"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~GetMobileWithTokenRequest() = default;
};
class GetMobileWithTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> mobile{};

  GetMobileWithTokenResponseBodyData() {}

  explicit GetMobileWithTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobile) {
      res["mobile"] = boost::any(*mobile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mobile") != m.end() && !m["mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["mobile"]));
    }
  }


  virtual ~GetMobileWithTokenResponseBodyData() = default;
};
class GetMobileWithTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetMobileWithTokenResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetMobileWithTokenResponseBody() {}

  explicit GetMobileWithTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetMobileWithTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetMobileWithTokenResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetMobileWithTokenResponseBody() = default;
};
class GetMobileWithTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMobileWithTokenResponseBody> body{};

  GetMobileWithTokenResponse() {}

  explicit GetMobileWithTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMobileWithTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMobileWithTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetMobileWithTokenResponse() = default;
};
class QueryAppInfoBySchemeRequest : public Darabonba::Model {
public:
  shared_ptr<string> schemeCode{};

  QueryAppInfoBySchemeRequest() {}

  explicit QueryAppInfoBySchemeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schemeCode) {
      res["schemeCode"] = boost::any(*schemeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("schemeCode") != m.end() && !m["schemeCode"].empty()) {
      schemeCode = make_shared<string>(boost::any_cast<string>(m["schemeCode"]));
    }
  }


  virtual ~QueryAppInfoBySchemeRequest() = default;
};
class QueryAppInfoBySchemeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cmAppId{};
  shared_ptr<string> cmAppKey{};
  shared_ptr<string> ctAppId{};
  shared_ptr<string> ctAppKey{};
  shared_ptr<string> cuAppId{};
  shared_ptr<string> cuAppKey{};
  shared_ptr<string> cuRsaPublickKey{};

  QueryAppInfoBySchemeResponseBodyData() {}

  explicit QueryAppInfoBySchemeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cmAppId) {
      res["cmAppId"] = boost::any(*cmAppId);
    }
    if (cmAppKey) {
      res["cmAppKey"] = boost::any(*cmAppKey);
    }
    if (ctAppId) {
      res["ctAppId"] = boost::any(*ctAppId);
    }
    if (ctAppKey) {
      res["ctAppKey"] = boost::any(*ctAppKey);
    }
    if (cuAppId) {
      res["cuAppId"] = boost::any(*cuAppId);
    }
    if (cuAppKey) {
      res["cuAppKey"] = boost::any(*cuAppKey);
    }
    if (cuRsaPublickKey) {
      res["cuRsaPublickKey"] = boost::any(*cuRsaPublickKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cmAppId") != m.end() && !m["cmAppId"].empty()) {
      cmAppId = make_shared<string>(boost::any_cast<string>(m["cmAppId"]));
    }
    if (m.find("cmAppKey") != m.end() && !m["cmAppKey"].empty()) {
      cmAppKey = make_shared<string>(boost::any_cast<string>(m["cmAppKey"]));
    }
    if (m.find("ctAppId") != m.end() && !m["ctAppId"].empty()) {
      ctAppId = make_shared<string>(boost::any_cast<string>(m["ctAppId"]));
    }
    if (m.find("ctAppKey") != m.end() && !m["ctAppKey"].empty()) {
      ctAppKey = make_shared<string>(boost::any_cast<string>(m["ctAppKey"]));
    }
    if (m.find("cuAppId") != m.end() && !m["cuAppId"].empty()) {
      cuAppId = make_shared<string>(boost::any_cast<string>(m["cuAppId"]));
    }
    if (m.find("cuAppKey") != m.end() && !m["cuAppKey"].empty()) {
      cuAppKey = make_shared<string>(boost::any_cast<string>(m["cuAppKey"]));
    }
    if (m.find("cuRsaPublickKey") != m.end() && !m["cuRsaPublickKey"].empty()) {
      cuRsaPublickKey = make_shared<string>(boost::any_cast<string>(m["cuRsaPublickKey"]));
    }
  }


  virtual ~QueryAppInfoBySchemeResponseBodyData() = default;
};
class QueryAppInfoBySchemeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryAppInfoBySchemeResponseBodyData> data{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryAppInfoBySchemeResponseBody() {}

  explicit QueryAppInfoBySchemeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        QueryAppInfoBySchemeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryAppInfoBySchemeResponseBodyData>(model1);
      }
    }
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~QueryAppInfoBySchemeResponseBody() = default;
};
class QueryAppInfoBySchemeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAppInfoBySchemeResponseBody> body{};

  QueryAppInfoBySchemeResponse() {}

  explicit QueryAppInfoBySchemeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAppInfoBySchemeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAppInfoBySchemeResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAppInfoBySchemeResponse() = default;
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
  CreateResponse createWithOptions(shared_ptr<CreateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResponse create(shared_ptr<CreateRequest> request);
  GetMobileWithTokenResponse getMobileWithTokenWithOptions(shared_ptr<GetMobileWithTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMobileWithTokenResponse getMobileWithToken(shared_ptr<GetMobileWithTokenRequest> request);
  QueryAppInfoBySchemeResponse queryAppInfoBySchemeWithOptions(shared_ptr<QueryAppInfoBySchemeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAppInfoBySchemeResponse queryAppInfoByScheme(shared_ptr<QueryAppInfoBySchemeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Umeng-verify-agent20240131

#endif
