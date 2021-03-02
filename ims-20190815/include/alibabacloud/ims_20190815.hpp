// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMS20190815_H_
#define ALIBABACLOUD_IMS20190815_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ims20190815 {
class AddUserToGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupPrincipalName{};
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> akProxySuffix{};
  shared_ptr<string> groupName{};

  AddUserToGroupRequest() {}

  explicit AddUserToGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupPrincipalName) {
      res["GroupPrincipalName"] = boost::any(*groupPrincipalName);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupPrincipalName") != m.end() && !m["GroupPrincipalName"].empty()) {
      groupPrincipalName = make_shared<string>(boost::any_cast<string>(m["GroupPrincipalName"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~AddUserToGroupRequest() = default;
};
class AddUserToGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddUserToGroupResponseBody() {}

  explicit AddUserToGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUserToGroupResponseBody() = default;
};
class AddUserToGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddUserToGroupResponseBody> body{};

  AddUserToGroupResponse() {}

  explicit AddUserToGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddUserToGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserToGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserToGroupResponse() = default;
};
class BindMFADeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> serialNumber{};
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> authenticationCode1{};
  shared_ptr<string> authenticationCode2{};
  shared_ptr<string> akProxySuffix{};

  BindMFADeviceRequest() {}

  explicit BindMFADeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (authenticationCode1) {
      res["AuthenticationCode1"] = boost::any(*authenticationCode1);
    }
    if (authenticationCode2) {
      res["AuthenticationCode2"] = boost::any(*authenticationCode2);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("AuthenticationCode1") != m.end() && !m["AuthenticationCode1"].empty()) {
      authenticationCode1 = make_shared<string>(boost::any_cast<string>(m["AuthenticationCode1"]));
    }
    if (m.find("AuthenticationCode2") != m.end() && !m["AuthenticationCode2"].empty()) {
      authenticationCode2 = make_shared<string>(boost::any_cast<string>(m["AuthenticationCode2"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~BindMFADeviceRequest() = default;
};
class BindMFADeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindMFADeviceResponseBody() {}

  explicit BindMFADeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BindMFADeviceResponseBody() = default;
};
class BindMFADeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BindMFADeviceResponseBody> body{};

  BindMFADeviceResponse() {}

  explicit BindMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BindMFADeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindMFADeviceResponseBody>(model1);
      }
    }
  }


  virtual ~BindMFADeviceResponse() = default;
};
class ChangePasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> oldPassword{};
  shared_ptr<string> newPassword{};
  shared_ptr<string> akProxySuffix{};

  ChangePasswordRequest() {}

  explicit ChangePasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (oldPassword) {
      res["OldPassword"] = boost::any(*oldPassword);
    }
    if (newPassword) {
      res["NewPassword"] = boost::any(*newPassword);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OldPassword") != m.end() && !m["OldPassword"].empty()) {
      oldPassword = make_shared<string>(boost::any_cast<string>(m["OldPassword"]));
    }
    if (m.find("NewPassword") != m.end() && !m["NewPassword"].empty()) {
      newPassword = make_shared<string>(boost::any_cast<string>(m["NewPassword"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~ChangePasswordRequest() = default;
};
class ChangePasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ChangePasswordResponseBody() {}

  explicit ChangePasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangePasswordResponseBody() = default;
};
class ChangePasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ChangePasswordResponseBody> body{};

  ChangePasswordResponse() {}

  explicit ChangePasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ChangePasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangePasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ChangePasswordResponse() = default;
};
class CreateAccessKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> akProxySuffix{};

  CreateAccessKeyRequest() {}

  explicit CreateAccessKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~CreateAccessKeyRequest() = default;
};
class CreateAccessKeyResponseBodyAccessKey : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> createDate{};

  CreateAccessKeyResponseBodyAccessKey() {}

  explicit CreateAccessKeyResponseBodyAccessKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~CreateAccessKeyResponseBodyAccessKey() = default;
};
class CreateAccessKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateAccessKeyResponseBodyAccessKey> accessKey{};

  CreateAccessKeyResponseBody() {}

  explicit CreateAccessKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (accessKey) {
      res["AccessKey"] = accessKey ? boost::any(accessKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessKey"].type()) {
        CreateAccessKeyResponseBodyAccessKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessKey"]));
        accessKey = make_shared<CreateAccessKeyResponseBodyAccessKey>(model1);
      }
    }
  }


  virtual ~CreateAccessKeyResponseBody() = default;
};
class CreateAccessKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAccessKeyResponseBody> body{};

  CreateAccessKeyResponse() {}

  explicit CreateAccessKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAccessKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccessKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccessKeyResponse() = default;
};
class CreateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> appPrincipalName{};
  shared_ptr<string> appType{};
  shared_ptr<string> redirectUris{};
  shared_ptr<bool> secretRequired{};
  shared_ptr<long> accessTokenValidity{};
  shared_ptr<long> refreshTokenValidity{};
  shared_ptr<string> predefinedScopes{};
  shared_ptr<bool> isMultiTenant{};
  shared_ptr<string> akProxySuffix{};
  shared_ptr<string> appName{};

  CreateApplicationRequest() {}

  explicit CreateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (appPrincipalName) {
      res["AppPrincipalName"] = boost::any(*appPrincipalName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (redirectUris) {
      res["RedirectUris"] = boost::any(*redirectUris);
    }
    if (secretRequired) {
      res["SecretRequired"] = boost::any(*secretRequired);
    }
    if (accessTokenValidity) {
      res["AccessTokenValidity"] = boost::any(*accessTokenValidity);
    }
    if (refreshTokenValidity) {
      res["RefreshTokenValidity"] = boost::any(*refreshTokenValidity);
    }
    if (predefinedScopes) {
      res["PredefinedScopes"] = boost::any(*predefinedScopes);
    }
    if (isMultiTenant) {
      res["IsMultiTenant"] = boost::any(*isMultiTenant);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("AppPrincipalName") != m.end() && !m["AppPrincipalName"].empty()) {
      appPrincipalName = make_shared<string>(boost::any_cast<string>(m["AppPrincipalName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("RedirectUris") != m.end() && !m["RedirectUris"].empty()) {
      redirectUris = make_shared<string>(boost::any_cast<string>(m["RedirectUris"]));
    }
    if (m.find("SecretRequired") != m.end() && !m["SecretRequired"].empty()) {
      secretRequired = make_shared<bool>(boost::any_cast<bool>(m["SecretRequired"]));
    }
    if (m.find("AccessTokenValidity") != m.end() && !m["AccessTokenValidity"].empty()) {
      accessTokenValidity = make_shared<long>(boost::any_cast<long>(m["AccessTokenValidity"]));
    }
    if (m.find("RefreshTokenValidity") != m.end() && !m["RefreshTokenValidity"].empty()) {
      refreshTokenValidity = make_shared<long>(boost::any_cast<long>(m["RefreshTokenValidity"]));
    }
    if (m.find("PredefinedScopes") != m.end() && !m["PredefinedScopes"].empty()) {
      predefinedScopes = make_shared<string>(boost::any_cast<string>(m["PredefinedScopes"]));
    }
    if (m.find("IsMultiTenant") != m.end() && !m["IsMultiTenant"].empty()) {
      isMultiTenant = make_shared<bool>(boost::any_cast<bool>(m["IsMultiTenant"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
  }


  virtual ~CreateApplicationRequest() = default;
};
class CreateApplicationResponseBodyApplicationRedirectUris : public Darabonba::Model {
public:
  shared_ptr<vector<string>> redirectUri{};

  CreateApplicationResponseBodyApplicationRedirectUris() {}

  explicit CreateApplicationResponseBodyApplicationRedirectUris(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (redirectUri) {
      res["RedirectUri"] = boost::any(*redirectUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RedirectUri") != m.end() && !m["RedirectUri"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RedirectUri"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RedirectUri"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      redirectUri = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateApplicationResponseBodyApplicationRedirectUris() = default;
};
class CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() {}

  explicit CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() = default;
};
class CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes : public Darabonba::Model {
public:
  shared_ptr<vector<CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope>> predefinedScope{};

  CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes() {}

  explicit CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScope) {
      vector<boost::any> temp1;
      for(auto item1:*predefinedScope){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PredefinedScope"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScope") != m.end() && !m["PredefinedScope"].empty()) {
      if (typeid(vector<boost::any>) == m["PredefinedScope"].type()) {
        vector<CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PredefinedScope"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        predefinedScope = make_shared<vector<CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope>>(expect1);
      }
    }
  }


  virtual ~CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes() = default;
};
class CreateApplicationResponseBodyApplicationDelegatedScope : public Darabonba::Model {
public:
  shared_ptr<CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes> predefinedScopes{};

  CreateApplicationResponseBodyApplicationDelegatedScope() {}

  explicit CreateApplicationResponseBodyApplicationDelegatedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScopes) {
      res["PredefinedScopes"] = predefinedScopes ? boost::any(predefinedScopes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScopes") != m.end() && !m["PredefinedScopes"].empty()) {
      if (typeid(map<string, boost::any>) == m["PredefinedScopes"].type()) {
        CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PredefinedScopes"]));
        predefinedScopes = make_shared<CreateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes>(model1);
      }
    }
  }


  virtual ~CreateApplicationResponseBodyApplicationDelegatedScope() = default;
};
class CreateApplicationResponseBodyApplication : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<long> accessTokenValidity{};
  shared_ptr<bool> secretRequired{};
  shared_ptr<string> accountId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> appName{};
  shared_ptr<CreateApplicationResponseBodyApplicationRedirectUris> redirectUris{};
  shared_ptr<string> updateDate{};
  shared_ptr<CreateApplicationResponseBodyApplicationDelegatedScope> delegatedScope{};
  shared_ptr<string> appId{};
  shared_ptr<long> refreshTokenValidity{};
  shared_ptr<bool> isMultiTenant{};
  shared_ptr<string> appType{};

  CreateApplicationResponseBodyApplication() {}

  explicit CreateApplicationResponseBodyApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (accessTokenValidity) {
      res["AccessTokenValidity"] = boost::any(*accessTokenValidity);
    }
    if (secretRequired) {
      res["SecretRequired"] = boost::any(*secretRequired);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (redirectUris) {
      res["RedirectUris"] = redirectUris ? boost::any(redirectUris->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (delegatedScope) {
      res["DelegatedScope"] = delegatedScope ? boost::any(delegatedScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (refreshTokenValidity) {
      res["RefreshTokenValidity"] = boost::any(*refreshTokenValidity);
    }
    if (isMultiTenant) {
      res["IsMultiTenant"] = boost::any(*isMultiTenant);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("AccessTokenValidity") != m.end() && !m["AccessTokenValidity"].empty()) {
      accessTokenValidity = make_shared<long>(boost::any_cast<long>(m["AccessTokenValidity"]));
    }
    if (m.find("SecretRequired") != m.end() && !m["SecretRequired"].empty()) {
      secretRequired = make_shared<bool>(boost::any_cast<bool>(m["SecretRequired"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("RedirectUris") != m.end() && !m["RedirectUris"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedirectUris"].type()) {
        CreateApplicationResponseBodyApplicationRedirectUris model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedirectUris"]));
        redirectUris = make_shared<CreateApplicationResponseBodyApplicationRedirectUris>(model1);
      }
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("DelegatedScope") != m.end() && !m["DelegatedScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["DelegatedScope"].type()) {
        CreateApplicationResponseBodyApplicationDelegatedScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DelegatedScope"]));
        delegatedScope = make_shared<CreateApplicationResponseBodyApplicationDelegatedScope>(model1);
      }
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RefreshTokenValidity") != m.end() && !m["RefreshTokenValidity"].empty()) {
      refreshTokenValidity = make_shared<long>(boost::any_cast<long>(m["RefreshTokenValidity"]));
    }
    if (m.find("IsMultiTenant") != m.end() && !m["IsMultiTenant"].empty()) {
      isMultiTenant = make_shared<bool>(boost::any_cast<bool>(m["IsMultiTenant"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
  }


  virtual ~CreateApplicationResponseBodyApplication() = default;
};
class CreateApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateApplicationResponseBodyApplication> application{};

  CreateApplicationResponseBody() {}

  explicit CreateApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (application) {
      res["Application"] = application ? boost::any(application->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(map<string, boost::any>) == m["Application"].type()) {
        CreateApplicationResponseBodyApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Application"]));
        application = make_shared<CreateApplicationResponseBodyApplication>(model1);
      }
    }
  }


  virtual ~CreateApplicationResponseBody() = default;
};
class CreateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateApplicationResponseBody> body{};

  CreateApplicationResponse() {}

  explicit CreateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApplicationResponse() = default;
};
class CreateAppSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> akProxySuffix{};

  CreateAppSecretRequest() {}

  explicit CreateAppSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~CreateAppSecretRequest() = default;
};
class CreateAppSecretResponseBodyAppSecret : public Darabonba::Model {
public:
  shared_ptr<string> appSecretValue{};
  shared_ptr<string> appId{};
  shared_ptr<string> appSecretId{};
  shared_ptr<string> createDate{};

  CreateAppSecretResponseBodyAppSecret() {}

  explicit CreateAppSecretResponseBodyAppSecret(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appSecretValue) {
      res["AppSecretValue"] = boost::any(*appSecretValue);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecretId) {
      res["AppSecretId"] = boost::any(*appSecretId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppSecretValue") != m.end() && !m["AppSecretValue"].empty()) {
      appSecretValue = make_shared<string>(boost::any_cast<string>(m["AppSecretValue"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecretId") != m.end() && !m["AppSecretId"].empty()) {
      appSecretId = make_shared<string>(boost::any_cast<string>(m["AppSecretId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~CreateAppSecretResponseBodyAppSecret() = default;
};
class CreateAppSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateAppSecretResponseBodyAppSecret> appSecret{};

  CreateAppSecretResponseBody() {}

  explicit CreateAppSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (appSecret) {
      res["AppSecret"] = appSecret ? boost::any(appSecret->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppSecret"].type()) {
        CreateAppSecretResponseBodyAppSecret model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppSecret"]));
        appSecret = make_shared<CreateAppSecretResponseBodyAppSecret>(model1);
      }
    }
  }


  virtual ~CreateAppSecretResponseBody() = default;
};
class CreateAppSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAppSecretResponseBody> body{};

  CreateAppSecretResponse() {}

  explicit CreateAppSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAppSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppSecretResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppSecretResponse() = default;
};
class CreateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupPrincipalName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> comments{};
  shared_ptr<string> akProxySuffix{};
  shared_ptr<string> groupName{};

  CreateGroupRequest() {}

  explicit CreateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupPrincipalName) {
      res["GroupPrincipalName"] = boost::any(*groupPrincipalName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupPrincipalName") != m.end() && !m["GroupPrincipalName"].empty()) {
      groupPrincipalName = make_shared<string>(boost::any_cast<string>(m["GroupPrincipalName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~CreateGroupRequest() = default;
};
class CreateGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> groupName{};
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};

  CreateGroupResponseBodyGroup() {}

  explicit CreateGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~CreateGroupResponseBodyGroup() = default;
};
class CreateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateGroupResponseBodyGroup> group{};
  shared_ptr<string> requestId{};

  CreateGroupResponseBody() {}

  explicit CreateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = group ? boost::any(group->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      if (typeid(map<string, boost::any>) == m["Group"].type()) {
        CreateGroupResponseBodyGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Group"]));
        group = make_shared<CreateGroupResponseBodyGroup>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateGroupResponseBody() = default;
};
class CreateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGroupResponseBody> body{};

  CreateGroupResponse() {}

  explicit CreateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupResponse() = default;
};
class CreateLoginProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> password{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<bool> MFABindRequired{};
  shared_ptr<bool> generateRandomPassword{};
  shared_ptr<string> status{};
  shared_ptr<string> akProxySuffix{};

  CreateLoginProfileRequest() {}

  explicit CreateLoginProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    if (generateRandomPassword) {
      res["GenerateRandomPassword"] = boost::any(*generateRandomPassword);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
    if (m.find("GenerateRandomPassword") != m.end() && !m["GenerateRandomPassword"].empty()) {
      generateRandomPassword = make_shared<bool>(boost::any_cast<bool>(m["GenerateRandomPassword"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~CreateLoginProfileRequest() = default;
};
class CreateLoginProfileResponseBodyLoginProfile : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> status{};
  shared_ptr<string> updateDate{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<bool> MFABindRequired{};

  CreateLoginProfileResponseBodyLoginProfile() {}

  explicit CreateLoginProfileResponseBodyLoginProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
  }


  virtual ~CreateLoginProfileResponseBodyLoginProfile() = default;
};
class CreateLoginProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateLoginProfileResponseBodyLoginProfile> loginProfile{};

  CreateLoginProfileResponseBody() {}

  explicit CreateLoginProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (loginProfile) {
      res["LoginProfile"] = loginProfile ? boost::any(loginProfile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("LoginProfile") != m.end() && !m["LoginProfile"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginProfile"].type()) {
        CreateLoginProfileResponseBodyLoginProfile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginProfile"]));
        loginProfile = make_shared<CreateLoginProfileResponseBodyLoginProfile>(model1);
      }
    }
  }


  virtual ~CreateLoginProfileResponseBody() = default;
};
class CreateLoginProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateLoginProfileResponseBody> body{};

  CreateLoginProfileResponse() {}

  explicit CreateLoginProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateLoginProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLoginProfileResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLoginProfileResponse() = default;
};
class CreateSAMLProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> SAMLProviderName{};
  shared_ptr<string> SAMLMetadataDocument{};
  shared_ptr<string> description{};
  shared_ptr<string> akProxySuffix{};
  shared_ptr<string> encodedSAMLMetadataDocument{};

  CreateSAMLProviderRequest() {}

  explicit CreateSAMLProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    if (SAMLMetadataDocument) {
      res["SAMLMetadataDocument"] = boost::any(*SAMLMetadataDocument);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    if (encodedSAMLMetadataDocument) {
      res["EncodedSAMLMetadataDocument"] = boost::any(*encodedSAMLMetadataDocument);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
    if (m.find("SAMLMetadataDocument") != m.end() && !m["SAMLMetadataDocument"].empty()) {
      SAMLMetadataDocument = make_shared<string>(boost::any_cast<string>(m["SAMLMetadataDocument"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
    if (m.find("EncodedSAMLMetadataDocument") != m.end() && !m["EncodedSAMLMetadataDocument"].empty()) {
      encodedSAMLMetadataDocument = make_shared<string>(boost::any_cast<string>(m["EncodedSAMLMetadataDocument"]));
    }
  }


  virtual ~CreateSAMLProviderRequest() = default;
};
class CreateSAMLProviderResponseBodySAMLProvider : public Darabonba::Model {
public:
  shared_ptr<string> updateDate{};
  shared_ptr<string> description{};
  shared_ptr<string> SAMLProviderName{};
  shared_ptr<string> createDate{};
  shared_ptr<string> arn{};

  CreateSAMLProviderResponseBodySAMLProvider() {}

  explicit CreateSAMLProviderResponseBodySAMLProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~CreateSAMLProviderResponseBodySAMLProvider() = default;
};
class CreateSAMLProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateSAMLProviderResponseBodySAMLProvider> SAMLProvider{};

  CreateSAMLProviderResponseBody() {}

  explicit CreateSAMLProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SAMLProvider) {
      res["SAMLProvider"] = SAMLProvider ? boost::any(SAMLProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SAMLProvider") != m.end() && !m["SAMLProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["SAMLProvider"].type()) {
        CreateSAMLProviderResponseBodySAMLProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SAMLProvider"]));
        SAMLProvider = make_shared<CreateSAMLProviderResponseBodySAMLProvider>(model1);
      }
    }
  }


  virtual ~CreateSAMLProviderResponseBody() = default;
};
class CreateSAMLProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSAMLProviderResponseBody> body{};

  CreateSAMLProviderResponse() {}

  explicit CreateSAMLProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSAMLProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSAMLProviderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSAMLProviderResponse() = default;
};
class CreateUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> email{};
  shared_ptr<string> comments{};
  shared_ptr<string> akProxySuffix{};

  CreateUserRequest() {}

  explicit CreateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~CreateUserRequest() = default;
};
class CreateUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> email{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> userId{};
  shared_ptr<string> comments{};
  shared_ptr<string> lastLoginDate{};
  shared_ptr<string> createDate{};

  CreateUserResponseBodyUser() {}

  explicit CreateUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (lastLoginDate) {
      res["LastLoginDate"] = boost::any(*lastLoginDate);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("LastLoginDate") != m.end() && !m["LastLoginDate"].empty()) {
      lastLoginDate = make_shared<string>(boost::any_cast<string>(m["LastLoginDate"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~CreateUserResponseBodyUser() = default;
};
class CreateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateUserResponseBodyUser> user{};
  shared_ptr<string> requestId{};

  CreateUserResponseBody() {}

  explicit CreateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        CreateUserResponseBodyUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<CreateUserResponseBodyUser>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateUserResponseBody() = default;
};
class CreateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateUserResponseBody> body{};

  CreateUserResponse() {}

  explicit CreateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class CreateVirtualMFADeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> virtualMFADeviceName{};
  shared_ptr<string> akProxySuffix{};

  CreateVirtualMFADeviceRequest() {}

  explicit CreateVirtualMFADeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (virtualMFADeviceName) {
      res["VirtualMFADeviceName"] = boost::any(*virtualMFADeviceName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VirtualMFADeviceName") != m.end() && !m["VirtualMFADeviceName"].empty()) {
      virtualMFADeviceName = make_shared<string>(boost::any_cast<string>(m["VirtualMFADeviceName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~CreateVirtualMFADeviceRequest() = default;
};
class CreateVirtualMFADeviceResponseBodyVirtualMFADevice : public Darabonba::Model {
public:
  shared_ptr<string> serialNumber{};
  shared_ptr<string> QRCodePNG{};
  shared_ptr<string> base32StringSeed{};

  CreateVirtualMFADeviceResponseBodyVirtualMFADevice() {}

  explicit CreateVirtualMFADeviceResponseBodyVirtualMFADevice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (QRCodePNG) {
      res["QRCodePNG"] = boost::any(*QRCodePNG);
    }
    if (base32StringSeed) {
      res["Base32StringSeed"] = boost::any(*base32StringSeed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("QRCodePNG") != m.end() && !m["QRCodePNG"].empty()) {
      QRCodePNG = make_shared<string>(boost::any_cast<string>(m["QRCodePNG"]));
    }
    if (m.find("Base32StringSeed") != m.end() && !m["Base32StringSeed"].empty()) {
      base32StringSeed = make_shared<string>(boost::any_cast<string>(m["Base32StringSeed"]));
    }
  }


  virtual ~CreateVirtualMFADeviceResponseBodyVirtualMFADevice() = default;
};
class CreateVirtualMFADeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateVirtualMFADeviceResponseBodyVirtualMFADevice> virtualMFADevice{};
  shared_ptr<string> requestId{};

  CreateVirtualMFADeviceResponseBody() {}

  explicit CreateVirtualMFADeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (virtualMFADevice) {
      res["VirtualMFADevice"] = virtualMFADevice ? boost::any(virtualMFADevice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VirtualMFADevice") != m.end() && !m["VirtualMFADevice"].empty()) {
      if (typeid(map<string, boost::any>) == m["VirtualMFADevice"].type()) {
        CreateVirtualMFADeviceResponseBodyVirtualMFADevice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VirtualMFADevice"]));
        virtualMFADevice = make_shared<CreateVirtualMFADeviceResponseBodyVirtualMFADevice>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateVirtualMFADeviceResponseBody() = default;
};
class CreateVirtualMFADeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateVirtualMFADeviceResponseBody> body{};

  CreateVirtualMFADeviceResponse() {}

  explicit CreateVirtualMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateVirtualMFADeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVirtualMFADeviceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVirtualMFADeviceResponse() = default;
};
class DeleteAccessKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> akProxySuffix{};

  DeleteAccessKeyRequest() {}

  explicit DeleteAccessKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~DeleteAccessKeyRequest() = default;
};
class DeleteAccessKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccessKeyResponseBody() {}

  explicit DeleteAccessKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAccessKeyResponseBody() = default;
};
class DeleteAccessKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAccessKeyResponseBody> body{};

  DeleteAccessKeyResponse() {}

  explicit DeleteAccessKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAccessKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccessKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccessKeyResponse() = default;
};
class DeleteApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> akProxySuffix{};

  DeleteApplicationRequest() {}

  explicit DeleteApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~DeleteApplicationRequest() = default;
};
class DeleteApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteApplicationResponseBody() {}

  explicit DeleteApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteApplicationResponseBody() = default;
};
class DeleteApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteApplicationResponseBody> body{};

  DeleteApplicationResponse() {}

  explicit DeleteApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApplicationResponse() = default;
};
class DeleteAppSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appSecretId{};
  shared_ptr<string> akProxySuffix{};

  DeleteAppSecretRequest() {}

  explicit DeleteAppSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecretId) {
      res["AppSecretId"] = boost::any(*appSecretId);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecretId") != m.end() && !m["AppSecretId"].empty()) {
      appSecretId = make_shared<string>(boost::any_cast<string>(m["AppSecretId"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~DeleteAppSecretRequest() = default;
};
class DeleteAppSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAppSecretResponseBody() {}

  explicit DeleteAppSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAppSecretResponseBody() = default;
};
class DeleteAppSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAppSecretResponseBody> body{};

  DeleteAppSecretResponse() {}

  explicit DeleteAppSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAppSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppSecretResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppSecretResponse() = default;
};
class DeleteGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupPrincipalName{};
  shared_ptr<string> akProxySuffix{};
  shared_ptr<string> groupName{};

  DeleteGroupRequest() {}

  explicit DeleteGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupPrincipalName) {
      res["GroupPrincipalName"] = boost::any(*groupPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupPrincipalName") != m.end() && !m["GroupPrincipalName"].empty()) {
      groupPrincipalName = make_shared<string>(boost::any_cast<string>(m["GroupPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~DeleteGroupRequest() = default;
};
class DeleteGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGroupResponseBody() {}

  explicit DeleteGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGroupResponseBody() = default;
};
class DeleteGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGroupResponseBody> body{};

  DeleteGroupResponse() {}

  explicit DeleteGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupResponse() = default;
};
class DeleteLoginProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> akProxySuffix{};

  DeleteLoginProfileRequest() {}

  explicit DeleteLoginProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~DeleteLoginProfileRequest() = default;
};
class DeleteLoginProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLoginProfileResponseBody() {}

  explicit DeleteLoginProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLoginProfileResponseBody() = default;
};
class DeleteLoginProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteLoginProfileResponseBody> body{};

  DeleteLoginProfileResponse() {}

  explicit DeleteLoginProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteLoginProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLoginProfileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLoginProfileResponse() = default;
};
class DeleteSAMLProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> SAMLProviderName{};
  shared_ptr<string> akProxySuffix{};

  DeleteSAMLProviderRequest() {}

  explicit DeleteSAMLProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~DeleteSAMLProviderRequest() = default;
};
class DeleteSAMLProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSAMLProviderResponseBody() {}

  explicit DeleteSAMLProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSAMLProviderResponseBody() = default;
};
class DeleteSAMLProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSAMLProviderResponseBody> body{};

  DeleteSAMLProviderResponse() {}

  explicit DeleteSAMLProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSAMLProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSAMLProviderResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSAMLProviderResponse() = default;
};
class DeleteUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> userId{};
  shared_ptr<string> akProxySuffix{};

  DeleteUserRequest() {}

  explicit DeleteUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~DeleteUserRequest() = default;
};
class DeleteUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserResponseBody() {}

  explicit DeleteUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserResponseBody() = default;
};
class DeleteUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteUserResponseBody> body{};

  DeleteUserResponse() {}

  explicit DeleteUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserResponse() = default;
};
class DeleteVirtualMFADeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> serialNumber{};
  shared_ptr<string> akProxySuffix{};

  DeleteVirtualMFADeviceRequest() {}

  explicit DeleteVirtualMFADeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~DeleteVirtualMFADeviceRequest() = default;
};
class DeleteVirtualMFADeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVirtualMFADeviceResponseBody() {}

  explicit DeleteVirtualMFADeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVirtualMFADeviceResponseBody() = default;
};
class DeleteVirtualMFADeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteVirtualMFADeviceResponseBody> body{};

  DeleteVirtualMFADeviceResponse() {}

  explicit DeleteVirtualMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteVirtualMFADeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVirtualMFADeviceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVirtualMFADeviceResponse() = default;
};
class DisableVirtualMFARequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> akProxySuffix{};

  DisableVirtualMFARequest() {}

  explicit DisableVirtualMFARequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~DisableVirtualMFARequest() = default;
};
class DisableVirtualMFAResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableVirtualMFAResponseBody() {}

  explicit DisableVirtualMFAResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableVirtualMFAResponseBody() = default;
};
class DisableVirtualMFAResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableVirtualMFAResponseBody> body{};

  DisableVirtualMFAResponse() {}

  explicit DisableVirtualMFAResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableVirtualMFAResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableVirtualMFAResponseBody>(model1);
      }
    }
  }


  virtual ~DisableVirtualMFAResponse() = default;
};
class GenerateCredentialReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProxySuffix{};

  GenerateCredentialReportRequest() {}

  explicit GenerateCredentialReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GenerateCredentialReportRequest() = default;
};
class GenerateCredentialReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> state{};

  GenerateCredentialReportResponseBody() {}

  explicit GenerateCredentialReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~GenerateCredentialReportResponseBody() = default;
};
class GenerateCredentialReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateCredentialReportResponseBody> body{};

  GenerateCredentialReportResponse() {}

  explicit GenerateCredentialReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GenerateCredentialReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateCredentialReportResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateCredentialReportResponse() = default;
};
class GetAccessKeyLastUsedRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> akProxySuffix{};

  GetAccessKeyLastUsedRequest() {}

  explicit GetAccessKeyLastUsedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetAccessKeyLastUsedRequest() = default;
};
class GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed : public Darabonba::Model {
public:
  shared_ptr<string> lastUsedDate{};

  GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed() {}

  explicit GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastUsedDate) {
      res["LastUsedDate"] = boost::any(*lastUsedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastUsedDate") != m.end() && !m["LastUsedDate"].empty()) {
      lastUsedDate = make_shared<string>(boost::any_cast<string>(m["LastUsedDate"]));
    }
  }


  virtual ~GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed() = default;
};
class GetAccessKeyLastUsedResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed> accessKeyLastUsed{};
  shared_ptr<string> requestId{};

  GetAccessKeyLastUsedResponseBody() {}

  explicit GetAccessKeyLastUsedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyLastUsed) {
      res["AccessKeyLastUsed"] = accessKeyLastUsed ? boost::any(accessKeyLastUsed->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyLastUsed") != m.end() && !m["AccessKeyLastUsed"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessKeyLastUsed"].type()) {
        GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessKeyLastUsed"]));
        accessKeyLastUsed = make_shared<GetAccessKeyLastUsedResponseBodyAccessKeyLastUsed>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccessKeyLastUsedResponseBody() = default;
};
class GetAccessKeyLastUsedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAccessKeyLastUsedResponseBody> body{};

  GetAccessKeyLastUsedResponse() {}

  explicit GetAccessKeyLastUsedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAccessKeyLastUsedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccessKeyLastUsedResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccessKeyLastUsedResponse() = default;
};
class GetAccountMFAInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProxySuffix{};

  GetAccountMFAInfoRequest() {}

  explicit GetAccountMFAInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetAccountMFAInfoRequest() = default;
};
class GetAccountMFAInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> isMFAEnable{};

  GetAccountMFAInfoResponseBody() {}

  explicit GetAccountMFAInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (isMFAEnable) {
      res["IsMFAEnable"] = boost::any(*isMFAEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IsMFAEnable") != m.end() && !m["IsMFAEnable"].empty()) {
      isMFAEnable = make_shared<bool>(boost::any_cast<bool>(m["IsMFAEnable"]));
    }
  }


  virtual ~GetAccountMFAInfoResponseBody() = default;
};
class GetAccountMFAInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAccountMFAInfoResponseBody> body{};

  GetAccountMFAInfoResponse() {}

  explicit GetAccountMFAInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAccountMFAInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountMFAInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountMFAInfoResponse() = default;
};
class GetAccountSecurityPracticeReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProxySuffix{};

  GetAccountSecurityPracticeReportRequest() {}

  explicit GetAccountSecurityPracticeReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetAccountSecurityPracticeReportRequest() = default;
};
class GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo : public Darabonba::Model {
public:
  shared_ptr<long> unusedAkNum{};
  shared_ptr<long> subUserWithUnusedAccessKey{};
  shared_ptr<long> rootWithAccessKey{};
  shared_ptr<long> subUser{};
  shared_ptr<bool> bindMfa{};
  shared_ptr<long> oldAkNum{};
  shared_ptr<string> subUserPwdLevel{};
  shared_ptr<long> subUserWithOldAccessKey{};
  shared_ptr<long> subUserBindMfa{};

  GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo() {}

  explicit GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (unusedAkNum) {
      res["UnusedAkNum"] = boost::any(*unusedAkNum);
    }
    if (subUserWithUnusedAccessKey) {
      res["SubUserWithUnusedAccessKey"] = boost::any(*subUserWithUnusedAccessKey);
    }
    if (rootWithAccessKey) {
      res["RootWithAccessKey"] = boost::any(*rootWithAccessKey);
    }
    if (subUser) {
      res["SubUser"] = boost::any(*subUser);
    }
    if (bindMfa) {
      res["BindMfa"] = boost::any(*bindMfa);
    }
    if (oldAkNum) {
      res["OldAkNum"] = boost::any(*oldAkNum);
    }
    if (subUserPwdLevel) {
      res["SubUserPwdLevel"] = boost::any(*subUserPwdLevel);
    }
    if (subUserWithOldAccessKey) {
      res["SubUserWithOldAccessKey"] = boost::any(*subUserWithOldAccessKey);
    }
    if (subUserBindMfa) {
      res["SubUserBindMfa"] = boost::any(*subUserBindMfa);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UnusedAkNum") != m.end() && !m["UnusedAkNum"].empty()) {
      unusedAkNum = make_shared<long>(boost::any_cast<long>(m["UnusedAkNum"]));
    }
    if (m.find("SubUserWithUnusedAccessKey") != m.end() && !m["SubUserWithUnusedAccessKey"].empty()) {
      subUserWithUnusedAccessKey = make_shared<long>(boost::any_cast<long>(m["SubUserWithUnusedAccessKey"]));
    }
    if (m.find("RootWithAccessKey") != m.end() && !m["RootWithAccessKey"].empty()) {
      rootWithAccessKey = make_shared<long>(boost::any_cast<long>(m["RootWithAccessKey"]));
    }
    if (m.find("SubUser") != m.end() && !m["SubUser"].empty()) {
      subUser = make_shared<long>(boost::any_cast<long>(m["SubUser"]));
    }
    if (m.find("BindMfa") != m.end() && !m["BindMfa"].empty()) {
      bindMfa = make_shared<bool>(boost::any_cast<bool>(m["BindMfa"]));
    }
    if (m.find("OldAkNum") != m.end() && !m["OldAkNum"].empty()) {
      oldAkNum = make_shared<long>(boost::any_cast<long>(m["OldAkNum"]));
    }
    if (m.find("SubUserPwdLevel") != m.end() && !m["SubUserPwdLevel"].empty()) {
      subUserPwdLevel = make_shared<string>(boost::any_cast<string>(m["SubUserPwdLevel"]));
    }
    if (m.find("SubUserWithOldAccessKey") != m.end() && !m["SubUserWithOldAccessKey"].empty()) {
      subUserWithOldAccessKey = make_shared<long>(boost::any_cast<long>(m["SubUserWithOldAccessKey"]));
    }
    if (m.find("SubUserBindMfa") != m.end() && !m["SubUserBindMfa"].empty()) {
      subUserBindMfa = make_shared<long>(boost::any_cast<long>(m["SubUserBindMfa"]));
    }
  }


  virtual ~GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo() = default;
};
class GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo : public Darabonba::Model {
public:
  shared_ptr<GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo> accountSecurityPracticeUserInfo{};
  shared_ptr<long> score{};

  GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo() {}

  explicit GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountSecurityPracticeUserInfo) {
      res["AccountSecurityPracticeUserInfo"] = accountSecurityPracticeUserInfo ? boost::any(accountSecurityPracticeUserInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountSecurityPracticeUserInfo") != m.end() && !m["AccountSecurityPracticeUserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountSecurityPracticeUserInfo"].type()) {
        GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountSecurityPracticeUserInfo"]));
        accountSecurityPracticeUserInfo = make_shared<GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfoAccountSecurityPracticeUserInfo>(model1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
  }


  virtual ~GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo() = default;
};
class GetAccountSecurityPracticeReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo> accountSecurityPracticeInfo{};

  GetAccountSecurityPracticeReportResponseBody() {}

  explicit GetAccountSecurityPracticeReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (accountSecurityPracticeInfo) {
      res["AccountSecurityPracticeInfo"] = accountSecurityPracticeInfo ? boost::any(accountSecurityPracticeInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AccountSecurityPracticeInfo") != m.end() && !m["AccountSecurityPracticeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountSecurityPracticeInfo"].type()) {
        GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountSecurityPracticeInfo"]));
        accountSecurityPracticeInfo = make_shared<GetAccountSecurityPracticeReportResponseBodyAccountSecurityPracticeInfo>(model1);
      }
    }
  }


  virtual ~GetAccountSecurityPracticeReportResponseBody() = default;
};
class GetAccountSecurityPracticeReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAccountSecurityPracticeReportResponseBody> body{};

  GetAccountSecurityPracticeReportResponse() {}

  explicit GetAccountSecurityPracticeReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAccountSecurityPracticeReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountSecurityPracticeReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountSecurityPracticeReportResponse() = default;
};
class GetAccountSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProxySuffix{};

  GetAccountSummaryRequest() {}

  explicit GetAccountSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetAccountSummaryRequest() = default;
};
class GetAccountSummaryResponseBodySummaryMap : public Darabonba::Model {
public:
  shared_ptr<long> MFADevices{};
  shared_ptr<long> accessKeysPerUserQuota{};
  shared_ptr<long> attachedPoliciesPerGroupQuota{};
  shared_ptr<long> attachedSystemPoliciesPerRoleQuota{};
  shared_ptr<long> attachedPoliciesPerRoleQuota{};
  shared_ptr<long> groupsPerUserQuota{};
  shared_ptr<long> roles{};
  shared_ptr<long> policySizeQuota{};
  shared_ptr<long> attachedSystemPoliciesPerGroupQuota{};
  shared_ptr<long> attachedSystemPoliciesPerUserQuota{};
  shared_ptr<long> attachedPoliciesPerUserQuota{};
  shared_ptr<long> groupsQuota{};
  shared_ptr<long> groups{};
  shared_ptr<long> policiesQuota{};
  shared_ptr<long> virtualMFADevicesQuota{};
  shared_ptr<long> versionsPerPolicyQuota{};
  shared_ptr<long> rolesQuota{};
  shared_ptr<long> usersQuota{};
  shared_ptr<long> policies{};
  shared_ptr<long> users{};
  shared_ptr<long> MFADevicesInUse{};

  GetAccountSummaryResponseBodySummaryMap() {}

