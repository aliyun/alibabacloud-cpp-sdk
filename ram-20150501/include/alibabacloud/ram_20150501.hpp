// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RAM20150501_H_
#define ALIBABACLOUD_RAM20150501_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ram20150501 {
class AddUserToGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> userName{};

  AddUserToGroupRequest() {}

  explicit AddUserToGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<AddUserToGroupResponseBody> body{};

  AddUserToGroupResponse() {}

  explicit AddUserToGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserToGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserToGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserToGroupResponse() = default;
};
class AttachPolicyToGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

  AttachPolicyToGroupRequest() {}

  explicit AttachPolicyToGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~AttachPolicyToGroupRequest() = default;
};
class AttachPolicyToGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachPolicyToGroupResponseBody() {}

  explicit AttachPolicyToGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachPolicyToGroupResponseBody() = default;
};
class AttachPolicyToGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachPolicyToGroupResponseBody> body{};

  AttachPolicyToGroupResponse() {}

  explicit AttachPolicyToGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachPolicyToGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachPolicyToGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AttachPolicyToGroupResponse() = default;
};
class AttachPolicyToRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> roleName{};

  AttachPolicyToRoleRequest() {}

  explicit AttachPolicyToRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~AttachPolicyToRoleRequest() = default;
};
class AttachPolicyToRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachPolicyToRoleResponseBody() {}

  explicit AttachPolicyToRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachPolicyToRoleResponseBody() = default;
};
class AttachPolicyToRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachPolicyToRoleResponseBody> body{};

  AttachPolicyToRoleResponse() {}

  explicit AttachPolicyToRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachPolicyToRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachPolicyToRoleResponseBody>(model1);
      }
    }
  }


  virtual ~AttachPolicyToRoleResponse() = default;
};
class AttachPolicyToUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> userName{};

  AttachPolicyToUserRequest() {}

  explicit AttachPolicyToUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~AttachPolicyToUserRequest() = default;
};
class AttachPolicyToUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachPolicyToUserResponseBody() {}

  explicit AttachPolicyToUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachPolicyToUserResponseBody() = default;
};
class AttachPolicyToUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachPolicyToUserResponseBody> body{};

  AttachPolicyToUserResponse() {}

  explicit AttachPolicyToUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachPolicyToUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachPolicyToUserResponseBody>(model1);
      }
    }
  }


  virtual ~AttachPolicyToUserResponse() = default;
};
class BindMFADeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> authenticationCode1{};
  shared_ptr<string> authenticationCode2{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> userName{};

  BindMFADeviceRequest() {}

  explicit BindMFADeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationCode1) {
      res["AuthenticationCode1"] = boost::any(*authenticationCode1);
    }
    if (authenticationCode2) {
      res["AuthenticationCode2"] = boost::any(*authenticationCode2);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticationCode1") != m.end() && !m["AuthenticationCode1"].empty()) {
      authenticationCode1 = make_shared<string>(boost::any_cast<string>(m["AuthenticationCode1"]));
    }
    if (m.find("AuthenticationCode2") != m.end() && !m["AuthenticationCode2"].empty()) {
      authenticationCode2 = make_shared<string>(boost::any_cast<string>(m["AuthenticationCode2"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<BindMFADeviceResponseBody> body{};

  BindMFADeviceResponse() {}

  explicit BindMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> newPassword{};
  shared_ptr<string> oldPassword{};

  ChangePasswordRequest() {}

  explicit ChangePasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newPassword) {
      res["NewPassword"] = boost::any(*newPassword);
    }
    if (oldPassword) {
      res["OldPassword"] = boost::any(*oldPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewPassword") != m.end() && !m["NewPassword"].empty()) {
      newPassword = make_shared<string>(boost::any_cast<string>(m["NewPassword"]));
    }
    if (m.find("OldPassword") != m.end() && !m["OldPassword"].empty()) {
      oldPassword = make_shared<string>(boost::any_cast<string>(m["OldPassword"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<ChangePasswordResponseBody> body{};

  ChangePasswordResponse() {}

  explicit ChangePasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangePasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangePasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ChangePasswordResponse() = default;
};
class ClearAccountAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ClearAccountAliasResponseBody() {}

  explicit ClearAccountAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ClearAccountAliasResponseBody() = default;
};
class ClearAccountAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ClearAccountAliasResponseBody> body{};

  ClearAccountAliasResponse() {}

  explicit ClearAccountAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClearAccountAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClearAccountAliasResponseBody>(model1);
      }
    }
  }


  virtual ~ClearAccountAliasResponse() = default;
};
class CreateAccessKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> userName{};

  CreateAccessKeyRequest() {}

  explicit CreateAccessKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateAccessKeyRequest() = default;
};
class CreateAccessKeyResponseBodyAccessKey : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> createDate{};
  shared_ptr<string> status{};

  CreateAccessKeyResponseBodyAccessKey() {}

  explicit CreateAccessKeyResponseBodyAccessKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateAccessKeyResponseBodyAccessKey() = default;
};
class CreateAccessKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateAccessKeyResponseBodyAccessKey> accessKey{};
  shared_ptr<string> requestId{};

  CreateAccessKeyResponseBody() {}

  explicit CreateAccessKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = accessKey ? boost::any(accessKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessKey"].type()) {
        CreateAccessKeyResponseBodyAccessKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessKey"]));
        accessKey = make_shared<CreateAccessKeyResponseBodyAccessKey>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAccessKeyResponseBody() = default;
};
class CreateAccessKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccessKeyResponseBody> body{};

  CreateAccessKeyResponse() {}

  explicit CreateAccessKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccessKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccessKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccessKeyResponse() = default;
};
class CreateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> groupName{};

  CreateGroupRequest() {}

  explicit CreateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~CreateGroupRequest() = default;
};
class CreateGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};

  CreateGroupResponseBodyGroup() {}

  explicit CreateGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGroupResponseBody> body{};

  CreateGroupResponse() {}

  explicit CreateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<bool> MFABindRequired{};
  shared_ptr<string> password{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<string> userName{};

  CreateLoginProfileRequest() {}

  explicit CreateLoginProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateLoginProfileRequest() = default;
};
class CreateLoginProfileResponseBodyLoginProfile : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<bool> MFABindRequired{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<string> userName{};

  CreateLoginProfileResponseBodyLoginProfile() {}

  explicit CreateLoginProfileResponseBodyLoginProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateLoginProfileResponseBodyLoginProfile() = default;
};
class CreateLoginProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateLoginProfileResponseBodyLoginProfile> loginProfile{};
  shared_ptr<string> requestId{};

  CreateLoginProfileResponseBody() {}

  explicit CreateLoginProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginProfile) {
      res["LoginProfile"] = loginProfile ? boost::any(loginProfile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginProfile") != m.end() && !m["LoginProfile"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginProfile"].type()) {
        CreateLoginProfileResponseBodyLoginProfile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginProfile"]));
        loginProfile = make_shared<CreateLoginProfileResponseBodyLoginProfile>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLoginProfileResponseBody() = default;
};
class CreateLoginProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLoginProfileResponseBody> body{};

  CreateLoginProfileResponse() {}

  explicit CreateLoginProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLoginProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLoginProfileResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLoginProfileResponse() = default;
};
class CreatePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> policyName{};

  CreatePolicyRequest() {}

  explicit CreatePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~CreatePolicyRequest() = default;
};
class CreatePolicyResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

  CreatePolicyResponseBodyPolicy() {}

  explicit CreatePolicyResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~CreatePolicyResponseBodyPolicy() = default;
};
class CreatePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePolicyResponseBodyPolicy> policy{};
  shared_ptr<string> requestId{};

  CreatePolicyResponseBody() {}

  explicit CreatePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        CreatePolicyResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<CreatePolicyResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePolicyResponseBody() = default;
};
class CreatePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePolicyResponseBody> body{};

  CreatePolicyResponse() {}

  explicit CreatePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyResponse() = default;
};
class CreatePolicyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyDocument{};
  shared_ptr<string> policyName{};
  shared_ptr<string> rotateStrategy{};
  shared_ptr<bool> setAsDefault{};

  CreatePolicyVersionRequest() {}

  explicit CreatePolicyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (rotateStrategy) {
      res["RotateStrategy"] = boost::any(*rotateStrategy);
    }
    if (setAsDefault) {
      res["SetAsDefault"] = boost::any(*setAsDefault);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("RotateStrategy") != m.end() && !m["RotateStrategy"].empty()) {
      rotateStrategy = make_shared<string>(boost::any_cast<string>(m["RotateStrategy"]));
    }
    if (m.find("SetAsDefault") != m.end() && !m["SetAsDefault"].empty()) {
      setAsDefault = make_shared<bool>(boost::any_cast<bool>(m["SetAsDefault"]));
    }
  }


  virtual ~CreatePolicyVersionRequest() = default;
};
class CreatePolicyVersionResponseBodyPolicyVersion : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<bool> isDefaultVersion{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> versionId{};

  CreatePolicyVersionResponseBodyPolicyVersion() {}

  explicit CreatePolicyVersionResponseBodyPolicyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (isDefaultVersion) {
      res["IsDefaultVersion"] = boost::any(*isDefaultVersion);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("IsDefaultVersion") != m.end() && !m["IsDefaultVersion"].empty()) {
      isDefaultVersion = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultVersion"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~CreatePolicyVersionResponseBodyPolicyVersion() = default;
};
class CreatePolicyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePolicyVersionResponseBodyPolicyVersion> policyVersion{};
  shared_ptr<string> requestId{};

  CreatePolicyVersionResponseBody() {}

  explicit CreatePolicyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyVersion) {
      res["PolicyVersion"] = policyVersion ? boost::any(policyVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyVersion") != m.end() && !m["PolicyVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyVersion"].type()) {
        CreatePolicyVersionResponseBodyPolicyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyVersion"]));
        policyVersion = make_shared<CreatePolicyVersionResponseBodyPolicyVersion>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePolicyVersionResponseBody() = default;
};
class CreatePolicyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePolicyVersionResponseBody> body{};

  CreatePolicyVersionResponse() {}

  explicit CreatePolicyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePolicyVersionResponse() = default;
};
class CreateRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> description{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<string> roleName{};

  CreateRoleRequest() {}

  explicit CreateRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~CreateRoleRequest() = default;
};
class CreateRoleResponseBodyRole : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleName{};

  CreateRoleResponseBodyRole() {}

  explicit CreateRoleResponseBodyRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~CreateRoleResponseBodyRole() = default;
};
class CreateRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateRoleResponseBodyRole> role{};

  CreateRoleResponseBody() {}

  explicit CreateRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (role) {
      res["Role"] = role ? boost::any(role->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(map<string, boost::any>) == m["Role"].type()) {
        CreateRoleResponseBodyRole model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Role"]));
        role = make_shared<CreateRoleResponseBodyRole>(model1);
      }
    }
  }


  virtual ~CreateRoleResponseBody() = default;
};
class CreateRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRoleResponseBody> body{};

  CreateRoleResponse() {}

  explicit CreateRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRoleResponse() = default;
};
class CreateUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> userName{};

  CreateUserRequest() {}

  explicit CreateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateUserRequest() = default;
};
class CreateUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  CreateUserResponseBodyUser() {}

  explicit CreateUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
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
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateUserResponseBodyUser() = default;
};
class CreateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateUserResponseBodyUser> user{};

  CreateUserResponseBody() {}

  explicit CreateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        CreateUserResponseBodyUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<CreateUserResponseBodyUser>(model1);
      }
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VirtualMFADeviceName") != m.end() && !m["VirtualMFADeviceName"].empty()) {
      virtualMFADeviceName = make_shared<string>(boost::any_cast<string>(m["VirtualMFADeviceName"]));
    }
  }


  virtual ~CreateVirtualMFADeviceRequest() = default;
};
class CreateVirtualMFADeviceResponseBodyVirtualMFADevice : public Darabonba::Model {
public:
  shared_ptr<string> base32StringSeed{};
  shared_ptr<string> QRCodePNG{};
  shared_ptr<string> serialNumber{};

  CreateVirtualMFADeviceResponseBodyVirtualMFADevice() {}

