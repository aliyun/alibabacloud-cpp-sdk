// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_APPFLOW20230904_H_
#define ALIBABACLOUD_APPFLOW20230904_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Appflow20230904 {
class GenerateUserSessionTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> chatbotId{};
  shared_ptr<long> expireSecond{};
  shared_ptr<string> integrateId{};
  shared_ptr<string> userAvatar{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  GenerateUserSessionTokenRequest() {}

  explicit GenerateUserSessionTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatbotId) {
      res["ChatbotId"] = boost::any(*chatbotId);
    }
    if (expireSecond) {
      res["ExpireSecond"] = boost::any(*expireSecond);
    }
    if (integrateId) {
      res["IntegrateId"] = boost::any(*integrateId);
    }
    if (userAvatar) {
      res["UserAvatar"] = boost::any(*userAvatar);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChatbotId") != m.end() && !m["ChatbotId"].empty()) {
      chatbotId = make_shared<string>(boost::any_cast<string>(m["ChatbotId"]));
    }
    if (m.find("ExpireSecond") != m.end() && !m["ExpireSecond"].empty()) {
      expireSecond = make_shared<long>(boost::any_cast<long>(m["ExpireSecond"]));
    }
    if (m.find("IntegrateId") != m.end() && !m["IntegrateId"].empty()) {
      integrateId = make_shared<string>(boost::any_cast<string>(m["IntegrateId"]));
    }
    if (m.find("UserAvatar") != m.end() && !m["UserAvatar"].empty()) {
      userAvatar = make_shared<string>(boost::any_cast<string>(m["UserAvatar"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GenerateUserSessionTokenRequest() = default;
};
class GenerateUserSessionTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> userSessionToken{};

  GenerateUserSessionTokenResponseBody() {}

  explicit GenerateUserSessionTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userSessionToken) {
      res["UserSessionToken"] = boost::any(*userSessionToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserSessionToken") != m.end() && !m["UserSessionToken"].empty()) {
      userSessionToken = make_shared<string>(boost::any_cast<string>(m["UserSessionToken"]));
    }
  }


  virtual ~GenerateUserSessionTokenResponseBody() = default;
};
class GenerateUserSessionTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateUserSessionTokenResponseBody> body{};

  GenerateUserSessionTokenResponse() {}

  explicit GenerateUserSessionTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateUserSessionTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateUserSessionTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateUserSessionTokenResponse() = default;
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
  GenerateUserSessionTokenResponse generateUserSessionTokenWithOptions(shared_ptr<GenerateUserSessionTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateUserSessionTokenResponse generateUserSessionToken(shared_ptr<GenerateUserSessionTokenRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Appflow20230904

#endif
