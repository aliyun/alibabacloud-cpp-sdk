// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IDAAS-DORAEMON20210520_H_
#define ALIBABACLOUD_IDAAS-DORAEMON20210520_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Idaas-doraemon20210520 {
class CreateAuthenticatorRegistrationRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> authenticatorType{};
  shared_ptr<string> clientExtendParamsJson{};
  shared_ptr<string> clientExtendParamsJsonSign{};
  shared_ptr<string> registrationContext{};
  shared_ptr<string> serverExtendParamsJson{};
  shared_ptr<string> userDisplayName{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  CreateAuthenticatorRegistrationRequest() {}

  explicit CreateAuthenticatorRegistrationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (authenticatorType) {
      res["AuthenticatorType"] = boost::any(*authenticatorType);
    }
    if (clientExtendParamsJson) {
      res["ClientExtendParamsJson"] = boost::any(*clientExtendParamsJson);
    }
    if (clientExtendParamsJsonSign) {
      res["ClientExtendParamsJsonSign"] = boost::any(*clientExtendParamsJsonSign);
    }
    if (registrationContext) {
      res["RegistrationContext"] = boost::any(*registrationContext);
    }
    if (serverExtendParamsJson) {
      res["ServerExtendParamsJson"] = boost::any(*serverExtendParamsJson);
    }
    if (userDisplayName) {
      res["UserDisplayName"] = boost::any(*userDisplayName);
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
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("AuthenticatorType") != m.end() && !m["AuthenticatorType"].empty()) {
      authenticatorType = make_shared<string>(boost::any_cast<string>(m["AuthenticatorType"]));
    }
    if (m.find("ClientExtendParamsJson") != m.end() && !m["ClientExtendParamsJson"].empty()) {
      clientExtendParamsJson = make_shared<string>(boost::any_cast<string>(m["ClientExtendParamsJson"]));
    }
    if (m.find("ClientExtendParamsJsonSign") != m.end() && !m["ClientExtendParamsJsonSign"].empty()) {
      clientExtendParamsJsonSign = make_shared<string>(boost::any_cast<string>(m["ClientExtendParamsJsonSign"]));
    }
    if (m.find("RegistrationContext") != m.end() && !m["RegistrationContext"].empty()) {
      registrationContext = make_shared<string>(boost::any_cast<string>(m["RegistrationContext"]));
    }
    if (m.find("ServerExtendParamsJson") != m.end() && !m["ServerExtendParamsJson"].empty()) {
      serverExtendParamsJson = make_shared<string>(boost::any_cast<string>(m["ServerExtendParamsJson"]));
    }
    if (m.find("UserDisplayName") != m.end() && !m["UserDisplayName"].empty()) {
      userDisplayName = make_shared<string>(boost::any_cast<string>(m["UserDisplayName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateAuthenticatorRegistrationRequest() = default;
};
class CreateAuthenticatorRegistrationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> challengeBase64{};
  shared_ptr<string> options{};
  shared_ptr<string> requestId{};

  CreateAuthenticatorRegistrationResponseBody() {}

  explicit CreateAuthenticatorRegistrationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (challengeBase64) {
      res["ChallengeBase64"] = boost::any(*challengeBase64);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChallengeBase64") != m.end() && !m["ChallengeBase64"].empty()) {
      challengeBase64 = make_shared<string>(boost::any_cast<string>(m["ChallengeBase64"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAuthenticatorRegistrationResponseBody() = default;
};
class CreateAuthenticatorRegistrationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAuthenticatorRegistrationResponseBody> body{};

  CreateAuthenticatorRegistrationResponse() {}

  explicit CreateAuthenticatorRegistrationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAuthenticatorRegistrationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAuthenticatorRegistrationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAuthenticatorRegistrationResponse() = default;
};
class CreateUserAuthenticateOptionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> authenticatorType{};
  shared_ptr<string> bindHashBase64{};
  shared_ptr<string> clientExtendParamsJson{};
  shared_ptr<string> clientExtendParamsJsonSign{};
  shared_ptr<string> serverExtendParamsJson{};
  shared_ptr<string> userId{};

  CreateUserAuthenticateOptionsRequest() {}

  explicit CreateUserAuthenticateOptionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (authenticatorType) {
      res["AuthenticatorType"] = boost::any(*authenticatorType);
    }
    if (bindHashBase64) {
      res["BindHashBase64"] = boost::any(*bindHashBase64);
    }
    if (clientExtendParamsJson) {
      res["ClientExtendParamsJson"] = boost::any(*clientExtendParamsJson);
    }
    if (clientExtendParamsJsonSign) {
      res["ClientExtendParamsJsonSign"] = boost::any(*clientExtendParamsJsonSign);
    }
    if (serverExtendParamsJson) {
      res["ServerExtendParamsJson"] = boost::any(*serverExtendParamsJson);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("AuthenticatorType") != m.end() && !m["AuthenticatorType"].empty()) {
      authenticatorType = make_shared<string>(boost::any_cast<string>(m["AuthenticatorType"]));
    }
    if (m.find("BindHashBase64") != m.end() && !m["BindHashBase64"].empty()) {
      bindHashBase64 = make_shared<string>(boost::any_cast<string>(m["BindHashBase64"]));
    }
    if (m.find("ClientExtendParamsJson") != m.end() && !m["ClientExtendParamsJson"].empty()) {
      clientExtendParamsJson = make_shared<string>(boost::any_cast<string>(m["ClientExtendParamsJson"]));
    }
    if (m.find("ClientExtendParamsJsonSign") != m.end() && !m["ClientExtendParamsJsonSign"].empty()) {
      clientExtendParamsJsonSign = make_shared<string>(boost::any_cast<string>(m["ClientExtendParamsJsonSign"]));
    }
    if (m.find("ServerExtendParamsJson") != m.end() && !m["ServerExtendParamsJson"].empty()) {
      serverExtendParamsJson = make_shared<string>(boost::any_cast<string>(m["ServerExtendParamsJson"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateUserAuthenticateOptionsRequest() = default;
};
class CreateUserAuthenticateOptionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> challengeBase64{};
  shared_ptr<string> options{};
  shared_ptr<string> requestId{};

  CreateUserAuthenticateOptionsResponseBody() {}

  explicit CreateUserAuthenticateOptionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (challengeBase64) {
      res["ChallengeBase64"] = boost::any(*challengeBase64);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChallengeBase64") != m.end() && !m["ChallengeBase64"].empty()) {
      challengeBase64 = make_shared<string>(boost::any_cast<string>(m["ChallengeBase64"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      options = make_shared<string>(boost::any_cast<string>(m["Options"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateUserAuthenticateOptionsResponseBody() = default;
};
class CreateUserAuthenticateOptionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserAuthenticateOptionsResponseBody> body{};

  CreateUserAuthenticateOptionsResponse() {}

  explicit CreateUserAuthenticateOptionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserAuthenticateOptionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserAuthenticateOptionsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserAuthenticateOptionsResponse() = default;
};
class DeregisterAuthenticatorRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> authenticatorUuid{};
  shared_ptr<string> userId{};

  DeregisterAuthenticatorRequest() {}

  explicit DeregisterAuthenticatorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (authenticatorUuid) {
      res["AuthenticatorUuid"] = boost::any(*authenticatorUuid);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("AuthenticatorUuid") != m.end() && !m["AuthenticatorUuid"].empty()) {
      authenticatorUuid = make_shared<string>(boost::any_cast<string>(m["AuthenticatorUuid"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeregisterAuthenticatorRequest() = default;
};
class DeregisterAuthenticatorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeregisterAuthenticatorResponseBody() {}

  explicit DeregisterAuthenticatorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeregisterAuthenticatorResponseBody() = default;
};
class DeregisterAuthenticatorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeregisterAuthenticatorResponseBody> body{};

  DeregisterAuthenticatorResponse() {}

  explicit DeregisterAuthenticatorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeregisterAuthenticatorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeregisterAuthenticatorResponseBody>(model1);
      }
    }
  }


  virtual ~DeregisterAuthenticatorResponse() = default;
};
class FetchAccessTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> mobileExtendParamsJson{};
  shared_ptr<string> mobileExtendParamsJsonSign{};
  shared_ptr<string> serverExtendParamsJson{};
  shared_ptr<string> userId{};
  shared_ptr<string> XClientIp{};

  FetchAccessTokenRequest() {}

  explicit FetchAccessTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (mobileExtendParamsJson) {
      res["MobileExtendParamsJson"] = boost::any(*mobileExtendParamsJson);
    }
    if (mobileExtendParamsJsonSign) {
      res["MobileExtendParamsJsonSign"] = boost::any(*mobileExtendParamsJsonSign);
    }
    if (serverExtendParamsJson) {
      res["ServerExtendParamsJson"] = boost::any(*serverExtendParamsJson);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (XClientIp) {
      res["XClientIp"] = boost::any(*XClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("MobileExtendParamsJson") != m.end() && !m["MobileExtendParamsJson"].empty()) {
      mobileExtendParamsJson = make_shared<string>(boost::any_cast<string>(m["MobileExtendParamsJson"]));
    }
    if (m.find("MobileExtendParamsJsonSign") != m.end() && !m["MobileExtendParamsJsonSign"].empty()) {
      mobileExtendParamsJsonSign = make_shared<string>(boost::any_cast<string>(m["MobileExtendParamsJsonSign"]));
    }
    if (m.find("ServerExtendParamsJson") != m.end() && !m["ServerExtendParamsJson"].empty()) {
      serverExtendParamsJson = make_shared<string>(boost::any_cast<string>(m["ServerExtendParamsJson"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("XClientIp") != m.end() && !m["XClientIp"].empty()) {
      XClientIp = make_shared<string>(boost::any_cast<string>(m["XClientIp"]));
    }
  }


  virtual ~FetchAccessTokenRequest() = default;
};
class FetchAccessTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> expiresIn{};
  shared_ptr<string> idToken{};
  shared_ptr<string> refreshToken{};
  shared_ptr<string> scope{};
  shared_ptr<string> tokenType{};

  FetchAccessTokenResponseBodyData() {}

  explicit FetchAccessTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["Access_token"] = boost::any(*accessToken);
    }
    if (expiresIn) {
      res["Expires_in"] = boost::any(*expiresIn);
    }
    if (idToken) {
      res["Id_token"] = boost::any(*idToken);
    }
    if (refreshToken) {
      res["Refresh_token"] = boost::any(*refreshToken);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (tokenType) {
      res["Token_type"] = boost::any(*tokenType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Access_token") != m.end() && !m["Access_token"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["Access_token"]));
    }
    if (m.find("Expires_in") != m.end() && !m["Expires_in"].empty()) {
      expiresIn = make_shared<string>(boost::any_cast<string>(m["Expires_in"]));
    }
    if (m.find("Id_token") != m.end() && !m["Id_token"].empty()) {
      idToken = make_shared<string>(boost::any_cast<string>(m["Id_token"]));
    }
    if (m.find("Refresh_token") != m.end() && !m["Refresh_token"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["Refresh_token"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Token_type") != m.end() && !m["Token_type"].empty()) {
      tokenType = make_shared<string>(boost::any_cast<string>(m["Token_type"]));
    }
  }


  virtual ~FetchAccessTokenResponseBodyData() = default;
};
class FetchAccessTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<FetchAccessTokenResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FetchAccessTokenResponseBody() {}

  explicit FetchAccessTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        FetchAccessTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<FetchAccessTokenResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FetchAccessTokenResponseBody() = default;
};
class FetchAccessTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FetchAccessTokenResponseBody> body{};

  FetchAccessTokenResponse() {}

  explicit FetchAccessTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FetchAccessTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FetchAccessTokenResponseBody>(model1);
      }
    }
  }


  virtual ~FetchAccessTokenResponse() = default;
};
class GetAuthenticatorRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> authenticatorUuid{};
  shared_ptr<string> userId{};

  GetAuthenticatorRequest() {}

  explicit GetAuthenticatorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (authenticatorUuid) {
      res["AuthenticatorUuid"] = boost::any(*authenticatorUuid);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("AuthenticatorUuid") != m.end() && !m["AuthenticatorUuid"].empty()) {
      authenticatorUuid = make_shared<string>(boost::any_cast<string>(m["AuthenticatorUuid"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetAuthenticatorRequest() = default;
};
class GetAuthenticatorResponseBodyAuthenticator : public Darabonba::Model {
public:
  shared_ptr<string> authenticatorName{};
  shared_ptr<string> authenticatorUuid{};
  shared_ptr<string> credentialId{};
  shared_ptr<string> customAuthenticator{};
  shared_ptr<string> lastVerifySourceIp{};
  shared_ptr<long> lastVerifyTime{};
  shared_ptr<string> lastVerifyUserAgent{};
  shared_ptr<string> registerSourceIp{};
  shared_ptr<long> registerTime{};
  shared_ptr<string> type{};

  GetAuthenticatorResponseBodyAuthenticator() {}

  explicit GetAuthenticatorResponseBodyAuthenticator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticatorName) {
      res["AuthenticatorName"] = boost::any(*authenticatorName);
    }
    if (authenticatorUuid) {
      res["AuthenticatorUuid"] = boost::any(*authenticatorUuid);
    }
    if (credentialId) {
      res["CredentialId"] = boost::any(*credentialId);
    }
    if (customAuthenticator) {
      res["CustomAuthenticator"] = boost::any(*customAuthenticator);
    }
    if (lastVerifySourceIp) {
      res["LastVerifySourceIp"] = boost::any(*lastVerifySourceIp);
    }
    if (lastVerifyTime) {
      res["LastVerifyTime"] = boost::any(*lastVerifyTime);
    }
    if (lastVerifyUserAgent) {
      res["LastVerifyUserAgent"] = boost::any(*lastVerifyUserAgent);
    }
    if (registerSourceIp) {
      res["RegisterSourceIp"] = boost::any(*registerSourceIp);
    }
    if (registerTime) {
      res["RegisterTime"] = boost::any(*registerTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticatorName") != m.end() && !m["AuthenticatorName"].empty()) {
      authenticatorName = make_shared<string>(boost::any_cast<string>(m["AuthenticatorName"]));
    }
    if (m.find("AuthenticatorUuid") != m.end() && !m["AuthenticatorUuid"].empty()) {
      authenticatorUuid = make_shared<string>(boost::any_cast<string>(m["AuthenticatorUuid"]));
    }
    if (m.find("CredentialId") != m.end() && !m["CredentialId"].empty()) {
      credentialId = make_shared<string>(boost::any_cast<string>(m["CredentialId"]));
    }
    if (m.find("CustomAuthenticator") != m.end() && !m["CustomAuthenticator"].empty()) {
      customAuthenticator = make_shared<string>(boost::any_cast<string>(m["CustomAuthenticator"]));
    }
    if (m.find("LastVerifySourceIp") != m.end() && !m["LastVerifySourceIp"].empty()) {
      lastVerifySourceIp = make_shared<string>(boost::any_cast<string>(m["LastVerifySourceIp"]));
    }
    if (m.find("LastVerifyTime") != m.end() && !m["LastVerifyTime"].empty()) {
      lastVerifyTime = make_shared<long>(boost::any_cast<long>(m["LastVerifyTime"]));
    }
    if (m.find("LastVerifyUserAgent") != m.end() && !m["LastVerifyUserAgent"].empty()) {
      lastVerifyUserAgent = make_shared<string>(boost::any_cast<string>(m["LastVerifyUserAgent"]));
    }
    if (m.find("RegisterSourceIp") != m.end() && !m["RegisterSourceIp"].empty()) {
      registerSourceIp = make_shared<string>(boost::any_cast<string>(m["RegisterSourceIp"]));
    }
    if (m.find("RegisterTime") != m.end() && !m["RegisterTime"].empty()) {
      registerTime = make_shared<long>(boost::any_cast<long>(m["RegisterTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetAuthenticatorResponseBodyAuthenticator() = default;
};
class GetAuthenticatorResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAuthenticatorResponseBodyAuthenticator> authenticator{};
  shared_ptr<string> requestId{};

  GetAuthenticatorResponseBody() {}

  explicit GetAuthenticatorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticator) {
      res["Authenticator"] = authenticator ? boost::any(authenticator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Authenticator") != m.end() && !m["Authenticator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Authenticator"].type()) {
        GetAuthenticatorResponseBodyAuthenticator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Authenticator"]));
        authenticator = make_shared<GetAuthenticatorResponseBodyAuthenticator>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAuthenticatorResponseBody() = default;
};
class GetAuthenticatorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAuthenticatorResponseBody> body{};

  GetAuthenticatorResponse() {}

  explicit GetAuthenticatorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuthenticatorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuthenticatorResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuthenticatorResponse() = default;
};
class ListAuthenticationLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> authenticatorType{};
  shared_ptr<string> authenticatorUuid{};
  shared_ptr<string> credentialId{};
  shared_ptr<long> fromTime{};
  shared_ptr<string> logTag{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> toTime{};
  shared_ptr<string> userId{};

  ListAuthenticationLogsRequest() {}

  explicit ListAuthenticationLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (authenticatorType) {
      res["AuthenticatorType"] = boost::any(*authenticatorType);
    }
    if (authenticatorUuid) {
      res["AuthenticatorUuid"] = boost::any(*authenticatorUuid);
    }
    if (credentialId) {
      res["CredentialId"] = boost::any(*credentialId);
    }
    if (fromTime) {
      res["FromTime"] = boost::any(*fromTime);
    }
    if (logTag) {
      res["LogTag"] = boost::any(*logTag);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (toTime) {
      res["ToTime"] = boost::any(*toTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("AuthenticatorType") != m.end() && !m["AuthenticatorType"].empty()) {
      authenticatorType = make_shared<string>(boost::any_cast<string>(m["AuthenticatorType"]));
    }
    if (m.find("AuthenticatorUuid") != m.end() && !m["AuthenticatorUuid"].empty()) {
      authenticatorUuid = make_shared<string>(boost::any_cast<string>(m["AuthenticatorUuid"]));
    }
    if (m.find("CredentialId") != m.end() && !m["CredentialId"].empty()) {
      credentialId = make_shared<string>(boost::any_cast<string>(m["CredentialId"]));
    }
    if (m.find("FromTime") != m.end() && !m["FromTime"].empty()) {
      fromTime = make_shared<long>(boost::any_cast<long>(m["FromTime"]));
    }
    if (m.find("LogTag") != m.end() && !m["LogTag"].empty()) {
      logTag = make_shared<string>(boost::any_cast<string>(m["LogTag"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ToTime") != m.end() && !m["ToTime"].empty()) {
      toTime = make_shared<long>(boost::any_cast<long>(m["ToTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListAuthenticationLogsRequest() = default;
};
class ListAuthenticationLogsResponseBodyAuthenticationLogContent : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> applicationUuid{};
  shared_ptr<string> authenticationAction{};
  shared_ptr<long> authenticationTime{};
  shared_ptr<string> authenticatorName{};
  shared_ptr<string> authenticatorType{};
  shared_ptr<string> authenticatorUuid{};
  shared_ptr<string> challengeBase64{};
  shared_ptr<string> credentialId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> logParams{};
  shared_ptr<string> logTag{};
  shared_ptr<string> rawAuthenticationContext{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userAgent{};
  shared_ptr<string> userId{};
  shared_ptr<string> userSourceIp{};
  shared_ptr<bool> verifyResult{};

  ListAuthenticationLogsResponseBodyAuthenticationLogContent() {}

  explicit ListAuthenticationLogsResponseBodyAuthenticationLogContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (applicationUuid) {
      res["ApplicationUuid"] = boost::any(*applicationUuid);
    }
    if (authenticationAction) {
      res["AuthenticationAction"] = boost::any(*authenticationAction);
    }
    if (authenticationTime) {
      res["AuthenticationTime"] = boost::any(*authenticationTime);
    }
    if (authenticatorName) {
      res["AuthenticatorName"] = boost::any(*authenticatorName);
    }
    if (authenticatorType) {
      res["AuthenticatorType"] = boost::any(*authenticatorType);
    }
    if (authenticatorUuid) {
      res["AuthenticatorUuid"] = boost::any(*authenticatorUuid);
    }
    if (challengeBase64) {
      res["ChallengeBase64"] = boost::any(*challengeBase64);
    }
    if (credentialId) {
      res["CredentialId"] = boost::any(*credentialId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (logParams) {
      res["LogParams"] = boost::any(*logParams);
    }
    if (logTag) {
      res["LogTag"] = boost::any(*logTag);
    }
    if (rawAuthenticationContext) {
      res["RawAuthenticationContext"] = boost::any(*rawAuthenticationContext);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (userAgent) {
      res["UserAgent"] = boost::any(*userAgent);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userSourceIp) {
      res["UserSourceIp"] = boost::any(*userSourceIp);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("ApplicationUuid") != m.end() && !m["ApplicationUuid"].empty()) {
      applicationUuid = make_shared<string>(boost::any_cast<string>(m["ApplicationUuid"]));
    }
    if (m.find("AuthenticationAction") != m.end() && !m["AuthenticationAction"].empty()) {
      authenticationAction = make_shared<string>(boost::any_cast<string>(m["AuthenticationAction"]));
    }
    if (m.find("AuthenticationTime") != m.end() && !m["AuthenticationTime"].empty()) {
      authenticationTime = make_shared<long>(boost::any_cast<long>(m["AuthenticationTime"]));
    }
    if (m.find("AuthenticatorName") != m.end() && !m["AuthenticatorName"].empty()) {
      authenticatorName = make_shared<string>(boost::any_cast<string>(m["AuthenticatorName"]));
    }
    if (m.find("AuthenticatorType") != m.end() && !m["AuthenticatorType"].empty()) {
      authenticatorType = make_shared<string>(boost::any_cast<string>(m["AuthenticatorType"]));
    }
    if (m.find("AuthenticatorUuid") != m.end() && !m["AuthenticatorUuid"].empty()) {
      authenticatorUuid = make_shared<string>(boost::any_cast<string>(m["AuthenticatorUuid"]));
    }
    if (m.find("ChallengeBase64") != m.end() && !m["ChallengeBase64"].empty()) {
      challengeBase64 = make_shared<string>(boost::any_cast<string>(m["ChallengeBase64"]));
    }
    if (m.find("CredentialId") != m.end() && !m["CredentialId"].empty()) {
      credentialId = make_shared<string>(boost::any_cast<string>(m["CredentialId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LogParams") != m.end() && !m["LogParams"].empty()) {
      logParams = make_shared<string>(boost::any_cast<string>(m["LogParams"]));
    }
    if (m.find("LogTag") != m.end() && !m["LogTag"].empty()) {
      logTag = make_shared<string>(boost::any_cast<string>(m["LogTag"]));
    }
    if (m.find("RawAuthenticationContext") != m.end() && !m["RawAuthenticationContext"].empty()) {
      rawAuthenticationContext = make_shared<string>(boost::any_cast<string>(m["RawAuthenticationContext"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("UserAgent") != m.end() && !m["UserAgent"].empty()) {
      userAgent = make_shared<string>(boost::any_cast<string>(m["UserAgent"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserSourceIp") != m.end() && !m["UserSourceIp"].empty()) {
      userSourceIp = make_shared<string>(boost::any_cast<string>(m["UserSourceIp"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<bool>(boost::any_cast<bool>(m["VerifyResult"]));
    }
  }


  virtual ~ListAuthenticationLogsResponseBodyAuthenticationLogContent() = default;
};
class ListAuthenticationLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAuthenticationLogsResponseBodyAuthenticationLogContent>> authenticationLogContent{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAuthenticationLogsResponseBody() {}

  explicit ListAuthenticationLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationLogContent) {
      vector<boost::any> temp1;
      for(auto item1:*authenticationLogContent){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthenticationLogContent"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticationLogContent") != m.end() && !m["AuthenticationLogContent"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthenticationLogContent"].type()) {
        vector<ListAuthenticationLogsResponseBodyAuthenticationLogContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthenticationLogContent"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAuthenticationLogsResponseBodyAuthenticationLogContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authenticationLogContent = make_shared<vector<ListAuthenticationLogsResponseBodyAuthenticationLogContent>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAuthenticationLogsResponseBody() = default;
};
class ListAuthenticationLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAuthenticationLogsResponseBody> body{};

  ListAuthenticationLogsResponse() {}

  explicit ListAuthenticationLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAuthenticationLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAuthenticationLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAuthenticationLogsResponse() = default;
};
class ListAuthenticatorOpsLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> authenticatorType{};
  shared_ptr<string> authenticatorUuid{};
  shared_ptr<long> fromTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> toTime{};
  shared_ptr<string> userId{};

  ListAuthenticatorOpsLogsRequest() {}

  explicit ListAuthenticatorOpsLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (authenticatorType) {
      res["AuthenticatorType"] = boost::any(*authenticatorType);
    }
    if (authenticatorUuid) {
      res["AuthenticatorUuid"] = boost::any(*authenticatorUuid);
    }
    if (fromTime) {
      res["FromTime"] = boost::any(*fromTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (toTime) {
      res["ToTime"] = boost::any(*toTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("AuthenticatorType") != m.end() && !m["AuthenticatorType"].empty()) {
      authenticatorType = make_shared<string>(boost::any_cast<string>(m["AuthenticatorType"]));
    }
    if (m.find("AuthenticatorUuid") != m.end() && !m["AuthenticatorUuid"].empty()) {
      authenticatorUuid = make_shared<string>(boost::any_cast<string>(m["AuthenticatorUuid"]));
    }
    if (m.find("FromTime") != m.end() && !m["FromTime"].empty()) {
      fromTime = make_shared<long>(boost::any_cast<long>(m["FromTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ToTime") != m.end() && !m["ToTime"].empty()) {
      toTime = make_shared<long>(boost::any_cast<long>(m["ToTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListAuthenticatorOpsLogsRequest() = default;
};
class ListAuthenticatorOpsLogsResponseBodyAuthenticationLogContent : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> applicationUuid{};
  shared_ptr<string> authenticatorName{};
  shared_ptr<string> authenticatorType{};
  shared_ptr<string> authenticatorUuid{};
  shared_ptr<string> challengeBase64{};
  shared_ptr<string> credentialId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> logParams{};
  shared_ptr<string> operationAction{};
  shared_ptr<bool> operationResult{};
  shared_ptr<long> operationTime{};
  shared_ptr<string> rawContext{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> userAgent{};
  shared_ptr<string> userId{};
  shared_ptr<string> userSourceIp{};

  ListAuthenticatorOpsLogsResponseBodyAuthenticationLogContent() {}

  explicit ListAuthenticatorOpsLogsResponseBodyAuthenticationLogContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (applicationUuid) {
      res["ApplicationUuid"] = boost::any(*applicationUuid);
    }
    if (authenticatorName) {
      res["AuthenticatorName"] = boost::any(*authenticatorName);
    }
    if (authenticatorType) {
      res["AuthenticatorType"] = boost::any(*authenticatorType);
    }
    if (authenticatorUuid) {
      res["AuthenticatorUuid"] = boost::any(*authenticatorUuid);
    }
    if (challengeBase64) {
      res["ChallengeBase64"] = boost::any(*challengeBase64);
    }
    if (credentialId) {
      res["CredentialId"] = boost::any(*credentialId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (logParams) {
      res["LogParams"] = boost::any(*logParams);
    }
    if (operationAction) {
      res["OperationAction"] = boost::any(*operationAction);
    }
    if (operationResult) {
      res["OperationResult"] = boost::any(*operationResult);
    }
    if (operationTime) {
      res["OperationTime"] = boost::any(*operationTime);
    }
    if (rawContext) {
      res["RawContext"] = boost::any(*rawContext);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (userAgent) {
      res["UserAgent"] = boost::any(*userAgent);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userSourceIp) {
      res["UserSourceIp"] = boost::any(*userSourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("ApplicationUuid") != m.end() && !m["ApplicationUuid"].empty()) {
      applicationUuid = make_shared<string>(boost::any_cast<string>(m["ApplicationUuid"]));
    }
    if (m.find("AuthenticatorName") != m.end() && !m["AuthenticatorName"].empty()) {
      authenticatorName = make_shared<string>(boost::any_cast<string>(m["AuthenticatorName"]));
    }
    if (m.find("AuthenticatorType") != m.end() && !m["AuthenticatorType"].empty()) {
      authenticatorType = make_shared<string>(boost::any_cast<string>(m["AuthenticatorType"]));
    }
    if (m.find("AuthenticatorUuid") != m.end() && !m["AuthenticatorUuid"].empty()) {
      authenticatorUuid = make_shared<string>(boost::any_cast<string>(m["AuthenticatorUuid"]));
    }
    if (m.find("ChallengeBase64") != m.end() && !m["ChallengeBase64"].empty()) {
      challengeBase64 = make_shared<string>(boost::any_cast<string>(m["ChallengeBase64"]));
    }
    if (m.find("CredentialId") != m.end() && !m["CredentialId"].empty()) {
      credentialId = make_shared<string>(boost::any_cast<string>(m["CredentialId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LogParams") != m.end() && !m["LogParams"].empty()) {
      logParams = make_shared<string>(boost::any_cast<string>(m["LogParams"]));
    }
    if (m.find("OperationAction") != m.end() && !m["OperationAction"].empty()) {
      operationAction = make_shared<string>(boost::any_cast<string>(m["OperationAction"]));
    }
    if (m.find("OperationResult") != m.end() && !m["OperationResult"].empty()) {
      operationResult = make_shared<bool>(boost::any_cast<bool>(m["OperationResult"]));
    }
    if (m.find("OperationTime") != m.end() && !m["OperationTime"].empty()) {
      operationTime = make_shared<long>(boost::any_cast<long>(m["OperationTime"]));
    }
    if (m.find("RawContext") != m.end() && !m["RawContext"].empty()) {
      rawContext = make_shared<string>(boost::any_cast<string>(m["RawContext"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("UserAgent") != m.end() && !m["UserAgent"].empty()) {
      userAgent = make_shared<string>(boost::any_cast<string>(m["UserAgent"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserSourceIp") != m.end() && !m["UserSourceIp"].empty()) {
      userSourceIp = make_shared<string>(boost::any_cast<string>(m["UserSourceIp"]));
    }
  }


  virtual ~ListAuthenticatorOpsLogsResponseBodyAuthenticationLogContent() = default;
};
class ListAuthenticatorOpsLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAuthenticatorOpsLogsResponseBodyAuthenticationLogContent>> authenticationLogContent{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAuthenticatorOpsLogsResponseBody() {}

  explicit ListAuthenticatorOpsLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationLogContent) {
      vector<boost::any> temp1;
      for(auto item1:*authenticationLogContent){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthenticationLogContent"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticationLogContent") != m.end() && !m["AuthenticationLogContent"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthenticationLogContent"].type()) {
        vector<ListAuthenticatorOpsLogsResponseBodyAuthenticationLogContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthenticationLogContent"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAuthenticatorOpsLogsResponseBodyAuthenticationLogContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authenticationLogContent = make_shared<vector<ListAuthenticatorOpsLogsResponseBodyAuthenticationLogContent>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAuthenticatorOpsLogsResponseBody() = default;
};
class ListAuthenticatorOpsLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAuthenticatorOpsLogsResponseBody> body{};

  ListAuthenticatorOpsLogsResponse() {}

  explicit ListAuthenticatorOpsLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAuthenticatorOpsLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAuthenticatorOpsLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAuthenticatorOpsLogsResponse() = default;
};
class ListAuthenticatorsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> authenticatorType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userId{};

  ListAuthenticatorsRequest() {}

  explicit ListAuthenticatorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (authenticatorType) {
      res["AuthenticatorType"] = boost::any(*authenticatorType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("AuthenticatorType") != m.end() && !m["AuthenticatorType"].empty()) {
      authenticatorType = make_shared<string>(boost::any_cast<string>(m["AuthenticatorType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListAuthenticatorsRequest() = default;
};
class ListAuthenticatorsResponseBodyAuthenticator : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> authenticatorName{};
  shared_ptr<string> authenticatorUuid{};
  shared_ptr<string> credentialId{};
  shared_ptr<long> lastVerifyTime{};
  shared_ptr<long> registerTime{};
  shared_ptr<string> type{};

  ListAuthenticatorsResponseBodyAuthenticator() {}

  explicit ListAuthenticatorsResponseBodyAuthenticator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (authenticatorName) {
      res["AuthenticatorName"] = boost::any(*authenticatorName);
    }
    if (authenticatorUuid) {
      res["AuthenticatorUuid"] = boost::any(*authenticatorUuid);
    }
    if (credentialId) {
      res["CredentialId"] = boost::any(*credentialId);
    }
    if (lastVerifyTime) {
      res["LastVerifyTime"] = boost::any(*lastVerifyTime);
    }
    if (registerTime) {
      res["RegisterTime"] = boost::any(*registerTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("AuthenticatorName") != m.end() && !m["AuthenticatorName"].empty()) {
      authenticatorName = make_shared<string>(boost::any_cast<string>(m["AuthenticatorName"]));
    }
    if (m.find("AuthenticatorUuid") != m.end() && !m["AuthenticatorUuid"].empty()) {
      authenticatorUuid = make_shared<string>(boost::any_cast<string>(m["AuthenticatorUuid"]));
    }
    if (m.find("CredentialId") != m.end() && !m["CredentialId"].empty()) {
      credentialId = make_shared<string>(boost::any_cast<string>(m["CredentialId"]));
    }
    if (m.find("LastVerifyTime") != m.end() && !m["LastVerifyTime"].empty()) {
      lastVerifyTime = make_shared<long>(boost::any_cast<long>(m["LastVerifyTime"]));
    }
    if (m.find("RegisterTime") != m.end() && !m["RegisterTime"].empty()) {
      registerTime = make_shared<long>(boost::any_cast<long>(m["RegisterTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListAuthenticatorsResponseBodyAuthenticator() = default;
};
class ListAuthenticatorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAuthenticatorsResponseBodyAuthenticator>> authenticator{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAuthenticatorsResponseBody() {}

  explicit ListAuthenticatorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticator) {
      vector<boost::any> temp1;
      for(auto item1:*authenticator){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Authenticator"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Authenticator") != m.end() && !m["Authenticator"].empty()) {
      if (typeid(vector<boost::any>) == m["Authenticator"].type()) {
        vector<ListAuthenticatorsResponseBodyAuthenticator> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Authenticator"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAuthenticatorsResponseBodyAuthenticator model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authenticator = make_shared<vector<ListAuthenticatorsResponseBodyAuthenticator>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAuthenticatorsResponseBody() = default;
};
class ListAuthenticatorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAuthenticatorsResponseBody> body{};

  ListAuthenticatorsResponse() {}

  explicit ListAuthenticatorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAuthenticatorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAuthenticatorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAuthenticatorsResponse() = default;
};
class ListCostUnitOrdersRequest : public Darabonba::Model {
public:
  shared_ptr<string> beginDate{};
  shared_ptr<string> finalDate{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListCostUnitOrdersRequest() {}

  explicit ListCostUnitOrdersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginDate) {
      res["BeginDate"] = boost::any(*beginDate);
    }
    if (finalDate) {
      res["FinalDate"] = boost::any(*finalDate);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginDate") != m.end() && !m["BeginDate"].empty()) {
      beginDate = make_shared<string>(boost::any_cast<string>(m["BeginDate"]));
    }
    if (m.find("FinalDate") != m.end() && !m["FinalDate"].empty()) {
      finalDate = make_shared<string>(boost::any_cast<string>(m["FinalDate"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListCostUnitOrdersRequest() = default;
};
class ListCostUnitOrdersResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> aliOrderCode{};
  shared_ptr<string> aliOrderInstanceId{};
  shared_ptr<long> createTime{};
  shared_ptr<bool> exhausted{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> orderStatus{};
  shared_ptr<long> refundTime{};
  shared_ptr<long> totalCostUnit{};
  shared_ptr<long> usedCostUnit{};

  ListCostUnitOrdersResponseBodyItems() {}

  explicit ListCostUnitOrdersResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliOrderCode) {
      res["AliOrderCode"] = boost::any(*aliOrderCode);
    }
    if (aliOrderInstanceId) {
      res["AliOrderInstanceId"] = boost::any(*aliOrderInstanceId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (exhausted) {
      res["Exhausted"] = boost::any(*exhausted);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (refundTime) {
      res["RefundTime"] = boost::any(*refundTime);
    }
    if (totalCostUnit) {
      res["TotalCostUnit"] = boost::any(*totalCostUnit);
    }
    if (usedCostUnit) {
      res["UsedCostUnit"] = boost::any(*usedCostUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliOrderCode") != m.end() && !m["AliOrderCode"].empty()) {
      aliOrderCode = make_shared<string>(boost::any_cast<string>(m["AliOrderCode"]));
    }
    if (m.find("AliOrderInstanceId") != m.end() && !m["AliOrderInstanceId"].empty()) {
      aliOrderInstanceId = make_shared<string>(boost::any_cast<string>(m["AliOrderInstanceId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Exhausted") != m.end() && !m["Exhausted"].empty()) {
      exhausted = make_shared<bool>(boost::any_cast<bool>(m["Exhausted"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["OrderStatus"]));
    }
    if (m.find("RefundTime") != m.end() && !m["RefundTime"].empty()) {
      refundTime = make_shared<long>(boost::any_cast<long>(m["RefundTime"]));
    }
    if (m.find("TotalCostUnit") != m.end() && !m["TotalCostUnit"].empty()) {
      totalCostUnit = make_shared<long>(boost::any_cast<long>(m["TotalCostUnit"]));
    }
    if (m.find("UsedCostUnit") != m.end() && !m["UsedCostUnit"].empty()) {
      usedCostUnit = make_shared<long>(boost::any_cast<long>(m["UsedCostUnit"]));
    }
  }


  virtual ~ListCostUnitOrdersResponseBodyItems() = default;
};
class ListCostUnitOrdersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCostUnitOrdersResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  ListCostUnitOrdersResponseBody() {}

  explicit ListCostUnitOrdersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListCostUnitOrdersResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCostUnitOrdersResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListCostUnitOrdersResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListCostUnitOrdersResponseBody() = default;
};
class ListCostUnitOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCostUnitOrdersResponseBody> body{};

  ListCostUnitOrdersResponse() {}

  explicit ListCostUnitOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCostUnitOrdersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCostUnitOrdersResponseBody>(model1);
      }
    }
  }


  virtual ~ListCostUnitOrdersResponse() = default;
};
class ListOrderConsumeStatisticRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliOrderCode{};
  shared_ptr<string> applicationExternalId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> statisticTimeMax{};
  shared_ptr<string> statisticTimeMin{};

  ListOrderConsumeStatisticRecordsRequest() {}

  explicit ListOrderConsumeStatisticRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliOrderCode) {
      res["AliOrderCode"] = boost::any(*aliOrderCode);
    }
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (statisticTimeMax) {
      res["StatisticTimeMax"] = boost::any(*statisticTimeMax);
    }
    if (statisticTimeMin) {
      res["StatisticTimeMin"] = boost::any(*statisticTimeMin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliOrderCode") != m.end() && !m["AliOrderCode"].empty()) {
      aliOrderCode = make_shared<string>(boost::any_cast<string>(m["AliOrderCode"]));
    }
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("StatisticTimeMax") != m.end() && !m["StatisticTimeMax"].empty()) {
      statisticTimeMax = make_shared<string>(boost::any_cast<string>(m["StatisticTimeMax"]));
    }
    if (m.find("StatisticTimeMin") != m.end() && !m["StatisticTimeMin"].empty()) {
      statisticTimeMin = make_shared<string>(boost::any_cast<string>(m["StatisticTimeMin"]));
    }
  }


  virtual ~ListOrderConsumeStatisticRecordsRequest() = default;
};
class ListOrderConsumeStatisticRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> aliOrderCode{};
  shared_ptr<string> applicationExternalId{};
  shared_ptr<long> chargedCount{};
  shared_ptr<string> serviceCode{};
  shared_ptr<long> statisticTime{};
  shared_ptr<long> totalPrice{};
  shared_ptr<long> unitPrice{};

  ListOrderConsumeStatisticRecordsResponseBodyItems() {}

  explicit ListOrderConsumeStatisticRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliOrderCode) {
      res["AliOrderCode"] = boost::any(*aliOrderCode);
    }
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (chargedCount) {
      res["ChargedCount"] = boost::any(*chargedCount);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (statisticTime) {
      res["StatisticTime"] = boost::any(*statisticTime);
    }
    if (totalPrice) {
      res["TotalPrice"] = boost::any(*totalPrice);
    }
    if (unitPrice) {
      res["UnitPrice"] = boost::any(*unitPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliOrderCode") != m.end() && !m["AliOrderCode"].empty()) {
      aliOrderCode = make_shared<string>(boost::any_cast<string>(m["AliOrderCode"]));
    }
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("ChargedCount") != m.end() && !m["ChargedCount"].empty()) {
      chargedCount = make_shared<long>(boost::any_cast<long>(m["ChargedCount"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("StatisticTime") != m.end() && !m["StatisticTime"].empty()) {
      statisticTime = make_shared<long>(boost::any_cast<long>(m["StatisticTime"]));
    }
    if (m.find("TotalPrice") != m.end() && !m["TotalPrice"].empty()) {
      totalPrice = make_shared<long>(boost::any_cast<long>(m["TotalPrice"]));
    }
    if (m.find("UnitPrice") != m.end() && !m["UnitPrice"].empty()) {
      unitPrice = make_shared<long>(boost::any_cast<long>(m["UnitPrice"]));
    }
  }


  virtual ~ListOrderConsumeStatisticRecordsResponseBodyItems() = default;
};
class ListOrderConsumeStatisticRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListOrderConsumeStatisticRecordsResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalElements{};
  shared_ptr<long> totalPages{};

  ListOrderConsumeStatisticRecordsResponseBody() {}

  explicit ListOrderConsumeStatisticRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListOrderConsumeStatisticRecordsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrderConsumeStatisticRecordsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListOrderConsumeStatisticRecordsResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListOrderConsumeStatisticRecordsResponseBody() = default;
};
class ListOrderConsumeStatisticRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOrderConsumeStatisticRecordsResponseBody> body{};

  ListOrderConsumeStatisticRecordsResponse() {}

  explicit ListOrderConsumeStatisticRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrderConsumeStatisticRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrderConsumeStatisticRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrderConsumeStatisticRecordsResponse() = default;
};
class ListPwnedPasswordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> prefixHexPasswordSha1Hash{};

  ListPwnedPasswordsRequest() {}

  explicit ListPwnedPasswordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prefixHexPasswordSha1Hash) {
      res["PrefixHexPasswordSha1Hash"] = boost::any(*prefixHexPasswordSha1Hash);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrefixHexPasswordSha1Hash") != m.end() && !m["PrefixHexPasswordSha1Hash"].empty()) {
      prefixHexPasswordSha1Hash = make_shared<string>(boost::any_cast<string>(m["PrefixHexPasswordSha1Hash"]));
    }
  }


  virtual ~ListPwnedPasswordsRequest() = default;
};
class ListPwnedPasswordsResponseBodyPwnedPasswordInfos : public Darabonba::Model {
public:
  shared_ptr<string> hexPasswordSha1Hash{};
  shared_ptr<long> pwnedCount{};

  ListPwnedPasswordsResponseBodyPwnedPasswordInfos() {}

  explicit ListPwnedPasswordsResponseBodyPwnedPasswordInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hexPasswordSha1Hash) {
      res["HexPasswordSha1Hash"] = boost::any(*hexPasswordSha1Hash);
    }
    if (pwnedCount) {
      res["PwnedCount"] = boost::any(*pwnedCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HexPasswordSha1Hash") != m.end() && !m["HexPasswordSha1Hash"].empty()) {
      hexPasswordSha1Hash = make_shared<string>(boost::any_cast<string>(m["HexPasswordSha1Hash"]));
    }
    if (m.find("PwnedCount") != m.end() && !m["PwnedCount"].empty()) {
      pwnedCount = make_shared<long>(boost::any_cast<long>(m["PwnedCount"]));
    }
  }


  virtual ~ListPwnedPasswordsResponseBodyPwnedPasswordInfos() = default;
};
class ListPwnedPasswordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListPwnedPasswordsResponseBodyPwnedPasswordInfos>> pwnedPasswordInfos{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPwnedPasswordsResponseBody() {}

  explicit ListPwnedPasswordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pwnedPasswordInfos) {
      vector<boost::any> temp1;
      for(auto item1:*pwnedPasswordInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PwnedPasswordInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PwnedPasswordInfos") != m.end() && !m["PwnedPasswordInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["PwnedPasswordInfos"].type()) {
        vector<ListPwnedPasswordsResponseBodyPwnedPasswordInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PwnedPasswordInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPwnedPasswordsResponseBodyPwnedPasswordInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pwnedPasswordInfos = make_shared<vector<ListPwnedPasswordsResponseBodyPwnedPasswordInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListPwnedPasswordsResponseBody() = default;
};
class ListPwnedPasswordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPwnedPasswordsResponseBody> body{};

  ListPwnedPasswordsResponse() {}

  explicit ListPwnedPasswordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPwnedPasswordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPwnedPasswordsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPwnedPasswordsResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> userId{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<string> userDisplayName{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ListUsersResponseBodyUsers() {}

  explicit ListUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userDisplayName) {
      res["UserDisplayName"] = boost::any(*userDisplayName);
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
    if (m.find("UserDisplayName") != m.end() && !m["UserDisplayName"].empty()) {
      userDisplayName = make_shared<string>(boost::any_cast<string>(m["UserDisplayName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ListUsersResponseBodyUsers() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListUsersResponseBodyUsers>> users{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (users) {
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<ListUsersResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<ListUsersResponseBodyUsers>>(expect1);
      }
    }
  }


  virtual ~ListUsersResponseBody() = default;
};
class ListUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersResponseBody> body{};

  ListUsersResponse() {}

  explicit ListUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersResponse() = default;
};
class QuerySmsReportsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> eventId{};

  QuerySmsReportsRequest() {}

  explicit QuerySmsReportsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
  }


  virtual ~QuerySmsReportsRequest() = default;
};
class QuerySmsReportsResponseBodySmsReports : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> chargedCount{};
  shared_ptr<string> code{};
  shared_ptr<string> eventId{};
  shared_ptr<string> mobile{};
  shared_ptr<string> sn{};
  shared_ptr<string> stat{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> tid{};
  shared_ptr<string> time{};

  QuerySmsReportsResponseBodySmsReports() {}

  explicit QuerySmsReportsResponseBodySmsReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (chargedCount) {
      res["ChargedCount"] = boost::any(*chargedCount);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    if (stat) {
      res["Stat"] = boost::any(*stat);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChargedCount") != m.end() && !m["ChargedCount"].empty()) {
      chargedCount = make_shared<long>(boost::any_cast<long>(m["ChargedCount"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
    if (m.find("Stat") != m.end() && !m["Stat"].empty()) {
      stat = make_shared<string>(boost::any_cast<string>(m["Stat"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~QuerySmsReportsResponseBodySmsReports() = default;
};
class QuerySmsReportsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QuerySmsReportsResponseBodySmsReports>> smsReports{};
  shared_ptr<long> totalElements{};

  QuerySmsReportsResponseBody() {}

  explicit QuerySmsReportsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (smsReports) {
      vector<boost::any> temp1;
      for(auto item1:*smsReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SmsReports"] = boost::any(temp1);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SmsReports") != m.end() && !m["SmsReports"].empty()) {
      if (typeid(vector<boost::any>) == m["SmsReports"].type()) {
        vector<QuerySmsReportsResponseBodySmsReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SmsReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySmsReportsResponseBodySmsReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        smsReports = make_shared<vector<QuerySmsReportsResponseBodySmsReports>>(expect1);
      }
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
  }


  virtual ~QuerySmsReportsResponseBody() = default;
};
class QuerySmsReportsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySmsReportsResponseBody> body{};

  QuerySmsReportsResponse() {}

  explicit QuerySmsReportsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySmsReportsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySmsReportsResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySmsReportsResponse() = default;
};
class QuerySmsUpsResponseBodySmsUps : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> destCode{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> sendTime{};
  shared_ptr<string> sequenceId{};
  shared_ptr<string> tenantId{};

  QuerySmsUpsResponseBodySmsUps() {}

  explicit QuerySmsUpsResponseBodySmsUps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (destCode) {
      res["DestCode"] = boost::any(*destCode);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (sendTime) {
      res["SendTime"] = boost::any(*sendTime);
    }
    if (sequenceId) {
      res["SequenceId"] = boost::any(*sequenceId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DestCode") != m.end() && !m["DestCode"].empty()) {
      destCode = make_shared<string>(boost::any_cast<string>(m["DestCode"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("SendTime") != m.end() && !m["SendTime"].empty()) {
      sendTime = make_shared<string>(boost::any_cast<string>(m["SendTime"]));
    }
    if (m.find("SequenceId") != m.end() && !m["SequenceId"].empty()) {
      sequenceId = make_shared<string>(boost::any_cast<string>(m["SequenceId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QuerySmsUpsResponseBodySmsUps() = default;
};
class QuerySmsUpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QuerySmsUpsResponseBodySmsUps>> smsUps{};
  shared_ptr<long> totalElements{};

  QuerySmsUpsResponseBody() {}

  explicit QuerySmsUpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (smsUps) {
      vector<boost::any> temp1;
      for(auto item1:*smsUps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SmsUps"] = boost::any(temp1);
    }
    if (totalElements) {
      res["TotalElements"] = boost::any(*totalElements);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SmsUps") != m.end() && !m["SmsUps"].empty()) {
      if (typeid(vector<boost::any>) == m["SmsUps"].type()) {
        vector<QuerySmsUpsResponseBodySmsUps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SmsUps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySmsUpsResponseBodySmsUps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        smsUps = make_shared<vector<QuerySmsUpsResponseBodySmsUps>>(expect1);
      }
    }
    if (m.find("TotalElements") != m.end() && !m["TotalElements"].empty()) {
      totalElements = make_shared<long>(boost::any_cast<long>(m["TotalElements"]));
    }
  }


  virtual ~QuerySmsUpsResponseBody() = default;
};
class QuerySmsUpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySmsUpsResponseBody> body{};

  QuerySmsUpsResponse() {}

  explicit QuerySmsUpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySmsUpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySmsUpsResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySmsUpsResponse() = default;
};
class RegisterAuthenticatorRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> authenticatorName{};
  shared_ptr<string> authenticatorType{};
  shared_ptr<string> clientExtendParamsJson{};
  shared_ptr<string> clientExtendParamsJsonSign{};
  shared_ptr<string> logParams{};
  shared_ptr<string> registrationContext{};
  shared_ptr<string> requireChallengeBase64{};
  shared_ptr<string> serverExtendParamsJson{};
  shared_ptr<string> userId{};
  shared_ptr<string> userSourceIp{};

  RegisterAuthenticatorRequest() {}

  explicit RegisterAuthenticatorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (authenticatorName) {
      res["AuthenticatorName"] = boost::any(*authenticatorName);
    }
    if (authenticatorType) {
      res["AuthenticatorType"] = boost::any(*authenticatorType);
    }
    if (clientExtendParamsJson) {
      res["ClientExtendParamsJson"] = boost::any(*clientExtendParamsJson);
    }
    if (clientExtendParamsJsonSign) {
      res["ClientExtendParamsJsonSign"] = boost::any(*clientExtendParamsJsonSign);
    }
    if (logParams) {
      res["LogParams"] = boost::any(*logParams);
    }
    if (registrationContext) {
      res["RegistrationContext"] = boost::any(*registrationContext);
    }
    if (requireChallengeBase64) {
      res["RequireChallengeBase64"] = boost::any(*requireChallengeBase64);
    }
    if (serverExtendParamsJson) {
      res["ServerExtendParamsJson"] = boost::any(*serverExtendParamsJson);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userSourceIp) {
      res["UserSourceIp"] = boost::any(*userSourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("AuthenticatorName") != m.end() && !m["AuthenticatorName"].empty()) {
      authenticatorName = make_shared<string>(boost::any_cast<string>(m["AuthenticatorName"]));
    }
    if (m.find("AuthenticatorType") != m.end() && !m["AuthenticatorType"].empty()) {
      authenticatorType = make_shared<string>(boost::any_cast<string>(m["AuthenticatorType"]));
    }
    if (m.find("ClientExtendParamsJson") != m.end() && !m["ClientExtendParamsJson"].empty()) {
      clientExtendParamsJson = make_shared<string>(boost::any_cast<string>(m["ClientExtendParamsJson"]));
    }
    if (m.find("ClientExtendParamsJsonSign") != m.end() && !m["ClientExtendParamsJsonSign"].empty()) {
      clientExtendParamsJsonSign = make_shared<string>(boost::any_cast<string>(m["ClientExtendParamsJsonSign"]));
    }
    if (m.find("LogParams") != m.end() && !m["LogParams"].empty()) {
      logParams = make_shared<string>(boost::any_cast<string>(m["LogParams"]));
    }
    if (m.find("RegistrationContext") != m.end() && !m["RegistrationContext"].empty()) {
      registrationContext = make_shared<string>(boost::any_cast<string>(m["RegistrationContext"]));
    }
    if (m.find("RequireChallengeBase64") != m.end() && !m["RequireChallengeBase64"].empty()) {
      requireChallengeBase64 = make_shared<string>(boost::any_cast<string>(m["RequireChallengeBase64"]));
    }
    if (m.find("ServerExtendParamsJson") != m.end() && !m["ServerExtendParamsJson"].empty()) {
      serverExtendParamsJson = make_shared<string>(boost::any_cast<string>(m["ServerExtendParamsJson"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserSourceIp") != m.end() && !m["UserSourceIp"].empty()) {
      userSourceIp = make_shared<string>(boost::any_cast<string>(m["UserSourceIp"]));
    }
  }


  virtual ~RegisterAuthenticatorRequest() = default;
};
class RegisterAuthenticatorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> authenticatorUuid{};
  shared_ptr<string> etasResponseSting{};
  shared_ptr<string> requestId{};

  RegisterAuthenticatorResponseBody() {}

  explicit RegisterAuthenticatorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticatorUuid) {
      res["AuthenticatorUuid"] = boost::any(*authenticatorUuid);
    }
    if (etasResponseSting) {
      res["EtasResponseSting"] = boost::any(*etasResponseSting);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticatorUuid") != m.end() && !m["AuthenticatorUuid"].empty()) {
      authenticatorUuid = make_shared<string>(boost::any_cast<string>(m["AuthenticatorUuid"]));
    }
    if (m.find("EtasResponseSting") != m.end() && !m["EtasResponseSting"].empty()) {
      etasResponseSting = make_shared<string>(boost::any_cast<string>(m["EtasResponseSting"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RegisterAuthenticatorResponseBody() = default;
};
class RegisterAuthenticatorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterAuthenticatorResponseBody> body{};

  RegisterAuthenticatorResponse() {}

  explicit RegisterAuthenticatorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterAuthenticatorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterAuthenticatorResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterAuthenticatorResponse() = default;
};
class ServiceInvokeRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> doraemonAction{};
  shared_ptr<string> mobileExtendParamsJson{};
  shared_ptr<string> mobileExtendParamsJsonSign{};
  shared_ptr<string> serverExtendParamsJson{};
  shared_ptr<string> serviceCode{};
  shared_ptr<bool> testModel{};
  shared_ptr<string> XClientIp{};

  ServiceInvokeRequest() {}

  explicit ServiceInvokeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (doraemonAction) {
      res["DoraemonAction"] = boost::any(*doraemonAction);
    }
    if (mobileExtendParamsJson) {
      res["MobileExtendParamsJson"] = boost::any(*mobileExtendParamsJson);
    }
    if (mobileExtendParamsJsonSign) {
      res["MobileExtendParamsJsonSign"] = boost::any(*mobileExtendParamsJsonSign);
    }
    if (serverExtendParamsJson) {
      res["ServerExtendParamsJson"] = boost::any(*serverExtendParamsJson);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (testModel) {
      res["TestModel"] = boost::any(*testModel);
    }
    if (XClientIp) {
      res["XClientIp"] = boost::any(*XClientIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("DoraemonAction") != m.end() && !m["DoraemonAction"].empty()) {
      doraemonAction = make_shared<string>(boost::any_cast<string>(m["DoraemonAction"]));
    }
    if (m.find("MobileExtendParamsJson") != m.end() && !m["MobileExtendParamsJson"].empty()) {
      mobileExtendParamsJson = make_shared<string>(boost::any_cast<string>(m["MobileExtendParamsJson"]));
    }
    if (m.find("MobileExtendParamsJsonSign") != m.end() && !m["MobileExtendParamsJsonSign"].empty()) {
      mobileExtendParamsJsonSign = make_shared<string>(boost::any_cast<string>(m["MobileExtendParamsJsonSign"]));
    }
    if (m.find("ServerExtendParamsJson") != m.end() && !m["ServerExtendParamsJson"].empty()) {
      serverExtendParamsJson = make_shared<string>(boost::any_cast<string>(m["ServerExtendParamsJson"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("TestModel") != m.end() && !m["TestModel"].empty()) {
      testModel = make_shared<bool>(boost::any_cast<bool>(m["TestModel"]));
    }
    if (m.find("XClientIp") != m.end() && !m["XClientIp"].empty()) {
      XClientIp = make_shared<string>(boost::any_cast<string>(m["XClientIp"]));
    }
  }


  virtual ~ServiceInvokeRequest() = default;
};
class ServiceInvokeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> eventId{};
  shared_ptr<string> idToken{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ServiceInvokeResponseBody() {}

  explicit ServiceInvokeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (idToken) {
      res["IdToken"] = boost::any(*idToken);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("IdToken") != m.end() && !m["IdToken"].empty()) {
      idToken = make_shared<string>(boost::any_cast<string>(m["IdToken"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ServiceInvokeResponseBody() = default;
};
class ServiceInvokeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ServiceInvokeResponseBody> body{};

  ServiceInvokeResponse() {}

  explicit ServiceInvokeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ServiceInvokeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ServiceInvokeResponseBody>(model1);
      }
    }
  }


  virtual ~ServiceInvokeResponse() = default;
};
class UpdateAuthenticatorAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> authenticatorName{};
  shared_ptr<string> authenticatorUuid{};
  shared_ptr<string> userId{};

  UpdateAuthenticatorAttributeRequest() {}

  explicit UpdateAuthenticatorAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (authenticatorName) {
      res["AuthenticatorName"] = boost::any(*authenticatorName);
    }
    if (authenticatorUuid) {
      res["AuthenticatorUuid"] = boost::any(*authenticatorUuid);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("AuthenticatorName") != m.end() && !m["AuthenticatorName"].empty()) {
      authenticatorName = make_shared<string>(boost::any_cast<string>(m["AuthenticatorName"]));
    }
    if (m.find("AuthenticatorUuid") != m.end() && !m["AuthenticatorUuid"].empty()) {
      authenticatorUuid = make_shared<string>(boost::any_cast<string>(m["AuthenticatorUuid"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateAuthenticatorAttributeRequest() = default;
};
class UpdateAuthenticatorAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAuthenticatorAttributeResponseBody() {}

  explicit UpdateAuthenticatorAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAuthenticatorAttributeResponseBody() = default;
};
class UpdateAuthenticatorAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAuthenticatorAttributeResponseBody> body{};

  UpdateAuthenticatorAttributeResponse() {}

  explicit UpdateAuthenticatorAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAuthenticatorAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAuthenticatorAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAuthenticatorAttributeResponse() = default;
};
class VerifyIdTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> jwtIdToken{};

  VerifyIdTokenRequest() {}

  explicit VerifyIdTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (jwtIdToken) {
      res["JwtIdToken"] = boost::any(*jwtIdToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("JwtIdToken") != m.end() && !m["JwtIdToken"].empty()) {
      jwtIdToken = make_shared<string>(boost::any_cast<string>(m["JwtIdToken"]));
    }
  }


  virtual ~VerifyIdTokenRequest() = default;
};
class VerifyIdTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> userId{};

  VerifyIdTokenResponseBody() {}

  explicit VerifyIdTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~VerifyIdTokenResponseBody() = default;
};
class VerifyIdTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyIdTokenResponseBody> body{};

  VerifyIdTokenResponse() {}

  explicit VerifyIdTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyIdTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyIdTokenResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyIdTokenResponse() = default;
};
class VerifyUserAuthenticationRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationExternalId{};
  shared_ptr<string> authenticationContext{};
  shared_ptr<string> authenticatorType{};
  shared_ptr<string> clientExtendParamsJson{};
  shared_ptr<string> clientExtendParamsJsonSign{};
  shared_ptr<string> logParams{};
  shared_ptr<string> logTag{};
  shared_ptr<string> requireBindHashBase64{};
  shared_ptr<string> requireChallengeBase64{};
  shared_ptr<string> serverExtendParamsJson{};
  shared_ptr<string> userId{};
  shared_ptr<string> userSourceIp{};

  VerifyUserAuthenticationRequest() {}

  explicit VerifyUserAuthenticationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationExternalId) {
      res["ApplicationExternalId"] = boost::any(*applicationExternalId);
    }
    if (authenticationContext) {
      res["AuthenticationContext"] = boost::any(*authenticationContext);
    }
    if (authenticatorType) {
      res["AuthenticatorType"] = boost::any(*authenticatorType);
    }
    if (clientExtendParamsJson) {
      res["ClientExtendParamsJson"] = boost::any(*clientExtendParamsJson);
    }
    if (clientExtendParamsJsonSign) {
      res["ClientExtendParamsJsonSign"] = boost::any(*clientExtendParamsJsonSign);
    }
    if (logParams) {
      res["LogParams"] = boost::any(*logParams);
    }
    if (logTag) {
      res["LogTag"] = boost::any(*logTag);
    }
    if (requireBindHashBase64) {
      res["RequireBindHashBase64"] = boost::any(*requireBindHashBase64);
    }
    if (requireChallengeBase64) {
      res["RequireChallengeBase64"] = boost::any(*requireChallengeBase64);
    }
    if (serverExtendParamsJson) {
      res["ServerExtendParamsJson"] = boost::any(*serverExtendParamsJson);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userSourceIp) {
      res["UserSourceIp"] = boost::any(*userSourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationExternalId") != m.end() && !m["ApplicationExternalId"].empty()) {
      applicationExternalId = make_shared<string>(boost::any_cast<string>(m["ApplicationExternalId"]));
    }
    if (m.find("AuthenticationContext") != m.end() && !m["AuthenticationContext"].empty()) {
      authenticationContext = make_shared<string>(boost::any_cast<string>(m["AuthenticationContext"]));
    }
    if (m.find("AuthenticatorType") != m.end() && !m["AuthenticatorType"].empty()) {
      authenticatorType = make_shared<string>(boost::any_cast<string>(m["AuthenticatorType"]));
    }
    if (m.find("ClientExtendParamsJson") != m.end() && !m["ClientExtendParamsJson"].empty()) {
      clientExtendParamsJson = make_shared<string>(boost::any_cast<string>(m["ClientExtendParamsJson"]));
    }
    if (m.find("ClientExtendParamsJsonSign") != m.end() && !m["ClientExtendParamsJsonSign"].empty()) {
      clientExtendParamsJsonSign = make_shared<string>(boost::any_cast<string>(m["ClientExtendParamsJsonSign"]));
    }
    if (m.find("LogParams") != m.end() && !m["LogParams"].empty()) {
      logParams = make_shared<string>(boost::any_cast<string>(m["LogParams"]));
    }
    if (m.find("LogTag") != m.end() && !m["LogTag"].empty()) {
      logTag = make_shared<string>(boost::any_cast<string>(m["LogTag"]));
    }
    if (m.find("RequireBindHashBase64") != m.end() && !m["RequireBindHashBase64"].empty()) {
      requireBindHashBase64 = make_shared<string>(boost::any_cast<string>(m["RequireBindHashBase64"]));
    }
    if (m.find("RequireChallengeBase64") != m.end() && !m["RequireChallengeBase64"].empty()) {
      requireChallengeBase64 = make_shared<string>(boost::any_cast<string>(m["RequireChallengeBase64"]));
    }
    if (m.find("ServerExtendParamsJson") != m.end() && !m["ServerExtendParamsJson"].empty()) {
      serverExtendParamsJson = make_shared<string>(boost::any_cast<string>(m["ServerExtendParamsJson"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserSourceIp") != m.end() && !m["UserSourceIp"].empty()) {
      userSourceIp = make_shared<string>(boost::any_cast<string>(m["UserSourceIp"]));
    }
  }


  virtual ~VerifyUserAuthenticationRequest() = default;
};
class VerifyUserAuthenticationResponseBodyAuthenticateResultInfo : public Darabonba::Model {
public:
  shared_ptr<string> bindHashBase64{};
  shared_ptr<string> credentialId{};
  shared_ptr<string> userId{};

  VerifyUserAuthenticationResponseBodyAuthenticateResultInfo() {}

  explicit VerifyUserAuthenticationResponseBodyAuthenticateResultInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindHashBase64) {
      res["BindHashBase64"] = boost::any(*bindHashBase64);
    }
    if (credentialId) {
      res["CredentialId"] = boost::any(*credentialId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindHashBase64") != m.end() && !m["BindHashBase64"].empty()) {
      bindHashBase64 = make_shared<string>(boost::any_cast<string>(m["BindHashBase64"]));
    }
    if (m.find("CredentialId") != m.end() && !m["CredentialId"].empty()) {
      credentialId = make_shared<string>(boost::any_cast<string>(m["CredentialId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~VerifyUserAuthenticationResponseBodyAuthenticateResultInfo() = default;
};
class VerifyUserAuthenticationResponseBody : public Darabonba::Model {
public:
  shared_ptr<VerifyUserAuthenticationResponseBodyAuthenticateResultInfo> authenticateResultInfo{};
  shared_ptr<string> etasSDKString{};
  shared_ptr<string> idToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> verifyResult{};

  VerifyUserAuthenticationResponseBody() {}

  explicit VerifyUserAuthenticationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticateResultInfo) {
      res["AuthenticateResultInfo"] = authenticateResultInfo ? boost::any(authenticateResultInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (etasSDKString) {
      res["EtasSDKString"] = boost::any(*etasSDKString);
    }
    if (idToken) {
      res["IdToken"] = boost::any(*idToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifyResult) {
      res["VerifyResult"] = boost::any(*verifyResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticateResultInfo") != m.end() && !m["AuthenticateResultInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuthenticateResultInfo"].type()) {
        VerifyUserAuthenticationResponseBodyAuthenticateResultInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuthenticateResultInfo"]));
        authenticateResultInfo = make_shared<VerifyUserAuthenticationResponseBodyAuthenticateResultInfo>(model1);
      }
    }
    if (m.find("EtasSDKString") != m.end() && !m["EtasSDKString"].empty()) {
      etasSDKString = make_shared<string>(boost::any_cast<string>(m["EtasSDKString"]));
    }
    if (m.find("IdToken") != m.end() && !m["IdToken"].empty()) {
      idToken = make_shared<string>(boost::any_cast<string>(m["IdToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifyResult") != m.end() && !m["VerifyResult"].empty()) {
      verifyResult = make_shared<bool>(boost::any_cast<bool>(m["VerifyResult"]));
    }
  }


  virtual ~VerifyUserAuthenticationResponseBody() = default;
};
class VerifyUserAuthenticationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyUserAuthenticationResponseBody> body{};

  VerifyUserAuthenticationResponse() {}

  explicit VerifyUserAuthenticationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyUserAuthenticationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyUserAuthenticationResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyUserAuthenticationResponse() = default;
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
  CreateAuthenticatorRegistrationResponse createAuthenticatorRegistrationWithOptions(shared_ptr<CreateAuthenticatorRegistrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAuthenticatorRegistrationResponse createAuthenticatorRegistration(shared_ptr<CreateAuthenticatorRegistrationRequest> request);
  CreateUserAuthenticateOptionsResponse createUserAuthenticateOptionsWithOptions(shared_ptr<CreateUserAuthenticateOptionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserAuthenticateOptionsResponse createUserAuthenticateOptions(shared_ptr<CreateUserAuthenticateOptionsRequest> request);
  DeregisterAuthenticatorResponse deregisterAuthenticatorWithOptions(shared_ptr<DeregisterAuthenticatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeregisterAuthenticatorResponse deregisterAuthenticator(shared_ptr<DeregisterAuthenticatorRequest> request);
  FetchAccessTokenResponse fetchAccessTokenWithOptions(shared_ptr<FetchAccessTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FetchAccessTokenResponse fetchAccessToken(shared_ptr<FetchAccessTokenRequest> request);
  GetAuthenticatorResponse getAuthenticatorWithOptions(shared_ptr<GetAuthenticatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuthenticatorResponse getAuthenticator(shared_ptr<GetAuthenticatorRequest> request);
  ListAuthenticationLogsResponse listAuthenticationLogsWithOptions(shared_ptr<ListAuthenticationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAuthenticationLogsResponse listAuthenticationLogs(shared_ptr<ListAuthenticationLogsRequest> request);
  ListAuthenticatorOpsLogsResponse listAuthenticatorOpsLogsWithOptions(shared_ptr<ListAuthenticatorOpsLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAuthenticatorOpsLogsResponse listAuthenticatorOpsLogs(shared_ptr<ListAuthenticatorOpsLogsRequest> request);
  ListAuthenticatorsResponse listAuthenticatorsWithOptions(shared_ptr<ListAuthenticatorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAuthenticatorsResponse listAuthenticators(shared_ptr<ListAuthenticatorsRequest> request);
  ListCostUnitOrdersResponse listCostUnitOrdersWithOptions(shared_ptr<ListCostUnitOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCostUnitOrdersResponse listCostUnitOrders(shared_ptr<ListCostUnitOrdersRequest> request);
  ListOrderConsumeStatisticRecordsResponse listOrderConsumeStatisticRecordsWithOptions(shared_ptr<ListOrderConsumeStatisticRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrderConsumeStatisticRecordsResponse listOrderConsumeStatisticRecords(shared_ptr<ListOrderConsumeStatisticRecordsRequest> request);
  ListPwnedPasswordsResponse listPwnedPasswordsWithOptions(shared_ptr<ListPwnedPasswordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPwnedPasswordsResponse listPwnedPasswords(shared_ptr<ListPwnedPasswordsRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  QuerySmsReportsResponse querySmsReportsWithOptions(shared_ptr<QuerySmsReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySmsReportsResponse querySmsReports(shared_ptr<QuerySmsReportsRequest> request);
  QuerySmsUpsResponse querySmsUpsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySmsUpsResponse querySmsUps();
  RegisterAuthenticatorResponse registerAuthenticatorWithOptions(shared_ptr<RegisterAuthenticatorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterAuthenticatorResponse registerAuthenticator(shared_ptr<RegisterAuthenticatorRequest> request);
  ServiceInvokeResponse serviceInvokeWithOptions(shared_ptr<ServiceInvokeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ServiceInvokeResponse serviceInvoke(shared_ptr<ServiceInvokeRequest> request);
  UpdateAuthenticatorAttributeResponse updateAuthenticatorAttributeWithOptions(shared_ptr<UpdateAuthenticatorAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAuthenticatorAttributeResponse updateAuthenticatorAttribute(shared_ptr<UpdateAuthenticatorAttributeRequest> request);
  VerifyIdTokenResponse verifyIdTokenWithOptions(shared_ptr<VerifyIdTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyIdTokenResponse verifyIdToken(shared_ptr<VerifyIdTokenRequest> request);
  VerifyUserAuthenticationResponse verifyUserAuthenticationWithOptions(shared_ptr<VerifyUserAuthenticationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyUserAuthenticationResponse verifyUserAuthentication(shared_ptr<VerifyUserAuthenticationRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Idaas-doraemon20210520

#endif
