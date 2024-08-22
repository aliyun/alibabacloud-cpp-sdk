// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_TRAFFICFXOPEN20240815_H_
#define ALIBABACLOUD_TRAFFICFXOPEN20240815_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_TrafficFxOpen20240815 {
class GetTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> appSecret{};

  GetTokenRequest() {}

  explicit GetTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["appKey"] = boost::any(*appKey);
    }
    if (appSecret) {
      res["appSecret"] = boost::any(*appSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appKey") != m.end() && !m["appKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["appKey"]));
    }
    if (m.find("appSecret") != m.end() && !m["appSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["appSecret"]));
    }
  }


  virtual ~GetTokenRequest() = default;
};
class GetTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> expireTime{};
  shared_ptr<string> generateTime{};
  shared_ptr<string> token{};

  GetTokenResponseBodyData() {}

  explicit GetTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["expireTime"] = boost::any(*expireTime);
    }
    if (generateTime) {
      res["generateTime"] = boost::any(*generateTime);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("expireTime") != m.end() && !m["expireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["expireTime"]));
    }
    if (m.find("generateTime") != m.end() && !m["generateTime"].empty()) {
      generateTime = make_shared<string>(boost::any_cast<string>(m["generateTime"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~GetTokenResponseBodyData() = default;
};
class GetTokenResponseBodyErrorData : public Darabonba::Model {
public:
  shared_ptr<string> rawErrorCode{};
  shared_ptr<string> rawErrorMsg{};

  GetTokenResponseBodyErrorData() {}

  explicit GetTokenResponseBodyErrorData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rawErrorCode) {
      res["rawErrorCode"] = boost::any(*rawErrorCode);
    }
    if (rawErrorMsg) {
      res["rawErrorMsg"] = boost::any(*rawErrorMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("rawErrorCode") != m.end() && !m["rawErrorCode"].empty()) {
      rawErrorCode = make_shared<string>(boost::any_cast<string>(m["rawErrorCode"]));
    }
    if (m.find("rawErrorMsg") != m.end() && !m["rawErrorMsg"].empty()) {
      rawErrorMsg = make_shared<string>(boost::any_cast<string>(m["rawErrorMsg"]));
    }
  }


  virtual ~GetTokenResponseBodyErrorData() = default;
};
class GetTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetTokenResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetTokenResponseBodyErrorData> errorData{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};
  shared_ptr<bool> success{};

  GetTokenResponseBody() {}

  explicit GetTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorData) {
      res["errorData"] = errorData ? boost::any(errorData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetTokenResponseBodyData>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorData") != m.end() && !m["errorData"].empty()) {
      if (typeid(map<string, boost::any>) == m["errorData"].type()) {
        GetTokenResponseBodyErrorData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["errorData"]));
        errorData = make_shared<GetTokenResponseBodyErrorData>(model1);
      }
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["status"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
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
  GetTokenResponse getTokenWithOptions(shared_ptr<GetTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTokenResponse getToken(shared_ptr<GetTokenRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_TrafficFxOpen20240815

#endif
