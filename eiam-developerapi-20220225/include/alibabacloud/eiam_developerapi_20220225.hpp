// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EIAM-DEVELOPERAPI20220225_H_
#define ALIBABACLOUD_EIAM-DEVELOPERAPI20220225_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eiam-developerapi20220225 {
class AddUserToOrganizationalUnitsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  AddUserToOrganizationalUnitsHeaders() {}

  explicit AddUserToOrganizationalUnitsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~AddUserToOrganizationalUnitsHeaders() = default;
};
class AddUserToOrganizationalUnitsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> organizationalUnitIds{};

  AddUserToOrganizationalUnitsRequest() {}

  explicit AddUserToOrganizationalUnitsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnitIds) {
      res["organizationalUnitIds"] = boost::any(*organizationalUnitIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("organizationalUnitIds") != m.end() && !m["organizationalUnitIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["organizationalUnitIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["organizationalUnitIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      organizationalUnitIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddUserToOrganizationalUnitsRequest() = default;
};
class AddUserToOrganizationalUnitsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  AddUserToOrganizationalUnitsResponse() {}

  explicit AddUserToOrganizationalUnitsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~AddUserToOrganizationalUnitsResponse() = default;
};
class CreateOrganizationalUnitHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  CreateOrganizationalUnitHeaders() {}

  explicit CreateOrganizationalUnitHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~CreateOrganizationalUnitHeaders() = default;
};
class CreateOrganizationalUnitRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> organizationalUnitExternalId{};
  shared_ptr<string> organizationalUnitName{};
  shared_ptr<string> parentId{};

  CreateOrganizationalUnitRequest() {}

  explicit CreateOrganizationalUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (organizationalUnitExternalId) {
      res["organizationalUnitExternalId"] = boost::any(*organizationalUnitExternalId);
    }
    if (organizationalUnitName) {
      res["organizationalUnitName"] = boost::any(*organizationalUnitName);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("organizationalUnitExternalId") != m.end() && !m["organizationalUnitExternalId"].empty()) {
      organizationalUnitExternalId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitExternalId"]));
    }
    if (m.find("organizationalUnitName") != m.end() && !m["organizationalUnitName"].empty()) {
      organizationalUnitName = make_shared<string>(boost::any_cast<string>(m["organizationalUnitName"]));
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
  }


  virtual ~CreateOrganizationalUnitRequest() = default;
};
class CreateOrganizationalUnitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> organizationalUnitId{};

  CreateOrganizationalUnitResponseBody() {}

  explicit CreateOrganizationalUnitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnitId) {
      res["organizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("organizationalUnitId") != m.end() && !m["organizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitId"]));
    }
  }


  virtual ~CreateOrganizationalUnitResponseBody() = default;
};
class CreateOrganizationalUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateOrganizationalUnitResponseBody> body{};

  CreateOrganizationalUnitResponse() {}

  explicit CreateOrganizationalUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOrganizationalUnitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOrganizationalUnitResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOrganizationalUnitResponse() = default;
};
class CreateUserHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  CreateUserHeaders() {}

  explicit CreateUserHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~CreateUserHeaders() = default;
};
class CreateUserRequestCustomFields : public Darabonba::Model {
public:
  shared_ptr<string> fieldName{};
  shared_ptr<string> fieldValue{};

  CreateUserRequestCustomFields() {}

  explicit CreateUserRequestCustomFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldName) {
      res["fieldName"] = boost::any(*fieldName);
    }
    if (fieldValue) {
      res["fieldValue"] = boost::any(*fieldValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fieldName") != m.end() && !m["fieldName"].empty()) {
      fieldName = make_shared<string>(boost::any_cast<string>(m["fieldName"]));
    }
    if (m.find("fieldValue") != m.end() && !m["fieldValue"].empty()) {
      fieldValue = make_shared<string>(boost::any_cast<string>(m["fieldValue"]));
    }
  }


  virtual ~CreateUserRequestCustomFields() = default;
};
class CreateUserRequestPasswordInitializationConfig : public Darabonba::Model {
public:
  shared_ptr<string> passwordForcedUpdateStatus{};
  shared_ptr<string> passwordInitializationPolicyPriority{};
  shared_ptr<string> passwordInitializationType{};
  shared_ptr<vector<string>> userNotificationChannels{};

  CreateUserRequestPasswordInitializationConfig() {}

  explicit CreateUserRequestPasswordInitializationConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordForcedUpdateStatus) {
      res["passwordForcedUpdateStatus"] = boost::any(*passwordForcedUpdateStatus);
    }
    if (passwordInitializationPolicyPriority) {
      res["passwordInitializationPolicyPriority"] = boost::any(*passwordInitializationPolicyPriority);
    }
    if (passwordInitializationType) {
      res["passwordInitializationType"] = boost::any(*passwordInitializationType);
    }
    if (userNotificationChannels) {
      res["userNotificationChannels"] = boost::any(*userNotificationChannels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("passwordForcedUpdateStatus") != m.end() && !m["passwordForcedUpdateStatus"].empty()) {
      passwordForcedUpdateStatus = make_shared<string>(boost::any_cast<string>(m["passwordForcedUpdateStatus"]));
    }
    if (m.find("passwordInitializationPolicyPriority") != m.end() && !m["passwordInitializationPolicyPriority"].empty()) {
      passwordInitializationPolicyPriority = make_shared<string>(boost::any_cast<string>(m["passwordInitializationPolicyPriority"]));
    }
    if (m.find("passwordInitializationType") != m.end() && !m["passwordInitializationType"].empty()) {
      passwordInitializationType = make_shared<string>(boost::any_cast<string>(m["passwordInitializationType"]));
    }
    if (m.find("userNotificationChannels") != m.end() && !m["userNotificationChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["userNotificationChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["userNotificationChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userNotificationChannels = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateUserRequestPasswordInitializationConfig() = default;
};
class CreateUserRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateUserRequestCustomFields>> customFields{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<bool> emailVerified{};
  shared_ptr<string> password{};
  shared_ptr<CreateUserRequestPasswordInitializationConfig> passwordInitializationConfig{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<bool> phoneNumberVerified{};
  shared_ptr<string> phoneRegion{};
  shared_ptr<string> primaryOrganizationalUnitId{};
  shared_ptr<string> userExternalId{};
  shared_ptr<string> username{};

  CreateUserRequest() {}

  explicit CreateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customFields) {
      vector<boost::any> temp1;
      for(auto item1:*customFields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customFields"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (emailVerified) {
      res["emailVerified"] = boost::any(*emailVerified);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (passwordInitializationConfig) {
      res["passwordInitializationConfig"] = passwordInitializationConfig ? boost::any(passwordInitializationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (phoneNumber) {
      res["phoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneNumberVerified) {
      res["phoneNumberVerified"] = boost::any(*phoneNumberVerified);
    }
    if (phoneRegion) {
      res["phoneRegion"] = boost::any(*phoneRegion);
    }
    if (primaryOrganizationalUnitId) {
      res["primaryOrganizationalUnitId"] = boost::any(*primaryOrganizationalUnitId);
    }
    if (userExternalId) {
      res["userExternalId"] = boost::any(*userExternalId);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customFields") != m.end() && !m["customFields"].empty()) {
      if (typeid(vector<boost::any>) == m["customFields"].type()) {
        vector<CreateUserRequestCustomFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customFields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateUserRequestCustomFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customFields = make_shared<vector<CreateUserRequestCustomFields>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("emailVerified") != m.end() && !m["emailVerified"].empty()) {
      emailVerified = make_shared<bool>(boost::any_cast<bool>(m["emailVerified"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("passwordInitializationConfig") != m.end() && !m["passwordInitializationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["passwordInitializationConfig"].type()) {
        CreateUserRequestPasswordInitializationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["passwordInitializationConfig"]));
        passwordInitializationConfig = make_shared<CreateUserRequestPasswordInitializationConfig>(model1);
      }
    }
    if (m.find("phoneNumber") != m.end() && !m["phoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["phoneNumber"]));
    }
    if (m.find("phoneNumberVerified") != m.end() && !m["phoneNumberVerified"].empty()) {
      phoneNumberVerified = make_shared<bool>(boost::any_cast<bool>(m["phoneNumberVerified"]));
    }
    if (m.find("phoneRegion") != m.end() && !m["phoneRegion"].empty()) {
      phoneRegion = make_shared<string>(boost::any_cast<string>(m["phoneRegion"]));
    }
    if (m.find("primaryOrganizationalUnitId") != m.end() && !m["primaryOrganizationalUnitId"].empty()) {
      primaryOrganizationalUnitId = make_shared<string>(boost::any_cast<string>(m["primaryOrganizationalUnitId"]));
    }
    if (m.find("userExternalId") != m.end() && !m["userExternalId"].empty()) {
      userExternalId = make_shared<string>(boost::any_cast<string>(m["userExternalId"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~CreateUserRequest() = default;
};
class CreateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  CreateUserResponseBody() {}

  explicit CreateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~CreateUserResponseBody() = default;
};
class CreateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserResponseBody> body{};

  CreateUserResponse() {}

  explicit CreateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserResponse() = default;
};
class DeleteOrganizationalUnitHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  DeleteOrganizationalUnitHeaders() {}

  explicit DeleteOrganizationalUnitHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~DeleteOrganizationalUnitHeaders() = default;
};
class DeleteOrganizationalUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteOrganizationalUnitResponse() {}

  explicit DeleteOrganizationalUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteOrganizationalUnitResponse() = default;
};
class DeleteUserHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  DeleteUserHeaders() {}

  explicit DeleteUserHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~DeleteUserHeaders() = default;
};
class DeleteUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DeleteUserResponse() {}

  explicit DeleteUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DeleteUserResponse() = default;
};
class DisableUserHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  DisableUserHeaders() {}

  explicit DisableUserHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~DisableUserHeaders() = default;
};
class DisableUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  DisableUserResponse() {}

  explicit DisableUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~DisableUserResponse() = default;
};
class EnableUserHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  EnableUserHeaders() {}

  explicit EnableUserHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~EnableUserHeaders() = default;
};
class EnableUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  EnableUserResponse() {}

  explicit EnableUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~EnableUserResponse() = default;
};
class GenerateDeviceCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> scope{};

  GenerateDeviceCodeRequest() {}

  explicit GenerateDeviceCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
  }


  virtual ~GenerateDeviceCodeRequest() = default;
};
class GenerateDeviceCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> deviceCode{};
  shared_ptr<long> expiresAt{};
  shared_ptr<long> expiresIn{};
  shared_ptr<long> interval{};
  shared_ptr<string> userCode{};
  shared_ptr<string> verificationUri{};
  shared_ptr<string> verificationUriComplete{};

  GenerateDeviceCodeResponseBody() {}

  explicit GenerateDeviceCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceCode) {
      res["device_code"] = boost::any(*deviceCode);
    }
    if (expiresAt) {
      res["expires_at"] = boost::any(*expiresAt);
    }
    if (expiresIn) {
      res["expires_in"] = boost::any(*expiresIn);
    }
    if (interval) {
      res["interval"] = boost::any(*interval);
    }
    if (userCode) {
      res["user_code"] = boost::any(*userCode);
    }
    if (verificationUri) {
      res["verification_uri"] = boost::any(*verificationUri);
    }
    if (verificationUriComplete) {
      res["verification_uri_complete"] = boost::any(*verificationUriComplete);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("device_code") != m.end() && !m["device_code"].empty()) {
      deviceCode = make_shared<string>(boost::any_cast<string>(m["device_code"]));
    }
    if (m.find("expires_at") != m.end() && !m["expires_at"].empty()) {
      expiresAt = make_shared<long>(boost::any_cast<long>(m["expires_at"]));
    }
    if (m.find("expires_in") != m.end() && !m["expires_in"].empty()) {
      expiresIn = make_shared<long>(boost::any_cast<long>(m["expires_in"]));
    }
    if (m.find("interval") != m.end() && !m["interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["interval"]));
    }
    if (m.find("user_code") != m.end() && !m["user_code"].empty()) {
      userCode = make_shared<string>(boost::any_cast<string>(m["user_code"]));
    }
    if (m.find("verification_uri") != m.end() && !m["verification_uri"].empty()) {
      verificationUri = make_shared<string>(boost::any_cast<string>(m["verification_uri"]));
    }
    if (m.find("verification_uri_complete") != m.end() && !m["verification_uri_complete"].empty()) {
      verificationUriComplete = make_shared<string>(boost::any_cast<string>(m["verification_uri_complete"]));
    }
  }


  virtual ~GenerateDeviceCodeResponseBody() = default;
};
class GenerateDeviceCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateDeviceCodeResponseBody> body{};

  GenerateDeviceCodeResponse() {}

  explicit GenerateDeviceCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateDeviceCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateDeviceCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateDeviceCodeResponse() = default;
};
class GenerateTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientSecret{};
  shared_ptr<string> code{};
  shared_ptr<string> codeVerifier{};
  shared_ptr<string> deviceCode{};
  shared_ptr<string> exclusiveTag{};
  shared_ptr<string> grantType{};
  shared_ptr<string> password{};
  shared_ptr<string> redirectUri{};
  shared_ptr<string> refreshToken{};
  shared_ptr<string> scope{};
  shared_ptr<string> username{};

  GenerateTokenRequest() {}

  explicit GenerateTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["client_id"] = boost::any(*clientId);
    }
    if (clientSecret) {
      res["client_secret"] = boost::any(*clientSecret);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (codeVerifier) {
      res["code_verifier"] = boost::any(*codeVerifier);
    }
    if (deviceCode) {
      res["device_code"] = boost::any(*deviceCode);
    }
    if (exclusiveTag) {
      res["exclusive_tag"] = boost::any(*exclusiveTag);
    }
    if (grantType) {
      res["grant_type"] = boost::any(*grantType);
    }
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (redirectUri) {
      res["redirect_uri"] = boost::any(*redirectUri);
    }
    if (refreshToken) {
      res["refresh_token"] = boost::any(*refreshToken);
    }
    if (scope) {
      res["scope"] = boost::any(*scope);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("client_id") != m.end() && !m["client_id"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["client_id"]));
    }
    if (m.find("client_secret") != m.end() && !m["client_secret"].empty()) {
      clientSecret = make_shared<string>(boost::any_cast<string>(m["client_secret"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("code_verifier") != m.end() && !m["code_verifier"].empty()) {
      codeVerifier = make_shared<string>(boost::any_cast<string>(m["code_verifier"]));
    }
    if (m.find("device_code") != m.end() && !m["device_code"].empty()) {
      deviceCode = make_shared<string>(boost::any_cast<string>(m["device_code"]));
    }
    if (m.find("exclusive_tag") != m.end() && !m["exclusive_tag"].empty()) {
      exclusiveTag = make_shared<string>(boost::any_cast<string>(m["exclusive_tag"]));
    }
    if (m.find("grant_type") != m.end() && !m["grant_type"].empty()) {
      grantType = make_shared<string>(boost::any_cast<string>(m["grant_type"]));
    }
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("redirect_uri") != m.end() && !m["redirect_uri"].empty()) {
      redirectUri = make_shared<string>(boost::any_cast<string>(m["redirect_uri"]));
    }
    if (m.find("refresh_token") != m.end() && !m["refresh_token"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["refresh_token"]));
    }
    if (m.find("scope") != m.end() && !m["scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["scope"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~GenerateTokenRequest() = default;
};
class GenerateTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<long> expiresAt{};
  shared_ptr<long> expiresIn{};
  shared_ptr<string> idToken{};
  shared_ptr<string> refreshToken{};
  shared_ptr<string> tokenType{};

  GenerateTokenResponseBody() {}

  explicit GenerateTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["access_token"] = boost::any(*accessToken);
    }
    if (expiresAt) {
      res["expires_at"] = boost::any(*expiresAt);
    }
    if (expiresIn) {
      res["expires_in"] = boost::any(*expiresIn);
    }
    if (idToken) {
      res["id_token"] = boost::any(*idToken);
    }
    if (refreshToken) {
      res["refresh_token"] = boost::any(*refreshToken);
    }
    if (tokenType) {
      res["token_type"] = boost::any(*tokenType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("access_token") != m.end() && !m["access_token"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["access_token"]));
    }
    if (m.find("expires_at") != m.end() && !m["expires_at"].empty()) {
      expiresAt = make_shared<long>(boost::any_cast<long>(m["expires_at"]));
    }
    if (m.find("expires_in") != m.end() && !m["expires_in"].empty()) {
      expiresIn = make_shared<long>(boost::any_cast<long>(m["expires_in"]));
    }
    if (m.find("id_token") != m.end() && !m["id_token"].empty()) {
      idToken = make_shared<string>(boost::any_cast<string>(m["id_token"]));
    }
    if (m.find("refresh_token") != m.end() && !m["refresh_token"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["refresh_token"]));
    }
    if (m.find("token_type") != m.end() && !m["token_type"].empty()) {
      tokenType = make_shared<string>(boost::any_cast<string>(m["token_type"]));
    }
  }


  virtual ~GenerateTokenResponseBody() = default;
};
class GenerateTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateTokenResponseBody> body{};

  GenerateTokenResponse() {}

  explicit GenerateTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateTokenResponse() = default;
};
class GetApplicationProvisioningScopeHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  GetApplicationProvisioningScopeHeaders() {}

  explicit GetApplicationProvisioningScopeHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetApplicationProvisioningScopeHeaders() = default;
};
class GetApplicationProvisioningScopeResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> organizationalUnitIds{};

  GetApplicationProvisioningScopeResponseBody() {}

  explicit GetApplicationProvisioningScopeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnitIds) {
      res["organizationalUnitIds"] = boost::any(*organizationalUnitIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("organizationalUnitIds") != m.end() && !m["organizationalUnitIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["organizationalUnitIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["organizationalUnitIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      organizationalUnitIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetApplicationProvisioningScopeResponseBody() = default;
};
class GetApplicationProvisioningScopeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetApplicationProvisioningScopeResponseBody> body{};

  GetApplicationProvisioningScopeResponse() {}

  explicit GetApplicationProvisioningScopeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetApplicationProvisioningScopeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetApplicationProvisioningScopeResponseBody>(model1);
      }
    }
  }


  virtual ~GetApplicationProvisioningScopeResponse() = default;
};
class GetOrganizationalUnitHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  GetOrganizationalUnitHeaders() {}

  explicit GetOrganizationalUnitHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetOrganizationalUnitHeaders() = default;
};
class GetOrganizationalUnitResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> organizationalUnitExternalId{};
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<string> organizationalUnitName{};
  shared_ptr<string> organizationalUnitSourceId{};
  shared_ptr<string> organizationalUnitSourceType{};
  shared_ptr<string> parentId{};
  shared_ptr<long> updateTime{};

  GetOrganizationalUnitResponseBody() {}

  explicit GetOrganizationalUnitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitExternalId) {
      res["organizationalUnitExternalId"] = boost::any(*organizationalUnitExternalId);
    }
    if (organizationalUnitId) {
      res["organizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (organizationalUnitName) {
      res["organizationalUnitName"] = boost::any(*organizationalUnitName);
    }
    if (organizationalUnitSourceId) {
      res["organizationalUnitSourceId"] = boost::any(*organizationalUnitSourceId);
    }
    if (organizationalUnitSourceType) {
      res["organizationalUnitSourceType"] = boost::any(*organizationalUnitSourceType);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("organizationalUnitExternalId") != m.end() && !m["organizationalUnitExternalId"].empty()) {
      organizationalUnitExternalId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitExternalId"]));
    }
    if (m.find("organizationalUnitId") != m.end() && !m["organizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitId"]));
    }
    if (m.find("organizationalUnitName") != m.end() && !m["organizationalUnitName"].empty()) {
      organizationalUnitName = make_shared<string>(boost::any_cast<string>(m["organizationalUnitName"]));
    }
    if (m.find("organizationalUnitSourceId") != m.end() && !m["organizationalUnitSourceId"].empty()) {
      organizationalUnitSourceId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitSourceId"]));
    }
    if (m.find("organizationalUnitSourceType") != m.end() && !m["organizationalUnitSourceType"].empty()) {
      organizationalUnitSourceType = make_shared<string>(boost::any_cast<string>(m["organizationalUnitSourceType"]));
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~GetOrganizationalUnitResponseBody() = default;
};
class GetOrganizationalUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOrganizationalUnitResponseBody> body{};

  GetOrganizationalUnitResponse() {}

  explicit GetOrganizationalUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrganizationalUnitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrganizationalUnitResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrganizationalUnitResponse() = default;
};
class GetOrganizationalUnitIdByExternalIdHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  GetOrganizationalUnitIdByExternalIdHeaders() {}

  explicit GetOrganizationalUnitIdByExternalIdHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetOrganizationalUnitIdByExternalIdHeaders() = default;
};
class GetOrganizationalUnitIdByExternalIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> organizationalUnitExternalId{};
  shared_ptr<string> organizationalUnitSourceId{};
  shared_ptr<string> organizationalUnitSourceType{};

  GetOrganizationalUnitIdByExternalIdRequest() {}

  explicit GetOrganizationalUnitIdByExternalIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnitExternalId) {
      res["organizationalUnitExternalId"] = boost::any(*organizationalUnitExternalId);
    }
    if (organizationalUnitSourceId) {
      res["organizationalUnitSourceId"] = boost::any(*organizationalUnitSourceId);
    }
    if (organizationalUnitSourceType) {
      res["organizationalUnitSourceType"] = boost::any(*organizationalUnitSourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("organizationalUnitExternalId") != m.end() && !m["organizationalUnitExternalId"].empty()) {
      organizationalUnitExternalId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitExternalId"]));
    }
    if (m.find("organizationalUnitSourceId") != m.end() && !m["organizationalUnitSourceId"].empty()) {
      organizationalUnitSourceId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitSourceId"]));
    }
    if (m.find("organizationalUnitSourceType") != m.end() && !m["organizationalUnitSourceType"].empty()) {
      organizationalUnitSourceType = make_shared<string>(boost::any_cast<string>(m["organizationalUnitSourceType"]));
    }
  }


  virtual ~GetOrganizationalUnitIdByExternalIdRequest() = default;
};
class GetOrganizationalUnitIdByExternalIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> organizationalUnitId{};

  GetOrganizationalUnitIdByExternalIdResponseBody() {}

  explicit GetOrganizationalUnitIdByExternalIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnitId) {
      res["organizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("organizationalUnitId") != m.end() && !m["organizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitId"]));
    }
  }


  virtual ~GetOrganizationalUnitIdByExternalIdResponseBody() = default;
};
class GetOrganizationalUnitIdByExternalIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOrganizationalUnitIdByExternalIdResponseBody> body{};

  GetOrganizationalUnitIdByExternalIdResponse() {}

  explicit GetOrganizationalUnitIdByExternalIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrganizationalUnitIdByExternalIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrganizationalUnitIdByExternalIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrganizationalUnitIdByExternalIdResponse() = default;
};
class GetUserHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  GetUserHeaders() {}

  explicit GetUserHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetUserHeaders() = default;
};
class GetUserResponseBodyCustomFields : public Darabonba::Model {
public:
  shared_ptr<string> fieldName{};
  shared_ptr<string> fieldValue{};

