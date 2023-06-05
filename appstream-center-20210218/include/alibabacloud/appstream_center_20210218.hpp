// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_APPSTREAM-CENTER20210218_H_
#define ALIBABACLOUD_APPSTREAM-CENTER20210218_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Appstream-center20210218 {
class ExpireLoginTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> sessionId{};

  ExpireLoginTokenRequest() {}

  explicit ExpireLoginTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~ExpireLoginTokenRequest() = default;
};
class ExpireLoginTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ExpireLoginTokenResponseBody() {}

  explicit ExpireLoginTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExpireLoginTokenResponseBody() = default;
};
class ExpireLoginTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExpireLoginTokenResponseBody> body{};

  ExpireLoginTokenResponse() {}

  explicit ExpireLoginTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExpireLoginTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExpireLoginTokenResponseBody>(model1);
      }
    }
  }


  virtual ~ExpireLoginTokenResponse() = default;
};
class GetAuthCodeRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreateUser{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> externalUserId{};
  shared_ptr<string> policy{};

  GetAuthCodeRequest() {}

  explicit GetAuthCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreateUser) {
      res["AutoCreateUser"] = boost::any(*autoCreateUser);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (externalUserId) {
      res["ExternalUserId"] = boost::any(*externalUserId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreateUser") != m.end() && !m["AutoCreateUser"].empty()) {
      autoCreateUser = make_shared<bool>(boost::any_cast<bool>(m["AutoCreateUser"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ExternalUserId") != m.end() && !m["ExternalUserId"].empty()) {
      externalUserId = make_shared<string>(boost::any_cast<string>(m["ExternalUserId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
  }


  virtual ~GetAuthCodeRequest() = default;
};
class GetAuthCodeResponseBodyAuthModel : public Darabonba::Model {
public:
  shared_ptr<string> authCode{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> expireTime{};

  GetAuthCodeResponseBodyAuthModel() {}

  explicit GetAuthCodeResponseBodyAuthModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authCode) {
      res["AuthCode"] = boost::any(*authCode);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthCode") != m.end() && !m["AuthCode"].empty()) {
      authCode = make_shared<string>(boost::any_cast<string>(m["AuthCode"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
  }


  virtual ~GetAuthCodeResponseBodyAuthModel() = default;
};
class GetAuthCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAuthCodeResponseBodyAuthModel> authModel{};
  shared_ptr<string> requestId{};

  GetAuthCodeResponseBody() {}

  explicit GetAuthCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authModel) {
      res["AuthModel"] = authModel ? boost::any(authModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthModel") != m.end() && !m["AuthModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuthModel"].type()) {
        GetAuthCodeResponseBodyAuthModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuthModel"]));
        authModel = make_shared<GetAuthCodeResponseBodyAuthModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAuthCodeResponseBody() = default;
};
class GetAuthCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAuthCodeResponseBody> body{};

  GetAuthCodeResponse() {}

  explicit GetAuthCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuthCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuthCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuthCodeResponse() = default;
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
  ExpireLoginTokenResponse expireLoginTokenWithOptions(shared_ptr<ExpireLoginTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExpireLoginTokenResponse expireLoginToken(shared_ptr<ExpireLoginTokenRequest> request);
  GetAuthCodeResponse getAuthCodeWithOptions(shared_ptr<GetAuthCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuthCodeResponse getAuthCode(shared_ptr<GetAuthCodeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Appstream-center20210218

#endif