  explicit GetAccountSummaryResponseBodySummaryMap(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFADevices) {
      res["MFADevices"] = boost::any(*MFADevices);
    }
    if (accessKeysPerUserQuota) {
      res["AccessKeysPerUserQuota"] = boost::any(*accessKeysPerUserQuota);
    }
    if (attachedPoliciesPerGroupQuota) {
      res["AttachedPoliciesPerGroupQuota"] = boost::any(*attachedPoliciesPerGroupQuota);
    }
    if (attachedSystemPoliciesPerRoleQuota) {
      res["AttachedSystemPoliciesPerRoleQuota"] = boost::any(*attachedSystemPoliciesPerRoleQuota);
    }
    if (attachedPoliciesPerRoleQuota) {
      res["AttachedPoliciesPerRoleQuota"] = boost::any(*attachedPoliciesPerRoleQuota);
    }
    if (groupsPerUserQuota) {
      res["GroupsPerUserQuota"] = boost::any(*groupsPerUserQuota);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (policySizeQuota) {
      res["PolicySizeQuota"] = boost::any(*policySizeQuota);
    }
    if (attachedSystemPoliciesPerGroupQuota) {
      res["AttachedSystemPoliciesPerGroupQuota"] = boost::any(*attachedSystemPoliciesPerGroupQuota);
    }
    if (attachedSystemPoliciesPerUserQuota) {
      res["AttachedSystemPoliciesPerUserQuota"] = boost::any(*attachedSystemPoliciesPerUserQuota);
    }
    if (attachedPoliciesPerUserQuota) {
      res["AttachedPoliciesPerUserQuota"] = boost::any(*attachedPoliciesPerUserQuota);
    }
    if (groupsQuota) {
      res["GroupsQuota"] = boost::any(*groupsQuota);
    }
    if (groups) {
      res["Groups"] = boost::any(*groups);
    }
    if (policiesQuota) {
      res["PoliciesQuota"] = boost::any(*policiesQuota);
    }
    if (virtualMFADevicesQuota) {
      res["VirtualMFADevicesQuota"] = boost::any(*virtualMFADevicesQuota);
    }
    if (versionsPerPolicyQuota) {
      res["VersionsPerPolicyQuota"] = boost::any(*versionsPerPolicyQuota);
    }
    if (rolesQuota) {
      res["RolesQuota"] = boost::any(*rolesQuota);
    }
    if (usersQuota) {
      res["UsersQuota"] = boost::any(*usersQuota);
    }
    if (policies) {
      res["Policies"] = boost::any(*policies);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    if (MFADevicesInUse) {
      res["MFADevicesInUse"] = boost::any(*MFADevicesInUse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFADevices") != m.end() && !m["MFADevices"].empty()) {
      MFADevices = make_shared<long>(boost::any_cast<long>(m["MFADevices"]));
    }
    if (m.find("AccessKeysPerUserQuota") != m.end() && !m["AccessKeysPerUserQuota"].empty()) {
      accessKeysPerUserQuota = make_shared<long>(boost::any_cast<long>(m["AccessKeysPerUserQuota"]));
    }
    if (m.find("AttachedPoliciesPerGroupQuota") != m.end() && !m["AttachedPoliciesPerGroupQuota"].empty()) {
      attachedPoliciesPerGroupQuota = make_shared<long>(boost::any_cast<long>(m["AttachedPoliciesPerGroupQuota"]));
    }
    if (m.find("AttachedSystemPoliciesPerRoleQuota") != m.end() && !m["AttachedSystemPoliciesPerRoleQuota"].empty()) {
      attachedSystemPoliciesPerRoleQuota = make_shared<long>(boost::any_cast<long>(m["AttachedSystemPoliciesPerRoleQuota"]));
    }
    if (m.find("AttachedPoliciesPerRoleQuota") != m.end() && !m["AttachedPoliciesPerRoleQuota"].empty()) {
      attachedPoliciesPerRoleQuota = make_shared<long>(boost::any_cast<long>(m["AttachedPoliciesPerRoleQuota"]));
    }
    if (m.find("GroupsPerUserQuota") != m.end() && !m["GroupsPerUserQuota"].empty()) {
      groupsPerUserQuota = make_shared<long>(boost::any_cast<long>(m["GroupsPerUserQuota"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      roles = make_shared<long>(boost::any_cast<long>(m["Roles"]));
    }
    if (m.find("PolicySizeQuota") != m.end() && !m["PolicySizeQuota"].empty()) {
      policySizeQuota = make_shared<long>(boost::any_cast<long>(m["PolicySizeQuota"]));
    }
    if (m.find("AttachedSystemPoliciesPerGroupQuota") != m.end() && !m["AttachedSystemPoliciesPerGroupQuota"].empty()) {
      attachedSystemPoliciesPerGroupQuota = make_shared<long>(boost::any_cast<long>(m["AttachedSystemPoliciesPerGroupQuota"]));
    }
    if (m.find("AttachedSystemPoliciesPerUserQuota") != m.end() && !m["AttachedSystemPoliciesPerUserQuota"].empty()) {
      attachedSystemPoliciesPerUserQuota = make_shared<long>(boost::any_cast<long>(m["AttachedSystemPoliciesPerUserQuota"]));
    }
    if (m.find("AttachedPoliciesPerUserQuota") != m.end() && !m["AttachedPoliciesPerUserQuota"].empty()) {
      attachedPoliciesPerUserQuota = make_shared<long>(boost::any_cast<long>(m["AttachedPoliciesPerUserQuota"]));
    }
    if (m.find("GroupsQuota") != m.end() && !m["GroupsQuota"].empty()) {
      groupsQuota = make_shared<long>(boost::any_cast<long>(m["GroupsQuota"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      groups = make_shared<long>(boost::any_cast<long>(m["Groups"]));
    }
    if (m.find("PoliciesQuota") != m.end() && !m["PoliciesQuota"].empty()) {
      policiesQuota = make_shared<long>(boost::any_cast<long>(m["PoliciesQuota"]));
    }
    if (m.find("VirtualMFADevicesQuota") != m.end() && !m["VirtualMFADevicesQuota"].empty()) {
      virtualMFADevicesQuota = make_shared<long>(boost::any_cast<long>(m["VirtualMFADevicesQuota"]));
    }
    if (m.find("VersionsPerPolicyQuota") != m.end() && !m["VersionsPerPolicyQuota"].empty()) {
      versionsPerPolicyQuota = make_shared<long>(boost::any_cast<long>(m["VersionsPerPolicyQuota"]));
    }
    if (m.find("RolesQuota") != m.end() && !m["RolesQuota"].empty()) {
      rolesQuota = make_shared<long>(boost::any_cast<long>(m["RolesQuota"]));
    }
    if (m.find("UsersQuota") != m.end() && !m["UsersQuota"].empty()) {
      usersQuota = make_shared<long>(boost::any_cast<long>(m["UsersQuota"]));
    }
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      policies = make_shared<long>(boost::any_cast<long>(m["Policies"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      users = make_shared<long>(boost::any_cast<long>(m["Users"]));
    }
    if (m.find("MFADevicesInUse") != m.end() && !m["MFADevicesInUse"].empty()) {
      MFADevicesInUse = make_shared<long>(boost::any_cast<long>(m["MFADevicesInUse"]));
    }
  }


  virtual ~GetAccountSummaryResponseBodySummaryMap() = default;
};
class GetAccountSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAccountSummaryResponseBodySummaryMap> summaryMap{};

  GetAccountSummaryResponseBody() {}

  explicit GetAccountSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (summaryMap) {
      res["SummaryMap"] = summaryMap ? boost::any(summaryMap->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SummaryMap") != m.end() && !m["SummaryMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["SummaryMap"].type()) {
        GetAccountSummaryResponseBodySummaryMap model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SummaryMap"]));
        summaryMap = make_shared<GetAccountSummaryResponseBodySummaryMap>(model1);
      }
    }
  }


  virtual ~GetAccountSummaryResponseBody() = default;
};
class GetAccountSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAccountSummaryResponseBody> body{};

  GetAccountSummaryResponse() {}

  explicit GetAccountSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAccountSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountSummaryResponse() = default;
};
class GetApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> akProxySuffix{};

  GetApplicationRequest() {}

  explicit GetApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetApplicationRequest() = default;
};
class GetApplicationResponseBodyApplicationRedirectUris : public Darabonba::Model {
public:
  shared_ptr<vector<string>> redirectUri{};

  GetApplicationResponseBodyApplicationRedirectUris() {}

  explicit GetApplicationResponseBodyApplicationRedirectUris(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (redirectUri) {
      res["RedirectUri"] = boost::any(*redirectUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RedirectUri") != m.end() && !m["RedirectUri"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RedirectUri"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RedirectUri"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      redirectUri = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetApplicationResponseBodyApplicationRedirectUris() = default;
};
class GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() {}

  explicit GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() = default;
};
class GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes : public Darabonba::Model {
public:
  shared_ptr<vector<GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope>> predefinedScope{};

  GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes() {}

  explicit GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScope) {
      vector<boost::any> temp1;
      for(auto item1:*predefinedScope){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PredefinedScope"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScope") != m.end() && !m["PredefinedScope"].empty()) {
      if (typeid(vector<boost::any>) == m["PredefinedScope"].type()) {
        vector<GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PredefinedScope"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        predefinedScope = make_shared<vector<GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope>>(expect1);
      }
    }
  }


  virtual ~GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes() = default;
};
class GetApplicationResponseBodyApplicationDelegatedScope : public Darabonba::Model {
public:
  shared_ptr<GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes> predefinedScopes{};

  GetApplicationResponseBodyApplicationDelegatedScope() {}

  explicit GetApplicationResponseBodyApplicationDelegatedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScopes) {
      res["PredefinedScopes"] = predefinedScopes ? boost::any(predefinedScopes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScopes") != m.end() && !m["PredefinedScopes"].empty()) {
      if (typeid(map<string, boost::any>) == m["PredefinedScopes"].type()) {
        GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PredefinedScopes"]));
        predefinedScopes = make_shared<GetApplicationResponseBodyApplicationDelegatedScopePredefinedScopes>(model1);
      }
    }
  }


  virtual ~GetApplicationResponseBodyApplicationDelegatedScope() = default;
};
class GetApplicationResponseBodyApplication : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<long> accessTokenValidity{};
  shared_ptr<bool> secretRequired{};
  shared_ptr<string> accountId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> appName{};
  shared_ptr<GetApplicationResponseBodyApplicationRedirectUris> redirectUris{};
  shared_ptr<string> updateDate{};
  shared_ptr<GetApplicationResponseBodyApplicationDelegatedScope> delegatedScope{};
  shared_ptr<string> appId{};
  shared_ptr<long> refreshTokenValidity{};
  shared_ptr<bool> isMultiTenant{};
  shared_ptr<string> appType{};

  GetApplicationResponseBodyApplication() {}

  explicit GetApplicationResponseBodyApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (accessTokenValidity) {
      res["AccessTokenValidity"] = boost::any(*accessTokenValidity);
    }
    if (secretRequired) {
      res["SecretRequired"] = boost::any(*secretRequired);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (redirectUris) {
      res["RedirectUris"] = redirectUris ? boost::any(redirectUris->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (delegatedScope) {
      res["DelegatedScope"] = delegatedScope ? boost::any(delegatedScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (refreshTokenValidity) {
      res["RefreshTokenValidity"] = boost::any(*refreshTokenValidity);
    }
    if (isMultiTenant) {
      res["IsMultiTenant"] = boost::any(*isMultiTenant);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("AccessTokenValidity") != m.end() && !m["AccessTokenValidity"].empty()) {
      accessTokenValidity = make_shared<long>(boost::any_cast<long>(m["AccessTokenValidity"]));
    }
    if (m.find("SecretRequired") != m.end() && !m["SecretRequired"].empty()) {
      secretRequired = make_shared<bool>(boost::any_cast<bool>(m["SecretRequired"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("RedirectUris") != m.end() && !m["RedirectUris"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedirectUris"].type()) {
        GetApplicationResponseBodyApplicationRedirectUris model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedirectUris"]));
        redirectUris = make_shared<GetApplicationResponseBodyApplicationRedirectUris>(model1);
      }
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("DelegatedScope") != m.end() && !m["DelegatedScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["DelegatedScope"].type()) {
        GetApplicationResponseBodyApplicationDelegatedScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DelegatedScope"]));
        delegatedScope = make_shared<GetApplicationResponseBodyApplicationDelegatedScope>(model1);
      }
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RefreshTokenValidity") != m.end() && !m["RefreshTokenValidity"].empty()) {
      refreshTokenValidity = make_shared<long>(boost::any_cast<long>(m["RefreshTokenValidity"]));
    }
    if (m.find("IsMultiTenant") != m.end() && !m["IsMultiTenant"].empty()) {
      isMultiTenant = make_shared<bool>(boost::any_cast<bool>(m["IsMultiTenant"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
  }


  virtual ~GetApplicationResponseBodyApplication() = default;
};
class GetApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetApplicationResponseBodyApplication> application{};

  GetApplicationResponseBody() {}

  explicit GetApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (application) {
      res["Application"] = application ? boost::any(application->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(map<string, boost::any>) == m["Application"].type()) {
        GetApplicationResponseBodyApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Application"]));
        application = make_shared<GetApplicationResponseBodyApplication>(model1);
      }
    }
  }


  virtual ~GetApplicationResponseBody() = default;
};
class GetApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetApplicationResponseBody> body{};

  GetApplicationResponse() {}

  explicit GetApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~GetApplicationResponse() = default;
};
class GetAppSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appSecretId{};
  shared_ptr<string> akProxySuffix{};

  GetAppSecretRequest() {}

  explicit GetAppSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecretId) {
      res["AppSecretId"] = boost::any(*appSecretId);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecretId") != m.end() && !m["AppSecretId"].empty()) {
      appSecretId = make_shared<string>(boost::any_cast<string>(m["AppSecretId"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetAppSecretRequest() = default;
};
class GetAppSecretResponseBodyAppSecret : public Darabonba::Model {
public:
  shared_ptr<string> appSecretValue{};
  shared_ptr<string> appId{};
  shared_ptr<string> appSecretId{};
  shared_ptr<string> createDate{};

  GetAppSecretResponseBodyAppSecret() {}

  explicit GetAppSecretResponseBodyAppSecret(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appSecretValue) {
      res["AppSecretValue"] = boost::any(*appSecretValue);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecretId) {
      res["AppSecretId"] = boost::any(*appSecretId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppSecretValue") != m.end() && !m["AppSecretValue"].empty()) {
      appSecretValue = make_shared<string>(boost::any_cast<string>(m["AppSecretValue"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecretId") != m.end() && !m["AppSecretId"].empty()) {
      appSecretId = make_shared<string>(boost::any_cast<string>(m["AppSecretId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~GetAppSecretResponseBodyAppSecret() = default;
};
class GetAppSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAppSecretResponseBodyAppSecret> appSecret{};

  GetAppSecretResponseBody() {}

  explicit GetAppSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (appSecret) {
      res["AppSecret"] = appSecret ? boost::any(appSecret->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppSecret"].type()) {
        GetAppSecretResponseBodyAppSecret model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppSecret"]));
        appSecret = make_shared<GetAppSecretResponseBodyAppSecret>(model1);
      }
    }
  }


  virtual ~GetAppSecretResponseBody() = default;
};
class GetAppSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAppSecretResponseBody> body{};

  GetAppSecretResponse() {}

  explicit GetAppSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAppSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppSecretResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppSecretResponse() = default;
};
class GetCredentialReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProxySuffix{};

  GetCredentialReportRequest() {}

  explicit GetCredentialReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetCredentialReportRequest() = default;
};
class GetCredentialReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> generatedTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> content{};

  GetCredentialReportResponseBody() {}

  explicit GetCredentialReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generatedTime) {
      res["GeneratedTime"] = boost::any(*generatedTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GeneratedTime") != m.end() && !m["GeneratedTime"].empty()) {
      generatedTime = make_shared<string>(boost::any_cast<string>(m["GeneratedTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~GetCredentialReportResponseBody() = default;
};
class GetCredentialReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCredentialReportResponseBody> body{};

  GetCredentialReportResponse() {}

  explicit GetCredentialReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCredentialReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCredentialReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetCredentialReportResponse() = default;
};
class GetDefaultDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProxySuffix{};

  GetDefaultDomainRequest() {}

  explicit GetDefaultDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetDefaultDomainRequest() = default;
};
class GetDefaultDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> defaultDomainName{};
  shared_ptr<string> requestId{};

  GetDefaultDomainResponseBody() {}

  explicit GetDefaultDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultDomainName) {
      res["DefaultDomainName"] = boost::any(*defaultDomainName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultDomainName") != m.end() && !m["DefaultDomainName"].empty()) {
      defaultDomainName = make_shared<string>(boost::any_cast<string>(m["DefaultDomainName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDefaultDomainResponseBody() = default;
};
class GetDefaultDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDefaultDomainResponseBody> body{};

  GetDefaultDomainResponse() {}

  explicit GetDefaultDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDefaultDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDefaultDomainResponseBody>(model1);
      }
    }
  }


  virtual ~GetDefaultDomainResponse() = default;
};
class GetGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupPrincipalName{};
  shared_ptr<string> akProxySuffix{};
  shared_ptr<string> groupName{};

  GetGroupRequest() {}

  explicit GetGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupPrincipalName) {
      res["GroupPrincipalName"] = boost::any(*groupPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupPrincipalName") != m.end() && !m["GroupPrincipalName"].empty()) {
      groupPrincipalName = make_shared<string>(boost::any_cast<string>(m["GroupPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~GetGroupRequest() = default;
};
class GetGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> groupName{};
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};

  GetGroupResponseBodyGroup() {}

  explicit GetGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~GetGroupResponseBodyGroup() = default;
};
class GetGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetGroupResponseBodyGroup> group{};
  shared_ptr<string> requestId{};

  GetGroupResponseBody() {}

  explicit GetGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = group ? boost::any(group->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      if (typeid(map<string, boost::any>) == m["Group"].type()) {
        GetGroupResponseBodyGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Group"]));
        group = make_shared<GetGroupResponseBodyGroup>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetGroupResponseBody() = default;
};
class GetGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGroupResponseBody> body{};

  GetGroupResponse() {}

  explicit GetGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetGroupResponse() = default;
};
class GetLoginProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> akProxySuffix{};

  GetLoginProfileRequest() {}

  explicit GetLoginProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetLoginProfileRequest() = default;
};
class GetLoginProfileResponseBodyLoginProfile : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> lastLoginTime{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<bool> MFABindRequired{};

  GetLoginProfileResponseBodyLoginProfile() {}

  explicit GetLoginProfileResponseBodyLoginProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (lastLoginTime) {
      res["LastLoginTime"] = boost::any(*lastLoginTime);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("LastLoginTime") != m.end() && !m["LastLoginTime"].empty()) {
      lastLoginTime = make_shared<string>(boost::any_cast<string>(m["LastLoginTime"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
  }


  virtual ~GetLoginProfileResponseBodyLoginProfile() = default;
};
class GetLoginProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetLoginProfileResponseBodyLoginProfile> loginProfile{};

  GetLoginProfileResponseBody() {}

  explicit GetLoginProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (loginProfile) {
      res["LoginProfile"] = loginProfile ? boost::any(loginProfile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("LoginProfile") != m.end() && !m["LoginProfile"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginProfile"].type()) {
        GetLoginProfileResponseBodyLoginProfile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginProfile"]));
        loginProfile = make_shared<GetLoginProfileResponseBodyLoginProfile>(model1);
      }
    }
  }


  virtual ~GetLoginProfileResponseBody() = default;
};
class GetLoginProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLoginProfileResponseBody> body{};

  GetLoginProfileResponse() {}

  explicit GetLoginProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetLoginProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLoginProfileResponseBody>(model1);
      }
    }
  }


  virtual ~GetLoginProfileResponse() = default;
};
class GetPasswordPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProxySuffix{};

  GetPasswordPolicyRequest() {}

  explicit GetPasswordPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetPasswordPolicyRequest() = default;
};
class GetPasswordPolicyResponseBodyPasswordPolicy : public Darabonba::Model {
public:
  shared_ptr<bool> requireNumbers{};
  shared_ptr<bool> requireLowercaseCharacters{};
  shared_ptr<long> passwordReusePrevention{};
  shared_ptr<bool> requireSymbols{};
  shared_ptr<bool> passwordNotContainUserName{};
  shared_ptr<long> minimumPasswordDifferentCharacter{};
  shared_ptr<long> maxPasswordAge{};
  shared_ptr<bool> hardExpire{};
  shared_ptr<long> minimumPasswordLength{};
  shared_ptr<bool> requireUppercaseCharacters{};
  shared_ptr<long> maxLoginAttemps{};

  GetPasswordPolicyResponseBodyPasswordPolicy() {}

  explicit GetPasswordPolicyResponseBodyPasswordPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requireNumbers) {
      res["RequireNumbers"] = boost::any(*requireNumbers);
    }
    if (requireLowercaseCharacters) {
      res["RequireLowercaseCharacters"] = boost::any(*requireLowercaseCharacters);
    }
    if (passwordReusePrevention) {
      res["PasswordReusePrevention"] = boost::any(*passwordReusePrevention);
    }
    if (requireSymbols) {
      res["RequireSymbols"] = boost::any(*requireSymbols);
    }
    if (passwordNotContainUserName) {
      res["PasswordNotContainUserName"] = boost::any(*passwordNotContainUserName);
    }
    if (minimumPasswordDifferentCharacter) {
      res["MinimumPasswordDifferentCharacter"] = boost::any(*minimumPasswordDifferentCharacter);
    }
    if (maxPasswordAge) {
      res["MaxPasswordAge"] = boost::any(*maxPasswordAge);
    }
    if (hardExpire) {
      res["HardExpire"] = boost::any(*hardExpire);
    }
    if (minimumPasswordLength) {
      res["MinimumPasswordLength"] = boost::any(*minimumPasswordLength);
    }
    if (requireUppercaseCharacters) {
      res["RequireUppercaseCharacters"] = boost::any(*requireUppercaseCharacters);
    }
    if (maxLoginAttemps) {
      res["MaxLoginAttemps"] = boost::any(*maxLoginAttemps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequireNumbers") != m.end() && !m["RequireNumbers"].empty()) {
      requireNumbers = make_shared<bool>(boost::any_cast<bool>(m["RequireNumbers"]));
    }
    if (m.find("RequireLowercaseCharacters") != m.end() && !m["RequireLowercaseCharacters"].empty()) {
      requireLowercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireLowercaseCharacters"]));
    }
    if (m.find("PasswordReusePrevention") != m.end() && !m["PasswordReusePrevention"].empty()) {
      passwordReusePrevention = make_shared<long>(boost::any_cast<long>(m["PasswordReusePrevention"]));
    }
    if (m.find("RequireSymbols") != m.end() && !m["RequireSymbols"].empty()) {
      requireSymbols = make_shared<bool>(boost::any_cast<bool>(m["RequireSymbols"]));
    }
    if (m.find("PasswordNotContainUserName") != m.end() && !m["PasswordNotContainUserName"].empty()) {
      passwordNotContainUserName = make_shared<bool>(boost::any_cast<bool>(m["PasswordNotContainUserName"]));
    }
    if (m.find("MinimumPasswordDifferentCharacter") != m.end() && !m["MinimumPasswordDifferentCharacter"].empty()) {
      minimumPasswordDifferentCharacter = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordDifferentCharacter"]));
    }
    if (m.find("MaxPasswordAge") != m.end() && !m["MaxPasswordAge"].empty()) {
      maxPasswordAge = make_shared<long>(boost::any_cast<long>(m["MaxPasswordAge"]));
    }
    if (m.find("HardExpire") != m.end() && !m["HardExpire"].empty()) {
      hardExpire = make_shared<bool>(boost::any_cast<bool>(m["HardExpire"]));
    }
    if (m.find("MinimumPasswordLength") != m.end() && !m["MinimumPasswordLength"].empty()) {
      minimumPasswordLength = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordLength"]));
    }
    if (m.find("RequireUppercaseCharacters") != m.end() && !m["RequireUppercaseCharacters"].empty()) {
      requireUppercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireUppercaseCharacters"]));
    }
    if (m.find("MaxLoginAttemps") != m.end() && !m["MaxLoginAttemps"].empty()) {
      maxLoginAttemps = make_shared<long>(boost::any_cast<long>(m["MaxLoginAttemps"]));
    }
  }


  virtual ~GetPasswordPolicyResponseBodyPasswordPolicy() = default;
};
class GetPasswordPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetPasswordPolicyResponseBodyPasswordPolicy> passwordPolicy{};

  GetPasswordPolicyResponseBody() {}

  explicit GetPasswordPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (passwordPolicy) {
      res["PasswordPolicy"] = passwordPolicy ? boost::any(passwordPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PasswordPolicy") != m.end() && !m["PasswordPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["PasswordPolicy"].type()) {
        GetPasswordPolicyResponseBodyPasswordPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PasswordPolicy"]));
        passwordPolicy = make_shared<GetPasswordPolicyResponseBodyPasswordPolicy>(model1);
      }
    }
  }


  virtual ~GetPasswordPolicyResponseBody() = default;
};
class GetPasswordPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPasswordPolicyResponseBody> body{};

  GetPasswordPolicyResponse() {}

  explicit GetPasswordPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPasswordPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPasswordPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetPasswordPolicyResponse() = default;
};
class GetSAMLProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> SAMLProviderName{};
  shared_ptr<string> akProxySuffix{};

  GetSAMLProviderRequest() {}

  explicit GetSAMLProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetSAMLProviderRequest() = default;
};
class GetSAMLProviderResponseBodySAMLProvider : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> SAMLProviderName{};
  shared_ptr<string> createDate{};
  shared_ptr<string> encodedSAMLMetadataDocument{};
  shared_ptr<string> arn{};

  GetSAMLProviderResponseBodySAMLProvider() {}

  explicit GetSAMLProviderResponseBodySAMLProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (encodedSAMLMetadataDocument) {
      res["EncodedSAMLMetadataDocument"] = boost::any(*encodedSAMLMetadataDocument);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("EncodedSAMLMetadataDocument") != m.end() && !m["EncodedSAMLMetadataDocument"].empty()) {
      encodedSAMLMetadataDocument = make_shared<string>(boost::any_cast<string>(m["EncodedSAMLMetadataDocument"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~GetSAMLProviderResponseBodySAMLProvider() = default;
};
class GetSAMLProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetSAMLProviderResponseBodySAMLProvider> SAMLProvider{};

  GetSAMLProviderResponseBody() {}

  explicit GetSAMLProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SAMLProvider) {
      res["SAMLProvider"] = SAMLProvider ? boost::any(SAMLProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SAMLProvider") != m.end() && !m["SAMLProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["SAMLProvider"].type()) {
        GetSAMLProviderResponseBodySAMLProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SAMLProvider"]));
        SAMLProvider = make_shared<GetSAMLProviderResponseBodySAMLProvider>(model1);
      }
    }
  }


  virtual ~GetSAMLProviderResponseBody() = default;
};
class GetSAMLProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSAMLProviderResponseBody> body{};

  GetSAMLProviderResponse() {}

  explicit GetSAMLProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSAMLProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSAMLProviderResponseBody>(model1);
      }
    }
  }


  virtual ~GetSAMLProviderResponse() = default;
};
class GetSecurityPreferenceRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProxySuffix{};

  GetSecurityPreferenceRequest() {}

  explicit GetSecurityPreferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetSecurityPreferenceRequest() = default;
};
class GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToManageAccessKeys{};

  GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference() {}

  explicit GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToManageAccessKeys) {
      res["AllowUserToManageAccessKeys"] = boost::any(*allowUserToManageAccessKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToManageAccessKeys") != m.end() && !m["AllowUserToManageAccessKeys"].empty()) {
      allowUserToManageAccessKeys = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageAccessKeys"]));
    }
  }


  virtual ~GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference() = default;
};
class GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference : public Darabonba::Model {
public:
  shared_ptr<bool> enableSaveMFATicket{};
  shared_ptr<long> loginSessionDuration{};
  shared_ptr<string> loginNetworkMasks{};
  shared_ptr<bool> allowUserToChangePassword{};

  GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference() {}

  explicit GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableSaveMFATicket) {
      res["EnableSaveMFATicket"] = boost::any(*enableSaveMFATicket);
    }
    if (loginSessionDuration) {
      res["LoginSessionDuration"] = boost::any(*loginSessionDuration);
    }
    if (loginNetworkMasks) {
      res["LoginNetworkMasks"] = boost::any(*loginNetworkMasks);
    }
    if (allowUserToChangePassword) {
      res["AllowUserToChangePassword"] = boost::any(*allowUserToChangePassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableSaveMFATicket") != m.end() && !m["EnableSaveMFATicket"].empty()) {
      enableSaveMFATicket = make_shared<bool>(boost::any_cast<bool>(m["EnableSaveMFATicket"]));
    }
    if (m.find("LoginSessionDuration") != m.end() && !m["LoginSessionDuration"].empty()) {
      loginSessionDuration = make_shared<long>(boost::any_cast<long>(m["LoginSessionDuration"]));
    }
    if (m.find("LoginNetworkMasks") != m.end() && !m["LoginNetworkMasks"].empty()) {
      loginNetworkMasks = make_shared<string>(boost::any_cast<string>(m["LoginNetworkMasks"]));
    }
    if (m.find("AllowUserToChangePassword") != m.end() && !m["AllowUserToChangePassword"].empty()) {
      allowUserToChangePassword = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToChangePassword"]));
    }
  }


  virtual ~GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference() = default;
};
class GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToManageMFADevices{};

  GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference() {}

  explicit GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToManageMFADevices) {
      res["AllowUserToManageMFADevices"] = boost::any(*allowUserToManageMFADevices);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToManageMFADevices") != m.end() && !m["AllowUserToManageMFADevices"].empty()) {
      allowUserToManageMFADevices = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageMFADevices"]));
    }
  }


  virtual ~GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference() = default;
};
class GetSecurityPreferenceResponseBodySecurityPreference : public Darabonba::Model {
public:
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference> accessKeyPreference{};
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference> loginProfilePreference{};
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference> MFAPreference{};

