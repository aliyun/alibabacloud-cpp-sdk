// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_STS20150401_H_
#define ALIBABACLOUD_STS20150401_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Sts20150401 {
class AssumeRoleRequest : public Darabonba::Model {
public:
  shared_ptr<long> durationSeconds{};
  shared_ptr<string> policy{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> roleSessionName{};

  AssumeRoleRequest() {}

  explicit AssumeRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSeconds) {
      res["DurationSeconds"] = boost::any(*durationSeconds);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (roleSessionName) {
      res["RoleSessionName"] = boost::any(*roleSessionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DurationSeconds") != m.end() && !m["DurationSeconds"].empty()) {
      durationSeconds = make_shared<long>(boost::any_cast<long>(m["DurationSeconds"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("RoleSessionName") != m.end() && !m["RoleSessionName"].empty()) {
      roleSessionName = make_shared<string>(boost::any_cast<string>(m["RoleSessionName"]));
    }
  }


  virtual ~AssumeRoleRequest() = default;
};
class AssumeRoleResponseBodyAssumedRoleUser : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> assumedRoleId{};

  AssumeRoleResponseBodyAssumedRoleUser() {}

  explicit AssumeRoleResponseBodyAssumedRoleUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (assumedRoleId) {
      res["AssumedRoleId"] = boost::any(*assumedRoleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AssumedRoleId") != m.end() && !m["AssumedRoleId"].empty()) {
      assumedRoleId = make_shared<string>(boost::any_cast<string>(m["AssumedRoleId"]));
    }
  }


  virtual ~AssumeRoleResponseBodyAssumedRoleUser() = default;
};
class AssumeRoleResponseBodyCredentials : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> expiration{};
  shared_ptr<string> securityToken{};

  AssumeRoleResponseBodyCredentials() {}

  explicit AssumeRoleResponseBodyCredentials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~AssumeRoleResponseBodyCredentials() = default;
};
class AssumeRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<AssumeRoleResponseBodyAssumedRoleUser> assumedRoleUser{};
  shared_ptr<AssumeRoleResponseBodyCredentials> credentials{};
  shared_ptr<string> requestId{};

  AssumeRoleResponseBody() {}

  explicit AssumeRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumedRoleUser) {
      res["AssumedRoleUser"] = assumedRoleUser ? boost::any(assumedRoleUser->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (credentials) {
      res["Credentials"] = credentials ? boost::any(credentials->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumedRoleUser") != m.end() && !m["AssumedRoleUser"].empty()) {
      if (typeid(map<string, boost::any>) == m["AssumedRoleUser"].type()) {
        AssumeRoleResponseBodyAssumedRoleUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AssumedRoleUser"]));
        assumedRoleUser = make_shared<AssumeRoleResponseBodyAssumedRoleUser>(model1);
      }
    }
    if (m.find("Credentials") != m.end() && !m["Credentials"].empty()) {
      if (typeid(map<string, boost::any>) == m["Credentials"].type()) {
        AssumeRoleResponseBodyCredentials model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Credentials"]));
        credentials = make_shared<AssumeRoleResponseBodyCredentials>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AssumeRoleResponseBody() = default;
};
class AssumeRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssumeRoleResponseBody> body{};

  AssumeRoleResponse() {}

  explicit AssumeRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssumeRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssumeRoleResponseBody>(model1);
      }
    }
  }


  virtual ~AssumeRoleResponse() = default;
};
class AssumeRoleWithOIDCRequest : public Darabonba::Model {
public:
  shared_ptr<long> durationSeconds{};
  shared_ptr<string> OIDCProviderArn{};
  shared_ptr<string> OIDCToken{};
  shared_ptr<string> policy{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> roleSessionName{};

  AssumeRoleWithOIDCRequest() {}

  explicit AssumeRoleWithOIDCRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSeconds) {
      res["DurationSeconds"] = boost::any(*durationSeconds);
    }
    if (OIDCProviderArn) {
      res["OIDCProviderArn"] = boost::any(*OIDCProviderArn);
    }
    if (OIDCToken) {
      res["OIDCToken"] = boost::any(*OIDCToken);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (roleSessionName) {
      res["RoleSessionName"] = boost::any(*roleSessionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DurationSeconds") != m.end() && !m["DurationSeconds"].empty()) {
      durationSeconds = make_shared<long>(boost::any_cast<long>(m["DurationSeconds"]));
    }
    if (m.find("OIDCProviderArn") != m.end() && !m["OIDCProviderArn"].empty()) {
      OIDCProviderArn = make_shared<string>(boost::any_cast<string>(m["OIDCProviderArn"]));
    }
    if (m.find("OIDCToken") != m.end() && !m["OIDCToken"].empty()) {
      OIDCToken = make_shared<string>(boost::any_cast<string>(m["OIDCToken"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("RoleSessionName") != m.end() && !m["RoleSessionName"].empty()) {
      roleSessionName = make_shared<string>(boost::any_cast<string>(m["RoleSessionName"]));
    }
  }


  virtual ~AssumeRoleWithOIDCRequest() = default;
};
class AssumeRoleWithOIDCResponseBodyAssumedRoleUser : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> assumedRoleId{};

  AssumeRoleWithOIDCResponseBodyAssumedRoleUser() {}

  explicit AssumeRoleWithOIDCResponseBodyAssumedRoleUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (assumedRoleId) {
      res["AssumedRoleId"] = boost::any(*assumedRoleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AssumedRoleId") != m.end() && !m["AssumedRoleId"].empty()) {
      assumedRoleId = make_shared<string>(boost::any_cast<string>(m["AssumedRoleId"]));
    }
  }


  virtual ~AssumeRoleWithOIDCResponseBodyAssumedRoleUser() = default;
};
class AssumeRoleWithOIDCResponseBodyCredentials : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> expiration{};
  shared_ptr<string> securityToken{};

  AssumeRoleWithOIDCResponseBodyCredentials() {}

  explicit AssumeRoleWithOIDCResponseBodyCredentials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~AssumeRoleWithOIDCResponseBodyCredentials() = default;
};
class AssumeRoleWithOIDCResponseBodyOIDCTokenInfo : public Darabonba::Model {
public:
  shared_ptr<string> clientIds{};
  shared_ptr<string> issuer{};
  shared_ptr<string> subject{};

  AssumeRoleWithOIDCResponseBodyOIDCTokenInfo() {}

  explicit AssumeRoleWithOIDCResponseBodyOIDCTokenInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIds = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
  }


  virtual ~AssumeRoleWithOIDCResponseBodyOIDCTokenInfo() = default;
};
class AssumeRoleWithOIDCResponseBody : public Darabonba::Model {
public:
  shared_ptr<AssumeRoleWithOIDCResponseBodyAssumedRoleUser> assumedRoleUser{};
  shared_ptr<AssumeRoleWithOIDCResponseBodyCredentials> credentials{};
  shared_ptr<AssumeRoleWithOIDCResponseBodyOIDCTokenInfo> OIDCTokenInfo{};
  shared_ptr<string> requestId{};