  GetUserResponseBodyCustomFields() {}

  explicit GetUserResponseBodyCustomFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldName) {
      res["fieldName"] = boost::any(*fieldName);
    }
    if (fieldValue) {
      res["fieldValue"] = boost::any(*fieldValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fieldName") != m.end() && !m["fieldName"].empty()) {
      fieldName = make_shared<string>(boost::any_cast<string>(m["fieldName"]));
    }
    if (m.find("fieldValue") != m.end() && !m["fieldValue"].empty()) {
      fieldValue = make_shared<string>(boost::any_cast<string>(m["fieldValue"]));
    }
  }


  virtual ~GetUserResponseBodyCustomFields() = default;
};
class GetUserResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};

  GetUserResponseBodyGroups() {}

  explicit GetUserResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["groupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["groupId"]));
    }
    if (m.find("groupName") != m.end() && !m["groupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["groupName"]));
    }
  }


  virtual ~GetUserResponseBodyGroups() = default;
};
class GetUserResponseBodyOrganizationalUnits : public Darabonba::Model {
public:
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<string> organizationalUnitName{};
  shared_ptr<bool> primary{};

  GetUserResponseBodyOrganizationalUnits() {}

  explicit GetUserResponseBodyOrganizationalUnits(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnitId) {
      res["organizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (organizationalUnitName) {
      res["organizationalUnitName"] = boost::any(*organizationalUnitName);
    }
    if (primary) {
      res["primary"] = boost::any(*primary);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("organizationalUnitId") != m.end() && !m["organizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitId"]));
    }
    if (m.find("organizationalUnitName") != m.end() && !m["organizationalUnitName"].empty()) {
      organizationalUnitName = make_shared<string>(boost::any_cast<string>(m["organizationalUnitName"]));
    }
    if (m.find("primary") != m.end() && !m["primary"].empty()) {
      primary = make_shared<bool>(boost::any_cast<bool>(m["primary"]));
    }
  }


  virtual ~GetUserResponseBodyOrganizationalUnits() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> accountExpireTime{};
  shared_ptr<long> createTime{};
  shared_ptr<vector<GetUserResponseBodyCustomFields>> customFields{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<bool> emailVerified{};
  shared_ptr<vector<GetUserResponseBodyGroups>> groups{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lockExpireTime{};
  shared_ptr<vector<GetUserResponseBodyOrganizationalUnits>> organizationalUnits{};
  shared_ptr<bool> passwordSet{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<bool> phoneNumberVerified{};
  shared_ptr<string> phoneRegion{};
  shared_ptr<string> primaryOrganizationalUnitId{};
  shared_ptr<long> registerTime{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userExternalId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userSourceId{};
  shared_ptr<string> userSourceType{};
  shared_ptr<string> username{};

  GetUserResponseBody() {}

  explicit GetUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountExpireTime) {
      res["accountExpireTime"] = boost::any(*accountExpireTime);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (customFields) {
      vector<boost::any> temp1;
      for(auto item1:*customFields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customFields"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (emailVerified) {
      res["emailVerified"] = boost::any(*emailVerified);
    }
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["groups"] = boost::any(temp1);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockExpireTime) {
      res["lockExpireTime"] = boost::any(*lockExpireTime);
    }
    if (organizationalUnits) {
      vector<boost::any> temp1;
      for(auto item1:*organizationalUnits){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["organizationalUnits"] = boost::any(temp1);
    }
    if (passwordSet) {
      res["passwordSet"] = boost::any(*passwordSet);
    }
    if (phoneNumber) {
      res["phoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneNumberVerified) {
      res["phoneNumberVerified"] = boost::any(*phoneNumberVerified);
    }
    if (phoneRegion) {
      res["phoneRegion"] = boost::any(*phoneRegion);
    }
    if (primaryOrganizationalUnitId) {
      res["primaryOrganizationalUnitId"] = boost::any(*primaryOrganizationalUnitId);
    }
    if (registerTime) {
      res["registerTime"] = boost::any(*registerTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (userExternalId) {
      res["userExternalId"] = boost::any(*userExternalId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (userSourceId) {
      res["userSourceId"] = boost::any(*userSourceId);
    }
    if (userSourceType) {
      res["userSourceType"] = boost::any(*userSourceType);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountExpireTime") != m.end() && !m["accountExpireTime"].empty()) {
      accountExpireTime = make_shared<long>(boost::any_cast<long>(m["accountExpireTime"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("customFields") != m.end() && !m["customFields"].empty()) {
      if (typeid(vector<boost::any>) == m["customFields"].type()) {
        vector<GetUserResponseBodyCustomFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customFields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyCustomFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customFields = make_shared<vector<GetUserResponseBodyCustomFields>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("emailVerified") != m.end() && !m["emailVerified"].empty()) {
      emailVerified = make_shared<bool>(boost::any_cast<bool>(m["emailVerified"]));
    }
    if (m.find("groups") != m.end() && !m["groups"].empty()) {
      if (typeid(vector<boost::any>) == m["groups"].type()) {
        vector<GetUserResponseBodyGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<GetUserResponseBodyGroups>>(expect1);
      }
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockExpireTime") != m.end() && !m["lockExpireTime"].empty()) {
      lockExpireTime = make_shared<long>(boost::any_cast<long>(m["lockExpireTime"]));
    }
    if (m.find("organizationalUnits") != m.end() && !m["organizationalUnits"].empty()) {
      if (typeid(vector<boost::any>) == m["organizationalUnits"].type()) {
        vector<GetUserResponseBodyOrganizationalUnits> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["organizationalUnits"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyOrganizationalUnits model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        organizationalUnits = make_shared<vector<GetUserResponseBodyOrganizationalUnits>>(expect1);
      }
    }
    if (m.find("passwordSet") != m.end() && !m["passwordSet"].empty()) {
      passwordSet = make_shared<bool>(boost::any_cast<bool>(m["passwordSet"]));
    }
    if (m.find("phoneNumber") != m.end() && !m["phoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["phoneNumber"]));
    }
    if (m.find("phoneNumberVerified") != m.end() && !m["phoneNumberVerified"].empty()) {
      phoneNumberVerified = make_shared<bool>(boost::any_cast<bool>(m["phoneNumberVerified"]));
    }
    if (m.find("phoneRegion") != m.end() && !m["phoneRegion"].empty()) {
      phoneRegion = make_shared<string>(boost::any_cast<string>(m["phoneRegion"]));
    }
    if (m.find("primaryOrganizationalUnitId") != m.end() && !m["primaryOrganizationalUnitId"].empty()) {
      primaryOrganizationalUnitId = make_shared<string>(boost::any_cast<string>(m["primaryOrganizationalUnitId"]));
    }
    if (m.find("registerTime") != m.end() && !m["registerTime"].empty()) {
      registerTime = make_shared<long>(boost::any_cast<long>(m["registerTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("userExternalId") != m.end() && !m["userExternalId"].empty()) {
      userExternalId = make_shared<string>(boost::any_cast<string>(m["userExternalId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("userSourceId") != m.end() && !m["userSourceId"].empty()) {
      userSourceId = make_shared<string>(boost::any_cast<string>(m["userSourceId"]));
    }
    if (m.find("userSourceType") != m.end() && !m["userSourceType"].empty()) {
      userSourceType = make_shared<string>(boost::any_cast<string>(m["userSourceType"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~GetUserResponseBody() = default;
};
class GetUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserResponseBody> body{};

  GetUserResponse() {}

  explicit GetUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserResponse() = default;
};
class GetUserIdByEmailHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  GetUserIdByEmailHeaders() {}

  explicit GetUserIdByEmailHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetUserIdByEmailHeaders() = default;
};
class GetUserIdByEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> email{};

  GetUserIdByEmailRequest() {}

  explicit GetUserIdByEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["email"] = boost::any(*email);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
  }


  virtual ~GetUserIdByEmailRequest() = default;
};
class GetUserIdByEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  GetUserIdByEmailResponseBody() {}

  explicit GetUserIdByEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~GetUserIdByEmailResponseBody() = default;
};
class GetUserIdByEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserIdByEmailResponseBody> body{};

  GetUserIdByEmailResponse() {}

  explicit GetUserIdByEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserIdByEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserIdByEmailResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserIdByEmailResponse() = default;
};
class GetUserIdByPhoneNumberHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  GetUserIdByPhoneNumberHeaders() {}

  explicit GetUserIdByPhoneNumberHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetUserIdByPhoneNumberHeaders() = default;
};
class GetUserIdByPhoneNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};

  GetUserIdByPhoneNumberRequest() {}

  explicit GetUserIdByPhoneNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["phoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("phoneNumber") != m.end() && !m["phoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["phoneNumber"]));
    }
  }


  virtual ~GetUserIdByPhoneNumberRequest() = default;
};
class GetUserIdByPhoneNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  GetUserIdByPhoneNumberResponseBody() {}

  explicit GetUserIdByPhoneNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~GetUserIdByPhoneNumberResponseBody() = default;
};
class GetUserIdByPhoneNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserIdByPhoneNumberResponseBody> body{};

  GetUserIdByPhoneNumberResponse() {}

  explicit GetUserIdByPhoneNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserIdByPhoneNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserIdByPhoneNumberResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserIdByPhoneNumberResponse() = default;
};
class GetUserIdByUserExternalIdHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  GetUserIdByUserExternalIdHeaders() {}

  explicit GetUserIdByUserExternalIdHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetUserIdByUserExternalIdHeaders() = default;
};
class GetUserIdByUserExternalIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> userExternalId{};
  shared_ptr<string> userSourceId{};
  shared_ptr<string> userSourceType{};

  GetUserIdByUserExternalIdRequest() {}

  explicit GetUserIdByUserExternalIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userExternalId) {
      res["userExternalId"] = boost::any(*userExternalId);
    }
    if (userSourceId) {
      res["userSourceId"] = boost::any(*userSourceId);
    }
    if (userSourceType) {
      res["userSourceType"] = boost::any(*userSourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userExternalId") != m.end() && !m["userExternalId"].empty()) {
      userExternalId = make_shared<string>(boost::any_cast<string>(m["userExternalId"]));
    }
    if (m.find("userSourceId") != m.end() && !m["userSourceId"].empty()) {
      userSourceId = make_shared<string>(boost::any_cast<string>(m["userSourceId"]));
    }
    if (m.find("userSourceType") != m.end() && !m["userSourceType"].empty()) {
      userSourceType = make_shared<string>(boost::any_cast<string>(m["userSourceType"]));
    }
  }


  virtual ~GetUserIdByUserExternalIdRequest() = default;
};
class GetUserIdByUserExternalIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  GetUserIdByUserExternalIdResponseBody() {}

  explicit GetUserIdByUserExternalIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~GetUserIdByUserExternalIdResponseBody() = default;
};
class GetUserIdByUserExternalIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserIdByUserExternalIdResponseBody> body{};

  GetUserIdByUserExternalIdResponse() {}

  explicit GetUserIdByUserExternalIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserIdByUserExternalIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserIdByUserExternalIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserIdByUserExternalIdResponse() = default;
};
class GetUserIdByUsernameHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  GetUserIdByUsernameHeaders() {}

  explicit GetUserIdByUsernameHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetUserIdByUsernameHeaders() = default;
};
class GetUserIdByUsernameRequest : public Darabonba::Model {
public:
  shared_ptr<string> username{};

  GetUserIdByUsernameRequest() {}

  explicit GetUserIdByUsernameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~GetUserIdByUsernameRequest() = default;
};
class GetUserIdByUsernameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  GetUserIdByUsernameResponseBody() {}

  explicit GetUserIdByUsernameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~GetUserIdByUsernameResponseBody() = default;
};
class GetUserIdByUsernameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserIdByUsernameResponseBody> body{};

  GetUserIdByUsernameResponse() {}

  explicit GetUserIdByUsernameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserIdByUsernameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserIdByUsernameResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserIdByUsernameResponse() = default;
};
class GetUserInfoHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  GetUserInfoHeaders() {}

  explicit GetUserInfoHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~GetUserInfoHeaders() = default;
};
class GetUserInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  GetUserInfoResponse() {}

  explicit GetUserInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetUserInfoResponse() = default;
};
class ListOrganizationalUnitParentIdsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  ListOrganizationalUnitParentIdsHeaders() {}

  explicit ListOrganizationalUnitParentIdsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListOrganizationalUnitParentIdsHeaders() = default;
};
class ListOrganizationalUnitParentIdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> parentIds{};

  ListOrganizationalUnitParentIdsResponseBody() {}

  explicit ListOrganizationalUnitParentIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentIds) {
      res["parentIds"] = boost::any(*parentIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("parentIds") != m.end() && !m["parentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["parentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["parentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      parentIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListOrganizationalUnitParentIdsResponseBody() = default;
};
class ListOrganizationalUnitParentIdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOrganizationalUnitParentIdsResponseBody> body{};

  ListOrganizationalUnitParentIdsResponse() {}

  explicit ListOrganizationalUnitParentIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrganizationalUnitParentIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrganizationalUnitParentIdsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrganizationalUnitParentIdsResponse() = default;
};
class ListOrganizationalUnitsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  ListOrganizationalUnitsHeaders() {}

  explicit ListOrganizationalUnitsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListOrganizationalUnitsHeaders() = default;
};
class ListOrganizationalUnitsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentId{};

  ListOrganizationalUnitsRequest() {}

  explicit ListOrganizationalUnitsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
  }


  virtual ~ListOrganizationalUnitsRequest() = default;
};
class ListOrganizationalUnitsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> organizationalUnitExternalId{};
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<string> organizationalUnitName{};
  shared_ptr<string> organizationalUnitSourceId{};
  shared_ptr<string> organizationalUnitSourceType{};
  shared_ptr<string> parentId{};
  shared_ptr<long> updateTime{};

  ListOrganizationalUnitsResponseBodyData() {}

  explicit ListOrganizationalUnitsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (organizationalUnitExternalId) {
      res["organizationalUnitExternalId"] = boost::any(*organizationalUnitExternalId);
    }
    if (organizationalUnitId) {
      res["organizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (organizationalUnitName) {
      res["organizationalUnitName"] = boost::any(*organizationalUnitName);
    }
    if (organizationalUnitSourceId) {
      res["organizationalUnitSourceId"] = boost::any(*organizationalUnitSourceId);
    }
    if (organizationalUnitSourceType) {
      res["organizationalUnitSourceType"] = boost::any(*organizationalUnitSourceType);
    }
    if (parentId) {
      res["parentId"] = boost::any(*parentId);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("organizationalUnitExternalId") != m.end() && !m["organizationalUnitExternalId"].empty()) {
      organizationalUnitExternalId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitExternalId"]));
    }
    if (m.find("organizationalUnitId") != m.end() && !m["organizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitId"]));
    }
    if (m.find("organizationalUnitName") != m.end() && !m["organizationalUnitName"].empty()) {
      organizationalUnitName = make_shared<string>(boost::any_cast<string>(m["organizationalUnitName"]));
    }
    if (m.find("organizationalUnitSourceId") != m.end() && !m["organizationalUnitSourceId"].empty()) {
      organizationalUnitSourceId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitSourceId"]));
    }
    if (m.find("organizationalUnitSourceType") != m.end() && !m["organizationalUnitSourceType"].empty()) {
      organizationalUnitSourceType = make_shared<string>(boost::any_cast<string>(m["organizationalUnitSourceType"]));
    }
    if (m.find("parentId") != m.end() && !m["parentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["parentId"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~ListOrganizationalUnitsResponseBodyData() = default;
};
class ListOrganizationalUnitsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListOrganizationalUnitsResponseBodyData>> data{};
  shared_ptr<long> totalCount{};

  ListOrganizationalUnitsResponseBody() {}

  explicit ListOrganizationalUnitsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListOrganizationalUnitsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrganizationalUnitsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListOrganizationalUnitsResponseBodyData>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListOrganizationalUnitsResponseBody() = default;
};
class ListOrganizationalUnitsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOrganizationalUnitsResponseBody> body{};

  ListOrganizationalUnitsResponse() {}

  explicit ListOrganizationalUnitsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrganizationalUnitsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrganizationalUnitsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrganizationalUnitsResponse() = default;
};
class ListUsersHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  ListUsersHeaders() {}

  explicit ListUsersHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~ListUsersHeaders() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> organizationalUnitId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnitId) {
      res["organizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("organizationalUnitId") != m.end() && !m["organizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitId"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> accountExpireTime{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<bool> emailVerified{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> lockExpireTime{};
  shared_ptr<bool> passwordSet{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<bool> phoneNumberVerified{};
  shared_ptr<string> phoneRegion{};
  shared_ptr<long> registerTime{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userExternalId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userSourceId{};
  shared_ptr<string> userSourceType{};
  shared_ptr<string> username{};

  ListUsersResponseBodyData() {}

  explicit ListUsersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountExpireTime) {
      res["accountExpireTime"] = boost::any(*accountExpireTime);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (emailVerified) {
      res["emailVerified"] = boost::any(*emailVerified);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockExpireTime) {
      res["lockExpireTime"] = boost::any(*lockExpireTime);
    }
    if (passwordSet) {
      res["passwordSet"] = boost::any(*passwordSet);
    }
    if (phoneNumber) {
      res["phoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneNumberVerified) {
      res["phoneNumberVerified"] = boost::any(*phoneNumberVerified);
    }
    if (phoneRegion) {
      res["phoneRegion"] = boost::any(*phoneRegion);
    }
    if (registerTime) {
      res["registerTime"] = boost::any(*registerTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (userExternalId) {
      res["userExternalId"] = boost::any(*userExternalId);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (userSourceId) {
      res["userSourceId"] = boost::any(*userSourceId);
    }
    if (userSourceType) {
      res["userSourceType"] = boost::any(*userSourceType);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountExpireTime") != m.end() && !m["accountExpireTime"].empty()) {
      accountExpireTime = make_shared<long>(boost::any_cast<long>(m["accountExpireTime"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("emailVerified") != m.end() && !m["emailVerified"].empty()) {
      emailVerified = make_shared<bool>(boost::any_cast<bool>(m["emailVerified"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockExpireTime") != m.end() && !m["lockExpireTime"].empty()) {
      lockExpireTime = make_shared<long>(boost::any_cast<long>(m["lockExpireTime"]));
    }
    if (m.find("passwordSet") != m.end() && !m["passwordSet"].empty()) {
      passwordSet = make_shared<bool>(boost::any_cast<bool>(m["passwordSet"]));
    }
    if (m.find("phoneNumber") != m.end() && !m["phoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["phoneNumber"]));
    }
    if (m.find("phoneNumberVerified") != m.end() && !m["phoneNumberVerified"].empty()) {
      phoneNumberVerified = make_shared<bool>(boost::any_cast<bool>(m["phoneNumberVerified"]));
    }
    if (m.find("phoneRegion") != m.end() && !m["phoneRegion"].empty()) {
      phoneRegion = make_shared<string>(boost::any_cast<string>(m["phoneRegion"]));
    }
    if (m.find("registerTime") != m.end() && !m["registerTime"].empty()) {
      registerTime = make_shared<long>(boost::any_cast<long>(m["registerTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("userExternalId") != m.end() && !m["userExternalId"].empty()) {
      userExternalId = make_shared<string>(boost::any_cast<string>(m["userExternalId"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("userSourceId") != m.end() && !m["userSourceId"].empty()) {
      userSourceId = make_shared<string>(boost::any_cast<string>(m["userSourceId"]));
    }
    if (m.find("userSourceType") != m.end() && !m["userSourceType"].empty()) {
      userSourceType = make_shared<string>(boost::any_cast<string>(m["userSourceType"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~ListUsersResponseBodyData() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListUsersResponseBodyData>> data{};
  shared_ptr<long> totalCount{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListUsersResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListUsersResponseBodyData>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
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
class PatchOrganizationalUnitHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  PatchOrganizationalUnitHeaders() {}

  explicit PatchOrganizationalUnitHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~PatchOrganizationalUnitHeaders() = default;
};
class PatchOrganizationalUnitRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> organizationalUnitName{};

  PatchOrganizationalUnitRequest() {}

  explicit PatchOrganizationalUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (organizationalUnitName) {
      res["organizationalUnitName"] = boost::any(*organizationalUnitName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("organizationalUnitName") != m.end() && !m["organizationalUnitName"].empty()) {
      organizationalUnitName = make_shared<string>(boost::any_cast<string>(m["organizationalUnitName"]));
    }
  }


  virtual ~PatchOrganizationalUnitRequest() = default;
};
class PatchOrganizationalUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  PatchOrganizationalUnitResponse() {}

  explicit PatchOrganizationalUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~PatchOrganizationalUnitResponse() = default;
};
class PatchUserHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  PatchUserHeaders() {}

  explicit PatchUserHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~PatchUserHeaders() = default;
};
class PatchUserRequestCustomFields : public Darabonba::Model {
public:
  shared_ptr<string> fieldName{};
  shared_ptr<string> fieldValue{};
  shared_ptr<string> operation{};
  shared_ptr<string> operator_{};

  PatchUserRequestCustomFields() {}

  explicit PatchUserRequestCustomFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldName) {
      res["fieldName"] = boost::any(*fieldName);
    }
    if (fieldValue) {
      res["fieldValue"] = boost::any(*fieldValue);
    }
    if (operation) {
      res["operation"] = boost::any(*operation);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fieldName") != m.end() && !m["fieldName"].empty()) {
      fieldName = make_shared<string>(boost::any_cast<string>(m["fieldName"]));
    }
    if (m.find("fieldValue") != m.end() && !m["fieldValue"].empty()) {
      fieldValue = make_shared<string>(boost::any_cast<string>(m["fieldValue"]));
    }
    if (m.find("operation") != m.end() && !m["operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["operation"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
  }


  virtual ~PatchUserRequestCustomFields() = default;
};
class PatchUserRequest : public Darabonba::Model {
public:
  shared_ptr<vector<PatchUserRequestCustomFields>> customFields{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<bool> emailVerified{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<bool> phoneNumberVerified{};
  shared_ptr<string> phoneRegion{};
  shared_ptr<string> username{};

  PatchUserRequest() {}

  explicit PatchUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customFields) {
      vector<boost::any> temp1;
      for(auto item1:*customFields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customFields"] = boost::any(temp1);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (emailVerified) {
      res["emailVerified"] = boost::any(*emailVerified);
    }
    if (phoneNumber) {
      res["phoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneNumberVerified) {
      res["phoneNumberVerified"] = boost::any(*phoneNumberVerified);
    }
    if (phoneRegion) {
      res["phoneRegion"] = boost::any(*phoneRegion);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customFields") != m.end() && !m["customFields"].empty()) {
      if (typeid(vector<boost::any>) == m["customFields"].type()) {
        vector<PatchUserRequestCustomFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customFields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PatchUserRequestCustomFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customFields = make_shared<vector<PatchUserRequestCustomFields>>(expect1);
      }
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("emailVerified") != m.end() && !m["emailVerified"].empty()) {
      emailVerified = make_shared<bool>(boost::any_cast<bool>(m["emailVerified"]));
    }
    if (m.find("phoneNumber") != m.end() && !m["phoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["phoneNumber"]));
    }
    if (m.find("phoneNumberVerified") != m.end() && !m["phoneNumberVerified"].empty()) {
      phoneNumberVerified = make_shared<bool>(boost::any_cast<bool>(m["phoneNumberVerified"]));
    }
    if (m.find("phoneRegion") != m.end() && !m["phoneRegion"].empty()) {
      phoneRegion = make_shared<string>(boost::any_cast<string>(m["phoneRegion"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~PatchUserRequest() = default;
};
class PatchUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  PatchUserResponse() {}

  explicit PatchUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~PatchUserResponse() = default;
};
class RemoveUserFromOrganizationalUnitsHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  RemoveUserFromOrganizationalUnitsHeaders() {}

  explicit RemoveUserFromOrganizationalUnitsHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~RemoveUserFromOrganizationalUnitsHeaders() = default;
};
class RemoveUserFromOrganizationalUnitsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> organizationalUnitIds{};

  RemoveUserFromOrganizationalUnitsRequest() {}

  explicit RemoveUserFromOrganizationalUnitsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnitIds) {
      res["organizationalUnitIds"] = boost::any(*organizationalUnitIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("organizationalUnitIds") != m.end() && !m["organizationalUnitIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["organizationalUnitIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["organizationalUnitIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      organizationalUnitIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RemoveUserFromOrganizationalUnitsRequest() = default;
};
class RemoveUserFromOrganizationalUnitsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  RemoveUserFromOrganizationalUnitsResponse() {}

  explicit RemoveUserFromOrganizationalUnitsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~RemoveUserFromOrganizationalUnitsResponse() = default;
};
class RevokeTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientSecret{};
  shared_ptr<string> token{};
  shared_ptr<string> tokenTypeHint{};

  RevokeTokenRequest() {}

  explicit RevokeTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["client_id"] = boost::any(*clientId);
    }
    if (clientSecret) {
      res["client_secret"] = boost::any(*clientSecret);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    if (tokenTypeHint) {
      res["token_type_hint"] = boost::any(*tokenTypeHint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("client_id") != m.end() && !m["client_id"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["client_id"]));
    }
    if (m.find("client_secret") != m.end() && !m["client_secret"].empty()) {
      clientSecret = make_shared<string>(boost::any_cast<string>(m["client_secret"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
    if (m.find("token_type_hint") != m.end() && !m["token_type_hint"].empty()) {
      tokenTypeHint = make_shared<string>(boost::any_cast<string>(m["token_type_hint"]));
    }
  }


  virtual ~RevokeTokenRequest() = default;
};
class RevokeTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<map<string, boost::any>> body{};

  RevokeTokenResponse() {}

  explicit RevokeTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~RevokeTokenResponse() = default;
};
class SetUserPrimaryOrganizationalUnitHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  SetUserPrimaryOrganizationalUnitHeaders() {}

  explicit SetUserPrimaryOrganizationalUnitHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~SetUserPrimaryOrganizationalUnitHeaders() = default;
};
class SetUserPrimaryOrganizationalUnitRequest : public Darabonba::Model {
public:
  shared_ptr<string> organizationalUnitId{};

  SetUserPrimaryOrganizationalUnitRequest() {}

  explicit SetUserPrimaryOrganizationalUnitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (organizationalUnitId) {
      res["organizationalUnitId"] = boost::any(*organizationalUnitId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("organizationalUnitId") != m.end() && !m["organizationalUnitId"].empty()) {
      organizationalUnitId = make_shared<string>(boost::any_cast<string>(m["organizationalUnitId"]));
    }
  }


  virtual ~SetUserPrimaryOrganizationalUnitRequest() = default;
};
class SetUserPrimaryOrganizationalUnitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  SetUserPrimaryOrganizationalUnitResponse() {}

  explicit SetUserPrimaryOrganizationalUnitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~SetUserPrimaryOrganizationalUnitResponse() = default;
};
class UpdateUserPasswordHeaders : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> commonHeaders{};
  shared_ptr<string> authorization{};

  UpdateUserPasswordHeaders() {}

  explicit UpdateUserPasswordHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonHeaders) {
      res["commonHeaders"] = boost::any(*commonHeaders);
    }
    if (authorization) {
      res["Authorization"] = boost::any(*authorization);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("commonHeaders") != m.end() && !m["commonHeaders"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["commonHeaders"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commonHeaders = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Authorization") != m.end() && !m["Authorization"].empty()) {
      authorization = make_shared<string>(boost::any_cast<string>(m["Authorization"]));
    }
  }


  virtual ~UpdateUserPasswordHeaders() = default;
};
class UpdateUserPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> password{};

  UpdateUserPasswordRequest() {}

  explicit UpdateUserPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["password"] = boost::any(*password);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
  }


  virtual ~UpdateUserPasswordRequest() = default;
};
class UpdateUserPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  UpdateUserPasswordResponse() {}

  explicit UpdateUserPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  }


  virtual ~UpdateUserPasswordResponse() = default;
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
  AddUserToOrganizationalUnitsResponse addUserToOrganizationalUnitsWithOptions(shared_ptr<string> instanceId,
                                                                               shared_ptr<string> applicationId,
                                                                               shared_ptr<string> userId,
                                                                               shared_ptr<AddUserToOrganizationalUnitsRequest> request,
                                                                               shared_ptr<AddUserToOrganizationalUnitsHeaders> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserToOrganizationalUnitsResponse addUserToOrganizationalUnits(shared_ptr<string> instanceId,
                                                                    shared_ptr<string> applicationId,
                                                                    shared_ptr<string> userId,
                                                                    shared_ptr<AddUserToOrganizationalUnitsRequest> request);
  CreateOrganizationalUnitResponse createOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                       shared_ptr<string> applicationId,
                                                                       shared_ptr<CreateOrganizationalUnitRequest> request,
                                                                       shared_ptr<CreateOrganizationalUnitHeaders> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOrganizationalUnitResponse createOrganizationalUnit(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<CreateOrganizationalUnitRequest> request);
  CreateUserResponse createUserWithOptions(shared_ptr<string> instanceId,
                                           shared_ptr<string> applicationId,
                                           shared_ptr<CreateUserRequest> request,
                                           shared_ptr<CreateUserHeaders> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserResponse createUser(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<CreateUserRequest> request);
  DeleteOrganizationalUnitResponse deleteOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                       shared_ptr<string> applicationId,
                                                                       shared_ptr<string> organizationalUnitId,
                                                                       shared_ptr<DeleteOrganizationalUnitHeaders> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteOrganizationalUnitResponse deleteOrganizationalUnit(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> organizationalUnitId);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<string> instanceId,
                                           shared_ptr<string> applicationId,
                                           shared_ptr<string> userId,
                                           shared_ptr<DeleteUserHeaders> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> userId);
  DisableUserResponse disableUserWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> applicationId,
                                             shared_ptr<string> userId,
                                             shared_ptr<DisableUserHeaders> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableUserResponse disableUser(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> userId);
  EnableUserResponse enableUserWithOptions(shared_ptr<string> instanceId,
                                           shared_ptr<string> applicationId,
                                           shared_ptr<string> userId,
                                           shared_ptr<EnableUserHeaders> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableUserResponse enableUser(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> userId);
  GenerateDeviceCodeResponse generateDeviceCodeWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> applicationId,
                                                           shared_ptr<GenerateDeviceCodeRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateDeviceCodeResponse generateDeviceCode(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GenerateDeviceCodeRequest> request);
  GenerateTokenResponse generateTokenWithOptions(shared_ptr<string> instanceId,
                                                 shared_ptr<string> applicationId,
                                                 shared_ptr<GenerateTokenRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateTokenResponse generateToken(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GenerateTokenRequest> request);
  GetApplicationProvisioningScopeResponse getApplicationProvisioningScopeWithOptions(shared_ptr<string> instanceId,
                                                                                     shared_ptr<string> applicationId,
                                                                                     shared_ptr<GetApplicationProvisioningScopeHeaders> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetApplicationProvisioningScopeResponse getApplicationProvisioningScope(shared_ptr<string> instanceId, shared_ptr<string> applicationId);
  GetOrganizationalUnitResponse getOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<string> applicationId,
                                                                 shared_ptr<string> organizationalUnitId,
                                                                 shared_ptr<GetOrganizationalUnitHeaders> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrganizationalUnitResponse getOrganizationalUnit(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> organizationalUnitId);
  GetOrganizationalUnitIdByExternalIdResponse getOrganizationalUnitIdByExternalIdWithOptions(shared_ptr<string> instanceId,
                                                                                             shared_ptr<string> applicationId,
                                                                                             shared_ptr<GetOrganizationalUnitIdByExternalIdRequest> request,
                                                                                             shared_ptr<GetOrganizationalUnitIdByExternalIdHeaders> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrganizationalUnitIdByExternalIdResponse getOrganizationalUnitIdByExternalId(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GetOrganizationalUnitIdByExternalIdRequest> request);
  GetUserResponse getUserWithOptions(shared_ptr<string> instanceId,
                                     shared_ptr<string> applicationId,
                                     shared_ptr<string> userId,
                                     shared_ptr<GetUserHeaders> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> userId);
  GetUserIdByEmailResponse getUserIdByEmailWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<string> applicationId,
                                                       shared_ptr<GetUserIdByEmailRequest> request,
                                                       shared_ptr<GetUserIdByEmailHeaders> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserIdByEmailResponse getUserIdByEmail(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GetUserIdByEmailRequest> request);
  GetUserIdByPhoneNumberResponse getUserIdByPhoneNumberWithOptions(shared_ptr<string> instanceId,
                                                                   shared_ptr<string> applicationId,
                                                                   shared_ptr<GetUserIdByPhoneNumberRequest> request,
                                                                   shared_ptr<GetUserIdByPhoneNumberHeaders> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserIdByPhoneNumberResponse getUserIdByPhoneNumber(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GetUserIdByPhoneNumberRequest> request);
  GetUserIdByUserExternalIdResponse getUserIdByUserExternalIdWithOptions(shared_ptr<string> instanceId,
                                                                         shared_ptr<string> applicationId,
                                                                         shared_ptr<GetUserIdByUserExternalIdRequest> request,
                                                                         shared_ptr<GetUserIdByUserExternalIdHeaders> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserIdByUserExternalIdResponse getUserIdByUserExternalId(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GetUserIdByUserExternalIdRequest> request);
  GetUserIdByUsernameResponse getUserIdByUsernameWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> applicationId,
                                                             shared_ptr<GetUserIdByUsernameRequest> request,
                                                             shared_ptr<GetUserIdByUsernameHeaders> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserIdByUsernameResponse getUserIdByUsername(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<GetUserIdByUsernameRequest> request);
  GetUserInfoResponse getUserInfoWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> applicationId,
                                             shared_ptr<GetUserInfoHeaders> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserInfoResponse getUserInfo(shared_ptr<string> instanceId, shared_ptr<string> applicationId);
  ListOrganizationalUnitParentIdsResponse listOrganizationalUnitParentIdsWithOptions(shared_ptr<string> instanceId,
                                                                                     shared_ptr<string> applicationId,
                                                                                     shared_ptr<string> organizationalUnitId,
                                                                                     shared_ptr<ListOrganizationalUnitParentIdsHeaders> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrganizationalUnitParentIdsResponse listOrganizationalUnitParentIds(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<string> organizationalUnitId);
  ListOrganizationalUnitsResponse listOrganizationalUnitsWithOptions(shared_ptr<string> instanceId,
                                                                     shared_ptr<string> applicationId,
                                                                     shared_ptr<ListOrganizationalUnitsRequest> request,
                                                                     shared_ptr<ListOrganizationalUnitsHeaders> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrganizationalUnitsResponse listOrganizationalUnits(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<ListOrganizationalUnitsRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<string> instanceId,
                                         shared_ptr<string> applicationId,
                                         shared_ptr<ListUsersRequest> request,
                                         shared_ptr<ListUsersHeaders> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<ListUsersRequest> request);
  PatchOrganizationalUnitResponse patchOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                     shared_ptr<string> applicationId,
                                                                     shared_ptr<string> organizationalUnitId,
                                                                     shared_ptr<PatchOrganizationalUnitRequest> request,
                                                                     shared_ptr<PatchOrganizationalUnitHeaders> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PatchOrganizationalUnitResponse patchOrganizationalUnit(shared_ptr<string> instanceId,
                                                          shared_ptr<string> applicationId,
                                                          shared_ptr<string> organizationalUnitId,
                                                          shared_ptr<PatchOrganizationalUnitRequest> request);
  PatchUserResponse patchUserWithOptions(shared_ptr<string> instanceId,
                                         shared_ptr<string> applicationId,
                                         shared_ptr<string> userId,
                                         shared_ptr<PatchUserRequest> request,
                                         shared_ptr<PatchUserHeaders> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PatchUserResponse patchUser(shared_ptr<string> instanceId,
                              shared_ptr<string> applicationId,
                              shared_ptr<string> userId,
                              shared_ptr<PatchUserRequest> request);
  RemoveUserFromOrganizationalUnitsResponse removeUserFromOrganizationalUnitsWithOptions(shared_ptr<string> instanceId,
                                                                                         shared_ptr<string> applicationId,
                                                                                         shared_ptr<string> userId,
                                                                                         shared_ptr<RemoveUserFromOrganizationalUnitsRequest> request,
                                                                                         shared_ptr<RemoveUserFromOrganizationalUnitsHeaders> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUserFromOrganizationalUnitsResponse removeUserFromOrganizationalUnits(shared_ptr<string> instanceId,
                                                                              shared_ptr<string> applicationId,
                                                                              shared_ptr<string> userId,
                                                                              shared_ptr<RemoveUserFromOrganizationalUnitsRequest> request);
  RevokeTokenResponse revokeTokenWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> applicationId,
                                             shared_ptr<RevokeTokenRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeTokenResponse revokeToken(shared_ptr<string> instanceId, shared_ptr<string> applicationId, shared_ptr<RevokeTokenRequest> request);
  SetUserPrimaryOrganizationalUnitResponse setUserPrimaryOrganizationalUnitWithOptions(shared_ptr<string> instanceId,
                                                                                       shared_ptr<string> applicationId,
                                                                                       shared_ptr<string> userId,
                                                                                       shared_ptr<SetUserPrimaryOrganizationalUnitRequest> request,
                                                                                       shared_ptr<SetUserPrimaryOrganizationalUnitHeaders> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetUserPrimaryOrganizationalUnitResponse setUserPrimaryOrganizationalUnit(shared_ptr<string> instanceId,
                                                                            shared_ptr<string> applicationId,
                                                                            shared_ptr<string> userId,
                                                                            shared_ptr<SetUserPrimaryOrganizationalUnitRequest> request);
  UpdateUserPasswordResponse updateUserPasswordWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> applicationId,
                                                           shared_ptr<string> userId,
                                                           shared_ptr<UpdateUserPasswordRequest> request,
                                                           shared_ptr<UpdateUserPasswordHeaders> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserPasswordResponse updateUserPassword(shared_ptr<string> instanceId,
                                                shared_ptr<string> applicationId,
                                                shared_ptr<string> userId,
                                                shared_ptr<UpdateUserPasswordRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eiam-developerapi20220225

#endif