  GetSecurityPreferenceResponseBodySecurityPreference() {}

  explicit GetSecurityPreferenceResponseBodySecurityPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyPreference) {
      res["AccessKeyPreference"] = accessKeyPreference ? boost::any(accessKeyPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loginProfilePreference) {
      res["LoginProfilePreference"] = loginProfilePreference ? boost::any(loginProfilePreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (MFAPreference) {
      res["MFAPreference"] = MFAPreference ? boost::any(MFAPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyPreference") != m.end() && !m["AccessKeyPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessKeyPreference"].type()) {
        GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessKeyPreference"]));
        accessKeyPreference = make_shared<GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference>(model1);
      }
    }
    if (m.find("LoginProfilePreference") != m.end() && !m["LoginProfilePreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginProfilePreference"].type()) {
        GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginProfilePreference"]));
        loginProfilePreference = make_shared<GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference>(model1);
      }
    }
    if (m.find("MFAPreference") != m.end() && !m["MFAPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["MFAPreference"].type()) {
        GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MFAPreference"]));
        MFAPreference = make_shared<GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference>(model1);
      }
    }
  }


  virtual ~GetSecurityPreferenceResponseBodySecurityPreference() = default;
};
class GetSecurityPreferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreference> securityPreference{};
  shared_ptr<string> requestId{};

  GetSecurityPreferenceResponseBody() {}

  explicit GetSecurityPreferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityPreference) {
      res["SecurityPreference"] = securityPreference ? boost::any(securityPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityPreference") != m.end() && !m["SecurityPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityPreference"].type()) {
        GetSecurityPreferenceResponseBodySecurityPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityPreference"]));
        securityPreference = make_shared<GetSecurityPreferenceResponseBodySecurityPreference>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSecurityPreferenceResponseBody() = default;
};
class GetSecurityPreferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSecurityPreferenceResponseBody> body{};

  GetSecurityPreferenceResponse() {}

  explicit GetSecurityPreferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSecurityPreferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSecurityPreferenceResponseBody>(model1);
      }
    }
  }


  virtual ~GetSecurityPreferenceResponse() = default;
};
class GetUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> userId{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> akProxySuffix{};

  GetUserRequest() {}

  explicit GetUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetUserRequest() = default;
};
class GetUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> email{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> userId{};
  shared_ptr<string> comments{};
  shared_ptr<string> lastLoginDate{};
  shared_ptr<string> createDate{};

  GetUserResponseBodyUser() {}

  explicit GetUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (lastLoginDate) {
      res["LastLoginDate"] = boost::any(*lastLoginDate);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("LastLoginDate") != m.end() && !m["LastLoginDate"].empty()) {
      lastLoginDate = make_shared<string>(boost::any_cast<string>(m["LastLoginDate"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~GetUserResponseBodyUser() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetUserResponseBodyUser> user{};
  shared_ptr<string> requestId{};

  GetUserResponseBody() {}

  explicit GetUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        GetUserResponseBodyUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<GetUserResponseBodyUser>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetUserResponseBody() = default;
};
class GetUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserResponseBody> body{};

  GetUserResponse() {}

  explicit GetUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class GetUserMFAInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> akProxySuffix{};

  GetUserMFAInfoRequest() {}

  explicit GetUserMFAInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetUserMFAInfoRequest() = default;
};
class GetUserMFAInfoResponseBodyMFADevice : public Darabonba::Model {
public:
  shared_ptr<string> serialNumber{};

  GetUserMFAInfoResponseBodyMFADevice() {}

  explicit GetUserMFAInfoResponseBodyMFADevice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~GetUserMFAInfoResponseBodyMFADevice() = default;
};
class GetUserMFAInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetUserMFAInfoResponseBodyMFADevice> MFADevice{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> isMFAEnable{};

  GetUserMFAInfoResponseBody() {}

  explicit GetUserMFAInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFADevice) {
      res["MFADevice"] = MFADevice ? boost::any(MFADevice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (isMFAEnable) {
      res["IsMFAEnable"] = boost::any(*isMFAEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFADevice") != m.end() && !m["MFADevice"].empty()) {
      if (typeid(map<string, boost::any>) == m["MFADevice"].type()) {
        GetUserMFAInfoResponseBodyMFADevice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MFADevice"]));
        MFADevice = make_shared<GetUserMFAInfoResponseBodyMFADevice>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IsMFAEnable") != m.end() && !m["IsMFAEnable"].empty()) {
      isMFAEnable = make_shared<bool>(boost::any_cast<bool>(m["IsMFAEnable"]));
    }
  }


  virtual ~GetUserMFAInfoResponseBody() = default;
};
class GetUserMFAInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserMFAInfoResponseBody> body{};

  GetUserMFAInfoResponse() {}

  explicit GetUserMFAInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserMFAInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserMFAInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserMFAInfoResponse() = default;
};
class GetUserSsoSettingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProxySuffix{};

  GetUserSsoSettingsRequest() {}

  explicit GetUserSsoSettingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~GetUserSsoSettingsRequest() = default;
};
class GetUserSsoSettingsResponseBodyUserSsoSettings : public Darabonba::Model {
public:
  shared_ptr<string> auxiliaryDomain{};
  shared_ptr<string> metadataDocument{};
  shared_ptr<bool> ssoEnabled{};

  GetUserSsoSettingsResponseBodyUserSsoSettings() {}

  explicit GetUserSsoSettingsResponseBodyUserSsoSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auxiliaryDomain) {
      res["AuxiliaryDomain"] = boost::any(*auxiliaryDomain);
    }
    if (metadataDocument) {
      res["MetadataDocument"] = boost::any(*metadataDocument);
    }
    if (ssoEnabled) {
      res["SsoEnabled"] = boost::any(*ssoEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuxiliaryDomain") != m.end() && !m["AuxiliaryDomain"].empty()) {
      auxiliaryDomain = make_shared<string>(boost::any_cast<string>(m["AuxiliaryDomain"]));
    }
    if (m.find("MetadataDocument") != m.end() && !m["MetadataDocument"].empty()) {
      metadataDocument = make_shared<string>(boost::any_cast<string>(m["MetadataDocument"]));
    }
    if (m.find("SsoEnabled") != m.end() && !m["SsoEnabled"].empty()) {
      ssoEnabled = make_shared<bool>(boost::any_cast<bool>(m["SsoEnabled"]));
    }
  }


  virtual ~GetUserSsoSettingsResponseBodyUserSsoSettings() = default;
};
class GetUserSsoSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetUserSsoSettingsResponseBodyUserSsoSettings> userSsoSettings{};
  shared_ptr<string> requestId{};

  GetUserSsoSettingsResponseBody() {}

  explicit GetUserSsoSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userSsoSettings) {
      res["UserSsoSettings"] = userSsoSettings ? boost::any(userSsoSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserSsoSettings") != m.end() && !m["UserSsoSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserSsoSettings"].type()) {
        GetUserSsoSettingsResponseBodyUserSsoSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserSsoSettings"]));
        userSsoSettings = make_shared<GetUserSsoSettingsResponseBodyUserSsoSettings>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetUserSsoSettingsResponseBody() = default;
};
class GetUserSsoSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserSsoSettingsResponseBody> body{};

  GetUserSsoSettingsResponse() {}

  explicit GetUserSsoSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserSsoSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserSsoSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserSsoSettingsResponse() = default;
};
class ListAccessKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> akProxySuffix{};

  ListAccessKeysRequest() {}

  explicit ListAccessKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~ListAccessKeysRequest() = default;
};
class ListAccessKeysResponseBodyAccessKeysAccessKey : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> createDate{};

  ListAccessKeysResponseBodyAccessKeysAccessKey() {}

  explicit ListAccessKeysResponseBodyAccessKeysAccessKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~ListAccessKeysResponseBodyAccessKeysAccessKey() = default;
};
class ListAccessKeysResponseBodyAccessKeys : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccessKeysResponseBodyAccessKeysAccessKey>> accessKey{};

  ListAccessKeysResponseBodyAccessKeys() {}

  explicit ListAccessKeysResponseBodyAccessKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      vector<boost::any> temp1;
      for(auto item1:*accessKey){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessKey"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessKey"].type()) {
        vector<ListAccessKeysResponseBodyAccessKeysAccessKey> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessKey"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccessKeysResponseBodyAccessKeysAccessKey model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessKey = make_shared<vector<ListAccessKeysResponseBodyAccessKeysAccessKey>>(expect1);
      }
    }
  }


  virtual ~ListAccessKeysResponseBodyAccessKeys() = default;
};
class ListAccessKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAccessKeysResponseBodyAccessKeys> accessKeys{};
  shared_ptr<string> requestId{};

  ListAccessKeysResponseBody() {}

  explicit ListAccessKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeys) {
      res["AccessKeys"] = accessKeys ? boost::any(accessKeys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeys") != m.end() && !m["AccessKeys"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessKeys"].type()) {
        ListAccessKeysResponseBodyAccessKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessKeys"]));
        accessKeys = make_shared<ListAccessKeysResponseBodyAccessKeys>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAccessKeysResponseBody() = default;
};
class ListAccessKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAccessKeysResponseBody> body{};

  ListAccessKeysResponse() {}

  explicit ListAccessKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAccessKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccessKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccessKeysResponse() = default;
};
class ListApplicationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProxySuffix{};

  ListApplicationsRequest() {}

  explicit ListApplicationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~ListApplicationsRequest() = default;
};
class ListApplicationsResponseBodyApplicationsApplicationRedirectUris : public Darabonba::Model {
public:
  shared_ptr<vector<string>> redirectUri{};

  ListApplicationsResponseBodyApplicationsApplicationRedirectUris() {}

  explicit ListApplicationsResponseBodyApplicationsApplicationRedirectUris(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (redirectUri) {
      res["RedirectUri"] = boost::any(*redirectUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RedirectUri") != m.end() && !m["RedirectUri"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RedirectUri"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RedirectUri"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      redirectUri = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListApplicationsResponseBodyApplicationsApplicationRedirectUris() = default;
};
class ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope() {}

  explicit ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope() = default;
};
class ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope>> predefinedScope{};

  ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes() {}

  explicit ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScope) {
      vector<boost::any> temp1;
      for(auto item1:*predefinedScope){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PredefinedScope"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScope") != m.end() && !m["PredefinedScope"].empty()) {
      if (typeid(vector<boost::any>) == m["PredefinedScope"].type()) {
        vector<ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PredefinedScope"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        predefinedScope = make_shared<vector<ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopesPredefinedScope>>(expect1);
      }
    }
  }


  virtual ~ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes() = default;
};
class ListApplicationsResponseBodyApplicationsApplicationDelegatedScope : public Darabonba::Model {
public:
  shared_ptr<ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes> predefinedScopes{};

