// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDSSO20210515_H_
#define ALIBABACLOUD_CLOUDSSO20210515_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloudsso20210515 {
class AddExternalSAMLIdPCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> x509Certificate{};

  AddExternalSAMLIdPCertificateRequest() {}

  explicit AddExternalSAMLIdPCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (x509Certificate) {
      res["X509Certificate"] = boost::any(*x509Certificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("X509Certificate") != m.end() && !m["X509Certificate"].empty()) {
      x509Certificate = make_shared<string>(boost::any_cast<string>(m["X509Certificate"]));
    }
  }


  virtual ~AddExternalSAMLIdPCertificateRequest() = default;
};
class AddExternalSAMLIdPCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> requestId{};

  AddExternalSAMLIdPCertificateResponseBody() {}

  explicit AddExternalSAMLIdPCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddExternalSAMLIdPCertificateResponseBody() = default;
};
class AddExternalSAMLIdPCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddExternalSAMLIdPCertificateResponseBody> body{};

  AddExternalSAMLIdPCertificateResponse() {}

  explicit AddExternalSAMLIdPCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddExternalSAMLIdPCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddExternalSAMLIdPCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~AddExternalSAMLIdPCertificateResponse() = default;
};
class AddPermissionPolicyToAccessConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> inlinePolicyDocument{};
  shared_ptr<string> permissionPolicyName{};
  shared_ptr<string> permissionPolicyType{};

  AddPermissionPolicyToAccessConfigurationRequest() {}

  explicit AddPermissionPolicyToAccessConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (inlinePolicyDocument) {
      res["InlinePolicyDocument"] = boost::any(*inlinePolicyDocument);
    }
    if (permissionPolicyName) {
      res["PermissionPolicyName"] = boost::any(*permissionPolicyName);
    }
    if (permissionPolicyType) {
      res["PermissionPolicyType"] = boost::any(*permissionPolicyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("InlinePolicyDocument") != m.end() && !m["InlinePolicyDocument"].empty()) {
      inlinePolicyDocument = make_shared<string>(boost::any_cast<string>(m["InlinePolicyDocument"]));
    }
    if (m.find("PermissionPolicyName") != m.end() && !m["PermissionPolicyName"].empty()) {
      permissionPolicyName = make_shared<string>(boost::any_cast<string>(m["PermissionPolicyName"]));
    }
    if (m.find("PermissionPolicyType") != m.end() && !m["PermissionPolicyType"].empty()) {
      permissionPolicyType = make_shared<string>(boost::any_cast<string>(m["PermissionPolicyType"]));
    }
  }


  virtual ~AddPermissionPolicyToAccessConfigurationRequest() = default;
};
class AddPermissionPolicyToAccessConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddPermissionPolicyToAccessConfigurationResponseBody() {}

  explicit AddPermissionPolicyToAccessConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddPermissionPolicyToAccessConfigurationResponseBody() = default;
};
class AddPermissionPolicyToAccessConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddPermissionPolicyToAccessConfigurationResponseBody> body{};

  AddPermissionPolicyToAccessConfigurationResponse() {}

  explicit AddPermissionPolicyToAccessConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddPermissionPolicyToAccessConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddPermissionPolicyToAccessConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~AddPermissionPolicyToAccessConfigurationResponse() = default;
};
class AddUserToGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> userId{};

  AddUserToGroupRequest() {}

  explicit AddUserToGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
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
class ClearExternalSAMLIdentityProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  ClearExternalSAMLIdentityProviderRequest() {}

  explicit ClearExternalSAMLIdentityProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~ClearExternalSAMLIdentityProviderRequest() = default;
};
class ClearExternalSAMLIdentityProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ClearExternalSAMLIdentityProviderResponseBody() {}

  explicit ClearExternalSAMLIdentityProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ClearExternalSAMLIdentityProviderResponseBody() = default;
};
class ClearExternalSAMLIdentityProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ClearExternalSAMLIdentityProviderResponseBody> body{};

  ClearExternalSAMLIdentityProviderResponse() {}

  explicit ClearExternalSAMLIdentityProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClearExternalSAMLIdentityProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClearExternalSAMLIdentityProviderResponseBody>(model1);
      }
    }
  }


  virtual ~ClearExternalSAMLIdentityProviderResponse() = default;
};
class CreateAccessAssignmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalType{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  CreateAccessAssignmentRequest() {}

  explicit CreateAccessAssignmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateAccessAssignmentRequest() = default;
};
class CreateAccessAssignmentResponseBodyTask : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> accessConfigurationName{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> status{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetPathName{};
  shared_ptr<string> targetType{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  CreateAccessAssignmentResponseBodyTask() {}

  explicit CreateAccessAssignmentResponseBodyTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (accessConfigurationName) {
      res["AccessConfigurationName"] = boost::any(*accessConfigurationName);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetPathName) {
      res["TargetPathName"] = boost::any(*targetPathName);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("AccessConfigurationName") != m.end() && !m["AccessConfigurationName"].empty()) {
      accessConfigurationName = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationName"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetPathName") != m.end() && !m["TargetPathName"].empty()) {
      targetPathName = make_shared<string>(boost::any_cast<string>(m["TargetPathName"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~CreateAccessAssignmentResponseBodyTask() = default;
};
class CreateAccessAssignmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateAccessAssignmentResponseBodyTask> task{};

  CreateAccessAssignmentResponseBody() {}

  explicit CreateAccessAssignmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (task) {
      res["Task"] = task ? boost::any(task->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(map<string, boost::any>) == m["Task"].type()) {
        CreateAccessAssignmentResponseBodyTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Task"]));
        task = make_shared<CreateAccessAssignmentResponseBodyTask>(model1);
      }
    }
  }


  virtual ~CreateAccessAssignmentResponseBody() = default;
};
class CreateAccessAssignmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccessAssignmentResponseBody> body{};

  CreateAccessAssignmentResponse() {}

  explicit CreateAccessAssignmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccessAssignmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccessAssignmentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccessAssignmentResponse() = default;
};
class CreateAccessConfigurationRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAccessConfigurationRequestTags() {}

  explicit CreateAccessConfigurationRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAccessConfigurationRequestTags() = default;
};
class CreateAccessConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationName{};
  shared_ptr<string> description{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> relayState{};
  shared_ptr<long> sessionDuration{};
  shared_ptr<vector<CreateAccessConfigurationRequestTags>> tags{};

  CreateAccessConfigurationRequest() {}

  explicit CreateAccessConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationName) {
      res["AccessConfigurationName"] = boost::any(*accessConfigurationName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (relayState) {
      res["RelayState"] = boost::any(*relayState);
    }
    if (sessionDuration) {
      res["SessionDuration"] = boost::any(*sessionDuration);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationName") != m.end() && !m["AccessConfigurationName"].empty()) {
      accessConfigurationName = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("RelayState") != m.end() && !m["RelayState"].empty()) {
      relayState = make_shared<string>(boost::any_cast<string>(m["RelayState"]));
    }
    if (m.find("SessionDuration") != m.end() && !m["SessionDuration"].empty()) {
      sessionDuration = make_shared<long>(boost::any_cast<long>(m["SessionDuration"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateAccessConfigurationRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAccessConfigurationRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateAccessConfigurationRequestTags>>(expect1);
      }
    }
  }


  virtual ~CreateAccessConfigurationRequest() = default;
};
class CreateAccessConfigurationResponseBodyAccessConfigurationTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAccessConfigurationResponseBodyAccessConfigurationTags() {}

  explicit CreateAccessConfigurationResponseBodyAccessConfigurationTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAccessConfigurationResponseBodyAccessConfigurationTags() = default;
};
class CreateAccessConfigurationResponseBodyAccessConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> accessConfigurationName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> relayState{};
  shared_ptr<long> sessionDuration{};
  shared_ptr<vector<string>> statusNotifications{};
  shared_ptr<vector<CreateAccessConfigurationResponseBodyAccessConfigurationTags>> tags{};
  shared_ptr<string> updateTime{};

  CreateAccessConfigurationResponseBodyAccessConfiguration() {}

  explicit CreateAccessConfigurationResponseBodyAccessConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (accessConfigurationName) {
      res["AccessConfigurationName"] = boost::any(*accessConfigurationName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (relayState) {
      res["RelayState"] = boost::any(*relayState);
    }
    if (sessionDuration) {
      res["SessionDuration"] = boost::any(*sessionDuration);
    }
    if (statusNotifications) {
      res["StatusNotifications"] = boost::any(*statusNotifications);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("AccessConfigurationName") != m.end() && !m["AccessConfigurationName"].empty()) {
      accessConfigurationName = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RelayState") != m.end() && !m["RelayState"].empty()) {
      relayState = make_shared<string>(boost::any_cast<string>(m["RelayState"]));
    }
    if (m.find("SessionDuration") != m.end() && !m["SessionDuration"].empty()) {
      sessionDuration = make_shared<long>(boost::any_cast<long>(m["SessionDuration"]));
    }
    if (m.find("StatusNotifications") != m.end() && !m["StatusNotifications"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StatusNotifications"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StatusNotifications"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusNotifications = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateAccessConfigurationResponseBodyAccessConfigurationTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAccessConfigurationResponseBodyAccessConfigurationTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateAccessConfigurationResponseBodyAccessConfigurationTags>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~CreateAccessConfigurationResponseBodyAccessConfiguration() = default;
};
class CreateAccessConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateAccessConfigurationResponseBodyAccessConfiguration> accessConfiguration{};
  shared_ptr<string> requestId{};

  CreateAccessConfigurationResponseBody() {}

  explicit CreateAccessConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfiguration) {
      res["AccessConfiguration"] = accessConfiguration ? boost::any(accessConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfiguration") != m.end() && !m["AccessConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessConfiguration"].type()) {
        CreateAccessConfigurationResponseBodyAccessConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessConfiguration"]));
        accessConfiguration = make_shared<CreateAccessConfigurationResponseBodyAccessConfiguration>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAccessConfigurationResponseBody() = default;
};
class CreateAccessConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccessConfigurationResponseBody> body{};

  CreateAccessConfigurationResponse() {}

  explicit CreateAccessConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccessConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccessConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccessConfigurationResponse() = default;
};
class CreateDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryName{};

  CreateDirectoryRequest() {}

  explicit CreateDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryName) {
      res["DirectoryName"] = boost::any(*directoryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryName") != m.end() && !m["DirectoryName"].empty()) {
      directoryName = make_shared<string>(boost::any_cast<string>(m["DirectoryName"]));
    }
  }


  virtual ~CreateDirectoryRequest() = default;
};
class CreateDirectoryResponseBodyDirectory : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> directoryName{};
  shared_ptr<string> region{};
  shared_ptr<string> updateTime{};

  CreateDirectoryResponseBodyDirectory() {}

  explicit CreateDirectoryResponseBodyDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (directoryName) {
      res["DirectoryName"] = boost::any(*directoryName);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DirectoryName") != m.end() && !m["DirectoryName"].empty()) {
      directoryName = make_shared<string>(boost::any_cast<string>(m["DirectoryName"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~CreateDirectoryResponseBodyDirectory() = default;
};
class CreateDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateDirectoryResponseBodyDirectory> directory{};
  shared_ptr<string> requestId{};

  CreateDirectoryResponseBody() {}

  explicit CreateDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directory) {
      res["Directory"] = directory ? boost::any(directory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Directory"].type()) {
        CreateDirectoryResponseBodyDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Directory"]));
        directory = make_shared<CreateDirectoryResponseBodyDirectory>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDirectoryResponseBody() = default;
};
class CreateDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDirectoryResponseBody> body{};

  CreateDirectoryResponse() {}

  explicit CreateDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDirectoryResponse() = default;
};
class CreateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> groupName{};

  CreateGroupRequest() {}

  explicit CreateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~CreateGroupRequest() = default;
};
class CreateGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> provisionType{};
  shared_ptr<string> updateTime{};

  CreateGroupResponseBodyGroup() {}

  explicit CreateGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
class CreateSCIMServerCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  CreateSCIMServerCredentialRequest() {}

  explicit CreateSCIMServerCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~CreateSCIMServerCredentialRequest() = default;
};
class CreateSCIMServerCredentialResponseBodySCIMServerCredential : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> credentialId{};
  shared_ptr<string> credentialSecret{};
  shared_ptr<string> credentialType{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> status{};

  CreateSCIMServerCredentialResponseBodySCIMServerCredential() {}

  explicit CreateSCIMServerCredentialResponseBodySCIMServerCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (credentialId) {
      res["CredentialId"] = boost::any(*credentialId);
    }
    if (credentialSecret) {
      res["CredentialSecret"] = boost::any(*credentialSecret);
    }
    if (credentialType) {
      res["CredentialType"] = boost::any(*credentialType);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CredentialId") != m.end() && !m["CredentialId"].empty()) {
      credentialId = make_shared<string>(boost::any_cast<string>(m["CredentialId"]));
    }
    if (m.find("CredentialSecret") != m.end() && !m["CredentialSecret"].empty()) {
      credentialSecret = make_shared<string>(boost::any_cast<string>(m["CredentialSecret"]));
    }
    if (m.find("CredentialType") != m.end() && !m["CredentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["CredentialType"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateSCIMServerCredentialResponseBodySCIMServerCredential() = default;
};
class CreateSCIMServerCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateSCIMServerCredentialResponseBodySCIMServerCredential> SCIMServerCredential{};

  CreateSCIMServerCredentialResponseBody() {}

  explicit CreateSCIMServerCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SCIMServerCredential) {
      res["SCIMServerCredential"] = SCIMServerCredential ? boost::any(SCIMServerCredential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SCIMServerCredential") != m.end() && !m["SCIMServerCredential"].empty()) {
      if (typeid(map<string, boost::any>) == m["SCIMServerCredential"].type()) {
        CreateSCIMServerCredentialResponseBodySCIMServerCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SCIMServerCredential"]));
        SCIMServerCredential = make_shared<CreateSCIMServerCredentialResponseBodySCIMServerCredential>(model1);
      }
    }
  }


  virtual ~CreateSCIMServerCredentialResponseBody() = default;
};
class CreateSCIMServerCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSCIMServerCredentialResponseBody> body{};

  CreateSCIMServerCredentialResponse() {}

  explicit CreateSCIMServerCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSCIMServerCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSCIMServerCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSCIMServerCredentialResponse() = default;
};
class CreateUserRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateUserRequestTags() {}