  explicit CreateVirtualMFADeviceResponseBodyVirtualMFADevice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (base32StringSeed) {
      res["Base32StringSeed"] = boost::any(*base32StringSeed);
    }
    if (QRCodePNG) {
      res["QRCodePNG"] = boost::any(*QRCodePNG);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Base32StringSeed") != m.end() && !m["Base32StringSeed"].empty()) {
      base32StringSeed = make_shared<string>(boost::any_cast<string>(m["Base32StringSeed"]));
    }
    if (m.find("QRCodePNG") != m.end() && !m["QRCodePNG"].empty()) {
      QRCodePNG = make_shared<string>(boost::any_cast<string>(m["QRCodePNG"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~CreateVirtualMFADeviceResponseBodyVirtualMFADevice() = default;
};
class CreateVirtualMFADeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateVirtualMFADeviceResponseBodyVirtualMFADevice> virtualMFADevice{};

  CreateVirtualMFADeviceResponseBody() {}

  explicit CreateVirtualMFADeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (virtualMFADevice) {
      res["VirtualMFADevice"] = virtualMFADevice ? boost::any(virtualMFADevice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VirtualMFADevice") != m.end() && !m["VirtualMFADevice"].empty()) {
      if (typeid(map<string, boost::any>) == m["VirtualMFADevice"].type()) {
        CreateVirtualMFADeviceResponseBodyVirtualMFADevice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VirtualMFADevice"]));
        virtualMFADevice = make_shared<CreateVirtualMFADeviceResponseBodyVirtualMFADevice>(model1);
      }
    }
  }


  virtual ~CreateVirtualMFADeviceResponseBody() = default;
};
class CreateVirtualMFADeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVirtualMFADeviceResponseBody> body{};

  CreateVirtualMFADeviceResponse() {}

  explicit CreateVirtualMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVirtualMFADeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVirtualMFADeviceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVirtualMFADeviceResponse() = default;
};
class DecodeDiagnosticMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> encodedDiagnosticMessage{};

  DecodeDiagnosticMessageRequest() {}

  explicit DecodeDiagnosticMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodedDiagnosticMessage) {
      res["EncodedDiagnosticMessage"] = boost::any(*encodedDiagnosticMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncodedDiagnosticMessage") != m.end() && !m["EncodedDiagnosticMessage"].empty()) {
      encodedDiagnosticMessage = make_shared<string>(boost::any_cast<string>(m["EncodedDiagnosticMessage"]));
    }
  }


  virtual ~DecodeDiagnosticMessageRequest() = default;
};
class DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthConditions : public Darabonba::Model {
public:
  shared_ptr<string> conditionKey{};
  shared_ptr<vector<string>> conditionValues{};

  DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthConditions() {}

  explicit DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conditionKey) {
      res["ConditionKey"] = boost::any(*conditionKey);
    }
    if (conditionValues) {
      res["ConditionValues"] = boost::any(*conditionValues);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConditionKey") != m.end() && !m["ConditionKey"].empty()) {
      conditionKey = make_shared<string>(boost::any_cast<string>(m["ConditionKey"]));
    }
    if (m.find("ConditionValues") != m.end() && !m["ConditionValues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ConditionValues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ConditionValues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      conditionValues = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthConditions() = default;
};
class DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthPrincipal : public Darabonba::Model {
public:
  shared_ptr<string> authPrincipalDisplayName{};
  shared_ptr<string> authPrincipalOwnerId{};
  shared_ptr<string> authPrincipalType{};

  DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthPrincipal() {}

  explicit DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthPrincipal(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authPrincipalDisplayName) {
      res["AuthPrincipalDisplayName"] = boost::any(*authPrincipalDisplayName);
    }
    if (authPrincipalOwnerId) {
      res["AuthPrincipalOwnerId"] = boost::any(*authPrincipalOwnerId);
    }
    if (authPrincipalType) {
      res["AuthPrincipalType"] = boost::any(*authPrincipalType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthPrincipalDisplayName") != m.end() && !m["AuthPrincipalDisplayName"].empty()) {
      authPrincipalDisplayName = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalDisplayName"]));
    }
    if (m.find("AuthPrincipalOwnerId") != m.end() && !m["AuthPrincipalOwnerId"].empty()) {
      authPrincipalOwnerId = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalOwnerId"]));
    }
    if (m.find("AuthPrincipalType") != m.end() && !m["AuthPrincipalType"].empty()) {
      authPrincipalType = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalType"]));
    }
  }


  virtual ~DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthPrincipal() = default;
};
class DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageMatchedPolicies : public Darabonba::Model {
public:
  shared_ptr<string> attachedEntityType{};
  shared_ptr<string> attachedScope{};
  shared_ptr<string> effect{};
  shared_ptr<string> policyIdentifier{};
  shared_ptr<string> policyType{};
  shared_ptr<string> policyVersion{};

  DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageMatchedPolicies() {}

  explicit DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageMatchedPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachedEntityType) {
      res["AttachedEntityType"] = boost::any(*attachedEntityType);
    }
    if (attachedScope) {
      res["AttachedScope"] = boost::any(*attachedScope);
    }
    if (effect) {
      res["Effect"] = boost::any(*effect);
    }
    if (policyIdentifier) {
      res["PolicyIdentifier"] = boost::any(*policyIdentifier);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (policyVersion) {
      res["PolicyVersion"] = boost::any(*policyVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachedEntityType") != m.end() && !m["AttachedEntityType"].empty()) {
      attachedEntityType = make_shared<string>(boost::any_cast<string>(m["AttachedEntityType"]));
    }
    if (m.find("AttachedScope") != m.end() && !m["AttachedScope"].empty()) {
      attachedScope = make_shared<string>(boost::any_cast<string>(m["AttachedScope"]));
    }
    if (m.find("Effect") != m.end() && !m["Effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["Effect"]));
    }
    if (m.find("PolicyIdentifier") != m.end() && !m["PolicyIdentifier"].empty()) {
      policyIdentifier = make_shared<string>(boost::any_cast<string>(m["PolicyIdentifier"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("PolicyVersion") != m.end() && !m["PolicyVersion"].empty()) {
      policyVersion = make_shared<string>(boost::any_cast<string>(m["PolicyVersion"]));
    }
  }


  virtual ~DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageMatchedPolicies() = default;
};
class DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessage : public Darabonba::Model {
public:
  shared_ptr<string> authAction{};
  shared_ptr<vector<DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthConditions>> authConditions{};
  shared_ptr<DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthPrincipal> authPrincipal{};
  shared_ptr<string> authResource{};
  shared_ptr<bool> explicitDeny{};
  shared_ptr<vector<DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageMatchedPolicies>> matchedPolicies{};
  shared_ptr<string> noPermissionPolicyType{};

  DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessage() {}

  explicit DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authAction) {
      res["AuthAction"] = boost::any(*authAction);
    }
    if (authConditions) {
      vector<boost::any> temp1;
      for(auto item1:*authConditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthConditions"] = boost::any(temp1);
    }
    if (authPrincipal) {
      res["AuthPrincipal"] = authPrincipal ? boost::any(authPrincipal->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (authResource) {
      res["AuthResource"] = boost::any(*authResource);
    }
    if (explicitDeny) {
      res["ExplicitDeny"] = boost::any(*explicitDeny);
    }
    if (matchedPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*matchedPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MatchedPolicies"] = boost::any(temp1);
    }
    if (noPermissionPolicyType) {
      res["NoPermissionPolicyType"] = boost::any(*noPermissionPolicyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthAction") != m.end() && !m["AuthAction"].empty()) {
      authAction = make_shared<string>(boost::any_cast<string>(m["AuthAction"]));
    }
    if (m.find("AuthConditions") != m.end() && !m["AuthConditions"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthConditions"].type()) {
        vector<DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthConditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authConditions = make_shared<vector<DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthConditions>>(expect1);
      }
    }
    if (m.find("AuthPrincipal") != m.end() && !m["AuthPrincipal"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuthPrincipal"].type()) {
        DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthPrincipal model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuthPrincipal"]));
        authPrincipal = make_shared<DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageAuthPrincipal>(model1);
      }
    }
    if (m.find("AuthResource") != m.end() && !m["AuthResource"].empty()) {
      authResource = make_shared<string>(boost::any_cast<string>(m["AuthResource"]));
    }
    if (m.find("ExplicitDeny") != m.end() && !m["ExplicitDeny"].empty()) {
      explicitDeny = make_shared<bool>(boost::any_cast<bool>(m["ExplicitDeny"]));
    }
    if (m.find("MatchedPolicies") != m.end() && !m["MatchedPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["MatchedPolicies"].type()) {
        vector<DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageMatchedPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MatchedPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageMatchedPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        matchedPolicies = make_shared<vector<DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessageMatchedPolicies>>(expect1);
      }
    }
    if (m.find("NoPermissionPolicyType") != m.end() && !m["NoPermissionPolicyType"].empty()) {
      noPermissionPolicyType = make_shared<string>(boost::any_cast<string>(m["NoPermissionPolicyType"]));
    }
  }


  virtual ~DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessage() = default;
};
class DecodeDiagnosticMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessage> decodedDiagnosticMessage{};
  shared_ptr<string> requestId{};

  DecodeDiagnosticMessageResponseBody() {}

  explicit DecodeDiagnosticMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (decodedDiagnosticMessage) {
      res["DecodedDiagnosticMessage"] = decodedDiagnosticMessage ? boost::any(decodedDiagnosticMessage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DecodedDiagnosticMessage") != m.end() && !m["DecodedDiagnosticMessage"].empty()) {
      if (typeid(map<string, boost::any>) == m["DecodedDiagnosticMessage"].type()) {
        DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DecodedDiagnosticMessage"]));
        decodedDiagnosticMessage = make_shared<DecodeDiagnosticMessageResponseBodyDecodedDiagnosticMessage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DecodeDiagnosticMessageResponseBody() = default;
};
class DecodeDiagnosticMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DecodeDiagnosticMessageResponseBody> body{};

  DecodeDiagnosticMessageResponse() {}

  explicit DecodeDiagnosticMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DecodeDiagnosticMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DecodeDiagnosticMessageResponseBody>(model1);
      }
    }
  }


  virtual ~DecodeDiagnosticMessageResponse() = default;
};
class DeleteAccessKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userName{};

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
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccessKeyResponseBody> body{};

  DeleteAccessKeyResponse() {}

  explicit DeleteAccessKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccessKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccessKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccessKeyResponse() = default;
};
class DeleteGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};

  DeleteGroupRequest() {}

  explicit DeleteGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGroupResponseBody> body{};

  DeleteGroupResponse() {}

  explicit DeleteGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> userName{};

  DeleteLoginProfileRequest() {}

  explicit DeleteLoginProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLoginProfileResponseBody> body{};

  DeleteLoginProfileResponse() {}

  explicit DeleteLoginProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLoginProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLoginProfileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLoginProfileResponse() = default;
};
class DeletePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};

  DeletePolicyRequest() {}

  explicit DeletePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~DeletePolicyRequest() = default;
};
class DeletePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePolicyResponseBody() {}

  explicit DeletePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePolicyResponseBody() = default;
};
class DeletePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePolicyResponseBody> body{};

  DeletePolicyResponse() {}

  explicit DeletePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyResponse() = default;
};
class DeletePolicyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> versionId{};

  DeletePolicyVersionRequest() {}

  explicit DeletePolicyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~DeletePolicyVersionRequest() = default;
};
class DeletePolicyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePolicyVersionResponseBody() {}

  explicit DeletePolicyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePolicyVersionResponseBody() = default;
};
class DeletePolicyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePolicyVersionResponseBody> body{};

  DeletePolicyVersionResponse() {}

  explicit DeletePolicyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyVersionResponse() = default;
};
class DeleteRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};

  DeleteRoleRequest() {}

  explicit DeleteRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~DeleteRoleRequest() = default;
};
class DeleteRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRoleResponseBody() {}

  explicit DeleteRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteRoleResponseBody() = default;
};
class DeleteRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRoleResponseBody> body{};

  DeleteRoleResponse() {}

  explicit DeleteRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRoleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRoleResponse() = default;
};
class DeleteUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userName{};

  DeleteUserRequest() {}

  explicit DeleteUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserResponseBody> body{};

  DeleteUserResponse() {}

  explicit DeleteUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVirtualMFADeviceResponseBody> body{};

  DeleteVirtualMFADeviceResponse() {}

  explicit DeleteVirtualMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVirtualMFADeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVirtualMFADeviceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVirtualMFADeviceResponse() = default;
};
class DetachPolicyFromGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

  DetachPolicyFromGroupRequest() {}

  explicit DetachPolicyFromGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~DetachPolicyFromGroupRequest() = default;
};
class DetachPolicyFromGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachPolicyFromGroupResponseBody() {}

  explicit DetachPolicyFromGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachPolicyFromGroupResponseBody() = default;
};
class DetachPolicyFromGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachPolicyFromGroupResponseBody> body{};

  DetachPolicyFromGroupResponse() {}

  explicit DetachPolicyFromGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachPolicyFromGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachPolicyFromGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DetachPolicyFromGroupResponse() = default;
};
class DetachPolicyFromRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> roleName{};

  DetachPolicyFromRoleRequest() {}

  explicit DetachPolicyFromRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~DetachPolicyFromRoleRequest() = default;
};
class DetachPolicyFromRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachPolicyFromRoleResponseBody() {}

  explicit DetachPolicyFromRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachPolicyFromRoleResponseBody() = default;
};
class DetachPolicyFromRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachPolicyFromRoleResponseBody> body{};

  DetachPolicyFromRoleResponse() {}

  explicit DetachPolicyFromRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachPolicyFromRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachPolicyFromRoleResponseBody>(model1);
      }
    }
  }


  virtual ~DetachPolicyFromRoleResponse() = default;
};
class DetachPolicyFromUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> userName{};

  DetachPolicyFromUserRequest() {}

  explicit DetachPolicyFromUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DetachPolicyFromUserRequest() = default;
};
class DetachPolicyFromUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachPolicyFromUserResponseBody() {}

  explicit DetachPolicyFromUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachPolicyFromUserResponseBody() = default;
};
class DetachPolicyFromUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachPolicyFromUserResponseBody> body{};

  DetachPolicyFromUserResponse() {}

  explicit DetachPolicyFromUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachPolicyFromUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachPolicyFromUserResponseBody>(model1);
      }
    }
  }


  virtual ~DetachPolicyFromUserResponse() = default;
};
class GetAccessKeyLastUsedRequest : public Darabonba::Model {
public:
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userName{};