  ListApplicationsResponseBodyApplicationsApplicationDelegatedScope() {}

  explicit ListApplicationsResponseBodyApplicationsApplicationDelegatedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScopes) {
      res["PredefinedScopes"] = predefinedScopes ? boost::any(predefinedScopes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScopes") != m.end() && !m["PredefinedScopes"].empty()) {
      if (typeid(map<string, boost::any>) == m["PredefinedScopes"].type()) {
        ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PredefinedScopes"]));
        predefinedScopes = make_shared<ListApplicationsResponseBodyApplicationsApplicationDelegatedScopePredefinedScopes>(model1);
      }
    }
  }


  virtual ~ListApplicationsResponseBodyApplicationsApplicationDelegatedScope() = default;
};
class ListApplicationsResponseBodyApplicationsApplication : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<long> accessTokenValidity{};
  shared_ptr<bool> secretRequired{};
  shared_ptr<string> accountId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> appName{};
  shared_ptr<ListApplicationsResponseBodyApplicationsApplicationRedirectUris> redirectUris{};
  shared_ptr<string> updateDate{};
  shared_ptr<ListApplicationsResponseBodyApplicationsApplicationDelegatedScope> delegatedScope{};
  shared_ptr<string> appId{};
  shared_ptr<long> refreshTokenValidity{};
  shared_ptr<bool> isMultiTenant{};
  shared_ptr<string> appType{};

  ListApplicationsResponseBodyApplicationsApplication() {}

  explicit ListApplicationsResponseBodyApplicationsApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (accessTokenValidity) {
      res["AccessTokenValidity"] = boost::any(*accessTokenValidity);
    }
    if (secretRequired) {
      res["SecretRequired"] = boost::any(*secretRequired);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (redirectUris) {
      res["RedirectUris"] = redirectUris ? boost::any(redirectUris->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (delegatedScope) {
      res["DelegatedScope"] = delegatedScope ? boost::any(delegatedScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (refreshTokenValidity) {
      res["RefreshTokenValidity"] = boost::any(*refreshTokenValidity);
    }
    if (isMultiTenant) {
      res["IsMultiTenant"] = boost::any(*isMultiTenant);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("AccessTokenValidity") != m.end() && !m["AccessTokenValidity"].empty()) {
      accessTokenValidity = make_shared<long>(boost::any_cast<long>(m["AccessTokenValidity"]));
    }
    if (m.find("SecretRequired") != m.end() && !m["SecretRequired"].empty()) {
      secretRequired = make_shared<bool>(boost::any_cast<bool>(m["SecretRequired"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("RedirectUris") != m.end() && !m["RedirectUris"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedirectUris"].type()) {
        ListApplicationsResponseBodyApplicationsApplicationRedirectUris model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedirectUris"]));
        redirectUris = make_shared<ListApplicationsResponseBodyApplicationsApplicationRedirectUris>(model1);
      }
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("DelegatedScope") != m.end() && !m["DelegatedScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["DelegatedScope"].type()) {
        ListApplicationsResponseBodyApplicationsApplicationDelegatedScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DelegatedScope"]));
        delegatedScope = make_shared<ListApplicationsResponseBodyApplicationsApplicationDelegatedScope>(model1);
      }
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RefreshTokenValidity") != m.end() && !m["RefreshTokenValidity"].empty()) {
      refreshTokenValidity = make_shared<long>(boost::any_cast<long>(m["RefreshTokenValidity"]));
    }
    if (m.find("IsMultiTenant") != m.end() && !m["IsMultiTenant"].empty()) {
      isMultiTenant = make_shared<bool>(boost::any_cast<bool>(m["IsMultiTenant"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
  }


  virtual ~ListApplicationsResponseBodyApplicationsApplication() = default;
};
class ListApplicationsResponseBodyApplications : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationsResponseBodyApplicationsApplication>> application{};

  ListApplicationsResponseBodyApplications() {}

  explicit ListApplicationsResponseBodyApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      vector<boost::any> temp1;
      for(auto item1:*application){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Application"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(vector<boost::any>) == m["Application"].type()) {
        vector<ListApplicationsResponseBodyApplicationsApplication> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Application"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsResponseBodyApplicationsApplication model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        application = make_shared<vector<ListApplicationsResponseBodyApplicationsApplication>>(expect1);
      }
    }
  }


  virtual ~ListApplicationsResponseBodyApplications() = default;
};
class ListApplicationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListApplicationsResponseBodyApplications> applications{};

  ListApplicationsResponseBody() {}

  explicit ListApplicationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (applications) {
      res["Applications"] = applications ? boost::any(applications->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(map<string, boost::any>) == m["Applications"].type()) {
        ListApplicationsResponseBodyApplications model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Applications"]));
        applications = make_shared<ListApplicationsResponseBodyApplications>(model1);
      }
    }
  }


  virtual ~ListApplicationsResponseBody() = default;
};
class ListApplicationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListApplicationsResponseBody> body{};

  ListApplicationsResponse() {}

  explicit ListApplicationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListApplicationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplicationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplicationsResponse() = default;
};
class ListAppSecretIdsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> akProxySuffix{};

  ListAppSecretIdsRequest() {}

  explicit ListAppSecretIdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~ListAppSecretIdsRequest() = default;
};
class ListAppSecretIdsResponseBodyAppSecretsAppSecret : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appSecretId{};
  shared_ptr<string> createDate{};

  ListAppSecretIdsResponseBodyAppSecretsAppSecret() {}

  explicit ListAppSecretIdsResponseBodyAppSecretsAppSecret(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecretId) {
      res["AppSecretId"] = boost::any(*appSecretId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecretId") != m.end() && !m["AppSecretId"].empty()) {
      appSecretId = make_shared<string>(boost::any_cast<string>(m["AppSecretId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~ListAppSecretIdsResponseBodyAppSecretsAppSecret() = default;
};
class ListAppSecretIdsResponseBodyAppSecrets : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppSecretIdsResponseBodyAppSecretsAppSecret>> appSecret{};

  ListAppSecretIdsResponseBodyAppSecrets() {}

  explicit ListAppSecretIdsResponseBodyAppSecrets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appSecret) {
      vector<boost::any> temp1;
      for(auto item1:*appSecret){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppSecret"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      if (typeid(vector<boost::any>) == m["AppSecret"].type()) {
        vector<ListAppSecretIdsResponseBodyAppSecretsAppSecret> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppSecret"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppSecretIdsResponseBodyAppSecretsAppSecret model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appSecret = make_shared<vector<ListAppSecretIdsResponseBodyAppSecretsAppSecret>>(expect1);
      }
    }
  }


  virtual ~ListAppSecretIdsResponseBodyAppSecrets() = default;
};
class ListAppSecretIdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAppSecretIdsResponseBodyAppSecrets> appSecrets{};
  shared_ptr<string> requestId{};

  ListAppSecretIdsResponseBody() {}

  explicit ListAppSecretIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appSecrets) {
      res["AppSecrets"] = appSecrets ? boost::any(appSecrets->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppSecrets") != m.end() && !m["AppSecrets"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppSecrets"].type()) {
        ListAppSecretIdsResponseBodyAppSecrets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppSecrets"]));
        appSecrets = make_shared<ListAppSecretIdsResponseBodyAppSecrets>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAppSecretIdsResponseBody() = default;
};
class ListAppSecretIdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAppSecretIdsResponseBody> body{};

  ListAppSecretIdsResponse() {}

  explicit ListAppSecretIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAppSecretIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppSecretIdsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppSecretIdsResponse() = default;
};
class ListGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};
  shared_ptr<string> akProxySuffix{};

  ListGroupsRequest() {}

  explicit ListGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~ListGroupsRequest() = default;
};
class ListGroupsResponseBodyGroupsGroup : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> groupName{};
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};

  ListGroupsResponseBodyGroupsGroup() {}

  explicit ListGroupsResponseBodyGroupsGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~ListGroupsResponseBodyGroupsGroup() = default;
};
class ListGroupsResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupsResponseBodyGroupsGroup>> group{};

  ListGroupsResponseBodyGroups() {}

  explicit ListGroupsResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      vector<boost::any> temp1;
      for(auto item1:*group){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Group"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      if (typeid(vector<boost::any>) == m["Group"].type()) {
        vector<ListGroupsResponseBodyGroupsGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Group"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupsResponseBodyGroupsGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        group = make_shared<vector<ListGroupsResponseBodyGroupsGroup>>(expect1);
      }
    }
  }


  virtual ~ListGroupsResponseBodyGroups() = default;
};
class ListGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListGroupsResponseBodyGroups> groups{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};

  ListGroupsResponseBody() {}

  explicit ListGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (groups) {
      res["Groups"] = groups ? boost::any(groups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(map<string, boost::any>) == m["Groups"].type()) {
        ListGroupsResponseBodyGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Groups"]));
        groups = make_shared<ListGroupsResponseBodyGroups>(model1);
      }
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
  }


  virtual ~ListGroupsResponseBody() = default;
};
class ListGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGroupsResponseBody> body{};

  ListGroupsResponse() {}

  explicit ListGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupsResponse() = default;
};
class ListGroupsForUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> akProxySuffix{};

  ListGroupsForUserRequest() {}

  explicit ListGroupsForUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~ListGroupsForUserRequest() = default;
};
class ListGroupsForUserResponseBodyGroupsGroup : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> comments{};
  shared_ptr<string> joinDate{};

  ListGroupsForUserResponseBodyGroupsGroup() {}

  explicit ListGroupsForUserResponseBodyGroupsGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (joinDate) {
      res["JoinDate"] = boost::any(*joinDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("JoinDate") != m.end() && !m["JoinDate"].empty()) {
      joinDate = make_shared<string>(boost::any_cast<string>(m["JoinDate"]));
    }
  }


  virtual ~ListGroupsForUserResponseBodyGroupsGroup() = default;
};
class ListGroupsForUserResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupsForUserResponseBodyGroupsGroup>> group{};

  ListGroupsForUserResponseBodyGroups() {}

  explicit ListGroupsForUserResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      vector<boost::any> temp1;
      for(auto item1:*group){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Group"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      if (typeid(vector<boost::any>) == m["Group"].type()) {
        vector<ListGroupsForUserResponseBodyGroupsGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Group"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupsForUserResponseBodyGroupsGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        group = make_shared<vector<ListGroupsForUserResponseBodyGroupsGroup>>(expect1);
      }
    }
  }


  virtual ~ListGroupsForUserResponseBodyGroups() = default;
};
class ListGroupsForUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListGroupsForUserResponseBodyGroups> groups{};

  ListGroupsForUserResponseBody() {}

  explicit ListGroupsForUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (groups) {
      res["Groups"] = groups ? boost::any(groups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(map<string, boost::any>) == m["Groups"].type()) {
        ListGroupsForUserResponseBodyGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Groups"]));
        groups = make_shared<ListGroupsForUserResponseBodyGroups>(model1);
      }
    }
  }


  virtual ~ListGroupsForUserResponseBody() = default;
};
class ListGroupsForUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGroupsForUserResponseBody> body{};

  ListGroupsForUserResponse() {}

  explicit ListGroupsForUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGroupsForUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupsForUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupsForUserResponse() = default;
};
class ListPredefinedScopesRequest : public Darabonba::Model {
public:
  shared_ptr<string> akProxySuffix{};
  shared_ptr<string> appType{};

  ListPredefinedScopesRequest() {}

  explicit ListPredefinedScopesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
  }


  virtual ~ListPredefinedScopesRequest() = default;
};
class ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope() {}

  explicit ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope() = default;
};
class ListPredefinedScopesResponseBodyPredefinedScopes : public Darabonba::Model {
public:
  shared_ptr<vector<ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope>> predefinedScope{};

  ListPredefinedScopesResponseBodyPredefinedScopes() {}

  explicit ListPredefinedScopesResponseBodyPredefinedScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScope) {
      vector<boost::any> temp1;
      for(auto item1:*predefinedScope){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PredefinedScope"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScope") != m.end() && !m["PredefinedScope"].empty()) {
      if (typeid(vector<boost::any>) == m["PredefinedScope"].type()) {
        vector<ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PredefinedScope"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        predefinedScope = make_shared<vector<ListPredefinedScopesResponseBodyPredefinedScopesPredefinedScope>>(expect1);
      }
    }
  }


  virtual ~ListPredefinedScopesResponseBodyPredefinedScopes() = default;
};
class ListPredefinedScopesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListPredefinedScopesResponseBodyPredefinedScopes> predefinedScopes{};
  shared_ptr<string> requestId{};

  ListPredefinedScopesResponseBody() {}

  explicit ListPredefinedScopesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScopes) {
      res["PredefinedScopes"] = predefinedScopes ? boost::any(predefinedScopes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScopes") != m.end() && !m["PredefinedScopes"].empty()) {
      if (typeid(map<string, boost::any>) == m["PredefinedScopes"].type()) {
        ListPredefinedScopesResponseBodyPredefinedScopes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PredefinedScopes"]));
        predefinedScopes = make_shared<ListPredefinedScopesResponseBodyPredefinedScopes>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPredefinedScopesResponseBody() = default;
};
class ListPredefinedScopesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPredefinedScopesResponseBody> body{};

  ListPredefinedScopesResponse() {}

  explicit ListPredefinedScopesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPredefinedScopesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPredefinedScopesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPredefinedScopesResponse() = default;
};
class ListSAMLProvidersRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};
  shared_ptr<string> akProxySuffix{};

  ListSAMLProvidersRequest() {}

  explicit ListSAMLProvidersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~ListSAMLProvidersRequest() = default;
};
class ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider : public Darabonba::Model {
public:
  shared_ptr<string> updateDate{};
  shared_ptr<string> description{};
  shared_ptr<string> SAMLProviderName{};
  shared_ptr<string> createDate{};
  shared_ptr<string> arn{};

  ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider() {}

  explicit ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider() = default;
};
class ListSAMLProvidersResponseBodySAMLProviders : public Darabonba::Model {
public:
  shared_ptr<vector<ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider>> SAMLProvider{};

  ListSAMLProvidersResponseBodySAMLProviders() {}

  explicit ListSAMLProvidersResponseBodySAMLProviders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SAMLProvider) {
      vector<boost::any> temp1;
      for(auto item1:*SAMLProvider){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SAMLProvider"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SAMLProvider") != m.end() && !m["SAMLProvider"].empty()) {
      if (typeid(vector<boost::any>) == m["SAMLProvider"].type()) {
        vector<ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SAMLProvider"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        SAMLProvider = make_shared<vector<ListSAMLProvidersResponseBodySAMLProvidersSAMLProvider>>(expect1);
      }
    }
  }


  virtual ~ListSAMLProvidersResponseBodySAMLProviders() = default;
};
class ListSAMLProvidersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListSAMLProvidersResponseBodySAMLProviders> SAMLProviders{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};

  ListSAMLProvidersResponseBody() {}

  explicit ListSAMLProvidersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SAMLProviders) {
      res["SAMLProviders"] = SAMLProviders ? boost::any(SAMLProviders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SAMLProviders") != m.end() && !m["SAMLProviders"].empty()) {
      if (typeid(map<string, boost::any>) == m["SAMLProviders"].type()) {
        ListSAMLProvidersResponseBodySAMLProviders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SAMLProviders"]));
        SAMLProviders = make_shared<ListSAMLProvidersResponseBodySAMLProviders>(model1);
      }
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
  }


  virtual ~ListSAMLProvidersResponseBody() = default;
};
class ListSAMLProvidersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSAMLProvidersResponseBody> body{};

  ListSAMLProvidersResponse() {}

  explicit ListSAMLProvidersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSAMLProvidersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSAMLProvidersResponseBody>(model1);
      }
    }
  }


  virtual ~ListSAMLProvidersResponse() = default;
};
class ListUserBasicInfosRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};
  shared_ptr<string> akProxySuffix{};

  ListUserBasicInfosRequest() {}

  explicit ListUserBasicInfosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~ListUserBasicInfosRequest() = default;
};
class ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> userId{};

  ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo() {}

  explicit ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo() = default;
};
class ListUserBasicInfosResponseBodyUserBasicInfos : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo>> userBasicInfo{};

  ListUserBasicInfosResponseBodyUserBasicInfos() {}

  explicit ListUserBasicInfosResponseBodyUserBasicInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userBasicInfo) {
      vector<boost::any> temp1;
      for(auto item1:*userBasicInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserBasicInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserBasicInfo") != m.end() && !m["UserBasicInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["UserBasicInfo"].type()) {
        vector<ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserBasicInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userBasicInfo = make_shared<vector<ListUserBasicInfosResponseBodyUserBasicInfosUserBasicInfo>>(expect1);
      }
    }
  }


  virtual ~ListUserBasicInfosResponseBodyUserBasicInfos() = default;
};
class ListUserBasicInfosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<ListUserBasicInfosResponseBodyUserBasicInfos> userBasicInfos{};
  shared_ptr<string> marker{};

  ListUserBasicInfosResponseBody() {}

  explicit ListUserBasicInfosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (userBasicInfos) {
      res["UserBasicInfos"] = userBasicInfos ? boost::any(userBasicInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("UserBasicInfos") != m.end() && !m["UserBasicInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserBasicInfos"].type()) {
        ListUserBasicInfosResponseBodyUserBasicInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserBasicInfos"]));
        userBasicInfos = make_shared<ListUserBasicInfosResponseBodyUserBasicInfos>(model1);
      }
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
  }


  virtual ~ListUserBasicInfosResponseBody() = default;
};
class ListUserBasicInfosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListUserBasicInfosResponseBody> body{};

  ListUserBasicInfosResponse() {}

  explicit ListUserBasicInfosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserBasicInfosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserBasicInfosResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserBasicInfosResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};
  shared_ptr<string> akProxySuffix{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyUsersUser : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> email{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> userId{};
  shared_ptr<string> comments{};
  shared_ptr<string> lastLoginDate{};
  shared_ptr<string> createDate{};

  ListUsersResponseBodyUsersUser() {}

  explicit ListUsersResponseBodyUsersUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (lastLoginDate) {
      res["LastLoginDate"] = boost::any(*lastLoginDate);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("LastLoginDate") != m.end() && !m["LastLoginDate"].empty()) {
      lastLoginDate = make_shared<string>(boost::any_cast<string>(m["LastLoginDate"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~ListUsersResponseBodyUsersUser() = default;
};
class ListUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<vector<ListUsersResponseBodyUsersUser>> user{};

  ListUsersResponseBodyUsers() {}

  explicit ListUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      vector<boost::any> temp1;
      for(auto item1:*user){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["User"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<ListUsersResponseBodyUsersUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyUsersUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<ListUsersResponseBodyUsersUser>>(expect1);
      }
    }
  }


  virtual ~ListUsersResponseBodyUsers() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<ListUsersResponseBodyUsers> users{};

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
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (users) {
      res["Users"] = users ? boost::any(users->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(map<string, boost::any>) == m["Users"].type()) {
        ListUsersResponseBodyUsers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Users"]));
        users = make_shared<ListUsersResponseBodyUsers>(model1);
      }
    }
  }


  virtual ~ListUsersResponseBody() = default;
};
class ListUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListUsersResponseBody> body{};

  ListUsersResponse() {}

  explicit ListUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
class ListUsersForGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupPrincipalName{};
  shared_ptr<string> akProxySuffix{};
  shared_ptr<string> groupName{};
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};

  ListUsersForGroupRequest() {}

  explicit ListUsersForGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupPrincipalName) {
      res["GroupPrincipalName"] = boost::any(*groupPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupPrincipalName") != m.end() && !m["GroupPrincipalName"].empty()) {
      groupPrincipalName = make_shared<string>(boost::any_cast<string>(m["GroupPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
  }


  virtual ~ListUsersForGroupRequest() = default;
};
class ListUsersForGroupResponseBodyUsersUser : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> userId{};
  shared_ptr<string> joinDate{};

  ListUsersForGroupResponseBodyUsersUser() {}

  explicit ListUsersForGroupResponseBodyUsersUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (joinDate) {
      res["JoinDate"] = boost::any(*joinDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("JoinDate") != m.end() && !m["JoinDate"].empty()) {
      joinDate = make_shared<string>(boost::any_cast<string>(m["JoinDate"]));
    }
  }


  virtual ~ListUsersForGroupResponseBodyUsersUser() = default;
};
class ListUsersForGroupResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<vector<ListUsersForGroupResponseBodyUsersUser>> user{};

  ListUsersForGroupResponseBodyUsers() {}

  explicit ListUsersForGroupResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      vector<boost::any> temp1;
      for(auto item1:*user){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["User"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<ListUsersForGroupResponseBodyUsersUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersForGroupResponseBodyUsersUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<ListUsersForGroupResponseBodyUsersUser>>(expect1);
      }
    }
  }


  virtual ~ListUsersForGroupResponseBodyUsers() = default;
};
class ListUsersForGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<ListUsersForGroupResponseBodyUsers> users{};

  ListUsersForGroupResponseBody() {}

  explicit ListUsersForGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (users) {
      res["Users"] = users ? boost::any(users->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(map<string, boost::any>) == m["Users"].type()) {
        ListUsersForGroupResponseBodyUsers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Users"]));
        users = make_shared<ListUsersForGroupResponseBodyUsers>(model1);
      }
    }
  }


  virtual ~ListUsersForGroupResponseBody() = default;
};
class ListUsersForGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListUsersForGroupResponseBody> body{};

  ListUsersForGroupResponse() {}

  explicit ListUsersForGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUsersForGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersForGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersForGroupResponse() = default;
};
class ListVirtualMFADevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};
  shared_ptr<string> akProxySuffix{};

  ListVirtualMFADevicesRequest() {}

  explicit ListVirtualMFADevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxItems) {
      res["MaxItems"] = boost::any(*maxItems);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~ListVirtualMFADevicesRequest() = default;
};
class ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> userId{};

  ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser() {}

  explicit ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser() = default;
};
class ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice : public Darabonba::Model {
public:
  shared_ptr<string> serialNumber{};
  shared_ptr<ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser> user{};
  shared_ptr<string> activateDate{};

  ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice() {}