  explicit CreateUserRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateUserRequestTags() = default;
};
class CreateUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};
  shared_ptr<string> status{};
  shared_ptr<vector<CreateUserRequestTags>> tags{};
  shared_ptr<string> userName{};

  CreateUserRequest() {}

  explicit CreateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (firstName) {
      res["FirstName"] = boost::any(*firstName);
    }
    if (lastName) {
      res["LastName"] = boost::any(*lastName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("FirstName") != m.end() && !m["FirstName"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["FirstName"]));
    }
    if (m.find("LastName") != m.end() && !m["LastName"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["LastName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateUserRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateUserRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateUserRequestTags>>(expect1);
      }
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateUserRequest() = default;
};
class CreateUserResponseBodyUserTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateUserResponseBodyUserTags() {}

  explicit CreateUserResponseBodyUserTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateUserResponseBodyUserTags() = default;
};
class CreateUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};
  shared_ptr<string> provisionType{};
  shared_ptr<string> status{};
  shared_ptr<vector<CreateUserResponseBodyUserTags>> tags{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  CreateUserResponseBodyUser() {}

  explicit CreateUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (firstName) {
      res["FirstName"] = boost::any(*firstName);
    }
    if (lastName) {
      res["LastName"] = boost::any(*lastName);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("FirstName") != m.end() && !m["FirstName"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["FirstName"]));
    }
    if (m.find("LastName") != m.end() && !m["LastName"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["LastName"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateUserResponseBodyUserTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateUserResponseBodyUserTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateUserResponseBodyUserTags>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
class CreateUserProvisioningRequest : public Darabonba::Model {
public:
  shared_ptr<string> deletionStrategy{};
  shared_ptr<string> description{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> duplicationStrategy{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalType{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  CreateUserProvisioningRequest() {}

  explicit CreateUserProvisioningRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletionStrategy) {
      res["DeletionStrategy"] = boost::any(*deletionStrategy);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (duplicationStrategy) {
      res["DuplicationStrategy"] = boost::any(*duplicationStrategy);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletionStrategy") != m.end() && !m["DeletionStrategy"].empty()) {
      deletionStrategy = make_shared<string>(boost::any_cast<string>(m["DeletionStrategy"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DuplicationStrategy") != m.end() && !m["DuplicationStrategy"].empty()) {
      duplicationStrategy = make_shared<string>(boost::any_cast<string>(m["DuplicationStrategy"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~CreateUserProvisioningRequest() = default;
};
class CreateUserProvisioningResponseBodyUserProvisioning : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> deletionStrategy{};
  shared_ptr<string> description{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> duplicationStrategy{};
  shared_ptr<string> ownerPk{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> status{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetType{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userProvisioningId{};

  CreateUserProvisioningResponseBodyUserProvisioning() {}

  explicit CreateUserProvisioningResponseBodyUserProvisioning(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletionStrategy) {
      res["DeletionStrategy"] = boost::any(*deletionStrategy);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (duplicationStrategy) {
      res["DuplicationStrategy"] = boost::any(*duplicationStrategy);
    }
    if (ownerPk) {
      res["OwnerPk"] = boost::any(*ownerPk);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userProvisioningId) {
      res["UserProvisioningId"] = boost::any(*userProvisioningId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletionStrategy") != m.end() && !m["DeletionStrategy"].empty()) {
      deletionStrategy = make_shared<string>(boost::any_cast<string>(m["DeletionStrategy"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DuplicationStrategy") != m.end() && !m["DuplicationStrategy"].empty()) {
      duplicationStrategy = make_shared<string>(boost::any_cast<string>(m["DuplicationStrategy"]));
    }
    if (m.find("OwnerPk") != m.end() && !m["OwnerPk"].empty()) {
      ownerPk = make_shared<string>(boost::any_cast<string>(m["OwnerPk"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserProvisioningId") != m.end() && !m["UserProvisioningId"].empty()) {
      userProvisioningId = make_shared<string>(boost::any_cast<string>(m["UserProvisioningId"]));
    }
  }


  virtual ~CreateUserProvisioningResponseBodyUserProvisioning() = default;
};
class CreateUserProvisioningResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateUserProvisioningResponseBodyUserProvisioning> userProvisioning{};

  CreateUserProvisioningResponseBody() {}

  explicit CreateUserProvisioningResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userProvisioning) {
      res["UserProvisioning"] = userProvisioning ? boost::any(userProvisioning->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserProvisioning") != m.end() && !m["UserProvisioning"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserProvisioning"].type()) {
        CreateUserProvisioningResponseBodyUserProvisioning model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserProvisioning"]));
        userProvisioning = make_shared<CreateUserProvisioningResponseBodyUserProvisioning>(model1);
      }
    }
  }


  virtual ~CreateUserProvisioningResponseBody() = default;
};
class CreateUserProvisioningResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserProvisioningResponseBody> body{};

  CreateUserProvisioningResponse() {}

  explicit CreateUserProvisioningResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserProvisioningResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserProvisioningResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserProvisioningResponse() = default;
};
class DeleteAccessAssignmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> deprovisionStrategy{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalType{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  DeleteAccessAssignmentRequest() {}

  explicit DeleteAccessAssignmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (deprovisionStrategy) {
      res["DeprovisionStrategy"] = boost::any(*deprovisionStrategy);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DeprovisionStrategy") != m.end() && !m["DeprovisionStrategy"].empty()) {
      deprovisionStrategy = make_shared<string>(boost::any_cast<string>(m["DeprovisionStrategy"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~DeleteAccessAssignmentRequest() = default;
};
class DeleteAccessAssignmentResponseBodyTask : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> accessConfigurationName{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> status{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetPathName{};
  shared_ptr<string> targetType{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  DeleteAccessAssignmentResponseBodyTask() {}

  explicit DeleteAccessAssignmentResponseBodyTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (accessConfigurationName) {
      res["AccessConfigurationName"] = boost::any(*accessConfigurationName);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetPathName) {
      res["TargetPathName"] = boost::any(*targetPathName);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("AccessConfigurationName") != m.end() && !m["AccessConfigurationName"].empty()) {
      accessConfigurationName = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationName"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetPathName") != m.end() && !m["TargetPathName"].empty()) {
      targetPathName = make_shared<string>(boost::any_cast<string>(m["TargetPathName"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DeleteAccessAssignmentResponseBodyTask() = default;
};
class DeleteAccessAssignmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DeleteAccessAssignmentResponseBodyTask> task{};

  DeleteAccessAssignmentResponseBody() {}

  explicit DeleteAccessAssignmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (task) {
      res["Task"] = task ? boost::any(task->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(map<string, boost::any>) == m["Task"].type()) {
        DeleteAccessAssignmentResponseBodyTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Task"]));
        task = make_shared<DeleteAccessAssignmentResponseBodyTask>(model1);
      }
    }
  }


  virtual ~DeleteAccessAssignmentResponseBody() = default;
};
class DeleteAccessAssignmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccessAssignmentResponseBody> body{};

  DeleteAccessAssignmentResponse() {}

  explicit DeleteAccessAssignmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccessAssignmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccessAssignmentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccessAssignmentResponse() = default;
};
class DeleteAccessConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> directoryId{};
  shared_ptr<bool> forceRemovePermissionPolicies{};

  DeleteAccessConfigurationRequest() {}

  explicit DeleteAccessConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (forceRemovePermissionPolicies) {
      res["ForceRemovePermissionPolicies"] = boost::any(*forceRemovePermissionPolicies);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("ForceRemovePermissionPolicies") != m.end() && !m["ForceRemovePermissionPolicies"].empty()) {
      forceRemovePermissionPolicies = make_shared<bool>(boost::any_cast<bool>(m["ForceRemovePermissionPolicies"]));
    }
  }


  virtual ~DeleteAccessConfigurationRequest() = default;
};
class DeleteAccessConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccessConfigurationResponseBody() {}

  explicit DeleteAccessConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAccessConfigurationResponseBody() = default;
};
class DeleteAccessConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAccessConfigurationResponseBody> body{};

  DeleteAccessConfigurationResponse() {}

  explicit DeleteAccessConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccessConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccessConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccessConfigurationResponse() = default;
};
class DeleteDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  DeleteDirectoryRequest() {}

  explicit DeleteDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~DeleteDirectoryRequest() = default;
};
class DeleteDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDirectoryResponseBody() {}

  explicit DeleteDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDirectoryResponseBody() = default;
};
class DeleteDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDirectoryResponseBody> body{};

  DeleteDirectoryResponse() {}

  explicit DeleteDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDirectoryResponse() = default;
};
class DeleteGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> groupId{};

  DeleteGroupRequest() {}

  explicit DeleteGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
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
class DeleteMFADeviceForUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> MFADeviceId{};
  shared_ptr<string> userId{};

  DeleteMFADeviceForUserRequest() {}

  explicit DeleteMFADeviceForUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (MFADeviceId) {
      res["MFADeviceId"] = boost::any(*MFADeviceId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("MFADeviceId") != m.end() && !m["MFADeviceId"].empty()) {
      MFADeviceId = make_shared<string>(boost::any_cast<string>(m["MFADeviceId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteMFADeviceForUserRequest() = default;
};
class DeleteMFADeviceForUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMFADeviceForUserResponseBody() {}

  explicit DeleteMFADeviceForUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteMFADeviceForUserResponseBody() = default;
};
class DeleteMFADeviceForUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMFADeviceForUserResponseBody> body{};

  DeleteMFADeviceForUserResponse() {}

  explicit DeleteMFADeviceForUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMFADeviceForUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMFADeviceForUserResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMFADeviceForUserResponse() = default;
};
class DeleteSCIMServerCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialId{};
  shared_ptr<string> directoryId{};

  DeleteSCIMServerCredentialRequest() {}

  explicit DeleteSCIMServerCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialId) {
      res["CredentialId"] = boost::any(*credentialId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialId") != m.end() && !m["CredentialId"].empty()) {
      credentialId = make_shared<string>(boost::any_cast<string>(m["CredentialId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~DeleteSCIMServerCredentialRequest() = default;
};
class DeleteSCIMServerCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSCIMServerCredentialResponseBody() {}

  explicit DeleteSCIMServerCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSCIMServerCredentialResponseBody() = default;
};
class DeleteSCIMServerCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSCIMServerCredentialResponseBody> body{};

  DeleteSCIMServerCredentialResponse() {}

  explicit DeleteSCIMServerCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSCIMServerCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSCIMServerCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSCIMServerCredentialResponse() = default;
};
class DeleteUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> userId{};

  DeleteUserRequest() {}

  explicit DeleteUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
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
class DeleteUserProvisioningRequest : public Darabonba::Model {
public:
  shared_ptr<string> deletionStrategy{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> userProvisioningId{};

  DeleteUserProvisioningRequest() {}

  explicit DeleteUserProvisioningRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletionStrategy) {
      res["DeletionStrategy"] = boost::any(*deletionStrategy);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (userProvisioningId) {
      res["UserProvisioningId"] = boost::any(*userProvisioningId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletionStrategy") != m.end() && !m["DeletionStrategy"].empty()) {
      deletionStrategy = make_shared<string>(boost::any_cast<string>(m["DeletionStrategy"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("UserProvisioningId") != m.end() && !m["UserProvisioningId"].empty()) {
      userProvisioningId = make_shared<string>(boost::any_cast<string>(m["UserProvisioningId"]));
    }
  }


  virtual ~DeleteUserProvisioningRequest() = default;
};
class DeleteUserProvisioningResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserProvisioningResponseBody() {}

  explicit DeleteUserProvisioningResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserProvisioningResponseBody() = default;
};
class DeleteUserProvisioningResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserProvisioningResponseBody> body{};

  DeleteUserProvisioningResponse() {}

  explicit DeleteUserProvisioningResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserProvisioningResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserProvisioningResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserProvisioningResponse() = default;
};
class DeleteUserProvisioningEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> eventId{};
  shared_ptr<string> userProvisioningId{};

  DeleteUserProvisioningEventRequest() {}

  explicit DeleteUserProvisioningEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (userProvisioningId) {
      res["UserProvisioningId"] = boost::any(*userProvisioningId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("UserProvisioningId") != m.end() && !m["UserProvisioningId"].empty()) {
      userProvisioningId = make_shared<string>(boost::any_cast<string>(m["UserProvisioningId"]));
    }
  }


  virtual ~DeleteUserProvisioningEventRequest() = default;
};
class DeleteUserProvisioningEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserProvisioningEventResponseBody() {}

  explicit DeleteUserProvisioningEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserProvisioningEventResponseBody() = default;
};
class DeleteUserProvisioningEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserProvisioningEventResponseBody> body{};

  DeleteUserProvisioningEventResponse() {}

  explicit DeleteUserProvisioningEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserProvisioningEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserProvisioningEventResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserProvisioningEventResponse() = default;
};
class DeprovisionAccessConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  DeprovisionAccessConfigurationRequest() {}

  explicit DeprovisionAccessConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~DeprovisionAccessConfigurationRequest() = default;
};
class DeprovisionAccessConfigurationResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> accessConfigurationName{};
  shared_ptr<string> status{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetPathName{};
  shared_ptr<string> targetType{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  DeprovisionAccessConfigurationResponseBodyTasks() {}

  explicit DeprovisionAccessConfigurationResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (accessConfigurationName) {
      res["AccessConfigurationName"] = boost::any(*accessConfigurationName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetPathName) {
      res["TargetPathName"] = boost::any(*targetPathName);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("AccessConfigurationName") != m.end() && !m["AccessConfigurationName"].empty()) {
      accessConfigurationName = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetPathName") != m.end() && !m["TargetPathName"].empty()) {
      targetPathName = make_shared<string>(boost::any_cast<string>(m["TargetPathName"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DeprovisionAccessConfigurationResponseBodyTasks() = default;
};
class DeprovisionAccessConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DeprovisionAccessConfigurationResponseBodyTasks>> tasks{};

  DeprovisionAccessConfigurationResponseBody() {}

  explicit DeprovisionAccessConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<DeprovisionAccessConfigurationResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeprovisionAccessConfigurationResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<DeprovisionAccessConfigurationResponseBodyTasks>>(expect1);
      }
    }
  }


  virtual ~DeprovisionAccessConfigurationResponseBody() = default;
};
class DeprovisionAccessConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeprovisionAccessConfigurationResponseBody> body{};

  DeprovisionAccessConfigurationResponse() {}

  explicit DeprovisionAccessConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeprovisionAccessConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeprovisionAccessConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~DeprovisionAccessConfigurationResponse() = default;
};
class DisableDelegateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  DisableDelegateAccountRequest() {}

  explicit DisableDelegateAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~DisableDelegateAccountRequest() = default;
};
class DisableDelegateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableDelegateAccountResponseBody() {}

  explicit DisableDelegateAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableDelegateAccountResponseBody() = default;
};
class DisableDelegateAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableDelegateAccountResponseBody> body{};

  DisableDelegateAccountResponse() {}

  explicit DisableDelegateAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableDelegateAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableDelegateAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DisableDelegateAccountResponse() = default;
};
class DisableServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableServiceResponseBody() {}

  explicit DisableServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableServiceResponseBody() = default;
};
class DisableServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableServiceResponseBody> body{};

  DisableServiceResponse() {}

  explicit DisableServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DisableServiceResponse() = default;
};
class EnableDelegateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};

  EnableDelegateAccountRequest() {}

  explicit EnableDelegateAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
  }


  virtual ~EnableDelegateAccountRequest() = default;
};
class EnableDelegateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableDelegateAccountResponseBody() {}

  explicit EnableDelegateAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableDelegateAccountResponseBody() = default;
};
class EnableDelegateAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableDelegateAccountResponseBody> body{};

  EnableDelegateAccountResponse() {}

  explicit EnableDelegateAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableDelegateAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableDelegateAccountResponseBody>(model1);
      }
    }
  }


  virtual ~EnableDelegateAccountResponse() = default;
};
class EnableServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableServiceResponseBody() {}

  explicit EnableServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableServiceResponseBody() = default;
};
class EnableServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableServiceResponseBody> body{};

  EnableServiceResponse() {}

  explicit EnableServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableServiceResponseBody>(model1);
      }
    }
  }


  virtual ~EnableServiceResponse() = default;
};
class GetAccessConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> directoryId{};

  GetAccessConfigurationRequest() {}

  explicit GetAccessConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~GetAccessConfigurationRequest() = default;
};
class GetAccessConfigurationResponseBodyAccessConfigurationTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetAccessConfigurationResponseBodyAccessConfigurationTags() {}

  explicit GetAccessConfigurationResponseBodyAccessConfigurationTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetAccessConfigurationResponseBodyAccessConfigurationTags() = default;
};
class GetAccessConfigurationResponseBodyAccessConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> accessConfigurationName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> relayState{};
  shared_ptr<long> sessionDuration{};
  shared_ptr<vector<string>> statusNotifications{};
  shared_ptr<vector<GetAccessConfigurationResponseBodyAccessConfigurationTags>> tags{};
  shared_ptr<string> updateTime{};

  GetAccessConfigurationResponseBodyAccessConfiguration() {}

  explicit GetAccessConfigurationResponseBodyAccessConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (accessConfigurationName) {
      res["AccessConfigurationName"] = boost::any(*accessConfigurationName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (relayState) {
      res["RelayState"] = boost::any(*relayState);
    }
    if (sessionDuration) {
      res["SessionDuration"] = boost::any(*sessionDuration);
    }
    if (statusNotifications) {
      res["StatusNotifications"] = boost::any(*statusNotifications);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("AccessConfigurationName") != m.end() && !m["AccessConfigurationName"].empty()) {
      accessConfigurationName = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RelayState") != m.end() && !m["RelayState"].empty()) {
      relayState = make_shared<string>(boost::any_cast<string>(m["RelayState"]));
    }
    if (m.find("SessionDuration") != m.end() && !m["SessionDuration"].empty()) {
      sessionDuration = make_shared<long>(boost::any_cast<long>(m["SessionDuration"]));
    }
    if (m.find("StatusNotifications") != m.end() && !m["StatusNotifications"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StatusNotifications"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StatusNotifications"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusNotifications = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetAccessConfigurationResponseBodyAccessConfigurationTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAccessConfigurationResponseBodyAccessConfigurationTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetAccessConfigurationResponseBodyAccessConfigurationTags>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetAccessConfigurationResponseBodyAccessConfiguration() = default;
};
class GetAccessConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAccessConfigurationResponseBodyAccessConfiguration> accessConfiguration{};
  shared_ptr<string> requestId{};

  GetAccessConfigurationResponseBody() {}

  explicit GetAccessConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfiguration) {
      res["AccessConfiguration"] = accessConfiguration ? boost::any(accessConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfiguration") != m.end() && !m["AccessConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessConfiguration"].type()) {
        GetAccessConfigurationResponseBodyAccessConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessConfiguration"]));
        accessConfiguration = make_shared<GetAccessConfigurationResponseBodyAccessConfiguration>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAccessConfigurationResponseBody() = default;
};
class GetAccessConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAccessConfigurationResponseBody> body{};

  GetAccessConfigurationResponse() {}

  explicit GetAccessConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAccessConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccessConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccessConfigurationResponse() = default;
};
class GetDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  GetDirectoryRequest() {}

  explicit GetDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~GetDirectoryRequest() = default;
};
class GetDirectoryResponseBodyDirectory : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> directoryName{};
  shared_ptr<string> region{};
  shared_ptr<string> updateTime{};

  GetDirectoryResponseBodyDirectory() {}

  explicit GetDirectoryResponseBodyDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (directoryName) {
      res["DirectoryName"] = boost::any(*directoryName);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DirectoryName") != m.end() && !m["DirectoryName"].empty()) {
      directoryName = make_shared<string>(boost::any_cast<string>(m["DirectoryName"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetDirectoryResponseBodyDirectory() = default;
};
class GetDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDirectoryResponseBodyDirectory> directory{};
  shared_ptr<string> requestId{};

  GetDirectoryResponseBody() {}

  explicit GetDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directory) {
      res["Directory"] = directory ? boost::any(directory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Directory"].type()) {
        GetDirectoryResponseBodyDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Directory"]));
        directory = make_shared<GetDirectoryResponseBodyDirectory>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDirectoryResponseBody() = default;
};
class GetDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDirectoryResponseBody> body{};

  GetDirectoryResponse() {}

  explicit GetDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetDirectoryResponse() = default;
};
class GetDirectorySAMLServiceProviderInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  GetDirectorySAMLServiceProviderInfoRequest() {}

  explicit GetDirectorySAMLServiceProviderInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~GetDirectorySAMLServiceProviderInfoRequest() = default;
};
class GetDirectorySAMLServiceProviderInfoResponseBodySAMLServiceProvider : public Darabonba::Model {
public:
  shared_ptr<string> acsUrl{};
  shared_ptr<string> authnSignAlgo{};
  shared_ptr<string> certificateType{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> encodedMetadataDocument{};
  shared_ptr<string> entityId{};
  shared_ptr<bool> supportEncryptedAssertion{};

  GetDirectorySAMLServiceProviderInfoResponseBodySAMLServiceProvider() {}

  explicit GetDirectorySAMLServiceProviderInfoResponseBodySAMLServiceProvider(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acsUrl) {
      res["AcsUrl"] = boost::any(*acsUrl);
    }
    if (authnSignAlgo) {
      res["AuthnSignAlgo"] = boost::any(*authnSignAlgo);
    }
    if (certificateType) {
      res["CertificateType"] = boost::any(*certificateType);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (encodedMetadataDocument) {
      res["EncodedMetadataDocument"] = boost::any(*encodedMetadataDocument);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (supportEncryptedAssertion) {
      res["SupportEncryptedAssertion"] = boost::any(*supportEncryptedAssertion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcsUrl") != m.end() && !m["AcsUrl"].empty()) {
      acsUrl = make_shared<string>(boost::any_cast<string>(m["AcsUrl"]));
    }
    if (m.find("AuthnSignAlgo") != m.end() && !m["AuthnSignAlgo"].empty()) {
      authnSignAlgo = make_shared<string>(boost::any_cast<string>(m["AuthnSignAlgo"]));
    }
    if (m.find("CertificateType") != m.end() && !m["CertificateType"].empty()) {
      certificateType = make_shared<string>(boost::any_cast<string>(m["CertificateType"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EncodedMetadataDocument") != m.end() && !m["EncodedMetadataDocument"].empty()) {
      encodedMetadataDocument = make_shared<string>(boost::any_cast<string>(m["EncodedMetadataDocument"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("SupportEncryptedAssertion") != m.end() && !m["SupportEncryptedAssertion"].empty()) {
      supportEncryptedAssertion = make_shared<bool>(boost::any_cast<bool>(m["SupportEncryptedAssertion"]));
    }
  }


  virtual ~GetDirectorySAMLServiceProviderInfoResponseBodySAMLServiceProvider() = default;
};
class GetDirectorySAMLServiceProviderInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetDirectorySAMLServiceProviderInfoResponseBodySAMLServiceProvider> SAMLServiceProvider{};

  GetDirectorySAMLServiceProviderInfoResponseBody() {}

  explicit GetDirectorySAMLServiceProviderInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SAMLServiceProvider) {
      res["SAMLServiceProvider"] = SAMLServiceProvider ? boost::any(SAMLServiceProvider->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SAMLServiceProvider") != m.end() && !m["SAMLServiceProvider"].empty()) {
      if (typeid(map<string, boost::any>) == m["SAMLServiceProvider"].type()) {
        GetDirectorySAMLServiceProviderInfoResponseBodySAMLServiceProvider model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SAMLServiceProvider"]));
        SAMLServiceProvider = make_shared<GetDirectorySAMLServiceProviderInfoResponseBodySAMLServiceProvider>(model1);
      }
    }
  }


  virtual ~GetDirectorySAMLServiceProviderInfoResponseBody() = default;
};
class GetDirectorySAMLServiceProviderInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDirectorySAMLServiceProviderInfoResponseBody> body{};

  GetDirectorySAMLServiceProviderInfoResponse() {}

  explicit GetDirectorySAMLServiceProviderInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDirectorySAMLServiceProviderInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDirectorySAMLServiceProviderInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetDirectorySAMLServiceProviderInfoResponse() = default;
};
class GetDirectoryStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  GetDirectoryStatisticsRequest() {}

  explicit GetDirectoryStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~GetDirectoryStatisticsRequest() = default;
};
class GetDirectoryStatisticsResponseBodyDirectoryStatistics : public Darabonba::Model {
public:
  shared_ptr<long> accessAssignmentCount{};
  shared_ptr<long> accessConfigurationCount{};
  shared_ptr<long> accessConfigurationQuota{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> directoryName{};
  shared_ptr<long> groupCount{};
  shared_ptr<long> groupQuota{};
  shared_ptr<long> inProgressTaskCount{};
  shared_ptr<long> inlinePolicyPerAccessConfigurationQuota{};
  shared_ptr<string> region{};
  shared_ptr<long> SCIMServerCredentialCount{};
  shared_ptr<bool> SCIMSyncEnabled{};
  shared_ptr<bool> SSOEnabled{};
  shared_ptr<long> systemPolicyPerAccessConfigurationQuota{};
  shared_ptr<long> userCount{};
  shared_ptr<long> userQuota{};

  GetDirectoryStatisticsResponseBodyDirectoryStatistics() {}

  explicit GetDirectoryStatisticsResponseBodyDirectoryStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessAssignmentCount) {
      res["AccessAssignmentCount"] = boost::any(*accessAssignmentCount);
    }
    if (accessConfigurationCount) {
      res["AccessConfigurationCount"] = boost::any(*accessConfigurationCount);
    }
    if (accessConfigurationQuota) {
      res["AccessConfigurationQuota"] = boost::any(*accessConfigurationQuota);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (directoryName) {
      res["DirectoryName"] = boost::any(*directoryName);
    }
    if (groupCount) {
      res["GroupCount"] = boost::any(*groupCount);
    }
    if (groupQuota) {
      res["GroupQuota"] = boost::any(*groupQuota);
    }
    if (inProgressTaskCount) {
      res["InProgressTaskCount"] = boost::any(*inProgressTaskCount);
    }
    if (inlinePolicyPerAccessConfigurationQuota) {
      res["InlinePolicyPerAccessConfigurationQuota"] = boost::any(*inlinePolicyPerAccessConfigurationQuota);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (SCIMServerCredentialCount) {
      res["SCIMServerCredentialCount"] = boost::any(*SCIMServerCredentialCount);
    }
    if (SCIMSyncEnabled) {
      res["SCIMSyncEnabled"] = boost::any(*SCIMSyncEnabled);
    }
    if (SSOEnabled) {
      res["SSOEnabled"] = boost::any(*SSOEnabled);
    }
    if (systemPolicyPerAccessConfigurationQuota) {
      res["SystemPolicyPerAccessConfigurationQuota"] = boost::any(*systemPolicyPerAccessConfigurationQuota);
    }
    if (userCount) {
      res["UserCount"] = boost::any(*userCount);
    }
    if (userQuota) {
      res["UserQuota"] = boost::any(*userQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessAssignmentCount") != m.end() && !m["AccessAssignmentCount"].empty()) {
      accessAssignmentCount = make_shared<long>(boost::any_cast<long>(m["AccessAssignmentCount"]));
    }
    if (m.find("AccessConfigurationCount") != m.end() && !m["AccessConfigurationCount"].empty()) {
      accessConfigurationCount = make_shared<long>(boost::any_cast<long>(m["AccessConfigurationCount"]));
    }
    if (m.find("AccessConfigurationQuota") != m.end() && !m["AccessConfigurationQuota"].empty()) {
      accessConfigurationQuota = make_shared<long>(boost::any_cast<long>(m["AccessConfigurationQuota"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DirectoryName") != m.end() && !m["DirectoryName"].empty()) {
      directoryName = make_shared<string>(boost::any_cast<string>(m["DirectoryName"]));
    }
    if (m.find("GroupCount") != m.end() && !m["GroupCount"].empty()) {
      groupCount = make_shared<long>(boost::any_cast<long>(m["GroupCount"]));
    }
    if (m.find("GroupQuota") != m.end() && !m["GroupQuota"].empty()) {
      groupQuota = make_shared<long>(boost::any_cast<long>(m["GroupQuota"]));
    }
    if (m.find("InProgressTaskCount") != m.end() && !m["InProgressTaskCount"].empty()) {
      inProgressTaskCount = make_shared<long>(boost::any_cast<long>(m["InProgressTaskCount"]));
    }
    if (m.find("InlinePolicyPerAccessConfigurationQuota") != m.end() && !m["InlinePolicyPerAccessConfigurationQuota"].empty()) {
      inlinePolicyPerAccessConfigurationQuota = make_shared<long>(boost::any_cast<long>(m["InlinePolicyPerAccessConfigurationQuota"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SCIMServerCredentialCount") != m.end() && !m["SCIMServerCredentialCount"].empty()) {
      SCIMServerCredentialCount = make_shared<long>(boost::any_cast<long>(m["SCIMServerCredentialCount"]));
    }
    if (m.find("SCIMSyncEnabled") != m.end() && !m["SCIMSyncEnabled"].empty()) {
      SCIMSyncEnabled = make_shared<bool>(boost::any_cast<bool>(m["SCIMSyncEnabled"]));
    }
    if (m.find("SSOEnabled") != m.end() && !m["SSOEnabled"].empty()) {
      SSOEnabled = make_shared<bool>(boost::any_cast<bool>(m["SSOEnabled"]));
    }
    if (m.find("SystemPolicyPerAccessConfigurationQuota") != m.end() && !m["SystemPolicyPerAccessConfigurationQuota"].empty()) {
      systemPolicyPerAccessConfigurationQuota = make_shared<long>(boost::any_cast<long>(m["SystemPolicyPerAccessConfigurationQuota"]));
    }
    if (m.find("UserCount") != m.end() && !m["UserCount"].empty()) {
      userCount = make_shared<long>(boost::any_cast<long>(m["UserCount"]));
    }
    if (m.find("UserQuota") != m.end() && !m["UserQuota"].empty()) {
      userQuota = make_shared<long>(boost::any_cast<long>(m["UserQuota"]));
    }
  }


  virtual ~GetDirectoryStatisticsResponseBodyDirectoryStatistics() = default;
};
class GetDirectoryStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDirectoryStatisticsResponseBodyDirectoryStatistics> directoryStatistics{};
  shared_ptr<string> requestId{};

  GetDirectoryStatisticsResponseBody() {}

  explicit GetDirectoryStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryStatistics) {
      res["DirectoryStatistics"] = directoryStatistics ? boost::any(directoryStatistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryStatistics") != m.end() && !m["DirectoryStatistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["DirectoryStatistics"].type()) {
        GetDirectoryStatisticsResponseBodyDirectoryStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DirectoryStatistics"]));
        directoryStatistics = make_shared<GetDirectoryStatisticsResponseBodyDirectoryStatistics>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDirectoryStatisticsResponseBody() = default;
};
class GetDirectoryStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDirectoryStatisticsResponseBody> body{};

  GetDirectoryStatisticsResponse() {}

  explicit GetDirectoryStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDirectoryStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDirectoryStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetDirectoryStatisticsResponse() = default;
};
class GetExternalSAMLIdentityProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  GetExternalSAMLIdentityProviderRequest() {}

  explicit GetExternalSAMLIdentityProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~GetExternalSAMLIdentityProviderRequest() = default;
};
class GetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> bindingType{};
  shared_ptr<vector<string>> certificateIds{};
  shared_ptr<string> createTime{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> encodedMetadataDocument{};
  shared_ptr<string> entityId{};
  shared_ptr<string> loginUrl{};
  shared_ptr<string> SSOStatus{};
  shared_ptr<string> updateTime{};
  shared_ptr<bool> wantRequestSigned{};

  GetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration() {}

  explicit GetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindingType) {
      res["BindingType"] = boost::any(*bindingType);
    }
    if (certificateIds) {
      res["CertificateIds"] = boost::any(*certificateIds);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (encodedMetadataDocument) {
      res["EncodedMetadataDocument"] = boost::any(*encodedMetadataDocument);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (loginUrl) {
      res["LoginUrl"] = boost::any(*loginUrl);
    }
    if (SSOStatus) {
      res["SSOStatus"] = boost::any(*SSOStatus);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (wantRequestSigned) {
      res["WantRequestSigned"] = boost::any(*wantRequestSigned);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindingType") != m.end() && !m["BindingType"].empty()) {
      bindingType = make_shared<string>(boost::any_cast<string>(m["BindingType"]));
    }
    if (m.find("CertificateIds") != m.end() && !m["CertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      certificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EncodedMetadataDocument") != m.end() && !m["EncodedMetadataDocument"].empty()) {
      encodedMetadataDocument = make_shared<string>(boost::any_cast<string>(m["EncodedMetadataDocument"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("LoginUrl") != m.end() && !m["LoginUrl"].empty()) {
      loginUrl = make_shared<string>(boost::any_cast<string>(m["LoginUrl"]));
    }
    if (m.find("SSOStatus") != m.end() && !m["SSOStatus"].empty()) {
      SSOStatus = make_shared<string>(boost::any_cast<string>(m["SSOStatus"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("WantRequestSigned") != m.end() && !m["WantRequestSigned"].empty()) {
      wantRequestSigned = make_shared<bool>(boost::any_cast<bool>(m["WantRequestSigned"]));
    }
  }


  virtual ~GetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration() = default;
};
class GetExternalSAMLIdentityProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration> SAMLIdentityProviderConfiguration{};

  GetExternalSAMLIdentityProviderResponseBody() {}

  explicit GetExternalSAMLIdentityProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SAMLIdentityProviderConfiguration) {
      res["SAMLIdentityProviderConfiguration"] = SAMLIdentityProviderConfiguration ? boost::any(SAMLIdentityProviderConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SAMLIdentityProviderConfiguration") != m.end() && !m["SAMLIdentityProviderConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["SAMLIdentityProviderConfiguration"].type()) {
        GetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SAMLIdentityProviderConfiguration"]));
        SAMLIdentityProviderConfiguration = make_shared<GetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration>(model1);
      }
    }
  }


  virtual ~GetExternalSAMLIdentityProviderResponseBody() = default;
};
class GetExternalSAMLIdentityProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetExternalSAMLIdentityProviderResponseBody> body{};

  GetExternalSAMLIdentityProviderResponse() {}

  explicit GetExternalSAMLIdentityProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetExternalSAMLIdentityProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetExternalSAMLIdentityProviderResponseBody>(model1);
      }
    }
  }


  virtual ~GetExternalSAMLIdentityProviderResponse() = default;
};
class GetGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> groupId{};

  GetGroupRequest() {}

  explicit GetGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~GetGroupRequest() = default;
};
class GetGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> provisionType{};
  shared_ptr<string> updateTime{};

  GetGroupResponseBodyGroup() {}

  explicit GetGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
class GetLoginPreferenceRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  GetLoginPreferenceRequest() {}

  explicit GetLoginPreferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~GetLoginPreferenceRequest() = default;
};
class GetLoginPreferenceResponseBodyLoginPreference : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToGetCredentials{};
  shared_ptr<string> loginNetworkMasks{};

  GetLoginPreferenceResponseBodyLoginPreference() {}

  explicit GetLoginPreferenceResponseBodyLoginPreference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToGetCredentials) {
      res["AllowUserToGetCredentials"] = boost::any(*allowUserToGetCredentials);
    }
    if (loginNetworkMasks) {
      res["LoginNetworkMasks"] = boost::any(*loginNetworkMasks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToGetCredentials") != m.end() && !m["AllowUserToGetCredentials"].empty()) {
      allowUserToGetCredentials = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToGetCredentials"]));
    }
    if (m.find("LoginNetworkMasks") != m.end() && !m["LoginNetworkMasks"].empty()) {
      loginNetworkMasks = make_shared<string>(boost::any_cast<string>(m["LoginNetworkMasks"]));
    }
  }


  virtual ~GetLoginPreferenceResponseBodyLoginPreference() = default;
};
class GetLoginPreferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetLoginPreferenceResponseBodyLoginPreference> loginPreference{};
  shared_ptr<string> requestId{};

  GetLoginPreferenceResponseBody() {}

  explicit GetLoginPreferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginPreference) {
      res["LoginPreference"] = loginPreference ? boost::any(loginPreference->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginPreference") != m.end() && !m["LoginPreference"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoginPreference"].type()) {
        GetLoginPreferenceResponseBodyLoginPreference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoginPreference"]));
        loginPreference = make_shared<GetLoginPreferenceResponseBodyLoginPreference>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetLoginPreferenceResponseBody() = default;
};
class GetLoginPreferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLoginPreferenceResponseBody> body{};

  GetLoginPreferenceResponse() {}

  explicit GetLoginPreferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLoginPreferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLoginPreferenceResponseBody>(model1);
      }
    }
  }


  virtual ~GetLoginPreferenceResponse() = default;
};
class GetMFAAuthenticationSettingInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  GetMFAAuthenticationSettingInfoRequest() {}

  explicit GetMFAAuthenticationSettingInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~GetMFAAuthenticationSettingInfoRequest() = default;
};
class GetMFAAuthenticationSettingInfoResponseBodyMFAAuthenticationSettingInfo : public Darabonba::Model {
public:
  shared_ptr<string> mfaAuthenticationAdvanceSettings{};
  shared_ptr<string> operationForRiskLogin{};

  GetMFAAuthenticationSettingInfoResponseBodyMFAAuthenticationSettingInfo() {}

  explicit GetMFAAuthenticationSettingInfoResponseBodyMFAAuthenticationSettingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mfaAuthenticationAdvanceSettings) {
      res["MfaAuthenticationAdvanceSettings"] = boost::any(*mfaAuthenticationAdvanceSettings);
    }
    if (operationForRiskLogin) {
      res["OperationForRiskLogin"] = boost::any(*operationForRiskLogin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MfaAuthenticationAdvanceSettings") != m.end() && !m["MfaAuthenticationAdvanceSettings"].empty()) {
      mfaAuthenticationAdvanceSettings = make_shared<string>(boost::any_cast<string>(m["MfaAuthenticationAdvanceSettings"]));
    }
    if (m.find("OperationForRiskLogin") != m.end() && !m["OperationForRiskLogin"].empty()) {
      operationForRiskLogin = make_shared<string>(boost::any_cast<string>(m["OperationForRiskLogin"]));
    }
  }


  virtual ~GetMFAAuthenticationSettingInfoResponseBodyMFAAuthenticationSettingInfo() = default;
};
class GetMFAAuthenticationSettingInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMFAAuthenticationSettingInfoResponseBodyMFAAuthenticationSettingInfo> MFAAuthenticationSettingInfo{};
  shared_ptr<string> requestId{};

  GetMFAAuthenticationSettingInfoResponseBody() {}

  explicit GetMFAAuthenticationSettingInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFAAuthenticationSettingInfo) {
      res["MFAAuthenticationSettingInfo"] = MFAAuthenticationSettingInfo ? boost::any(MFAAuthenticationSettingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFAAuthenticationSettingInfo") != m.end() && !m["MFAAuthenticationSettingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["MFAAuthenticationSettingInfo"].type()) {
        GetMFAAuthenticationSettingInfoResponseBodyMFAAuthenticationSettingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MFAAuthenticationSettingInfo"]));
        MFAAuthenticationSettingInfo = make_shared<GetMFAAuthenticationSettingInfoResponseBodyMFAAuthenticationSettingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMFAAuthenticationSettingInfoResponseBody() = default;
};
class GetMFAAuthenticationSettingInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMFAAuthenticationSettingInfoResponseBody> body{};

  GetMFAAuthenticationSettingInfoResponse() {}

  explicit GetMFAAuthenticationSettingInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMFAAuthenticationSettingInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMFAAuthenticationSettingInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetMFAAuthenticationSettingInfoResponse() = default;
};
class GetMFAAuthenticationSettingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  GetMFAAuthenticationSettingsRequest() {}

  explicit GetMFAAuthenticationSettingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~GetMFAAuthenticationSettingsRequest() = default;
};
class GetMFAAuthenticationSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> MFAAuthenticationAdvanceSettings{};
  shared_ptr<string> requestId{};

  GetMFAAuthenticationSettingsResponseBody() {}

  explicit GetMFAAuthenticationSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFAAuthenticationAdvanceSettings) {
      res["MFAAuthenticationAdvanceSettings"] = boost::any(*MFAAuthenticationAdvanceSettings);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFAAuthenticationAdvanceSettings") != m.end() && !m["MFAAuthenticationAdvanceSettings"].empty()) {
      MFAAuthenticationAdvanceSettings = make_shared<string>(boost::any_cast<string>(m["MFAAuthenticationAdvanceSettings"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMFAAuthenticationSettingsResponseBody() = default;
};
class GetMFAAuthenticationSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMFAAuthenticationSettingsResponseBody> body{};

  GetMFAAuthenticationSettingsResponse() {}

  explicit GetMFAAuthenticationSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMFAAuthenticationSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMFAAuthenticationSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~GetMFAAuthenticationSettingsResponse() = default;
};
class GetMFAAuthenticationStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  GetMFAAuthenticationStatusRequest() {}

  explicit GetMFAAuthenticationStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~GetMFAAuthenticationStatusRequest() = default;
};
class GetMFAAuthenticationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> MFAAuthenticationStatus{};
  shared_ptr<string> requestId{};

  GetMFAAuthenticationStatusResponseBody() {}

  explicit GetMFAAuthenticationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFAAuthenticationStatus) {
      res["MFAAuthenticationStatus"] = boost::any(*MFAAuthenticationStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFAAuthenticationStatus") != m.end() && !m["MFAAuthenticationStatus"].empty()) {
      MFAAuthenticationStatus = make_shared<string>(boost::any_cast<string>(m["MFAAuthenticationStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMFAAuthenticationStatusResponseBody() = default;
};
class GetMFAAuthenticationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMFAAuthenticationStatusResponseBody> body{};

  GetMFAAuthenticationStatusResponse() {}

  explicit GetMFAAuthenticationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMFAAuthenticationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMFAAuthenticationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetMFAAuthenticationStatusResponse() = default;
};
class GetPasswordPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  GetPasswordPolicyRequest() {}

  explicit GetPasswordPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~GetPasswordPolicyRequest() = default;
};
class GetPasswordPolicyResponseBodyPasswordPolicy : public Darabonba::Model {
public:
  shared_ptr<bool> hardExpire{};
  shared_ptr<long> maxLoginAttempts{};
  shared_ptr<long> maxPasswordAge{};
  shared_ptr<long> maxPasswordLength{};
  shared_ptr<long> minPasswordDifferentChars{};
  shared_ptr<long> minPasswordLength{};
  shared_ptr<bool> passwordNotContainUsername{};
  shared_ptr<long> passwordReusePrevention{};
  shared_ptr<bool> requireLowerCaseChars{};
  shared_ptr<bool> requireNumbers{};
  shared_ptr<bool> requireSymbols{};
  shared_ptr<bool> requireUpperCaseChars{};

  GetPasswordPolicyResponseBodyPasswordPolicy() {}

  explicit GetPasswordPolicyResponseBodyPasswordPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hardExpire) {
      res["HardExpire"] = boost::any(*hardExpire);
    }
    if (maxLoginAttempts) {
      res["MaxLoginAttempts"] = boost::any(*maxLoginAttempts);
    }
    if (maxPasswordAge) {
      res["MaxPasswordAge"] = boost::any(*maxPasswordAge);
    }
    if (maxPasswordLength) {
      res["MaxPasswordLength"] = boost::any(*maxPasswordLength);
    }
    if (minPasswordDifferentChars) {
      res["MinPasswordDifferentChars"] = boost::any(*minPasswordDifferentChars);
    }
    if (minPasswordLength) {
      res["MinPasswordLength"] = boost::any(*minPasswordLength);
    }
    if (passwordNotContainUsername) {
      res["PasswordNotContainUsername"] = boost::any(*passwordNotContainUsername);
    }
    if (passwordReusePrevention) {
      res["PasswordReusePrevention"] = boost::any(*passwordReusePrevention);
    }
    if (requireLowerCaseChars) {
      res["RequireLowerCaseChars"] = boost::any(*requireLowerCaseChars);
    }
    if (requireNumbers) {
      res["RequireNumbers"] = boost::any(*requireNumbers);
    }
    if (requireSymbols) {
      res["RequireSymbols"] = boost::any(*requireSymbols);
    }
    if (requireUpperCaseChars) {
      res["RequireUpperCaseChars"] = boost::any(*requireUpperCaseChars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HardExpire") != m.end() && !m["HardExpire"].empty()) {
      hardExpire = make_shared<bool>(boost::any_cast<bool>(m["HardExpire"]));
    }
    if (m.find("MaxLoginAttempts") != m.end() && !m["MaxLoginAttempts"].empty()) {
      maxLoginAttempts = make_shared<long>(boost::any_cast<long>(m["MaxLoginAttempts"]));
    }
    if (m.find("MaxPasswordAge") != m.end() && !m["MaxPasswordAge"].empty()) {
      maxPasswordAge = make_shared<long>(boost::any_cast<long>(m["MaxPasswordAge"]));
    }
    if (m.find("MaxPasswordLength") != m.end() && !m["MaxPasswordLength"].empty()) {
      maxPasswordLength = make_shared<long>(boost::any_cast<long>(m["MaxPasswordLength"]));
    }
    if (m.find("MinPasswordDifferentChars") != m.end() && !m["MinPasswordDifferentChars"].empty()) {
      minPasswordDifferentChars = make_shared<long>(boost::any_cast<long>(m["MinPasswordDifferentChars"]));
    }
    if (m.find("MinPasswordLength") != m.end() && !m["MinPasswordLength"].empty()) {
      minPasswordLength = make_shared<long>(boost::any_cast<long>(m["MinPasswordLength"]));
    }
    if (m.find("PasswordNotContainUsername") != m.end() && !m["PasswordNotContainUsername"].empty()) {
      passwordNotContainUsername = make_shared<bool>(boost::any_cast<bool>(m["PasswordNotContainUsername"]));
    }
    if (m.find("PasswordReusePrevention") != m.end() && !m["PasswordReusePrevention"].empty()) {
      passwordReusePrevention = make_shared<long>(boost::any_cast<long>(m["PasswordReusePrevention"]));
    }
    if (m.find("RequireLowerCaseChars") != m.end() && !m["RequireLowerCaseChars"].empty()) {
      requireLowerCaseChars = make_shared<bool>(boost::any_cast<bool>(m["RequireLowerCaseChars"]));
    }
    if (m.find("RequireNumbers") != m.end() && !m["RequireNumbers"].empty()) {
      requireNumbers = make_shared<bool>(boost::any_cast<bool>(m["RequireNumbers"]));
    }
    if (m.find("RequireSymbols") != m.end() && !m["RequireSymbols"].empty()) {
      requireSymbols = make_shared<bool>(boost::any_cast<bool>(m["RequireSymbols"]));
    }
    if (m.find("RequireUpperCaseChars") != m.end() && !m["RequireUpperCaseChars"].empty()) {
      requireUpperCaseChars = make_shared<bool>(boost::any_cast<bool>(m["RequireUpperCaseChars"]));
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
class GetSCIMSynchronizationStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  GetSCIMSynchronizationStatusRequest() {}

  explicit GetSCIMSynchronizationStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~GetSCIMSynchronizationStatusRequest() = default;
};
class GetSCIMSynchronizationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> SCIMSynchronizationStatus{};

  GetSCIMSynchronizationStatusResponseBody() {}

  explicit GetSCIMSynchronizationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SCIMSynchronizationStatus) {
      res["SCIMSynchronizationStatus"] = boost::any(*SCIMSynchronizationStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SCIMSynchronizationStatus") != m.end() && !m["SCIMSynchronizationStatus"].empty()) {
      SCIMSynchronizationStatus = make_shared<string>(boost::any_cast<string>(m["SCIMSynchronizationStatus"]));
    }
  }


  virtual ~GetSCIMSynchronizationStatusResponseBody() = default;
};
class GetSCIMSynchronizationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSCIMSynchronizationStatusResponseBody> body{};

  GetSCIMSynchronizationStatusResponse() {}

  explicit GetSCIMSynchronizationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSCIMSynchronizationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSCIMSynchronizationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetSCIMSynchronizationStatusResponse() = default;
};
class GetServiceStatusResponseBodyServiceStatus : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> prerequisiteCheckResult{};
  shared_ptr<vector<string>> regionsInUse{};
  shared_ptr<string> status{};

  GetServiceStatusResponseBodyServiceStatus() {}

  explicit GetServiceStatusResponseBodyServiceStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (prerequisiteCheckResult) {
      res["PrerequisiteCheckResult"] = boost::any(*prerequisiteCheckResult);
    }
    if (regionsInUse) {
      res["RegionsInUse"] = boost::any(*regionsInUse);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("PrerequisiteCheckResult") != m.end() && !m["PrerequisiteCheckResult"].empty()) {
      prerequisiteCheckResult = make_shared<string>(boost::any_cast<string>(m["PrerequisiteCheckResult"]));
    }
    if (m.find("RegionsInUse") != m.end() && !m["RegionsInUse"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionsInUse"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionsInUse"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionsInUse = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetServiceStatusResponseBodyServiceStatus() = default;
};
class GetServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetServiceStatusResponseBodyServiceStatus> serviceStatus{};

  GetServiceStatusResponseBody() {}

  explicit GetServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = serviceStatus ? boost::any(serviceStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceStatus"].type()) {
        GetServiceStatusResponseBodyServiceStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceStatus"]));
        serviceStatus = make_shared<GetServiceStatusResponseBodyServiceStatus>(model1);
      }
    }
  }


  virtual ~GetServiceStatusResponseBody() = default;
};
class GetServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceStatusResponseBody> body{};

  GetServiceStatusResponse() {}

  explicit GetServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceStatusResponse() = default;
};
class GetTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> taskId{};

  GetTaskRequest() {}

  explicit GetTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetTaskRequest() = default;
};
class GetTaskResponseBodyTask : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> accessConfigurationName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> failureReason{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetPathName{};
  shared_ptr<string> targetType{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  GetTaskResponseBodyTask() {}

  explicit GetTaskResponseBodyTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (accessConfigurationName) {
      res["AccessConfigurationName"] = boost::any(*accessConfigurationName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (failureReason) {
      res["FailureReason"] = boost::any(*failureReason);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetPathName) {
      res["TargetPathName"] = boost::any(*targetPathName);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("AccessConfigurationName") != m.end() && !m["AccessConfigurationName"].empty()) {
      accessConfigurationName = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FailureReason") != m.end() && !m["FailureReason"].empty()) {
      failureReason = make_shared<string>(boost::any_cast<string>(m["FailureReason"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetPathName") != m.end() && !m["TargetPathName"].empty()) {
      targetPathName = make_shared<string>(boost::any_cast<string>(m["TargetPathName"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~GetTaskResponseBodyTask() = default;
};
class GetTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTaskResponseBodyTask> task{};

  GetTaskResponseBody() {}

  explicit GetTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (task) {
      res["Task"] = task ? boost::any(task->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(map<string, boost::any>) == m["Task"].type()) {
        GetTaskResponseBodyTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Task"]));
        task = make_shared<GetTaskResponseBodyTask>(model1);
      }
    }
  }


  virtual ~GetTaskResponseBody() = default;
};
class GetTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskResponseBody> body{};

  GetTaskResponse() {}

  explicit GetTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResponse() = default;
};
class GetTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> taskId{};

  GetTaskStatusRequest() {}

  explicit GetTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetTaskStatusRequest() = default;
};
class GetTaskStatusResponseBodyTaskStatus : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> failureReason{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  GetTaskStatusResponseBodyTaskStatus() {}

  explicit GetTaskStatusResponseBodyTaskStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (failureReason) {
      res["FailureReason"] = boost::any(*failureReason);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FailureReason") != m.end() && !m["FailureReason"].empty()) {
      failureReason = make_shared<string>(boost::any_cast<string>(m["FailureReason"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~GetTaskStatusResponseBodyTaskStatus() = default;
};
class GetTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTaskStatusResponseBodyTaskStatus> taskStatus{};

  GetTaskStatusResponseBody() {}

  explicit GetTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskStatus) {
      res["TaskStatus"] = taskStatus ? boost::any(taskStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskStatus"].type()) {
        GetTaskStatusResponseBodyTaskStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TaskStatus"]));
        taskStatus = make_shared<GetTaskStatusResponseBodyTaskStatus>(model1);
      }
    }
  }


  virtual ~GetTaskStatusResponseBody() = default;
};
class GetTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskStatusResponseBody> body{};

  GetTaskStatusResponse() {}

  explicit GetTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskStatusResponse() = default;
};
class GetUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> userId{};

  GetUserRequest() {}

  explicit GetUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetUserRequest() = default;
};
class GetUserResponseBodyUserExternalId : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> issuer{};

  GetUserResponseBodyUserExternalId() {}

  explicit GetUserResponseBodyUserExternalId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
  }


  virtual ~GetUserResponseBodyUserExternalId() = default;
};
class GetUserResponseBodyUserTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetUserResponseBodyUserTags() {}

  explicit GetUserResponseBodyUserTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetUserResponseBodyUserTags() = default;
};
class GetUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<GetUserResponseBodyUserExternalId> externalId{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};
  shared_ptr<string> provisionType{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetUserResponseBodyUserTags>> tags{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  GetUserResponseBodyUser() {}

  explicit GetUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (externalId) {
      res["ExternalId"] = externalId ? boost::any(externalId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (firstName) {
      res["FirstName"] = boost::any(*firstName);
    }
    if (lastName) {
      res["LastName"] = boost::any(*lastName);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExternalId"].type()) {
        GetUserResponseBodyUserExternalId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExternalId"]));
        externalId = make_shared<GetUserResponseBodyUserExternalId>(model1);
      }
    }
    if (m.find("FirstName") != m.end() && !m["FirstName"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["FirstName"]));
    }
    if (m.find("LastName") != m.end() && !m["LastName"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["LastName"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetUserResponseBodyUserTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyUserTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetUserResponseBodyUserTags>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
class GetUserIdRequestExternalId : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> issuer{};

  GetUserIdRequestExternalId() {}

  explicit GetUserIdRequestExternalId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
  }


  virtual ~GetUserIdRequestExternalId() = default;
};
class GetUserIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<GetUserIdRequestExternalId> externalId{};

  GetUserIdRequest() {}

  explicit GetUserIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (externalId) {
      res["ExternalId"] = externalId ? boost::any(externalId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExternalId"].type()) {
        GetUserIdRequestExternalId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExternalId"]));
        externalId = make_shared<GetUserIdRequestExternalId>(model1);
      }
    }
  }


  virtual ~GetUserIdRequest() = default;
};
class GetUserIdShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> externalIdShrink{};

  GetUserIdShrinkRequest() {}

  explicit GetUserIdShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (externalIdShrink) {
      res["ExternalId"] = boost::any(*externalIdShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalIdShrink = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
  }


  virtual ~GetUserIdShrinkRequest() = default;
};
class GetUserIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> userId{};

  GetUserIdResponseBody() {}

  explicit GetUserIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetUserIdResponseBody() = default;
};
class GetUserIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserIdResponseBody> body{};

  GetUserIdResponse() {}

  explicit GetUserIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserIdResponse() = default;
};
class GetUserMFAAuthenticationSettingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> userId{};

