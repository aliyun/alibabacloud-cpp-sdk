// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_LINKEDMALL20210616_H_
#define ALIBABACLOUD_LINKEDMALL20210616_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Linkedmall20210616 {
class AssignPermissionsToRoleRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> permissionCodes{};
  shared_ptr<map<string, boost::any>> permissionIds{};
  shared_ptr<string> roleCode{};
  shared_ptr<string> roleId{};
  shared_ptr<string> tenantId{};

  AssignPermissionsToRoleRequest() {}

  explicit AssignPermissionsToRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionCodes) {
      res["PermissionCodes"] = boost::any(*permissionCodes);
    }
    if (permissionIds) {
      res["PermissionIds"] = boost::any(*permissionIds);
    }
    if (roleCode) {
      res["RoleCode"] = boost::any(*roleCode);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionCodes") != m.end() && !m["PermissionCodes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["PermissionCodes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      permissionCodes = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PermissionIds") != m.end() && !m["PermissionIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["PermissionIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      permissionIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RoleCode") != m.end() && !m["RoleCode"].empty()) {
      roleCode = make_shared<string>(boost::any_cast<string>(m["RoleCode"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~AssignPermissionsToRoleRequest() = default;
};
class AssignPermissionsToRoleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> permissionCodesShrink{};
  shared_ptr<string> permissionIdsShrink{};
  shared_ptr<string> roleCode{};
  shared_ptr<string> roleId{};
  shared_ptr<string> tenantId{};

  AssignPermissionsToRoleShrinkRequest() {}

  explicit AssignPermissionsToRoleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionCodesShrink) {
      res["PermissionCodes"] = boost::any(*permissionCodesShrink);
    }
    if (permissionIdsShrink) {
      res["PermissionIds"] = boost::any(*permissionIdsShrink);
    }
    if (roleCode) {
      res["RoleCode"] = boost::any(*roleCode);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionCodes") != m.end() && !m["PermissionCodes"].empty()) {
      permissionCodesShrink = make_shared<string>(boost::any_cast<string>(m["PermissionCodes"]));
    }
    if (m.find("PermissionIds") != m.end() && !m["PermissionIds"].empty()) {
      permissionIdsShrink = make_shared<string>(boost::any_cast<string>(m["PermissionIds"]));
    }
    if (m.find("RoleCode") != m.end() && !m["RoleCode"].empty()) {
      roleCode = make_shared<string>(boost::any_cast<string>(m["RoleCode"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~AssignPermissionsToRoleShrinkRequest() = default;
};
class AssignPermissionsToRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AssignPermissionsToRoleResponseBody() {}

  explicit AssignPermissionsToRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AssignPermissionsToRoleResponseBody() = default;
};
class AssignPermissionsToRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssignPermissionsToRoleResponseBody> body{};

  AssignPermissionsToRoleResponse() {}

  explicit AssignPermissionsToRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssignPermissionsToRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssignPermissionsToRoleResponseBody>(model1);
      }
    }
  }


  virtual ~AssignPermissionsToRoleResponse() = default;
};
class AssignResourcesToPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> permissionCode{};
  shared_ptr<string> permissionId{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> resourceCodes{};
  shared_ptr<map<string, boost::any>> resourceIds{};
  shared_ptr<string> tenantId{};

  AssignResourcesToPermissionRequest() {}

  explicit AssignResourcesToPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionCode) {
      res["PermissionCode"] = boost::any(*permissionCode);
    }
    if (permissionId) {
      res["PermissionId"] = boost::any(*permissionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceCodes) {
      res["ResourceCodes"] = boost::any(*resourceCodes);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionCode") != m.end() && !m["PermissionCode"].empty()) {
      permissionCode = make_shared<string>(boost::any_cast<string>(m["PermissionCode"]));
    }
    if (m.find("PermissionId") != m.end() && !m["PermissionId"].empty()) {
      permissionId = make_shared<string>(boost::any_cast<string>(m["PermissionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceCodes") != m.end() && !m["ResourceCodes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceCodes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceCodes = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~AssignResourcesToPermissionRequest() = default;
};
class AssignResourcesToPermissionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> permissionCode{};
  shared_ptr<string> permissionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceCodesShrink{};
  shared_ptr<string> resourceIdsShrink{};
  shared_ptr<string> tenantId{};

  AssignResourcesToPermissionShrinkRequest() {}

  explicit AssignResourcesToPermissionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionCode) {
      res["PermissionCode"] = boost::any(*permissionCode);
    }
    if (permissionId) {
      res["PermissionId"] = boost::any(*permissionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceCodesShrink) {
      res["ResourceCodes"] = boost::any(*resourceCodesShrink);
    }
    if (resourceIdsShrink) {
      res["ResourceIds"] = boost::any(*resourceIdsShrink);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionCode") != m.end() && !m["PermissionCode"].empty()) {
      permissionCode = make_shared<string>(boost::any_cast<string>(m["PermissionCode"]));
    }
    if (m.find("PermissionId") != m.end() && !m["PermissionId"].empty()) {
      permissionId = make_shared<string>(boost::any_cast<string>(m["PermissionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceCodes") != m.end() && !m["ResourceCodes"].empty()) {
      resourceCodesShrink = make_shared<string>(boost::any_cast<string>(m["ResourceCodes"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIdsShrink = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~AssignResourcesToPermissionShrinkRequest() = default;
};
class AssignResourcesToPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSuccess{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AssignResourcesToPermissionResponseBody() {}

  explicit AssignResourcesToPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSuccess) {
      res["IsSuccess"] = boost::any(*isSuccess);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsSuccess") != m.end() && !m["IsSuccess"].empty()) {
      isSuccess = make_shared<bool>(boost::any_cast<bool>(m["IsSuccess"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AssignResourcesToPermissionResponseBody() = default;
};
class AssignResourcesToPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssignResourcesToPermissionResponseBody> body{};

  AssignResourcesToPermissionResponse() {}

  explicit AssignResourcesToPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssignResourcesToPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssignResourcesToPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~AssignResourcesToPermissionResponse() = default;
};
class CheckPermissionOfRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> permissionCode{};
  shared_ptr<string> permissionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleCode{};
  shared_ptr<string> roleId{};
  shared_ptr<string> tenantId{};

  CheckPermissionOfRoleRequest() {}

  explicit CheckPermissionOfRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionCode) {
      res["PermissionCode"] = boost::any(*permissionCode);
    }
    if (permissionId) {
      res["PermissionId"] = boost::any(*permissionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleCode) {
      res["RoleCode"] = boost::any(*roleCode);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionCode") != m.end() && !m["PermissionCode"].empty()) {
      permissionCode = make_shared<string>(boost::any_cast<string>(m["PermissionCode"]));
    }
    if (m.find("PermissionId") != m.end() && !m["PermissionId"].empty()) {
      permissionId = make_shared<string>(boost::any_cast<string>(m["PermissionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleCode") != m.end() && !m["RoleCode"].empty()) {
      roleCode = make_shared<string>(boost::any_cast<string>(m["RoleCode"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~CheckPermissionOfRoleRequest() = default;
};
class CheckPermissionOfRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CheckPermissionOfRoleResponseBody() {}

  explicit CheckPermissionOfRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckPermissionOfRoleResponseBody() = default;
};
class CheckPermissionOfRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckPermissionOfRoleResponseBody> body{};

  CheckPermissionOfRoleResponse() {}

  explicit CheckPermissionOfRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckPermissionOfRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckPermissionOfRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CheckPermissionOfRoleResponse() = default;
};
class CreatePermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> permissionItemId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> urlForApply{};

  CreatePermissionRequest() {}

  explicit CreatePermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (permissionItemId) {
      res["PermissionItemId"] = boost::any(*permissionItemId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (urlForApply) {
      res["UrlForApply"] = boost::any(*urlForApply);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PermissionItemId") != m.end() && !m["PermissionItemId"].empty()) {
      permissionItemId = make_shared<string>(boost::any_cast<string>(m["PermissionItemId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UrlForApply") != m.end() && !m["UrlForApply"].empty()) {
      urlForApply = make_shared<string>(boost::any_cast<string>(m["UrlForApply"]));
    }
  }


  virtual ~CreatePermissionRequest() = default;
};
class CreatePermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> permissionId{};
  shared_ptr<string> requestId{};

  CreatePermissionResponseBody() {}

  explicit CreatePermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (permissionId) {
      res["PermissionId"] = boost::any(*permissionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PermissionId") != m.end() && !m["PermissionId"].empty()) {
      permissionId = make_shared<string>(boost::any_cast<string>(m["PermissionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePermissionResponseBody() = default;
};
class CreatePermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePermissionResponseBody> body{};

  CreatePermissionResponse() {}

  explicit CreatePermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePermissionResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePermissionResponse() = default;
};
class CreateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> content{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> resourceAttributeList{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};

  CreateResourceRequest() {}

  explicit CreateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceAttributeList) {
      res["ResourceAttributeList"] = boost::any(*resourceAttributeList);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceAttributeList") != m.end() && !m["ResourceAttributeList"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceAttributeList"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceAttributeList = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateResourceRequest() = default;
};
class CreateResourceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> content{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceAttributeListShrink{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};

  CreateResourceShrinkRequest() {}

  explicit CreateResourceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceAttributeListShrink) {
      res["ResourceAttributeList"] = boost::any(*resourceAttributeListShrink);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceAttributeList") != m.end() && !m["ResourceAttributeList"].empty()) {
      resourceAttributeListShrink = make_shared<string>(boost::any_cast<string>(m["ResourceAttributeList"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateResourceShrinkRequest() = default;
};
class CreateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceId{};

  CreateResourceResponseBody() {}

  explicit CreateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~CreateResourceResponseBody() = default;
};
class CreateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceResponseBody> body{};

  CreateResourceResponse() {}

  explicit CreateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceResponse() = default;
};
class CreateRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> extendRoleIds{};
  shared_ptr<map<string, boost::any>> mutexRoleIds{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tenantId{};

  CreateRoleRequest() {}

  explicit CreateRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (extendRoleIds) {
      res["ExtendRoleIds"] = boost::any(*extendRoleIds);
    }
    if (mutexRoleIds) {
      res["MutexRoleIds"] = boost::any(*mutexRoleIds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExtendRoleIds") != m.end() && !m["ExtendRoleIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtendRoleIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendRoleIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("MutexRoleIds") != m.end() && !m["MutexRoleIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["MutexRoleIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      mutexRoleIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~CreateRoleRequest() = default;
};
class CreateRoleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> extendRoleIdsShrink{};
  shared_ptr<string> mutexRoleIdsShrink{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tenantId{};

  CreateRoleShrinkRequest() {}

  explicit CreateRoleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (extendRoleIdsShrink) {
      res["ExtendRoleIds"] = boost::any(*extendRoleIdsShrink);
    }
    if (mutexRoleIdsShrink) {
      res["MutexRoleIds"] = boost::any(*mutexRoleIdsShrink);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExtendRoleIds") != m.end() && !m["ExtendRoleIds"].empty()) {
      extendRoleIdsShrink = make_shared<string>(boost::any_cast<string>(m["ExtendRoleIds"]));
    }
    if (m.find("MutexRoleIds") != m.end() && !m["MutexRoleIds"].empty()) {
      mutexRoleIdsShrink = make_shared<string>(boost::any_cast<string>(m["MutexRoleIds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~CreateRoleShrinkRequest() = default;
};
class CreateRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleId{};

  CreateRoleResponseBody() {}

  explicit CreateRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
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
        CreateRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRoleResponse() = default;
};
class QueryAllPermissionOfRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleCode{};
  shared_ptr<string> roleId{};
  shared_ptr<string> tenantId{};

  QueryAllPermissionOfRoleRequest() {}

  explicit QueryAllPermissionOfRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleCode) {
      res["RoleCode"] = boost::any(*roleCode);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleCode") != m.end() && !m["RoleCode"].empty()) {
      roleCode = make_shared<string>(boost::any_cast<string>(m["RoleCode"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryAllPermissionOfRoleRequest() = default;
};
class QueryAllPermissionOfRoleResponseBodyPermissionListPermissionItemList : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<string> permissionItemId{};
  shared_ptr<string> permissionType{};

  QueryAllPermissionOfRoleResponseBodyPermissionListPermissionItemList() {}

  explicit QueryAllPermissionOfRoleResponseBodyPermissionListPermissionItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (permissionItemId) {
      res["PermissionItemId"] = boost::any(*permissionItemId);
    }
    if (permissionType) {
      res["PermissionType"] = boost::any(*permissionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("PermissionItemId") != m.end() && !m["PermissionItemId"].empty()) {
      permissionItemId = make_shared<string>(boost::any_cast<string>(m["PermissionItemId"]));
    }
    if (m.find("PermissionType") != m.end() && !m["PermissionType"].empty()) {
      permissionType = make_shared<string>(boost::any_cast<string>(m["PermissionType"]));
    }
  }


  virtual ~QueryAllPermissionOfRoleResponseBodyPermissionListPermissionItemList() = default;
};
class QueryAllPermissionOfRoleResponseBodyPermissionList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> permissionId{};
  shared_ptr<vector<QueryAllPermissionOfRoleResponseBodyPermissionListPermissionItemList>> permissionItemList{};

  QueryAllPermissionOfRoleResponseBodyPermissionList() {}

  explicit QueryAllPermissionOfRoleResponseBodyPermissionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (permissionId) {
      res["PermissionId"] = boost::any(*permissionId);
    }
    if (permissionItemList) {
      vector<boost::any> temp1;
      for(auto item1:*permissionItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermissionItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PermissionId") != m.end() && !m["PermissionId"].empty()) {
      permissionId = make_shared<string>(boost::any_cast<string>(m["PermissionId"]));
    }
    if (m.find("PermissionItemList") != m.end() && !m["PermissionItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["PermissionItemList"].type()) {
        vector<QueryAllPermissionOfRoleResponseBodyPermissionListPermissionItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermissionItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAllPermissionOfRoleResponseBodyPermissionListPermissionItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissionItemList = make_shared<vector<QueryAllPermissionOfRoleResponseBodyPermissionListPermissionItemList>>(expect1);
      }
    }
  }


  virtual ~QueryAllPermissionOfRoleResponseBodyPermissionList() = default;
};
class QueryAllPermissionOfRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryAllPermissionOfRoleResponseBodyPermissionList>> permissionList{};
  shared_ptr<string> requestId{};

  QueryAllPermissionOfRoleResponseBody() {}

  explicit QueryAllPermissionOfRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (permissionList) {
      vector<boost::any> temp1;
      for(auto item1:*permissionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermissionList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PermissionList") != m.end() && !m["PermissionList"].empty()) {
      if (typeid(vector<boost::any>) == m["PermissionList"].type()) {
        vector<QueryAllPermissionOfRoleResponseBodyPermissionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermissionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAllPermissionOfRoleResponseBodyPermissionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissionList = make_shared<vector<QueryAllPermissionOfRoleResponseBodyPermissionList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryAllPermissionOfRoleResponseBody() = default;
};
class QueryAllPermissionOfRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAllPermissionOfRoleResponseBody> body{};

  QueryAllPermissionOfRoleResponse() {}

  explicit QueryAllPermissionOfRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAllPermissionOfRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAllPermissionOfRoleResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAllPermissionOfRoleResponse() = default;
};
class QueryAllResourcesWithPermissionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> tenantId{};

  QueryAllResourcesWithPermissionsRequest() {}

  explicit QueryAllResourcesWithPermissionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryAllResourcesWithPermissionsRequest() = default;
};
class QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceListPermissionItemList : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<string> permissionItemId{};
  shared_ptr<string> permissionType{};

  QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceListPermissionItemList() {}

  explicit QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceListPermissionItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (permissionItemId) {
      res["PermissionItemId"] = boost::any(*permissionItemId);
    }
    if (permissionType) {
      res["PermissionType"] = boost::any(*permissionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("PermissionItemId") != m.end() && !m["PermissionItemId"].empty()) {
      permissionItemId = make_shared<string>(boost::any_cast<string>(m["PermissionItemId"]));
    }
    if (m.find("PermissionType") != m.end() && !m["PermissionType"].empty()) {
      permissionType = make_shared<string>(boost::any_cast<string>(m["PermissionType"]));
    }
  }


  virtual ~QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceListPermissionItemList() = default;
};
class QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> permissionId{};
  shared_ptr<vector<QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceListPermissionItemList>> permissionItemList{};

  QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceList() {}

  explicit QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (permissionId) {
      res["PermissionId"] = boost::any(*permissionId);
    }
    if (permissionItemList) {
      vector<boost::any> temp1;
      for(auto item1:*permissionItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermissionItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PermissionId") != m.end() && !m["PermissionId"].empty()) {
      permissionId = make_shared<string>(boost::any_cast<string>(m["PermissionId"]));
    }
    if (m.find("PermissionItemList") != m.end() && !m["PermissionItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["PermissionItemList"].type()) {
        vector<QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceListPermissionItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermissionItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceListPermissionItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissionItemList = make_shared<vector<QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceListPermissionItemList>>(expect1);
      }
    }
  }


  virtual ~QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceList() = default;
};
class QueryAllResourcesWithPermissionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> content{};
  shared_ptr<string> creator{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceList>> permissionOfResourceList{};
  shared_ptr<vector<map<string, boost::any>>> resourceAttributeList{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> type{};

  QueryAllResourcesWithPermissionsResponseBodyData() {}

  explicit QueryAllResourcesWithPermissionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (permissionOfResourceList) {
      vector<boost::any> temp1;
      for(auto item1:*permissionOfResourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermissionOfResourceList"] = boost::any(temp1);
    }
    if (resourceAttributeList) {
      res["ResourceAttributeList"] = boost::any(*resourceAttributeList);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PermissionOfResourceList") != m.end() && !m["PermissionOfResourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["PermissionOfResourceList"].type()) {
        vector<QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermissionOfResourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissionOfResourceList = make_shared<vector<QueryAllResourcesWithPermissionsResponseBodyDataPermissionOfResourceList>>(expect1);
      }
    }
    if (m.find("ResourceAttributeList") != m.end() && !m["ResourceAttributeList"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceAttributeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceAttributeList"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      resourceAttributeList = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QueryAllResourcesWithPermissionsResponseBodyData() = default;
};
class QueryAllResourcesWithPermissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QueryAllResourcesWithPermissionsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryAllResourcesWithPermissionsResponseBody() {}

  explicit QueryAllResourcesWithPermissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryAllResourcesWithPermissionsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAllResourcesWithPermissionsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryAllResourcesWithPermissionsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryAllResourcesWithPermissionsResponseBody() = default;
};
class QueryAllResourcesWithPermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAllResourcesWithPermissionsResponseBody> body{};

  QueryAllResourcesWithPermissionsResponse() {}

  explicit QueryAllResourcesWithPermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAllResourcesWithPermissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAllResourcesWithPermissionsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAllResourcesWithPermissionsResponse() = default;
};
class QueryPermissionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceCode{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> roleCode{};
  shared_ptr<string> roleId{};
  shared_ptr<string> tenantId{};

  QueryPermissionsRequest() {}

  explicit QueryPermissionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCode) {
      res["ResourceCode"] = boost::any(*resourceCode);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (roleCode) {
      res["RoleCode"] = boost::any(*roleCode);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceCode") != m.end() && !m["ResourceCode"].empty()) {
      resourceCode = make_shared<string>(boost::any_cast<string>(m["ResourceCode"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("RoleCode") != m.end() && !m["RoleCode"].empty()) {
      roleCode = make_shared<string>(boost::any_cast<string>(m["RoleCode"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryPermissionsRequest() = default;
};
class QueryPermissionsResponseBodyPermissionItemList : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<string> permissionItemId{};
  shared_ptr<string> permissionType{};

  QueryPermissionsResponseBodyPermissionItemList() {}

  explicit QueryPermissionsResponseBodyPermissionItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (permissionItemId) {
      res["PermissionItemId"] = boost::any(*permissionItemId);
    }
    if (permissionType) {
      res["PermissionType"] = boost::any(*permissionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("PermissionItemId") != m.end() && !m["PermissionItemId"].empty()) {
      permissionItemId = make_shared<string>(boost::any_cast<string>(m["PermissionItemId"]));
    }
    if (m.find("PermissionType") != m.end() && !m["PermissionType"].empty()) {
      permissionType = make_shared<string>(boost::any_cast<string>(m["PermissionType"]));
    }
  }


  virtual ~QueryPermissionsResponseBodyPermissionItemList() = default;
};
class QueryPermissionsResponseBodyPermissionList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> permissionId{};

  QueryPermissionsResponseBodyPermissionList() {}

  explicit QueryPermissionsResponseBodyPermissionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (permissionId) {
      res["PermissionId"] = boost::any(*permissionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PermissionId") != m.end() && !m["PermissionId"].empty()) {
      permissionId = make_shared<string>(boost::any_cast<string>(m["PermissionId"]));
    }
  }


  virtual ~QueryPermissionsResponseBodyPermissionList() = default;
};
class QueryPermissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryPermissionsResponseBodyPermissionItemList>> permissionItemList{};
  shared_ptr<vector<QueryPermissionsResponseBodyPermissionList>> permissionList{};
  shared_ptr<string> requestId{};

  QueryPermissionsResponseBody() {}

  explicit QueryPermissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (permissionItemList) {
      vector<boost::any> temp1;
      for(auto item1:*permissionItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermissionItemList"] = boost::any(temp1);
    }
    if (permissionList) {
      vector<boost::any> temp1;
      for(auto item1:*permissionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermissionList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PermissionItemList") != m.end() && !m["PermissionItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["PermissionItemList"].type()) {
        vector<QueryPermissionsResponseBodyPermissionItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermissionItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPermissionsResponseBodyPermissionItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissionItemList = make_shared<vector<QueryPermissionsResponseBodyPermissionItemList>>(expect1);
      }
    }
    if (m.find("PermissionList") != m.end() && !m["PermissionList"].empty()) {
      if (typeid(vector<boost::any>) == m["PermissionList"].type()) {
        vector<QueryPermissionsResponseBodyPermissionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermissionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPermissionsResponseBodyPermissionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissionList = make_shared<vector<QueryPermissionsResponseBodyPermissionList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryPermissionsResponseBody() = default;
};
class QueryPermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPermissionsResponseBody> body{};

  QueryPermissionsResponse() {}

  explicit QueryPermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPermissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPermissionsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPermissionsResponse() = default;
};
class QueryRolesByPartialRoleCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> partialRoleCode{};
  shared_ptr<string> tenantId{};

  QueryRolesByPartialRoleCodeRequest() {}

  explicit QueryRolesByPartialRoleCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (partialRoleCode) {
      res["PartialRoleCode"] = boost::any(*partialRoleCode);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PartialRoleCode") != m.end() && !m["PartialRoleCode"].empty()) {
      partialRoleCode = make_shared<string>(boost::any_cast<string>(m["PartialRoleCode"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~QueryRolesByPartialRoleCodeRequest() = default;
};
class QueryRolesByPartialRoleCodeResponseBodyRoleList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> roleId{};

  QueryRolesByPartialRoleCodeResponseBodyRoleList() {}

  explicit QueryRolesByPartialRoleCodeResponseBodyRoleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
  }


  virtual ~QueryRolesByPartialRoleCodeResponseBodyRoleList() = default;
};
class QueryRolesByPartialRoleCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryRolesByPartialRoleCodeResponseBodyRoleList>> roleList{};

  QueryRolesByPartialRoleCodeResponseBody() {}

  explicit QueryRolesByPartialRoleCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleList) {
      vector<boost::any> temp1;
      for(auto item1:*roleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoleList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleList") != m.end() && !m["RoleList"].empty()) {
      if (typeid(vector<boost::any>) == m["RoleList"].type()) {
        vector<QueryRolesByPartialRoleCodeResponseBodyRoleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRolesByPartialRoleCodeResponseBodyRoleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roleList = make_shared<vector<QueryRolesByPartialRoleCodeResponseBodyRoleList>>(expect1);
      }
    }
  }


  virtual ~QueryRolesByPartialRoleCodeResponseBody() = default;
};
class QueryRolesByPartialRoleCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRolesByPartialRoleCodeResponseBody> body{};

  QueryRolesByPartialRoleCodeResponse() {}

  explicit QueryRolesByPartialRoleCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryRolesByPartialRoleCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRolesByPartialRoleCodeResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRolesByPartialRoleCodeResponse() = default;
};
class RemovePermissionsOfRoleRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> permissionCodes{};
  shared_ptr<map<string, boost::any>> permissionIds{};
  shared_ptr<string> roleCode{};
  shared_ptr<string> roleId{};
  shared_ptr<string> tenantId{};

  RemovePermissionsOfRoleRequest() {}

  explicit RemovePermissionsOfRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionCodes) {
      res["PermissionCodes"] = boost::any(*permissionCodes);
    }
    if (permissionIds) {
      res["PermissionIds"] = boost::any(*permissionIds);
    }
    if (roleCode) {
      res["RoleCode"] = boost::any(*roleCode);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionCodes") != m.end() && !m["PermissionCodes"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["PermissionCodes"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      permissionCodes = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("PermissionIds") != m.end() && !m["PermissionIds"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["PermissionIds"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      permissionIds = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RoleCode") != m.end() && !m["RoleCode"].empty()) {
      roleCode = make_shared<string>(boost::any_cast<string>(m["RoleCode"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~RemovePermissionsOfRoleRequest() = default;
};
class RemovePermissionsOfRoleShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> permissionCodesShrink{};
  shared_ptr<string> permissionIdsShrink{};
  shared_ptr<string> roleCode{};
  shared_ptr<string> roleId{};
  shared_ptr<string> tenantId{};

  RemovePermissionsOfRoleShrinkRequest() {}

  explicit RemovePermissionsOfRoleShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionCodesShrink) {
      res["PermissionCodes"] = boost::any(*permissionCodesShrink);
    }
    if (permissionIdsShrink) {
      res["PermissionIds"] = boost::any(*permissionIdsShrink);
    }
    if (roleCode) {
      res["RoleCode"] = boost::any(*roleCode);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermissionCodes") != m.end() && !m["PermissionCodes"].empty()) {
      permissionCodesShrink = make_shared<string>(boost::any_cast<string>(m["PermissionCodes"]));
    }
    if (m.find("PermissionIds") != m.end() && !m["PermissionIds"].empty()) {
      permissionIdsShrink = make_shared<string>(boost::any_cast<string>(m["PermissionIds"]));
    }
    if (m.find("RoleCode") != m.end() && !m["RoleCode"].empty()) {
      roleCode = make_shared<string>(boost::any_cast<string>(m["RoleCode"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~RemovePermissionsOfRoleShrinkRequest() = default;
};
class RemovePermissionsOfRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RemovePermissionsOfRoleResponseBody() {}

  explicit RemovePermissionsOfRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemovePermissionsOfRoleResponseBody() = default;
};
class RemovePermissionsOfRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemovePermissionsOfRoleResponseBody> body{};

  RemovePermissionsOfRoleResponse() {}

  explicit RemovePermissionsOfRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemovePermissionsOfRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemovePermissionsOfRoleResponseBody>(model1);
      }
    }
  }


  virtual ~RemovePermissionsOfRoleResponse() = default;
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
  AssignPermissionsToRoleResponse assignPermissionsToRoleWithOptions(shared_ptr<AssignPermissionsToRoleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssignPermissionsToRoleResponse assignPermissionsToRole(shared_ptr<AssignPermissionsToRoleRequest> request);
  AssignResourcesToPermissionResponse assignResourcesToPermissionWithOptions(shared_ptr<AssignResourcesToPermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssignResourcesToPermissionResponse assignResourcesToPermission(shared_ptr<AssignResourcesToPermissionRequest> request);
  CheckPermissionOfRoleResponse checkPermissionOfRoleWithOptions(shared_ptr<CheckPermissionOfRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckPermissionOfRoleResponse checkPermissionOfRole(shared_ptr<CheckPermissionOfRoleRequest> request);
  CreatePermissionResponse createPermissionWithOptions(shared_ptr<CreatePermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePermissionResponse createPermission(shared_ptr<CreatePermissionRequest> request);
  CreateResourceResponse createResourceWithOptions(shared_ptr<CreateResourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceResponse createResource(shared_ptr<CreateResourceRequest> request);
  CreateRoleResponse createRoleWithOptions(shared_ptr<CreateRoleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRoleResponse createRole(shared_ptr<CreateRoleRequest> request);
  QueryAllPermissionOfRoleResponse queryAllPermissionOfRoleWithOptions(shared_ptr<QueryAllPermissionOfRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAllPermissionOfRoleResponse queryAllPermissionOfRole(shared_ptr<QueryAllPermissionOfRoleRequest> request);
  QueryAllResourcesWithPermissionsResponse queryAllResourcesWithPermissionsWithOptions(shared_ptr<QueryAllResourcesWithPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAllResourcesWithPermissionsResponse queryAllResourcesWithPermissions(shared_ptr<QueryAllResourcesWithPermissionsRequest> request);
  QueryPermissionsResponse queryPermissionsWithOptions(shared_ptr<QueryPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPermissionsResponse queryPermissions(shared_ptr<QueryPermissionsRequest> request);
  QueryRolesByPartialRoleCodeResponse queryRolesByPartialRoleCodeWithOptions(shared_ptr<QueryRolesByPartialRoleCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRolesByPartialRoleCodeResponse queryRolesByPartialRoleCode(shared_ptr<QueryRolesByPartialRoleCodeRequest> request);
  RemovePermissionsOfRoleResponse removePermissionsOfRoleWithOptions(shared_ptr<RemovePermissionsOfRoleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemovePermissionsOfRoleResponse removePermissionsOfRole(shared_ptr<RemovePermissionsOfRoleRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Linkedmall20210616

#endif