  GetAccessKeyLastUsedRequest() {}

  explicit GetAccessKeyLastUsedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccessKeyLastUsedResponseBody> body{};

  GetAccessKeyLastUsedResponse() {}

  explicit GetAccessKeyLastUsedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccessKeyLastUsedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccessKeyLastUsedResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccessKeyLastUsedResponse() = default;
};
class GetAccountAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountAlias{};
  shared_ptr<string> requestId{};

  GetAccountAliasResponseBody() {}

  explicit GetAccountAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountAlias) {
      res["AccountAlias"] = boost::any(*accountAlias);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountAlias") != m.end() && !m["AccountAlias"].empty()) {
      accountAlias = make_shared<string>(boost::any_cast<string>(m["AccountAlias"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccountAliasResponseBody() = default;
};
class GetAccountAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccountAliasResponseBody> body{};

  GetAccountAliasResponse() {}

  explicit GetAccountAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccountAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountAliasResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountAliasResponse() = default;
};
class GetGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};

  GetGroupRequest() {}

  explicit GetGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~GetGroupRequest() = default;
};
class GetGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> updateDate{};

  GetGroupResponseBodyGroup() {}

  explicit GetGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<GetGroupResponseBody> body{};

  GetGroupResponse() {}

  explicit GetGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> userName{};

  GetLoginProfileRequest() {}

  explicit GetLoginProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GetLoginProfileRequest() = default;
};
class GetLoginProfileResponseBodyLoginProfile : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<bool> MFABindRequired{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<string> userName{};

  GetLoginProfileResponseBodyLoginProfile() {}

  explicit GetLoginProfileResponseBodyLoginProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GetLoginProfileResponseBodyLoginProfile() = default;
};
class GetLoginProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetLoginProfileResponseBodyLoginProfile> loginProfile{};
  shared_ptr<string> requestId{};

  GetLoginProfileResponseBody() {}

  explicit GetLoginProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginProfile) {
      res["LoginProfile"] = loginProfile ? boost::any(loginProfile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginProfile") != m.end() && !m["LoginProfile"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginProfile"].type()) {
        GetLoginProfileResponseBodyLoginProfile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginProfile"]));
        loginProfile = make_shared<GetLoginProfileResponseBodyLoginProfile>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetLoginProfileResponseBody() = default;
};
class GetLoginProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLoginProfileResponseBody> body{};

  GetLoginProfileResponse() {}

  explicit GetLoginProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLoginProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLoginProfileResponseBody>(model1);
      }
    }
  }


  virtual ~GetLoginProfileResponse() = default;
};
class GetPasswordPolicyResponseBodyPasswordPolicy : public Darabonba::Model {
public:
  shared_ptr<bool> hardExpiry{};
  shared_ptr<long> maxLoginAttemps{};
  shared_ptr<long> maxPasswordAge{};
  shared_ptr<long> minimumPasswordLength{};
  shared_ptr<long> passwordReusePrevention{};
  shared_ptr<bool> requireLowercaseCharacters{};
  shared_ptr<bool> requireNumbers{};
  shared_ptr<bool> requireSymbols{};
  shared_ptr<bool> requireUppercaseCharacters{};

  GetPasswordPolicyResponseBodyPasswordPolicy() {}

  explicit GetPasswordPolicyResponseBodyPasswordPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hardExpiry) {
      res["HardExpiry"] = boost::any(*hardExpiry);
    }
    if (maxLoginAttemps) {
      res["MaxLoginAttemps"] = boost::any(*maxLoginAttemps);
    }
    if (maxPasswordAge) {
      res["MaxPasswordAge"] = boost::any(*maxPasswordAge);
    }
    if (minimumPasswordLength) {
      res["MinimumPasswordLength"] = boost::any(*minimumPasswordLength);
    }
    if (passwordReusePrevention) {
      res["PasswordReusePrevention"] = boost::any(*passwordReusePrevention);
    }
    if (requireLowercaseCharacters) {
      res["RequireLowercaseCharacters"] = boost::any(*requireLowercaseCharacters);
    }
    if (requireNumbers) {
      res["RequireNumbers"] = boost::any(*requireNumbers);
    }
    if (requireSymbols) {
      res["RequireSymbols"] = boost::any(*requireSymbols);
    }
    if (requireUppercaseCharacters) {
      res["RequireUppercaseCharacters"] = boost::any(*requireUppercaseCharacters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HardExpiry") != m.end() && !m["HardExpiry"].empty()) {
      hardExpiry = make_shared<bool>(boost::any_cast<bool>(m["HardExpiry"]));
    }
    if (m.find("MaxLoginAttemps") != m.end() && !m["MaxLoginAttemps"].empty()) {
      maxLoginAttemps = make_shared<long>(boost::any_cast<long>(m["MaxLoginAttemps"]));
    }
    if (m.find("MaxPasswordAge") != m.end() && !m["MaxPasswordAge"].empty()) {
      maxPasswordAge = make_shared<long>(boost::any_cast<long>(m["MaxPasswordAge"]));
    }
    if (m.find("MinimumPasswordLength") != m.end() && !m["MinimumPasswordLength"].empty()) {
      minimumPasswordLength = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordLength"]));
    }
    if (m.find("PasswordReusePrevention") != m.end() && !m["PasswordReusePrevention"].empty()) {
      passwordReusePrevention = make_shared<long>(boost::any_cast<long>(m["PasswordReusePrevention"]));
    }
    if (m.find("RequireLowercaseCharacters") != m.end() && !m["RequireLowercaseCharacters"].empty()) {
      requireLowercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireLowercaseCharacters"]));
    }
    if (m.find("RequireNumbers") != m.end() && !m["RequireNumbers"].empty()) {
      requireNumbers = make_shared<bool>(boost::any_cast<bool>(m["RequireNumbers"]));
    }
    if (m.find("RequireSymbols") != m.end() && !m["RequireSymbols"].empty()) {
      requireSymbols = make_shared<bool>(boost::any_cast<bool>(m["RequireSymbols"]));
    }
    if (m.find("RequireUppercaseCharacters") != m.end() && !m["RequireUppercaseCharacters"].empty()) {
      requireUppercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireUppercaseCharacters"]));
    }
  }


  virtual ~GetPasswordPolicyResponseBodyPasswordPolicy() = default;
};
class GetPasswordPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPasswordPolicyResponseBodyPasswordPolicy> passwordPolicy{};
  shared_ptr<string> requestId{};

  GetPasswordPolicyResponseBody() {}

  explicit GetPasswordPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordPolicy) {
      res["PasswordPolicy"] = passwordPolicy ? boost::any(passwordPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordPolicy") != m.end() && !m["PasswordPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["PasswordPolicy"].type()) {
        GetPasswordPolicyResponseBodyPasswordPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PasswordPolicy"]));
        passwordPolicy = make_shared<GetPasswordPolicyResponseBodyPasswordPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPasswordPolicyResponseBody() = default;
};
class GetPasswordPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPasswordPolicyResponseBody> body{};

  GetPasswordPolicyResponse() {}

  explicit GetPasswordPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPasswordPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPasswordPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetPasswordPolicyResponse() = default;
};
class GetPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

  GetPolicyRequest() {}

  explicit GetPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~GetPolicyRequest() = default;
};
class GetPolicyResponseBodyDefaultPolicyVersion : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<bool> isDefaultVersion{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> versionId{};

  GetPolicyResponseBodyDefaultPolicyVersion() {}

  explicit GetPolicyResponseBodyDefaultPolicyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (isDefaultVersion) {
      res["IsDefaultVersion"] = boost::any(*isDefaultVersion);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("IsDefaultVersion") != m.end() && !m["IsDefaultVersion"].empty()) {
      isDefaultVersion = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultVersion"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~GetPolicyResponseBodyDefaultPolicyVersion() = default;
};
class GetPolicyResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<long> attachmentCount{};
  shared_ptr<string> createDate{};
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> updateDate{};

  GetPolicyResponseBodyPolicy() {}

  explicit GetPolicyResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<long>(boost::any_cast<long>(m["AttachmentCount"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~GetPolicyResponseBodyPolicy() = default;
};
class GetPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPolicyResponseBodyDefaultPolicyVersion> defaultPolicyVersion{};
  shared_ptr<GetPolicyResponseBodyPolicy> policy{};
  shared_ptr<string> requestId{};

  GetPolicyResponseBody() {}

  explicit GetPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultPolicyVersion) {
      res["DefaultPolicyVersion"] = defaultPolicyVersion ? boost::any(defaultPolicyVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultPolicyVersion") != m.end() && !m["DefaultPolicyVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["DefaultPolicyVersion"].type()) {
        GetPolicyResponseBodyDefaultPolicyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DefaultPolicyVersion"]));
        defaultPolicyVersion = make_shared<GetPolicyResponseBodyDefaultPolicyVersion>(model1);
      }
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        GetPolicyResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<GetPolicyResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPolicyResponseBody() = default;
};
class GetPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPolicyResponseBody> body{};

  GetPolicyResponse() {}

  explicit GetPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetPolicyResponse() = default;
};
class GetPolicyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> versionId{};

  GetPolicyVersionRequest() {}

  explicit GetPolicyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~GetPolicyVersionRequest() = default;
};
class GetPolicyVersionResponseBodyPolicyVersion : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<bool> isDefaultVersion{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> versionId{};

  GetPolicyVersionResponseBodyPolicyVersion() {}

  explicit GetPolicyVersionResponseBodyPolicyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (isDefaultVersion) {
      res["IsDefaultVersion"] = boost::any(*isDefaultVersion);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("IsDefaultVersion") != m.end() && !m["IsDefaultVersion"].empty()) {
      isDefaultVersion = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultVersion"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~GetPolicyVersionResponseBodyPolicyVersion() = default;
};
class GetPolicyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPolicyVersionResponseBodyPolicyVersion> policyVersion{};
  shared_ptr<string> requestId{};

  GetPolicyVersionResponseBody() {}