  GetUserMFAAuthenticationSettingsRequest() {}

  explicit GetUserMFAAuthenticationSettingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetUserMFAAuthenticationSettingsRequest() = default;
};
class GetUserMFAAuthenticationSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> userMFAAuthenticationSettings{};

  GetUserMFAAuthenticationSettingsResponseBody() {}

  explicit GetUserMFAAuthenticationSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userMFAAuthenticationSettings) {
      res["UserMFAAuthenticationSettings"] = boost::any(*userMFAAuthenticationSettings);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserMFAAuthenticationSettings") != m.end() && !m["UserMFAAuthenticationSettings"].empty()) {
      userMFAAuthenticationSettings = make_shared<string>(boost::any_cast<string>(m["UserMFAAuthenticationSettings"]));
    }
  }


  virtual ~GetUserMFAAuthenticationSettingsResponseBody() = default;
};
class GetUserMFAAuthenticationSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserMFAAuthenticationSettingsResponseBody> body{};

  GetUserMFAAuthenticationSettingsResponse() {}

  explicit GetUserMFAAuthenticationSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserMFAAuthenticationSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserMFAAuthenticationSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserMFAAuthenticationSettingsResponse() = default;
};
class GetUserProvisioningRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> userProvisioningId{};

  GetUserProvisioningRequest() {}

  explicit GetUserProvisioningRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (userProvisioningId) {
      res["UserProvisioningId"] = boost::any(*userProvisioningId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("UserProvisioningId") != m.end() && !m["UserProvisioningId"].empty()) {
      userProvisioningId = make_shared<string>(boost::any_cast<string>(m["UserProvisioningId"]));
    }
  }


  virtual ~GetUserProvisioningRequest() = default;
};
class GetUserProvisioningResponseBodyUserProvisioning : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> deletionStrategy{};
  shared_ptr<string> description{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> duplicationStrategy{};
  shared_ptr<string> ownerPk{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> status{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetType{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userProvisioningId{};

  GetUserProvisioningResponseBodyUserProvisioning() {}

  explicit GetUserProvisioningResponseBodyUserProvisioning(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletionStrategy) {
      res["DeletionStrategy"] = boost::any(*deletionStrategy);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (duplicationStrategy) {
      res["DuplicationStrategy"] = boost::any(*duplicationStrategy);
    }
    if (ownerPk) {
      res["OwnerPk"] = boost::any(*ownerPk);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userProvisioningId) {
      res["UserProvisioningId"] = boost::any(*userProvisioningId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletionStrategy") != m.end() && !m["DeletionStrategy"].empty()) {
      deletionStrategy = make_shared<string>(boost::any_cast<string>(m["DeletionStrategy"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DuplicationStrategy") != m.end() && !m["DuplicationStrategy"].empty()) {
      duplicationStrategy = make_shared<string>(boost::any_cast<string>(m["DuplicationStrategy"]));
    }
    if (m.find("OwnerPk") != m.end() && !m["OwnerPk"].empty()) {
      ownerPk = make_shared<string>(boost::any_cast<string>(m["OwnerPk"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserProvisioningId") != m.end() && !m["UserProvisioningId"].empty()) {
      userProvisioningId = make_shared<string>(boost::any_cast<string>(m["UserProvisioningId"]));
    }
  }


  virtual ~GetUserProvisioningResponseBodyUserProvisioning() = default;
};
class GetUserProvisioningResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetUserProvisioningResponseBodyUserProvisioning> userProvisioning{};

  GetUserProvisioningResponseBody() {}

  explicit GetUserProvisioningResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userProvisioning) {
      res["UserProvisioning"] = userProvisioning ? boost::any(userProvisioning->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserProvisioning") != m.end() && !m["UserProvisioning"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserProvisioning"].type()) {
        GetUserProvisioningResponseBodyUserProvisioning model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserProvisioning"]));
        userProvisioning = make_shared<GetUserProvisioningResponseBodyUserProvisioning>(model1);
      }
    }
  }


  virtual ~GetUserProvisioningResponseBody() = default;
};
class GetUserProvisioningResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserProvisioningResponseBody> body{};

  GetUserProvisioningResponse() {}

  explicit GetUserProvisioningResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserProvisioningResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserProvisioningResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserProvisioningResponse() = default;
};
class GetUserProvisioningConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  GetUserProvisioningConfigurationRequest() {}

  explicit GetUserProvisioningConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~GetUserProvisioningConfigurationRequest() = default;
};
class GetUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> defaultLandingPage{};
  shared_ptr<string> directoryId{};
  shared_ptr<long> sessionDuration{};
  shared_ptr<string> updateTime{};

  GetUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration() {}

  explicit GetUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultLandingPage) {
      res["DefaultLandingPage"] = boost::any(*defaultLandingPage);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (sessionDuration) {
      res["SessionDuration"] = boost::any(*sessionDuration);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultLandingPage") != m.end() && !m["DefaultLandingPage"].empty()) {
      defaultLandingPage = make_shared<string>(boost::any_cast<string>(m["DefaultLandingPage"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("SessionDuration") != m.end() && !m["SessionDuration"].empty()) {
      sessionDuration = make_shared<long>(boost::any_cast<long>(m["SessionDuration"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration() = default;
};
class GetUserProvisioningConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration> userProvisioningConfiguration{};

  GetUserProvisioningConfigurationResponseBody() {}

  explicit GetUserProvisioningConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userProvisioningConfiguration) {
      res["UserProvisioningConfiguration"] = userProvisioningConfiguration ? boost::any(userProvisioningConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserProvisioningConfiguration") != m.end() && !m["UserProvisioningConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserProvisioningConfiguration"].type()) {
        GetUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserProvisioningConfiguration"]));
        userProvisioningConfiguration = make_shared<GetUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration>(model1);
      }
    }
  }


  virtual ~GetUserProvisioningConfigurationResponseBody() = default;
};
class GetUserProvisioningConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserProvisioningConfigurationResponseBody> body{};

  GetUserProvisioningConfigurationResponse() {}

  explicit GetUserProvisioningConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserProvisioningConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserProvisioningConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserProvisioningConfigurationResponse() = default;
};
class GetUserProvisioningEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> eventId{};

  GetUserProvisioningEventRequest() {}

  explicit GetUserProvisioningEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
  }


  virtual ~GetUserProvisioningEventRequest() = default;
};
class GetUserProvisioningEventResponseBodyUserProvisioningEvent : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> deletionStrategy{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> duplicationStrategy{};
  shared_ptr<long> errorCount{};
  shared_ptr<string> errorInfo{};
  shared_ptr<string> eventId{};
  shared_ptr<string> latestAsyncTime{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetType{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userProvisioningId{};

  GetUserProvisioningEventResponseBodyUserProvisioningEvent() {}

  explicit GetUserProvisioningEventResponseBodyUserProvisioningEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletionStrategy) {
      res["DeletionStrategy"] = boost::any(*deletionStrategy);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (duplicationStrategy) {
      res["DuplicationStrategy"] = boost::any(*duplicationStrategy);
    }
    if (errorCount) {
      res["ErrorCount"] = boost::any(*errorCount);
    }
    if (errorInfo) {
      res["ErrorInfo"] = boost::any(*errorInfo);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (latestAsyncTime) {
      res["LatestAsyncTime"] = boost::any(*latestAsyncTime);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userProvisioningId) {
      res["UserProvisioningId"] = boost::any(*userProvisioningId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletionStrategy") != m.end() && !m["DeletionStrategy"].empty()) {
      deletionStrategy = make_shared<string>(boost::any_cast<string>(m["DeletionStrategy"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DuplicationStrategy") != m.end() && !m["DuplicationStrategy"].empty()) {
      duplicationStrategy = make_shared<string>(boost::any_cast<string>(m["DuplicationStrategy"]));
    }
    if (m.find("ErrorCount") != m.end() && !m["ErrorCount"].empty()) {
      errorCount = make_shared<long>(boost::any_cast<long>(m["ErrorCount"]));
    }
    if (m.find("ErrorInfo") != m.end() && !m["ErrorInfo"].empty()) {
      errorInfo = make_shared<string>(boost::any_cast<string>(m["ErrorInfo"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("LatestAsyncTime") != m.end() && !m["LatestAsyncTime"].empty()) {
      latestAsyncTime = make_shared<string>(boost::any_cast<string>(m["LatestAsyncTime"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserProvisioningId") != m.end() && !m["UserProvisioningId"].empty()) {
      userProvisioningId = make_shared<string>(boost::any_cast<string>(m["UserProvisioningId"]));
    }
  }


  virtual ~GetUserProvisioningEventResponseBodyUserProvisioningEvent() = default;
};
class GetUserProvisioningEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetUserProvisioningEventResponseBodyUserProvisioningEvent> userProvisioningEvent{};

  GetUserProvisioningEventResponseBody() {}

  explicit GetUserProvisioningEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userProvisioningEvent) {
      res["UserProvisioningEvent"] = userProvisioningEvent ? boost::any(userProvisioningEvent->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserProvisioningEvent") != m.end() && !m["UserProvisioningEvent"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserProvisioningEvent"].type()) {
        GetUserProvisioningEventResponseBodyUserProvisioningEvent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserProvisioningEvent"]));
        userProvisioningEvent = make_shared<GetUserProvisioningEventResponseBodyUserProvisioningEvent>(model1);
      }
    }
  }


  virtual ~GetUserProvisioningEventResponseBody() = default;
};
class GetUserProvisioningEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserProvisioningEventResponseBody> body{};

  GetUserProvisioningEventResponse() {}

  explicit GetUserProvisioningEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserProvisioningEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserProvisioningEventResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserProvisioningEventResponse() = default;
};
class GetUserProvisioningRdAccountStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> rdMemberId{};

  GetUserProvisioningRdAccountStatisticsRequest() {}

  explicit GetUserProvisioningRdAccountStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (rdMemberId) {
      res["RdMemberId"] = boost::any(*rdMemberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("RdMemberId") != m.end() && !m["RdMemberId"].empty()) {
      rdMemberId = make_shared<string>(boost::any_cast<string>(m["RdMemberId"]));
    }
  }


  virtual ~GetUserProvisioningRdAccountStatisticsRequest() = default;
};
class GetUserProvisioningRdAccountStatisticsResponseBodyUserProvisioningStatistics : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> entityId{};
  shared_ptr<long> failedEventCount{};
  shared_ptr<string> latestAsyncTime{};
  shared_ptr<string> ownerPk{};
  shared_ptr<string> type{};

  GetUserProvisioningRdAccountStatisticsResponseBodyUserProvisioningStatistics() {}

  explicit GetUserProvisioningRdAccountStatisticsResponseBodyUserProvisioningStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (failedEventCount) {
      res["FailedEventCount"] = boost::any(*failedEventCount);
    }
    if (latestAsyncTime) {
      res["LatestAsyncTime"] = boost::any(*latestAsyncTime);
    }
    if (ownerPk) {
      res["OwnerPk"] = boost::any(*ownerPk);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("FailedEventCount") != m.end() && !m["FailedEventCount"].empty()) {
      failedEventCount = make_shared<long>(boost::any_cast<long>(m["FailedEventCount"]));
    }
    if (m.find("LatestAsyncTime") != m.end() && !m["LatestAsyncTime"].empty()) {
      latestAsyncTime = make_shared<string>(boost::any_cast<string>(m["LatestAsyncTime"]));
    }
    if (m.find("OwnerPk") != m.end() && !m["OwnerPk"].empty()) {
      ownerPk = make_shared<string>(boost::any_cast<string>(m["OwnerPk"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetUserProvisioningRdAccountStatisticsResponseBodyUserProvisioningStatistics() = default;
};
class GetUserProvisioningRdAccountStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetUserProvisioningRdAccountStatisticsResponseBodyUserProvisioningStatistics> userProvisioningStatistics{};

  GetUserProvisioningRdAccountStatisticsResponseBody() {}

  explicit GetUserProvisioningRdAccountStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userProvisioningStatistics) {
      res["UserProvisioningStatistics"] = userProvisioningStatistics ? boost::any(userProvisioningStatistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserProvisioningStatistics") != m.end() && !m["UserProvisioningStatistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserProvisioningStatistics"].type()) {
        GetUserProvisioningRdAccountStatisticsResponseBodyUserProvisioningStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserProvisioningStatistics"]));
        userProvisioningStatistics = make_shared<GetUserProvisioningRdAccountStatisticsResponseBodyUserProvisioningStatistics>(model1);
      }
    }
  }


  virtual ~GetUserProvisioningRdAccountStatisticsResponseBody() = default;
};
class GetUserProvisioningRdAccountStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserProvisioningRdAccountStatisticsResponseBody> body{};

  GetUserProvisioningRdAccountStatisticsResponse() {}

  explicit GetUserProvisioningRdAccountStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserProvisioningRdAccountStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserProvisioningRdAccountStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserProvisioningRdAccountStatisticsResponse() = default;
};
class GetUserProvisioningStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> userProvisioningId{};

  GetUserProvisioningStatisticsRequest() {}

  explicit GetUserProvisioningStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (userProvisioningId) {
      res["UserProvisioningId"] = boost::any(*userProvisioningId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("UserProvisioningId") != m.end() && !m["UserProvisioningId"].empty()) {
      userProvisioningId = make_shared<string>(boost::any_cast<string>(m["UserProvisioningId"]));
    }
  }


  virtual ~GetUserProvisioningStatisticsRequest() = default;
};
class GetUserProvisioningStatisticsResponseBodyUserProvisioningStatistics : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> entityId{};
  shared_ptr<long> failedEventCount{};
  shared_ptr<string> latestAsyncTime{};
  shared_ptr<string> ownerPk{};
  shared_ptr<string> type{};

  GetUserProvisioningStatisticsResponseBodyUserProvisioningStatistics() {}

  explicit GetUserProvisioningStatisticsResponseBodyUserProvisioningStatistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (failedEventCount) {
      res["FailedEventCount"] = boost::any(*failedEventCount);
    }
    if (latestAsyncTime) {
      res["LatestAsyncTime"] = boost::any(*latestAsyncTime);
    }
    if (ownerPk) {
      res["OwnerPk"] = boost::any(*ownerPk);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("FailedEventCount") != m.end() && !m["FailedEventCount"].empty()) {
      failedEventCount = make_shared<long>(boost::any_cast<long>(m["FailedEventCount"]));
    }
    if (m.find("LatestAsyncTime") != m.end() && !m["LatestAsyncTime"].empty()) {
      latestAsyncTime = make_shared<string>(boost::any_cast<string>(m["LatestAsyncTime"]));
    }
    if (m.find("OwnerPk") != m.end() && !m["OwnerPk"].empty()) {
      ownerPk = make_shared<string>(boost::any_cast<string>(m["OwnerPk"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetUserProvisioningStatisticsResponseBodyUserProvisioningStatistics() = default;
};
class GetUserProvisioningStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetUserProvisioningStatisticsResponseBodyUserProvisioningStatistics> userProvisioningStatistics{};

  GetUserProvisioningStatisticsResponseBody() {}

  explicit GetUserProvisioningStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userProvisioningStatistics) {
      res["UserProvisioningStatistics"] = userProvisioningStatistics ? boost::any(userProvisioningStatistics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserProvisioningStatistics") != m.end() && !m["UserProvisioningStatistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserProvisioningStatistics"].type()) {
        GetUserProvisioningStatisticsResponseBodyUserProvisioningStatistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserProvisioningStatistics"]));
        userProvisioningStatistics = make_shared<GetUserProvisioningStatisticsResponseBodyUserProvisioningStatistics>(model1);
      }
    }
  }


  virtual ~GetUserProvisioningStatisticsResponseBody() = default;
};
class GetUserProvisioningStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserProvisioningStatisticsResponseBody> body{};

  GetUserProvisioningStatisticsResponse() {}

  explicit GetUserProvisioningStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserProvisioningStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserProvisioningStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserProvisioningStatisticsResponse() = default;
};
class ListAccessAssignmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> directoryId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalType{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  ListAccessAssignmentsRequest() {}

  explicit ListAccessAssignmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~ListAccessAssignmentsRequest() = default;
};
class ListAccessAssignmentsResponseBodyAccessAssignments : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> accessConfigurationName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetPathName{};
  shared_ptr<string> targetType{};

  ListAccessAssignmentsResponseBodyAccessAssignments() {}

  explicit ListAccessAssignmentsResponseBodyAccessAssignments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (accessConfigurationName) {
      res["AccessConfigurationName"] = boost::any(*accessConfigurationName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetPathName) {
      res["TargetPathName"] = boost::any(*targetPathName);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("AccessConfigurationName") != m.end() && !m["AccessConfigurationName"].empty()) {
      accessConfigurationName = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetPathName") != m.end() && !m["TargetPathName"].empty()) {
      targetPathName = make_shared<string>(boost::any_cast<string>(m["TargetPathName"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~ListAccessAssignmentsResponseBodyAccessAssignments() = default;
};
class ListAccessAssignmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccessAssignmentsResponseBodyAccessAssignments>> accessAssignments{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCounts{};

  ListAccessAssignmentsResponseBody() {}

  explicit ListAccessAssignmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessAssignments) {
      vector<boost::any> temp1;
      for(auto item1:*accessAssignments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessAssignments"] = boost::any(temp1);
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessAssignments") != m.end() && !m["AccessAssignments"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessAssignments"].type()) {
        vector<ListAccessAssignmentsResponseBodyAccessAssignments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessAssignments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccessAssignmentsResponseBodyAccessAssignments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessAssignments = make_shared<vector<ListAccessAssignmentsResponseBodyAccessAssignments>>(expect1);
      }
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
  }


  virtual ~ListAccessAssignmentsResponseBody() = default;
};
class ListAccessAssignmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccessAssignmentsResponseBody> body{};

  ListAccessAssignmentsResponse() {}

  explicit ListAccessAssignmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccessAssignmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccessAssignmentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccessAssignmentsResponse() = default;
};
class ListAccessConfigurationProvisioningsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> directoryId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> provisioningStatus{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  ListAccessConfigurationProvisioningsRequest() {}

  explicit ListAccessConfigurationProvisioningsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (provisioningStatus) {
      res["ProvisioningStatus"] = boost::any(*provisioningStatus);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProvisioningStatus") != m.end() && !m["ProvisioningStatus"].empty()) {
      provisioningStatus = make_shared<string>(boost::any_cast<string>(m["ProvisioningStatus"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~ListAccessConfigurationProvisioningsRequest() = default;
};
class ListAccessConfigurationProvisioningsResponseBodyAccessConfigurationProvisionings : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> accessConfigurationName{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<string>> RAMPolicyNames{};
  shared_ptr<string> RAMRoleName{};
  shared_ptr<string> SAMLProviderName{};
  shared_ptr<string> status{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetPathName{};
  shared_ptr<string> targetType{};
  shared_ptr<string> updateTime{};

  ListAccessConfigurationProvisioningsResponseBodyAccessConfigurationProvisionings() {}

  explicit ListAccessConfigurationProvisioningsResponseBodyAccessConfigurationProvisionings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (accessConfigurationName) {
      res["AccessConfigurationName"] = boost::any(*accessConfigurationName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (RAMPolicyNames) {
      res["RAMPolicyNames"] = boost::any(*RAMPolicyNames);
    }
    if (RAMRoleName) {
      res["RAMRoleName"] = boost::any(*RAMRoleName);
    }
    if (SAMLProviderName) {
      res["SAMLProviderName"] = boost::any(*SAMLProviderName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetPathName) {
      res["TargetPathName"] = boost::any(*targetPathName);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("AccessConfigurationName") != m.end() && !m["AccessConfigurationName"].empty()) {
      accessConfigurationName = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("RAMPolicyNames") != m.end() && !m["RAMPolicyNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RAMPolicyNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RAMPolicyNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      RAMPolicyNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RAMRoleName") != m.end() && !m["RAMRoleName"].empty()) {
      RAMRoleName = make_shared<string>(boost::any_cast<string>(m["RAMRoleName"]));
    }
    if (m.find("SAMLProviderName") != m.end() && !m["SAMLProviderName"].empty()) {
      SAMLProviderName = make_shared<string>(boost::any_cast<string>(m["SAMLProviderName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetPathName") != m.end() && !m["TargetPathName"].empty()) {
      targetPathName = make_shared<string>(boost::any_cast<string>(m["TargetPathName"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListAccessConfigurationProvisioningsResponseBodyAccessConfigurationProvisionings() = default;
};
class ListAccessConfigurationProvisioningsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccessConfigurationProvisioningsResponseBodyAccessConfigurationProvisionings>> accessConfigurationProvisionings{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCounts{};

  ListAccessConfigurationProvisioningsResponseBody() {}

  explicit ListAccessConfigurationProvisioningsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationProvisionings) {
      vector<boost::any> temp1;
      for(auto item1:*accessConfigurationProvisionings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessConfigurationProvisionings"] = boost::any(temp1);
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationProvisionings") != m.end() && !m["AccessConfigurationProvisionings"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessConfigurationProvisionings"].type()) {
        vector<ListAccessConfigurationProvisioningsResponseBodyAccessConfigurationProvisionings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessConfigurationProvisionings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccessConfigurationProvisioningsResponseBodyAccessConfigurationProvisionings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessConfigurationProvisionings = make_shared<vector<ListAccessConfigurationProvisioningsResponseBodyAccessConfigurationProvisionings>>(expect1);
      }
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
  }


  virtual ~ListAccessConfigurationProvisioningsResponseBody() = default;
};
class ListAccessConfigurationProvisioningsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccessConfigurationProvisioningsResponseBody> body{};

  ListAccessConfigurationProvisioningsResponse() {}

  explicit ListAccessConfigurationProvisioningsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccessConfigurationProvisioningsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccessConfigurationProvisioningsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccessConfigurationProvisioningsResponse() = default;
};
class ListAccessConfigurationsRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListAccessConfigurationsRequestTags() {}

  explicit ListAccessConfigurationsRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListAccessConfigurationsRequestTags() = default;
};
class ListAccessConfigurationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> statusNotifications{};
  shared_ptr<vector<ListAccessConfigurationsRequestTags>> tags{};

  ListAccessConfigurationsRequest() {}

  explicit ListAccessConfigurationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (statusNotifications) {
      res["StatusNotifications"] = boost::any(*statusNotifications);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("StatusNotifications") != m.end() && !m["StatusNotifications"].empty()) {
      statusNotifications = make_shared<string>(boost::any_cast<string>(m["StatusNotifications"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListAccessConfigurationsRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccessConfigurationsRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListAccessConfigurationsRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListAccessConfigurationsRequest() = default;
};
class ListAccessConfigurationsResponseBodyAccessConfigurationsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListAccessConfigurationsResponseBodyAccessConfigurationsTags() {}

  explicit ListAccessConfigurationsResponseBodyAccessConfigurationsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListAccessConfigurationsResponseBodyAccessConfigurationsTags() = default;
};
class ListAccessConfigurationsResponseBodyAccessConfigurations : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> accessConfigurationName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> relayState{};
  shared_ptr<long> sessionDuration{};
  shared_ptr<vector<string>> statusNotifications{};
  shared_ptr<vector<ListAccessConfigurationsResponseBodyAccessConfigurationsTags>> tags{};
  shared_ptr<string> updateTime{};

  ListAccessConfigurationsResponseBodyAccessConfigurations() {}

  explicit ListAccessConfigurationsResponseBodyAccessConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (accessConfigurationName) {
      res["AccessConfigurationName"] = boost::any(*accessConfigurationName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (relayState) {
      res["RelayState"] = boost::any(*relayState);
    }
    if (sessionDuration) {
      res["SessionDuration"] = boost::any(*sessionDuration);
    }
    if (statusNotifications) {
      res["StatusNotifications"] = boost::any(*statusNotifications);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("AccessConfigurationName") != m.end() && !m["AccessConfigurationName"].empty()) {
      accessConfigurationName = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RelayState") != m.end() && !m["RelayState"].empty()) {
      relayState = make_shared<string>(boost::any_cast<string>(m["RelayState"]));
    }
    if (m.find("SessionDuration") != m.end() && !m["SessionDuration"].empty()) {
      sessionDuration = make_shared<long>(boost::any_cast<long>(m["SessionDuration"]));
    }
    if (m.find("StatusNotifications") != m.end() && !m["StatusNotifications"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StatusNotifications"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StatusNotifications"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusNotifications = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListAccessConfigurationsResponseBodyAccessConfigurationsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccessConfigurationsResponseBodyAccessConfigurationsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListAccessConfigurationsResponseBodyAccessConfigurationsTags>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListAccessConfigurationsResponseBodyAccessConfigurations() = default;
};
class ListAccessConfigurationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAccessConfigurationsResponseBodyAccessConfigurations>> accessConfigurations{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCounts{};

  ListAccessConfigurationsResponseBody() {}

  explicit ListAccessConfigurationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurations) {
      vector<boost::any> temp1;
      for(auto item1:*accessConfigurations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessConfigurations"] = boost::any(temp1);
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurations") != m.end() && !m["AccessConfigurations"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessConfigurations"].type()) {
        vector<ListAccessConfigurationsResponseBodyAccessConfigurations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessConfigurations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAccessConfigurationsResponseBodyAccessConfigurations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessConfigurations = make_shared<vector<ListAccessConfigurationsResponseBodyAccessConfigurations>>(expect1);
      }
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
  }


  virtual ~ListAccessConfigurationsResponseBody() = default;
};
class ListAccessConfigurationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAccessConfigurationsResponseBody> body{};

  ListAccessConfigurationsResponse() {}

  explicit ListAccessConfigurationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAccessConfigurationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAccessConfigurationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAccessConfigurationsResponse() = default;
};
class ListDirectoriesResponseBodyDirectories : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> directoryName{};
  shared_ptr<string> region{};
  shared_ptr<string> updateTime{};

  ListDirectoriesResponseBodyDirectories() {}

  explicit ListDirectoriesResponseBodyDirectories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (directoryName) {
      res["DirectoryName"] = boost::any(*directoryName);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DirectoryName") != m.end() && !m["DirectoryName"].empty()) {
      directoryName = make_shared<string>(boost::any_cast<string>(m["DirectoryName"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListDirectoriesResponseBodyDirectories() = default;
};
class ListDirectoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDirectoriesResponseBodyDirectories>> directories{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCounts{};

  ListDirectoriesResponseBody() {}

  explicit ListDirectoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directories) {
      vector<boost::any> temp1;
      for(auto item1:*directories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Directories"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Directories") != m.end() && !m["Directories"].empty()) {
      if (typeid(vector<boost::any>) == m["Directories"].type()) {
        vector<ListDirectoriesResponseBodyDirectories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Directories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDirectoriesResponseBodyDirectories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        directories = make_shared<vector<ListDirectoriesResponseBodyDirectories>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
  }


  virtual ~ListDirectoriesResponseBody() = default;
};
class ListDirectoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDirectoriesResponseBody> body{};

  ListDirectoriesResponse() {}

  explicit ListDirectoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDirectoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDirectoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDirectoriesResponse() = default;
};
class ListExternalSAMLIdPCertificatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  ListExternalSAMLIdPCertificatesRequest() {}

  explicit ListExternalSAMLIdPCertificatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~ListExternalSAMLIdPCertificatesRequest() = default;
};
class ListExternalSAMLIdPCertificatesResponseBodySAMLIdPCertificates : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> issuer{};
  shared_ptr<string> notAfter{};
  shared_ptr<string> notBefore{};
  shared_ptr<string> publicKey{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> signatureAlgorithm{};
  shared_ptr<string> subject{};
  shared_ptr<long> version{};
  shared_ptr<string> x509Certificate{};

  ListExternalSAMLIdPCertificatesResponseBodySAMLIdPCertificates() {}

  explicit ListExternalSAMLIdPCertificatesResponseBodySAMLIdPCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (notAfter) {
      res["NotAfter"] = boost::any(*notAfter);
    }
    if (notBefore) {
      res["NotBefore"] = boost::any(*notBefore);
    }
    if (publicKey) {
      res["PublicKey"] = boost::any(*publicKey);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (signatureAlgorithm) {
      res["SignatureAlgorithm"] = boost::any(*signatureAlgorithm);
    }
    if (subject) {
      res["Subject"] = boost::any(*subject);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (x509Certificate) {
      res["X509Certificate"] = boost::any(*x509Certificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("NotAfter") != m.end() && !m["NotAfter"].empty()) {
      notAfter = make_shared<string>(boost::any_cast<string>(m["NotAfter"]));
    }
    if (m.find("NotBefore") != m.end() && !m["NotBefore"].empty()) {
      notBefore = make_shared<string>(boost::any_cast<string>(m["NotBefore"]));
    }
    if (m.find("PublicKey") != m.end() && !m["PublicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["PublicKey"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("SignatureAlgorithm") != m.end() && !m["SignatureAlgorithm"].empty()) {
      signatureAlgorithm = make_shared<string>(boost::any_cast<string>(m["SignatureAlgorithm"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["Subject"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
    if (m.find("X509Certificate") != m.end() && !m["X509Certificate"].empty()) {
      x509Certificate = make_shared<string>(boost::any_cast<string>(m["X509Certificate"]));
    }
  }


  virtual ~ListExternalSAMLIdPCertificatesResponseBodySAMLIdPCertificates() = default;
};
class ListExternalSAMLIdPCertificatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListExternalSAMLIdPCertificatesResponseBodySAMLIdPCertificates>> SAMLIdPCertificates{};
  shared_ptr<long> totalCounts{};

  ListExternalSAMLIdPCertificatesResponseBody() {}

  explicit ListExternalSAMLIdPCertificatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SAMLIdPCertificates) {
      vector<boost::any> temp1;
      for(auto item1:*SAMLIdPCertificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SAMLIdPCertificates"] = boost::any(temp1);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SAMLIdPCertificates") != m.end() && !m["SAMLIdPCertificates"].empty()) {
      if (typeid(vector<boost::any>) == m["SAMLIdPCertificates"].type()) {
        vector<ListExternalSAMLIdPCertificatesResponseBodySAMLIdPCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SAMLIdPCertificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExternalSAMLIdPCertificatesResponseBodySAMLIdPCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        SAMLIdPCertificates = make_shared<vector<ListExternalSAMLIdPCertificatesResponseBodySAMLIdPCertificates>>(expect1);
      }
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
  }


  virtual ~ListExternalSAMLIdPCertificatesResponseBody() = default;
};
class ListExternalSAMLIdPCertificatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExternalSAMLIdPCertificatesResponseBody> body{};

  ListExternalSAMLIdPCertificatesResponse() {}

  explicit ListExternalSAMLIdPCertificatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExternalSAMLIdPCertificatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExternalSAMLIdPCertificatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListExternalSAMLIdPCertificatesResponse() = default;
};
class ListGroupMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> groupId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListGroupMembersRequest() {}

  explicit ListGroupMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListGroupMembersRequest() = default;
};
class ListGroupMembersResponseBodyGroupMembers : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> groupId{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> provisionType{};
  shared_ptr<string> status{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ListGroupMembersResponseBodyGroupMembers() {}

  explicit ListGroupMembersResponseBodyGroupMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ListGroupMembersResponseBodyGroupMembers() = default;
};
class ListGroupMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupMembersResponseBodyGroupMembers>> groupMembers{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCounts{};

  ListGroupMembersResponseBody() {}

  explicit ListGroupMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupMembers) {
      vector<boost::any> temp1;
      for(auto item1:*groupMembers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupMembers"] = boost::any(temp1);
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupMembers") != m.end() && !m["GroupMembers"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupMembers"].type()) {
        vector<ListGroupMembersResponseBodyGroupMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupMembers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupMembersResponseBodyGroupMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupMembers = make_shared<vector<ListGroupMembersResponseBodyGroupMembers>>(expect1);
      }
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
  }


  virtual ~ListGroupMembersResponseBody() = default;
};
class ListGroupMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupMembersResponseBody> body{};

  ListGroupMembersResponse() {}

  explicit ListGroupMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupMembersResponse() = default;
};
class ListGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> provisionType{};

  ListGroupsRequest() {}

  explicit ListGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
  }


  virtual ~ListGroupsRequest() = default;
};
class ListGroupsResponseBodyGroups : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> provisionType{};
  shared_ptr<string> updateTime{};

  ListGroupsResponseBodyGroups() {}

  explicit ListGroupsResponseBodyGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListGroupsResponseBodyGroups() = default;
};
class ListGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupsResponseBodyGroups>> groups{};
  shared_ptr<bool> isTruncated{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCounts{};

  ListGroupsResponseBody() {}

  explicit ListGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
    }
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<ListGroupsResponseBodyGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupsResponseBodyGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<ListGroupsResponseBodyGroups>>(expect1);
      }
    }
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
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
class ListJoinedGroupsForUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> userId{};

  ListJoinedGroupsForUserRequest() {}

  explicit ListJoinedGroupsForUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListJoinedGroupsForUserRequest() = default;
};
class ListJoinedGroupsForUserResponseBodyJoinedGroups : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> joinTime{};
  shared_ptr<string> provisionType{};
  shared_ptr<string> userId{};

  ListJoinedGroupsForUserResponseBodyJoinedGroups() {}

  explicit ListJoinedGroupsForUserResponseBodyJoinedGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (joinTime) {
      res["JoinTime"] = boost::any(*joinTime);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("JoinTime") != m.end() && !m["JoinTime"].empty()) {
      joinTime = make_shared<string>(boost::any_cast<string>(m["JoinTime"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListJoinedGroupsForUserResponseBodyJoinedGroups() = default;
};
class ListJoinedGroupsForUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTruncated{};
  shared_ptr<vector<ListJoinedGroupsForUserResponseBodyJoinedGroups>> joinedGroups{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCounts{};

  ListJoinedGroupsForUserResponseBody() {}

  explicit ListJoinedGroupsForUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (joinedGroups) {
      vector<boost::any> temp1;
      for(auto item1:*joinedGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JoinedGroups"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("JoinedGroups") != m.end() && !m["JoinedGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["JoinedGroups"].type()) {
        vector<ListJoinedGroupsForUserResponseBodyJoinedGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JoinedGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJoinedGroupsForUserResponseBodyJoinedGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        joinedGroups = make_shared<vector<ListJoinedGroupsForUserResponseBodyJoinedGroups>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
  }


  virtual ~ListJoinedGroupsForUserResponseBody() = default;
};
class ListJoinedGroupsForUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListJoinedGroupsForUserResponseBody> body{};

  ListJoinedGroupsForUserResponse() {}

  explicit ListJoinedGroupsForUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListJoinedGroupsForUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJoinedGroupsForUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListJoinedGroupsForUserResponse() = default;
};
class ListMFADevicesForUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> userId{};

  ListMFADevicesForUserRequest() {}

  explicit ListMFADevicesForUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListMFADevicesForUserRequest() = default;
};
class ListMFADevicesForUserResponseBodyMFADevices : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> effectiveTime{};
  shared_ptr<string> userId{};

  ListMFADevicesForUserResponseBodyMFADevices() {}

  explicit ListMFADevicesForUserResponseBodyMFADevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (effectiveTime) {
      res["EffectiveTime"] = boost::any(*effectiveTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("EffectiveTime") != m.end() && !m["EffectiveTime"].empty()) {
      effectiveTime = make_shared<string>(boost::any_cast<string>(m["EffectiveTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListMFADevicesForUserResponseBodyMFADevices() = default;
};
class ListMFADevicesForUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListMFADevicesForUserResponseBodyMFADevices>> MFADevices{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCounts{};

  ListMFADevicesForUserResponseBody() {}

  explicit ListMFADevicesForUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (MFADevices) {
      vector<boost::any> temp1;
      for(auto item1:*MFADevices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MFADevices"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MFADevices") != m.end() && !m["MFADevices"].empty()) {
      if (typeid(vector<boost::any>) == m["MFADevices"].type()) {
        vector<ListMFADevicesForUserResponseBodyMFADevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MFADevices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMFADevicesForUserResponseBodyMFADevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        MFADevices = make_shared<vector<ListMFADevicesForUserResponseBodyMFADevices>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
  }


  virtual ~ListMFADevicesForUserResponseBody() = default;
};
class ListMFADevicesForUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMFADevicesForUserResponseBody> body{};

  ListMFADevicesForUserResponse() {}

  explicit ListMFADevicesForUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMFADevicesForUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMFADevicesForUserResponseBody>(model1);
      }
    }
  }


  virtual ~ListMFADevicesForUserResponse() = default;
};
class ListPermissionPoliciesInAccessConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> permissionPolicyType{};

  ListPermissionPoliciesInAccessConfigurationRequest() {}

  explicit ListPermissionPoliciesInAccessConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (permissionPolicyType) {
      res["PermissionPolicyType"] = boost::any(*permissionPolicyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("PermissionPolicyType") != m.end() && !m["PermissionPolicyType"].empty()) {
      permissionPolicyType = make_shared<string>(boost::any_cast<string>(m["PermissionPolicyType"]));
    }
  }


  virtual ~ListPermissionPoliciesInAccessConfigurationRequest() = default;
};
class ListPermissionPoliciesInAccessConfigurationResponseBodyPermissionPolicies : public Darabonba::Model {
public:
  shared_ptr<string> addTime{};
  shared_ptr<string> permissionPolicyDocument{};
  shared_ptr<string> permissionPolicyName{};
  shared_ptr<string> permissionPolicyType{};

  ListPermissionPoliciesInAccessConfigurationResponseBodyPermissionPolicies() {}

  explicit ListPermissionPoliciesInAccessConfigurationResponseBodyPermissionPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addTime) {
      res["AddTime"] = boost::any(*addTime);
    }
    if (permissionPolicyDocument) {
      res["PermissionPolicyDocument"] = boost::any(*permissionPolicyDocument);
    }
    if (permissionPolicyName) {
      res["PermissionPolicyName"] = boost::any(*permissionPolicyName);
    }
    if (permissionPolicyType) {
      res["PermissionPolicyType"] = boost::any(*permissionPolicyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddTime") != m.end() && !m["AddTime"].empty()) {
      addTime = make_shared<string>(boost::any_cast<string>(m["AddTime"]));
    }
    if (m.find("PermissionPolicyDocument") != m.end() && !m["PermissionPolicyDocument"].empty()) {
      permissionPolicyDocument = make_shared<string>(boost::any_cast<string>(m["PermissionPolicyDocument"]));
    }
    if (m.find("PermissionPolicyName") != m.end() && !m["PermissionPolicyName"].empty()) {
      permissionPolicyName = make_shared<string>(boost::any_cast<string>(m["PermissionPolicyName"]));
    }
    if (m.find("PermissionPolicyType") != m.end() && !m["PermissionPolicyType"].empty()) {
      permissionPolicyType = make_shared<string>(boost::any_cast<string>(m["PermissionPolicyType"]));
    }
  }


  virtual ~ListPermissionPoliciesInAccessConfigurationResponseBodyPermissionPolicies() = default;
};
class ListPermissionPoliciesInAccessConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPermissionPoliciesInAccessConfigurationResponseBodyPermissionPolicies>> permissionPolicies{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCounts{};

  ListPermissionPoliciesInAccessConfigurationResponseBody() {}

  explicit ListPermissionPoliciesInAccessConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*permissionPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermissionPolicies"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionPolicies") != m.end() && !m["PermissionPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["PermissionPolicies"].type()) {
        vector<ListPermissionPoliciesInAccessConfigurationResponseBodyPermissionPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermissionPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPermissionPoliciesInAccessConfigurationResponseBodyPermissionPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissionPolicies = make_shared<vector<ListPermissionPoliciesInAccessConfigurationResponseBodyPermissionPolicies>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
  }


  virtual ~ListPermissionPoliciesInAccessConfigurationResponseBody() = default;
};
class ListPermissionPoliciesInAccessConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPermissionPoliciesInAccessConfigurationResponseBody> body{};

  ListPermissionPoliciesInAccessConfigurationResponse() {}

  explicit ListPermissionPoliciesInAccessConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPermissionPoliciesInAccessConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPermissionPoliciesInAccessConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~ListPermissionPoliciesInAccessConfigurationResponse() = default;
};
class ListSCIMServerCredentialsRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};

  ListSCIMServerCredentialsRequest() {}

  explicit ListSCIMServerCredentialsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~ListSCIMServerCredentialsRequest() = default;
};
class ListSCIMServerCredentialsResponseBodySCIMServerCredentials : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> credentialId{};
  shared_ptr<string> credentialType{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> status{};

  ListSCIMServerCredentialsResponseBodySCIMServerCredentials() {}

  explicit ListSCIMServerCredentialsResponseBodySCIMServerCredentials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (credentialId) {
      res["CredentialId"] = boost::any(*credentialId);
    }
    if (credentialType) {
      res["CredentialType"] = boost::any(*credentialType);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CredentialId") != m.end() && !m["CredentialId"].empty()) {
      credentialId = make_shared<string>(boost::any_cast<string>(m["CredentialId"]));
    }
    if (m.find("CredentialType") != m.end() && !m["CredentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["CredentialType"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListSCIMServerCredentialsResponseBodySCIMServerCredentials() = default;
};
class ListSCIMServerCredentialsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSCIMServerCredentialsResponseBodySCIMServerCredentials>> SCIMServerCredentials{};
  shared_ptr<long> totalCounts{};

  ListSCIMServerCredentialsResponseBody() {}

  explicit ListSCIMServerCredentialsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SCIMServerCredentials) {
      vector<boost::any> temp1;
      for(auto item1:*SCIMServerCredentials){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SCIMServerCredentials"] = boost::any(temp1);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SCIMServerCredentials") != m.end() && !m["SCIMServerCredentials"].empty()) {
      if (typeid(vector<boost::any>) == m["SCIMServerCredentials"].type()) {
        vector<ListSCIMServerCredentialsResponseBodySCIMServerCredentials> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SCIMServerCredentials"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSCIMServerCredentialsResponseBodySCIMServerCredentials model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        SCIMServerCredentials = make_shared<vector<ListSCIMServerCredentialsResponseBodySCIMServerCredentials>>(expect1);
      }
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
  }


  virtual ~ListSCIMServerCredentialsResponseBody() = default;
};
class ListSCIMServerCredentialsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSCIMServerCredentialsResponseBody> body{};

  ListSCIMServerCredentialsResponse() {}

  explicit ListSCIMServerCredentialsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSCIMServerCredentialsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSCIMServerCredentialsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSCIMServerCredentialsResponse() = default;
};
class ListTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalType{};
  shared_ptr<string> status{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};
  shared_ptr<string> taskType{};

  ListTasksRequest() {}

  explicit ListTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~ListTasksRequest() = default;
};
class ListTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> accessConfigurationName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> failureReason{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetPathName{};
  shared_ptr<string> targetType{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  ListTasksResponseBodyTasks() {}

  explicit ListTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (accessConfigurationName) {
      res["AccessConfigurationName"] = boost::any(*accessConfigurationName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (failureReason) {
      res["FailureReason"] = boost::any(*failureReason);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetPathName) {
      res["TargetPathName"] = boost::any(*targetPathName);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("AccessConfigurationName") != m.end() && !m["AccessConfigurationName"].empty()) {
      accessConfigurationName = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FailureReason") != m.end() && !m["FailureReason"].empty()) {
      failureReason = make_shared<string>(boost::any_cast<string>(m["FailureReason"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetPathName") != m.end() && !m["TargetPathName"].empty()) {
      targetPathName = make_shared<string>(boost::any_cast<string>(m["TargetPathName"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~ListTasksResponseBodyTasks() = default;
};
class ListTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTruncated{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTasksResponseBodyTasks>> tasks{};
  shared_ptr<long> totalCounts{};

  ListTasksResponseBody() {}

  explicit ListTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<ListTasksResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTasksResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ListTasksResponseBodyTasks>>(expect1);
      }
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
  }


  virtual ~ListTasksResponseBody() = default;
};
class ListTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTasksResponseBody> body{};

  ListTasksResponse() {}

  explicit ListTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListTasksResponse() = default;
};
class ListUserProvisioningEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> userProvisioningId{};

  ListUserProvisioningEventsRequest() {}

  explicit ListUserProvisioningEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (userProvisioningId) {
      res["UserProvisioningId"] = boost::any(*userProvisioningId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("UserProvisioningId") != m.end() && !m["UserProvisioningId"].empty()) {
      userProvisioningId = make_shared<string>(boost::any_cast<string>(m["UserProvisioningId"]));
    }
  }


  virtual ~ListUserProvisioningEventsRequest() = default;
};
class ListUserProvisioningEventsResponseBodyUserProvisioningEvents : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> deletionStrategy{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> duplicationStrategy{};
  shared_ptr<long> errorCount{};
  shared_ptr<string> errorInfo{};
  shared_ptr<string> eventId{};
  shared_ptr<string> latestAsyncTime{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetType{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userProvisioningId{};

  ListUserProvisioningEventsResponseBodyUserProvisioningEvents() {}

  explicit ListUserProvisioningEventsResponseBodyUserProvisioningEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletionStrategy) {
      res["DeletionStrategy"] = boost::any(*deletionStrategy);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (duplicationStrategy) {
      res["DuplicationStrategy"] = boost::any(*duplicationStrategy);
    }
    if (errorCount) {
      res["ErrorCount"] = boost::any(*errorCount);
    }
    if (errorInfo) {
      res["ErrorInfo"] = boost::any(*errorInfo);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (latestAsyncTime) {
      res["LatestAsyncTime"] = boost::any(*latestAsyncTime);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userProvisioningId) {
      res["UserProvisioningId"] = boost::any(*userProvisioningId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletionStrategy") != m.end() && !m["DeletionStrategy"].empty()) {
      deletionStrategy = make_shared<string>(boost::any_cast<string>(m["DeletionStrategy"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DuplicationStrategy") != m.end() && !m["DuplicationStrategy"].empty()) {
      duplicationStrategy = make_shared<string>(boost::any_cast<string>(m["DuplicationStrategy"]));
    }
    if (m.find("ErrorCount") != m.end() && !m["ErrorCount"].empty()) {
      errorCount = make_shared<long>(boost::any_cast<long>(m["ErrorCount"]));
    }
    if (m.find("ErrorInfo") != m.end() && !m["ErrorInfo"].empty()) {
      errorInfo = make_shared<string>(boost::any_cast<string>(m["ErrorInfo"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("LatestAsyncTime") != m.end() && !m["LatestAsyncTime"].empty()) {
      latestAsyncTime = make_shared<string>(boost::any_cast<string>(m["LatestAsyncTime"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserProvisioningId") != m.end() && !m["UserProvisioningId"].empty()) {
      userProvisioningId = make_shared<string>(boost::any_cast<string>(m["UserProvisioningId"]));
    }
  }


  virtual ~ListUserProvisioningEventsResponseBodyUserProvisioningEvents() = default;
};
class ListUserProvisioningEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTruncated{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCounts{};
  shared_ptr<vector<ListUserProvisioningEventsResponseBodyUserProvisioningEvents>> userProvisioningEvents{};

  ListUserProvisioningEventsResponseBody() {}

  explicit ListUserProvisioningEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    if (userProvisioningEvents) {
      vector<boost::any> temp1;
      for(auto item1:*userProvisioningEvents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserProvisioningEvents"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
    if (m.find("UserProvisioningEvents") != m.end() && !m["UserProvisioningEvents"].empty()) {
      if (typeid(vector<boost::any>) == m["UserProvisioningEvents"].type()) {
        vector<ListUserProvisioningEventsResponseBodyUserProvisioningEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserProvisioningEvents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserProvisioningEventsResponseBodyUserProvisioningEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userProvisioningEvents = make_shared<vector<ListUserProvisioningEventsResponseBodyUserProvisioningEvents>>(expect1);
      }
    }
  }


  virtual ~ListUserProvisioningEventsResponseBody() = default;
};
class ListUserProvisioningEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserProvisioningEventsResponseBody> body{};

  ListUserProvisioningEventsResponse() {}

  explicit ListUserProvisioningEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserProvisioningEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserProvisioningEventsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserProvisioningEventsResponse() = default;
};
class ListUserProvisioningsRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalType{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  ListUserProvisioningsRequest() {}

  explicit ListUserProvisioningsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~ListUserProvisioningsRequest() = default;
};
class ListUserProvisioningsResponseBodyUserProvisionings : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> deletionStrategy{};
  shared_ptr<string> description{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> duplicationStrategy{};
  shared_ptr<string> ownerPk{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> status{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetType{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userProvisioningId{};

  ListUserProvisioningsResponseBodyUserProvisionings() {}

  explicit ListUserProvisioningsResponseBodyUserProvisionings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletionStrategy) {
      res["DeletionStrategy"] = boost::any(*deletionStrategy);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (duplicationStrategy) {
      res["DuplicationStrategy"] = boost::any(*duplicationStrategy);
    }
    if (ownerPk) {
      res["OwnerPk"] = boost::any(*ownerPk);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userProvisioningId) {
      res["UserProvisioningId"] = boost::any(*userProvisioningId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletionStrategy") != m.end() && !m["DeletionStrategy"].empty()) {
      deletionStrategy = make_shared<string>(boost::any_cast<string>(m["DeletionStrategy"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DuplicationStrategy") != m.end() && !m["DuplicationStrategy"].empty()) {
      duplicationStrategy = make_shared<string>(boost::any_cast<string>(m["DuplicationStrategy"]));
    }
    if (m.find("OwnerPk") != m.end() && !m["OwnerPk"].empty()) {
      ownerPk = make_shared<string>(boost::any_cast<string>(m["OwnerPk"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserProvisioningId") != m.end() && !m["UserProvisioningId"].empty()) {
      userProvisioningId = make_shared<string>(boost::any_cast<string>(m["UserProvisioningId"]));
    }
  }


  virtual ~ListUserProvisioningsResponseBodyUserProvisionings() = default;
};
class ListUserProvisioningsResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isTruncated{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCounts{};
  shared_ptr<vector<ListUserProvisioningsResponseBodyUserProvisionings>> userProvisionings{};

  ListUserProvisioningsResponseBody() {}

  explicit ListUserProvisioningsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isTruncated) {
      res["IsTruncated"] = boost::any(*isTruncated);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    if (userProvisionings) {
      vector<boost::any> temp1;
      for(auto item1:*userProvisionings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserProvisionings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
    if (m.find("UserProvisionings") != m.end() && !m["UserProvisionings"].empty()) {
      if (typeid(vector<boost::any>) == m["UserProvisionings"].type()) {
        vector<ListUserProvisioningsResponseBodyUserProvisionings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserProvisionings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserProvisioningsResponseBodyUserProvisionings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userProvisionings = make_shared<vector<ListUserProvisioningsResponseBodyUserProvisionings>>(expect1);
      }
    }
  }


  virtual ~ListUserProvisioningsResponseBody() = default;
};
class ListUserProvisioningsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserProvisioningsResponseBody> body{};

  ListUserProvisioningsResponse() {}

  explicit ListUserProvisioningsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserProvisioningsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserProvisioningsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserProvisioningsResponse() = default;
};
class ListUsersRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListUsersRequestTags() {}

  explicit ListUsersRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListUsersRequestTags() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> filter{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> provisionType{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListUsersRequestTags>> tags{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListUsersRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListUsersRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyUsersExternalId : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> issuer{};

  ListUsersResponseBodyUsersExternalId() {}

  explicit ListUsersResponseBodyUsersExternalId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
  }


  virtual ~ListUsersResponseBodyUsersExternalId() = default;
};
class ListUsersResponseBodyUsersTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListUsersResponseBodyUsersTags() {}

  explicit ListUsersResponseBodyUsersTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListUsersResponseBodyUsersTags() = default;
};
class ListUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<ListUsersResponseBodyUsersExternalId> externalId{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};
  shared_ptr<string> provisionType{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListUsersResponseBodyUsersTags>> tags{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ListUsersResponseBodyUsers() {}

  explicit ListUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (externalId) {
      res["ExternalId"] = externalId ? boost::any(externalId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (firstName) {
      res["FirstName"] = boost::any(*firstName);
    }
    if (lastName) {
      res["LastName"] = boost::any(*lastName);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExternalId"].type()) {
        ListUsersResponseBodyUsersExternalId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExternalId"]));
        externalId = make_shared<ListUsersResponseBodyUsersExternalId>(model1);
      }
    }
    if (m.find("FirstName") != m.end() && !m["FirstName"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["FirstName"]));
    }
    if (m.find("LastName") != m.end() && !m["LastName"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["LastName"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListUsersResponseBodyUsersTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyUsersTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListUsersResponseBodyUsersTags>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
  shared_ptr<bool> isTruncated{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCounts{};
  shared_ptr<vector<ListUsersResponseBodyUsers>> users{};

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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
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
    if (m.find("IsTruncated") != m.end() && !m["IsTruncated"].empty()) {
      isTruncated = make_shared<bool>(boost::any_cast<bool>(m["IsTruncated"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
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
class ProvisionAccessConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetType{};

  ProvisionAccessConfigurationRequest() {}

  explicit ProvisionAccessConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~ProvisionAccessConfigurationRequest() = default;
};
class ProvisionAccessConfigurationResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> accessConfigurationName{};
  shared_ptr<string> status{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetPathName{};
  shared_ptr<string> targetType{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  ProvisionAccessConfigurationResponseBodyTasks() {}

  explicit ProvisionAccessConfigurationResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (accessConfigurationName) {
      res["AccessConfigurationName"] = boost::any(*accessConfigurationName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetPathName) {
      res["TargetPathName"] = boost::any(*targetPathName);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("AccessConfigurationName") != m.end() && !m["AccessConfigurationName"].empty()) {
      accessConfigurationName = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetPathName") != m.end() && !m["TargetPathName"].empty()) {
      targetPathName = make_shared<string>(boost::any_cast<string>(m["TargetPathName"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~ProvisionAccessConfigurationResponseBodyTasks() = default;
};
class ProvisionAccessConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ProvisionAccessConfigurationResponseBodyTasks>> tasks{};

  ProvisionAccessConfigurationResponseBody() {}

  explicit ProvisionAccessConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<ProvisionAccessConfigurationResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ProvisionAccessConfigurationResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ProvisionAccessConfigurationResponseBodyTasks>>(expect1);
      }
    }
  }


  virtual ~ProvisionAccessConfigurationResponseBody() = default;
};
class ProvisionAccessConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ProvisionAccessConfigurationResponseBody> body{};

  ProvisionAccessConfigurationResponse() {}

  explicit ProvisionAccessConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ProvisionAccessConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ProvisionAccessConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~ProvisionAccessConfigurationResponse() = default;
};
class RemoveExternalSAMLIdPCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> directoryId{};

  RemoveExternalSAMLIdPCertificateRequest() {}

  explicit RemoveExternalSAMLIdPCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
  }


  virtual ~RemoveExternalSAMLIdPCertificateRequest() = default;
};
class RemoveExternalSAMLIdPCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveExternalSAMLIdPCertificateResponseBody() {}

  explicit RemoveExternalSAMLIdPCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveExternalSAMLIdPCertificateResponseBody() = default;
};
class RemoveExternalSAMLIdPCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveExternalSAMLIdPCertificateResponseBody> body{};

  RemoveExternalSAMLIdPCertificateResponse() {}

  explicit RemoveExternalSAMLIdPCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveExternalSAMLIdPCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveExternalSAMLIdPCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveExternalSAMLIdPCertificateResponse() = default;
};
class RemovePermissionPolicyFromAccessConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> permissionPolicyName{};
  shared_ptr<string> permissionPolicyType{};

  RemovePermissionPolicyFromAccessConfigurationRequest() {}

  explicit RemovePermissionPolicyFromAccessConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (permissionPolicyName) {
      res["PermissionPolicyName"] = boost::any(*permissionPolicyName);
    }
    if (permissionPolicyType) {
      res["PermissionPolicyType"] = boost::any(*permissionPolicyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("PermissionPolicyName") != m.end() && !m["PermissionPolicyName"].empty()) {
      permissionPolicyName = make_shared<string>(boost::any_cast<string>(m["PermissionPolicyName"]));
    }
    if (m.find("PermissionPolicyType") != m.end() && !m["PermissionPolicyType"].empty()) {
      permissionPolicyType = make_shared<string>(boost::any_cast<string>(m["PermissionPolicyType"]));
    }
  }


  virtual ~RemovePermissionPolicyFromAccessConfigurationRequest() = default;
};
class RemovePermissionPolicyFromAccessConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemovePermissionPolicyFromAccessConfigurationResponseBody() {}

  explicit RemovePermissionPolicyFromAccessConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemovePermissionPolicyFromAccessConfigurationResponseBody() = default;
};
class RemovePermissionPolicyFromAccessConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemovePermissionPolicyFromAccessConfigurationResponseBody> body{};

  RemovePermissionPolicyFromAccessConfigurationResponse() {}

  explicit RemovePermissionPolicyFromAccessConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemovePermissionPolicyFromAccessConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemovePermissionPolicyFromAccessConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~RemovePermissionPolicyFromAccessConfigurationResponse() = default;
};
class RemoveUserFromGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> userId{};

  RemoveUserFromGroupRequest() {}

  explicit RemoveUserFromGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
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
class ResetUserPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<bool> generateRandomPassword{};
  shared_ptr<string> password{};
  shared_ptr<bool> requirePasswordResetForNextLogin{};
  shared_ptr<string> userId{};

  ResetUserPasswordRequest() {}

  explicit ResetUserPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (generateRandomPassword) {
      res["GenerateRandomPassword"] = boost::any(*generateRandomPassword);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (requirePasswordResetForNextLogin) {
      res["RequirePasswordResetForNextLogin"] = boost::any(*requirePasswordResetForNextLogin);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("GenerateRandomPassword") != m.end() && !m["GenerateRandomPassword"].empty()) {
      generateRandomPassword = make_shared<bool>(boost::any_cast<bool>(m["GenerateRandomPassword"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("RequirePasswordResetForNextLogin") != m.end() && !m["RequirePasswordResetForNextLogin"].empty()) {
      requirePasswordResetForNextLogin = make_shared<bool>(boost::any_cast<bool>(m["RequirePasswordResetForNextLogin"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ResetUserPasswordRequest() = default;
};
class ResetUserPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> newPassword{};
  shared_ptr<string> requestId{};

  ResetUserPasswordResponseBody() {}

  explicit ResetUserPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newPassword) {
      res["NewPassword"] = boost::any(*newPassword);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewPassword") != m.end() && !m["NewPassword"].empty()) {
      newPassword = make_shared<string>(boost::any_cast<string>(m["NewPassword"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResetUserPasswordResponseBody() = default;
};
class ResetUserPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetUserPasswordResponseBody> body{};

  ResetUserPasswordResponse() {}

  explicit ResetUserPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetUserPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetUserPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ResetUserPasswordResponse() = default;
};
class RetryUserProvisioningEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> duplicationStrategy{};
  shared_ptr<string> eventId{};

  RetryUserProvisioningEventRequest() {}

  explicit RetryUserProvisioningEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (duplicationStrategy) {
      res["DuplicationStrategy"] = boost::any(*duplicationStrategy);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DuplicationStrategy") != m.end() && !m["DuplicationStrategy"].empty()) {
      duplicationStrategy = make_shared<string>(boost::any_cast<string>(m["DuplicationStrategy"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
  }


  virtual ~RetryUserProvisioningEventRequest() = default;
};
class RetryUserProvisioningEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RetryUserProvisioningEventResponseBody() {}

  explicit RetryUserProvisioningEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RetryUserProvisioningEventResponseBody() = default;
};
class RetryUserProvisioningEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RetryUserProvisioningEventResponseBody> body{};

  RetryUserProvisioningEventResponse() {}

  explicit RetryUserProvisioningEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RetryUserProvisioningEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetryUserProvisioningEventResponseBody>(model1);
      }
    }
  }


  virtual ~RetryUserProvisioningEventResponse() = default;
};
class SetExternalSAMLIdentityProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> bindingType{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> encodedMetadataDocument{};
  shared_ptr<string> entityId{};
  shared_ptr<string> loginUrl{};
  shared_ptr<string> SSOStatus{};
  shared_ptr<bool> wantRequestSigned{};
  shared_ptr<string> x509Certificate{};

  SetExternalSAMLIdentityProviderRequest() {}

  explicit SetExternalSAMLIdentityProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindingType) {
      res["BindingType"] = boost::any(*bindingType);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (encodedMetadataDocument) {
      res["EncodedMetadataDocument"] = boost::any(*encodedMetadataDocument);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (loginUrl) {
      res["LoginUrl"] = boost::any(*loginUrl);
    }
    if (SSOStatus) {
      res["SSOStatus"] = boost::any(*SSOStatus);
    }
    if (wantRequestSigned) {
      res["WantRequestSigned"] = boost::any(*wantRequestSigned);
    }
    if (x509Certificate) {
      res["X509Certificate"] = boost::any(*x509Certificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindingType") != m.end() && !m["BindingType"].empty()) {
      bindingType = make_shared<string>(boost::any_cast<string>(m["BindingType"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EncodedMetadataDocument") != m.end() && !m["EncodedMetadataDocument"].empty()) {
      encodedMetadataDocument = make_shared<string>(boost::any_cast<string>(m["EncodedMetadataDocument"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("LoginUrl") != m.end() && !m["LoginUrl"].empty()) {
      loginUrl = make_shared<string>(boost::any_cast<string>(m["LoginUrl"]));
    }
    if (m.find("SSOStatus") != m.end() && !m["SSOStatus"].empty()) {
      SSOStatus = make_shared<string>(boost::any_cast<string>(m["SSOStatus"]));
    }
    if (m.find("WantRequestSigned") != m.end() && !m["WantRequestSigned"].empty()) {
      wantRequestSigned = make_shared<bool>(boost::any_cast<bool>(m["WantRequestSigned"]));
    }
    if (m.find("X509Certificate") != m.end() && !m["X509Certificate"].empty()) {
      x509Certificate = make_shared<string>(boost::any_cast<string>(m["X509Certificate"]));
    }
  }


  virtual ~SetExternalSAMLIdentityProviderRequest() = default;
};
class SetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> bindingType{};
  shared_ptr<vector<string>> certificateIds{};
  shared_ptr<string> createTime{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> encodedMetadataDocument{};
  shared_ptr<string> entityId{};
  shared_ptr<string> loginUrl{};
  shared_ptr<string> SSOStatus{};
  shared_ptr<string> updateTime{};
  shared_ptr<bool> wantRequestSigned{};

  SetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration() {}

  explicit SetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindingType) {
      res["BindingType"] = boost::any(*bindingType);
    }
    if (certificateIds) {
      res["CertificateIds"] = boost::any(*certificateIds);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (encodedMetadataDocument) {
      res["EncodedMetadataDocument"] = boost::any(*encodedMetadataDocument);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (loginUrl) {
      res["LoginUrl"] = boost::any(*loginUrl);
    }
    if (SSOStatus) {
      res["SSOStatus"] = boost::any(*SSOStatus);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (wantRequestSigned) {
      res["WantRequestSigned"] = boost::any(*wantRequestSigned);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindingType") != m.end() && !m["BindingType"].empty()) {
      bindingType = make_shared<string>(boost::any_cast<string>(m["BindingType"]));
    }
    if (m.find("CertificateIds") != m.end() && !m["CertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      certificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EncodedMetadataDocument") != m.end() && !m["EncodedMetadataDocument"].empty()) {
      encodedMetadataDocument = make_shared<string>(boost::any_cast<string>(m["EncodedMetadataDocument"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("LoginUrl") != m.end() && !m["LoginUrl"].empty()) {
      loginUrl = make_shared<string>(boost::any_cast<string>(m["LoginUrl"]));
    }
    if (m.find("SSOStatus") != m.end() && !m["SSOStatus"].empty()) {
      SSOStatus = make_shared<string>(boost::any_cast<string>(m["SSOStatus"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("WantRequestSigned") != m.end() && !m["WantRequestSigned"].empty()) {
      wantRequestSigned = make_shared<bool>(boost::any_cast<bool>(m["WantRequestSigned"]));
    }
  }


  virtual ~SetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration() = default;
};
class SetExternalSAMLIdentityProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration> SAMLIdentityProviderConfiguration{};

  SetExternalSAMLIdentityProviderResponseBody() {}

  explicit SetExternalSAMLIdentityProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SAMLIdentityProviderConfiguration) {
      res["SAMLIdentityProviderConfiguration"] = SAMLIdentityProviderConfiguration ? boost::any(SAMLIdentityProviderConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SAMLIdentityProviderConfiguration") != m.end() && !m["SAMLIdentityProviderConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["SAMLIdentityProviderConfiguration"].type()) {
        SetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SAMLIdentityProviderConfiguration"]));
        SAMLIdentityProviderConfiguration = make_shared<SetExternalSAMLIdentityProviderResponseBodySAMLIdentityProviderConfiguration>(model1);
      }
    }
  }


  virtual ~SetExternalSAMLIdentityProviderResponseBody() = default;
};
class SetExternalSAMLIdentityProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetExternalSAMLIdentityProviderResponseBody> body{};

  SetExternalSAMLIdentityProviderResponse() {}

  explicit SetExternalSAMLIdentityProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetExternalSAMLIdentityProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetExternalSAMLIdentityProviderResponseBody>(model1);
      }
    }
  }


  virtual ~SetExternalSAMLIdentityProviderResponse() = default;
};
class SetLoginPreferenceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allowUserToGetCredentials{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> loginNetworkMasks{};

  SetLoginPreferenceRequest() {}

  explicit SetLoginPreferenceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowUserToGetCredentials) {
      res["AllowUserToGetCredentials"] = boost::any(*allowUserToGetCredentials);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (loginNetworkMasks) {
      res["LoginNetworkMasks"] = boost::any(*loginNetworkMasks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowUserToGetCredentials") != m.end() && !m["AllowUserToGetCredentials"].empty()) {
      allowUserToGetCredentials = make_shared<bool>(boost::any_cast<bool>(m["AllowUserToGetCredentials"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("LoginNetworkMasks") != m.end() && !m["LoginNetworkMasks"].empty()) {
      loginNetworkMasks = make_shared<string>(boost::any_cast<string>(m["LoginNetworkMasks"]));
    }
  }


  virtual ~SetLoginPreferenceRequest() = default;
};
class SetLoginPreferenceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetLoginPreferenceResponseBody() {}

  explicit SetLoginPreferenceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetLoginPreferenceResponseBody() = default;
};
class SetLoginPreferenceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetLoginPreferenceResponseBody> body{};

  SetLoginPreferenceResponse() {}

  explicit SetLoginPreferenceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetLoginPreferenceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetLoginPreferenceResponseBody>(model1);
      }
    }
  }


  virtual ~SetLoginPreferenceResponse() = default;
};
class SetMFAAuthenticationStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> MFAAuthenticationStatus{};

  SetMFAAuthenticationStatusRequest() {}

  explicit SetMFAAuthenticationStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (MFAAuthenticationStatus) {
      res["MFAAuthenticationStatus"] = boost::any(*MFAAuthenticationStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("MFAAuthenticationStatus") != m.end() && !m["MFAAuthenticationStatus"].empty()) {
      MFAAuthenticationStatus = make_shared<string>(boost::any_cast<string>(m["MFAAuthenticationStatus"]));
    }
  }


  virtual ~SetMFAAuthenticationStatusRequest() = default;
};
class SetMFAAuthenticationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetMFAAuthenticationStatusResponseBody() {}

  explicit SetMFAAuthenticationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetMFAAuthenticationStatusResponseBody() = default;
};
class SetMFAAuthenticationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetMFAAuthenticationStatusResponseBody> body{};

  SetMFAAuthenticationStatusResponse() {}

  explicit SetMFAAuthenticationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetMFAAuthenticationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetMFAAuthenticationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetMFAAuthenticationStatusResponse() = default;
};
class SetPasswordPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<long> maxLoginAttempts{};
  shared_ptr<long> maxPasswordAge{};
  shared_ptr<long> minPasswordDifferentChars{};
  shared_ptr<long> minPasswordLength{};
  shared_ptr<bool> passwordNotContainUsername{};
  shared_ptr<long> passwordReusePrevention{};

  SetPasswordPolicyRequest() {}

  explicit SetPasswordPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (maxLoginAttempts) {
      res["MaxLoginAttempts"] = boost::any(*maxLoginAttempts);
    }
    if (maxPasswordAge) {
      res["MaxPasswordAge"] = boost::any(*maxPasswordAge);
    }
    if (minPasswordDifferentChars) {
      res["MinPasswordDifferentChars"] = boost::any(*minPasswordDifferentChars);
    }
    if (minPasswordLength) {
      res["MinPasswordLength"] = boost::any(*minPasswordLength);
    }
    if (passwordNotContainUsername) {
      res["PasswordNotContainUsername"] = boost::any(*passwordNotContainUsername);
    }
    if (passwordReusePrevention) {
      res["PasswordReusePrevention"] = boost::any(*passwordReusePrevention);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("MaxLoginAttempts") != m.end() && !m["MaxLoginAttempts"].empty()) {
      maxLoginAttempts = make_shared<long>(boost::any_cast<long>(m["MaxLoginAttempts"]));
    }
    if (m.find("MaxPasswordAge") != m.end() && !m["MaxPasswordAge"].empty()) {
      maxPasswordAge = make_shared<long>(boost::any_cast<long>(m["MaxPasswordAge"]));
    }
    if (m.find("MinPasswordDifferentChars") != m.end() && !m["MinPasswordDifferentChars"].empty()) {
      minPasswordDifferentChars = make_shared<long>(boost::any_cast<long>(m["MinPasswordDifferentChars"]));
    }
    if (m.find("MinPasswordLength") != m.end() && !m["MinPasswordLength"].empty()) {
      minPasswordLength = make_shared<long>(boost::any_cast<long>(m["MinPasswordLength"]));
    }
    if (m.find("PasswordNotContainUsername") != m.end() && !m["PasswordNotContainUsername"].empty()) {
      passwordNotContainUsername = make_shared<bool>(boost::any_cast<bool>(m["PasswordNotContainUsername"]));
    }
    if (m.find("PasswordReusePrevention") != m.end() && !m["PasswordReusePrevention"].empty()) {
      passwordReusePrevention = make_shared<long>(boost::any_cast<long>(m["PasswordReusePrevention"]));
    }
  }


  virtual ~SetPasswordPolicyRequest() = default;
};
class SetPasswordPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
class SetSCIMSynchronizationStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> SCIMSynchronizationStatus{};

  SetSCIMSynchronizationStatusRequest() {}

  explicit SetSCIMSynchronizationStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (SCIMSynchronizationStatus) {
      res["SCIMSynchronizationStatus"] = boost::any(*SCIMSynchronizationStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("SCIMSynchronizationStatus") != m.end() && !m["SCIMSynchronizationStatus"].empty()) {
      SCIMSynchronizationStatus = make_shared<string>(boost::any_cast<string>(m["SCIMSynchronizationStatus"]));
    }
  }


  virtual ~SetSCIMSynchronizationStatusRequest() = default;
};
class SetSCIMSynchronizationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetSCIMSynchronizationStatusResponseBody() {}

  explicit SetSCIMSynchronizationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetSCIMSynchronizationStatusResponseBody() = default;
};
class SetSCIMSynchronizationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetSCIMSynchronizationStatusResponseBody> body{};

  SetSCIMSynchronizationStatusResponse() {}

  explicit SetSCIMSynchronizationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetSCIMSynchronizationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetSCIMSynchronizationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetSCIMSynchronizationStatusResponse() = default;
};
class UpdateAccessConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> newDescription{};
  shared_ptr<string> newRelayState{};
  shared_ptr<long> newSessionDuration{};

  UpdateAccessConfigurationRequest() {}

  explicit UpdateAccessConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (newDescription) {
      res["NewDescription"] = boost::any(*newDescription);
    }
    if (newRelayState) {
      res["NewRelayState"] = boost::any(*newRelayState);
    }
    if (newSessionDuration) {
      res["NewSessionDuration"] = boost::any(*newSessionDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("NewDescription") != m.end() && !m["NewDescription"].empty()) {
      newDescription = make_shared<string>(boost::any_cast<string>(m["NewDescription"]));
    }
    if (m.find("NewRelayState") != m.end() && !m["NewRelayState"].empty()) {
      newRelayState = make_shared<string>(boost::any_cast<string>(m["NewRelayState"]));
    }
    if (m.find("NewSessionDuration") != m.end() && !m["NewSessionDuration"].empty()) {
      newSessionDuration = make_shared<long>(boost::any_cast<long>(m["NewSessionDuration"]));
    }
  }


  virtual ~UpdateAccessConfigurationRequest() = default;
};
class UpdateAccessConfigurationResponseBodyAccessConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> accessConfigurationName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> relayState{};
  shared_ptr<long> sessionDuration{};
  shared_ptr<vector<string>> statusNotifications{};
  shared_ptr<string> updateTime{};

  UpdateAccessConfigurationResponseBodyAccessConfiguration() {}

  explicit UpdateAccessConfigurationResponseBodyAccessConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (accessConfigurationName) {
      res["AccessConfigurationName"] = boost::any(*accessConfigurationName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (relayState) {
      res["RelayState"] = boost::any(*relayState);
    }
    if (sessionDuration) {
      res["SessionDuration"] = boost::any(*sessionDuration);
    }
    if (statusNotifications) {
      res["StatusNotifications"] = boost::any(*statusNotifications);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("AccessConfigurationName") != m.end() && !m["AccessConfigurationName"].empty()) {
      accessConfigurationName = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RelayState") != m.end() && !m["RelayState"].empty()) {
      relayState = make_shared<string>(boost::any_cast<string>(m["RelayState"]));
    }
    if (m.find("SessionDuration") != m.end() && !m["SessionDuration"].empty()) {
      sessionDuration = make_shared<long>(boost::any_cast<long>(m["SessionDuration"]));
    }
    if (m.find("StatusNotifications") != m.end() && !m["StatusNotifications"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StatusNotifications"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StatusNotifications"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusNotifications = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~UpdateAccessConfigurationResponseBodyAccessConfiguration() = default;
};
class UpdateAccessConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateAccessConfigurationResponseBodyAccessConfiguration> accessConfiguration{};
  shared_ptr<string> requestId{};

  UpdateAccessConfigurationResponseBody() {}

  explicit UpdateAccessConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfiguration) {
      res["AccessConfiguration"] = accessConfiguration ? boost::any(accessConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfiguration") != m.end() && !m["AccessConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessConfiguration"].type()) {
        UpdateAccessConfigurationResponseBodyAccessConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessConfiguration"]));
        accessConfiguration = make_shared<UpdateAccessConfigurationResponseBodyAccessConfiguration>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAccessConfigurationResponseBody() = default;
};
class UpdateAccessConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAccessConfigurationResponseBody> body{};

  UpdateAccessConfigurationResponse() {}

  explicit UpdateAccessConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAccessConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAccessConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAccessConfigurationResponse() = default;
};
class UpdateDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> newDirectoryName{};

  UpdateDirectoryRequest() {}

  explicit UpdateDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (newDirectoryName) {
      res["NewDirectoryName"] = boost::any(*newDirectoryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("NewDirectoryName") != m.end() && !m["NewDirectoryName"].empty()) {
      newDirectoryName = make_shared<string>(boost::any_cast<string>(m["NewDirectoryName"]));
    }
  }


  virtual ~UpdateDirectoryRequest() = default;
};
class UpdateDirectoryResponseBodyDirectory : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> directoryName{};
  shared_ptr<string> region{};
  shared_ptr<string> updateTime{};

  UpdateDirectoryResponseBodyDirectory() {}

  explicit UpdateDirectoryResponseBodyDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (directoryName) {
      res["DirectoryName"] = boost::any(*directoryName);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DirectoryName") != m.end() && !m["DirectoryName"].empty()) {
      directoryName = make_shared<string>(boost::any_cast<string>(m["DirectoryName"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~UpdateDirectoryResponseBodyDirectory() = default;
};
class UpdateDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateDirectoryResponseBodyDirectory> directory{};
  shared_ptr<string> requestId{};

  UpdateDirectoryResponseBody() {}

  explicit UpdateDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directory) {
      res["Directory"] = directory ? boost::any(directory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Directory"].type()) {
        UpdateDirectoryResponseBodyDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Directory"]));
        directory = make_shared<UpdateDirectoryResponseBodyDirectory>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDirectoryResponseBody() = default;
};
class UpdateDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDirectoryResponseBody> body{};

  UpdateDirectoryResponse() {}

  explicit UpdateDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDirectoryResponse() = default;
};
class UpdateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> newDescription{};
  shared_ptr<string> newGroupName{};

  UpdateGroupRequest() {}

  explicit UpdateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (newDescription) {
      res["NewDescription"] = boost::any(*newDescription);
    }
    if (newGroupName) {
      res["NewGroupName"] = boost::any(*newGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("NewDescription") != m.end() && !m["NewDescription"].empty()) {
      newDescription = make_shared<string>(boost::any_cast<string>(m["NewDescription"]));
    }
    if (m.find("NewGroupName") != m.end() && !m["NewGroupName"].empty()) {
      newGroupName = make_shared<string>(boost::any_cast<string>(m["NewGroupName"]));
    }
  }


  virtual ~UpdateGroupRequest() = default;
};
class UpdateGroupResponseBodyGroup : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> provisionType{};
  shared_ptr<string> updateTime{};

  UpdateGroupResponseBodyGroup() {}

  explicit UpdateGroupResponseBodyGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
class UpdateInlinePolicyForAccessConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessConfigurationId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> inlinePolicyName{};
  shared_ptr<string> newInlinePolicyDocument{};

  UpdateInlinePolicyForAccessConfigurationRequest() {}

  explicit UpdateInlinePolicyForAccessConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessConfigurationId) {
      res["AccessConfigurationId"] = boost::any(*accessConfigurationId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (inlinePolicyName) {
      res["InlinePolicyName"] = boost::any(*inlinePolicyName);
    }
    if (newInlinePolicyDocument) {
      res["NewInlinePolicyDocument"] = boost::any(*newInlinePolicyDocument);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessConfigurationId") != m.end() && !m["AccessConfigurationId"].empty()) {
      accessConfigurationId = make_shared<string>(boost::any_cast<string>(m["AccessConfigurationId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("InlinePolicyName") != m.end() && !m["InlinePolicyName"].empty()) {
      inlinePolicyName = make_shared<string>(boost::any_cast<string>(m["InlinePolicyName"]));
    }
    if (m.find("NewInlinePolicyDocument") != m.end() && !m["NewInlinePolicyDocument"].empty()) {
      newInlinePolicyDocument = make_shared<string>(boost::any_cast<string>(m["NewInlinePolicyDocument"]));
    }
  }


  virtual ~UpdateInlinePolicyForAccessConfigurationRequest() = default;
};
class UpdateInlinePolicyForAccessConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateInlinePolicyForAccessConfigurationResponseBody() {}

  explicit UpdateInlinePolicyForAccessConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateInlinePolicyForAccessConfigurationResponseBody() = default;
};
class UpdateInlinePolicyForAccessConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInlinePolicyForAccessConfigurationResponseBody> body{};

  UpdateInlinePolicyForAccessConfigurationResponse() {}

  explicit UpdateInlinePolicyForAccessConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInlinePolicyForAccessConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInlinePolicyForAccessConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInlinePolicyForAccessConfigurationResponse() = default;
};
class UpdateMFAAuthenticationSettingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> MFAAuthenticationSettings{};
  shared_ptr<string> operationForRiskLogin{};

  UpdateMFAAuthenticationSettingsRequest() {}

  explicit UpdateMFAAuthenticationSettingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (MFAAuthenticationSettings) {
      res["MFAAuthenticationSettings"] = boost::any(*MFAAuthenticationSettings);
    }
    if (operationForRiskLogin) {
      res["OperationForRiskLogin"] = boost::any(*operationForRiskLogin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("MFAAuthenticationSettings") != m.end() && !m["MFAAuthenticationSettings"].empty()) {
      MFAAuthenticationSettings = make_shared<string>(boost::any_cast<string>(m["MFAAuthenticationSettings"]));
    }
    if (m.find("OperationForRiskLogin") != m.end() && !m["OperationForRiskLogin"].empty()) {
      operationForRiskLogin = make_shared<string>(boost::any_cast<string>(m["OperationForRiskLogin"]));
    }
  }


  virtual ~UpdateMFAAuthenticationSettingsRequest() = default;
};
class UpdateMFAAuthenticationSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateMFAAuthenticationSettingsResponseBody() {}

  explicit UpdateMFAAuthenticationSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateMFAAuthenticationSettingsResponseBody() = default;
};
class UpdateMFAAuthenticationSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMFAAuthenticationSettingsResponseBody> body{};

  UpdateMFAAuthenticationSettingsResponse() {}

  explicit UpdateMFAAuthenticationSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMFAAuthenticationSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMFAAuthenticationSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMFAAuthenticationSettingsResponse() = default;
};
class UpdateSCIMServerCredentialStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> newStatus{};

  UpdateSCIMServerCredentialStatusRequest() {}

  explicit UpdateSCIMServerCredentialStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialId) {
      res["CredentialId"] = boost::any(*credentialId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (newStatus) {
      res["NewStatus"] = boost::any(*newStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialId") != m.end() && !m["CredentialId"].empty()) {
      credentialId = make_shared<string>(boost::any_cast<string>(m["CredentialId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("NewStatus") != m.end() && !m["NewStatus"].empty()) {
      newStatus = make_shared<string>(boost::any_cast<string>(m["NewStatus"]));
    }
  }


  virtual ~UpdateSCIMServerCredentialStatusRequest() = default;
};
class UpdateSCIMServerCredentialStatusResponseBodySCIMServerCredential : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> credentialId{};
  shared_ptr<string> credentialType{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> status{};

  UpdateSCIMServerCredentialStatusResponseBodySCIMServerCredential() {}

  explicit UpdateSCIMServerCredentialStatusResponseBodySCIMServerCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (credentialId) {
      res["CredentialId"] = boost::any(*credentialId);
    }
    if (credentialType) {
      res["CredentialType"] = boost::any(*credentialType);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CredentialId") != m.end() && !m["CredentialId"].empty()) {
      credentialId = make_shared<string>(boost::any_cast<string>(m["CredentialId"]));
    }
    if (m.find("CredentialType") != m.end() && !m["CredentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["CredentialType"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateSCIMServerCredentialStatusResponseBodySCIMServerCredential() = default;
};
class UpdateSCIMServerCredentialStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateSCIMServerCredentialStatusResponseBodySCIMServerCredential> SCIMServerCredential{};

  UpdateSCIMServerCredentialStatusResponseBody() {}

  explicit UpdateSCIMServerCredentialStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SCIMServerCredential) {
      res["SCIMServerCredential"] = SCIMServerCredential ? boost::any(SCIMServerCredential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SCIMServerCredential") != m.end() && !m["SCIMServerCredential"].empty()) {
      if (typeid(map<string, boost::any>) == m["SCIMServerCredential"].type()) {
        UpdateSCIMServerCredentialStatusResponseBodySCIMServerCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SCIMServerCredential"]));
        SCIMServerCredential = make_shared<UpdateSCIMServerCredentialStatusResponseBodySCIMServerCredential>(model1);
      }
    }
  }


  virtual ~UpdateSCIMServerCredentialStatusResponseBody() = default;
};
class UpdateSCIMServerCredentialStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSCIMServerCredentialStatusResponseBody> body{};

  UpdateSCIMServerCredentialStatusResponse() {}

  explicit UpdateSCIMServerCredentialStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSCIMServerCredentialStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSCIMServerCredentialStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSCIMServerCredentialStatusResponse() = default;
};
class UpdateUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> newDescription{};
  shared_ptr<string> newDisplayName{};
  shared_ptr<string> newEmail{};
  shared_ptr<string> newFirstName{};
  shared_ptr<string> newLastName{};
  shared_ptr<string> userId{};

  UpdateUserRequest() {}

  explicit UpdateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (newDescription) {
      res["NewDescription"] = boost::any(*newDescription);
    }
    if (newDisplayName) {
      res["NewDisplayName"] = boost::any(*newDisplayName);
    }
    if (newEmail) {
      res["NewEmail"] = boost::any(*newEmail);
    }
    if (newFirstName) {
      res["NewFirstName"] = boost::any(*newFirstName);
    }
    if (newLastName) {
      res["NewLastName"] = boost::any(*newLastName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("NewDescription") != m.end() && !m["NewDescription"].empty()) {
      newDescription = make_shared<string>(boost::any_cast<string>(m["NewDescription"]));
    }
    if (m.find("NewDisplayName") != m.end() && !m["NewDisplayName"].empty()) {
      newDisplayName = make_shared<string>(boost::any_cast<string>(m["NewDisplayName"]));
    }
    if (m.find("NewEmail") != m.end() && !m["NewEmail"].empty()) {
      newEmail = make_shared<string>(boost::any_cast<string>(m["NewEmail"]));
    }
    if (m.find("NewFirstName") != m.end() && !m["NewFirstName"].empty()) {
      newFirstName = make_shared<string>(boost::any_cast<string>(m["NewFirstName"]));
    }
    if (m.find("NewLastName") != m.end() && !m["NewLastName"].empty()) {
      newLastName = make_shared<string>(boost::any_cast<string>(m["NewLastName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateUserRequest() = default;
};
class UpdateUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> displayName{};
  shared_ptr<string> email{};
  shared_ptr<string> firstName{};
  shared_ptr<string> lastName{};
  shared_ptr<string> provisionType{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  UpdateUserResponseBodyUser() {}

  explicit UpdateUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (firstName) {
      res["FirstName"] = boost::any(*firstName);
    }
    if (lastName) {
      res["LastName"] = boost::any(*lastName);
    }
    if (provisionType) {
      res["ProvisionType"] = boost::any(*provisionType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("FirstName") != m.end() && !m["FirstName"].empty()) {
      firstName = make_shared<string>(boost::any_cast<string>(m["FirstName"]));
    }
    if (m.find("LastName") != m.end() && !m["LastName"].empty()) {
      lastName = make_shared<string>(boost::any_cast<string>(m["LastName"]));
    }
    if (m.find("ProvisionType") != m.end() && !m["ProvisionType"].empty()) {
      provisionType = make_shared<string>(boost::any_cast<string>(m["ProvisionType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
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
class UpdateUserMFAAuthenticationSettingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userMFAAuthenticationSettings{};

  UpdateUserMFAAuthenticationSettingsRequest() {}

  explicit UpdateUserMFAAuthenticationSettingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userMFAAuthenticationSettings) {
      res["UserMFAAuthenticationSettings"] = boost::any(*userMFAAuthenticationSettings);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserMFAAuthenticationSettings") != m.end() && !m["UserMFAAuthenticationSettings"].empty()) {
      userMFAAuthenticationSettings = make_shared<string>(boost::any_cast<string>(m["UserMFAAuthenticationSettings"]));
    }
  }


  virtual ~UpdateUserMFAAuthenticationSettingsRequest() = default;
};
class UpdateUserMFAAuthenticationSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateUserMFAAuthenticationSettingsResponseBody() {}

  explicit UpdateUserMFAAuthenticationSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateUserMFAAuthenticationSettingsResponseBody() = default;
};
class UpdateUserMFAAuthenticationSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserMFAAuthenticationSettingsResponseBody> body{};

  UpdateUserMFAAuthenticationSettingsResponse() {}

  explicit UpdateUserMFAAuthenticationSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserMFAAuthenticationSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserMFAAuthenticationSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserMFAAuthenticationSettingsResponse() = default;
};
class UpdateUserProvisioningRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> newDeletionStrategy{};
  shared_ptr<string> newDescription{};
  shared_ptr<string> newDuplicationStrategy{};
  shared_ptr<string> userProvisioningId{};

  UpdateUserProvisioningRequest() {}

  explicit UpdateUserProvisioningRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (newDeletionStrategy) {
      res["NewDeletionStrategy"] = boost::any(*newDeletionStrategy);
    }
    if (newDescription) {
      res["NewDescription"] = boost::any(*newDescription);
    }
    if (newDuplicationStrategy) {
      res["NewDuplicationStrategy"] = boost::any(*newDuplicationStrategy);
    }
    if (userProvisioningId) {
      res["UserProvisioningId"] = boost::any(*userProvisioningId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("NewDeletionStrategy") != m.end() && !m["NewDeletionStrategy"].empty()) {
      newDeletionStrategy = make_shared<string>(boost::any_cast<string>(m["NewDeletionStrategy"]));
    }
    if (m.find("NewDescription") != m.end() && !m["NewDescription"].empty()) {
      newDescription = make_shared<string>(boost::any_cast<string>(m["NewDescription"]));
    }
    if (m.find("NewDuplicationStrategy") != m.end() && !m["NewDuplicationStrategy"].empty()) {
      newDuplicationStrategy = make_shared<string>(boost::any_cast<string>(m["NewDuplicationStrategy"]));
    }
    if (m.find("UserProvisioningId") != m.end() && !m["UserProvisioningId"].empty()) {
      userProvisioningId = make_shared<string>(boost::any_cast<string>(m["UserProvisioningId"]));
    }
  }


  virtual ~UpdateUserProvisioningRequest() = default;
};
class UpdateUserProvisioningResponseBodyUserProvisioning : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> deletionStrategy{};
  shared_ptr<string> description{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> duplicationStrategy{};
  shared_ptr<string> ownerPk{};
  shared_ptr<string> principalId{};
  shared_ptr<string> principalName{};
  shared_ptr<string> principalType{};
  shared_ptr<string> status{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetType{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userProvisioningId{};

  UpdateUserProvisioningResponseBodyUserProvisioning() {}

  explicit UpdateUserProvisioningResponseBodyUserProvisioning(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deletionStrategy) {
      res["DeletionStrategy"] = boost::any(*deletionStrategy);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (duplicationStrategy) {
      res["DuplicationStrategy"] = boost::any(*duplicationStrategy);
    }
    if (ownerPk) {
      res["OwnerPk"] = boost::any(*ownerPk);
    }
    if (principalId) {
      res["PrincipalId"] = boost::any(*principalId);
    }
    if (principalName) {
      res["PrincipalName"] = boost::any(*principalName);
    }
    if (principalType) {
      res["PrincipalType"] = boost::any(*principalType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userProvisioningId) {
      res["UserProvisioningId"] = boost::any(*userProvisioningId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeletionStrategy") != m.end() && !m["DeletionStrategy"].empty()) {
      deletionStrategy = make_shared<string>(boost::any_cast<string>(m["DeletionStrategy"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DuplicationStrategy") != m.end() && !m["DuplicationStrategy"].empty()) {
      duplicationStrategy = make_shared<string>(boost::any_cast<string>(m["DuplicationStrategy"]));
    }
    if (m.find("OwnerPk") != m.end() && !m["OwnerPk"].empty()) {
      ownerPk = make_shared<string>(boost::any_cast<string>(m["OwnerPk"]));
    }
    if (m.find("PrincipalId") != m.end() && !m["PrincipalId"].empty()) {
      principalId = make_shared<string>(boost::any_cast<string>(m["PrincipalId"]));
    }
    if (m.find("PrincipalName") != m.end() && !m["PrincipalName"].empty()) {
      principalName = make_shared<string>(boost::any_cast<string>(m["PrincipalName"]));
    }
    if (m.find("PrincipalType") != m.end() && !m["PrincipalType"].empty()) {
      principalType = make_shared<string>(boost::any_cast<string>(m["PrincipalType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserProvisioningId") != m.end() && !m["UserProvisioningId"].empty()) {
      userProvisioningId = make_shared<string>(boost::any_cast<string>(m["UserProvisioningId"]));
    }
  }


  virtual ~UpdateUserProvisioningResponseBodyUserProvisioning() = default;
};
class UpdateUserProvisioningResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateUserProvisioningResponseBodyUserProvisioning> userProvisioning{};

  UpdateUserProvisioningResponseBody() {}

  explicit UpdateUserProvisioningResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userProvisioning) {
      res["UserProvisioning"] = userProvisioning ? boost::any(userProvisioning->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserProvisioning") != m.end() && !m["UserProvisioning"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserProvisioning"].type()) {
        UpdateUserProvisioningResponseBodyUserProvisioning model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserProvisioning"]));
        userProvisioning = make_shared<UpdateUserProvisioningResponseBodyUserProvisioning>(model1);
      }
    }
  }


  virtual ~UpdateUserProvisioningResponseBody() = default;
};
class UpdateUserProvisioningResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserProvisioningResponseBody> body{};

  UpdateUserProvisioningResponse() {}

  explicit UpdateUserProvisioningResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserProvisioningResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserProvisioningResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserProvisioningResponse() = default;
};
class UpdateUserProvisioningConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> newDefaultLandingPage{};
  shared_ptr<long> newSessionDuration{};

  UpdateUserProvisioningConfigurationRequest() {}

  explicit UpdateUserProvisioningConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (newDefaultLandingPage) {
      res["NewDefaultLandingPage"] = boost::any(*newDefaultLandingPage);
    }
    if (newSessionDuration) {
      res["NewSessionDuration"] = boost::any(*newSessionDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("NewDefaultLandingPage") != m.end() && !m["NewDefaultLandingPage"].empty()) {
      newDefaultLandingPage = make_shared<string>(boost::any_cast<string>(m["NewDefaultLandingPage"]));
    }
    if (m.find("NewSessionDuration") != m.end() && !m["NewSessionDuration"].empty()) {
      newSessionDuration = make_shared<long>(boost::any_cast<long>(m["NewSessionDuration"]));
    }
  }


  virtual ~UpdateUserProvisioningConfigurationRequest() = default;
};
class UpdateUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> defaultLandingPage{};
  shared_ptr<string> directoryId{};
  shared_ptr<long> sessionDuration{};
  shared_ptr<string> updateTime{};

  UpdateUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration() {}

  explicit UpdateUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (defaultLandingPage) {
      res["DefaultLandingPage"] = boost::any(*defaultLandingPage);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (sessionDuration) {
      res["SessionDuration"] = boost::any(*sessionDuration);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DefaultLandingPage") != m.end() && !m["DefaultLandingPage"].empty()) {
      defaultLandingPage = make_shared<string>(boost::any_cast<string>(m["DefaultLandingPage"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("SessionDuration") != m.end() && !m["SessionDuration"].empty()) {
      sessionDuration = make_shared<long>(boost::any_cast<long>(m["SessionDuration"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~UpdateUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration() = default;
};
class UpdateUserProvisioningConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration> userProvisioningConfiguration{};

  UpdateUserProvisioningConfigurationResponseBody() {}

  explicit UpdateUserProvisioningConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userProvisioningConfiguration) {
      res["UserProvisioningConfiguration"] = userProvisioningConfiguration ? boost::any(userProvisioningConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserProvisioningConfiguration") != m.end() && !m["UserProvisioningConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserProvisioningConfiguration"].type()) {
        UpdateUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserProvisioningConfiguration"]));
        userProvisioningConfiguration = make_shared<UpdateUserProvisioningConfigurationResponseBodyUserProvisioningConfiguration>(model1);
      }
    }
  }


  virtual ~UpdateUserProvisioningConfigurationResponseBody() = default;
};
class UpdateUserProvisioningConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserProvisioningConfigurationResponseBody> body{};

  UpdateUserProvisioningConfigurationResponse() {}

  explicit UpdateUserProvisioningConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserProvisioningConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserProvisioningConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserProvisioningConfigurationResponse() = default;
};
class UpdateUserStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> newStatus{};
  shared_ptr<string> userId{};

  UpdateUserStatusRequest() {}

  explicit UpdateUserStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (newStatus) {
      res["NewStatus"] = boost::any(*newStatus);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("NewStatus") != m.end() && !m["NewStatus"].empty()) {
      newStatus = make_shared<string>(boost::any_cast<string>(m["NewStatus"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateUserStatusRequest() = default;
};
class UpdateUserStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateUserStatusResponseBody() {}

  explicit UpdateUserStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateUserStatusResponseBody() = default;
};
class UpdateUserStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserStatusResponseBody> body{};

  UpdateUserStatusResponse() {}

  explicit UpdateUserStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserStatusResponse() = default;
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
  AddExternalSAMLIdPCertificateResponse addExternalSAMLIdPCertificateWithOptions(shared_ptr<AddExternalSAMLIdPCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddExternalSAMLIdPCertificateResponse addExternalSAMLIdPCertificate(shared_ptr<AddExternalSAMLIdPCertificateRequest> request);
  AddPermissionPolicyToAccessConfigurationResponse addPermissionPolicyToAccessConfigurationWithOptions(shared_ptr<AddPermissionPolicyToAccessConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddPermissionPolicyToAccessConfigurationResponse addPermissionPolicyToAccessConfiguration(shared_ptr<AddPermissionPolicyToAccessConfigurationRequest> request);
  AddUserToGroupResponse addUserToGroupWithOptions(shared_ptr<AddUserToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserToGroupResponse addUserToGroup(shared_ptr<AddUserToGroupRequest> request);
  ClearExternalSAMLIdentityProviderResponse clearExternalSAMLIdentityProviderWithOptions(shared_ptr<ClearExternalSAMLIdentityProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClearExternalSAMLIdentityProviderResponse clearExternalSAMLIdentityProvider(shared_ptr<ClearExternalSAMLIdentityProviderRequest> request);
  CreateAccessAssignmentResponse createAccessAssignmentWithOptions(shared_ptr<CreateAccessAssignmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessAssignmentResponse createAccessAssignment(shared_ptr<CreateAccessAssignmentRequest> request);
  CreateAccessConfigurationResponse createAccessConfigurationWithOptions(shared_ptr<CreateAccessConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessConfigurationResponse createAccessConfiguration(shared_ptr<CreateAccessConfigurationRequest> request);
  CreateDirectoryResponse createDirectoryWithOptions(shared_ptr<CreateDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDirectoryResponse createDirectory(shared_ptr<CreateDirectoryRequest> request);
  CreateGroupResponse createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupResponse createGroup(shared_ptr<CreateGroupRequest> request);
  CreateSCIMServerCredentialResponse createSCIMServerCredentialWithOptions(shared_ptr<CreateSCIMServerCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSCIMServerCredentialResponse createSCIMServerCredential(shared_ptr<CreateSCIMServerCredentialRequest> request);
  CreateUserResponse createUserWithOptions(shared_ptr<CreateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserResponse createUser(shared_ptr<CreateUserRequest> request);
  CreateUserProvisioningResponse createUserProvisioningWithOptions(shared_ptr<CreateUserProvisioningRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserProvisioningResponse createUserProvisioning(shared_ptr<CreateUserProvisioningRequest> request);
  DeleteAccessAssignmentResponse deleteAccessAssignmentWithOptions(shared_ptr<DeleteAccessAssignmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessAssignmentResponse deleteAccessAssignment(shared_ptr<DeleteAccessAssignmentRequest> request);
  DeleteAccessConfigurationResponse deleteAccessConfigurationWithOptions(shared_ptr<DeleteAccessConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccessConfigurationResponse deleteAccessConfiguration(shared_ptr<DeleteAccessConfigurationRequest> request);
  DeleteDirectoryResponse deleteDirectoryWithOptions(shared_ptr<DeleteDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDirectoryResponse deleteDirectory(shared_ptr<DeleteDirectoryRequest> request);
  DeleteGroupResponse deleteGroupWithOptions(shared_ptr<DeleteGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupResponse deleteGroup(shared_ptr<DeleteGroupRequest> request);
  DeleteMFADeviceForUserResponse deleteMFADeviceForUserWithOptions(shared_ptr<DeleteMFADeviceForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMFADeviceForUserResponse deleteMFADeviceForUser(shared_ptr<DeleteMFADeviceForUserRequest> request);
  DeleteSCIMServerCredentialResponse deleteSCIMServerCredentialWithOptions(shared_ptr<DeleteSCIMServerCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSCIMServerCredentialResponse deleteSCIMServerCredential(shared_ptr<DeleteSCIMServerCredentialRequest> request);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<DeleteUserRequest> request);
  DeleteUserProvisioningResponse deleteUserProvisioningWithOptions(shared_ptr<DeleteUserProvisioningRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserProvisioningResponse deleteUserProvisioning(shared_ptr<DeleteUserProvisioningRequest> request);
  DeleteUserProvisioningEventResponse deleteUserProvisioningEventWithOptions(shared_ptr<DeleteUserProvisioningEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserProvisioningEventResponse deleteUserProvisioningEvent(shared_ptr<DeleteUserProvisioningEventRequest> request);
  DeprovisionAccessConfigurationResponse deprovisionAccessConfigurationWithOptions(shared_ptr<DeprovisionAccessConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeprovisionAccessConfigurationResponse deprovisionAccessConfiguration(shared_ptr<DeprovisionAccessConfigurationRequest> request);
  DisableDelegateAccountResponse disableDelegateAccountWithOptions(shared_ptr<DisableDelegateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableDelegateAccountResponse disableDelegateAccount(shared_ptr<DisableDelegateAccountRequest> request);
  DisableServiceResponse disableServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableServiceResponse disableService();
  EnableDelegateAccountResponse enableDelegateAccountWithOptions(shared_ptr<EnableDelegateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableDelegateAccountResponse enableDelegateAccount(shared_ptr<EnableDelegateAccountRequest> request);
  EnableServiceResponse enableServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableServiceResponse enableService();
  GetAccessConfigurationResponse getAccessConfigurationWithOptions(shared_ptr<GetAccessConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccessConfigurationResponse getAccessConfiguration(shared_ptr<GetAccessConfigurationRequest> request);
  GetDirectoryResponse getDirectoryWithOptions(shared_ptr<GetDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDirectoryResponse getDirectory(shared_ptr<GetDirectoryRequest> request);
  GetDirectorySAMLServiceProviderInfoResponse getDirectorySAMLServiceProviderInfoWithOptions(shared_ptr<GetDirectorySAMLServiceProviderInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDirectorySAMLServiceProviderInfoResponse getDirectorySAMLServiceProviderInfo(shared_ptr<GetDirectorySAMLServiceProviderInfoRequest> request);
  GetDirectoryStatisticsResponse getDirectoryStatisticsWithOptions(shared_ptr<GetDirectoryStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDirectoryStatisticsResponse getDirectoryStatistics(shared_ptr<GetDirectoryStatisticsRequest> request);
  GetExternalSAMLIdentityProviderResponse getExternalSAMLIdentityProviderWithOptions(shared_ptr<GetExternalSAMLIdentityProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetExternalSAMLIdentityProviderResponse getExternalSAMLIdentityProvider(shared_ptr<GetExternalSAMLIdentityProviderRequest> request);
  GetGroupResponse getGroupWithOptions(shared_ptr<GetGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGroupResponse getGroup(shared_ptr<GetGroupRequest> request);
  GetLoginPreferenceResponse getLoginPreferenceWithOptions(shared_ptr<GetLoginPreferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLoginPreferenceResponse getLoginPreference(shared_ptr<GetLoginPreferenceRequest> request);
  GetMFAAuthenticationSettingInfoResponse getMFAAuthenticationSettingInfoWithOptions(shared_ptr<GetMFAAuthenticationSettingInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMFAAuthenticationSettingInfoResponse getMFAAuthenticationSettingInfo(shared_ptr<GetMFAAuthenticationSettingInfoRequest> request);
  GetMFAAuthenticationSettingsResponse getMFAAuthenticationSettingsWithOptions(shared_ptr<GetMFAAuthenticationSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMFAAuthenticationSettingsResponse getMFAAuthenticationSettings(shared_ptr<GetMFAAuthenticationSettingsRequest> request);
  GetMFAAuthenticationStatusResponse getMFAAuthenticationStatusWithOptions(shared_ptr<GetMFAAuthenticationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMFAAuthenticationStatusResponse getMFAAuthenticationStatus(shared_ptr<GetMFAAuthenticationStatusRequest> request);
  GetPasswordPolicyResponse getPasswordPolicyWithOptions(shared_ptr<GetPasswordPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPasswordPolicyResponse getPasswordPolicy(shared_ptr<GetPasswordPolicyRequest> request);
  GetSCIMSynchronizationStatusResponse getSCIMSynchronizationStatusWithOptions(shared_ptr<GetSCIMSynchronizationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSCIMSynchronizationStatusResponse getSCIMSynchronizationStatus(shared_ptr<GetSCIMSynchronizationStatusRequest> request);
  GetServiceStatusResponse getServiceStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceStatusResponse getServiceStatus();
  GetTaskResponse getTaskWithOptions(shared_ptr<GetTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResponse getTask(shared_ptr<GetTaskRequest> request);
  GetTaskStatusResponse getTaskStatusWithOptions(shared_ptr<GetTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskStatusResponse getTaskStatus(shared_ptr<GetTaskStatusRequest> request);
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  GetUserIdResponse getUserIdWithOptions(shared_ptr<GetUserIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserIdResponse getUserId(shared_ptr<GetUserIdRequest> request);
  GetUserMFAAuthenticationSettingsResponse getUserMFAAuthenticationSettingsWithOptions(shared_ptr<GetUserMFAAuthenticationSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserMFAAuthenticationSettingsResponse getUserMFAAuthenticationSettings(shared_ptr<GetUserMFAAuthenticationSettingsRequest> request);
  GetUserProvisioningResponse getUserProvisioningWithOptions(shared_ptr<GetUserProvisioningRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserProvisioningResponse getUserProvisioning(shared_ptr<GetUserProvisioningRequest> request);
  GetUserProvisioningConfigurationResponse getUserProvisioningConfigurationWithOptions(shared_ptr<GetUserProvisioningConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserProvisioningConfigurationResponse getUserProvisioningConfiguration(shared_ptr<GetUserProvisioningConfigurationRequest> request);
  GetUserProvisioningEventResponse getUserProvisioningEventWithOptions(shared_ptr<GetUserProvisioningEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserProvisioningEventResponse getUserProvisioningEvent(shared_ptr<GetUserProvisioningEventRequest> request);
  GetUserProvisioningRdAccountStatisticsResponse getUserProvisioningRdAccountStatisticsWithOptions(shared_ptr<GetUserProvisioningRdAccountStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserProvisioningRdAccountStatisticsResponse getUserProvisioningRdAccountStatistics(shared_ptr<GetUserProvisioningRdAccountStatisticsRequest> request);
  GetUserProvisioningStatisticsResponse getUserProvisioningStatisticsWithOptions(shared_ptr<GetUserProvisioningStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserProvisioningStatisticsResponse getUserProvisioningStatistics(shared_ptr<GetUserProvisioningStatisticsRequest> request);
  ListAccessAssignmentsResponse listAccessAssignmentsWithOptions(shared_ptr<ListAccessAssignmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccessAssignmentsResponse listAccessAssignments(shared_ptr<ListAccessAssignmentsRequest> request);
  ListAccessConfigurationProvisioningsResponse listAccessConfigurationProvisioningsWithOptions(shared_ptr<ListAccessConfigurationProvisioningsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccessConfigurationProvisioningsResponse listAccessConfigurationProvisionings(shared_ptr<ListAccessConfigurationProvisioningsRequest> request);
  ListAccessConfigurationsResponse listAccessConfigurationsWithOptions(shared_ptr<ListAccessConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAccessConfigurationsResponse listAccessConfigurations(shared_ptr<ListAccessConfigurationsRequest> request);
  ListDirectoriesResponse listDirectoriesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDirectoriesResponse listDirectories();
  ListExternalSAMLIdPCertificatesResponse listExternalSAMLIdPCertificatesWithOptions(shared_ptr<ListExternalSAMLIdPCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExternalSAMLIdPCertificatesResponse listExternalSAMLIdPCertificates(shared_ptr<ListExternalSAMLIdPCertificatesRequest> request);
  ListGroupMembersResponse listGroupMembersWithOptions(shared_ptr<ListGroupMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupMembersResponse listGroupMembers(shared_ptr<ListGroupMembersRequest> request);
  ListGroupsResponse listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsResponse listGroups(shared_ptr<ListGroupsRequest> request);
  ListJoinedGroupsForUserResponse listJoinedGroupsForUserWithOptions(shared_ptr<ListJoinedGroupsForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJoinedGroupsForUserResponse listJoinedGroupsForUser(shared_ptr<ListJoinedGroupsForUserRequest> request);
  ListMFADevicesForUserResponse listMFADevicesForUserWithOptions(shared_ptr<ListMFADevicesForUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMFADevicesForUserResponse listMFADevicesForUser(shared_ptr<ListMFADevicesForUserRequest> request);
  ListPermissionPoliciesInAccessConfigurationResponse listPermissionPoliciesInAccessConfigurationWithOptions(shared_ptr<ListPermissionPoliciesInAccessConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPermissionPoliciesInAccessConfigurationResponse listPermissionPoliciesInAccessConfiguration(shared_ptr<ListPermissionPoliciesInAccessConfigurationRequest> request);
  ListSCIMServerCredentialsResponse listSCIMServerCredentialsWithOptions(shared_ptr<ListSCIMServerCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSCIMServerCredentialsResponse listSCIMServerCredentials(shared_ptr<ListSCIMServerCredentialsRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<ListTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<ListTasksRequest> request);
  ListUserProvisioningEventsResponse listUserProvisioningEventsWithOptions(shared_ptr<ListUserProvisioningEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserProvisioningEventsResponse listUserProvisioningEvents(shared_ptr<ListUserProvisioningEventsRequest> request);
  ListUserProvisioningsResponse listUserProvisioningsWithOptions(shared_ptr<ListUserProvisioningsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserProvisioningsResponse listUserProvisionings(shared_ptr<ListUserProvisioningsRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  ProvisionAccessConfigurationResponse provisionAccessConfigurationWithOptions(shared_ptr<ProvisionAccessConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ProvisionAccessConfigurationResponse provisionAccessConfiguration(shared_ptr<ProvisionAccessConfigurationRequest> request);
  RemoveExternalSAMLIdPCertificateResponse removeExternalSAMLIdPCertificateWithOptions(shared_ptr<RemoveExternalSAMLIdPCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveExternalSAMLIdPCertificateResponse removeExternalSAMLIdPCertificate(shared_ptr<RemoveExternalSAMLIdPCertificateRequest> request);
  RemovePermissionPolicyFromAccessConfigurationResponse removePermissionPolicyFromAccessConfigurationWithOptions(shared_ptr<RemovePermissionPolicyFromAccessConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemovePermissionPolicyFromAccessConfigurationResponse removePermissionPolicyFromAccessConfiguration(shared_ptr<RemovePermissionPolicyFromAccessConfigurationRequest> request);
  RemoveUserFromGroupResponse removeUserFromGroupWithOptions(shared_ptr<RemoveUserFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUserFromGroupResponse removeUserFromGroup(shared_ptr<RemoveUserFromGroupRequest> request);
  ResetUserPasswordResponse resetUserPasswordWithOptions(shared_ptr<ResetUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetUserPasswordResponse resetUserPassword(shared_ptr<ResetUserPasswordRequest> request);
  RetryUserProvisioningEventResponse retryUserProvisioningEventWithOptions(shared_ptr<RetryUserProvisioningEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryUserProvisioningEventResponse retryUserProvisioningEvent(shared_ptr<RetryUserProvisioningEventRequest> request);
  SetExternalSAMLIdentityProviderResponse setExternalSAMLIdentityProviderWithOptions(shared_ptr<SetExternalSAMLIdentityProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetExternalSAMLIdentityProviderResponse setExternalSAMLIdentityProvider(shared_ptr<SetExternalSAMLIdentityProviderRequest> request);
  SetLoginPreferenceResponse setLoginPreferenceWithOptions(shared_ptr<SetLoginPreferenceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetLoginPreferenceResponse setLoginPreference(shared_ptr<SetLoginPreferenceRequest> request);
  SetMFAAuthenticationStatusResponse setMFAAuthenticationStatusWithOptions(shared_ptr<SetMFAAuthenticationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetMFAAuthenticationStatusResponse setMFAAuthenticationStatus(shared_ptr<SetMFAAuthenticationStatusRequest> request);
  SetPasswordPolicyResponse setPasswordPolicyWithOptions(shared_ptr<SetPasswordPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetPasswordPolicyResponse setPasswordPolicy(shared_ptr<SetPasswordPolicyRequest> request);
  SetSCIMSynchronizationStatusResponse setSCIMSynchronizationStatusWithOptions(shared_ptr<SetSCIMSynchronizationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetSCIMSynchronizationStatusResponse setSCIMSynchronizationStatus(shared_ptr<SetSCIMSynchronizationStatusRequest> request);
  UpdateAccessConfigurationResponse updateAccessConfigurationWithOptions(shared_ptr<UpdateAccessConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAccessConfigurationResponse updateAccessConfiguration(shared_ptr<UpdateAccessConfigurationRequest> request);
  UpdateDirectoryResponse updateDirectoryWithOptions(shared_ptr<UpdateDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDirectoryResponse updateDirectory(shared_ptr<UpdateDirectoryRequest> request);
  UpdateGroupResponse updateGroupWithOptions(shared_ptr<UpdateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupResponse updateGroup(shared_ptr<UpdateGroupRequest> request);
  UpdateInlinePolicyForAccessConfigurationResponse updateInlinePolicyForAccessConfigurationWithOptions(shared_ptr<UpdateInlinePolicyForAccessConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInlinePolicyForAccessConfigurationResponse updateInlinePolicyForAccessConfiguration(shared_ptr<UpdateInlinePolicyForAccessConfigurationRequest> request);
  UpdateMFAAuthenticationSettingsResponse updateMFAAuthenticationSettingsWithOptions(shared_ptr<UpdateMFAAuthenticationSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMFAAuthenticationSettingsResponse updateMFAAuthenticationSettings(shared_ptr<UpdateMFAAuthenticationSettingsRequest> request);
  UpdateSCIMServerCredentialStatusResponse updateSCIMServerCredentialStatusWithOptions(shared_ptr<UpdateSCIMServerCredentialStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSCIMServerCredentialStatusResponse updateSCIMServerCredentialStatus(shared_ptr<UpdateSCIMServerCredentialStatusRequest> request);
  UpdateUserResponse updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserResponse updateUser(shared_ptr<UpdateUserRequest> request);
  UpdateUserMFAAuthenticationSettingsResponse updateUserMFAAuthenticationSettingsWithOptions(shared_ptr<UpdateUserMFAAuthenticationSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserMFAAuthenticationSettingsResponse updateUserMFAAuthenticationSettings(shared_ptr<UpdateUserMFAAuthenticationSettingsRequest> request);
  UpdateUserProvisioningResponse updateUserProvisioningWithOptions(shared_ptr<UpdateUserProvisioningRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserProvisioningResponse updateUserProvisioning(shared_ptr<UpdateUserProvisioningRequest> request);
  UpdateUserProvisioningConfigurationResponse updateUserProvisioningConfigurationWithOptions(shared_ptr<UpdateUserProvisioningConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserProvisioningConfigurationResponse updateUserProvisioningConfiguration(shared_ptr<UpdateUserProvisioningConfigurationRequest> request);
  UpdateUserStatusResponse updateUserStatusWithOptions(shared_ptr<UpdateUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserStatusResponse updateUserStatus(shared_ptr<UpdateUserStatusRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudsso20210515

#endif