  AssumeRoleWithOIDCResponseBody() {}

  explicit AssumeRoleWithOIDCResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumedRoleUser) {
      res["AssumedRoleUser"] = assumedRoleUser ? boost::any(assumedRoleUser->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (credentials) {
      res["Credentials"] = credentials ? boost::any(credentials->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (OIDCTokenInfo) {
      res["OIDCTokenInfo"] = OIDCTokenInfo ? boost::any(OIDCTokenInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumedRoleUser") != m.end() && !m["AssumedRoleUser"].empty()) {
      if (typeid(map<string, boost::any>) == m["AssumedRoleUser"].type()) {
        AssumeRoleWithOIDCResponseBodyAssumedRoleUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AssumedRoleUser"]));
        assumedRoleUser = make_shared<AssumeRoleWithOIDCResponseBodyAssumedRoleUser>(model1);
      }
    }
    if (m.find("Credentials") != m.end() && !m["Credentials"].empty()) {
      if (typeid(map<string, boost::any>) == m["Credentials"].type()) {
        AssumeRoleWithOIDCResponseBodyCredentials model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Credentials"]));
        credentials = make_shared<AssumeRoleWithOIDCResponseBodyCredentials>(model1);
      }
    }
    if (m.find("OIDCTokenInfo") != m.end() && !m["OIDCTokenInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OIDCTokenInfo"].type()) {
        AssumeRoleWithOIDCResponseBodyOIDCTokenInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OIDCTokenInfo"]));
        OIDCTokenInfo = make_shared<AssumeRoleWithOIDCResponseBodyOIDCTokenInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AssumeRoleWithOIDCResponseBody() = default;
};
class AssumeRoleWithOIDCResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssumeRoleWithOIDCResponseBody> body{};

  AssumeRoleWithOIDCResponse() {}

  explicit AssumeRoleWithOIDCResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssumeRoleWithOIDCResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssumeRoleWithOIDCResponseBody>(model1);
      }
    }
  }


  virtual ~AssumeRoleWithOIDCResponse() = default;
};
class AssumeRoleWithSAMLRequest : public Darabonba::Model {
public:
  shared_ptr<long> durationSeconds{};
  shared_ptr<string> policy{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> SAMLAssertion{};
  shared_ptr<string> SAMLProviderArn{};

  AssumeRoleWithSAMLRequest() {}

  explicit AssumeRoleWithSAMLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (durationSeconds) {
      res["DurationSeconds"] = boost::any(*durationSeconds);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (SAMLAssertion) {
      res["SAMLAssertion"] = boost::any(*SAMLAssertion);
    }
    if (SAMLProviderArn) {
      res["SAMLProviderArn"] = boost::any(*SAMLProviderArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DurationSeconds") != m.end() && !m["DurationSeconds"].empty()) {
      durationSeconds = make_shared<long>(boost::any_cast<long>(m["DurationSeconds"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("SAMLAssertion") != m.end() && !m["SAMLAssertion"].empty()) {
      SAMLAssertion = make_shared<string>(boost::any_cast<string>(m["SAMLAssertion"]));
    }
    if (m.find("SAMLProviderArn") != m.end() && !m["SAMLProviderArn"].empty()) {
      SAMLProviderArn = make_shared<string>(boost::any_cast<string>(m["SAMLProviderArn"]));
    }
  }


  virtual ~AssumeRoleWithSAMLRequest() = default;
};
class AssumeRoleWithSAMLResponseBodyAssumedRoleUser : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> assumedRoleId{};

  AssumeRoleWithSAMLResponseBodyAssumedRoleUser() {}

  explicit AssumeRoleWithSAMLResponseBodyAssumedRoleUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (assumedRoleId) {
      res["AssumedRoleId"] = boost::any(*assumedRoleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AssumedRoleId") != m.end() && !m["AssumedRoleId"].empty()) {
      assumedRoleId = make_shared<string>(boost::any_cast<string>(m["AssumedRoleId"]));
    }
  }


  virtual ~AssumeRoleWithSAMLResponseBodyAssumedRoleUser() = default;
};
class AssumeRoleWithSAMLResponseBodyCredentials : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> expiration{};
  shared_ptr<string> securityToken{};

  AssumeRoleWithSAMLResponseBodyCredentials() {}

  explicit AssumeRoleWithSAMLResponseBodyCredentials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~AssumeRoleWithSAMLResponseBodyCredentials() = default;
};
class AssumeRoleWithSAMLResponseBodySAMLAssertionInfo : public Darabonba::Model {
public:
  shared_ptr<string> issuer{};
  shared_ptr<string> recipient{};
  shared_ptr<string> subject{};
  shared_ptr<string> subjectType{};

  AssumeRoleWithSAMLResponseBodySAMLAssertionInfo() {}

  explicit AssumeRoleWithSAMLResponseBodySAMLAssertionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (recipient) {
      res["Recipient"] = boost::any(*recipient);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (subjectType) {
      res["SubjectType"] = boost::any(*subjectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("Recipient") != m.end() && !m["Recipient"].empty()) {
      recipient = make_shared<string>(boost::any_cast<string>(m["Recipient"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("SubjectType") != m.end() && !m["SubjectType"].empty()) {
      subjectType = make_shared<string>(boost::any_cast<string>(m["SubjectType"]));
    }
  }


  virtual ~AssumeRoleWithSAMLResponseBodySAMLAssertionInfo() = default;
};
class AssumeRoleWithSAMLResponseBody : public Darabonba::Model {
public:
  shared_ptr<AssumeRoleWithSAMLResponseBodyAssumedRoleUser> assumedRoleUser{};
  shared_ptr<AssumeRoleWithSAMLResponseBodyCredentials> credentials{};
  shared_ptr<string> requestId{};
  shared_ptr<AssumeRoleWithSAMLResponseBodySAMLAssertionInfo> SAMLAssertionInfo{};

  AssumeRoleWithSAMLResponseBody() {}

  explicit AssumeRoleWithSAMLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumedRoleUser) {
      res["AssumedRoleUser"] = assumedRoleUser ? boost::any(assumedRoleUser->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (credentials) {
      res["Credentials"] = credentials ? boost::any(credentials->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SAMLAssertionInfo) {
      res["SAMLAssertionInfo"] = SAMLAssertionInfo ? boost::any(SAMLAssertionInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumedRoleUser") != m.end() && !m["AssumedRoleUser"].empty()) {
      if (typeid(map<string, boost::any>) == m["AssumedRoleUser"].type()) {
        AssumeRoleWithSAMLResponseBodyAssumedRoleUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AssumedRoleUser"]));
        assumedRoleUser = make_shared<AssumeRoleWithSAMLResponseBodyAssumedRoleUser>(model1);
      }
    }
    if (m.find("Credentials") != m.end() && !m["Credentials"].empty()) {
      if (typeid(map<string, boost::any>) == m["Credentials"].type()) {
        AssumeRoleWithSAMLResponseBodyCredentials model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Credentials"]));
        credentials = make_shared<AssumeRoleWithSAMLResponseBodyCredentials>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SAMLAssertionInfo") != m.end() && !m["SAMLAssertionInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SAMLAssertionInfo"].type()) {
        AssumeRoleWithSAMLResponseBodySAMLAssertionInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SAMLAssertionInfo"]));
        SAMLAssertionInfo = make_shared<AssumeRoleWithSAMLResponseBodySAMLAssertionInfo>(model1);
      }
    }
  }


  virtual ~AssumeRoleWithSAMLResponseBody() = default;
};
class AssumeRoleWithSAMLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssumeRoleWithSAMLResponseBody> body{};

  AssumeRoleWithSAMLResponse() {}

  explicit AssumeRoleWithSAMLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssumeRoleWithSAMLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssumeRoleWithSAMLResponseBody>(model1);
      }
    }
  }


  virtual ~AssumeRoleWithSAMLResponse() = default;
};
class GetCallerIdentityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> arn{};
  shared_ptr<string> identityType{};
  shared_ptr<string> principalId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleId{};
  shared_ptr<string> userId{};

  GetCallerIdentityResponseBody() {}

  explicit GetCallerIdentityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (identityType) {
      res["IdentityType"] = boost::any(*identityType);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("IdentityType") != m.end() && !m["IdentityType"].empty()) {
      identityType = make_shared<string>(boost::any_cast<string>(m["IdentityType"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetCallerIdentityResponseBody() = default;
};
class GetCallerIdentityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCallerIdentityResponseBody> body{};

  GetCallerIdentityResponse() {}

  explicit GetCallerIdentityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCallerIdentityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCallerIdentityResponseBody>(model1);
      }
    }
  }


  virtual ~GetCallerIdentityResponse() = default;
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
  AssumeRoleResponse assumeRoleWithOptions(shared_ptr<AssumeRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssumeRoleResponse assumeRole(shared_ptr<AssumeRoleRequest> request);
  AssumeRoleWithOIDCResponse assumeRoleWithOIDCWithOptions(shared_ptr<AssumeRoleWithOIDCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssumeRoleWithOIDCResponse assumeRoleWithOIDC(shared_ptr<AssumeRoleWithOIDCRequest> request);
  AssumeRoleWithSAMLResponse assumeRoleWithSAMLWithOptions(shared_ptr<AssumeRoleWithSAMLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssumeRoleWithSAMLResponse assumeRoleWithSAML(shared_ptr<AssumeRoleWithSAMLRequest> request);
  GetCallerIdentityResponse getCallerIdentityWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCallerIdentityResponse getCallerIdentity();

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Sts20150401

#endif
