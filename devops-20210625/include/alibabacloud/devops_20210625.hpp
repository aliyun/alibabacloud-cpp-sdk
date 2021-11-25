// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DEVOPS20210625_H_
#define ALIBABACLOUD_DEVOPS20210625_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Devops20210625 {
class CreateHostGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunRegion{};
  shared_ptr<string> ecsLabelKey{};
  shared_ptr<string> ecsLabelValue{};
  shared_ptr<string> ecsType{};
  shared_ptr<string> envId{};
  shared_ptr<string> machineInfos{};
  shared_ptr<string> name{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> tagIds{};
  shared_ptr<string> type{};

  CreateHostGroupRequest() {}

  explicit CreateHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (ecsLabelKey) {
      res["ecsLabelKey"] = boost::any(*ecsLabelKey);
    }
    if (ecsLabelValue) {
      res["ecsLabelValue"] = boost::any(*ecsLabelValue);
    }
    if (ecsType) {
      res["ecsType"] = boost::any(*ecsType);
    }
    if (envId) {
      res["envId"] = boost::any(*envId);
    }
    if (machineInfos) {
      res["machineInfos"] = boost::any(*machineInfos);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    if (tagIds) {
      res["tagIds"] = boost::any(*tagIds);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("ecsLabelKey") != m.end() && !m["ecsLabelKey"].empty()) {
      ecsLabelKey = make_shared<string>(boost::any_cast<string>(m["ecsLabelKey"]));
    }
    if (m.find("ecsLabelValue") != m.end() && !m["ecsLabelValue"].empty()) {
      ecsLabelValue = make_shared<string>(boost::any_cast<string>(m["ecsLabelValue"]));
    }
    if (m.find("ecsType") != m.end() && !m["ecsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["ecsType"]));
    }
    if (m.find("envId") != m.end() && !m["envId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["envId"]));
    }
    if (m.find("machineInfos") != m.end() && !m["machineInfos"].empty()) {
      machineInfos = make_shared<string>(boost::any_cast<string>(m["machineInfos"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
    }
    if (m.find("tagIds") != m.end() && !m["tagIds"].empty()) {
      tagIds = make_shared<string>(boost::any_cast<string>(m["tagIds"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateHostGroupRequest() = default;
};
class CreateHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> hostGroupId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateHostGroupResponseBody() {}

  explicit CreateHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (hostGroupId) {
      res["hostGroupId"] = boost::any(*hostGroupId);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("hostGroupId") != m.end() && !m["hostGroupId"].empty()) {
      hostGroupId = make_shared<long>(boost::any_cast<long>(m["hostGroupId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateHostGroupResponseBody() = default;
};
class CreateHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateHostGroupResponseBody> body{};

  CreateHostGroupResponse() {}

  explicit CreateHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateHostGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHostGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHostGroupResponse() = default;
};
class CreateResourceMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> roleName{};

  CreateResourceMemberRequest() {}

  explicit CreateResourceMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (roleName) {
      res["roleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("roleName") != m.end() && !m["roleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["roleName"]));
    }
  }


  virtual ~CreateResourceMemberRequest() = default;
};
class CreateResourceMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateResourceMemberResponseBody() {}

  explicit CreateResourceMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateResourceMemberResponseBody() = default;
};
class CreateResourceMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateResourceMemberResponseBody> body{};

  CreateResourceMemberResponse() {}

  explicit CreateResourceMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResourceMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceMemberResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceMemberResponse() = default;
};
class CreateSshKeyResponseBodySshKey : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> publicKey{};

  CreateSshKeyResponseBodySshKey() {}

  explicit CreateSshKeyResponseBodySshKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (publicKey) {
      res["publicKey"] = boost::any(*publicKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("publicKey") != m.end() && !m["publicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["publicKey"]));
    }
  }


  virtual ~CreateSshKeyResponseBodySshKey() = default;
};
class CreateSshKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateSshKeyResponseBodySshKey> sshKey{};
  shared_ptr<bool> success{};

  CreateSshKeyResponseBody() {}

  explicit CreateSshKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sshKey) {
      res["sshKey"] = sshKey ? boost::any(sshKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sshKey") != m.end() && !m["sshKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["sshKey"].type()) {
        CreateSshKeyResponseBodySshKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sshKey"]));
        sshKey = make_shared<CreateSshKeyResponseBodySshKey>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateSshKeyResponseBody() = default;
};
class CreateSshKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSshKeyResponseBody> body{};

  CreateSshKeyResponse() {}

  explicit CreateSshKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSshKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSshKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSshKeyResponse() = default;
};
class CreateVariableGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> variables{};

  CreateVariableGroupRequest() {}

  explicit CreateVariableGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (variables) {
      res["variables"] = boost::any(*variables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["variables"]));
    }
  }


  virtual ~CreateVariableGroupRequest() = default;
};
class CreateVariableGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> variableGroupId{};

  CreateVariableGroupResponseBody() {}

  explicit CreateVariableGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (variableGroupId) {
      res["variableGroupId"] = boost::any(*variableGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("variableGroupId") != m.end() && !m["variableGroupId"].empty()) {
      variableGroupId = make_shared<long>(boost::any_cast<long>(m["variableGroupId"]));
    }
  }


  virtual ~CreateVariableGroupResponseBody() = default;
};
class CreateVariableGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateVariableGroupResponseBody> body{};

  CreateVariableGroupResponse() {}

  explicit CreateVariableGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVariableGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVariableGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVariableGroupResponse() = default;
};
class CreateWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> codeUrl{};
  shared_ptr<string> codeVersion{};
  shared_ptr<string> filePath{};
  shared_ptr<string> name{};
  shared_ptr<string> requestFrom{};
  shared_ptr<string> resourceIdentifier{};
  shared_ptr<bool> reuse{};
  shared_ptr<string> workspaceTemplate{};

  CreateWorkspaceRequest() {}

  explicit CreateWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeUrl) {
      res["codeUrl"] = boost::any(*codeUrl);
    }
    if (codeVersion) {
      res["codeVersion"] = boost::any(*codeVersion);
    }
    if (filePath) {
      res["filePath"] = boost::any(*filePath);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (requestFrom) {
      res["requestFrom"] = boost::any(*requestFrom);
    }
    if (resourceIdentifier) {
      res["resourceIdentifier"] = boost::any(*resourceIdentifier);
    }
    if (reuse) {
      res["reuse"] = boost::any(*reuse);
    }
    if (workspaceTemplate) {
      res["workspaceTemplate"] = boost::any(*workspaceTemplate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeUrl") != m.end() && !m["codeUrl"].empty()) {
      codeUrl = make_shared<string>(boost::any_cast<string>(m["codeUrl"]));
    }
    if (m.find("codeVersion") != m.end() && !m["codeVersion"].empty()) {
      codeVersion = make_shared<string>(boost::any_cast<string>(m["codeVersion"]));
    }
    if (m.find("filePath") != m.end() && !m["filePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["filePath"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("requestFrom") != m.end() && !m["requestFrom"].empty()) {
      requestFrom = make_shared<string>(boost::any_cast<string>(m["requestFrom"]));
    }
    if (m.find("resourceIdentifier") != m.end() && !m["resourceIdentifier"].empty()) {
      resourceIdentifier = make_shared<string>(boost::any_cast<string>(m["resourceIdentifier"]));
    }
    if (m.find("reuse") != m.end() && !m["reuse"].empty()) {
      reuse = make_shared<bool>(boost::any_cast<bool>(m["reuse"]));
    }
    if (m.find("workspaceTemplate") != m.end() && !m["workspaceTemplate"].empty()) {
      workspaceTemplate = make_shared<string>(boost::any_cast<string>(m["workspaceTemplate"]));
    }
  }


  virtual ~CreateWorkspaceRequest() = default;
};
class CreateWorkspaceResponseBodyWorkspace : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> creator{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> template_{};

  CreateWorkspaceResponseBodyWorkspace() {}

  explicit CreateWorkspaceResponseBodyWorkspace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
  }


  virtual ~CreateWorkspaceResponseBodyWorkspace() = default;
};
class CreateWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<CreateWorkspaceResponseBodyWorkspace> workspace{};

  CreateWorkspaceResponseBody() {}

  explicit CreateWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (workspace) {
      res["workspace"] = workspace ? boost::any(workspace->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      if (typeid(map<string, boost::any>) == m["workspace"].type()) {
        CreateWorkspaceResponseBodyWorkspace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["workspace"]));
        workspace = make_shared<CreateWorkspaceResponseBodyWorkspace>(model1);
      }
    }
  }


  virtual ~CreateWorkspaceResponseBody() = default;
};
class CreateWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateWorkspaceResponseBody> body{};

  CreateWorkspaceResponse() {}

  explicit CreateWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWorkspaceResponse() = default;
};
class DeleteHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteHostGroupResponseBody() {}

  explicit DeleteHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteHostGroupResponseBody() = default;
};
class DeleteHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteHostGroupResponseBody> body{};

  DeleteHostGroupResponse() {}

  explicit DeleteHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteHostGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHostGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHostGroupResponse() = default;
};
class DeletePipelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeletePipelineResponseBody() {}

  explicit DeletePipelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeletePipelineResponseBody() = default;
};
class DeletePipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeletePipelineResponseBody> body{};

  DeletePipelineResponse() {}

  explicit DeletePipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePipelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePipelineResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePipelineResponse() = default;
};
class DeleteResourceMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteResourceMemberResponseBody() {}

  explicit DeleteResourceMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteResourceMemberResponseBody() = default;
};
class DeleteResourceMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteResourceMemberResponseBody> body{};

  DeleteResourceMemberResponse() {}

  explicit DeleteResourceMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteResourceMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceMemberResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceMemberResponse() = default;
};
class DeleteVariableGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteVariableGroupResponseBody() {}

  explicit DeleteVariableGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteVariableGroupResponseBody() = default;
};
class DeleteVariableGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteVariableGroupResponseBody> body{};

  DeleteVariableGroupResponse() {}

  explicit DeleteVariableGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVariableGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVariableGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVariableGroupResponse() = default;
};
class FrozenWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  FrozenWorkspaceResponseBody() {}

  explicit FrozenWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~FrozenWorkspaceResponseBody() = default;
};
class FrozenWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FrozenWorkspaceResponseBody> body{};

  FrozenWorkspaceResponse() {}

  explicit FrozenWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FrozenWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FrozenWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~FrozenWorkspaceResponse() = default;
};
class GetHostGroupResponseBodyHostGroupHostInfos : public Darabonba::Model {
public:
  shared_ptr<string> aliyunRegionId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> ip{};
  shared_ptr<string> machineSn{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> objectType{};
  shared_ptr<long> updateTime{};

  GetHostGroupResponseBodyHostGroupHostInfos() {}

  explicit GetHostGroupResponseBodyHostGroupHostInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunRegionId) {
      res["aliyunRegionId"] = boost::any(*aliyunRegionId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (instanceName) {
      res["instanceName"] = boost::any(*instanceName);
    }
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    if (machineSn) {
      res["machineSn"] = boost::any(*machineSn);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (objectType) {
      res["objectType"] = boost::any(*objectType);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunRegionId") != m.end() && !m["aliyunRegionId"].empty()) {
      aliyunRegionId = make_shared<string>(boost::any_cast<string>(m["aliyunRegionId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("instanceName") != m.end() && !m["instanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["instanceName"]));
    }
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
    if (m.find("machineSn") != m.end() && !m["machineSn"].empty()) {
      machineSn = make_shared<string>(boost::any_cast<string>(m["machineSn"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("objectType") != m.end() && !m["objectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["objectType"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~GetHostGroupResponseBodyHostGroupHostInfos() = default;
};
class GetHostGroupResponseBodyHostGroup : public Darabonba::Model {
public:
  shared_ptr<string> aliyunRegion{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<string> description{};
  shared_ptr<string> ecsLabelKey{};
  shared_ptr<string> ecsLabelValue{};
  shared_ptr<string> ecsType{};
  shared_ptr<vector<GetHostGroupResponseBodyHostGroupHostInfos>> hostInfos{};
  shared_ptr<long> hostNum{};
  shared_ptr<long> id{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> name{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> type{};
  shared_ptr<long> upateTIme{};

  GetHostGroupResponseBodyHostGroup() {}

  explicit GetHostGroupResponseBodyHostGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (ecsLabelKey) {
      res["ecsLabelKey"] = boost::any(*ecsLabelKey);
    }
    if (ecsLabelValue) {
      res["ecsLabelValue"] = boost::any(*ecsLabelValue);
    }
    if (ecsType) {
      res["ecsType"] = boost::any(*ecsType);
    }
    if (hostInfos) {
      vector<boost::any> temp1;
      for(auto item1:*hostInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hostInfos"] = boost::any(temp1);
    }
    if (hostNum) {
      res["hostNum"] = boost::any(*hostNum);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (upateTIme) {
      res["upateTIme"] = boost::any(*upateTIme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("ecsLabelKey") != m.end() && !m["ecsLabelKey"].empty()) {
      ecsLabelKey = make_shared<string>(boost::any_cast<string>(m["ecsLabelKey"]));
    }
    if (m.find("ecsLabelValue") != m.end() && !m["ecsLabelValue"].empty()) {
      ecsLabelValue = make_shared<string>(boost::any_cast<string>(m["ecsLabelValue"]));
    }
    if (m.find("ecsType") != m.end() && !m["ecsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["ecsType"]));
    }
    if (m.find("hostInfos") != m.end() && !m["hostInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["hostInfos"].type()) {
        vector<GetHostGroupResponseBodyHostGroupHostInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hostInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHostGroupResponseBodyHostGroupHostInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostInfos = make_shared<vector<GetHostGroupResponseBodyHostGroupHostInfos>>(expect1);
      }
    }
    if (m.find("hostNum") != m.end() && !m["hostNum"].empty()) {
      hostNum = make_shared<long>(boost::any_cast<long>(m["hostNum"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("upateTIme") != m.end() && !m["upateTIme"].empty()) {
      upateTIme = make_shared<long>(boost::any_cast<long>(m["upateTIme"]));
    }
  }


  virtual ~GetHostGroupResponseBodyHostGroup() = default;
};
class GetHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetHostGroupResponseBodyHostGroup> hostGroup{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetHostGroupResponseBody() {}

  explicit GetHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (hostGroup) {
      res["hostGroup"] = hostGroup ? boost::any(hostGroup->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("hostGroup") != m.end() && !m["hostGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["hostGroup"].type()) {
        GetHostGroupResponseBodyHostGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["hostGroup"]));
        hostGroup = make_shared<GetHostGroupResponseBodyHostGroup>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetHostGroupResponseBody() = default;
};
class GetHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHostGroupResponseBody> body{};

  GetHostGroupResponse() {}

  explicit GetHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHostGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHostGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetHostGroupResponse() = default;
};
class GetOrganizationMemberResponseBodyMemberIdentities : public Darabonba::Model {
public:
  shared_ptr<string> externUid{};
  shared_ptr<string> provider{};

  GetOrganizationMemberResponseBodyMemberIdentities() {}

  explicit GetOrganizationMemberResponseBodyMemberIdentities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUid) {
      res["externUid"] = boost::any(*externUid);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externUid") != m.end() && !m["externUid"].empty()) {
      externUid = make_shared<string>(boost::any_cast<string>(m["externUid"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
  }


  virtual ~GetOrganizationMemberResponseBodyMemberIdentities() = default;
};
class GetOrganizationMemberResponseBodyMember : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> birthday{};
  shared_ptr<vector<string>> deptLists{};
  shared_ptr<string> email{};
  shared_ptr<long> hiredDate{};
  shared_ptr<GetOrganizationMemberResponseBodyMemberIdentities> identities{};
  shared_ptr<long> joinTime{};
  shared_ptr<long> lastVisitTime{};
  shared_ptr<string> mobile{};
  shared_ptr<string> organizationMemberName{};
  shared_ptr<string> organizationRoleId{};
  shared_ptr<string> organizationRoleName{};
  shared_ptr<string> state{};

  GetOrganizationMemberResponseBodyMember() {}

  explicit GetOrganizationMemberResponseBodyMember(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (birthday) {
      res["birthday"] = boost::any(*birthday);
    }
    if (deptLists) {
      res["deptLists"] = boost::any(*deptLists);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (hiredDate) {
      res["hiredDate"] = boost::any(*hiredDate);
    }
    if (identities) {
      res["identities"] = identities ? boost::any(identities->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (joinTime) {
      res["joinTime"] = boost::any(*joinTime);
    }
    if (lastVisitTime) {
      res["lastVisitTime"] = boost::any(*lastVisitTime);
    }
    if (mobile) {
      res["mobile"] = boost::any(*mobile);
    }
    if (organizationMemberName) {
      res["organizationMemberName"] = boost::any(*organizationMemberName);
    }
    if (organizationRoleId) {
      res["organizationRoleId"] = boost::any(*organizationRoleId);
    }
    if (organizationRoleName) {
      res["organizationRoleName"] = boost::any(*organizationRoleName);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("birthday") != m.end() && !m["birthday"].empty()) {
      birthday = make_shared<long>(boost::any_cast<long>(m["birthday"]));
    }
    if (m.find("deptLists") != m.end() && !m["deptLists"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["deptLists"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["deptLists"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deptLists = make_shared<vector<string>>(toVec1);
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("hiredDate") != m.end() && !m["hiredDate"].empty()) {
      hiredDate = make_shared<long>(boost::any_cast<long>(m["hiredDate"]));
    }
    if (m.find("identities") != m.end() && !m["identities"].empty()) {
      if (typeid(map<string, boost::any>) == m["identities"].type()) {
        GetOrganizationMemberResponseBodyMemberIdentities model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["identities"]));
        identities = make_shared<GetOrganizationMemberResponseBodyMemberIdentities>(model1);
      }
    }
    if (m.find("joinTime") != m.end() && !m["joinTime"].empty()) {
      joinTime = make_shared<long>(boost::any_cast<long>(m["joinTime"]));
    }
    if (m.find("lastVisitTime") != m.end() && !m["lastVisitTime"].empty()) {
      lastVisitTime = make_shared<long>(boost::any_cast<long>(m["lastVisitTime"]));
    }
    if (m.find("mobile") != m.end() && !m["mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["mobile"]));
    }
    if (m.find("organizationMemberName") != m.end() && !m["organizationMemberName"].empty()) {
      organizationMemberName = make_shared<string>(boost::any_cast<string>(m["organizationMemberName"]));
    }
    if (m.find("organizationRoleId") != m.end() && !m["organizationRoleId"].empty()) {
      organizationRoleId = make_shared<string>(boost::any_cast<string>(m["organizationRoleId"]));
    }
    if (m.find("organizationRoleName") != m.end() && !m["organizationRoleName"].empty()) {
      organizationRoleName = make_shared<string>(boost::any_cast<string>(m["organizationRoleName"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~GetOrganizationMemberResponseBodyMember() = default;
};
class GetOrganizationMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetOrganizationMemberResponseBodyMember> member{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOrganizationMemberResponseBody() {}

  explicit GetOrganizationMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (member) {
      res["member"] = member ? boost::any(member->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("member") != m.end() && !m["member"].empty()) {
      if (typeid(map<string, boost::any>) == m["member"].type()) {
        GetOrganizationMemberResponseBodyMember model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["member"]));
        member = make_shared<GetOrganizationMemberResponseBodyMember>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetOrganizationMemberResponseBody() = default;
};
class GetOrganizationMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOrganizationMemberResponseBody> body{};

  GetOrganizationMemberResponse() {}

  explicit GetOrganizationMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrganizationMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrganizationMemberResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrganizationMemberResponse() = default;
};
class GetPipelineResponseBodyPipelinePipelineConfigSourcesData : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<long> cloneDepth{};
  shared_ptr<long> credentialId{};
  shared_ptr<string> credentialLabel{};
  shared_ptr<string> credentialType{};
  shared_ptr<vector<string>> events{};
  shared_ptr<bool> isBranchMode{};
  shared_ptr<bool> isCloneDepth{};
  shared_ptr<bool> isSubmodule{};
  shared_ptr<bool> isTrigger{};
  shared_ptr<string> label{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> repo{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> triggerFilter{};
  shared_ptr<string> webhook{};

  GetPipelineResponseBodyPipelinePipelineConfigSourcesData() {}

  explicit GetPipelineResponseBodyPipelinePipelineConfigSourcesData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["branch"] = boost::any(*branch);
    }
    if (cloneDepth) {
      res["cloneDepth"] = boost::any(*cloneDepth);
    }
    if (credentialId) {
      res["credentialId"] = boost::any(*credentialId);
    }
    if (credentialLabel) {
      res["credentialLabel"] = boost::any(*credentialLabel);
    }
    if (credentialType) {
      res["credentialType"] = boost::any(*credentialType);
    }
    if (events) {
      res["events"] = boost::any(*events);
    }
    if (isBranchMode) {
      res["isBranchMode"] = boost::any(*isBranchMode);
    }
    if (isCloneDepth) {
      res["isCloneDepth"] = boost::any(*isCloneDepth);
    }
    if (isSubmodule) {
      res["isSubmodule"] = boost::any(*isSubmodule);
    }
    if (isTrigger) {
      res["isTrigger"] = boost::any(*isTrigger);
    }
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (repo) {
      res["repo"] = boost::any(*repo);
    }
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    if (triggerFilter) {
      res["triggerFilter"] = boost::any(*triggerFilter);
    }
    if (webhook) {
      res["webhook"] = boost::any(*webhook);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("cloneDepth") != m.end() && !m["cloneDepth"].empty()) {
      cloneDepth = make_shared<long>(boost::any_cast<long>(m["cloneDepth"]));
    }
    if (m.find("credentialId") != m.end() && !m["credentialId"].empty()) {
      credentialId = make_shared<long>(boost::any_cast<long>(m["credentialId"]));
    }
    if (m.find("credentialLabel") != m.end() && !m["credentialLabel"].empty()) {
      credentialLabel = make_shared<string>(boost::any_cast<string>(m["credentialLabel"]));
    }
    if (m.find("credentialType") != m.end() && !m["credentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["credentialType"]));
    }
    if (m.find("events") != m.end() && !m["events"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["events"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["events"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      events = make_shared<vector<string>>(toVec1);
    }
    if (m.find("isBranchMode") != m.end() && !m["isBranchMode"].empty()) {
      isBranchMode = make_shared<bool>(boost::any_cast<bool>(m["isBranchMode"]));
    }
    if (m.find("isCloneDepth") != m.end() && !m["isCloneDepth"].empty()) {
      isCloneDepth = make_shared<bool>(boost::any_cast<bool>(m["isCloneDepth"]));
    }
    if (m.find("isSubmodule") != m.end() && !m["isSubmodule"].empty()) {
      isSubmodule = make_shared<bool>(boost::any_cast<bool>(m["isSubmodule"]));
    }
    if (m.find("isTrigger") != m.end() && !m["isTrigger"].empty()) {
      isTrigger = make_shared<bool>(boost::any_cast<bool>(m["isTrigger"]));
    }
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("repo") != m.end() && !m["repo"].empty()) {
      repo = make_shared<string>(boost::any_cast<string>(m["repo"]));
    }
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
    }
    if (m.find("triggerFilter") != m.end() && !m["triggerFilter"].empty()) {
      triggerFilter = make_shared<string>(boost::any_cast<string>(m["triggerFilter"]));
    }
    if (m.find("webhook") != m.end() && !m["webhook"].empty()) {
      webhook = make_shared<string>(boost::any_cast<string>(m["webhook"]));
    }
  }


  virtual ~GetPipelineResponseBodyPipelinePipelineConfigSourcesData() = default;
};
class GetPipelineResponseBodyPipelinePipelineConfigSources : public Darabonba::Model {
public:
  shared_ptr<GetPipelineResponseBodyPipelinePipelineConfigSourcesData> data{};
  shared_ptr<string> sign{};
  shared_ptr<string> type{};

  GetPipelineResponseBodyPipelinePipelineConfigSources() {}

  explicit GetPipelineResponseBodyPipelinePipelineConfigSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sign) {
      res["sign"] = boost::any(*sign);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetPipelineResponseBodyPipelinePipelineConfigSourcesData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetPipelineResponseBodyPipelinePipelineConfigSourcesData>(model1);
      }
    }
    if (m.find("sign") != m.end() && !m["sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["sign"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetPipelineResponseBodyPipelinePipelineConfigSources() = default;
};
class GetPipelineResponseBodyPipelinePipelineConfig : public Darabonba::Model {
public:
  shared_ptr<string> flow{};
  shared_ptr<string> settings{};
  shared_ptr<vector<GetPipelineResponseBodyPipelinePipelineConfigSources>> sources{};

  GetPipelineResponseBodyPipelinePipelineConfig() {}

  explicit GetPipelineResponseBodyPipelinePipelineConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flow) {
      res["flow"] = boost::any(*flow);
    }
    if (settings) {
      res["settings"] = boost::any(*settings);
    }
    if (sources) {
      vector<boost::any> temp1;
      for(auto item1:*sources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("flow") != m.end() && !m["flow"].empty()) {
      flow = make_shared<string>(boost::any_cast<string>(m["flow"]));
    }
    if (m.find("settings") != m.end() && !m["settings"].empty()) {
      settings = make_shared<string>(boost::any_cast<string>(m["settings"]));
    }
    if (m.find("sources") != m.end() && !m["sources"].empty()) {
      if (typeid(vector<boost::any>) == m["sources"].type()) {
        vector<GetPipelineResponseBodyPipelinePipelineConfigSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineResponseBodyPipelinePipelineConfigSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sources = make_shared<vector<GetPipelineResponseBodyPipelinePipelineConfigSources>>(expect1);
      }
    }
  }


  virtual ~GetPipelineResponseBodyPipelinePipelineConfig() = default;
};
class GetPipelineResponseBodyPipelineTagList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  GetPipelineResponseBodyPipelineTagList() {}

  explicit GetPipelineResponseBodyPipelineTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetPipelineResponseBodyPipelineTagList() = default;
};
class GetPipelineResponseBodyPipeline : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> envId{};
  shared_ptr<string> envName{};
  shared_ptr<long> groupId{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> name{};
  shared_ptr<GetPipelineResponseBodyPipelinePipelineConfig> pipelineConfig{};
  shared_ptr<vector<GetPipelineResponseBodyPipelineTagList>> tagList{};
  shared_ptr<long> updateTime{};

  GetPipelineResponseBodyPipeline() {}

  explicit GetPipelineResponseBodyPipeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (envId) {
      res["envId"] = boost::any(*envId);
    }
    if (envName) {
      res["envName"] = boost::any(*envName);
    }
    if (groupId) {
      res["groupId"] = boost::any(*groupId);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pipelineConfig) {
      res["pipelineConfig"] = pipelineConfig ? boost::any(pipelineConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tagList"] = boost::any(temp1);
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
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("envId") != m.end() && !m["envId"].empty()) {
      envId = make_shared<long>(boost::any_cast<long>(m["envId"]));
    }
    if (m.find("envName") != m.end() && !m["envName"].empty()) {
      envName = make_shared<string>(boost::any_cast<string>(m["envName"]));
    }
    if (m.find("groupId") != m.end() && !m["groupId"].empty()) {
      groupId = make_shared<long>(boost::any_cast<long>(m["groupId"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pipelineConfig") != m.end() && !m["pipelineConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["pipelineConfig"].type()) {
        GetPipelineResponseBodyPipelinePipelineConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pipelineConfig"]));
        pipelineConfig = make_shared<GetPipelineResponseBodyPipelinePipelineConfig>(model1);
      }
    }
    if (m.find("tagList") != m.end() && !m["tagList"].empty()) {
      if (typeid(vector<boost::any>) == m["tagList"].type()) {
        vector<GetPipelineResponseBodyPipelineTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineResponseBodyPipelineTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagList = make_shared<vector<GetPipelineResponseBodyPipelineTagList>>(expect1);
      }
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~GetPipelineResponseBodyPipeline() = default;
};
class GetPipelineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetPipelineResponseBodyPipeline> pipeline{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPipelineResponseBody() {}

  explicit GetPipelineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (pipeline) {
      res["pipeline"] = pipeline ? boost::any(pipeline->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("pipeline") != m.end() && !m["pipeline"].empty()) {
      if (typeid(map<string, boost::any>) == m["pipeline"].type()) {
        GetPipelineResponseBodyPipeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pipeline"]));
        pipeline = make_shared<GetPipelineResponseBodyPipeline>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetPipelineResponseBody() = default;
};
class GetPipelineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPipelineResponseBody> body{};

  GetPipelineResponse() {}

  explicit GetPipelineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPipelineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineResponse() = default;
};
class GetPipelineRunResponseBodyPipelineRunSourcesData : public Darabonba::Model {
public:
  shared_ptr<string> branch{};
  shared_ptr<string> commint{};
  shared_ptr<string> repo{};

  GetPipelineRunResponseBodyPipelineRunSourcesData() {}

  explicit GetPipelineRunResponseBodyPipelineRunSourcesData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (branch) {
      res["branch"] = boost::any(*branch);
    }
    if (commint) {
      res["commint"] = boost::any(*commint);
    }
    if (repo) {
      res["repo"] = boost::any(*repo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("branch") != m.end() && !m["branch"].empty()) {
      branch = make_shared<string>(boost::any_cast<string>(m["branch"]));
    }
    if (m.find("commint") != m.end() && !m["commint"].empty()) {
      commint = make_shared<string>(boost::any_cast<string>(m["commint"]));
    }
    if (m.find("repo") != m.end() && !m["repo"].empty()) {
      repo = make_shared<string>(boost::any_cast<string>(m["repo"]));
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunSourcesData() = default;
};
class GetPipelineRunResponseBodyPipelineRunSources : public Darabonba::Model {
public:
  shared_ptr<GetPipelineRunResponseBodyPipelineRunSourcesData> data{};
  shared_ptr<string> sign{};
  shared_ptr<string> type{};

  GetPipelineRunResponseBodyPipelineRunSources() {}

  explicit GetPipelineRunResponseBodyPipelineRunSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sign) {
      res["sign"] = boost::any(*sign);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetPipelineRunResponseBodyPipelineRunSourcesData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetPipelineRunResponseBodyPipelineRunSourcesData>(model1);
      }
    }
    if (m.find("sign") != m.end() && !m["sign"].empty()) {
      sign = make_shared<string>(boost::any_cast<string>(m["sign"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunSources() = default;
};
class GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions : public Darabonba::Model {
public:
  shared_ptr<bool> disable{};
  shared_ptr<map<string, boost::any>> params{};
  shared_ptr<string> type{};

  GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions() {}

  explicit GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disable) {
      res["disable"] = boost::any(*disable);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("disable") != m.end() && !m["disable"].empty()) {
      disable = make_shared<bool>(boost::any_cast<bool>(m["disable"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["params"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions() = default;
};
class GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs : public Darabonba::Model {
public:
  shared_ptr<vector<GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions>> actions{};
  shared_ptr<long> endTime{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> params{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs() {}

  explicit GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      vector<boost::any> temp1;
      for(auto item1:*actions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["actions"] = boost::any(temp1);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["actions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actions = make_shared<vector<GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobsActions>>(expect1);
      }
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["params"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs() = default;
};
class GetPipelineRunResponseBodyPipelineRunStagesStageInfo : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<vector<GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs>> jobs{};
  shared_ptr<string> name{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  GetPipelineRunResponseBodyPipelineRunStagesStageInfo() {}

  explicit GetPipelineRunResponseBodyPipelineRunStagesStageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["jobs"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("jobs") != m.end() && !m["jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["jobs"].type()) {
        vector<GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<GetPipelineRunResponseBodyPipelineRunStagesStageInfoJobs>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunStagesStageInfo() = default;
};
class GetPipelineRunResponseBodyPipelineRunStages : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<GetPipelineRunResponseBodyPipelineRunStagesStageInfo> stageInfo{};

  GetPipelineRunResponseBodyPipelineRunStages() {}

  explicit GetPipelineRunResponseBodyPipelineRunStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (stageInfo) {
      res["stageInfo"] = stageInfo ? boost::any(stageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("stageInfo") != m.end() && !m["stageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["stageInfo"].type()) {
        GetPipelineRunResponseBodyPipelineRunStagesStageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["stageInfo"]));
        stageInfo = make_shared<GetPipelineRunResponseBodyPipelineRunStagesStageInfo>(model1);
      }
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRunStages() = default;
};
class GetPipelineRunResponseBodyPipelineRun : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<long> pipelineRunId{};
  shared_ptr<vector<GetPipelineRunResponseBodyPipelineRunSources>> sources{};
  shared_ptr<vector<vector<string>>> stageGroup{};
  shared_ptr<vector<GetPipelineRunResponseBodyPipelineRunStages>> stages{};
  shared_ptr<string> status{};
  shared_ptr<long> triggerMode{};
  shared_ptr<long> updateTime{};

  GetPipelineRunResponseBodyPipelineRun() {}

  explicit GetPipelineRunResponseBodyPipelineRun(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (pipelineId) {
      res["pipelineId"] = boost::any(*pipelineId);
    }
    if (pipelineRunId) {
      res["pipelineRunId"] = boost::any(*pipelineRunId);
    }
    if (sources) {
      vector<boost::any> temp1;
      for(auto item1:*sources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sources"] = boost::any(temp1);
    }
    if (stageGroup) {
      res["stageGroup"] = boost::any(*stageGroup);
    }
    if (stages) {
      vector<boost::any> temp1;
      for(auto item1:*stages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["stages"] = boost::any(temp1);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (triggerMode) {
      res["triggerMode"] = boost::any(*triggerMode);
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
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("pipelineId") != m.end() && !m["pipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["pipelineId"]));
    }
    if (m.find("pipelineRunId") != m.end() && !m["pipelineRunId"].empty()) {
      pipelineRunId = make_shared<long>(boost::any_cast<long>(m["pipelineRunId"]));
    }
    if (m.find("sources") != m.end() && !m["sources"].empty()) {
      if (typeid(vector<boost::any>) == m["sources"].type()) {
        vector<GetPipelineRunResponseBodyPipelineRunSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineRunResponseBodyPipelineRunSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sources = make_shared<vector<GetPipelineRunResponseBodyPipelineRunSources>>(expect1);
      }
    }
    if (m.find("stageGroup") != m.end() && !m["stageGroup"].empty()) {
      vector<vector<string>> toVec1;
      if (typeid(vector<boost::any>) == m["stageGroup"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["stageGroup"]);
        for (auto item:vec1) {
          vector<string> toVec2;
          if (typeid(vector<boost::any>) == item.type()) {
            vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item);
            for (auto item:vec2) {
               toVec2.push_back(boost::any_cast<string>(item));
            }
          }
           toVec1 = toVec2;
        }
      }
      stageGroup = make_shared<vector<vector<string>>>(toVec1);
    }
    if (m.find("stages") != m.end() && !m["stages"].empty()) {
      if (typeid(vector<boost::any>) == m["stages"].type()) {
        vector<GetPipelineRunResponseBodyPipelineRunStages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["stages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPipelineRunResponseBodyPipelineRunStages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stages = make_shared<vector<GetPipelineRunResponseBodyPipelineRunStages>>(expect1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("triggerMode") != m.end() && !m["triggerMode"].empty()) {
      triggerMode = make_shared<long>(boost::any_cast<long>(m["triggerMode"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~GetPipelineRunResponseBodyPipelineRun() = default;
};
class GetPipelineRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetPipelineRunResponseBodyPipelineRun> pipelineRun{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPipelineRunResponseBody() {}

  explicit GetPipelineRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (pipelineRun) {
      res["pipelineRun"] = pipelineRun ? boost::any(pipelineRun->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("pipelineRun") != m.end() && !m["pipelineRun"].empty()) {
      if (typeid(map<string, boost::any>) == m["pipelineRun"].type()) {
        GetPipelineRunResponseBodyPipelineRun model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pipelineRun"]));
        pipelineRun = make_shared<GetPipelineRunResponseBodyPipelineRun>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetPipelineRunResponseBody() = default;
};
class GetPipelineRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPipelineRunResponseBody> body{};

  GetPipelineRunResponse() {}

  explicit GetPipelineRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPipelineRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPipelineRunResponseBody>(model1);
      }
    }
  }


  virtual ~GetPipelineRunResponse() = default;
};
class GetVMDeployOrderResponseBodyDeployOrderActions : public Darabonba::Model {
public:
  shared_ptr<bool> disable{};
  shared_ptr<map<string, boost::any>> params{};
  shared_ptr<string> type{};

  GetVMDeployOrderResponseBodyDeployOrderActions() {}

  explicit GetVMDeployOrderResponseBodyDeployOrderActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disable) {
      res["disable"] = boost::any(*disable);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("disable") != m.end() && !m["disable"].empty()) {
      disable = make_shared<bool>(boost::any_cast<bool>(m["disable"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["params"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetVMDeployOrderResponseBodyDeployOrderActions() = default;
};
class GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions : public Darabonba::Model {
public:
  shared_ptr<bool> disable{};
  shared_ptr<map<string, boost::any>> params{};
  shared_ptr<string> type{};

  GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions() {}

  explicit GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disable) {
      res["disable"] = boost::any(*disable);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("disable") != m.end() && !m["disable"].empty()) {
      disable = make_shared<bool>(boost::any_cast<bool>(m["disable"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["params"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      params = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions() = default;
};
class GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines : public Darabonba::Model {
public:
  shared_ptr<vector<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions>> actions{};
  shared_ptr<long> batchNum{};
  shared_ptr<string> clientStatus{};
  shared_ptr<long> createTime{};
  shared_ptr<string> ip{};
  shared_ptr<string> machineSn{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};

  GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines() {}

  explicit GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      vector<boost::any> temp1;
      for(auto item1:*actions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["actions"] = boost::any(temp1);
    }
    if (batchNum) {
      res["batchNum"] = boost::any(*batchNum);
    }
    if (clientStatus) {
      res["clientStatus"] = boost::any(*clientStatus);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (ip) {
      res["ip"] = boost::any(*ip);
    }
    if (machineSn) {
      res["machineSn"] = boost::any(*machineSn);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["actions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actions = make_shared<vector<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions>>(expect1);
      }
    }
    if (m.find("batchNum") != m.end() && !m["batchNum"].empty()) {
      batchNum = make_shared<long>(boost::any_cast<long>(m["batchNum"]));
    }
    if (m.find("clientStatus") != m.end() && !m["clientStatus"].empty()) {
      clientStatus = make_shared<string>(boost::any_cast<string>(m["clientStatus"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("ip") != m.end() && !m["ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["ip"]));
    }
    if (m.find("machineSn") != m.end() && !m["machineSn"].empty()) {
      machineSn = make_shared<string>(boost::any_cast<string>(m["machineSn"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines() = default;
};
class GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo : public Darabonba::Model {
public:
  shared_ptr<long> batchNum{};
  shared_ptr<vector<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines>> deployMachines{};
  shared_ptr<long> hostGroupId{};

  GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo() {}

  explicit GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchNum) {
      res["batchNum"] = boost::any(*batchNum);
    }
    if (deployMachines) {
      vector<boost::any> temp1;
      for(auto item1:*deployMachines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["deployMachines"] = boost::any(temp1);
    }
    if (hostGroupId) {
      res["hostGroupId"] = boost::any(*hostGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("batchNum") != m.end() && !m["batchNum"].empty()) {
      batchNum = make_shared<long>(boost::any_cast<long>(m["batchNum"]));
    }
    if (m.find("deployMachines") != m.end() && !m["deployMachines"].empty()) {
      if (typeid(vector<boost::any>) == m["deployMachines"].type()) {
        vector<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["deployMachines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deployMachines = make_shared<vector<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines>>(expect1);
      }
    }
    if (m.find("hostGroupId") != m.end() && !m["hostGroupId"].empty()) {
      hostGroupId = make_shared<long>(boost::any_cast<long>(m["hostGroupId"]));
    }
  }


  virtual ~GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo() = default;
};
class GetVMDeployOrderResponseBodyDeployOrder : public Darabonba::Model {
public:
  shared_ptr<vector<GetVMDeployOrderResponseBodyDeployOrderActions>> actions{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creator{};
  shared_ptr<long> currentBatch{};
  shared_ptr<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo> deployMachineInfo{};
  shared_ptr<string> deployOrderId{};
  shared_ptr<string> exceptionCode{};
  shared_ptr<string> status{};
  shared_ptr<long> totalBatch{};
  shared_ptr<long> updateTime{};

  GetVMDeployOrderResponseBodyDeployOrder() {}

  explicit GetVMDeployOrderResponseBodyDeployOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      vector<boost::any> temp1;
      for(auto item1:*actions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["actions"] = boost::any(temp1);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["creator"] = boost::any(*creator);
    }
    if (currentBatch) {
      res["currentBatch"] = boost::any(*currentBatch);
    }
    if (deployMachineInfo) {
      res["deployMachineInfo"] = deployMachineInfo ? boost::any(deployMachineInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deployOrderId) {
      res["deployOrderId"] = boost::any(*deployOrderId);
    }
    if (exceptionCode) {
      res["exceptionCode"] = boost::any(*exceptionCode);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (totalBatch) {
      res["totalBatch"] = boost::any(*totalBatch);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actions") != m.end() && !m["actions"].empty()) {
      if (typeid(vector<boost::any>) == m["actions"].type()) {
        vector<GetVMDeployOrderResponseBodyDeployOrderActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["actions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVMDeployOrderResponseBodyDeployOrderActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actions = make_shared<vector<GetVMDeployOrderResponseBodyDeployOrderActions>>(expect1);
      }
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creator") != m.end() && !m["creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["creator"]));
    }
    if (m.find("currentBatch") != m.end() && !m["currentBatch"].empty()) {
      currentBatch = make_shared<long>(boost::any_cast<long>(m["currentBatch"]));
    }
    if (m.find("deployMachineInfo") != m.end() && !m["deployMachineInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["deployMachineInfo"].type()) {
        GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["deployMachineInfo"]));
        deployMachineInfo = make_shared<GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo>(model1);
      }
    }
    if (m.find("deployOrderId") != m.end() && !m["deployOrderId"].empty()) {
      deployOrderId = make_shared<string>(boost::any_cast<string>(m["deployOrderId"]));
    }
    if (m.find("exceptionCode") != m.end() && !m["exceptionCode"].empty()) {
      exceptionCode = make_shared<string>(boost::any_cast<string>(m["exceptionCode"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("totalBatch") != m.end() && !m["totalBatch"].empty()) {
      totalBatch = make_shared<long>(boost::any_cast<long>(m["totalBatch"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~GetVMDeployOrderResponseBodyDeployOrder() = default;
};
class GetVMDeployOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetVMDeployOrderResponseBodyDeployOrder> deployOrder{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetVMDeployOrderResponseBody() {}

  explicit GetVMDeployOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployOrder) {
      res["deployOrder"] = deployOrder ? boost::any(deployOrder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("deployOrder") != m.end() && !m["deployOrder"].empty()) {
      if (typeid(map<string, boost::any>) == m["deployOrder"].type()) {
        GetVMDeployOrderResponseBodyDeployOrder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["deployOrder"]));
        deployOrder = make_shared<GetVMDeployOrderResponseBodyDeployOrder>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetVMDeployOrderResponseBody() = default;
};
class GetVMDeployOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVMDeployOrderResponseBody> body{};

  GetVMDeployOrderResponse() {}

  explicit GetVMDeployOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVMDeployOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVMDeployOrderResponseBody>(model1);
      }
    }
  }


  virtual ~GetVMDeployOrderResponse() = default;
};
class GetVariableGroupResponseBodyVariableGroupRelatedPipelines : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  GetVariableGroupResponseBodyVariableGroupRelatedPipelines() {}

  explicit GetVariableGroupResponseBodyVariableGroupRelatedPipelines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetVariableGroupResponseBodyVariableGroupRelatedPipelines() = default;
};
class GetVariableGroupResponseBodyVariableGroupVariables : public Darabonba::Model {
public:
  shared_ptr<bool> isEncrypted{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetVariableGroupResponseBodyVariableGroupVariables() {}

  explicit GetVariableGroupResponseBodyVariableGroupVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isEncrypted) {
      res["isEncrypted"] = boost::any(*isEncrypted);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isEncrypted") != m.end() && !m["isEncrypted"].empty()) {
      isEncrypted = make_shared<bool>(boost::any_cast<bool>(m["isEncrypted"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~GetVariableGroupResponseBodyVariableGroupVariables() = default;
};
class GetVariableGroupResponseBodyVariableGroup : public Darabonba::Model {
public:
  shared_ptr<string> ccreatorAccountId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetVariableGroupResponseBodyVariableGroupRelatedPipelines>> relatedPipelines{};
  shared_ptr<long> updateTime{};
  shared_ptr<vector<GetVariableGroupResponseBodyVariableGroupVariables>> variables{};

  GetVariableGroupResponseBodyVariableGroup() {}

  explicit GetVariableGroupResponseBodyVariableGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ccreatorAccountId) {
      res["ccreatorAccountId"] = boost::any(*ccreatorAccountId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (relatedPipelines) {
      vector<boost::any> temp1;
      for(auto item1:*relatedPipelines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["relatedPipelines"] = boost::any(temp1);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ccreatorAccountId") != m.end() && !m["ccreatorAccountId"].empty()) {
      ccreatorAccountId = make_shared<string>(boost::any_cast<string>(m["ccreatorAccountId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("relatedPipelines") != m.end() && !m["relatedPipelines"].empty()) {
      if (typeid(vector<boost::any>) == m["relatedPipelines"].type()) {
        vector<GetVariableGroupResponseBodyVariableGroupRelatedPipelines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["relatedPipelines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVariableGroupResponseBodyVariableGroupRelatedPipelines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedPipelines = make_shared<vector<GetVariableGroupResponseBodyVariableGroupRelatedPipelines>>(expect1);
      }
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<GetVariableGroupResponseBodyVariableGroupVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVariableGroupResponseBodyVariableGroupVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<GetVariableGroupResponseBodyVariableGroupVariables>>(expect1);
      }
    }
  }


  virtual ~GetVariableGroupResponseBodyVariableGroup() = default;
};
class GetVariableGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetVariableGroupResponseBodyVariableGroup> variableGroup{};

  GetVariableGroupResponseBody() {}

  explicit GetVariableGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (variableGroup) {
      res["variableGroup"] = variableGroup ? boost::any(variableGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("variableGroup") != m.end() && !m["variableGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["variableGroup"].type()) {
        GetVariableGroupResponseBodyVariableGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["variableGroup"]));
        variableGroup = make_shared<GetVariableGroupResponseBodyVariableGroup>(model1);
      }
    }
  }


  virtual ~GetVariableGroupResponseBody() = default;
};
class GetVariableGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVariableGroupResponseBody> body{};

  GetVariableGroupResponse() {}

  explicit GetVariableGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVariableGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVariableGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetVariableGroupResponse() = default;
};
class GetWorkspaceResponseBodyWorkspace : public Darabonba::Model {
public:
  shared_ptr<string> codeUrl{};
  shared_ptr<string> codeVersion{};
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<string> template_{};
  shared_ptr<string> userId{};

  GetWorkspaceResponseBodyWorkspace() {}

  explicit GetWorkspaceResponseBodyWorkspace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeUrl) {
      res["codeUrl"] = boost::any(*codeUrl);
    }
    if (codeVersion) {
      res["codeVersion"] = boost::any(*codeVersion);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeUrl") != m.end() && !m["codeUrl"].empty()) {
      codeUrl = make_shared<string>(boost::any_cast<string>(m["codeUrl"]));
    }
    if (m.find("codeVersion") != m.end() && !m["codeVersion"].empty()) {
      codeVersion = make_shared<string>(boost::any_cast<string>(m["codeVersion"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~GetWorkspaceResponseBodyWorkspace() = default;
};
class GetWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetWorkspaceResponseBodyWorkspace> workspace{};

  GetWorkspaceResponseBody() {}

  explicit GetWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (workspace) {
      res["workspace"] = workspace ? boost::any(workspace->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("workspace") != m.end() && !m["workspace"].empty()) {
      if (typeid(map<string, boost::any>) == m["workspace"].type()) {
        GetWorkspaceResponseBodyWorkspace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["workspace"]));
        workspace = make_shared<GetWorkspaceResponseBodyWorkspace>(model1);
      }
    }
  }


  virtual ~GetWorkspaceResponseBody() = default;
};
class GetWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetWorkspaceResponseBody> body{};

  GetWorkspaceResponse() {}

  explicit GetWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkspaceResponse() = default;
};
class ListHostGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> createEndTime{};
  shared_ptr<long> createStartTime{};
  shared_ptr<string> creatorAccountIds{};
  shared_ptr<string> ids{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> pageOrder{};
  shared_ptr<string> pageSort{};

  ListHostGroupsRequest() {}

  explicit ListHostGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createEndTime) {
      res["createEndTime"] = boost::any(*createEndTime);
    }
    if (createStartTime) {
      res["createStartTime"] = boost::any(*createStartTime);
    }
    if (creatorAccountIds) {
      res["creatorAccountIds"] = boost::any(*creatorAccountIds);
    }
    if (ids) {
      res["ids"] = boost::any(*ids);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (pageOrder) {
      res["pageOrder"] = boost::any(*pageOrder);
    }
    if (pageSort) {
      res["pageSort"] = boost::any(*pageSort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createEndTime") != m.end() && !m["createEndTime"].empty()) {
      createEndTime = make_shared<long>(boost::any_cast<long>(m["createEndTime"]));
    }
    if (m.find("createStartTime") != m.end() && !m["createStartTime"].empty()) {
      createStartTime = make_shared<long>(boost::any_cast<long>(m["createStartTime"]));
    }
    if (m.find("creatorAccountIds") != m.end() && !m["creatorAccountIds"].empty()) {
      creatorAccountIds = make_shared<string>(boost::any_cast<string>(m["creatorAccountIds"]));
    }
    if (m.find("ids") != m.end() && !m["ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["ids"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("pageOrder") != m.end() && !m["pageOrder"].empty()) {
      pageOrder = make_shared<string>(boost::any_cast<string>(m["pageOrder"]));
    }
    if (m.find("pageSort") != m.end() && !m["pageSort"].empty()) {
      pageSort = make_shared<string>(boost::any_cast<string>(m["pageSort"]));
    }
  }


  virtual ~ListHostGroupsRequest() = default;
};
class ListHostGroupsResponseBodyHostGroups : public Darabonba::Model {
public:
  shared_ptr<string> aliyunRegion{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<string> description{};
  shared_ptr<string> ecsLabelKey{};
  shared_ptr<string> ecsLabelValue{};
  shared_ptr<string> ecsType{};
  shared_ptr<long> hostNum{};
  shared_ptr<long> id{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> name{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> type{};
  shared_ptr<long> updateTime{};

  ListHostGroupsResponseBodyHostGroups() {}

  explicit ListHostGroupsResponseBodyHostGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (ecsLabelKey) {
      res["ecsLabelKey"] = boost::any(*ecsLabelKey);
    }
    if (ecsLabelValue) {
      res["ecsLabelValue"] = boost::any(*ecsLabelValue);
    }
    if (ecsType) {
      res["ecsType"] = boost::any(*ecsType);
    }
    if (hostNum) {
      res["hostNum"] = boost::any(*hostNum);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("ecsLabelKey") != m.end() && !m["ecsLabelKey"].empty()) {
      ecsLabelKey = make_shared<string>(boost::any_cast<string>(m["ecsLabelKey"]));
    }
    if (m.find("ecsLabelValue") != m.end() && !m["ecsLabelValue"].empty()) {
      ecsLabelValue = make_shared<string>(boost::any_cast<string>(m["ecsLabelValue"]));
    }
    if (m.find("ecsType") != m.end() && !m["ecsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["ecsType"]));
    }
    if (m.find("hostNum") != m.end() && !m["hostNum"].empty()) {
      hostNum = make_shared<long>(boost::any_cast<long>(m["hostNum"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~ListHostGroupsResponseBodyHostGroups() = default;
};
class ListHostGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<ListHostGroupsResponseBodyHostGroups>> hostGroups{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListHostGroupsResponseBody() {}

  explicit ListHostGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (hostGroups) {
      vector<boost::any> temp1;
      for(auto item1:*hostGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hostGroups"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("hostGroups") != m.end() && !m["hostGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["hostGroups"].type()) {
        vector<ListHostGroupsResponseBodyHostGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hostGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHostGroupsResponseBodyHostGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostGroups = make_shared<vector<ListHostGroupsResponseBodyHostGroups>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListHostGroupsResponseBody() = default;
};
class ListHostGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHostGroupsResponseBody> body{};

  ListHostGroupsResponse() {}

  explicit ListHostGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHostGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHostGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListHostGroupsResponse() = default;
};
class ListOrganizationMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> externUid{};
  shared_ptr<long> joinTimeFrom{};
  shared_ptr<long> joinTimeTo{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> organizationMemberName{};
  shared_ptr<string> provider{};
  shared_ptr<string> state{};

  ListOrganizationMembersRequest() {}

  explicit ListOrganizationMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUid) {
      res["externUid"] = boost::any(*externUid);
    }
    if (joinTimeFrom) {
      res["joinTimeFrom"] = boost::any(*joinTimeFrom);
    }
    if (joinTimeTo) {
      res["joinTimeTo"] = boost::any(*joinTimeTo);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (organizationMemberName) {
      res["organizationMemberName"] = boost::any(*organizationMemberName);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externUid") != m.end() && !m["externUid"].empty()) {
      externUid = make_shared<string>(boost::any_cast<string>(m["externUid"]));
    }
    if (m.find("joinTimeFrom") != m.end() && !m["joinTimeFrom"].empty()) {
      joinTimeFrom = make_shared<long>(boost::any_cast<long>(m["joinTimeFrom"]));
    }
    if (m.find("joinTimeTo") != m.end() && !m["joinTimeTo"].empty()) {
      joinTimeTo = make_shared<long>(boost::any_cast<long>(m["joinTimeTo"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("organizationMemberName") != m.end() && !m["organizationMemberName"].empty()) {
      organizationMemberName = make_shared<string>(boost::any_cast<string>(m["organizationMemberName"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~ListOrganizationMembersRequest() = default;
};
class ListOrganizationMembersResponseBodyMembersIdentities : public Darabonba::Model {
public:
  shared_ptr<string> externUid{};
  shared_ptr<string> provider{};

  ListOrganizationMembersResponseBodyMembersIdentities() {}

  explicit ListOrganizationMembersResponseBodyMembersIdentities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externUid) {
      res["externUid"] = boost::any(*externUid);
    }
    if (provider) {
      res["provider"] = boost::any(*provider);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("externUid") != m.end() && !m["externUid"].empty()) {
      externUid = make_shared<string>(boost::any_cast<string>(m["externUid"]));
    }
    if (m.find("provider") != m.end() && !m["provider"].empty()) {
      provider = make_shared<string>(boost::any_cast<string>(m["provider"]));
    }
  }


  virtual ~ListOrganizationMembersResponseBodyMembersIdentities() = default;
};
class ListOrganizationMembersResponseBodyMembers : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> birthday{};
  shared_ptr<vector<string>> deptLists{};
  shared_ptr<string> email{};
  shared_ptr<long> hiredDate{};
  shared_ptr<ListOrganizationMembersResponseBodyMembersIdentities> identities{};
  shared_ptr<long> joinTime{};
  shared_ptr<long> lastVisitTime{};
  shared_ptr<string> mobile{};
  shared_ptr<string> organizationMemberName{};
  shared_ptr<string> organizationRoleId{};
  shared_ptr<string> organizationRoleName{};
  shared_ptr<string> state{};

  ListOrganizationMembersResponseBodyMembers() {}

  explicit ListOrganizationMembersResponseBodyMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (birthday) {
      res["birthday"] = boost::any(*birthday);
    }
    if (deptLists) {
      res["deptLists"] = boost::any(*deptLists);
    }
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (hiredDate) {
      res["hiredDate"] = boost::any(*hiredDate);
    }
    if (identities) {
      res["identities"] = identities ? boost::any(identities->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (joinTime) {
      res["joinTime"] = boost::any(*joinTime);
    }
    if (lastVisitTime) {
      res["lastVisitTime"] = boost::any(*lastVisitTime);
    }
    if (mobile) {
      res["mobile"] = boost::any(*mobile);
    }
    if (organizationMemberName) {
      res["organizationMemberName"] = boost::any(*organizationMemberName);
    }
    if (organizationRoleId) {
      res["organizationRoleId"] = boost::any(*organizationRoleId);
    }
    if (organizationRoleName) {
      res["organizationRoleName"] = boost::any(*organizationRoleName);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("birthday") != m.end() && !m["birthday"].empty()) {
      birthday = make_shared<long>(boost::any_cast<long>(m["birthday"]));
    }
    if (m.find("deptLists") != m.end() && !m["deptLists"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["deptLists"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["deptLists"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deptLists = make_shared<vector<string>>(toVec1);
    }
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("hiredDate") != m.end() && !m["hiredDate"].empty()) {
      hiredDate = make_shared<long>(boost::any_cast<long>(m["hiredDate"]));
    }
    if (m.find("identities") != m.end() && !m["identities"].empty()) {
      if (typeid(map<string, boost::any>) == m["identities"].type()) {
        ListOrganizationMembersResponseBodyMembersIdentities model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["identities"]));
        identities = make_shared<ListOrganizationMembersResponseBodyMembersIdentities>(model1);
      }
    }
    if (m.find("joinTime") != m.end() && !m["joinTime"].empty()) {
      joinTime = make_shared<long>(boost::any_cast<long>(m["joinTime"]));
    }
    if (m.find("lastVisitTime") != m.end() && !m["lastVisitTime"].empty()) {
      lastVisitTime = make_shared<long>(boost::any_cast<long>(m["lastVisitTime"]));
    }
    if (m.find("mobile") != m.end() && !m["mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["mobile"]));
    }
    if (m.find("organizationMemberName") != m.end() && !m["organizationMemberName"].empty()) {
      organizationMemberName = make_shared<string>(boost::any_cast<string>(m["organizationMemberName"]));
    }
    if (m.find("organizationRoleId") != m.end() && !m["organizationRoleId"].empty()) {
      organizationRoleId = make_shared<string>(boost::any_cast<string>(m["organizationRoleId"]));
    }
    if (m.find("organizationRoleName") != m.end() && !m["organizationRoleName"].empty()) {
      organizationRoleName = make_shared<string>(boost::any_cast<string>(m["organizationRoleName"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~ListOrganizationMembersResponseBodyMembers() = default;
};
class ListOrganizationMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<ListOrganizationMembersResponseBodyMembers>> members{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListOrganizationMembersResponseBody() {}

  explicit ListOrganizationMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (members) {
      vector<boost::any> temp1;
      for(auto item1:*members){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["members"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("members") != m.end() && !m["members"].empty()) {
      if (typeid(vector<boost::any>) == m["members"].type()) {
        vector<ListOrganizationMembersResponseBodyMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["members"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrganizationMembersResponseBodyMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        members = make_shared<vector<ListOrganizationMembersResponseBodyMembers>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListOrganizationMembersResponseBody() = default;
};
class ListOrganizationMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOrganizationMembersResponseBody> body{};

  ListOrganizationMembersResponse() {}

  explicit ListOrganizationMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrganizationMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrganizationMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrganizationMembersResponse() = default;
};
class ListPipelineRunsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> triggerMode{};

  ListPipelineRunsRequest() {}

  explicit ListPipelineRunsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (triggerMode) {
      res["triggerMode"] = boost::any(*triggerMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("triggerMode") != m.end() && !m["triggerMode"].empty()) {
      triggerMode = make_shared<long>(boost::any_cast<long>(m["triggerMode"]));
    }
  }


  virtual ~ListPipelineRunsRequest() = default;
};
class ListPipelineRunsResponseBodyPipelineRuns : public Darabonba::Model {
public:
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pipelineId{};
  shared_ptr<long> pipelineRunId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> triggerMode{};

  ListPipelineRunsResponseBodyPipelineRuns() {}

  explicit ListPipelineRunsResponseBodyPipelineRuns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (pipelineId) {
      res["pipelineId"] = boost::any(*pipelineId);
    }
    if (pipelineRunId) {
      res["pipelineRunId"] = boost::any(*pipelineRunId);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (triggerMode) {
      res["triggerMode"] = boost::any(*triggerMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["endTime"]));
    }
    if (m.find("pipelineId") != m.end() && !m["pipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["pipelineId"]));
    }
    if (m.find("pipelineRunId") != m.end() && !m["pipelineRunId"].empty()) {
      pipelineRunId = make_shared<long>(boost::any_cast<long>(m["pipelineRunId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["startTime"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("triggerMode") != m.end() && !m["triggerMode"].empty()) {
      triggerMode = make_shared<long>(boost::any_cast<long>(m["triggerMode"]));
    }
  }


  virtual ~ListPipelineRunsResponseBodyPipelineRuns() = default;
};
class ListPipelineRunsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPipelineRunsResponseBodyPipelineRuns>> pipelineRuns{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListPipelineRunsResponseBody() {}

  explicit ListPipelineRunsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (pipelineRuns) {
      vector<boost::any> temp1;
      for(auto item1:*pipelineRuns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pipelineRuns"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("pipelineRuns") != m.end() && !m["pipelineRuns"].empty()) {
      if (typeid(vector<boost::any>) == m["pipelineRuns"].type()) {
        vector<ListPipelineRunsResponseBodyPipelineRuns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pipelineRuns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPipelineRunsResponseBodyPipelineRuns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pipelineRuns = make_shared<vector<ListPipelineRunsResponseBodyPipelineRuns>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListPipelineRunsResponseBody() = default;
};
class ListPipelineRunsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPipelineRunsResponseBody> body{};

  ListPipelineRunsResponse() {}

  explicit ListPipelineRunsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPipelineRunsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPipelineRunsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPipelineRunsResponse() = default;
};
class ListPipelinesRequest : public Darabonba::Model {
public:
  shared_ptr<long> createEndTime{};
  shared_ptr<long> createStartTime{};
  shared_ptr<string> creatorAccountIds{};
  shared_ptr<string> executeAccountIds{};
  shared_ptr<long> executeEndTime{};
  shared_ptr<long> executeStartTime{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> pipelineName{};
  shared_ptr<string> statusList{};

  ListPipelinesRequest() {}

  explicit ListPipelinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createEndTime) {
      res["createEndTime"] = boost::any(*createEndTime);
    }
    if (createStartTime) {
      res["createStartTime"] = boost::any(*createStartTime);
    }
    if (creatorAccountIds) {
      res["creatorAccountIds"] = boost::any(*creatorAccountIds);
    }
    if (executeAccountIds) {
      res["executeAccountIds"] = boost::any(*executeAccountIds);
    }
    if (executeEndTime) {
      res["executeEndTime"] = boost::any(*executeEndTime);
    }
    if (executeStartTime) {
      res["executeStartTime"] = boost::any(*executeStartTime);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    if (statusList) {
      res["statusList"] = boost::any(*statusList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createEndTime") != m.end() && !m["createEndTime"].empty()) {
      createEndTime = make_shared<long>(boost::any_cast<long>(m["createEndTime"]));
    }
    if (m.find("createStartTime") != m.end() && !m["createStartTime"].empty()) {
      createStartTime = make_shared<long>(boost::any_cast<long>(m["createStartTime"]));
    }
    if (m.find("creatorAccountIds") != m.end() && !m["creatorAccountIds"].empty()) {
      creatorAccountIds = make_shared<string>(boost::any_cast<string>(m["creatorAccountIds"]));
    }
    if (m.find("executeAccountIds") != m.end() && !m["executeAccountIds"].empty()) {
      executeAccountIds = make_shared<string>(boost::any_cast<string>(m["executeAccountIds"]));
    }
    if (m.find("executeEndTime") != m.end() && !m["executeEndTime"].empty()) {
      executeEndTime = make_shared<long>(boost::any_cast<long>(m["executeEndTime"]));
    }
    if (m.find("executeStartTime") != m.end() && !m["executeStartTime"].empty()) {
      executeStartTime = make_shared<long>(boost::any_cast<long>(m["executeStartTime"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
    if (m.find("statusList") != m.end() && !m["statusList"].empty()) {
      statusList = make_shared<string>(boost::any_cast<string>(m["statusList"]));
    }
  }


  virtual ~ListPipelinesRequest() = default;
};
class ListPipelinesResponseBodyPipelines : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<long> pipelineId{};
  shared_ptr<string> pipelineName{};

  ListPipelinesResponseBodyPipelines() {}

  explicit ListPipelinesResponseBodyPipelines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (pipelineId) {
      res["pipelineId"] = boost::any(*pipelineId);
    }
    if (pipelineName) {
      res["pipelineName"] = boost::any(*pipelineName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("pipelineId") != m.end() && !m["pipelineId"].empty()) {
      pipelineId = make_shared<long>(boost::any_cast<long>(m["pipelineId"]));
    }
    if (m.find("pipelineName") != m.end() && !m["pipelineName"].empty()) {
      pipelineName = make_shared<string>(boost::any_cast<string>(m["pipelineName"]));
    }
  }


  virtual ~ListPipelinesResponseBodyPipelines() = default;
};
class ListPipelinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPipelinesResponseBodyPipelines>> pipelines{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListPipelinesResponseBody() {}

  explicit ListPipelinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (pipelines) {
      vector<boost::any> temp1;
      for(auto item1:*pipelines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pipelines"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("pipelines") != m.end() && !m["pipelines"].empty()) {
      if (typeid(vector<boost::any>) == m["pipelines"].type()) {
        vector<ListPipelinesResponseBodyPipelines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pipelines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPipelinesResponseBodyPipelines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pipelines = make_shared<vector<ListPipelinesResponseBodyPipelines>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListPipelinesResponseBody() = default;
};
class ListPipelinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPipelinesResponseBody> body{};

  ListPipelinesResponse() {}

  explicit ListPipelinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPipelinesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPipelinesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPipelinesResponse() = default;
};
class ListResourceMembersResponseBodyResourceMembers : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> roleName{};
  shared_ptr<string> username{};

  ListResourceMembersResponseBodyResourceMembers() {}

  explicit ListResourceMembersResponseBodyResourceMembers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (roleName) {
      res["roleName"] = boost::any(*roleName);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("roleName") != m.end() && !m["roleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["roleName"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~ListResourceMembersResponseBodyResourceMembers() = default;
};
class ListResourceMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListResourceMembersResponseBodyResourceMembers>> resourceMembers{};
  shared_ptr<bool> success{};

  ListResourceMembersResponseBody() {}

  explicit ListResourceMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (resourceMembers) {
      vector<boost::any> temp1;
      for(auto item1:*resourceMembers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["resourceMembers"] = boost::any(temp1);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("resourceMembers") != m.end() && !m["resourceMembers"].empty()) {
      if (typeid(vector<boost::any>) == m["resourceMembers"].type()) {
        vector<ListResourceMembersResponseBodyResourceMembers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["resourceMembers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourceMembersResponseBodyResourceMembers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceMembers = make_shared<vector<ListResourceMembersResponseBodyResourceMembers>>(expect1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListResourceMembersResponseBody() = default;
};
class ListResourceMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListResourceMembersResponseBody> body{};

  ListResourceMembersResponse() {}

  explicit ListResourceMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourceMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceMembersResponse() = default;
};
class ListServiceConnectionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> sericeConnectionType{};

  ListServiceConnectionsRequest() {}

  explicit ListServiceConnectionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sericeConnectionType) {
      res["sericeConnectionType"] = boost::any(*sericeConnectionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sericeConnectionType") != m.end() && !m["sericeConnectionType"].empty()) {
      sericeConnectionType = make_shared<string>(boost::any_cast<string>(m["sericeConnectionType"]));
    }
  }


  virtual ~ListServiceConnectionsRequest() = default;
};
class ListServiceConnectionsResponseBodyServiceConnections : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerAccountId{};
  shared_ptr<string> type{};

  ListServiceConnectionsResponseBodyServiceConnections() {}

  explicit ListServiceConnectionsResponseBodyServiceConnections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ownerAccountId) {
      res["ownerAccountId"] = boost::any(*ownerAccountId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ownerAccountId") != m.end() && !m["ownerAccountId"].empty()) {
      ownerAccountId = make_shared<long>(boost::any_cast<long>(m["ownerAccountId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListServiceConnectionsResponseBodyServiceConnections() = default;
};
class ListServiceConnectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServiceConnectionsResponseBodyServiceConnections>> serviceConnections{};
  shared_ptr<bool> success{};

  ListServiceConnectionsResponseBody() {}

  explicit ListServiceConnectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (serviceConnections) {
      vector<boost::any> temp1;
      for(auto item1:*serviceConnections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceConnections"] = boost::any(temp1);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("serviceConnections") != m.end() && !m["serviceConnections"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceConnections"].type()) {
        vector<ListServiceConnectionsResponseBodyServiceConnections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceConnections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceConnectionsResponseBodyServiceConnections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceConnections = make_shared<vector<ListServiceConnectionsResponseBodyServiceConnections>>(expect1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ListServiceConnectionsResponseBody() = default;
};
class ListServiceConnectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListServiceConnectionsResponseBody> body{};

  ListServiceConnectionsResponse() {}

  explicit ListServiceConnectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServiceConnectionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceConnectionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceConnectionsResponse() = default;
};
class ListVariableGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> pageOrder{};
  shared_ptr<string> pageSort{};

  ListVariableGroupsRequest() {}

  explicit ListVariableGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (pageOrder) {
      res["pageOrder"] = boost::any(*pageOrder);
    }
    if (pageSort) {
      res["pageSort"] = boost::any(*pageSort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("pageOrder") != m.end() && !m["pageOrder"].empty()) {
      pageOrder = make_shared<string>(boost::any_cast<string>(m["pageOrder"]));
    }
    if (m.find("pageSort") != m.end() && !m["pageSort"].empty()) {
      pageSort = make_shared<string>(boost::any_cast<string>(m["pageSort"]));
    }
  }


  virtual ~ListVariableGroupsRequest() = default;
};
class ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines() {}

  explicit ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines() = default;
};
class ListVariableGroupsResponseBodyVariableGroupsVariables : public Darabonba::Model {
public:
  shared_ptr<bool> isEncrypted{};
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  ListVariableGroupsResponseBodyVariableGroupsVariables() {}

  explicit ListVariableGroupsResponseBodyVariableGroupsVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isEncrypted) {
      res["isEncrypted"] = boost::any(*isEncrypted);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("isEncrypted") != m.end() && !m["isEncrypted"].empty()) {
      isEncrypted = make_shared<bool>(boost::any_cast<bool>(m["isEncrypted"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListVariableGroupsResponseBodyVariableGroupsVariables() = default;
};
class ListVariableGroupsResponseBodyVariableGroups : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> creatorAccountId{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> modifierAccountId{};
  shared_ptr<string> name{};
  shared_ptr<vector<ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines>> relatedPipelines{};
  shared_ptr<long> updateTime{};
  shared_ptr<vector<ListVariableGroupsResponseBodyVariableGroupsVariables>> variables{};

  ListVariableGroupsResponseBodyVariableGroups() {}

  explicit ListVariableGroupsResponseBodyVariableGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (creatorAccountId) {
      res["creatorAccountId"] = boost::any(*creatorAccountId);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (modifierAccountId) {
      res["modifierAccountId"] = boost::any(*modifierAccountId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (relatedPipelines) {
      vector<boost::any> temp1;
      for(auto item1:*relatedPipelines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["relatedPipelines"] = boost::any(temp1);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("creatorAccountId") != m.end() && !m["creatorAccountId"].empty()) {
      creatorAccountId = make_shared<string>(boost::any_cast<string>(m["creatorAccountId"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("modifierAccountId") != m.end() && !m["modifierAccountId"].empty()) {
      modifierAccountId = make_shared<string>(boost::any_cast<string>(m["modifierAccountId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("relatedPipelines") != m.end() && !m["relatedPipelines"].empty()) {
      if (typeid(vector<boost::any>) == m["relatedPipelines"].type()) {
        vector<ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["relatedPipelines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedPipelines = make_shared<vector<ListVariableGroupsResponseBodyVariableGroupsRelatedPipelines>>(expect1);
      }
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<ListVariableGroupsResponseBodyVariableGroupsVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVariableGroupsResponseBodyVariableGroupsVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<ListVariableGroupsResponseBodyVariableGroupsVariables>>(expect1);
      }
    }
  }


  virtual ~ListVariableGroupsResponseBodyVariableGroups() = default;
};
class ListVariableGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListVariableGroupsResponseBodyVariableGroups>> variableGroups{};

  ListVariableGroupsResponseBody() {}

  explicit ListVariableGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (variableGroups) {
      vector<boost::any> temp1;
      for(auto item1:*variableGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variableGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("variableGroups") != m.end() && !m["variableGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["variableGroups"].type()) {
        vector<ListVariableGroupsResponseBodyVariableGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variableGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVariableGroupsResponseBodyVariableGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variableGroups = make_shared<vector<ListVariableGroupsResponseBodyVariableGroups>>(expect1);
      }
    }
  }


  virtual ~ListVariableGroupsResponseBody() = default;
};
class ListVariableGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVariableGroupsResponseBody> body{};

  ListVariableGroupsResponse() {}

  explicit ListVariableGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVariableGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVariableGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVariableGroupsResponse() = default;
};
class ListWorkspacesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> statusList{};
  shared_ptr<vector<string>> workspaceTemplateList{};

  ListWorkspacesRequest() {}

  explicit ListWorkspacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (statusList) {
      res["statusList"] = boost::any(*statusList);
    }
    if (workspaceTemplateList) {
      res["workspaceTemplateList"] = boost::any(*workspaceTemplateList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("statusList") != m.end() && !m["statusList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["statusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["statusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("workspaceTemplateList") != m.end() && !m["workspaceTemplateList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["workspaceTemplateList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["workspaceTemplateList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      workspaceTemplateList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListWorkspacesRequest() = default;
};
class ListWorkspacesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> statusListShrink{};
  shared_ptr<string> workspaceTemplateListShrink{};

  ListWorkspacesShrinkRequest() {}

  explicit ListWorkspacesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (statusListShrink) {
      res["statusList"] = boost::any(*statusListShrink);
    }
    if (workspaceTemplateListShrink) {
      res["workspaceTemplateList"] = boost::any(*workspaceTemplateListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("statusList") != m.end() && !m["statusList"].empty()) {
      statusListShrink = make_shared<string>(boost::any_cast<string>(m["statusList"]));
    }
    if (m.find("workspaceTemplateList") != m.end() && !m["workspaceTemplateList"].empty()) {
      workspaceTemplateListShrink = make_shared<string>(boost::any_cast<string>(m["workspaceTemplateList"]));
    }
  }


  virtual ~ListWorkspacesShrinkRequest() = default;
};
class ListWorkspacesResponseBodyWorkspaces : public Darabonba::Model {
public:
  shared_ptr<string> codeUrl{};
  shared_ptr<string> codeVersion{};
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> spec{};
  shared_ptr<string> status{};
  shared_ptr<string> template_{};
  shared_ptr<string> userId{};

  ListWorkspacesResponseBodyWorkspaces() {}

  explicit ListWorkspacesResponseBodyWorkspaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeUrl) {
      res["codeUrl"] = boost::any(*codeUrl);
    }
    if (codeVersion) {
      res["codeVersion"] = boost::any(*codeVersion);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (spec) {
      res["spec"] = boost::any(*spec);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("codeUrl") != m.end() && !m["codeUrl"].empty()) {
      codeUrl = make_shared<string>(boost::any_cast<string>(m["codeUrl"]));
    }
    if (m.find("codeVersion") != m.end() && !m["codeVersion"].empty()) {
      codeVersion = make_shared<string>(boost::any_cast<string>(m["codeVersion"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("spec") != m.end() && !m["spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["spec"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~ListWorkspacesResponseBodyWorkspaces() = default;
};
class ListWorkspacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListWorkspacesResponseBodyWorkspaces>> workspaces{};

  ListWorkspacesResponseBody() {}

  explicit ListWorkspacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (workspaces) {
      vector<boost::any> temp1;
      for(auto item1:*workspaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workspaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("workspaces") != m.end() && !m["workspaces"].empty()) {
      if (typeid(vector<boost::any>) == m["workspaces"].type()) {
        vector<ListWorkspacesResponseBodyWorkspaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workspaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkspacesResponseBodyWorkspaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workspaces = make_shared<vector<ListWorkspacesResponseBodyWorkspaces>>(expect1);
      }
    }
  }


  virtual ~ListWorkspacesResponseBody() = default;
};
class ListWorkspacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListWorkspacesResponseBody> body{};

  ListWorkspacesResponse() {}

  explicit ListWorkspacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWorkspacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkspacesResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkspacesResponse() = default;
};
class LogPipelineJobRunResponseBodyLog : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<bool> more{};

  LogPipelineJobRunResponseBodyLog() {}

  explicit LogPipelineJobRunResponseBodyLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (more) {
      res["more"] = boost::any(*more);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("more") != m.end() && !m["more"].empty()) {
      more = make_shared<bool>(boost::any_cast<bool>(m["more"]));
    }
  }


  virtual ~LogPipelineJobRunResponseBodyLog() = default;
};
class LogPipelineJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<LogPipelineJobRunResponseBodyLog> log{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LogPipelineJobRunResponseBody() {}

  explicit LogPipelineJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (log) {
      res["log"] = log ? boost::any(log->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("log") != m.end() && !m["log"].empty()) {
      if (typeid(map<string, boost::any>) == m["log"].type()) {
        LogPipelineJobRunResponseBodyLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["log"]));
        log = make_shared<LogPipelineJobRunResponseBodyLog>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~LogPipelineJobRunResponseBody() = default;
};
class LogPipelineJobRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<LogPipelineJobRunResponseBody> body{};

  LogPipelineJobRunResponse() {}

  explicit LogPipelineJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LogPipelineJobRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogPipelineJobRunResponseBody>(model1);
      }
    }
  }


  virtual ~LogPipelineJobRunResponse() = default;
};
class LogVMDeployMachineResponseBodyDeployMachineLog : public Darabonba::Model {
public:
  shared_ptr<string> aliyunRegion{};
  shared_ptr<long> deployBeginTime{};
  shared_ptr<long> deployEndTime{};
  shared_ptr<string> deployLog{};
  shared_ptr<string> deployLogPath{};

  LogVMDeployMachineResponseBodyDeployMachineLog() {}

  explicit LogVMDeployMachineResponseBodyDeployMachineLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (deployBeginTime) {
      res["deployBeginTime"] = boost::any(*deployBeginTime);
    }
    if (deployEndTime) {
      res["deployEndTime"] = boost::any(*deployEndTime);
    }
    if (deployLog) {
      res["deployLog"] = boost::any(*deployLog);
    }
    if (deployLogPath) {
      res["deployLogPath"] = boost::any(*deployLogPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("deployBeginTime") != m.end() && !m["deployBeginTime"].empty()) {
      deployBeginTime = make_shared<long>(boost::any_cast<long>(m["deployBeginTime"]));
    }
    if (m.find("deployEndTime") != m.end() && !m["deployEndTime"].empty()) {
      deployEndTime = make_shared<long>(boost::any_cast<long>(m["deployEndTime"]));
    }
    if (m.find("deployLog") != m.end() && !m["deployLog"].empty()) {
      deployLog = make_shared<string>(boost::any_cast<string>(m["deployLog"]));
    }
    if (m.find("deployLogPath") != m.end() && !m["deployLogPath"].empty()) {
      deployLogPath = make_shared<string>(boost::any_cast<string>(m["deployLogPath"]));
    }
  }


  virtual ~LogVMDeployMachineResponseBodyDeployMachineLog() = default;
};
class LogVMDeployMachineResponseBody : public Darabonba::Model {
public:
  shared_ptr<LogVMDeployMachineResponseBodyDeployMachineLog> deployMachineLog{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LogVMDeployMachineResponseBody() {}

  explicit LogVMDeployMachineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployMachineLog) {
      res["deployMachineLog"] = deployMachineLog ? boost::any(deployMachineLog->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("deployMachineLog") != m.end() && !m["deployMachineLog"].empty()) {
      if (typeid(map<string, boost::any>) == m["deployMachineLog"].type()) {
        LogVMDeployMachineResponseBodyDeployMachineLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["deployMachineLog"]));
        deployMachineLog = make_shared<LogVMDeployMachineResponseBodyDeployMachineLog>(model1);
      }
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~LogVMDeployMachineResponseBody() = default;
};
class LogVMDeployMachineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<LogVMDeployMachineResponseBody> body{};

  LogVMDeployMachineResponse() {}

  explicit LogVMDeployMachineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LogVMDeployMachineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LogVMDeployMachineResponseBody>(model1);
      }
    }
  }


  virtual ~LogVMDeployMachineResponse() = default;
};
class PassPipelineValidateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PassPipelineValidateResponseBody() {}

  explicit PassPipelineValidateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~PassPipelineValidateResponseBody() = default;
};
class PassPipelineValidateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PassPipelineValidateResponseBody> body{};

  PassPipelineValidateResponse() {}

  explicit PassPipelineValidateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PassPipelineValidateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PassPipelineValidateResponseBody>(model1);
      }
    }
  }


  virtual ~PassPipelineValidateResponse() = default;
};
class RefusePipelineValidateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RefusePipelineValidateResponseBody() {}

  explicit RefusePipelineValidateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RefusePipelineValidateResponseBody() = default;
};
class RefusePipelineValidateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RefusePipelineValidateResponseBody> body{};

  RefusePipelineValidateResponse() {}

  explicit RefusePipelineValidateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefusePipelineValidateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefusePipelineValidateResponseBody>(model1);
      }
    }
  }


  virtual ~RefusePipelineValidateResponse() = default;
};
class ReleaseWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReleaseWorkspaceResponseBody() {}

  explicit ReleaseWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ReleaseWorkspaceResponseBody() = default;
};
class ReleaseWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReleaseWorkspaceResponseBody> body{};

  ReleaseWorkspaceResponse() {}

  explicit ReleaseWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseWorkspaceResponse() = default;
};
class ResetSshKeyResponseBodySshKey : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> publicKey{};

  ResetSshKeyResponseBodySshKey() {}

  explicit ResetSshKeyResponseBodySshKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (publicKey) {
      res["publicKey"] = boost::any(*publicKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("publicKey") != m.end() && !m["publicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["publicKey"]));
    }
  }


  virtual ~ResetSshKeyResponseBodySshKey() = default;
};
class ResetSshKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<ResetSshKeyResponseBodySshKey> sshKey{};
  shared_ptr<bool> success{};

  ResetSshKeyResponseBody() {}

  explicit ResetSshKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (sshKey) {
      res["sshKey"] = sshKey ? boost::any(sshKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("sshKey") != m.end() && !m["sshKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["sshKey"].type()) {
        ResetSshKeyResponseBodySshKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sshKey"]));
        sshKey = make_shared<ResetSshKeyResponseBodySshKey>(model1);
      }
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ResetSshKeyResponseBody() = default;
};
class ResetSshKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResetSshKeyResponseBody> body{};

  ResetSshKeyResponse() {}

  explicit ResetSshKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetSshKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetSshKeyResponseBody>(model1);
      }
    }
  }


  virtual ~ResetSshKeyResponse() = default;
};
class ResumeVMDeployOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ResumeVMDeployOrderResponseBody() {}

  explicit ResumeVMDeployOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ResumeVMDeployOrderResponseBody() = default;
};
class ResumeVMDeployOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResumeVMDeployOrderResponseBody> body{};

  ResumeVMDeployOrderResponse() {}

  explicit ResumeVMDeployOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeVMDeployOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeVMDeployOrderResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeVMDeployOrderResponse() = default;
};
class RetryPipelineJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RetryPipelineJobRunResponseBody() {}

  explicit RetryPipelineJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RetryPipelineJobRunResponseBody() = default;
};
class RetryPipelineJobRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RetryPipelineJobRunResponseBody> body{};

  RetryPipelineJobRunResponse() {}

  explicit RetryPipelineJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RetryPipelineJobRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetryPipelineJobRunResponseBody>(model1);
      }
    }
  }


  virtual ~RetryPipelineJobRunResponse() = default;
};
class RetryVMDeployMachineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RetryVMDeployMachineResponseBody() {}

  explicit RetryVMDeployMachineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RetryVMDeployMachineResponseBody() = default;
};
class RetryVMDeployMachineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RetryVMDeployMachineResponseBody> body{};

  RetryVMDeployMachineResponse() {}

  explicit RetryVMDeployMachineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RetryVMDeployMachineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetryVMDeployMachineResponseBody>(model1);
      }
    }
  }


  virtual ~RetryVMDeployMachineResponse() = default;
};
class SkipPipelineJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SkipPipelineJobRunResponseBody() {}

  explicit SkipPipelineJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~SkipPipelineJobRunResponseBody() = default;
};
class SkipPipelineJobRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SkipPipelineJobRunResponseBody> body{};

  SkipPipelineJobRunResponse() {}

  explicit SkipPipelineJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SkipPipelineJobRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SkipPipelineJobRunResponseBody>(model1);
      }
    }
  }


  virtual ~SkipPipelineJobRunResponse() = default;
};
class SkipVMDeployMachineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SkipVMDeployMachineResponseBody() {}

  explicit SkipVMDeployMachineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~SkipVMDeployMachineResponseBody() = default;
};
class SkipVMDeployMachineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SkipVMDeployMachineResponseBody> body{};

  SkipVMDeployMachineResponse() {}

  explicit SkipVMDeployMachineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SkipVMDeployMachineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SkipVMDeployMachineResponseBody>(model1);
      }
    }
  }


  virtual ~SkipVMDeployMachineResponse() = default;
};
class StartPipelineRunRequest : public Darabonba::Model {
public:
  shared_ptr<string> params{};

  StartPipelineRunRequest() {}

  explicit StartPipelineRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (params) {
      res["params"] = boost::any(*params);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("params") != m.end() && !m["params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["params"]));
    }
  }


  virtual ~StartPipelineRunRequest() = default;
};
class StartPipelineRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> pipelineRunId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartPipelineRunResponseBody() {}

  explicit StartPipelineRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (pipelineRunId) {
      res["pipelineRunId"] = boost::any(*pipelineRunId);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("pipelineRunId") != m.end() && !m["pipelineRunId"].empty()) {
      pipelineRunId = make_shared<long>(boost::any_cast<long>(m["pipelineRunId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~StartPipelineRunResponseBody() = default;
};
class StartPipelineRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartPipelineRunResponseBody> body{};

  StartPipelineRunResponse() {}

  explicit StartPipelineRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartPipelineRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartPipelineRunResponseBody>(model1);
      }
    }
  }


  virtual ~StartPipelineRunResponse() = default;
};
class StopPipelineJobRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopPipelineJobRunResponseBody() {}

  explicit StopPipelineJobRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~StopPipelineJobRunResponseBody() = default;
};
class StopPipelineJobRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopPipelineJobRunResponseBody> body{};

  StopPipelineJobRunResponse() {}

  explicit StopPipelineJobRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopPipelineJobRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopPipelineJobRunResponseBody>(model1);
      }
    }
  }


  virtual ~StopPipelineJobRunResponse() = default;
};
class StopPipelineRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopPipelineRunResponseBody() {}

  explicit StopPipelineRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~StopPipelineRunResponseBody() = default;
};
class StopPipelineRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopPipelineRunResponseBody> body{};

  StopPipelineRunResponse() {}

  explicit StopPipelineRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopPipelineRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopPipelineRunResponseBody>(model1);
      }
    }
  }


  virtual ~StopPipelineRunResponse() = default;
};
class StopVMDeployOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopVMDeployOrderResponseBody() {}

  explicit StopVMDeployOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~StopVMDeployOrderResponseBody() = default;
};
class StopVMDeployOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopVMDeployOrderResponseBody> body{};

  StopVMDeployOrderResponse() {}

  explicit StopVMDeployOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopVMDeployOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopVMDeployOrderResponseBody>(model1);
      }
    }
  }


  virtual ~StopVMDeployOrderResponse() = default;
};
class UpdateHostGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunRegion{};
  shared_ptr<string> ecsLabelKey{};
  shared_ptr<string> ecsLabelValue{};
  shared_ptr<string> ecsType{};
  shared_ptr<string> envId{};
  shared_ptr<string> machineInfos{};
  shared_ptr<string> name{};
  shared_ptr<long> serviceConnectionId{};
  shared_ptr<string> tagIds{};
  shared_ptr<string> type{};

  UpdateHostGroupRequest() {}

  explicit UpdateHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunRegion) {
      res["aliyunRegion"] = boost::any(*aliyunRegion);
    }
    if (ecsLabelKey) {
      res["ecsLabelKey"] = boost::any(*ecsLabelKey);
    }
    if (ecsLabelValue) {
      res["ecsLabelValue"] = boost::any(*ecsLabelValue);
    }
    if (ecsType) {
      res["ecsType"] = boost::any(*ecsType);
    }
    if (envId) {
      res["envId"] = boost::any(*envId);
    }
    if (machineInfos) {
      res["machineInfos"] = boost::any(*machineInfos);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (serviceConnectionId) {
      res["serviceConnectionId"] = boost::any(*serviceConnectionId);
    }
    if (tagIds) {
      res["tagIds"] = boost::any(*tagIds);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunRegion") != m.end() && !m["aliyunRegion"].empty()) {
      aliyunRegion = make_shared<string>(boost::any_cast<string>(m["aliyunRegion"]));
    }
    if (m.find("ecsLabelKey") != m.end() && !m["ecsLabelKey"].empty()) {
      ecsLabelKey = make_shared<string>(boost::any_cast<string>(m["ecsLabelKey"]));
    }
    if (m.find("ecsLabelValue") != m.end() && !m["ecsLabelValue"].empty()) {
      ecsLabelValue = make_shared<string>(boost::any_cast<string>(m["ecsLabelValue"]));
    }
    if (m.find("ecsType") != m.end() && !m["ecsType"].empty()) {
      ecsType = make_shared<string>(boost::any_cast<string>(m["ecsType"]));
    }
    if (m.find("envId") != m.end() && !m["envId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["envId"]));
    }
    if (m.find("machineInfos") != m.end() && !m["machineInfos"].empty()) {
      machineInfos = make_shared<string>(boost::any_cast<string>(m["machineInfos"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("serviceConnectionId") != m.end() && !m["serviceConnectionId"].empty()) {
      serviceConnectionId = make_shared<long>(boost::any_cast<long>(m["serviceConnectionId"]));
    }
    if (m.find("tagIds") != m.end() && !m["tagIds"].empty()) {
      tagIds = make_shared<string>(boost::any_cast<string>(m["tagIds"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateHostGroupRequest() = default;
};
class UpdateHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateHostGroupResponseBody() {}

  explicit UpdateHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateHostGroupResponseBody() = default;
};
class UpdateHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateHostGroupResponseBody> body{};

  UpdateHostGroupResponse() {}

  explicit UpdateHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateHostGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHostGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHostGroupResponse() = default;
};
class UpdateResourceMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};

  UpdateResourceMemberRequest() {}

  explicit UpdateResourceMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["roleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("roleName") != m.end() && !m["roleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["roleName"]));
    }
  }


  virtual ~UpdateResourceMemberRequest() = default;
};
class UpdateResourceMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateResourceMemberResponseBody() {}

  explicit UpdateResourceMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateResourceMemberResponseBody() = default;
};
class UpdateResourceMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateResourceMemberResponseBody> body{};

  UpdateResourceMemberResponse() {}

  explicit UpdateResourceMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceMemberResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceMemberResponse() = default;
};
class UpdateVariableGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> variables{};

  UpdateVariableGroupRequest() {}

  explicit UpdateVariableGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (variables) {
      res["variables"] = boost::any(*variables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["variables"]));
    }
  }


  virtual ~UpdateVariableGroupRequest() = default;
};
class UpdateVariableGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateVariableGroupResponseBody() {}

  explicit UpdateVariableGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateVariableGroupResponseBody() = default;
};
class UpdateVariableGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateVariableGroupResponseBody> body{};

  UpdateVariableGroupResponse() {}

  explicit UpdateVariableGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateVariableGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVariableGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVariableGroupResponse() = default;
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
  CreateHostGroupResponse createHostGroup(shared_ptr<string> organizationId, shared_ptr<CreateHostGroupRequest> request);
  CreateHostGroupResponse createHostGroupWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<CreateHostGroupRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceMemberResponse createResourceMember(shared_ptr<string> organizationId,
                                                    shared_ptr<string> resourceType,
                                                    shared_ptr<string> resourceId,
                                                    shared_ptr<CreateResourceMemberRequest> request);
  CreateResourceMemberResponse createResourceMemberWithOptions(shared_ptr<string> organizationId,
                                                               shared_ptr<string> resourceType,
                                                               shared_ptr<string> resourceId,
                                                               shared_ptr<CreateResourceMemberRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSshKeyResponse createSshKey(shared_ptr<string> organizationId);
  CreateSshKeyResponse createSshKeyWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVariableGroupResponse createVariableGroup(shared_ptr<string> organizationId, shared_ptr<CreateVariableGroupRequest> request);
  CreateVariableGroupResponse createVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<CreateVariableGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkspaceResponse createWorkspace(shared_ptr<CreateWorkspaceRequest> request);
  CreateWorkspaceResponse createWorkspaceWithOptions(shared_ptr<CreateWorkspaceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHostGroupResponse deleteHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  DeleteHostGroupResponse deleteHostGroupWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<string> id,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePipelineResponse deletePipeline(shared_ptr<string> organizationId, shared_ptr<string> pipelineId);
  DeletePipelineResponse deletePipelineWithOptions(shared_ptr<string> organizationId,
                                                   shared_ptr<string> pipelineId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceMemberResponse deleteResourceMember(shared_ptr<string> organizationId,
                                                    shared_ptr<string> resourceType,
                                                    shared_ptr<string> resourceId,
                                                    shared_ptr<string> accountId);
  DeleteResourceMemberResponse deleteResourceMemberWithOptions(shared_ptr<string> organizationId,
                                                               shared_ptr<string> resourceType,
                                                               shared_ptr<string> resourceId,
                                                               shared_ptr<string> accountId,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVariableGroupResponse deleteVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  DeleteVariableGroupResponse deleteVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> id,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FrozenWorkspaceResponse frozenWorkspace(shared_ptr<string> workspaceId);
  FrozenWorkspaceResponse frozenWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHostGroupResponse getHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  GetHostGroupResponse getHostGroupWithOptions(shared_ptr<string> organizationId,
                                               shared_ptr<string> id,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrganizationMemberResponse getOrganizationMember(shared_ptr<string> organizationId, shared_ptr<string> accountId);
  GetOrganizationMemberResponse getOrganizationMemberWithOptions(shared_ptr<string> organizationId,
                                                                 shared_ptr<string> accountId,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineResponse getPipeline(shared_ptr<string> organizationId, shared_ptr<string> pipelineId);
  GetPipelineResponse getPipelineWithOptions(shared_ptr<string> organizationId,
                                             shared_ptr<string> pipelineId,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPipelineRunResponse getPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> pipelineRunId);
  GetPipelineRunResponse getPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                   shared_ptr<string> pipelineId,
                                                   shared_ptr<string> pipelineRunId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVMDeployOrderResponse getVMDeployOrder(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> deployOrderId);
  GetVMDeployOrderResponse getVMDeployOrderWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> pipelineId,
                                                       shared_ptr<string> deployOrderId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVariableGroupResponse getVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id);
  GetVariableGroupResponse getVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> id,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkspaceResponse getWorkspace(shared_ptr<string> workspaceId);
  GetWorkspaceResponse getWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHostGroupsResponse listHostGroups(shared_ptr<string> organizationId, shared_ptr<ListHostGroupsRequest> request);
  ListHostGroupsResponse listHostGroupsWithOptions(shared_ptr<string> organizationId,
                                                   shared_ptr<ListHostGroupsRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrganizationMembersResponse listOrganizationMembers(shared_ptr<string> organizationId, shared_ptr<ListOrganizationMembersRequest> request);
  ListOrganizationMembersResponse listOrganizationMembersWithOptions(shared_ptr<string> organizationId,
                                                                     shared_ptr<ListOrganizationMembersRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelineRunsResponse listPipelineRuns(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<ListPipelineRunsRequest> request);
  ListPipelineRunsResponse listPipelineRunsWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> pipelineId,
                                                       shared_ptr<ListPipelineRunsRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPipelinesResponse listPipelines(shared_ptr<string> organizationId, shared_ptr<ListPipelinesRequest> request);
  ListPipelinesResponse listPipelinesWithOptions(shared_ptr<string> organizationId,
                                                 shared_ptr<ListPipelinesRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceMembersResponse listResourceMembers(shared_ptr<string> organizationId, shared_ptr<string> resourceType, shared_ptr<string> resourceId);
  ListResourceMembersResponse listResourceMembersWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> resourceType,
                                                             shared_ptr<string> resourceId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceConnectionsResponse listServiceConnections(shared_ptr<string> organizationId, shared_ptr<ListServiceConnectionsRequest> request);
  ListServiceConnectionsResponse listServiceConnectionsWithOptions(shared_ptr<string> organizationId,
                                                                   shared_ptr<ListServiceConnectionsRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVariableGroupsResponse listVariableGroups(shared_ptr<string> organizationId, shared_ptr<ListVariableGroupsRequest> request);
  ListVariableGroupsResponse listVariableGroupsWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<ListVariableGroupsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspacesResponse listWorkspaces(shared_ptr<ListWorkspacesRequest> request);
  ListWorkspacesResponse listWorkspacesWithOptions(shared_ptr<ListWorkspacesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LogPipelineJobRunResponse logPipelineJobRun(shared_ptr<string> organizationId,
                                              shared_ptr<string> pipelineId,
                                              shared_ptr<string> jobId,
                                              shared_ptr<string> pipelineRunId);
  LogPipelineJobRunResponse logPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                         shared_ptr<string> pipelineId,
                                                         shared_ptr<string> jobId,
                                                         shared_ptr<string> pipelineRunId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LogVMDeployMachineResponse logVMDeployMachine(shared_ptr<string> organizationId,
                                                shared_ptr<string> pipelineId,
                                                shared_ptr<string> deployOrderId,
                                                shared_ptr<string> machineSn);
  LogVMDeployMachineResponse logVMDeployMachineWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<string> pipelineId,
                                                           shared_ptr<string> deployOrderId,
                                                           shared_ptr<string> machineSn,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PassPipelineValidateResponse passPipelineValidate(shared_ptr<string> organizationId,
                                                    shared_ptr<string> pipelineId,
                                                    shared_ptr<string> pipelineRunId,
                                                    shared_ptr<string> jobId);
  PassPipelineValidateResponse passPipelineValidateWithOptions(shared_ptr<string> organizationId,
                                                               shared_ptr<string> pipelineId,
                                                               shared_ptr<string> pipelineRunId,
                                                               shared_ptr<string> jobId,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefusePipelineValidateResponse refusePipelineValidate(shared_ptr<string> organizationId,
                                                        shared_ptr<string> pipelineId,
                                                        shared_ptr<string> pipelineRunId,
                                                        shared_ptr<string> jobId);
  RefusePipelineValidateResponse refusePipelineValidateWithOptions(shared_ptr<string> organizationId,
                                                                   shared_ptr<string> pipelineId,
                                                                   shared_ptr<string> pipelineRunId,
                                                                   shared_ptr<string> jobId,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseWorkspaceResponse releaseWorkspace(shared_ptr<string> workspaceId);
  ReleaseWorkspaceResponse releaseWorkspaceWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetSshKeyResponse resetSshKey(shared_ptr<string> organizationId);
  ResetSshKeyResponse resetSshKeyWithOptions(shared_ptr<string> organizationId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeVMDeployOrderResponse resumeVMDeployOrder(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> deployOrderId);
  ResumeVMDeployOrderResponse resumeVMDeployOrderWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> pipelineId,
                                                             shared_ptr<string> deployOrderId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryPipelineJobRunResponse retryPipelineJobRun(shared_ptr<string> organizationId,
                                                  shared_ptr<string> pipelineId,
                                                  shared_ptr<string> pipelineRunId,
                                                  shared_ptr<string> jobId);
  RetryPipelineJobRunResponse retryPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> pipelineId,
                                                             shared_ptr<string> pipelineRunId,
                                                             shared_ptr<string> jobId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetryVMDeployMachineResponse retryVMDeployMachine(shared_ptr<string> organizationId,
                                                    shared_ptr<string> pipelineId,
                                                    shared_ptr<string> deployOrderId,
                                                    shared_ptr<string> machineSn);
  RetryVMDeployMachineResponse retryVMDeployMachineWithOptions(shared_ptr<string> organizationId,
                                                               shared_ptr<string> pipelineId,
                                                               shared_ptr<string> deployOrderId,
                                                               shared_ptr<string> machineSn,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SkipPipelineJobRunResponse skipPipelineJobRun(shared_ptr<string> organizationId,
                                                shared_ptr<string> pipelineId,
                                                shared_ptr<string> pipelineRunId,
                                                shared_ptr<string> jobId);
  SkipPipelineJobRunResponse skipPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<string> pipelineId,
                                                           shared_ptr<string> pipelineRunId,
                                                           shared_ptr<string> jobId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SkipVMDeployMachineResponse skipVMDeployMachine(shared_ptr<string> organizationId,
                                                  shared_ptr<string> pipelineId,
                                                  shared_ptr<string> deployOrderId,
                                                  shared_ptr<string> machineSn);
  SkipVMDeployMachineResponse skipVMDeployMachineWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> pipelineId,
                                                             shared_ptr<string> deployOrderId,
                                                             shared_ptr<string> machineSn,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartPipelineRunResponse startPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<StartPipelineRunRequest> request);
  StartPipelineRunResponse startPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                       shared_ptr<string> pipelineId,
                                                       shared_ptr<StartPipelineRunRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopPipelineJobRunResponse stopPipelineJobRun(shared_ptr<string> organizationId,
                                                shared_ptr<string> pipelineId,
                                                shared_ptr<string> pipelineRunId,
                                                shared_ptr<string> jobId);
  StopPipelineJobRunResponse stopPipelineJobRunWithOptions(shared_ptr<string> organizationId,
                                                           shared_ptr<string> pipelineId,
                                                           shared_ptr<string> pipelineRunId,
                                                           shared_ptr<string> jobId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopPipelineRunResponse stopPipelineRun(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> pipelineRunId);
  StopPipelineRunResponse stopPipelineRunWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<string> pipelineId,
                                                     shared_ptr<string> pipelineRunId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopVMDeployOrderResponse stopVMDeployOrder(shared_ptr<string> organizationId, shared_ptr<string> pipelineId, shared_ptr<string> deployOrderId);
  StopVMDeployOrderResponse stopVMDeployOrderWithOptions(shared_ptr<string> organizationId,
                                                         shared_ptr<string> pipelineId,
                                                         shared_ptr<string> deployOrderId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHostGroupResponse updateHostGroup(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateHostGroupRequest> request);
  UpdateHostGroupResponse updateHostGroupWithOptions(shared_ptr<string> organizationId,
                                                     shared_ptr<string> id,
                                                     shared_ptr<UpdateHostGroupRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceMemberResponse updateResourceMember(shared_ptr<string> organizationId,
                                                    shared_ptr<string> resourceType,
                                                    shared_ptr<string> resourceId,
                                                    shared_ptr<string> accountId,
                                                    shared_ptr<UpdateResourceMemberRequest> request);
  UpdateResourceMemberResponse updateResourceMemberWithOptions(shared_ptr<string> organizationId,
                                                               shared_ptr<string> resourceType,
                                                               shared_ptr<string> resourceId,
                                                               shared_ptr<string> accountId,
                                                               shared_ptr<UpdateResourceMemberRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVariableGroupResponse updateVariableGroup(shared_ptr<string> organizationId, shared_ptr<string> id, shared_ptr<UpdateVariableGroupRequest> request);
  UpdateVariableGroupResponse updateVariableGroupWithOptions(shared_ptr<string> organizationId,
                                                             shared_ptr<string> id,
                                                             shared_ptr<UpdateVariableGroupRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Devops20210625

#endif