  explicit ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (activateDate) {
      res["ActivateDate"] = boost::any(*activateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser>(model1);
      }
    }
    if (m.find("ActivateDate") != m.end() && !m["ActivateDate"].empty()) {
      activateDate = make_shared<string>(boost::any_cast<string>(m["ActivateDate"]));
    }
  }


  virtual ~ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice() = default;
};
class ListVirtualMFADevicesResponseBodyVirtualMFADevices : public Darabonba::Model {
public:
  shared_ptr<vector<ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice>> virtualMFADevice{};

  ListVirtualMFADevicesResponseBodyVirtualMFADevices() {}

  explicit ListVirtualMFADevicesResponseBodyVirtualMFADevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (virtualMFADevice) {
      vector<boost::any> temp1;
      for(auto item1:*virtualMFADevice){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VirtualMFADevice"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VirtualMFADevice") != m.end() && !m["VirtualMFADevice"].empty()) {
      if (typeid(vector<boost::any>) == m["VirtualMFADevice"].type()) {
        vector<ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VirtualMFADevice"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        virtualMFADevice = make_shared<vector<ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice>>(expect1);
      }
    }
  }


  virtual ~ListVirtualMFADevicesResponseBodyVirtualMFADevices() = default;
};
class ListVirtualMFADevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListVirtualMFADevicesResponseBodyVirtualMFADevices> virtualMFADevices{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};

  ListVirtualMFADevicesResponseBody() {}

  explicit ListVirtualMFADevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (virtualMFADevices) {
      res["VirtualMFADevices"] = virtualMFADevices ? boost::any(virtualMFADevices->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VirtualMFADevices") != m.end() && !m["VirtualMFADevices"].empty()) {
      if (typeid(map<string, boost::any>) == m["VirtualMFADevices"].type()) {
        ListVirtualMFADevicesResponseBodyVirtualMFADevices model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VirtualMFADevices"]));
        virtualMFADevices = make_shared<ListVirtualMFADevicesResponseBodyVirtualMFADevices>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
  }


  virtual ~ListVirtualMFADevicesResponseBody() = default;
};
class ListVirtualMFADevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVirtualMFADevicesResponseBody> body{};

  ListVirtualMFADevicesResponse() {}

  explicit ListVirtualMFADevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVirtualMFADevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVirtualMFADevicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVirtualMFADevicesResponse() = default;
};
class RemoveUserFromGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> groupPrincipalName{};
  shared_ptr<string> akProxySuffix{};
  shared_ptr<string> groupName{};

  RemoveUserFromGroupRequest() {}

  explicit RemoveUserFromGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (groupPrincipalName) {
      res["GroupPrincipalName"] = boost::any(*groupPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("GroupPrincipalName") != m.end() && !m["GroupPrincipalName"].empty()) {
      groupPrincipalName = make_shared<string>(boost::any_cast<string>(m["GroupPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~RemoveUserFromGroupRequest() = default;
};
class RemoveUserFromGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveUserFromGroupResponseBody() {}

  explicit RemoveUserFromGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveUserFromGroupResponseBody() = default;
};
class RemoveUserFromGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveUserFromGroupResponseBody> body{};

  RemoveUserFromGroupResponse() {}

  explicit RemoveUserFromGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveUserFromGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveUserFromGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveUserFromGroupResponse() = default;
};
class SetDefaultDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> defaultDomainName{};
  shared_ptr<string> akProxySuffix{};

  SetDefaultDomainRequest() {}

  explicit SetDefaultDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultDomainName) {
      res["DefaultDomainName"] = boost::any(*defaultDomainName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultDomainName") != m.end() && !m["DefaultDomainName"].empty()) {
      defaultDomainName = make_shared<string>(boost::any_cast<string>(m["DefaultDomainName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~SetDefaultDomainRequest() = default;
};
class SetDefaultDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> defaultDomainName{};
  shared_ptr<string> requestId{};

  SetDefaultDomainResponseBody() {}

  explicit SetDefaultDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultDomainName) {
      res["DefaultDomainName"] = boost::any(*defaultDomainName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultDomainName") != m.end() && !m["DefaultDomainName"].empty()) {
      defaultDomainName = make_shared<string>(boost::any_cast<string>(m["DefaultDomainName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetDefaultDomainResponseBody() = default;
};
class SetDefaultDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetDefaultDomainResponseBody> body{};

  SetDefaultDomainResponse() {}

  explicit SetDefaultDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetDefaultDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDefaultDomainResponseBody>(model1);
      }
    }
  }


  virtual ~SetDefaultDomainResponse() = default;
};
class SetPasswordPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<long> minimumPasswordLength{};
  shared_ptr<bool> requireLowercaseCharacters{};
  shared_ptr<bool> requireUppercaseCharacters{};
  shared_ptr<bool> requireNumbers{};
  shared_ptr<bool> requireSymbols{};
  shared_ptr<bool> hardExpire{};
  shared_ptr<long> maxLoginAttemps{};
  shared_ptr<long> passwordReusePrevention{};
  shared_ptr<long> maxPasswordAge{};
  shared_ptr<long> minimumPasswordDifferentCharacter{};
  shared_ptr<bool> passwordNotContainUserName{};
  shared_ptr<string> akProxySuffix{};

  SetPasswordPolicyRequest() {}

  explicit SetPasswordPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (minimumPasswordLength) {
      res["MinimumPasswordLength"] = boost::any(*minimumPasswordLength);
    }
    if (requireLowercaseCharacters) {
      res["RequireLowercaseCharacters"] = boost::any(*requireLowercaseCharacters);
    }
    if (requireUppercaseCharacters) {
      res["RequireUppercaseCharacters"] = boost::any(*requireUppercaseCharacters);
    }
    if (requireNumbers) {
      res["RequireNumbers"] = boost::any(*requireNumbers);
    }
    if (requireSymbols) {
      res["RequireSymbols"] = boost::any(*requireSymbols);
    }
    if (hardExpire) {
      res["HardExpire"] = boost::any(*hardExpire);
    }
    if (maxLoginAttemps) {
      res["MaxLoginAttemps"] = boost::any(*maxLoginAttemps);
    }
    if (passwordReusePrevention) {
      res["PasswordReusePrevention"] = boost::any(*passwordReusePrevention);
    }
    if (maxPasswordAge) {
      res["MaxPasswordAge"] = boost::any(*maxPasswordAge);
    }
    if (minimumPasswordDifferentCharacter) {
      res["MinimumPasswordDifferentCharacter"] = boost::any(*minimumPasswordDifferentCharacter);
    }
    if (passwordNotContainUserName) {
      res["PasswordNotContainUserName"] = boost::any(*passwordNotContainUserName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MinimumPasswordLength") != m.end() && !m["MinimumPasswordLength"].empty()) {
      minimumPasswordLength = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordLength"]));
    }
    if (m.find("RequireLowercaseCharacters") != m.end() && !m["RequireLowercaseCharacters"].empty()) {
      requireLowercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireLowercaseCharacters"]));
    }
    if (m.find("RequireUppercaseCharacters") != m.end() && !m["RequireUppercaseCharacters"].empty()) {
      requireUppercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireUppercaseCharacters"]));
    }
    if (m.find("RequireNumbers") != m.end() && !m["RequireNumbers"].empty()) {
      requireNumbers = make_shared<bool>(boost::any_cast<bool>(m["RequireNumbers"]));
    }
    if (m.find("RequireSymbols") != m.end() && !m["RequireSymbols"].empty()) {
      requireSymbols = make_shared<bool>(boost::any_cast<bool>(m["RequireSymbols"]));
    }
    if (m.find("HardExpire") != m.end() && !m["HardExpire"].empty()) {
      hardExpire = make_shared<bool>(boost::any_cast<bool>(m["HardExpire"]));
    }
    if (m.find("MaxLoginAttemps") != m.end() && !m["MaxLoginAttemps"].empty()) {
      maxLoginAttemps = make_shared<long>(boost::any_cast<long>(m["MaxLoginAttemps"]));
    }
    if (m.find("PasswordReusePrevention") != m.end() && !m["PasswordReusePrevention"].empty()) {
      passwordReusePrevention = make_shared<long>(boost::any_cast<long>(m["PasswordReusePrevention"]));
    }
    if (m.find("MaxPasswordAge") != m.end() && !m["MaxPasswordAge"].empty()) {
      maxPasswordAge = make_shared<long>(boost::any_cast<long>(m["MaxPasswordAge"]));
    }
    if (m.find("MinimumPasswordDifferentCharacter") != m.end() && !m["MinimumPasswordDifferentCharacter"].empty()) {
      minimumPasswordDifferentCharacter = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordDifferentCharacter"]));
    }
    if (m.find("PasswordNotContainUserName") != m.end() && !m["PasswordNotContainUserName"].empty()) {
      passwordNotContainUserName = make_shared<bool>(boost::any_cast<bool>(m["PasswordNotContainUserName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~SetPasswordPolicyRequest() = default;
};
class SetPasswordPolicyResponseBodyPasswordPolicy : public Darabonba::Model {
public:
  shared_ptr<bool> requireNumbers{};
  shared_ptr<bool> requireLowercaseCharacters{};
  shared_ptr<long> passwordReusePrevention{};
  shared_ptr<bool> requireSymbols{};
  shared_ptr<bool> passwordNotContainUserName{};
  shared_ptr<long> minimumPasswordDifferentCharacter{};
  shared_ptr<long> maxPasswordAge{};
  shared_ptr<bool> hardExpire{};
  shared_ptr<long> minimumPasswordLength{};
  shared_ptr<bool> requireUppercaseCharacters{};
  shared_ptr<long> maxLoginAttemps{};

  SetPasswordPolicyResponseBodyPasswordPolicy() {}

  explicit SetPasswordPolicyResponseBodyPasswordPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requireNumbers) {
      res["RequireNumbers"] = boost::any(*requireNumbers);
    }
    if (requireLowercaseCharacters) {
      res["RequireLowercaseCharacters"] = boost::any(*requireLowercaseCharacters);
    }
    if (passwordReusePrevention) {
      res["PasswordReusePrevention"] = boost::any(*passwordReusePrevention);
    }
    if (requireSymbols) {
      res["RequireSymbols"] = boost::any(*requireSymbols);
    }
    if (passwordNotContainUserName) {
      res["PasswordNotContainUserName"] = boost::any(*passwordNotContainUserName);
    }
    if (minimumPasswordDifferentCharacter) {
      res["MinimumPasswordDifferentCharacter"] = boost::any(*minimumPasswordDifferentCharacter);
    }
    if (maxPasswordAge) {
      res["MaxPasswordAge"] = boost::any(*maxPasswordAge);
    }
    if (hardExpire) {
      res["HardExpire"] = boost::any(*hardExpire);
    }
    if (minimumPasswordLength) {
      res["MinimumPasswordLength"] = boost::any(*minimumPasswordLength);
    }
    if (requireUppercaseCharacters) {
      res["RequireUppercaseCharacters"] = boost::any(*requireUppercaseCharacters);
    }
    if (maxLoginAttemps) {
      res["MaxLoginAttemps"] = boost::any(*maxLoginAttemps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequireNumbers") != m.end() && !m["RequireNumbers"].empty()) {
      requireNumbers = make_shared<bool>(boost::any_cast<bool>(m["RequireNumbers"]));
    }
    if (m.find("RequireLowercaseCharacters") != m.end() && !m["RequireLowercaseCharacters"].empty()) {
      requireLowercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireLowercaseCharacters"]));
    }
    if (m.find("PasswordReusePrevention") != m.end() && !m["PasswordReusePrevention"].empty()) {
      passwordReusePrevention = make_shared<long>(boost::any_cast<long>(m["PasswordReusePrevention"]));
    }
    if (m.find("RequireSymbols") != m.end() && !m["RequireSymbols"].empty()) {
      requireSymbols = make_shared<bool>(boost::any_cast<bool>(m["RequireSymbols"]));
    }
    if (m.find("PasswordNotContainUserName") != m.end() && !m["PasswordNotContainUserName"].empty()) {
      passwordNotContainUserName = make_shared<bool>(boost::any_cast<bool>(m["PasswordNotContainUserName"]));
    }
    if (m.find("MinimumPasswordDifferentCharacter") != m.end() && !m["MinimumPasswordDifferentCharacter"].empty()) {
      minimumPasswordDifferentCharacter = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordDifferentCharacter"]));
    }
    if (m.find("MaxPasswordAge") != m.end() && !m["MaxPasswordAge"].empty()) {
      maxPasswordAge = make_shared<long>(boost::any_cast<long>(m["MaxPasswordAge"]));
    }
    if (m.find("HardExpire") != m.end() && !m["HardExpire"].empty()) {
      hardExpire = make_shared<bool>(boost::any_cast<bool>(m["HardExpire"]));
    }
    if (m.find("MinimumPasswordLength") != m.end() && !m["MinimumPasswordLength"].empty()) {
      minimumPasswordLength = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordLength"]));
    }
    if (m.find("RequireUppercaseCharacters") != m.end() && !m["RequireUppercaseCharacters"].empty()) {
      requireUppercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireUppercaseCharacters"]));
    }
    if (m.find("MaxLoginAttemps") != m.end() && !m["MaxLoginAttemps"].empty()) {
      maxLoginAttemps = make_shared<long>(boost::any_cast<long>(m["MaxLoginAttemps"]));
    }
  }


  virtual ~SetPasswordPolicyResponseBodyPasswordPolicy() = default;
};
class SetPasswordPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SetPasswordPolicyResponseBodyPasswordPolicy> passwordPolicy{};

  SetPasswordPolicyResponseBody() {}

  explicit SetPasswordPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (passwordPolicy) {
      res["PasswordPolicy"] = passwordPolicy ? boost::any(passwordPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PasswordPolicy") != m.end() && !m["PasswordPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["PasswordPolicy"].type()) {
        SetPasswordPolicyResponseBodyPasswordPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PasswordPolicy"]));
        passwordPolicy = make_shared<SetPasswordPolicyResponseBodyPasswordPolicy>(model1);
      }
    }
  }


  virtual ~SetPasswordPolicyResponseBody() = default;
};
class SetPasswordPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetPasswordPolicyResponseBody> body{};

  SetPasswordPolicyResponse() {}

  explicit SetPasswordPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetPasswordPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetPasswordPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~SetPasswordPolicyResponse() = default;
};
class SetSecurityPreferenceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableSaveMFATicket{};
  shared_ptr<bool> allowUserToChangePassword{};
  shared_ptr<bool> allowUserToManageAccessKeys{};
  shared_ptr<bool> allowUserToManageMFADevices{};
  shared_ptr<long> loginSessionDuration{};
  shared_ptr<string> loginNetworkMasks{};
  shared_ptr<string> akProxySuffix{};

  SetSecurityPreferenceRequest() {}

  explicit SetSecurityPreferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableSaveMFATicket) {
      res["EnableSaveMFATicket"] = boost::any(*enableSaveMFATicket);
    }
    if (allowUserToChangePassword) {
      res["AllowUserToChangePassword"] = boost::any(*allowUserToChangePassword);
    }
    if (allowUserToManageAccessKeys) {
      res["AllowUserToManageAccessKeys"] = boost::any(*allowUserToManageAccessKeys);
    }
    if (allowUserToManageMFADevices) {
      res["AllowUserToManageMFADevices"] = boost::any(*allowUserToManageMFADevices);
    }
    if (loginSessionDuration) {
      res["LoginSessionDuration"] = boost::any(*loginSessionDuration);
    }
    if (loginNetworkMasks) {
      res["LoginNetworkMasks"] = boost::any(*loginNetworkMasks);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableSaveMFATicket") != m.end() && !m["EnableSaveMFATicket"].empty()) {
      enableSaveMFATicket = make_shared<bool>(boost::any_cast<bool>(m["EnableSaveMFATicket"]));
    }
    if (m.find("AllowUserToChangePassword") != m.end() && !m["AllowUserToChangePassword"].empty()) {
      allowUserToChangePassword = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToChangePassword"]));
    }
    if (m.find("AllowUserToManageAccessKeys") != m.end() && !m["AllowUserToManageAccessKeys"].empty()) {
      allowUserToManageAccessKeys = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageAccessKeys"]));
    }
    if (m.find("AllowUserToManageMFADevices") != m.end() && !m["AllowUserToManageMFADevices"].empty()) {
      allowUserToManageMFADevices = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageMFADevices"]));
    }
    if (m.find("LoginSessionDuration") != m.end() && !m["LoginSessionDuration"].empty()) {
      loginSessionDuration = make_shared<long>(boost::any_cast<long>(m["LoginSessionDuration"]));
    }
    if (m.find("LoginNetworkMasks") != m.end() && !m["LoginNetworkMasks"].empty()) {
      loginNetworkMasks = make_shared<string>(boost::any_cast<string>(m["LoginNetworkMasks"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~SetSecurityPreferenceRequest() = default;
};
class SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToManageAccessKeys{};

  SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference() {}

  explicit SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToManageAccessKeys) {
      res["AllowUserToManageAccessKeys"] = boost::any(*allowUserToManageAccessKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToManageAccessKeys") != m.end() && !m["AllowUserToManageAccessKeys"].empty()) {
      allowUserToManageAccessKeys = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageAccessKeys"]));
    }
  }


  virtual ~SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference() = default;
};
class SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference : public Darabonba::Model {
public:
  shared_ptr<bool> enableSaveMFATicket{};
  shared_ptr<long> loginSessionDuration{};
  shared_ptr<string> loginNetworkMasks{};
  shared_ptr<bool> allowUserToChangePassword{};

  SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference() {}

  explicit SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableSaveMFATicket) {
      res["EnableSaveMFATicket"] = boost::any(*enableSaveMFATicket);
    }
    if (loginSessionDuration) {
      res["LoginSessionDuration"] = boost::any(*loginSessionDuration);
    }
    if (loginNetworkMasks) {
      res["LoginNetworkMasks"] = boost::any(*loginNetworkMasks);
    }
    if (allowUserToChangePassword) {
      res["AllowUserToChangePassword"] = boost::any(*allowUserToChangePassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableSaveMFATicket") != m.end() && !m["EnableSaveMFATicket"].empty()) {
      enableSaveMFATicket = make_shared<bool>(boost::any_cast<bool>(m["EnableSaveMFATicket"]));
    }
    if (m.find("LoginSessionDuration") != m.end() && !m["LoginSessionDuration"].empty()) {
      loginSessionDuration = make_shared<long>(boost::any_cast<long>(m["LoginSessionDuration"]));
    }
    if (m.find("LoginNetworkMasks") != m.end() && !m["LoginNetworkMasks"].empty()) {
      loginNetworkMasks = make_shared<string>(boost::any_cast<string>(m["LoginNetworkMasks"]));
    }
    if (m.find("AllowUserToChangePassword") != m.end() && !m["AllowUserToChangePassword"].empty()) {
      allowUserToChangePassword = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToChangePassword"]));
    }
  }


  virtual ~SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference() = default;
};
class SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToManageMFADevices{};

  SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference() {}

  explicit SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToManageMFADevices) {
      res["AllowUserToManageMFADevices"] = boost::any(*allowUserToManageMFADevices);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToManageMFADevices") != m.end() && !m["AllowUserToManageMFADevices"].empty()) {
      allowUserToManageMFADevices = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageMFADevices"]));
    }
  }


  virtual ~SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference() = default;
};
class SetSecurityPreferenceResponseBodySecurityPreference : public Darabonba::Model {
public:
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference> accessKeyPreference{};
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference> loginProfilePreference{};
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference> MFAPreference{};