  explicit GetPolicyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyVersion) {
      res["PolicyVersion"] = policyVersion ? boost::any(policyVersion->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyVersion") != m.end() && !m["PolicyVersion"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyVersion"].type()) {
        GetPolicyVersionResponseBodyPolicyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyVersion"]));
        policyVersion = make_shared<GetPolicyVersionResponseBodyPolicyVersion>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPolicyVersionResponseBody() = default;
};
class GetPolicyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPolicyVersionResponseBody> body{};

  GetPolicyVersionResponse() {}

  explicit GetPolicyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetPolicyVersionResponse() = default;
};
class GetRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};

  GetRoleRequest() {}

  explicit GetRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~GetRoleRequest() = default;
};
class GetRoleResponseBodyRole : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> updateDate{};

  GetRoleResponseBodyRole() {}

  explicit GetRoleResponseBodyRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~GetRoleResponseBodyRole() = default;
};
class GetRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetRoleResponseBodyRole> role{};

  GetRoleResponseBody() {}

  explicit GetRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (role) {
      res["Role"] = role ? boost::any(role->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(map<string, boost::any>) == m["Role"].type()) {
        GetRoleResponseBodyRole model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Role"]));
        role = make_shared<GetRoleResponseBodyRole>(model1);
      }
    }
  }


  virtual ~GetRoleResponseBody() = default;
};
class GetRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRoleResponseBody> body{};

  GetRoleResponse() {}

  explicit GetRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRoleResponseBody>(model1);
      }
    }
  }


  virtual ~GetRoleResponse() = default;
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
  shared_ptr<bool> allowUserToChangePassword{};
  shared_ptr<bool> enableSaveMFATicket{};
  shared_ptr<string> loginNetworkMasks{};
  shared_ptr<long> loginSessionDuration{};

  GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference() {}

  explicit GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToChangePassword) {
      res["AllowUserToChangePassword"] = boost::any(*allowUserToChangePassword);
    }
    if (enableSaveMFATicket) {
      res["EnableSaveMFATicket"] = boost::any(*enableSaveMFATicket);
    }
    if (loginNetworkMasks) {
      res["LoginNetworkMasks"] = boost::any(*loginNetworkMasks);
    }
    if (loginSessionDuration) {
      res["LoginSessionDuration"] = boost::any(*loginSessionDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToChangePassword") != m.end() && !m["AllowUserToChangePassword"].empty()) {
      allowUserToChangePassword = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToChangePassword"]));
    }
    if (m.find("EnableSaveMFATicket") != m.end() && !m["EnableSaveMFATicket"].empty()) {
      enableSaveMFATicket = make_shared<bool>(boost::any_cast<bool>(m["EnableSaveMFATicket"]));
    }
    if (m.find("LoginNetworkMasks") != m.end() && !m["LoginNetworkMasks"].empty()) {
      loginNetworkMasks = make_shared<string>(boost::any_cast<string>(m["LoginNetworkMasks"]));
    }
    if (m.find("LoginSessionDuration") != m.end() && !m["LoginSessionDuration"].empty()) {
      loginSessionDuration = make_shared<long>(boost::any_cast<long>(m["LoginSessionDuration"]));
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
class GetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToManagePublicKeys{};

  GetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference() {}

  explicit GetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToManagePublicKeys) {
      res["AllowUserToManagePublicKeys"] = boost::any(*allowUserToManagePublicKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToManagePublicKeys") != m.end() && !m["AllowUserToManagePublicKeys"].empty()) {
      allowUserToManagePublicKeys = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManagePublicKeys"]));
    }
  }


  virtual ~GetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference() = default;
};
class GetSecurityPreferenceResponseBodySecurityPreference : public Darabonba::Model {
public:
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference> accessKeyPreference{};
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference> loginProfilePreference{};
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference> MFAPreference{};
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference> publicKeyPreference{};

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
    if (publicKeyPreference) {
      res["PublicKeyPreference"] = publicKeyPreference ? boost::any(publicKeyPreference->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PublicKeyPreference") != m.end() && !m["PublicKeyPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["PublicKeyPreference"].type()) {
        GetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PublicKeyPreference"]));
        publicKeyPreference = make_shared<GetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference>(model1);
      }
    }
  }


  virtual ~GetSecurityPreferenceResponseBodySecurityPreference() = default;
};
class GetSecurityPreferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetSecurityPreferenceResponseBodySecurityPreference> securityPreference{};

  GetSecurityPreferenceResponseBody() {}

  explicit GetSecurityPreferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityPreference) {
      res["SecurityPreference"] = securityPreference ? boost::any(securityPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityPreference") != m.end() && !m["SecurityPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityPreference"].type()) {
        GetSecurityPreferenceResponseBodySecurityPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityPreference"]));
        securityPreference = make_shared<GetSecurityPreferenceResponseBodySecurityPreference>(model1);
      }
    }
  }


  virtual ~GetSecurityPreferenceResponseBody() = default;
};
class GetSecurityPreferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSecurityPreferenceResponseBody> body{};

  GetSecurityPreferenceResponse() {}

  explicit GetSecurityPreferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> userName{};

  GetUserRequest() {}

  explicit GetUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GetUserRequest() = default;
};
class GetUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> lastLoginDate{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  GetUserResponseBodyUser() {}

  explicit GetUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lastLoginDate) {
      res["LastLoginDate"] = boost::any(*lastLoginDate);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
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
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("LastLoginDate") != m.end() && !m["LastLoginDate"].empty()) {
      lastLoginDate = make_shared<string>(boost::any_cast<string>(m["LastLoginDate"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GetUserResponseBodyUser() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetUserResponseBodyUser> user{};

  GetUserResponseBody() {}

  explicit GetUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        GetUserResponseBodyUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<GetUserResponseBodyUser>(model1);
      }
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
  shared_ptr<string> userName{};

  GetUserMFAInfoRequest() {}

  explicit GetUserMFAInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GetUserMFAInfoRequest() = default;
};
class GetUserMFAInfoResponseBodyMFADevice : public Darabonba::Model {
public:
  shared_ptr<string> serialNumber{};
  shared_ptr<string> type{};

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
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetUserMFAInfoResponseBodyMFADevice() = default;
};
class GetUserMFAInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetUserMFAInfoResponseBodyMFADevice> MFADevice{};
  shared_ptr<string> requestId{};

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
  }


  virtual ~GetUserMFAInfoResponseBody() = default;
};
class GetUserMFAInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserMFAInfoResponseBody> body{};

  GetUserMFAInfoResponse() {}

  explicit GetUserMFAInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserMFAInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserMFAInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserMFAInfoResponse() = default;
};
class ListAccessKeysRequest : public Darabonba::Model {
public:
  shared_ptr<string> userName{};

  ListAccessKeysRequest() {}

  explicit ListAccessKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ListAccessKeysRequest() = default;
};
class ListAccessKeysResponseBodyAccessKeysAccessKey : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> status{};

  ListAccessKeysResponseBodyAccessKeysAccessKey() {}

  explicit ListAccessKeysResponseBodyAccessKeysAccessKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccessKeysResponseBody> body{};

  ListAccessKeysResponse() {}

  explicit ListAccessKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccessKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccessKeysResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccessKeysResponse() = default;
};
class ListEntitiesForPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

  ListEntitiesForPolicyRequest() {}

  explicit ListEntitiesForPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListEntitiesForPolicyRequest() = default;
};
class ListEntitiesForPolicyResponseBodyGroupsGroup : public Darabonba::Model {
public:
  shared_ptr<string> attachDate{};
  shared_ptr<string> comments{};
  shared_ptr<string> groupName{};

  ListEntitiesForPolicyResponseBodyGroupsGroup() {}

  explicit ListEntitiesForPolicyResponseBodyGroupsGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachDate) {
      res["AttachDate"] = boost::any(*attachDate);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachDate") != m.end() && !m["AttachDate"].empty()) {
      attachDate = make_shared<string>(boost::any_cast<string>(m["AttachDate"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~ListEntitiesForPolicyResponseBodyGroupsGroup() = default;
};
class ListEntitiesForPolicyResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListEntitiesForPolicyResponseBodyGroupsGroup>> group{};

  ListEntitiesForPolicyResponseBodyGroups() {}

  explicit ListEntitiesForPolicyResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListEntitiesForPolicyResponseBodyGroupsGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Group"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEntitiesForPolicyResponseBodyGroupsGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        group = make_shared<vector<ListEntitiesForPolicyResponseBodyGroupsGroup>>(expect1);
      }
    }
  }


  virtual ~ListEntitiesForPolicyResponseBodyGroups() = default;
};
class ListEntitiesForPolicyResponseBodyRolesRole : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> attachDate{};
  shared_ptr<string> description{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleName{};

  ListEntitiesForPolicyResponseBodyRolesRole() {}

  explicit ListEntitiesForPolicyResponseBodyRolesRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (attachDate) {
      res["AttachDate"] = boost::any(*attachDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AttachDate") != m.end() && !m["AttachDate"].empty()) {
      attachDate = make_shared<string>(boost::any_cast<string>(m["AttachDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~ListEntitiesForPolicyResponseBodyRolesRole() = default;
};
class ListEntitiesForPolicyResponseBodyRoles : public Darabonba::Model {
public:
  shared_ptr<vector<ListEntitiesForPolicyResponseBodyRolesRole>> role{};

  ListEntitiesForPolicyResponseBodyRoles() {}

  explicit ListEntitiesForPolicyResponseBodyRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      vector<boost::any> temp1;
      for(auto item1:*role){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Role"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(vector<boost::any>) == m["Role"].type()) {
        vector<ListEntitiesForPolicyResponseBodyRolesRole> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Role"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEntitiesForPolicyResponseBodyRolesRole model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        role = make_shared<vector<ListEntitiesForPolicyResponseBodyRolesRole>>(expect1);
      }
    }
  }


  virtual ~ListEntitiesForPolicyResponseBodyRoles() = default;
};
class ListEntitiesForPolicyResponseBodyUsersUser : public Darabonba::Model {
public:
  shared_ptr<string> attachDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ListEntitiesForPolicyResponseBodyUsersUser() {}

  explicit ListEntitiesForPolicyResponseBodyUsersUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachDate) {
      res["AttachDate"] = boost::any(*attachDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
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
    if (m.find("AttachDate") != m.end() && !m["AttachDate"].empty()) {
      attachDate = make_shared<string>(boost::any_cast<string>(m["AttachDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ListEntitiesForPolicyResponseBodyUsersUser() = default;
};
class ListEntitiesForPolicyResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<vector<ListEntitiesForPolicyResponseBodyUsersUser>> user{};

  ListEntitiesForPolicyResponseBodyUsers() {}

  explicit ListEntitiesForPolicyResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListEntitiesForPolicyResponseBodyUsersUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEntitiesForPolicyResponseBodyUsersUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<ListEntitiesForPolicyResponseBodyUsersUser>>(expect1);
      }
    }
  }


  virtual ~ListEntitiesForPolicyResponseBodyUsers() = default;
};
class ListEntitiesForPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListEntitiesForPolicyResponseBodyGroups> groups{};
  shared_ptr<string> requestId{};
  shared_ptr<ListEntitiesForPolicyResponseBodyRoles> roles{};
  shared_ptr<ListEntitiesForPolicyResponseBodyUsers> users{};

  ListEntitiesForPolicyResponseBody() {}

  explicit ListEntitiesForPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      res["Groups"] = groups ? boost::any(groups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roles) {
      res["Roles"] = roles ? boost::any(roles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (users) {
      res["Users"] = users ? boost::any(users->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(map<string, boost::any>) == m["Groups"].type()) {
        ListEntitiesForPolicyResponseBodyGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Groups"]));
        groups = make_shared<ListEntitiesForPolicyResponseBodyGroups>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roles"].type()) {
        ListEntitiesForPolicyResponseBodyRoles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roles"]));
        roles = make_shared<ListEntitiesForPolicyResponseBodyRoles>(model1);
      }
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(map<string, boost::any>) == m["Users"].type()) {
        ListEntitiesForPolicyResponseBodyUsers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Users"]));
        users = make_shared<ListEntitiesForPolicyResponseBodyUsers>(model1);
      }
    }
  }


  virtual ~ListEntitiesForPolicyResponseBody() = default;
};
class ListEntitiesForPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEntitiesForPolicyResponseBody> body{};

  ListEntitiesForPolicyResponse() {}

  explicit ListEntitiesForPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEntitiesForPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEntitiesForPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ListEntitiesForPolicyResponse() = default;
};
class ListGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
  }


  virtual ~ListGroupsRequest() = default;
};
class ListGroupsResponseBodyGroupsGroup : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> updateDate{};

  ListGroupsResponseBodyGroupsGroup() {}

  explicit ListGroupsResponseBodyGroupsGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
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
  shared_ptr<ListGroupsResponseBodyGroups> groups{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<string> requestId{};

  ListGroupsResponseBody() {}

  explicit ListGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      res["Groups"] = groups ? boost::any(groups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListGroupsResponseBody() = default;
};
class ListGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupsResponseBody> body{};

  ListGroupsResponse() {}

  explicit ListGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> userName{};

  ListGroupsForUserRequest() {}

  explicit ListGroupsForUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ListGroupsForUserRequest() = default;
};
class ListGroupsForUserResponseBodyGroupsGroup : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> joinDate{};

  ListGroupsForUserResponseBodyGroupsGroup() {}

  explicit ListGroupsForUserResponseBodyGroupsGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (joinDate) {
      res["JoinDate"] = boost::any(*joinDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
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
  shared_ptr<ListGroupsForUserResponseBodyGroups> groups{};
  shared_ptr<string> requestId{};

  ListGroupsForUserResponseBody() {}

  explicit ListGroupsForUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      res["Groups"] = groups ? boost::any(groups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(map<string, boost::any>) == m["Groups"].type()) {
        ListGroupsForUserResponseBodyGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Groups"]));
        groups = make_shared<ListGroupsForUserResponseBodyGroups>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListGroupsForUserResponseBody() = default;
};
class ListGroupsForUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupsForUserResponseBody> body{};

  ListGroupsForUserResponse() {}

  explicit ListGroupsForUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupsForUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupsForUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupsForUserResponse() = default;
};
class ListPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};
  shared_ptr<string> policyType{};

  ListPoliciesRequest() {}

  explicit ListPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
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
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListPoliciesRequest() = default;
};
class ListPoliciesResponseBodyPoliciesPolicy : public Darabonba::Model {
public:
  shared_ptr<long> attachmentCount{};
  shared_ptr<string> createDate{};
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> updateDate{};

  ListPoliciesResponseBodyPoliciesPolicy() {}

  explicit ListPoliciesResponseBodyPoliciesPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachmentCount) {
      res["AttachmentCount"] = boost::any(*attachmentCount);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachmentCount") != m.end() && !m["AttachmentCount"].empty()) {
      attachmentCount = make_shared<long>(boost::any_cast<long>(m["AttachmentCount"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListPoliciesResponseBodyPoliciesPolicy() = default;
};
class ListPoliciesResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<ListPoliciesResponseBodyPoliciesPolicy>> policy{};

  ListPoliciesResponseBodyPolicies() {}

  explicit ListPoliciesResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      vector<boost::any> temp1;
      for(auto item1:*policy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(vector<boost::any>) == m["Policy"].type()) {
        vector<ListPoliciesResponseBodyPoliciesPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPoliciesResponseBodyPoliciesPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policy = make_shared<vector<ListPoliciesResponseBodyPoliciesPolicy>>(expect1);
      }
    }
  }


  virtual ~ListPoliciesResponseBodyPolicies() = default;
};
class ListPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<ListPoliciesResponseBodyPolicies> policies{};
  shared_ptr<string> requestId{};

  ListPoliciesResponseBody() {}

  explicit ListPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (policies) {
      res["Policies"] = policies ? boost::any(policies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policies"].type()) {
        ListPoliciesResponseBodyPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policies"]));
        policies = make_shared<ListPoliciesResponseBodyPolicies>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPoliciesResponseBody() = default;
};
class ListPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPoliciesResponseBody> body{};

  ListPoliciesResponse() {}

  explicit ListPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPoliciesResponse() = default;
};
class ListPoliciesForGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};

  ListPoliciesForGroupRequest() {}

  explicit ListPoliciesForGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~ListPoliciesForGroupRequest() = default;
};
class ListPoliciesForGroupResponseBodyPoliciesPolicy : public Darabonba::Model {
public:
  shared_ptr<string> attachDate{};
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

  ListPoliciesForGroupResponseBodyPoliciesPolicy() {}

  explicit ListPoliciesForGroupResponseBodyPoliciesPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachDate) {
      res["AttachDate"] = boost::any(*attachDate);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachDate") != m.end() && !m["AttachDate"].empty()) {
      attachDate = make_shared<string>(boost::any_cast<string>(m["AttachDate"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListPoliciesForGroupResponseBodyPoliciesPolicy() = default;
};
class ListPoliciesForGroupResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<ListPoliciesForGroupResponseBodyPoliciesPolicy>> policy{};

  ListPoliciesForGroupResponseBodyPolicies() {}

  explicit ListPoliciesForGroupResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      vector<boost::any> temp1;
      for(auto item1:*policy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(vector<boost::any>) == m["Policy"].type()) {
        vector<ListPoliciesForGroupResponseBodyPoliciesPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPoliciesForGroupResponseBodyPoliciesPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policy = make_shared<vector<ListPoliciesForGroupResponseBodyPoliciesPolicy>>(expect1);
      }
    }
  }


  virtual ~ListPoliciesForGroupResponseBodyPolicies() = default;
};
class ListPoliciesForGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListPoliciesForGroupResponseBodyPolicies> policies{};
  shared_ptr<string> requestId{};

  ListPoliciesForGroupResponseBody() {}

  explicit ListPoliciesForGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policies) {
      res["Policies"] = policies ? boost::any(policies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policies"].type()) {
        ListPoliciesForGroupResponseBodyPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policies"]));
        policies = make_shared<ListPoliciesForGroupResponseBodyPolicies>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPoliciesForGroupResponseBody() = default;
};
class ListPoliciesForGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPoliciesForGroupResponseBody> body{};

  ListPoliciesForGroupResponse() {}

  explicit ListPoliciesForGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPoliciesForGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPoliciesForGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListPoliciesForGroupResponse() = default;
};
class ListPoliciesForRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};

  ListPoliciesForRoleRequest() {}

  explicit ListPoliciesForRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~ListPoliciesForRoleRequest() = default;
};
class ListPoliciesForRoleResponseBodyPoliciesPolicy : public Darabonba::Model {
public:
  shared_ptr<string> attachDate{};
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

  ListPoliciesForRoleResponseBodyPoliciesPolicy() {}

  explicit ListPoliciesForRoleResponseBodyPoliciesPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachDate) {
      res["AttachDate"] = boost::any(*attachDate);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachDate") != m.end() && !m["AttachDate"].empty()) {
      attachDate = make_shared<string>(boost::any_cast<string>(m["AttachDate"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListPoliciesForRoleResponseBodyPoliciesPolicy() = default;
};
class ListPoliciesForRoleResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<ListPoliciesForRoleResponseBodyPoliciesPolicy>> policy{};

  ListPoliciesForRoleResponseBodyPolicies() {}

  explicit ListPoliciesForRoleResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      vector<boost::any> temp1;
      for(auto item1:*policy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(vector<boost::any>) == m["Policy"].type()) {
        vector<ListPoliciesForRoleResponseBodyPoliciesPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPoliciesForRoleResponseBodyPoliciesPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policy = make_shared<vector<ListPoliciesForRoleResponseBodyPoliciesPolicy>>(expect1);
      }
    }
  }


  virtual ~ListPoliciesForRoleResponseBodyPolicies() = default;
};
class ListPoliciesForRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListPoliciesForRoleResponseBodyPolicies> policies{};
  shared_ptr<string> requestId{};

  ListPoliciesForRoleResponseBody() {}

  explicit ListPoliciesForRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policies) {
      res["Policies"] = policies ? boost::any(policies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policies"].type()) {
        ListPoliciesForRoleResponseBodyPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policies"]));
        policies = make_shared<ListPoliciesForRoleResponseBodyPolicies>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPoliciesForRoleResponseBody() = default;
};
class ListPoliciesForRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPoliciesForRoleResponseBody> body{};

  ListPoliciesForRoleResponse() {}

  explicit ListPoliciesForRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPoliciesForRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPoliciesForRoleResponseBody>(model1);
      }
    }
  }


  virtual ~ListPoliciesForRoleResponse() = default;
};
class ListPoliciesForUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userName{};

  ListPoliciesForUserRequest() {}

  explicit ListPoliciesForUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ListPoliciesForUserRequest() = default;
};
class ListPoliciesForUserResponseBodyPoliciesPolicy : public Darabonba::Model {
public:
  shared_ptr<string> attachDate{};
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

  ListPoliciesForUserResponseBodyPoliciesPolicy() {}

  explicit ListPoliciesForUserResponseBodyPoliciesPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachDate) {
      res["AttachDate"] = boost::any(*attachDate);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachDate") != m.end() && !m["AttachDate"].empty()) {
      attachDate = make_shared<string>(boost::any_cast<string>(m["AttachDate"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListPoliciesForUserResponseBodyPoliciesPolicy() = default;
};
class ListPoliciesForUserResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<ListPoliciesForUserResponseBodyPoliciesPolicy>> policy{};

  ListPoliciesForUserResponseBodyPolicies() {}

  explicit ListPoliciesForUserResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      vector<boost::any> temp1;
      for(auto item1:*policy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(vector<boost::any>) == m["Policy"].type()) {
        vector<ListPoliciesForUserResponseBodyPoliciesPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPoliciesForUserResponseBodyPoliciesPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policy = make_shared<vector<ListPoliciesForUserResponseBodyPoliciesPolicy>>(expect1);
      }
    }
  }


  virtual ~ListPoliciesForUserResponseBodyPolicies() = default;
};
class ListPoliciesForUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListPoliciesForUserResponseBodyPolicies> policies{};
  shared_ptr<string> requestId{};

  ListPoliciesForUserResponseBody() {}

  explicit ListPoliciesForUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policies) {
      res["Policies"] = policies ? boost::any(policies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policies"].type()) {
        ListPoliciesForUserResponseBodyPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policies"]));
        policies = make_shared<ListPoliciesForUserResponseBodyPolicies>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPoliciesForUserResponseBody() = default;
};
class ListPoliciesForUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPoliciesForUserResponseBody> body{};

  ListPoliciesForUserResponse() {}

  explicit ListPoliciesForUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPoliciesForUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPoliciesForUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListPoliciesForUserResponse() = default;
};
class ListPolicyVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};

  ListPolicyVersionsRequest() {}

  explicit ListPolicyVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListPolicyVersionsRequest() = default;
};
class ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<bool> isDefaultVersion{};
  shared_ptr<string> policyDocument{};
  shared_ptr<string> versionId{};

  ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion() {}

  explicit ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (isDefaultVersion) {
      res["IsDefaultVersion"] = boost::any(*isDefaultVersion);
    }
    if (policyDocument) {
      res["PolicyDocument"] = boost::any(*policyDocument);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("IsDefaultVersion") != m.end() && !m["IsDefaultVersion"].empty()) {
      isDefaultVersion = make_shared<bool>(boost::any_cast<bool>(m["IsDefaultVersion"]));
    }
    if (m.find("PolicyDocument") != m.end() && !m["PolicyDocument"].empty()) {
      policyDocument = make_shared<string>(boost::any_cast<string>(m["PolicyDocument"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion() = default;
};
class ListPolicyVersionsResponseBodyPolicyVersions : public Darabonba::Model {
public:
  shared_ptr<vector<ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion>> policyVersion{};

  ListPolicyVersionsResponseBodyPolicyVersions() {}

  explicit ListPolicyVersionsResponseBodyPolicyVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyVersion) {
      vector<boost::any> temp1;
      for(auto item1:*policyVersion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyVersion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyVersion") != m.end() && !m["PolicyVersion"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyVersion"].type()) {
        vector<ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyVersion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyVersion = make_shared<vector<ListPolicyVersionsResponseBodyPolicyVersionsPolicyVersion>>(expect1);
      }
    }
  }


  virtual ~ListPolicyVersionsResponseBodyPolicyVersions() = default;
};
class ListPolicyVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListPolicyVersionsResponseBodyPolicyVersions> policyVersions{};
  shared_ptr<string> requestId{};

  ListPolicyVersionsResponseBody() {}

  explicit ListPolicyVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyVersions) {
      res["PolicyVersions"] = policyVersions ? boost::any(policyVersions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyVersions") != m.end() && !m["PolicyVersions"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyVersions"].type()) {
        ListPolicyVersionsResponseBodyPolicyVersions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyVersions"]));
        policyVersions = make_shared<ListPolicyVersionsResponseBodyPolicyVersions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPolicyVersionsResponseBody() = default;
};
class ListPolicyVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPolicyVersionsResponseBody> body{};

  ListPolicyVersionsResponse() {}

  explicit ListPolicyVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPolicyVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPolicyVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPolicyVersionsResponse() = default;
};
class ListRolesRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};

  ListRolesRequest() {}

  explicit ListRolesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
  }


  virtual ~ListRolesRequest() = default;
};
class ListRolesResponseBodyRolesRole : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> updateDate{};

  ListRolesResponseBodyRolesRole() {}

  explicit ListRolesResponseBodyRolesRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListRolesResponseBodyRolesRole() = default;
};
class ListRolesResponseBodyRoles : public Darabonba::Model {
public:
  shared_ptr<vector<ListRolesResponseBodyRolesRole>> role{};

  ListRolesResponseBodyRoles() {}

