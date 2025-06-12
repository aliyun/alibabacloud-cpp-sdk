// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BAILIANMODELONCHIP20240816_H_
#define ALIBABACLOUD_BAILIANMODELONCHIP20240816_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_BailianModelOnChip20240816 {
class DeviceRegisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> nonce{};
  shared_ptr<string> requestTime{};
  shared_ptr<string> signature{};

  DeviceRegisterRequest() {}

  explicit DeviceRegisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (nonce) {
      res["nonce"] = boost::any(*nonce);
    }
    if (requestTime) {
      res["requestTime"] = boost::any(*requestTime);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("nonce") != m.end() && !m["nonce"].empty()) {
      nonce = make_shared<string>(boost::any_cast<string>(m["nonce"]));
    }
    if (m.find("requestTime") != m.end() && !m["requestTime"].empty()) {
      requestTime = make_shared<string>(boost::any_cast<string>(m["requestTime"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
  }


  virtual ~DeviceRegisterRequest() = default;
};
class DeviceRegisterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> nonce{};
  shared_ptr<string> responseTime{};
  shared_ptr<string> signature{};

  DeviceRegisterResponseBodyData() {}

  explicit DeviceRegisterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (nonce) {
      res["nonce"] = boost::any(*nonce);
    }
    if (responseTime) {
      res["responseTime"] = boost::any(*responseTime);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("nonce") != m.end() && !m["nonce"].empty()) {
      nonce = make_shared<string>(boost::any_cast<string>(m["nonce"]));
    }
    if (m.find("responseTime") != m.end() && !m["responseTime"].empty()) {
      responseTime = make_shared<string>(boost::any_cast<string>(m["responseTime"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
  }


  virtual ~DeviceRegisterResponseBodyData() = default;
};
class DeviceRegisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeviceRegisterResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeviceRegisterResponseBody() {}

  explicit DeviceRegisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
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
        DeviceRegisterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<DeviceRegisterResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeviceRegisterResponseBody() = default;
};
class DeviceRegisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeviceRegisterResponseBody> body{};

  DeviceRegisterResponse() {}

  explicit DeviceRegisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeviceRegisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeviceRegisterResponseBody>(model1);
      }
    }
  }


  virtual ~DeviceRegisterResponse() = default;
};
class GetTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> nonce{};
  shared_ptr<string> requestTime{};
  shared_ptr<string> signature{};
  shared_ptr<string> tokenKey{};
  shared_ptr<string> tokenType{};

  GetTokenRequest() {}

  explicit GetTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (nonce) {
      res["nonce"] = boost::any(*nonce);
    }
    if (requestTime) {
      res["requestTime"] = boost::any(*requestTime);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    if (tokenKey) {
      res["tokenKey"] = boost::any(*tokenKey);
    }
    if (tokenType) {
      res["tokenType"] = boost::any(*tokenType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("nonce") != m.end() && !m["nonce"].empty()) {
      nonce = make_shared<string>(boost::any_cast<string>(m["nonce"]));
    }
    if (m.find("requestTime") != m.end() && !m["requestTime"].empty()) {
      requestTime = make_shared<string>(boost::any_cast<string>(m["requestTime"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
    if (m.find("tokenKey") != m.end() && !m["tokenKey"].empty()) {
      tokenKey = make_shared<string>(boost::any_cast<string>(m["tokenKey"]));
    }
    if (m.find("tokenType") != m.end() && !m["tokenType"].empty()) {
      tokenType = make_shared<string>(boost::any_cast<string>(m["tokenType"]));
    }
  }


  virtual ~GetTokenRequest() = default;
};
class GetTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> nonce{};
  shared_ptr<string> requestIp{};
  shared_ptr<string> responseTime{};
  shared_ptr<string> signature{};

  GetTokenResponseBodyData() {}

  explicit GetTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (nonce) {
      res["nonce"] = boost::any(*nonce);
    }
    if (requestIp) {
      res["requestIp"] = boost::any(*requestIp);
    }
    if (responseTime) {
      res["responseTime"] = boost::any(*responseTime);
    }
    if (signature) {
      res["signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("nonce") != m.end() && !m["nonce"].empty()) {
      nonce = make_shared<string>(boost::any_cast<string>(m["nonce"]));
    }
    if (m.find("requestIp") != m.end() && !m["requestIp"].empty()) {
      requestIp = make_shared<string>(boost::any_cast<string>(m["requestIp"]));
    }
    if (m.find("responseTime") != m.end() && !m["responseTime"].empty()) {
      responseTime = make_shared<string>(boost::any_cast<string>(m["responseTime"]));
    }
    if (m.find("signature") != m.end() && !m["signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["signature"]));
    }
  }


  virtual ~GetTokenResponseBodyData() = default;
};
class GetTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetTokenResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  GetTokenResponseBody() {}

  explicit GetTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
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
        GetTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetTokenResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~GetTokenResponseBody() = default;
};
class GetTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTokenResponseBody> body{};

  GetTokenResponse() {}

  explicit GetTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetTokenResponse() = default;
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
  DeviceRegisterResponse deviceRegisterWithOptions(shared_ptr<DeviceRegisterRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeviceRegisterResponse deviceRegister(shared_ptr<DeviceRegisterRequest> request);
  GetTokenResponse getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTokenResponse getToken(shared_ptr<GetTokenRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_BailianModelOnChip20240816

#endif