  SetSecurityPreferenceResponseBodySecurityPreference() {}

  explicit SetSecurityPreferenceResponseBodySecurityPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyPreference) {
      res["AccessKeyPreference"] = accessKeyPreference ? boost::any(accessKeyPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loginProfilePreference) {
      res["LoginProfilePreference"] = loginProfilePreference ? boost::any(loginProfilePreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (MFAPreference) {
      res["MFAPreference"] = MFAPreference ? boost::any(MFAPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyPreference") != m.end() && !m["AccessKeyPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessKeyPreference"].type()) {
        SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessKeyPreference"]));
        accessKeyPreference = make_shared<SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference>(model1);
      }
    }
    if (m.find("LoginProfilePreference") != m.end() && !m["LoginProfilePreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginProfilePreference"].type()) {
        SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginProfilePreference"]));
        loginProfilePreference = make_shared<SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference>(model1);
      }
    }
    if (m.find("MFAPreference") != m.end() && !m["MFAPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["MFAPreference"].type()) {
        SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MFAPreference"]));
        MFAPreference = make_shared<SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference>(model1);
      }
    }
  }


  virtual ~SetSecurityPreferenceResponseBodySecurityPreference() = default;
};
class SetSecurityPreferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreference> securityPreference{};
  shared_ptr<string> requestId{};

  SetSecurityPreferenceResponseBody() {}

  explicit SetSecurityPreferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityPreference) {
      res["SecurityPreference"] = securityPreference ? boost::any(securityPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityPreference") != m.end() && !m["SecurityPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityPreference"].type()) {
        SetSecurityPreferenceResponseBodySecurityPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityPreference"]));
        securityPreference = make_shared<SetSecurityPreferenceResponseBodySecurityPreference>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetSecurityPreferenceResponseBody() = default;
};
class SetSecurityPreferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetSecurityPreferenceResponseBody> body{};

  SetSecurityPreferenceResponse() {}

  explicit SetSecurityPreferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetSecurityPreferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetSecurityPreferenceResponseBody>(model1);
      }
    }
  }


  virtual ~SetSecurityPreferenceResponse() = default;
};
class SetUserSsoSettingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> metadataDocument{};
  shared_ptr<bool> ssoEnabled{};
  shared_ptr<string> auxiliaryDomain{};
  shared_ptr<string> akProxySuffix{};

  SetUserSsoSettingsRequest() {}

  explicit SetUserSsoSettingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metadataDocument) {
      res["MetadataDocument"] = boost::any(*metadataDocument);
    }
    if (ssoEnabled) {
      res["SsoEnabled"] = boost::any(*ssoEnabled);
    }
    if (auxiliaryDomain) {
      res["AuxiliaryDomain"] = boost::any(*auxiliaryDomain);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetadataDocument") != m.end() && !m["MetadataDocument"].empty()) {
      metadataDocument = make_shared<string>(boost::any_cast<string>(m["MetadataDocument"]));
    }
    if (m.find("SsoEnabled") != m.end() && !m["SsoEnabled"].empty()) {
      ssoEnabled = make_shared<bool>(boost::any_cast<bool>(m["SsoEnabled"]));
    }
    if (m.find("AuxiliaryDomain") != m.end() && !m["AuxiliaryDomain"].empty()) {
      auxiliaryDomain = make_shared<string>(boost::any_cast<string>(m["AuxiliaryDomain"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~SetUserSsoSettingsRequest() = default;
};
class SetUserSsoSettingsResponseBodyUserSsoSettings : public Darabonba::Model {
public:
  shared_ptr<string> auxiliaryDomain{};
  shared_ptr<string> metadataDocument{};
  shared_ptr<bool> ssoEnabled{};

  SetUserSsoSettingsResponseBodyUserSsoSettings() {}

  explicit SetUserSsoSettingsResponseBodyUserSsoSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auxiliaryDomain) {
      res["AuxiliaryDomain"] = boost::any(*auxiliaryDomain);
    }
    if (metadataDocument) {
      res["MetadataDocument"] = boost::any(*metadataDocument);
    }
    if (ssoEnabled) {
      res["SsoEnabled"] = boost::any(*ssoEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuxiliaryDomain") != m.end() && !m["AuxiliaryDomain"].empty()) {
      auxiliaryDomain = make_shared<string>(boost::any_cast<string>(m["AuxiliaryDomain"]));
    }
    if (m.find("MetadataDocument") != m.end() && !m["MetadataDocument"].empty()) {
      metadataDocument = make_shared<string>(boost::any_cast<string>(m["MetadataDocument"]));
    }
    if (m.find("SsoEnabled") != m.end() && !m["SsoEnabled"].empty()) {
      ssoEnabled = make_shared<bool>(boost::any_cast<bool>(m["SsoEnabled"]));
    }
  }


  virtual ~SetUserSsoSettingsResponseBodyUserSsoSettings() = default;
};
class SetUserSsoSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<SetUserSsoSettingsResponseBodyUserSsoSettings> userSsoSettings{};
  shared_ptr<string> requestId{};

  SetUserSsoSettingsResponseBody() {}

  explicit SetUserSsoSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userSsoSettings) {
      res["UserSsoSettings"] = userSsoSettings ? boost::any(userSsoSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserSsoSettings") != m.end() && !m["UserSsoSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserSsoSettings"].type()) {
        SetUserSsoSettingsResponseBodyUserSsoSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserSsoSettings"]));
        userSsoSettings = make_shared<SetUserSsoSettingsResponseBodyUserSsoSettings>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetUserSsoSettingsResponseBody() = default;
};
class SetUserSsoSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetUserSsoSettingsResponseBody> body{};

  SetUserSsoSettingsResponse() {}

  explicit SetUserSsoSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetUserSsoSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetUserSsoSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~SetUserSsoSettingsResponse() = default;
};
class UnbindMFADeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> akProxySuffix{};

  UnbindMFADeviceRequest() {}

  explicit UnbindMFADeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~UnbindMFADeviceRequest() = default;
};
class UnbindMFADeviceResponseBodyMFADevice : public Darabonba::Model {
public:
  shared_ptr<string> serialNumber{};

  UnbindMFADeviceResponseBodyMFADevice() {}