  explicit ListRolesResponseBodyRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      vector<boost::any> temp1;
      for(auto item1:*role){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Role"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(vector<boost::any>) == m["Role"].type()) {
        vector<ListRolesResponseBodyRolesRole> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Role"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRolesResponseBodyRolesRole model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        role = make_shared<vector<ListRolesResponseBodyRolesRole>>(expect1);
      }
    }
  }


  virtual ~ListRolesResponseBodyRoles() = default;
};
class ListRolesResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<string> requestId{};
  shared_ptr<ListRolesResponseBodyRoles> roles{};

  ListRolesResponseBody() {}

  explicit ListRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roles) {
      res["Roles"] = roles ? boost::any(roles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roles"].type()) {
        ListRolesResponseBodyRoles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roles"]));
        roles = make_shared<ListRolesResponseBodyRoles>(model1);
      }
    }
  }


  virtual ~ListRolesResponseBody() = default;
};
class ListRolesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRolesResponseBody> body{};

  ListRolesResponse() {}

  explicit ListRolesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRolesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRolesResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxItems{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxItems") != m.end() && !m["MaxItems"].empty()) {
      maxItems = make_shared<long>(boost::any_cast<long>(m["MaxItems"]));
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyUsersUser : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ListUsersResponseBodyUsersUser() {}

  explicit ListUsersResponseBodyUsersUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
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
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
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
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<string> requestId{};
  shared_ptr<ListUsersResponseBodyUsers> users{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (users) {
      res["Users"] = users ? boost::any(users->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersResponseBody> body{};

  ListUsersResponse() {}

  explicit ListUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> displayName{};
  shared_ptr<string> joinDate{};
  shared_ptr<string> userName{};

  ListUsersForGroupResponseBodyUsersUser() {}

  explicit ListUsersForGroupResponseBodyUsersUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (joinDate) {
      res["JoinDate"] = boost::any(*joinDate);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("JoinDate") != m.end() && !m["JoinDate"].empty()) {
      joinDate = make_shared<string>(boost::any_cast<string>(m["JoinDate"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
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
  shared_ptr<bool> isTruncated{};
  shared_ptr<string> marker{};
  shared_ptr<string> requestId{};
  shared_ptr<ListUsersForGroupResponseBodyUsers> users{};

  ListUsersForGroupResponseBody() {}

  explicit ListUsersForGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (users) {
      res["Users"] = users ? boost::any(users->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersForGroupResponseBody> body{};

  ListUsersForGroupResponse() {}

  explicit ListUsersForGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsersForGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersForGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersForGroupResponse() = default;
};
class ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser() {}

  explicit ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
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
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser() = default;
};
class ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice : public Darabonba::Model {
public:
  shared_ptr<string> activateDate{};
  shared_ptr<string> serialNumber{};
  shared_ptr<ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADeviceUser> user{};

  ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice() {}

  explicit ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activateDate) {
      res["ActivateDate"] = boost::any(*activateDate);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivateDate") != m.end() && !m["ActivateDate"].empty()) {
      activateDate = make_shared<string>(boost::any_cast<string>(m["ActivateDate"]));
    }
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
  shared_ptr<string> requestId{};
  shared_ptr<ListVirtualMFADevicesResponseBodyVirtualMFADevices> virtualMFADevices{};

  ListVirtualMFADevicesResponseBody() {}

  explicit ListVirtualMFADevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (virtualMFADevices) {
      res["VirtualMFADevices"] = virtualMFADevices ? boost::any(virtualMFADevices->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VirtualMFADevices") != m.end() && !m["VirtualMFADevices"].empty()) {
      if (typeid(map<string, boost::any>) == m["VirtualMFADevices"].type()) {
        ListVirtualMFADevicesResponseBodyVirtualMFADevices model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VirtualMFADevices"]));
        virtualMFADevices = make_shared<ListVirtualMFADevicesResponseBodyVirtualMFADevices>(model1);
      }
    }
  }


  virtual ~ListVirtualMFADevicesResponseBody() = default;
};
class ListVirtualMFADevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVirtualMFADevicesResponseBody> body{};

  ListVirtualMFADevicesResponse() {}

  explicit ListVirtualMFADevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> groupName{};
  shared_ptr<string> userName{};

  RemoveUserFromGroupRequest() {}

  explicit RemoveUserFromGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveUserFromGroupResponseBody> body{};

  RemoveUserFromGroupResponse() {}

  explicit RemoveUserFromGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveUserFromGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveUserFromGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveUserFromGroupResponse() = default;
};
class SetAccountAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountAlias{};

  SetAccountAliasRequest() {}

  explicit SetAccountAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountAlias) {
      res["AccountAlias"] = boost::any(*accountAlias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountAlias") != m.end() && !m["AccountAlias"].empty()) {
      accountAlias = make_shared<string>(boost::any_cast<string>(m["AccountAlias"]));
    }
  }


  virtual ~SetAccountAliasRequest() = default;
};
class SetAccountAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetAccountAliasResponseBody() {}

  explicit SetAccountAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetAccountAliasResponseBody() = default;
};
class SetAccountAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetAccountAliasResponseBody> body{};

  SetAccountAliasResponse() {}

  explicit SetAccountAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetAccountAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAccountAliasResponseBody>(model1);
      }
    }
  }


  virtual ~SetAccountAliasResponse() = default;
};
class SetDefaultPolicyVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};
  shared_ptr<string> versionId{};

  SetDefaultPolicyVersionRequest() {}

  explicit SetDefaultPolicyVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~SetDefaultPolicyVersionRequest() = default;
};
class SetDefaultPolicyVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetDefaultPolicyVersionResponseBody() {}

  explicit SetDefaultPolicyVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetDefaultPolicyVersionResponseBody() = default;
};
class SetDefaultPolicyVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDefaultPolicyVersionResponseBody> body{};

  SetDefaultPolicyVersionResponse() {}

  explicit SetDefaultPolicyVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDefaultPolicyVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDefaultPolicyVersionResponseBody>(model1);
      }
    }
  }


  virtual ~SetDefaultPolicyVersionResponse() = default;
};
class SetPasswordPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<bool> hardExpiry{};
  shared_ptr<long> maxLoginAttemps{};
  shared_ptr<long> maxPasswordAge{};
  shared_ptr<long> minimumPasswordLength{};
  shared_ptr<long> passwordReusePrevention{};
  shared_ptr<bool> requireLowercaseCharacters{};
  shared_ptr<bool> requireNumbers{};
  shared_ptr<bool> requireSymbols{};
  shared_ptr<bool> requireUppercaseCharacters{};

  SetPasswordPolicyRequest() {}

  explicit SetPasswordPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hardExpiry) {
      res["HardExpiry"] = boost::any(*hardExpiry);
    }
    if (maxLoginAttemps) {
      res["MaxLoginAttemps"] = boost::any(*maxLoginAttemps);
    }
    if (maxPasswordAge) {
      res["MaxPasswordAge"] = boost::any(*maxPasswordAge);
    }
    if (minimumPasswordLength) {
      res["MinimumPasswordLength"] = boost::any(*minimumPasswordLength);
    }
    if (passwordReusePrevention) {
      res["PasswordReusePrevention"] = boost::any(*passwordReusePrevention);
    }
    if (requireLowercaseCharacters) {
      res["RequireLowercaseCharacters"] = boost::any(*requireLowercaseCharacters);
    }
    if (requireNumbers) {
      res["RequireNumbers"] = boost::any(*requireNumbers);
    }
    if (requireSymbols) {
      res["RequireSymbols"] = boost::any(*requireSymbols);
    }
    if (requireUppercaseCharacters) {
      res["RequireUppercaseCharacters"] = boost::any(*requireUppercaseCharacters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HardExpiry") != m.end() && !m["HardExpiry"].empty()) {
      hardExpiry = make_shared<bool>(boost::any_cast<bool>(m["HardExpiry"]));
    }
    if (m.find("MaxLoginAttemps") != m.end() && !m["MaxLoginAttemps"].empty()) {
      maxLoginAttemps = make_shared<long>(boost::any_cast<long>(m["MaxLoginAttemps"]));
    }
    if (m.find("MaxPasswordAge") != m.end() && !m["MaxPasswordAge"].empty()) {
      maxPasswordAge = make_shared<long>(boost::any_cast<long>(m["MaxPasswordAge"]));
    }
    if (m.find("MinimumPasswordLength") != m.end() && !m["MinimumPasswordLength"].empty()) {
      minimumPasswordLength = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordLength"]));
    }
    if (m.find("PasswordReusePrevention") != m.end() && !m["PasswordReusePrevention"].empty()) {
      passwordReusePrevention = make_shared<long>(boost::any_cast<long>(m["PasswordReusePrevention"]));
    }
    if (m.find("RequireLowercaseCharacters") != m.end() && !m["RequireLowercaseCharacters"].empty()) {
      requireLowercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireLowercaseCharacters"]));
    }
    if (m.find("RequireNumbers") != m.end() && !m["RequireNumbers"].empty()) {
      requireNumbers = make_shared<bool>(boost::any_cast<bool>(m["RequireNumbers"]));
    }
    if (m.find("RequireSymbols") != m.end() && !m["RequireSymbols"].empty()) {
      requireSymbols = make_shared<bool>(boost::any_cast<bool>(m["RequireSymbols"]));
    }
    if (m.find("RequireUppercaseCharacters") != m.end() && !m["RequireUppercaseCharacters"].empty()) {
      requireUppercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireUppercaseCharacters"]));
    }
  }


  virtual ~SetPasswordPolicyRequest() = default;
};
class SetPasswordPolicyResponseBodyPasswordPolicy : public Darabonba::Model {
public:
  shared_ptr<bool> hardExpiry{};
  shared_ptr<long> maxLoginAttemps{};
  shared_ptr<long> maxPasswordAge{};
  shared_ptr<long> minimumPasswordLength{};
  shared_ptr<long> passwordReusePrevention{};
  shared_ptr<bool> requireLowercaseCharacters{};
  shared_ptr<bool> requireNumbers{};
  shared_ptr<bool> requireSymbols{};
  shared_ptr<bool> requireUppercaseCharacters{};

  SetPasswordPolicyResponseBodyPasswordPolicy() {}