  explicit UnbindMFADeviceResponseBodyMFADevice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~UnbindMFADeviceResponseBodyMFADevice() = default;
};
class UnbindMFADeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<UnbindMFADeviceResponseBodyMFADevice> MFADevice{};
  shared_ptr<string> requestId{};

  UnbindMFADeviceResponseBody() {}

  explicit UnbindMFADeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFADevice) {
      res["MFADevice"] = MFADevice ? boost::any(MFADevice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFADevice") != m.end() && !m["MFADevice"].empty()) {
      if (typeid(map<string, boost::any>) == m["MFADevice"].type()) {
        UnbindMFADeviceResponseBodyMFADevice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MFADevice"]));
        MFADevice = make_shared<UnbindMFADeviceResponseBodyMFADevice>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UnbindMFADeviceResponseBody() = default;
};
class UnbindMFADeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnbindMFADeviceResponseBody> body{};

  UnbindMFADeviceResponse() {}

  explicit UnbindMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnbindMFADeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindMFADeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindMFADeviceResponse() = default;
};
class UpdateAccessKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> status{};
  shared_ptr<string> akProxySuffix{};

  UpdateAccessKeyRequest() {}

  explicit UpdateAccessKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~UpdateAccessKeyRequest() = default;
};
class UpdateAccessKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAccessKeyResponseBody() {}

  explicit UpdateAccessKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAccessKeyResponseBody() = default;
};
class UpdateAccessKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAccessKeyResponseBody> body{};

  UpdateAccessKeyResponse() {}

  explicit UpdateAccessKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAccessKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAccessKeyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAccessKeyResponse() = default;
};
class UpdateApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> newDisplayName{};
  shared_ptr<string> newRedirectUris{};
  shared_ptr<string> newPredefinedScopes{};
  shared_ptr<bool> newSecretRequired{};
  shared_ptr<long> newAccessTokenValidity{};
  shared_ptr<long> newRefreshTokenValidity{};
  shared_ptr<bool> newIsMultiTenant{};
  shared_ptr<string> akProxySuffix{};

  UpdateApplicationRequest() {}

  explicit UpdateApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (newDisplayName) {
      res["NewDisplayName"] = boost::any(*newDisplayName);
    }
    if (newRedirectUris) {
      res["NewRedirectUris"] = boost::any(*newRedirectUris);
    }
    if (newPredefinedScopes) {
      res["NewPredefinedScopes"] = boost::any(*newPredefinedScopes);
    }
    if (newSecretRequired) {
      res["NewSecretRequired"] = boost::any(*newSecretRequired);
    }
    if (newAccessTokenValidity) {
      res["NewAccessTokenValidity"] = boost::any(*newAccessTokenValidity);
    }
    if (newRefreshTokenValidity) {
      res["NewRefreshTokenValidity"] = boost::any(*newRefreshTokenValidity);
    }
    if (newIsMultiTenant) {
      res["NewIsMultiTenant"] = boost::any(*newIsMultiTenant);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("NewDisplayName") != m.end() && !m["NewDisplayName"].empty()) {
      newDisplayName = make_shared<string>(boost::any_cast<string>(m["NewDisplayName"]));
    }
    if (m.find("NewRedirectUris") != m.end() && !m["NewRedirectUris"].empty()) {
      newRedirectUris = make_shared<string>(boost::any_cast<string>(m["NewRedirectUris"]));
    }
    if (m.find("NewPredefinedScopes") != m.end() && !m["NewPredefinedScopes"].empty()) {
      newPredefinedScopes = make_shared<string>(boost::any_cast<string>(m["NewPredefinedScopes"]));
    }
    if (m.find("NewSecretRequired") != m.end() && !m["NewSecretRequired"].empty()) {
      newSecretRequired = make_shared<bool>(boost::any_cast<bool>(m["NewSecretRequired"]));
    }
    if (m.find("NewAccessTokenValidity") != m.end() && !m["NewAccessTokenValidity"].empty()) {
      newAccessTokenValidity = make_shared<long>(boost::any_cast<long>(m["NewAccessTokenValidity"]));
    }
    if (m.find("NewRefreshTokenValidity") != m.end() && !m["NewRefreshTokenValidity"].empty()) {
      newRefreshTokenValidity = make_shared<long>(boost::any_cast<long>(m["NewRefreshTokenValidity"]));
    }
    if (m.find("NewIsMultiTenant") != m.end() && !m["NewIsMultiTenant"].empty()) {
      newIsMultiTenant = make_shared<bool>(boost::any_cast<bool>(m["NewIsMultiTenant"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~UpdateApplicationRequest() = default;
};
class UpdateApplicationResponseBodyApplicationRedirectUris : public Darabonba::Model {
public:
  shared_ptr<vector<string>> redirectUri{};

  UpdateApplicationResponseBodyApplicationRedirectUris() {}

  explicit UpdateApplicationResponseBodyApplicationRedirectUris(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (redirectUri) {
      res["RedirectUri"] = boost::any(*redirectUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RedirectUri") != m.end() && !m["RedirectUri"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RedirectUri"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RedirectUri"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      redirectUri = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateApplicationResponseBodyApplicationRedirectUris() = default;
};
class UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() {}

  explicit UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope() = default;
};
class UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope>> predefinedScope{};

  UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes() {}

  explicit UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScope) {
      vector<boost::any> temp1;
      for(auto item1:*predefinedScope){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PredefinedScope"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScope") != m.end() && !m["PredefinedScope"].empty()) {
      if (typeid(vector<boost::any>) == m["PredefinedScope"].type()) {
        vector<UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PredefinedScope"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        predefinedScope = make_shared<vector<UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopesPredefinedScope>>(expect1);
      }
    }
  }


  virtual ~UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes() = default;
};
class UpdateApplicationResponseBodyApplicationDelegatedScope : public Darabonba::Model {
public:
  shared_ptr<UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes> predefinedScopes{};

  UpdateApplicationResponseBodyApplicationDelegatedScope() {}

  explicit UpdateApplicationResponseBodyApplicationDelegatedScope(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predefinedScopes) {
      res["PredefinedScopes"] = predefinedScopes ? boost::any(predefinedScopes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredefinedScopes") != m.end() && !m["PredefinedScopes"].empty()) {
      if (typeid(map<string, boost::any>) == m["PredefinedScopes"].type()) {
        UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PredefinedScopes"]));
        predefinedScopes = make_shared<UpdateApplicationResponseBodyApplicationDelegatedScopePredefinedScopes>(model1);
      }
    }
  }


  virtual ~UpdateApplicationResponseBodyApplicationDelegatedScope() = default;
};
class UpdateApplicationResponseBodyApplication : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<long> accessTokenValidity{};
  shared_ptr<bool> secretRequired{};
  shared_ptr<string> accountId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> appName{};
  shared_ptr<UpdateApplicationResponseBodyApplicationRedirectUris> redirectUris{};
  shared_ptr<string> updateDate{};
  shared_ptr<UpdateApplicationResponseBodyApplicationDelegatedScope> delegatedScope{};
  shared_ptr<string> appId{};
  shared_ptr<long> refreshTokenValidity{};
  shared_ptr<bool> isMultiTenant{};
  shared_ptr<string> appType{};

  UpdateApplicationResponseBodyApplication() {}

  explicit UpdateApplicationResponseBodyApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (accessTokenValidity) {
      res["AccessTokenValidity"] = boost::any(*accessTokenValidity);
    }
    if (secretRequired) {
      res["SecretRequired"] = boost::any(*secretRequired);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (redirectUris) {
      res["RedirectUris"] = redirectUris ? boost::any(redirectUris->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (delegatedScope) {
      res["DelegatedScope"] = delegatedScope ? boost::any(delegatedScope->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (refreshTokenValidity) {
      res["RefreshTokenValidity"] = boost::any(*refreshTokenValidity);
    }
    if (isMultiTenant) {
      res["IsMultiTenant"] = boost::any(*isMultiTenant);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("AccessTokenValidity") != m.end() && !m["AccessTokenValidity"].empty()) {
      accessTokenValidity = make_shared<long>(boost::any_cast<long>(m["AccessTokenValidity"]));
    }
    if (m.find("SecretRequired") != m.end() && !m["SecretRequired"].empty()) {
      secretRequired = make_shared<bool>(boost::any_cast<bool>(m["SecretRequired"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("RedirectUris") != m.end() && !m["RedirectUris"].empty()) {
      if (typeid(map<string, boost::any>) == m["RedirectUris"].type()) {
        UpdateApplicationResponseBodyApplicationRedirectUris model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RedirectUris"]));
        redirectUris = make_shared<UpdateApplicationResponseBodyApplicationRedirectUris>(model1);
      }
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("DelegatedScope") != m.end() && !m["DelegatedScope"].empty()) {
      if (typeid(map<string, boost::any>) == m["DelegatedScope"].type()) {
        UpdateApplicationResponseBodyApplicationDelegatedScope model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DelegatedScope"]));
        delegatedScope = make_shared<UpdateApplicationResponseBodyApplicationDelegatedScope>(model1);
      }
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RefreshTokenValidity") != m.end() && !m["RefreshTokenValidity"].empty()) {
      refreshTokenValidity = make_shared<long>(boost::any_cast<long>(m["RefreshTokenValidity"]));
    }
    if (m.find("IsMultiTenant") != m.end() && !m["IsMultiTenant"].empty()) {
      isMultiTenant = make_shared<bool>(boost::any_cast<bool>(m["IsMultiTenant"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
  }


  virtual ~UpdateApplicationResponseBodyApplication() = default;
};
class UpdateApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateApplicationResponseBodyApplication> application{};

  UpdateApplicationResponseBody() {}

  explicit UpdateApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (application) {
      res["Application"] = application ? boost::any(application->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(map<string, boost::any>) == m["Application"].type()) {
        UpdateApplicationResponseBodyApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Application"]));
        application = make_shared<UpdateApplicationResponseBodyApplication>(model1);
      }
    }
  }


  virtual ~UpdateApplicationResponseBody() = default;
};
class UpdateApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateApplicationResponseBody> body{};

  UpdateApplicationResponse() {}

  explicit UpdateApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateApplicationResponse() = default;
};
class UpdateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupPrincipalName{};
  shared_ptr<string> newGroupPrincipalName{};
  shared_ptr<string> newComments{};
  shared_ptr<string> newDisplayName{};
  shared_ptr<string> akProxySuffix{};
  shared_ptr<string> newGroupName{};
  shared_ptr<string> groupName{};

  UpdateGroupRequest() {}

  explicit UpdateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupPrincipalName) {
      res["GroupPrincipalName"] = boost::any(*groupPrincipalName);
    }
    if (newGroupPrincipalName) {
      res["NewGroupPrincipalName"] = boost::any(*newGroupPrincipalName);
    }
    if (newComments) {
      res["NewComments"] = boost::any(*newComments);
    }
    if (newDisplayName) {
      res["NewDisplayName"] = boost::any(*newDisplayName);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    if (newGroupName) {
      res["NewGroupName"] = boost::any(*newGroupName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupPrincipalName") != m.end() && !m["GroupPrincipalName"].empty()) {
      groupPrincipalName = make_shared<string>(boost::any_cast<string>(m["GroupPrincipalName"]));
    }
    if (m.find("NewGroupPrincipalName") != m.end() && !m["NewGroupPrincipalName"].empty()) {
      newGroupPrincipalName = make_shared<string>(boost::any_cast<string>(m["NewGroupPrincipalName"]));
    }
    if (m.find("NewComments") != m.end() && !m["NewComments"].empty()) {
      newComments = make_shared<string>(boost::any_cast<string>(m["NewComments"]));
    }
    if (m.find("NewDisplayName") != m.end() && !m["NewDisplayName"].empty()) {
      newDisplayName = make_shared<string>(boost::any_cast<string>(m["NewDisplayName"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
    if (m.find("NewGroupName") != m.end() && !m["NewGroupName"].empty()) {
      newGroupName = make_shared<string>(boost::any_cast<string>(m["NewGroupName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~UpdateGroupRequest() = default;
};
class UpdateGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> groupName{};
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};

  UpdateGroupResponseBodyGroup() {}

  explicit UpdateGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~UpdateGroupResponseBodyGroup() = default;
};
class UpdateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateGroupResponseBodyGroup> group{};
  shared_ptr<string> requestId{};

  UpdateGroupResponseBody() {}

  explicit UpdateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = group ? boost::any(group->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      if (typeid(map<string, boost::any>) == m["Group"].type()) {
        UpdateGroupResponseBodyGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Group"]));
        group = make_shared<UpdateGroupResponseBodyGroup>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateGroupResponseBody() = default;
};
class UpdateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateGroupResponseBody> body{};

  UpdateGroupResponse() {}

  explicit UpdateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGroupResponse() = default;
};
class UpdateLoginProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> password{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<bool> MFABindRequired{};
  shared_ptr<bool> generateRandomPassword{};
  shared_ptr<string> status{};
  shared_ptr<string> akProxySuffix{};

  UpdateLoginProfileRequest() {}

  explicit UpdateLoginProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    if (generateRandomPassword) {
      res["GenerateRandomPassword"] = boost::any(*generateRandomPassword);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
    if (m.find("GenerateRandomPassword") != m.end() && !m["GenerateRandomPassword"].empty()) {
      generateRandomPassword = make_shared<bool>(boost::any_cast<bool>(m["GenerateRandomPassword"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~UpdateLoginProfileRequest() = default;
};
class UpdateLoginProfileResponseBodyLoginProfile : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> status{};
  shared_ptr<string> updateDate{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<bool> MFABindRequired{};

  UpdateLoginProfileResponseBodyLoginProfile() {}

  explicit UpdateLoginProfileResponseBodyLoginProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
  }


  virtual ~UpdateLoginProfileResponseBodyLoginProfile() = default;
};
class UpdateLoginProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateLoginProfileResponseBodyLoginProfile> loginProfile{};

  UpdateLoginProfileResponseBody() {}

  explicit UpdateLoginProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (loginProfile) {
      res["LoginProfile"] = loginProfile ? boost::any(loginProfile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("LoginProfile") != m.end() && !m["LoginProfile"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginProfile"].type()) {
        UpdateLoginProfileResponseBodyLoginProfile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginProfile"]));
        loginProfile = make_shared<UpdateLoginProfileResponseBodyLoginProfile>(model1);
      }
    }
  }


  virtual ~UpdateLoginProfileResponseBody() = default;
};
class UpdateLoginProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateLoginProfileResponseBody> body{};

  UpdateLoginProfileResponse() {}

  explicit UpdateLoginProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateLoginProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLoginProfileResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLoginProfileResponse() = default;
};
class UpdateSAMLProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> SAMLProviderName{};
  shared_ptr<string> newSAMLMetadataDocument{};
  shared_ptr<string> newDescription{};
  shared_ptr<string> akProxySuffix{};
  shared_ptr<string> newEncodedSAMLMetadataDocument{};

  UpdateSAMLProviderRequest() {}

  explicit UpdateSAMLProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    if (newSAMLMetadataDocument) {
      res["NewSAMLMetadataDocument"] = boost::any(*newSAMLMetadataDocument);
    }
    if (newDescription) {
      res["NewDescription"] = boost::any(*newDescription);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    if (newEncodedSAMLMetadataDocument) {
      res["NewEncodedSAMLMetadataDocument"] = boost::any(*newEncodedSAMLMetadataDocument);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
    if (m.find("NewSAMLMetadataDocument") != m.end() && !m["NewSAMLMetadataDocument"].empty()) {
      newSAMLMetadataDocument = make_shared<string>(boost::any_cast<string>(m["NewSAMLMetadataDocument"]));
    }
    if (m.find("NewDescription") != m.end() && !m["NewDescription"].empty()) {
      newDescription = make_shared<string>(boost::any_cast<string>(m["NewDescription"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
    if (m.find("NewEncodedSAMLMetadataDocument") != m.end() && !m["NewEncodedSAMLMetadataDocument"].empty()) {
      newEncodedSAMLMetadataDocument = make_shared<string>(boost::any_cast<string>(m["NewEncodedSAMLMetadataDocument"]));
    }
  }


  virtual ~UpdateSAMLProviderRequest() = default;
};
class UpdateSAMLProviderResponseBodySAMLProvider : public Darabonba::Model {
public:
  shared_ptr<string> updateDate{};
  shared_ptr<string> description{};
  shared_ptr<string> SAMLProviderName{};
  shared_ptr<string> createDate{};
  shared_ptr<string> arn{};

  UpdateSAMLProviderResponseBodySAMLProvider() {}

  explicit UpdateSAMLProviderResponseBodySAMLProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
  }


  virtual ~UpdateSAMLProviderResponseBodySAMLProvider() = default;
};
class UpdateSAMLProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateSAMLProviderResponseBodySAMLProvider> SAMLProvider{};

  UpdateSAMLProviderResponseBody() {}

  explicit UpdateSAMLProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SAMLProvider) {
      res["SAMLProvider"] = SAMLProvider ? boost::any(SAMLProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SAMLProvider") != m.end() && !m["SAMLProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["SAMLProvider"].type()) {
        UpdateSAMLProviderResponseBodySAMLProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SAMLProvider"]));
        SAMLProvider = make_shared<UpdateSAMLProviderResponseBodySAMLProvider>(model1);
      }
    }
  }


  virtual ~UpdateSAMLProviderResponseBody() = default;
};
class UpdateSAMLProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSAMLProviderResponseBody> body{};

  UpdateSAMLProviderResponse() {}

  explicit UpdateSAMLProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateSAMLProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSAMLProviderResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSAMLProviderResponse() = default;
};
class UpdateUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> userId{};
  shared_ptr<string> newUserPrincipalName{};
  shared_ptr<string> newDisplayName{};
  shared_ptr<string> newMobilePhone{};
  shared_ptr<string> newEmail{};
  shared_ptr<string> newComments{};
  shared_ptr<string> akProxySuffix{};

  UpdateUserRequest() {}

  explicit UpdateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (newUserPrincipalName) {
      res["NewUserPrincipalName"] = boost::any(*newUserPrincipalName);
    }
    if (newDisplayName) {
      res["NewDisplayName"] = boost::any(*newDisplayName);
    }
    if (newMobilePhone) {
      res["NewMobilePhone"] = boost::any(*newMobilePhone);
    }
    if (newEmail) {
      res["NewEmail"] = boost::any(*newEmail);
    }
    if (newComments) {
      res["NewComments"] = boost::any(*newComments);
    }
    if (akProxySuffix) {
      res["AkProxySuffix"] = boost::any(*akProxySuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("NewUserPrincipalName") != m.end() && !m["NewUserPrincipalName"].empty()) {
      newUserPrincipalName = make_shared<string>(boost::any_cast<string>(m["NewUserPrincipalName"]));
    }
    if (m.find("NewDisplayName") != m.end() && !m["NewDisplayName"].empty()) {
      newDisplayName = make_shared<string>(boost::any_cast<string>(m["NewDisplayName"]));
    }
    if (m.find("NewMobilePhone") != m.end() && !m["NewMobilePhone"].empty()) {
      newMobilePhone = make_shared<string>(boost::any_cast<string>(m["NewMobilePhone"]));
    }
    if (m.find("NewEmail") != m.end() && !m["NewEmail"].empty()) {
      newEmail = make_shared<string>(boost::any_cast<string>(m["NewEmail"]));
    }
    if (m.find("NewComments") != m.end() && !m["NewComments"].empty()) {
      newComments = make_shared<string>(boost::any_cast<string>(m["NewComments"]));
    }
    if (m.find("AkProxySuffix") != m.end() && !m["AkProxySuffix"].empty()) {
      akProxySuffix = make_shared<string>(boost::any_cast<string>(m["AkProxySuffix"]));
    }
  }


  virtual ~UpdateUserRequest() = default;
};
class UpdateUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> userPrincipalName{};
  shared_ptr<string> email{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> userId{};
  shared_ptr<string> comments{};
  shared_ptr<string> lastLoginDate{};
  shared_ptr<string> createDate{};

  UpdateUserResponseBodyUser() {}

  explicit UpdateUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (userPrincipalName) {
      res["UserPrincipalName"] = boost::any(*userPrincipalName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (lastLoginDate) {
      res["LastLoginDate"] = boost::any(*lastLoginDate);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UserPrincipalName") != m.end() && !m["UserPrincipalName"].empty()) {
      userPrincipalName = make_shared<string>(boost::any_cast<string>(m["UserPrincipalName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("LastLoginDate") != m.end() && !m["LastLoginDate"].empty()) {
      lastLoginDate = make_shared<string>(boost::any_cast<string>(m["LastLoginDate"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
  }


  virtual ~UpdateUserResponseBodyUser() = default;
};
class UpdateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateUserResponseBodyUser> user{};
  shared_ptr<string> requestId{};

  UpdateUserResponseBody() {}

  explicit UpdateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        UpdateUserResponseBodyUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<UpdateUserResponseBodyUser>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateUserResponseBody() = default;
};
class UpdateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateUserResponseBody> body{};

  UpdateUserResponse() {}

  explicit UpdateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserResponse() = default;
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
  AddUserToGroupResponse addUserToGroupWithOptions(shared_ptr<AddUserToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserToGroupResponse addUserToGroup(shared_ptr<AddUserToGroupRequest> request);
  BindMFADeviceResponse bindMFADeviceWithOptions(shared_ptr<BindMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindMFADeviceResponse bindMFADevice(shared_ptr<BindMFADeviceRequest> request);
  ChangePasswordResponse changePasswordWithOptions(shared_ptr<ChangePasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangePasswordResponse changePassword(shared_ptr<ChangePasswordRequest> request);
  CreateAccessKeyResponse createAccessKeyWithOptions(shared_ptr<CreateAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessKeyResponse createAccessKey(shared_ptr<CreateAccessKeyRequest> request);
  CreateApplicationResponse createApplicationWithOptions(shared_ptr<CreateApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApplicationResponse createApplication(shared_ptr<CreateApplicationRequest> request);
  CreateAppSecretResponse createAppSecretWithOptions(shared_ptr<CreateAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppSecretResponse createAppSecret(shared_ptr<CreateAppSecretRequest> request);
  CreateGroupResponse createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupResponse createGroup(shared_ptr<CreateGroupRequest> request);
  CreateLoginProfileResponse createLoginProfileWithOptions(shared_ptr<CreateLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoginProfileResponse createLoginProfile(shared_ptr<CreateLoginProfileRequest> request);
  CreateSAMLProviderResponse createSAMLProviderWithOptions(shared_ptr<CreateSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSAMLProviderResponse createSAMLProvider(shared_ptr<CreateSAMLProviderRequest> request);
  CreateUserResponse createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserResponse createUser(shared_ptr<CreateUserRequest> request);
  CreateVirtualMFADeviceResponse createVirtualMFADeviceWithOptions(shared_ptr<CreateVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVirtualMFADeviceResponse createVirtualMFADevice(shared_ptr<CreateVirtualMFADeviceRequest> request);
  DeleteAccessKeyResponse deleteAccessKeyWithOptions(shared_ptr<DeleteAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessKeyResponse deleteAccessKey(shared_ptr<DeleteAccessKeyRequest> request);
  DeleteApplicationResponse deleteApplicationWithOptions(shared_ptr<DeleteApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApplicationResponse deleteApplication(shared_ptr<DeleteApplicationRequest> request);
  DeleteAppSecretResponse deleteAppSecretWithOptions(shared_ptr<DeleteAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppSecretResponse deleteAppSecret(shared_ptr<DeleteAppSecretRequest> request);
  DeleteGroupResponse deleteGroupWithOptions(shared_ptr<DeleteGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupResponse deleteGroup(shared_ptr<DeleteGroupRequest> request);
  DeleteLoginProfileResponse deleteLoginProfileWithOptions(shared_ptr<DeleteLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLoginProfileResponse deleteLoginProfile(shared_ptr<DeleteLoginProfileRequest> request);
  DeleteSAMLProviderResponse deleteSAMLProviderWithOptions(shared_ptr<DeleteSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSAMLProviderResponse deleteSAMLProvider(shared_ptr<DeleteSAMLProviderRequest> request);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<DeleteUserRequest> request);
  DeleteVirtualMFADeviceResponse deleteVirtualMFADeviceWithOptions(shared_ptr<DeleteVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVirtualMFADeviceResponse deleteVirtualMFADevice(shared_ptr<DeleteVirtualMFADeviceRequest> request);
  DisableVirtualMFAResponse disableVirtualMFAWithOptions(shared_ptr<DisableVirtualMFARequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableVirtualMFAResponse disableVirtualMFA(shared_ptr<DisableVirtualMFARequest> request);
  GenerateCredentialReportResponse generateCredentialReportWithOptions(shared_ptr<GenerateCredentialReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateCredentialReportResponse generateCredentialReport(shared_ptr<GenerateCredentialReportRequest> request);
  GetAccessKeyLastUsedResponse getAccessKeyLastUsedWithOptions(shared_ptr<GetAccessKeyLastUsedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccessKeyLastUsedResponse getAccessKeyLastUsed(shared_ptr<GetAccessKeyLastUsedRequest> request);
  GetAccountMFAInfoResponse getAccountMFAInfoWithOptions(shared_ptr<GetAccountMFAInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountMFAInfoResponse getAccountMFAInfo(shared_ptr<GetAccountMFAInfoRequest> request);
  GetAccountSecurityPracticeReportResponse getAccountSecurityPracticeReportWithOptions(shared_ptr<GetAccountSecurityPracticeReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountSecurityPracticeReportResponse getAccountSecurityPracticeReport(shared_ptr<GetAccountSecurityPracticeReportRequest> request);
  GetAccountSummaryResponse getAccountSummaryWithOptions(shared_ptr<GetAccountSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountSummaryResponse getAccountSummary(shared_ptr<GetAccountSummaryRequest> request);
  GetApplicationResponse getApplicationWithOptions(shared_ptr<GetApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetApplicationResponse getApplication(shared_ptr<GetApplicationRequest> request);
  GetAppSecretResponse getAppSecretWithOptions(shared_ptr<GetAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppSecretResponse getAppSecret(shared_ptr<GetAppSecretRequest> request);
  GetCredentialReportResponse getCredentialReportWithOptions(shared_ptr<GetCredentialReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCredentialReportResponse getCredentialReport(shared_ptr<GetCredentialReportRequest> request);
  GetDefaultDomainResponse getDefaultDomainWithOptions(shared_ptr<GetDefaultDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDefaultDomainResponse getDefaultDomain(shared_ptr<GetDefaultDomainRequest> request);
  GetGroupResponse getGroupWithOptions(shared_ptr<GetGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGroupResponse getGroup(shared_ptr<GetGroupRequest> request);
  GetLoginProfileResponse getLoginProfileWithOptions(shared_ptr<GetLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLoginProfileResponse getLoginProfile(shared_ptr<GetLoginProfileRequest> request);
  GetPasswordPolicyResponse getPasswordPolicyWithOptions(shared_ptr<GetPasswordPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPasswordPolicyResponse getPasswordPolicy(shared_ptr<GetPasswordPolicyRequest> request);
  GetSAMLProviderResponse getSAMLProviderWithOptions(shared_ptr<GetSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSAMLProviderResponse getSAMLProvider(shared_ptr<GetSAMLProviderRequest> request);
  GetSecurityPreferenceResponse getSecurityPreferenceWithOptions(shared_ptr<GetSecurityPreferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSecurityPreferenceResponse getSecurityPreference(shared_ptr<GetSecurityPreferenceRequest> request);
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  GetUserMFAInfoResponse getUserMFAInfoWithOptions(shared_ptr<GetUserMFAInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserMFAInfoResponse getUserMFAInfo(shared_ptr<GetUserMFAInfoRequest> request);
  GetUserSsoSettingsResponse getUserSsoSettingsWithOptions(shared_ptr<GetUserSsoSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserSsoSettingsResponse getUserSsoSettings(shared_ptr<GetUserSsoSettingsRequest> request);
  ListAccessKeysResponse listAccessKeysWithOptions(shared_ptr<ListAccessKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccessKeysResponse listAccessKeys(shared_ptr<ListAccessKeysRequest> request);
  ListApplicationsResponse listApplicationsWithOptions(shared_ptr<ListApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationsResponse listApplications(shared_ptr<ListApplicationsRequest> request);
  ListAppSecretIdsResponse listAppSecretIdsWithOptions(shared_ptr<ListAppSecretIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppSecretIdsResponse listAppSecretIds(shared_ptr<ListAppSecretIdsRequest> request);
  ListGroupsResponse listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsResponse listGroups(shared_ptr<ListGroupsRequest> request);
  ListGroupsForUserResponse listGroupsForUserWithOptions(shared_ptr<ListGroupsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsForUserResponse listGroupsForUser(shared_ptr<ListGroupsForUserRequest> request);
  ListPredefinedScopesResponse listPredefinedScopesWithOptions(shared_ptr<ListPredefinedScopesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPredefinedScopesResponse listPredefinedScopes(shared_ptr<ListPredefinedScopesRequest> request);
  ListSAMLProvidersResponse listSAMLProvidersWithOptions(shared_ptr<ListSAMLProvidersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSAMLProvidersResponse listSAMLProviders(shared_ptr<ListSAMLProvidersRequest> request);
  ListUserBasicInfosResponse listUserBasicInfosWithOptions(shared_ptr<ListUserBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserBasicInfosResponse listUserBasicInfos(shared_ptr<ListUserBasicInfosRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  ListUsersForGroupResponse listUsersForGroupWithOptions(shared_ptr<ListUsersForGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersForGroupResponse listUsersForGroup(shared_ptr<ListUsersForGroupRequest> request);
  ListVirtualMFADevicesResponse listVirtualMFADevicesWithOptions(shared_ptr<ListVirtualMFADevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVirtualMFADevicesResponse listVirtualMFADevices(shared_ptr<ListVirtualMFADevicesRequest> request);
  RemoveUserFromGroupResponse removeUserFromGroupWithOptions(shared_ptr<RemoveUserFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUserFromGroupResponse removeUserFromGroup(shared_ptr<RemoveUserFromGroupRequest> request);
  SetDefaultDomainResponse setDefaultDomainWithOptions(shared_ptr<SetDefaultDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDefaultDomainResponse setDefaultDomain(shared_ptr<SetDefaultDomainRequest> request);
  SetPasswordPolicyResponse setPasswordPolicyWithOptions(shared_ptr<SetPasswordPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetPasswordPolicyResponse setPasswordPolicy(shared_ptr<SetPasswordPolicyRequest> request);
  SetSecurityPreferenceResponse setSecurityPreferenceWithOptions(shared_ptr<SetSecurityPreferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetSecurityPreferenceResponse setSecurityPreference(shared_ptr<SetSecurityPreferenceRequest> request);
  SetUserSsoSettingsResponse setUserSsoSettingsWithOptions(shared_ptr<SetUserSsoSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetUserSsoSettingsResponse setUserSsoSettings(shared_ptr<SetUserSsoSettingsRequest> request);
  UnbindMFADeviceResponse unbindMFADeviceWithOptions(shared_ptr<UnbindMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindMFADeviceResponse unbindMFADevice(shared_ptr<UnbindMFADeviceRequest> request);
  UpdateAccessKeyResponse updateAccessKeyWithOptions(shared_ptr<UpdateAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAccessKeyResponse updateAccessKey(shared_ptr<UpdateAccessKeyRequest> request);
  UpdateApplicationResponse updateApplicationWithOptions(shared_ptr<UpdateApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateApplicationResponse updateApplication(shared_ptr<UpdateApplicationRequest> request);
  UpdateGroupResponse updateGroupWithOptions(shared_ptr<UpdateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupResponse updateGroup(shared_ptr<UpdateGroupRequest> request);
  UpdateLoginProfileResponse updateLoginProfileWithOptions(shared_ptr<UpdateLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoginProfileResponse updateLoginProfile(shared_ptr<UpdateLoginProfileRequest> request);
  UpdateSAMLProviderResponse updateSAMLProviderWithOptions(shared_ptr<UpdateSAMLProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSAMLProviderResponse updateSAMLProvider(shared_ptr<UpdateSAMLProviderRequest> request);
  UpdateUserResponse updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserResponse updateUser(shared_ptr<UpdateUserRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ims20190815

#endif