  explicit SetPasswordPolicyResponseBodyPasswordPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hardExpiry) {
      res["HardExpiry"] = boost::any(*hardExpiry);
    }
    if (maxLoginAttemps) {
      res["MaxLoginAttemps"] = boost::any(*maxLoginAttemps);
    }
    if (maxPasswordAge) {
      res["MaxPasswordAge"] = boost::any(*maxPasswordAge);
    }
    if (minimumPasswordLength) {
      res["MinimumPasswordLength"] = boost::any(*minimumPasswordLength);
    }
    if (passwordReusePrevention) {
      res["PasswordReusePrevention"] = boost::any(*passwordReusePrevention);
    }
    if (requireLowercaseCharacters) {
      res["RequireLowercaseCharacters"] = boost::any(*requireLowercaseCharacters);
    }
    if (requireNumbers) {
      res["RequireNumbers"] = boost::any(*requireNumbers);
    }
    if (requireSymbols) {
      res["RequireSymbols"] = boost::any(*requireSymbols);
    }
    if (requireUppercaseCharacters) {
      res["RequireUppercaseCharacters"] = boost::any(*requireUppercaseCharacters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HardExpiry") != m.end() && !m["HardExpiry"].empty()) {
      hardExpiry = make_shared<bool>(boost::any_cast<bool>(m["HardExpiry"]));
    }
    if (m.find("MaxLoginAttemps") != m.end() && !m["MaxLoginAttemps"].empty()) {
      maxLoginAttemps = make_shared<long>(boost::any_cast<long>(m["MaxLoginAttemps"]));
    }
    if (m.find("MaxPasswordAge") != m.end() && !m["MaxPasswordAge"].empty()) {
      maxPasswordAge = make_shared<long>(boost::any_cast<long>(m["MaxPasswordAge"]));
    }
    if (m.find("MinimumPasswordLength") != m.end() && !m["MinimumPasswordLength"].empty()) {
      minimumPasswordLength = make_shared<long>(boost::any_cast<long>(m["MinimumPasswordLength"]));
    }
    if (m.find("PasswordReusePrevention") != m.end() && !m["PasswordReusePrevention"].empty()) {
      passwordReusePrevention = make_shared<long>(boost::any_cast<long>(m["PasswordReusePrevention"]));
    }
    if (m.find("RequireLowercaseCharacters") != m.end() && !m["RequireLowercaseCharacters"].empty()) {
      requireLowercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireLowercaseCharacters"]));
    }
    if (m.find("RequireNumbers") != m.end() && !m["RequireNumbers"].empty()) {
      requireNumbers = make_shared<bool>(boost::any_cast<bool>(m["RequireNumbers"]));
    }
    if (m.find("RequireSymbols") != m.end() && !m["RequireSymbols"].empty()) {
      requireSymbols = make_shared<bool>(boost::any_cast<bool>(m["RequireSymbols"]));
    }
    if (m.find("RequireUppercaseCharacters") != m.end() && !m["RequireUppercaseCharacters"].empty()) {
      requireUppercaseCharacters = make_shared<bool>(boost::any_cast<bool>(m["RequireUppercaseCharacters"]));
    }
  }


  virtual ~SetPasswordPolicyResponseBodyPasswordPolicy() = default;
};
class SetPasswordPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<SetPasswordPolicyResponseBodyPasswordPolicy> passwordPolicy{};
  shared_ptr<string> requestId{};

  SetPasswordPolicyResponseBody() {}

  explicit SetPasswordPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (passwordPolicy) {
      res["PasswordPolicy"] = passwordPolicy ? boost::any(passwordPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PasswordPolicy") != m.end() && !m["PasswordPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["PasswordPolicy"].type()) {
        SetPasswordPolicyResponseBodyPasswordPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PasswordPolicy"]));
        passwordPolicy = make_shared<SetPasswordPolicyResponseBodyPasswordPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetPasswordPolicyResponseBody() = default;
};
class SetPasswordPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetPasswordPolicyResponseBody> body{};

  SetPasswordPolicyResponse() {}

  explicit SetPasswordPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<bool> allowUserToChangePassword{};
  shared_ptr<bool> allowUserToManageAccessKeys{};
  shared_ptr<bool> allowUserToManageMFADevices{};
  shared_ptr<bool> allowUserToManagePublicKeys{};
  shared_ptr<bool> enableSaveMFATicket{};
  shared_ptr<string> loginNetworkMasks{};
  shared_ptr<long> loginSessionDuration{};

  SetSecurityPreferenceRequest() {}

  explicit SetSecurityPreferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToChangePassword) {
      res["AllowUserToChangePassword"] = boost::any(*allowUserToChangePassword);
    }
    if (allowUserToManageAccessKeys) {
      res["AllowUserToManageAccessKeys"] = boost::any(*allowUserToManageAccessKeys);
    }
    if (allowUserToManageMFADevices) {
      res["AllowUserToManageMFADevices"] = boost::any(*allowUserToManageMFADevices);
    }
    if (allowUserToManagePublicKeys) {
      res["AllowUserToManagePublicKeys"] = boost::any(*allowUserToManagePublicKeys);
    }
    if (enableSaveMFATicket) {
      res["EnableSaveMFATicket"] = boost::any(*enableSaveMFATicket);
    }
    if (loginNetworkMasks) {
      res["LoginNetworkMasks"] = boost::any(*loginNetworkMasks);
    }
    if (loginSessionDuration) {
      res["LoginSessionDuration"] = boost::any(*loginSessionDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToChangePassword") != m.end() && !m["AllowUserToChangePassword"].empty()) {
      allowUserToChangePassword = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToChangePassword"]));
    }
    if (m.find("AllowUserToManageAccessKeys") != m.end() && !m["AllowUserToManageAccessKeys"].empty()) {
      allowUserToManageAccessKeys = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageAccessKeys"]));
    }
    if (m.find("AllowUserToManageMFADevices") != m.end() && !m["AllowUserToManageMFADevices"].empty()) {
      allowUserToManageMFADevices = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManageMFADevices"]));
    }
    if (m.find("AllowUserToManagePublicKeys") != m.end() && !m["AllowUserToManagePublicKeys"].empty()) {
      allowUserToManagePublicKeys = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManagePublicKeys"]));
    }
    if (m.find("EnableSaveMFATicket") != m.end() && !m["EnableSaveMFATicket"].empty()) {
      enableSaveMFATicket = make_shared<bool>(boost::any_cast<bool>(m["EnableSaveMFATicket"]));
    }
    if (m.find("LoginNetworkMasks") != m.end() && !m["LoginNetworkMasks"].empty()) {
      loginNetworkMasks = make_shared<string>(boost::any_cast<string>(m["LoginNetworkMasks"]));
    }
    if (m.find("LoginSessionDuration") != m.end() && !m["LoginSessionDuration"].empty()) {
      loginSessionDuration = make_shared<long>(boost::any_cast<long>(m["LoginSessionDuration"]));
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
  shared_ptr<bool> allowUserToChangePassword{};
  shared_ptr<bool> enableSaveMFATicket{};
  shared_ptr<string> loginNetworkMasks{};
  shared_ptr<long> loginSessionDuration{};

  SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference() {}

  explicit SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToChangePassword) {
      res["AllowUserToChangePassword"] = boost::any(*allowUserToChangePassword);
    }
    if (enableSaveMFATicket) {
      res["EnableSaveMFATicket"] = boost::any(*enableSaveMFATicket);
    }
    if (loginNetworkMasks) {
      res["LoginNetworkMasks"] = boost::any(*loginNetworkMasks);
    }
    if (loginSessionDuration) {
      res["LoginSessionDuration"] = boost::any(*loginSessionDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToChangePassword") != m.end() && !m["AllowUserToChangePassword"].empty()) {
      allowUserToChangePassword = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToChangePassword"]));
    }
    if (m.find("EnableSaveMFATicket") != m.end() && !m["EnableSaveMFATicket"].empty()) {
      enableSaveMFATicket = make_shared<bool>(boost::any_cast<bool>(m["EnableSaveMFATicket"]));
    }
    if (m.find("LoginNetworkMasks") != m.end() && !m["LoginNetworkMasks"].empty()) {
      loginNetworkMasks = make_shared<string>(boost::any_cast<string>(m["LoginNetworkMasks"]));
    }
    if (m.find("LoginSessionDuration") != m.end() && !m["LoginSessionDuration"].empty()) {
      loginSessionDuration = make_shared<long>(boost::any_cast<long>(m["LoginSessionDuration"]));
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
class SetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToManagePublicKeys{};

  SetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference() {}

  explicit SetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToManagePublicKeys) {
      res["AllowUserToManagePublicKeys"] = boost::any(*allowUserToManagePublicKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToManagePublicKeys") != m.end() && !m["AllowUserToManagePublicKeys"].empty()) {
      allowUserToManagePublicKeys = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToManagePublicKeys"]));
    }
  }


  virtual ~SetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference() = default;
};
class SetSecurityPreferenceResponseBodySecurityPreference : public Darabonba::Model {
public:
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreferenceAccessKeyPreference> accessKeyPreference{};
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreferenceLoginProfilePreference> loginProfilePreference{};
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreferenceMFAPreference> MFAPreference{};
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference> publicKeyPreference{};

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
    if (publicKeyPreference) {
      res["PublicKeyPreference"] = publicKeyPreference ? boost::any(publicKeyPreference->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("PublicKeyPreference") != m.end() && !m["PublicKeyPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["PublicKeyPreference"].type()) {
        SetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PublicKeyPreference"]));
        publicKeyPreference = make_shared<SetSecurityPreferenceResponseBodySecurityPreferencePublicKeyPreference>(model1);
      }
    }
  }


  virtual ~SetSecurityPreferenceResponseBodySecurityPreference() = default;
};
class SetSecurityPreferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SetSecurityPreferenceResponseBodySecurityPreference> securityPreference{};

  SetSecurityPreferenceResponseBody() {}

  explicit SetSecurityPreferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityPreference) {
      res["SecurityPreference"] = securityPreference ? boost::any(securityPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityPreference") != m.end() && !m["SecurityPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityPreference"].type()) {
        SetSecurityPreferenceResponseBodySecurityPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityPreference"]));
        securityPreference = make_shared<SetSecurityPreferenceResponseBodySecurityPreference>(model1);
      }
    }
  }


  virtual ~SetSecurityPreferenceResponseBody() = default;
};
class SetSecurityPreferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetSecurityPreferenceResponseBody> body{};

  SetSecurityPreferenceResponse() {}

  explicit SetSecurityPreferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetSecurityPreferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetSecurityPreferenceResponseBody>(model1);
      }
    }
  }


  virtual ~SetSecurityPreferenceResponse() = default;
};
class UnbindMFADeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> userName{};

  UnbindMFADeviceRequest() {}

  explicit UnbindMFADeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindMFADeviceResponseBody> body{};

  UnbindMFADeviceResponse() {}

  explicit UnbindMFADeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> status{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userName{};

  UpdateAccessKeyRequest() {}

  explicit UpdateAccessKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAccessKeyResponseBody> body{};

  UpdateAccessKeyResponse() {}

  explicit UpdateAccessKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAccessKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAccessKeyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAccessKeyResponse() = default;
};
class UpdateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupName{};
  shared_ptr<string> newComments{};
  shared_ptr<string> newGroupName{};

  UpdateGroupRequest() {}

  explicit UpdateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (newComments) {
      res["NewComments"] = boost::any(*newComments);
    }
    if (newGroupName) {
      res["NewGroupName"] = boost::any(*newGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("NewComments") != m.end() && !m["NewComments"].empty()) {
      newComments = make_shared<string>(boost::any_cast<string>(m["NewComments"]));
    }
    if (m.find("NewGroupName") != m.end() && !m["NewGroupName"].empty()) {
      newGroupName = make_shared<string>(boost::any_cast<string>(m["NewGroupName"]));
    }
  }


  virtual ~UpdateGroupRequest() = default;
};
class UpdateGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> updateDate{};

  UpdateGroupResponseBodyGroup() {}

  explicit UpdateGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGroupResponseBody> body{};

  UpdateGroupResponse() {}

  explicit UpdateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<bool> MFABindRequired{};
  shared_ptr<string> password{};
  shared_ptr<bool> passwordResetRequired{};
  shared_ptr<string> userName{};

  UpdateLoginProfileRequest() {}

  explicit UpdateLoginProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFABindRequired) {
      res["MFABindRequired"] = boost::any(*MFABindRequired);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (passwordResetRequired) {
      res["PasswordResetRequired"] = boost::any(*passwordResetRequired);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFABindRequired") != m.end() && !m["MFABindRequired"].empty()) {
      MFABindRequired = make_shared<bool>(boost::any_cast<bool>(m["MFABindRequired"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PasswordResetRequired") != m.end() && !m["PasswordResetRequired"].empty()) {
      passwordResetRequired = make_shared<bool>(boost::any_cast<bool>(m["PasswordResetRequired"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~UpdateLoginProfileRequest() = default;
};
class UpdateLoginProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateLoginProfileResponseBody() = default;
};
class UpdateLoginProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLoginProfileResponseBody> body{};

  UpdateLoginProfileResponse() {}

  explicit UpdateLoginProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLoginProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLoginProfileResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLoginProfileResponse() = default;
};
class UpdatePolicyDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> newDescription{};
  shared_ptr<string> policyName{};

  UpdatePolicyDescriptionRequest() {}

  explicit UpdatePolicyDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newDescription) {
      res["NewDescription"] = boost::any(*newDescription);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewDescription") != m.end() && !m["NewDescription"].empty()) {
      newDescription = make_shared<string>(boost::any_cast<string>(m["NewDescription"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~UpdatePolicyDescriptionRequest() = default;
};
class UpdatePolicyDescriptionResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> defaultVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policyType{};
  shared_ptr<string> updateDate{};

  UpdatePolicyDescriptionResponseBodyPolicy() {}

  explicit UpdatePolicyDescriptionResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (defaultVersion) {
      res["DefaultVersion"] = boost::any(*defaultVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DefaultVersion") != m.end() && !m["DefaultVersion"].empty()) {
      defaultVersion = make_shared<string>(boost::any_cast<string>(m["DefaultVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~UpdatePolicyDescriptionResponseBodyPolicy() = default;
};
class UpdatePolicyDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdatePolicyDescriptionResponseBodyPolicy> policy{};
  shared_ptr<string> requestId{};

  UpdatePolicyDescriptionResponseBody() {}

  explicit UpdatePolicyDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        UpdatePolicyDescriptionResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<UpdatePolicyDescriptionResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdatePolicyDescriptionResponseBody() = default;
};
class UpdatePolicyDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePolicyDescriptionResponseBody> body{};

  UpdatePolicyDescriptionResponse() {}

  explicit UpdatePolicyDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePolicyDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePolicyDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePolicyDescriptionResponse() = default;
};
class UpdateRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> newAssumeRolePolicyDocument{};
  shared_ptr<string> newDescription{};
  shared_ptr<long> newMaxSessionDuration{};
  shared_ptr<string> roleName{};

  UpdateRoleRequest() {}

  explicit UpdateRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newAssumeRolePolicyDocument) {
      res["NewAssumeRolePolicyDocument"] = boost::any(*newAssumeRolePolicyDocument);
    }
    if (newDescription) {
      res["NewDescription"] = boost::any(*newDescription);
    }
    if (newMaxSessionDuration) {
      res["NewMaxSessionDuration"] = boost::any(*newMaxSessionDuration);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewAssumeRolePolicyDocument") != m.end() && !m["NewAssumeRolePolicyDocument"].empty()) {
      newAssumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["NewAssumeRolePolicyDocument"]));
    }
    if (m.find("NewDescription") != m.end() && !m["NewDescription"].empty()) {
      newDescription = make_shared<string>(boost::any_cast<string>(m["NewDescription"]));
    }
    if (m.find("NewMaxSessionDuration") != m.end() && !m["NewMaxSessionDuration"].empty()) {
      newMaxSessionDuration = make_shared<long>(boost::any_cast<long>(m["NewMaxSessionDuration"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~UpdateRoleRequest() = default;
};
class UpdateRoleResponseBodyRole : public Darabonba::Model {
public:
  shared_ptr<string> arn{};
  shared_ptr<string> assumeRolePolicyDocument{};
  shared_ptr<string> createDate{};
  shared_ptr<string> description{};
  shared_ptr<long> maxSessionDuration{};
  shared_ptr<string> roleId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> updateDate{};

  UpdateRoleResponseBodyRole() {}

  explicit UpdateRoleResponseBodyRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arn) {
      res["Arn"] = boost::any(*arn);
    }
    if (assumeRolePolicyDocument) {
      res["AssumeRolePolicyDocument"] = boost::any(*assumeRolePolicyDocument);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (maxSessionDuration) {
      res["MaxSessionDuration"] = boost::any(*maxSessionDuration);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arn") != m.end() && !m["Arn"].empty()) {
      arn = make_shared<string>(boost::any_cast<string>(m["Arn"]));
    }
    if (m.find("AssumeRolePolicyDocument") != m.end() && !m["AssumeRolePolicyDocument"].empty()) {
      assumeRolePolicyDocument = make_shared<string>(boost::any_cast<string>(m["AssumeRolePolicyDocument"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MaxSessionDuration") != m.end() && !m["MaxSessionDuration"].empty()) {
      maxSessionDuration = make_shared<long>(boost::any_cast<long>(m["MaxSessionDuration"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~UpdateRoleResponseBodyRole() = default;
};
class UpdateRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateRoleResponseBodyRole> role{};

  UpdateRoleResponseBody() {}

  explicit UpdateRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (role) {
      res["Role"] = role ? boost::any(role->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(map<string, boost::any>) == m["Role"].type()) {
        UpdateRoleResponseBodyRole model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Role"]));
        role = make_shared<UpdateRoleResponseBodyRole>(model1);
      }
    }
  }


  virtual ~UpdateRoleResponseBody() = default;
};
class UpdateRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRoleResponseBody> body{};

  UpdateRoleResponse() {}

  explicit UpdateRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRoleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRoleResponse() = default;
};
class UpdateUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> newComments{};
  shared_ptr<string> newDisplayName{};
  shared_ptr<string> newEmail{};
  shared_ptr<string> newMobilePhone{};
  shared_ptr<string> newUserName{};
  shared_ptr<string> userName{};

  UpdateUserRequest() {}

  explicit UpdateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newComments) {
      res["NewComments"] = boost::any(*newComments);
    }
    if (newDisplayName) {
      res["NewDisplayName"] = boost::any(*newDisplayName);
    }
    if (newEmail) {
      res["NewEmail"] = boost::any(*newEmail);
    }
    if (newMobilePhone) {
      res["NewMobilePhone"] = boost::any(*newMobilePhone);
    }
    if (newUserName) {
      res["NewUserName"] = boost::any(*newUserName);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewComments") != m.end() && !m["NewComments"].empty()) {
      newComments = make_shared<string>(boost::any_cast<string>(m["NewComments"]));
    }
    if (m.find("NewDisplayName") != m.end() && !m["NewDisplayName"].empty()) {
      newDisplayName = make_shared<string>(boost::any_cast<string>(m["NewDisplayName"]));
    }
    if (m.find("NewEmail") != m.end() && !m["NewEmail"].empty()) {
      newEmail = make_shared<string>(boost::any_cast<string>(m["NewEmail"]));
    }
    if (m.find("NewMobilePhone") != m.end() && !m["NewMobilePhone"].empty()) {
      newMobilePhone = make_shared<string>(boost::any_cast<string>(m["NewMobilePhone"]));
    }
    if (m.find("NewUserName") != m.end() && !m["NewUserName"].empty()) {
      newUserName = make_shared<string>(boost::any_cast<string>(m["NewUserName"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~UpdateUserRequest() = default;
};
class UpdateUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> comments{};
  shared_ptr<string> createDate{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  UpdateUserResponseBodyUser() {}

  explicit UpdateUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
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
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~UpdateUserResponseBodyUser() = default;
};
class UpdateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateUserResponseBodyUser> user{};

  UpdateUserResponseBody() {}

  explicit UpdateUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        UpdateUserResponseBodyUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<UpdateUserResponseBodyUser>(model1);
      }
    }
  }


  virtual ~UpdateUserResponseBody() = default;
};
class UpdateUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserResponseBody> body{};

  UpdateUserResponse() {}

  explicit UpdateUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  AttachPolicyToGroupResponse attachPolicyToGroupWithOptions(shared_ptr<AttachPolicyToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachPolicyToGroupResponse attachPolicyToGroup(shared_ptr<AttachPolicyToGroupRequest> request);
  AttachPolicyToRoleResponse attachPolicyToRoleWithOptions(shared_ptr<AttachPolicyToRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachPolicyToRoleResponse attachPolicyToRole(shared_ptr<AttachPolicyToRoleRequest> request);
  AttachPolicyToUserResponse attachPolicyToUserWithOptions(shared_ptr<AttachPolicyToUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachPolicyToUserResponse attachPolicyToUser(shared_ptr<AttachPolicyToUserRequest> request);
  BindMFADeviceResponse bindMFADeviceWithOptions(shared_ptr<BindMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindMFADeviceResponse bindMFADevice(shared_ptr<BindMFADeviceRequest> request);
  ChangePasswordResponse changePasswordWithOptions(shared_ptr<ChangePasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangePasswordResponse changePassword(shared_ptr<ChangePasswordRequest> request);
  ClearAccountAliasResponse clearAccountAliasWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClearAccountAliasResponse clearAccountAlias();
  CreateAccessKeyResponse createAccessKeyWithOptions(shared_ptr<CreateAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessKeyResponse createAccessKey(shared_ptr<CreateAccessKeyRequest> request);
  CreateGroupResponse createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupResponse createGroup(shared_ptr<CreateGroupRequest> request);
  CreateLoginProfileResponse createLoginProfileWithOptions(shared_ptr<CreateLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoginProfileResponse createLoginProfile(shared_ptr<CreateLoginProfileRequest> request);
  CreatePolicyResponse createPolicyWithOptions(shared_ptr<CreatePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyResponse createPolicy(shared_ptr<CreatePolicyRequest> request);
  CreatePolicyVersionResponse createPolicyVersionWithOptions(shared_ptr<CreatePolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePolicyVersionResponse createPolicyVersion(shared_ptr<CreatePolicyVersionRequest> request);
  CreateRoleResponse createRoleWithOptions(shared_ptr<CreateRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRoleResponse createRole(shared_ptr<CreateRoleRequest> request);
  CreateUserResponse createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserResponse createUser(shared_ptr<CreateUserRequest> request);
  CreateVirtualMFADeviceResponse createVirtualMFADeviceWithOptions(shared_ptr<CreateVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVirtualMFADeviceResponse createVirtualMFADevice(shared_ptr<CreateVirtualMFADeviceRequest> request);
  DecodeDiagnosticMessageResponse decodeDiagnosticMessageWithOptions(shared_ptr<DecodeDiagnosticMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DecodeDiagnosticMessageResponse decodeDiagnosticMessage(shared_ptr<DecodeDiagnosticMessageRequest> request);
  DeleteAccessKeyResponse deleteAccessKeyWithOptions(shared_ptr<DeleteAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessKeyResponse deleteAccessKey(shared_ptr<DeleteAccessKeyRequest> request);
  DeleteGroupResponse deleteGroupWithOptions(shared_ptr<DeleteGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupResponse deleteGroup(shared_ptr<DeleteGroupRequest> request);
  DeleteLoginProfileResponse deleteLoginProfileWithOptions(shared_ptr<DeleteLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLoginProfileResponse deleteLoginProfile(shared_ptr<DeleteLoginProfileRequest> request);
  DeletePolicyResponse deletePolicyWithOptions(shared_ptr<DeletePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyResponse deletePolicy(shared_ptr<DeletePolicyRequest> request);
  DeletePolicyVersionResponse deletePolicyVersionWithOptions(shared_ptr<DeletePolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyVersionResponse deletePolicyVersion(shared_ptr<DeletePolicyVersionRequest> request);
  DeleteRoleResponse deleteRoleWithOptions(shared_ptr<DeleteRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRoleResponse deleteRole(shared_ptr<DeleteRoleRequest> request);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<DeleteUserRequest> request);
  DeleteVirtualMFADeviceResponse deleteVirtualMFADeviceWithOptions(shared_ptr<DeleteVirtualMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVirtualMFADeviceResponse deleteVirtualMFADevice(shared_ptr<DeleteVirtualMFADeviceRequest> request);
  DetachPolicyFromGroupResponse detachPolicyFromGroupWithOptions(shared_ptr<DetachPolicyFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachPolicyFromGroupResponse detachPolicyFromGroup(shared_ptr<DetachPolicyFromGroupRequest> request);
  DetachPolicyFromRoleResponse detachPolicyFromRoleWithOptions(shared_ptr<DetachPolicyFromRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachPolicyFromRoleResponse detachPolicyFromRole(shared_ptr<DetachPolicyFromRoleRequest> request);
  DetachPolicyFromUserResponse detachPolicyFromUserWithOptions(shared_ptr<DetachPolicyFromUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachPolicyFromUserResponse detachPolicyFromUser(shared_ptr<DetachPolicyFromUserRequest> request);
  GetAccessKeyLastUsedResponse getAccessKeyLastUsedWithOptions(shared_ptr<GetAccessKeyLastUsedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccessKeyLastUsedResponse getAccessKeyLastUsed(shared_ptr<GetAccessKeyLastUsedRequest> request);
  GetAccountAliasResponse getAccountAliasWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountAliasResponse getAccountAlias();
  GetGroupResponse getGroupWithOptions(shared_ptr<GetGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGroupResponse getGroup(shared_ptr<GetGroupRequest> request);
  GetLoginProfileResponse getLoginProfileWithOptions(shared_ptr<GetLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLoginProfileResponse getLoginProfile(shared_ptr<GetLoginProfileRequest> request);
  GetPasswordPolicyResponse getPasswordPolicyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPasswordPolicyResponse getPasswordPolicy();
  GetPolicyResponse getPolicyWithOptions(shared_ptr<GetPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolicyResponse getPolicy(shared_ptr<GetPolicyRequest> request);
  GetPolicyVersionResponse getPolicyVersionWithOptions(shared_ptr<GetPolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPolicyVersionResponse getPolicyVersion(shared_ptr<GetPolicyVersionRequest> request);
  GetRoleResponse getRoleWithOptions(shared_ptr<GetRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRoleResponse getRole(shared_ptr<GetRoleRequest> request);
  GetSecurityPreferenceResponse getSecurityPreferenceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSecurityPreferenceResponse getSecurityPreference();
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  GetUserMFAInfoResponse getUserMFAInfoWithOptions(shared_ptr<GetUserMFAInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserMFAInfoResponse getUserMFAInfo(shared_ptr<GetUserMFAInfoRequest> request);
  ListAccessKeysResponse listAccessKeysWithOptions(shared_ptr<ListAccessKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccessKeysResponse listAccessKeys(shared_ptr<ListAccessKeysRequest> request);
  ListEntitiesForPolicyResponse listEntitiesForPolicyWithOptions(shared_ptr<ListEntitiesForPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEntitiesForPolicyResponse listEntitiesForPolicy(shared_ptr<ListEntitiesForPolicyRequest> request);
  ListGroupsResponse listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsResponse listGroups(shared_ptr<ListGroupsRequest> request);
  ListGroupsForUserResponse listGroupsForUserWithOptions(shared_ptr<ListGroupsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsForUserResponse listGroupsForUser(shared_ptr<ListGroupsForUserRequest> request);
  ListPoliciesResponse listPoliciesWithOptions(shared_ptr<ListPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPoliciesResponse listPolicies(shared_ptr<ListPoliciesRequest> request);
  ListPoliciesForGroupResponse listPoliciesForGroupWithOptions(shared_ptr<ListPoliciesForGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPoliciesForGroupResponse listPoliciesForGroup(shared_ptr<ListPoliciesForGroupRequest> request);
  ListPoliciesForRoleResponse listPoliciesForRoleWithOptions(shared_ptr<ListPoliciesForRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPoliciesForRoleResponse listPoliciesForRole(shared_ptr<ListPoliciesForRoleRequest> request);
  ListPoliciesForUserResponse listPoliciesForUserWithOptions(shared_ptr<ListPoliciesForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPoliciesForUserResponse listPoliciesForUser(shared_ptr<ListPoliciesForUserRequest> request);
  ListPolicyVersionsResponse listPolicyVersionsWithOptions(shared_ptr<ListPolicyVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicyVersionsResponse listPolicyVersions(shared_ptr<ListPolicyVersionsRequest> request);
  ListRolesResponse listRolesWithOptions(shared_ptr<ListRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRolesResponse listRoles(shared_ptr<ListRolesRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  ListUsersForGroupResponse listUsersForGroupWithOptions(shared_ptr<ListUsersForGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersForGroupResponse listUsersForGroup(shared_ptr<ListUsersForGroupRequest> request);
  ListVirtualMFADevicesResponse listVirtualMFADevicesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVirtualMFADevicesResponse listVirtualMFADevices();
  RemoveUserFromGroupResponse removeUserFromGroupWithOptions(shared_ptr<RemoveUserFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUserFromGroupResponse removeUserFromGroup(shared_ptr<RemoveUserFromGroupRequest> request);
  SetAccountAliasResponse setAccountAliasWithOptions(shared_ptr<SetAccountAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAccountAliasResponse setAccountAlias(shared_ptr<SetAccountAliasRequest> request);
  SetDefaultPolicyVersionResponse setDefaultPolicyVersionWithOptions(shared_ptr<SetDefaultPolicyVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDefaultPolicyVersionResponse setDefaultPolicyVersion(shared_ptr<SetDefaultPolicyVersionRequest> request);
  SetPasswordPolicyResponse setPasswordPolicyWithOptions(shared_ptr<SetPasswordPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetPasswordPolicyResponse setPasswordPolicy(shared_ptr<SetPasswordPolicyRequest> request);
  SetSecurityPreferenceResponse setSecurityPreferenceWithOptions(shared_ptr<SetSecurityPreferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetSecurityPreferenceResponse setSecurityPreference(shared_ptr<SetSecurityPreferenceRequest> request);
  UnbindMFADeviceResponse unbindMFADeviceWithOptions(shared_ptr<UnbindMFADeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindMFADeviceResponse unbindMFADevice(shared_ptr<UnbindMFADeviceRequest> request);
  UpdateAccessKeyResponse updateAccessKeyWithOptions(shared_ptr<UpdateAccessKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAccessKeyResponse updateAccessKey(shared_ptr<UpdateAccessKeyRequest> request);
  UpdateGroupResponse updateGroupWithOptions(shared_ptr<UpdateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupResponse updateGroup(shared_ptr<UpdateGroupRequest> request);
  UpdateLoginProfileResponse updateLoginProfileWithOptions(shared_ptr<UpdateLoginProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoginProfileResponse updateLoginProfile(shared_ptr<UpdateLoginProfileRequest> request);
  UpdatePolicyDescriptionResponse updatePolicyDescriptionWithOptions(shared_ptr<UpdatePolicyDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePolicyDescriptionResponse updatePolicyDescription(shared_ptr<UpdatePolicyDescriptionRequest> request);
  UpdateRoleResponse updateRoleWithOptions(shared_ptr<UpdateRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRoleResponse updateRole(shared_ptr<UpdateRoleRequest> request);
  UpdateUserResponse updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserResponse updateUser(shared_ptr<UpdateUserRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ram20150501

#endif
