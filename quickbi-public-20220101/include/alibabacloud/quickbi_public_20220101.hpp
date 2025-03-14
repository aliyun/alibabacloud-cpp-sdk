// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_QUICKBI-PUBLIC20220101_H_
#define ALIBABACLOUD_QUICKBI-PUBLIC20220101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Quickbi-public20220101 {
class AddDataLevelPermissionRuleUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> addUserModel{};

  AddDataLevelPermissionRuleUsersRequest() {}

  explicit AddDataLevelPermissionRuleUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addUserModel) {
      res["AddUserModel"] = boost::any(*addUserModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddUserModel") != m.end() && !m["AddUserModel"].empty()) {
      addUserModel = make_shared<string>(boost::any_cast<string>(m["AddUserModel"]));
    }
  }


  virtual ~AddDataLevelPermissionRuleUsersRequest() = default;
};
class AddDataLevelPermissionRuleUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  AddDataLevelPermissionRuleUsersResponseBody() {}

  explicit AddDataLevelPermissionRuleUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddDataLevelPermissionRuleUsersResponseBody() = default;
};
class AddDataLevelPermissionRuleUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDataLevelPermissionRuleUsersResponseBody> body{};

  AddDataLevelPermissionRuleUsersResponse() {}

  explicit AddDataLevelPermissionRuleUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDataLevelPermissionRuleUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDataLevelPermissionRuleUsersResponseBody>(model1);
      }
    }
  }


  virtual ~AddDataLevelPermissionRuleUsersResponse() = default;
};
class AddDataLevelPermissionWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> operateType{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> targetIds{};
  shared_ptr<string> targetType{};

  AddDataLevelPermissionWhiteListRequest() {}

  explicit AddDataLevelPermissionWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (targetIds) {
      res["TargetIds"] = boost::any(*targetIds);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("TargetIds") != m.end() && !m["TargetIds"].empty()) {
      targetIds = make_shared<string>(boost::any_cast<string>(m["TargetIds"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
  }


  virtual ~AddDataLevelPermissionWhiteListRequest() = default;
};
class AddDataLevelPermissionWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  AddDataLevelPermissionWhiteListResponseBody() {}

  explicit AddDataLevelPermissionWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddDataLevelPermissionWhiteListResponseBody() = default;
};
class AddDataLevelPermissionWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDataLevelPermissionWhiteListResponseBody> body{};

  AddDataLevelPermissionWhiteListResponse() {}

  explicit AddDataLevelPermissionWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDataLevelPermissionWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDataLevelPermissionWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~AddDataLevelPermissionWhiteListResponse() = default;
};
class AddShareReportRequest : public Darabonba::Model {
public:
  shared_ptr<long> authPoint{};
  shared_ptr<long> expireDate{};
  shared_ptr<string> shareToId{};
  shared_ptr<long> shareToType{};
  shared_ptr<string> worksId{};

  AddShareReportRequest() {}

  explicit AddShareReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authPoint) {
      res["AuthPoint"] = boost::any(*authPoint);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (shareToId) {
      res["ShareToId"] = boost::any(*shareToId);
    }
    if (shareToType) {
      res["ShareToType"] = boost::any(*shareToType);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthPoint") != m.end() && !m["AuthPoint"].empty()) {
      authPoint = make_shared<long>(boost::any_cast<long>(m["AuthPoint"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<long>(boost::any_cast<long>(m["ExpireDate"]));
    }
    if (m.find("ShareToId") != m.end() && !m["ShareToId"].empty()) {
      shareToId = make_shared<string>(boost::any_cast<string>(m["ShareToId"]));
    }
    if (m.find("ShareToType") != m.end() && !m["ShareToType"].empty()) {
      shareToType = make_shared<long>(boost::any_cast<long>(m["ShareToType"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
  }


  virtual ~AddShareReportRequest() = default;
};
class AddShareReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  AddShareReportResponseBody() {}

  explicit AddShareReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddShareReportResponseBody() = default;
};
class AddShareReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddShareReportResponseBody> body{};

  AddShareReportResponse() {}

  explicit AddShareReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddShareReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddShareReportResponseBody>(model1);
      }
    }
  }


  virtual ~AddShareReportResponse() = default;
};
class AddUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<bool> adminUser{};
  shared_ptr<bool> authAdminUser{};
  shared_ptr<string> nickName{};
  shared_ptr<string> roleIds{};
  shared_ptr<long> userType{};

  AddUserRequest() {}

  explicit AddUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (adminUser) {
      res["AdminUser"] = boost::any(*adminUser);
    }
    if (authAdminUser) {
      res["AuthAdminUser"] = boost::any(*authAdminUser);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (roleIds) {
      res["RoleIds"] = boost::any(*roleIds);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AdminUser") != m.end() && !m["AdminUser"].empty()) {
      adminUser = make_shared<bool>(boost::any_cast<bool>(m["AdminUser"]));
    }
    if (m.find("AuthAdminUser") != m.end() && !m["AuthAdminUser"].empty()) {
      authAdminUser = make_shared<bool>(boost::any_cast<bool>(m["AuthAdminUser"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("RoleIds") != m.end() && !m["RoleIds"].empty()) {
      roleIds = make_shared<string>(boost::any_cast<string>(m["RoleIds"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<long>(boost::any_cast<long>(m["UserType"]));
    }
  }


  virtual ~AddUserRequest() = default;
};
class AddUserResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<bool> adminUser{};
  shared_ptr<bool> authAdminUser{};
  shared_ptr<string> nickName{};
  shared_ptr<vector<long>> roleIdList{};
  shared_ptr<string> userId{};
  shared_ptr<long> userType{};

  AddUserResponseBodyResult() {}

  explicit AddUserResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (adminUser) {
      res["AdminUser"] = boost::any(*adminUser);
    }
    if (authAdminUser) {
      res["AuthAdminUser"] = boost::any(*authAdminUser);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (roleIdList) {
      res["RoleIdList"] = boost::any(*roleIdList);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AdminUser") != m.end() && !m["AdminUser"].empty()) {
      adminUser = make_shared<bool>(boost::any_cast<bool>(m["AdminUser"]));
    }
    if (m.find("AuthAdminUser") != m.end() && !m["AuthAdminUser"].empty()) {
      authAdminUser = make_shared<bool>(boost::any_cast<bool>(m["AuthAdminUser"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("RoleIdList") != m.end() && !m["RoleIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RoleIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      roleIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<long>(boost::any_cast<long>(m["UserType"]));
    }
  }


  virtual ~AddUserResponseBodyResult() = default;
};
class AddUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AddUserResponseBodyResult> result{};
  shared_ptr<bool> success{};

  AddUserResponseBody() {}

  explicit AddUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        AddUserResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<AddUserResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddUserResponseBody() = default;
};
class AddUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddUserResponseBody> body{};

  AddUserResponse() {}

  explicit AddUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserResponse() = default;
};
class AddUserGroupMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userIdList{};

  AddUserGroupMemberRequest() {}

  explicit AddUserGroupMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userIdList) {
      res["UserIdList"] = boost::any(*userIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserIdList") != m.end() && !m["UserIdList"].empty()) {
      userIdList = make_shared<string>(boost::any_cast<string>(m["UserIdList"]));
    }
  }


  virtual ~AddUserGroupMemberRequest() = default;
};
class AddUserGroupMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  AddUserGroupMemberResponseBody() {}

  explicit AddUserGroupMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddUserGroupMemberResponseBody() = default;
};
class AddUserGroupMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddUserGroupMemberResponseBody> body{};

  AddUserGroupMemberResponse() {}

  explicit AddUserGroupMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserGroupMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserGroupMemberResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserGroupMemberResponse() = default;
};
class AddUserGroupMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> userGroupIds{};
  shared_ptr<string> userId{};

  AddUserGroupMembersRequest() {}

  explicit AddUserGroupMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      userGroupIds = make_shared<string>(boost::any_cast<string>(m["UserGroupIds"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~AddUserGroupMembersRequest() = default;
};
class AddUserGroupMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  AddUserGroupMembersResponseBody() {}

  explicit AddUserGroupMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddUserGroupMembersResponseBody() = default;
};
class AddUserGroupMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddUserGroupMembersResponseBody> body{};

  AddUserGroupMembersResponse() {}

  explicit AddUserGroupMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserGroupMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserGroupMembersResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserGroupMembersResponse() = default;
};
class AddUserTagMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> tagDescription{};
  shared_ptr<string> tagName{};

  AddUserTagMetaRequest() {}

  explicit AddUserTagMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagDescription) {
      res["TagDescription"] = boost::any(*tagDescription);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagDescription") != m.end() && !m["TagDescription"].empty()) {
      tagDescription = make_shared<string>(boost::any_cast<string>(m["TagDescription"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~AddUserTagMetaRequest() = default;
};
class AddUserTagMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  AddUserTagMetaResponseBody() {}

  explicit AddUserTagMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddUserTagMetaResponseBody() = default;
};
class AddUserTagMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddUserTagMetaResponseBody> body{};

  AddUserTagMetaResponse() {}

  explicit AddUserTagMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserTagMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserTagMetaResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserTagMetaResponse() = default;
};
class AddUserToWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<long> roleId{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  AddUserToWorkspaceRequest() {}

  explicit AddUserToWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~AddUserToWorkspaceRequest() = default;
};
class AddUserToWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  AddUserToWorkspaceResponseBody() {}

  explicit AddUserToWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddUserToWorkspaceResponseBody() = default;
};
class AddUserToWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddUserToWorkspaceResponseBody> body{};

  AddUserToWorkspaceResponse() {}

  explicit AddUserToWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserToWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserToWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserToWorkspaceResponse() = default;
};
class AddWorkspaceUsersRequest : public Darabonba::Model {
public:
  shared_ptr<long> roleId{};
  shared_ptr<string> userIds{};
  shared_ptr<string> workspaceId{};

  AddWorkspaceUsersRequest() {}

  explicit AddWorkspaceUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      userIds = make_shared<string>(boost::any_cast<string>(m["UserIds"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~AddWorkspaceUsersRequest() = default;
};
class AddWorkspaceUsersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> failure{};
  shared_ptr<map<string, boost::any>> failureDetail{};
  shared_ptr<long> success{};
  shared_ptr<long> total{};

  AddWorkspaceUsersResponseBodyResult() {}

  explicit AddWorkspaceUsersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failure) {
      res["Failure"] = boost::any(*failure);
    }
    if (failureDetail) {
      res["FailureDetail"] = boost::any(*failureDetail);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Failure") != m.end() && !m["Failure"].empty()) {
      failure = make_shared<long>(boost::any_cast<long>(m["Failure"]));
    }
    if (m.find("FailureDetail") != m.end() && !m["FailureDetail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["FailureDetail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      failureDetail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<long>(boost::any_cast<long>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~AddWorkspaceUsersResponseBodyResult() = default;
};
class AddWorkspaceUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AddWorkspaceUsersResponseBodyResult> result{};
  shared_ptr<bool> success{};

  AddWorkspaceUsersResponseBody() {}

  explicit AddWorkspaceUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        AddWorkspaceUsersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<AddWorkspaceUsersResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddWorkspaceUsersResponseBody() = default;
};
class AddWorkspaceUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddWorkspaceUsersResponseBody> body{};

  AddWorkspaceUsersResponse() {}

  explicit AddWorkspaceUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddWorkspaceUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddWorkspaceUsersResponseBody>(model1);
      }
    }
  }


  virtual ~AddWorkspaceUsersResponse() = default;
};
class AllotDatasetAccelerationTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};

  AllotDatasetAccelerationTaskRequest() {}

  explicit AllotDatasetAccelerationTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
  }


  virtual ~AllotDatasetAccelerationTaskRequest() = default;
};
class AllotDatasetAccelerationTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  AllotDatasetAccelerationTaskResponseBody() {}

  explicit AllotDatasetAccelerationTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AllotDatasetAccelerationTaskResponseBody() = default;
};
class AllotDatasetAccelerationTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AllotDatasetAccelerationTaskResponseBody> body{};

  AllotDatasetAccelerationTaskResponse() {}

  explicit AllotDatasetAccelerationTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllotDatasetAccelerationTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllotDatasetAccelerationTaskResponseBody>(model1);
      }
    }
  }


  virtual ~AllotDatasetAccelerationTaskResponse() = default;
};
class AuthorizeMenuRequest : public Darabonba::Model {
public:
  shared_ptr<long> authPointsValue{};
  shared_ptr<string> dataPortalId{};
  shared_ptr<string> menuIds{};
  shared_ptr<string> userGroupIds{};
  shared_ptr<string> userIds{};

  AuthorizeMenuRequest() {}

  explicit AuthorizeMenuRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authPointsValue) {
      res["AuthPointsValue"] = boost::any(*authPointsValue);
    }
    if (dataPortalId) {
      res["DataPortalId"] = boost::any(*dataPortalId);
    }
    if (menuIds) {
      res["MenuIds"] = boost::any(*menuIds);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthPointsValue") != m.end() && !m["AuthPointsValue"].empty()) {
      authPointsValue = make_shared<long>(boost::any_cast<long>(m["AuthPointsValue"]));
    }
    if (m.find("DataPortalId") != m.end() && !m["DataPortalId"].empty()) {
      dataPortalId = make_shared<string>(boost::any_cast<string>(m["DataPortalId"]));
    }
    if (m.find("MenuIds") != m.end() && !m["MenuIds"].empty()) {
      menuIds = make_shared<string>(boost::any_cast<string>(m["MenuIds"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      userGroupIds = make_shared<string>(boost::any_cast<string>(m["UserGroupIds"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      userIds = make_shared<string>(boost::any_cast<string>(m["UserIds"]));
    }
  }


  virtual ~AuthorizeMenuRequest() = default;
};
class AuthorizeMenuResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> result{};
  shared_ptr<bool> success{};

  AuthorizeMenuResponseBody() {}

  explicit AuthorizeMenuResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AuthorizeMenuResponseBody() = default;
};
class AuthorizeMenuResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuthorizeMenuResponseBody> body{};

  AuthorizeMenuResponse() {}

  explicit AuthorizeMenuResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuthorizeMenuResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuthorizeMenuResponseBody>(model1);
      }
    }
  }


  virtual ~AuthorizeMenuResponse() = default;
};
class BatchAddFeishuUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> feishuUsers{};
  shared_ptr<bool> isAdmin{};
  shared_ptr<bool> isAuthAdmin{};
  shared_ptr<string> userGroupIds{};
  shared_ptr<long> userType{};

  BatchAddFeishuUsersRequest() {}

  explicit BatchAddFeishuUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feishuUsers) {
      res["FeishuUsers"] = boost::any(*feishuUsers);
    }
    if (isAdmin) {
      res["IsAdmin"] = boost::any(*isAdmin);
    }
    if (isAuthAdmin) {
      res["IsAuthAdmin"] = boost::any(*isAuthAdmin);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeishuUsers") != m.end() && !m["FeishuUsers"].empty()) {
      feishuUsers = make_shared<string>(boost::any_cast<string>(m["FeishuUsers"]));
    }
    if (m.find("IsAdmin") != m.end() && !m["IsAdmin"].empty()) {
      isAdmin = make_shared<bool>(boost::any_cast<bool>(m["IsAdmin"]));
    }
    if (m.find("IsAuthAdmin") != m.end() && !m["IsAuthAdmin"].empty()) {
      isAuthAdmin = make_shared<bool>(boost::any_cast<bool>(m["IsAuthAdmin"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      userGroupIds = make_shared<string>(boost::any_cast<string>(m["UserGroupIds"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<long>(boost::any_cast<long>(m["UserType"]));
    }
  }


  virtual ~BatchAddFeishuUsersRequest() = default;
};
class BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> codeDesc{};
  shared_ptr<string> input{};

  BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos() {}

  explicit BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (codeDesc) {
      res["CodeDesc"] = boost::any(*codeDesc);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CodeDesc") != m.end() && !m["CodeDesc"].empty()) {
      codeDesc = make_shared<string>(boost::any_cast<string>(m["CodeDesc"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      input = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
  }


  virtual ~BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos() = default;
};
class BatchAddFeishuUsersResponseBodyResultFailResults : public Darabonba::Model {
public:
  shared_ptr<vector<BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos>> failInfos{};

  BatchAddFeishuUsersResponseBodyResultFailResults() {}

  explicit BatchAddFeishuUsersResponseBodyResultFailResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failInfos) {
      vector<boost::any> temp1;
      for(auto item1:*failInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailInfos") != m.end() && !m["FailInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["FailInfos"].type()) {
        vector<BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failInfos = make_shared<vector<BatchAddFeishuUsersResponseBodyResultFailResultsFailInfos>>(expect1);
      }
    }
  }


  virtual ~BatchAddFeishuUsersResponseBodyResultFailResults() = default;
};
class BatchAddFeishuUsersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> failCount{};
  shared_ptr<vector<BatchAddFeishuUsersResponseBodyResultFailResults>> failResults{};
  shared_ptr<long> okCount{};

  BatchAddFeishuUsersResponseBodyResult() {}

  explicit BatchAddFeishuUsersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failCount) {
      res["FailCount"] = boost::any(*failCount);
    }
    if (failResults) {
      vector<boost::any> temp1;
      for(auto item1:*failResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailResults"] = boost::any(temp1);
    }
    if (okCount) {
      res["OkCount"] = boost::any(*okCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailCount") != m.end() && !m["FailCount"].empty()) {
      failCount = make_shared<long>(boost::any_cast<long>(m["FailCount"]));
    }
    if (m.find("FailResults") != m.end() && !m["FailResults"].empty()) {
      if (typeid(vector<boost::any>) == m["FailResults"].type()) {
        vector<BatchAddFeishuUsersResponseBodyResultFailResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchAddFeishuUsersResponseBodyResultFailResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failResults = make_shared<vector<BatchAddFeishuUsersResponseBodyResultFailResults>>(expect1);
      }
    }
    if (m.find("OkCount") != m.end() && !m["OkCount"].empty()) {
      okCount = make_shared<long>(boost::any_cast<long>(m["OkCount"]));
    }
  }


  virtual ~BatchAddFeishuUsersResponseBodyResult() = default;
};
class BatchAddFeishuUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<BatchAddFeishuUsersResponseBodyResult> result{};
  shared_ptr<bool> success{};

  BatchAddFeishuUsersResponseBody() {}

  explicit BatchAddFeishuUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        BatchAddFeishuUsersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<BatchAddFeishuUsersResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchAddFeishuUsersResponseBody() = default;
};
class BatchAddFeishuUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchAddFeishuUsersResponseBody> body{};

  BatchAddFeishuUsersResponse() {}

  explicit BatchAddFeishuUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchAddFeishuUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchAddFeishuUsersResponseBody>(model1);
      }
    }
  }


  virtual ~BatchAddFeishuUsersResponse() = default;
};
class CancelAuthorizationMenuRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataPortalId{};
  shared_ptr<string> menuIds{};
  shared_ptr<string> userGroupIds{};
  shared_ptr<string> userIds{};

  CancelAuthorizationMenuRequest() {}

  explicit CancelAuthorizationMenuRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPortalId) {
      res["DataPortalId"] = boost::any(*dataPortalId);
    }
    if (menuIds) {
      res["MenuIds"] = boost::any(*menuIds);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataPortalId") != m.end() && !m["DataPortalId"].empty()) {
      dataPortalId = make_shared<string>(boost::any_cast<string>(m["DataPortalId"]));
    }
    if (m.find("MenuIds") != m.end() && !m["MenuIds"].empty()) {
      menuIds = make_shared<string>(boost::any_cast<string>(m["MenuIds"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      userGroupIds = make_shared<string>(boost::any_cast<string>(m["UserGroupIds"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      userIds = make_shared<string>(boost::any_cast<string>(m["UserIds"]));
    }
  }


  virtual ~CancelAuthorizationMenuRequest() = default;
};
class CancelAuthorizationMenuResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> result{};
  shared_ptr<bool> success{};

  CancelAuthorizationMenuResponseBody() {}

  explicit CancelAuthorizationMenuResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelAuthorizationMenuResponseBody() = default;
};
class CancelAuthorizationMenuResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelAuthorizationMenuResponseBody> body{};

  CancelAuthorizationMenuResponse() {}

  explicit CancelAuthorizationMenuResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelAuthorizationMenuResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelAuthorizationMenuResponseBody>(model1);
      }
    }
  }


  virtual ~CancelAuthorizationMenuResponse() = default;
};
class CancelCollectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> worksId{};

  CancelCollectionRequest() {}

  explicit CancelCollectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
  }


  virtual ~CancelCollectionRequest() = default;
};
class CancelCollectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  CancelCollectionResponseBody() {}

  explicit CancelCollectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelCollectionResponseBody() = default;
};
class CancelCollectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelCollectionResponseBody> body{};

  CancelCollectionResponse() {}

  explicit CancelCollectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelCollectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelCollectionResponseBody>(model1);
      }
    }
  }


  virtual ~CancelCollectionResponse() = default;
};
class CancelReportShareRequest : public Darabonba::Model {
public:
  shared_ptr<string> reportId{};
  shared_ptr<string> shareToIds{};
  shared_ptr<long> shareToType{};

  CancelReportShareRequest() {}

  explicit CancelReportShareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (shareToIds) {
      res["ShareToIds"] = boost::any(*shareToIds);
    }
    if (shareToType) {
      res["ShareToType"] = boost::any(*shareToType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("ShareToIds") != m.end() && !m["ShareToIds"].empty()) {
      shareToIds = make_shared<string>(boost::any_cast<string>(m["ShareToIds"]));
    }
    if (m.find("ShareToType") != m.end() && !m["ShareToType"].empty()) {
      shareToType = make_shared<long>(boost::any_cast<long>(m["ShareToType"]));
    }
  }


  virtual ~CancelReportShareRequest() = default;
};
class CancelReportShareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  CancelReportShareResponseBody() {}

  explicit CancelReportShareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CancelReportShareResponseBody() = default;
};
class CancelReportShareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelReportShareResponseBody> body{};

  CancelReportShareResponse() {}

  explicit CancelReportShareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelReportShareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelReportShareResponseBody>(model1);
      }
    }
  }


  virtual ~CancelReportShareResponse() = default;
};
class ChangeVisibilityModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataPortalId{};
  shared_ptr<string> menuIds{};
  shared_ptr<bool> showOnlyWithAccess{};

  ChangeVisibilityModelRequest() {}

  explicit ChangeVisibilityModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPortalId) {
      res["DataPortalId"] = boost::any(*dataPortalId);
    }
    if (menuIds) {
      res["MenuIds"] = boost::any(*menuIds);
    }
    if (showOnlyWithAccess) {
      res["ShowOnlyWithAccess"] = boost::any(*showOnlyWithAccess);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataPortalId") != m.end() && !m["DataPortalId"].empty()) {
      dataPortalId = make_shared<string>(boost::any_cast<string>(m["DataPortalId"]));
    }
    if (m.find("MenuIds") != m.end() && !m["MenuIds"].empty()) {
      menuIds = make_shared<string>(boost::any_cast<string>(m["MenuIds"]));
    }
    if (m.find("ShowOnlyWithAccess") != m.end() && !m["ShowOnlyWithAccess"].empty()) {
      showOnlyWithAccess = make_shared<bool>(boost::any_cast<bool>(m["ShowOnlyWithAccess"]));
    }
  }


  virtual ~ChangeVisibilityModelRequest() = default;
};
class ChangeVisibilityModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> result{};
  shared_ptr<bool> success{};

  ChangeVisibilityModelResponseBody() {}

  explicit ChangeVisibilityModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ChangeVisibilityModelResponseBody() = default;
};
class ChangeVisibilityModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeVisibilityModelResponseBody> body{};

  ChangeVisibilityModelResponse() {}

  explicit ChangeVisibilityModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeVisibilityModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeVisibilityModelResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeVisibilityModelResponse() = default;
};
class CheckReadableRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> worksId{};

  CheckReadableRequest() {}

  explicit CheckReadableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
  }


  virtual ~CheckReadableRequest() = default;
};
class CheckReadableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  CheckReadableResponseBody() {}

  explicit CheckReadableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckReadableResponseBody() = default;
};
class CheckReadableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckReadableResponseBody> body{};

  CheckReadableResponse() {}

  explicit CheckReadableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckReadableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckReadableResponseBody>(model1);
      }
    }
  }


  virtual ~CheckReadableResponse() = default;
};
class CreateTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<long> accountType{};
  shared_ptr<string> cmptId{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> globalParam{};
  shared_ptr<long> ticketNum{};
  shared_ptr<string> userId{};
  shared_ptr<string> watermarkParam{};
  shared_ptr<string> worksId{};

  CreateTicketRequest() {}

  explicit CreateTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (cmptId) {
      res["CmptId"] = boost::any(*cmptId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (globalParam) {
      res["GlobalParam"] = boost::any(*globalParam);
    }
    if (ticketNum) {
      res["TicketNum"] = boost::any(*ticketNum);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (watermarkParam) {
      res["WatermarkParam"] = boost::any(*watermarkParam);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<long>(boost::any_cast<long>(m["AccountType"]));
    }
    if (m.find("CmptId") != m.end() && !m["CmptId"].empty()) {
      cmptId = make_shared<string>(boost::any_cast<string>(m["CmptId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("GlobalParam") != m.end() && !m["GlobalParam"].empty()) {
      globalParam = make_shared<string>(boost::any_cast<string>(m["GlobalParam"]));
    }
    if (m.find("TicketNum") != m.end() && !m["TicketNum"].empty()) {
      ticketNum = make_shared<long>(boost::any_cast<long>(m["TicketNum"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WatermarkParam") != m.end() && !m["WatermarkParam"].empty()) {
      watermarkParam = make_shared<string>(boost::any_cast<string>(m["WatermarkParam"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
  }


  virtual ~CreateTicketRequest() = default;
};
class CreateTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  CreateTicketResponseBody() {}

  explicit CreateTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateTicketResponseBody() = default;
};
class CreateTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTicketResponseBody> body{};

  CreateTicketResponse() {}

  explicit CreateTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTicketResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTicketResponse() = default;
};
class CreateTicket4CopilotRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<long> accountType{};
  shared_ptr<string> copilotId{};
  shared_ptr<long> expireTime{};
  shared_ptr<long> ticketNum{};
  shared_ptr<string> userId{};

  CreateTicket4CopilotRequest() {}

  explicit CreateTicket4CopilotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (copilotId) {
      res["CopilotId"] = boost::any(*copilotId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (ticketNum) {
      res["TicketNum"] = boost::any(*ticketNum);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<long>(boost::any_cast<long>(m["AccountType"]));
    }
    if (m.find("CopilotId") != m.end() && !m["CopilotId"].empty()) {
      copilotId = make_shared<string>(boost::any_cast<string>(m["CopilotId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("TicketNum") != m.end() && !m["TicketNum"].empty()) {
      ticketNum = make_shared<long>(boost::any_cast<long>(m["TicketNum"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateTicket4CopilotRequest() = default;
};
class CreateTicket4CopilotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  CreateTicket4CopilotResponseBody() {}

  explicit CreateTicket4CopilotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateTicket4CopilotResponseBody() = default;
};
class CreateTicket4CopilotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTicket4CopilotResponseBody> body{};

  CreateTicket4CopilotResponse() {}

  explicit CreateTicket4CopilotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTicket4CopilotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTicket4CopilotResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTicket4CopilotResponse() = default;
};
class CreateUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> parentUserGroupId{};
  shared_ptr<string> userGroupDescription{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userGroupName{};

  CreateUserGroupRequest() {}

  explicit CreateUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentUserGroupId) {
      res["ParentUserGroupId"] = boost::any(*parentUserGroupId);
    }
    if (userGroupDescription) {
      res["UserGroupDescription"] = boost::any(*userGroupDescription);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userGroupName) {
      res["UserGroupName"] = boost::any(*userGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentUserGroupId") != m.end() && !m["ParentUserGroupId"].empty()) {
      parentUserGroupId = make_shared<string>(boost::any_cast<string>(m["ParentUserGroupId"]));
    }
    if (m.find("UserGroupDescription") != m.end() && !m["UserGroupDescription"].empty()) {
      userGroupDescription = make_shared<string>(boost::any_cast<string>(m["UserGroupDescription"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserGroupName") != m.end() && !m["UserGroupName"].empty()) {
      userGroupName = make_shared<string>(boost::any_cast<string>(m["UserGroupName"]));
    }
  }


  virtual ~CreateUserGroupRequest() = default;
};
class CreateUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  CreateUserGroupResponseBody() {}

  explicit CreateUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateUserGroupResponseBody() = default;
};
class CreateUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserGroupResponseBody> body{};

  CreateUserGroupResponse() {}

  explicit CreateUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserGroupResponse() = default;
};
class DataSetBloodRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSetIds{};
  shared_ptr<string> userId{};
  shared_ptr<string> worksType{};

  DataSetBloodRequest() {}

  explicit DataSetBloodRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSetIds) {
      res["DataSetIds"] = boost::any(*dataSetIds);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (worksType) {
      res["WorksType"] = boost::any(*worksType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSetIds") != m.end() && !m["DataSetIds"].empty()) {
      dataSetIds = make_shared<string>(boost::any_cast<string>(m["DataSetIds"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorksType") != m.end() && !m["WorksType"].empty()) {
      worksType = make_shared<string>(boost::any_cast<string>(m["WorksType"]));
    }
  }


  virtual ~DataSetBloodRequest() = default;
};
class DataSetBloodResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> worksId{};
  shared_ptr<string> worksType{};

  DataSetBloodResponseBodyResult() {}

  explicit DataSetBloodResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    if (worksType) {
      res["WorksType"] = boost::any(*worksType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
    if (m.find("WorksType") != m.end() && !m["WorksType"].empty()) {
      worksType = make_shared<string>(boost::any_cast<string>(m["WorksType"]));
    }
  }


  virtual ~DataSetBloodResponseBodyResult() = default;
};
class DataSetBloodResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DataSetBloodResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  DataSetBloodResponseBody() {}

  explicit DataSetBloodResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<DataSetBloodResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DataSetBloodResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DataSetBloodResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DataSetBloodResponseBody() = default;
};
class DataSetBloodResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DataSetBloodResponseBody> body{};

  DataSetBloodResponse() {}

  explicit DataSetBloodResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DataSetBloodResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DataSetBloodResponseBody>(model1);
      }
    }
  }


  virtual ~DataSetBloodResponse() = default;
};
class DataSourceBloodRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceId{};

  DataSourceBloodRequest() {}

  explicit DataSourceBloodRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<string>(boost::any_cast<string>(m["DataSourceId"]));
    }
  }


  virtual ~DataSourceBloodRequest() = default;
};
class DataSourceBloodResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> result{};
  shared_ptr<bool> success{};

  DataSourceBloodResponseBody() {}

  explicit DataSourceBloodResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Result"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      result = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DataSourceBloodResponseBody() = default;
};
class DataSourceBloodResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DataSourceBloodResponseBody> body{};

  DataSourceBloodResponse() {}

  explicit DataSourceBloodResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DataSourceBloodResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DataSourceBloodResponseBody>(model1);
      }
    }
  }


  virtual ~DataSourceBloodResponse() = default;
};
class DelayTicketExpireTimeRequest : public Darabonba::Model {
public:
  shared_ptr<long> expireTime{};
  shared_ptr<string> ticket{};

  DelayTicketExpireTimeRequest() {}

  explicit DelayTicketExpireTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (ticket) {
      res["Ticket"] = boost::any(*ticket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("Ticket") != m.end() && !m["Ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["Ticket"]));
    }
  }


  virtual ~DelayTicketExpireTimeRequest() = default;
};
class DelayTicketExpireTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  DelayTicketExpireTimeResponseBody() {}

  explicit DelayTicketExpireTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DelayTicketExpireTimeResponseBody() = default;
};
class DelayTicketExpireTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DelayTicketExpireTimeResponseBody> body{};

  DelayTicketExpireTimeResponse() {}

  explicit DelayTicketExpireTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DelayTicketExpireTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DelayTicketExpireTimeResponseBody>(model1);
      }
    }
  }


  virtual ~DelayTicketExpireTimeResponse() = default;
};
class DeleteDataLevelPermissionRuleUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> deleteUserModel{};

  DeleteDataLevelPermissionRuleUsersRequest() {}

  explicit DeleteDataLevelPermissionRuleUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteUserModel) {
      res["DeleteUserModel"] = boost::any(*deleteUserModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteUserModel") != m.end() && !m["DeleteUserModel"].empty()) {
      deleteUserModel = make_shared<string>(boost::any_cast<string>(m["DeleteUserModel"]));
    }
  }


  virtual ~DeleteDataLevelPermissionRuleUsersRequest() = default;
};
class DeleteDataLevelPermissionRuleUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  DeleteDataLevelPermissionRuleUsersResponseBody() {}

  explicit DeleteDataLevelPermissionRuleUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteDataLevelPermissionRuleUsersResponseBody() = default;
};
class DeleteDataLevelPermissionRuleUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDataLevelPermissionRuleUsersResponseBody> body{};

  DeleteDataLevelPermissionRuleUsersResponse() {}

  explicit DeleteDataLevelPermissionRuleUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDataLevelPermissionRuleUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataLevelPermissionRuleUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataLevelPermissionRuleUsersResponse() = default;
};
class DeleteDataLevelRuleConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> ruleId{};

  DeleteDataLevelRuleConfigRequest() {}

  explicit DeleteDataLevelRuleConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DeleteDataLevelRuleConfigRequest() = default;
};
class DeleteDataLevelRuleConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  DeleteDataLevelRuleConfigResponseBody() {}

  explicit DeleteDataLevelRuleConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteDataLevelRuleConfigResponseBody() = default;
};
class DeleteDataLevelRuleConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDataLevelRuleConfigResponseBody> body{};

  DeleteDataLevelRuleConfigResponse() {}

  explicit DeleteDataLevelRuleConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDataLevelRuleConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataLevelRuleConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataLevelRuleConfigResponse() = default;
};
class DeleteTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> ticket{};

  DeleteTicketRequest() {}

  explicit DeleteTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ticket) {
      res["Ticket"] = boost::any(*ticket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ticket") != m.end() && !m["Ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["Ticket"]));
    }
  }


  virtual ~DeleteTicketRequest() = default;
};
class DeleteTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  DeleteTicketResponseBody() {}

  explicit DeleteTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteTicketResponseBody() = default;
};
class DeleteTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTicketResponseBody> body{};

  DeleteTicketResponse() {}

  explicit DeleteTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTicketResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTicketResponse() = default;
};
class DeleteUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> transferUserId{};
  shared_ptr<string> userId{};

  DeleteUserRequest() {}

  explicit DeleteUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (transferUserId) {
      res["TransferUserId"] = boost::any(*transferUserId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TransferUserId") != m.end() && !m["TransferUserId"].empty()) {
      transferUserId = make_shared<string>(boost::any_cast<string>(m["TransferUserId"]));
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
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

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
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class DeleteUserFromWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  DeleteUserFromWorkspaceRequest() {}

  explicit DeleteUserFromWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~DeleteUserFromWorkspaceRequest() = default;
};
class DeleteUserFromWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  DeleteUserFromWorkspaceResponseBody() {}

  explicit DeleteUserFromWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteUserFromWorkspaceResponseBody() = default;
};
class DeleteUserFromWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserFromWorkspaceResponseBody> body{};

  DeleteUserFromWorkspaceResponse() {}

  explicit DeleteUserFromWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserFromWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserFromWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserFromWorkspaceResponse() = default;
};
class DeleteUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> userGroupId{};

  DeleteUserGroupRequest() {}

  explicit DeleteUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~DeleteUserGroupRequest() = default;
};
class DeleteUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  DeleteUserGroupResponseBody() {}

  explicit DeleteUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteUserGroupResponseBody() = default;
};
class DeleteUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserGroupResponseBody> body{};

  DeleteUserGroupResponse() {}

  explicit DeleteUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserGroupResponse() = default;
};
class DeleteUserGroupMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userId{};

  DeleteUserGroupMemberRequest() {}

  explicit DeleteUserGroupMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteUserGroupMemberRequest() = default;
};
class DeleteUserGroupMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  DeleteUserGroupMemberResponseBody() {}

  explicit DeleteUserGroupMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteUserGroupMemberResponseBody() = default;
};
class DeleteUserGroupMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserGroupMemberResponseBody> body{};

  DeleteUserGroupMemberResponse() {}

  explicit DeleteUserGroupMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserGroupMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserGroupMemberResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserGroupMemberResponse() = default;
};
class DeleteUserGroupMembersRequest : public Darabonba::Model {
public:
  shared_ptr<string> userGroupIds{};
  shared_ptr<string> userId{};

  DeleteUserGroupMembersRequest() {}

  explicit DeleteUserGroupMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      userGroupIds = make_shared<string>(boost::any_cast<string>(m["UserGroupIds"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteUserGroupMembersRequest() = default;
};
class DeleteUserGroupMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  DeleteUserGroupMembersResponseBody() {}

  explicit DeleteUserGroupMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteUserGroupMembersResponseBody() = default;
};
class DeleteUserGroupMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserGroupMembersResponseBody> body{};

  DeleteUserGroupMembersResponse() {}

  explicit DeleteUserGroupMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserGroupMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserGroupMembersResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserGroupMembersResponse() = default;
};
class DeleteUserTagMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> tagId{};

  DeleteUserTagMetaRequest() {}

  explicit DeleteUserTagMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~DeleteUserTagMetaRequest() = default;
};
class DeleteUserTagMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  DeleteUserTagMetaResponseBody() {}

  explicit DeleteUserTagMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteUserTagMetaResponseBody() = default;
};
class DeleteUserTagMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserTagMetaResponseBody> body{};

  DeleteUserTagMetaResponse() {}

  explicit DeleteUserTagMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserTagMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserTagMetaResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserTagMetaResponse() = default;
};
class GetDataSourceConnectionInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> dsId{};

  GetDataSourceConnectionInfoRequest() {}

  explicit GetDataSourceConnectionInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dsId) {
      res["DsId"] = boost::any(*dsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DsId") != m.end() && !m["DsId"].empty()) {
      dsId = make_shared<string>(boost::any_cast<string>(m["DsId"]));
    }
  }


  virtual ~GetDataSourceConnectionInfoRequest() = default;
};
class GetDataSourceConnectionInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> authLevel{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> dsId{};
  shared_ptr<string> dsType{};
  shared_ptr<string> dsVersion{};
  shared_ptr<string> instance{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> modifyUser{};
  shared_ptr<bool> noSasl{};
  shared_ptr<string> parentDsType{};
  shared_ptr<string> port{};
  shared_ptr<string> project{};
  shared_ptr<string> schema{};
  shared_ptr<string> showName{};
  shared_ptr<string> workspaceId{};

  GetDataSourceConnectionInfoResponseBodyResult() {}

  explicit GetDataSourceConnectionInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (authLevel) {
      res["AuthLevel"] = boost::any(*authLevel);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (dsId) {
      res["DsId"] = boost::any(*dsId);
    }
    if (dsType) {
      res["DsType"] = boost::any(*dsType);
    }
    if (dsVersion) {
      res["DsVersion"] = boost::any(*dsVersion);
    }
    if (instance) {
      res["Instance"] = boost::any(*instance);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modifyUser) {
      res["ModifyUser"] = boost::any(*modifyUser);
    }
    if (noSasl) {
      res["NoSasl"] = boost::any(*noSasl);
    }
    if (parentDsType) {
      res["ParentDsType"] = boost::any(*parentDsType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    if (showName) {
      res["ShowName"] = boost::any(*showName);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("AuthLevel") != m.end() && !m["AuthLevel"].empty()) {
      authLevel = make_shared<string>(boost::any_cast<string>(m["AuthLevel"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("DsId") != m.end() && !m["DsId"].empty()) {
      dsId = make_shared<string>(boost::any_cast<string>(m["DsId"]));
    }
    if (m.find("DsType") != m.end() && !m["DsType"].empty()) {
      dsType = make_shared<string>(boost::any_cast<string>(m["DsType"]));
    }
    if (m.find("DsVersion") != m.end() && !m["DsVersion"].empty()) {
      dsVersion = make_shared<string>(boost::any_cast<string>(m["DsVersion"]));
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      instance = make_shared<string>(boost::any_cast<string>(m["Instance"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModifyUser") != m.end() && !m["ModifyUser"].empty()) {
      modifyUser = make_shared<string>(boost::any_cast<string>(m["ModifyUser"]));
    }
    if (m.find("NoSasl") != m.end() && !m["NoSasl"].empty()) {
      noSasl = make_shared<bool>(boost::any_cast<bool>(m["NoSasl"]));
    }
    if (m.find("ParentDsType") != m.end() && !m["ParentDsType"].empty()) {
      parentDsType = make_shared<string>(boost::any_cast<string>(m["ParentDsType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
    if (m.find("ShowName") != m.end() && !m["ShowName"].empty()) {
      showName = make_shared<string>(boost::any_cast<string>(m["ShowName"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetDataSourceConnectionInfoResponseBodyResult() = default;
};
class GetDataSourceConnectionInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetDataSourceConnectionInfoResponseBodyResult> result{};
  shared_ptr<bool> success{};

  GetDataSourceConnectionInfoResponseBody() {}

  explicit GetDataSourceConnectionInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetDataSourceConnectionInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetDataSourceConnectionInfoResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetDataSourceConnectionInfoResponseBody() = default;
};
class GetDataSourceConnectionInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataSourceConnectionInfoResponseBody> body{};

  GetDataSourceConnectionInfoResponse() {}

  explicit GetDataSourceConnectionInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataSourceConnectionInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataSourceConnectionInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataSourceConnectionInfoResponse() = default;
};
class GetMailTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> mailId{};
  shared_ptr<long> taskId{};

  GetMailTaskStatusRequest() {}

  explicit GetMailTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mailId) {
      res["MailId"] = boost::any(*mailId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MailId") != m.end() && !m["MailId"].empty()) {
      mailId = make_shared<string>(boost::any_cast<string>(m["MailId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~GetMailTaskStatusRequest() = default;
};
class GetMailTaskStatusResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> execTime{};
  shared_ptr<string> mailId{};
  shared_ptr<string> status{};
  shared_ptr<long> taskId{};

  GetMailTaskStatusResponseBodyResult() {}

  explicit GetMailTaskStatusResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (execTime) {
      res["execTime"] = boost::any(*execTime);
    }
    if (mailId) {
      res["mailId"] = boost::any(*mailId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("execTime") != m.end() && !m["execTime"].empty()) {
      execTime = make_shared<string>(boost::any_cast<string>(m["execTime"]));
    }
    if (m.find("mailId") != m.end() && !m["mailId"].empty()) {
      mailId = make_shared<string>(boost::any_cast<string>(m["mailId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["taskId"]));
    }
  }


  virtual ~GetMailTaskStatusResponseBodyResult() = default;
};
class GetMailTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetMailTaskStatusResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  GetMailTaskStatusResponseBody() {}

  explicit GetMailTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<GetMailTaskStatusResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMailTaskStatusResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetMailTaskStatusResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetMailTaskStatusResponseBody() = default;
};
class GetMailTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMailTaskStatusResponseBody> body{};

  GetMailTaskStatusResponse() {}

  explicit GetMailTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMailTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMailTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetMailTaskStatusResponse() = default;
};
class GetUserGroupInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};

  GetUserGroupInfoRequest() {}

  explicit GetUserGroupInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
  }


  virtual ~GetUserGroupInfoRequest() = default;
};
class GetUserGroupInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<string> identifiedPath{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> modifyUser{};
  shared_ptr<string> parentUsergroupId{};
  shared_ptr<string> usergroupDesc{};
  shared_ptr<string> usergroupId{};
  shared_ptr<string> usergroupName{};

  GetUserGroupInfoResponseBodyResult() {}

  explicit GetUserGroupInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (identifiedPath) {
      res["IdentifiedPath"] = boost::any(*identifiedPath);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (modifyUser) {
      res["ModifyUser"] = boost::any(*modifyUser);
    }
    if (parentUsergroupId) {
      res["ParentUsergroupId"] = boost::any(*parentUsergroupId);
    }
    if (usergroupDesc) {
      res["UsergroupDesc"] = boost::any(*usergroupDesc);
    }
    if (usergroupId) {
      res["UsergroupId"] = boost::any(*usergroupId);
    }
    if (usergroupName) {
      res["UsergroupName"] = boost::any(*usergroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("IdentifiedPath") != m.end() && !m["IdentifiedPath"].empty()) {
      identifiedPath = make_shared<string>(boost::any_cast<string>(m["IdentifiedPath"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModifyUser") != m.end() && !m["ModifyUser"].empty()) {
      modifyUser = make_shared<string>(boost::any_cast<string>(m["ModifyUser"]));
    }
    if (m.find("ParentUsergroupId") != m.end() && !m["ParentUsergroupId"].empty()) {
      parentUsergroupId = make_shared<string>(boost::any_cast<string>(m["ParentUsergroupId"]));
    }
    if (m.find("UsergroupDesc") != m.end() && !m["UsergroupDesc"].empty()) {
      usergroupDesc = make_shared<string>(boost::any_cast<string>(m["UsergroupDesc"]));
    }
    if (m.find("UsergroupId") != m.end() && !m["UsergroupId"].empty()) {
      usergroupId = make_shared<string>(boost::any_cast<string>(m["UsergroupId"]));
    }
    if (m.find("UsergroupName") != m.end() && !m["UsergroupName"].empty()) {
      usergroupName = make_shared<string>(boost::any_cast<string>(m["UsergroupName"]));
    }
  }


  virtual ~GetUserGroupInfoResponseBodyResult() = default;
};
class GetUserGroupInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetUserGroupInfoResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  GetUserGroupInfoResponseBody() {}

  explicit GetUserGroupInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<GetUserGroupInfoResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserGroupInfoResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetUserGroupInfoResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetUserGroupInfoResponseBody() = default;
};
class GetUserGroupInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserGroupInfoResponseBody> body{};

  GetUserGroupInfoResponse() {}

  explicit GetUserGroupInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserGroupInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserGroupInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserGroupInfoResponse() = default;
};
class GetWorksEmbedListRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> worksType{};
  shared_ptr<string> wsId{};

  GetWorksEmbedListRequest() {}

  explicit GetWorksEmbedListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (worksType) {
      res["WorksType"] = boost::any(*worksType);
    }
    if (wsId) {
      res["WsId"] = boost::any(*wsId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("WorksType") != m.end() && !m["WorksType"].empty()) {
      worksType = make_shared<string>(boost::any_cast<string>(m["WorksType"]));
    }
    if (m.find("WsId") != m.end() && !m["WsId"].empty()) {
      wsId = make_shared<string>(boost::any_cast<string>(m["WsId"]));
    }
  }


  virtual ~GetWorksEmbedListRequest() = default;
};
class GetWorksEmbedListResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<string> embedTime{};
  shared_ptr<string> worksId{};
  shared_ptr<string> worksName{};
  shared_ptr<string> worksType{};
  shared_ptr<string> workspaceId{};

  GetWorksEmbedListResponseBodyResultData() {}

  explicit GetWorksEmbedListResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (embedTime) {
      res["EmbedTime"] = boost::any(*embedTime);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    if (worksName) {
      res["WorksName"] = boost::any(*worksName);
    }
    if (worksType) {
      res["WorksType"] = boost::any(*worksType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmbedTime") != m.end() && !m["EmbedTime"].empty()) {
      embedTime = make_shared<string>(boost::any_cast<string>(m["EmbedTime"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
    if (m.find("WorksName") != m.end() && !m["WorksName"].empty()) {
      worksName = make_shared<string>(boost::any_cast<string>(m["WorksName"]));
    }
    if (m.find("WorksType") != m.end() && !m["WorksType"].empty()) {
      worksType = make_shared<string>(boost::any_cast<string>(m["WorksType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetWorksEmbedListResponseBodyResultData() = default;
};
class GetWorksEmbedListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetWorksEmbedListResponseBodyResultData>> data{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPages{};

  GetWorksEmbedListResponseBodyResult() {}

  explicit GetWorksEmbedListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetWorksEmbedListResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetWorksEmbedListResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetWorksEmbedListResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~GetWorksEmbedListResponseBodyResult() = default;
};
class GetWorksEmbedListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetWorksEmbedListResponseBodyResult> result{};
  shared_ptr<bool> success{};

  GetWorksEmbedListResponseBody() {}

  explicit GetWorksEmbedListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        GetWorksEmbedListResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<GetWorksEmbedListResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetWorksEmbedListResponseBody() = default;
};
class GetWorksEmbedListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWorksEmbedListResponseBody> body{};

  GetWorksEmbedListResponse() {}

  explicit GetWorksEmbedListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWorksEmbedListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorksEmbedListResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorksEmbedListResponse() = default;
};
class ListApiDatasourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyWord{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> workspaceId{};

  ListApiDatasourceRequest() {}

  explicit ListApiDatasourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListApiDatasourceRequest() = default;
};
class ListApiDatasourceResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> body{};
  shared_ptr<double> dataSize{};
  shared_ptr<string> dateUpdateTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> jobId{};
  shared_ptr<string> parameters{};
  shared_ptr<string> showName{};
  shared_ptr<long> statusType{};

  ListApiDatasourceResponseBodyResultData() {}

  explicit ListApiDatasourceResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (dateUpdateTime) {
      res["DateUpdateTime"] = boost::any(*dateUpdateTime);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (showName) {
      res["ShowName"] = boost::any(*showName);
    }
    if (statusType) {
      res["StatusType"] = boost::any(*statusType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<double>(boost::any_cast<double>(m["DataSize"]));
    }
    if (m.find("DateUpdateTime") != m.end() && !m["DateUpdateTime"].empty()) {
      dateUpdateTime = make_shared<string>(boost::any_cast<string>(m["DateUpdateTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("ShowName") != m.end() && !m["ShowName"].empty()) {
      showName = make_shared<string>(boost::any_cast<string>(m["ShowName"]));
    }
    if (m.find("StatusType") != m.end() && !m["StatusType"].empty()) {
      statusType = make_shared<long>(boost::any_cast<long>(m["StatusType"]));
    }
  }


  virtual ~ListApiDatasourceResponseBodyResultData() = default;
};
class ListApiDatasourceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListApiDatasourceResponseBodyResultData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};

  ListApiDatasourceResponseBodyResult() {}

  explicit ListApiDatasourceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListApiDatasourceResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApiDatasourceResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListApiDatasourceResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~ListApiDatasourceResponseBodyResult() = default;
};
class ListApiDatasourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListApiDatasourceResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ListApiDatasourceResponseBody() {}

  explicit ListApiDatasourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListApiDatasourceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListApiDatasourceResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListApiDatasourceResponseBody() = default;
};
class ListApiDatasourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApiDatasourceResponseBody> body{};

  ListApiDatasourceResponse() {}

  explicit ListApiDatasourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApiDatasourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApiDatasourceResponseBody>(model1);
      }
    }
  }


  virtual ~ListApiDatasourceResponse() = default;
};
class ListByUserGroupIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> userGroupIds{};

  ListByUserGroupIdRequest() {}

  explicit ListByUserGroupIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      userGroupIds = make_shared<string>(boost::any_cast<string>(m["UserGroupIds"]));
    }
  }


  virtual ~ListByUserGroupIdRequest() = default;
};
class ListByUserGroupIdResponseBodyResultUserGroupModels : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<string> identifiedPath{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> modifyUser{};
  shared_ptr<string> parentUsergroupId{};
  shared_ptr<string> usergroupDesc{};
  shared_ptr<string> usergroupId{};
  shared_ptr<string> usergroupName{};

  ListByUserGroupIdResponseBodyResultUserGroupModels() {}

  explicit ListByUserGroupIdResponseBodyResultUserGroupModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (identifiedPath) {
      res["IdentifiedPath"] = boost::any(*identifiedPath);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (modifyUser) {
      res["ModifyUser"] = boost::any(*modifyUser);
    }
    if (parentUsergroupId) {
      res["ParentUsergroupId"] = boost::any(*parentUsergroupId);
    }
    if (usergroupDesc) {
      res["UsergroupDesc"] = boost::any(*usergroupDesc);
    }
    if (usergroupId) {
      res["UsergroupId"] = boost::any(*usergroupId);
    }
    if (usergroupName) {
      res["UsergroupName"] = boost::any(*usergroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("IdentifiedPath") != m.end() && !m["IdentifiedPath"].empty()) {
      identifiedPath = make_shared<string>(boost::any_cast<string>(m["IdentifiedPath"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModifyUser") != m.end() && !m["ModifyUser"].empty()) {
      modifyUser = make_shared<string>(boost::any_cast<string>(m["ModifyUser"]));
    }
    if (m.find("ParentUsergroupId") != m.end() && !m["ParentUsergroupId"].empty()) {
      parentUsergroupId = make_shared<string>(boost::any_cast<string>(m["ParentUsergroupId"]));
    }
    if (m.find("UsergroupDesc") != m.end() && !m["UsergroupDesc"].empty()) {
      usergroupDesc = make_shared<string>(boost::any_cast<string>(m["UsergroupDesc"]));
    }
    if (m.find("UsergroupId") != m.end() && !m["UsergroupId"].empty()) {
      usergroupId = make_shared<string>(boost::any_cast<string>(m["UsergroupId"]));
    }
    if (m.find("UsergroupName") != m.end() && !m["UsergroupName"].empty()) {
      usergroupName = make_shared<string>(boost::any_cast<string>(m["UsergroupName"]));
    }
  }


  virtual ~ListByUserGroupIdResponseBodyResultUserGroupModels() = default;
};
class ListByUserGroupIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<string>> failedUserGroupIds{};
  shared_ptr<vector<ListByUserGroupIdResponseBodyResultUserGroupModels>> userGroupModels{};

  ListByUserGroupIdResponseBodyResult() {}

  explicit ListByUserGroupIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedUserGroupIds) {
      res["FailedUserGroupIds"] = boost::any(*failedUserGroupIds);
    }
    if (userGroupModels) {
      vector<boost::any> temp1;
      for(auto item1:*userGroupModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserGroupModels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedUserGroupIds") != m.end() && !m["FailedUserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FailedUserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FailedUserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      failedUserGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserGroupModels") != m.end() && !m["UserGroupModels"].empty()) {
      if (typeid(vector<boost::any>) == m["UserGroupModels"].type()) {
        vector<ListByUserGroupIdResponseBodyResultUserGroupModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserGroupModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListByUserGroupIdResponseBodyResultUserGroupModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userGroupModels = make_shared<vector<ListByUserGroupIdResponseBodyResultUserGroupModels>>(expect1);
      }
    }
  }


  virtual ~ListByUserGroupIdResponseBodyResult() = default;
};
class ListByUserGroupIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListByUserGroupIdResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ListByUserGroupIdResponseBody() {}

  explicit ListByUserGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListByUserGroupIdResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListByUserGroupIdResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListByUserGroupIdResponseBody() = default;
};
class ListByUserGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListByUserGroupIdResponseBody> body{};

  ListByUserGroupIdResponse() {}

  explicit ListByUserGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListByUserGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListByUserGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListByUserGroupIdResponse() = default;
};
class ListCollectionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  ListCollectionsRequest() {}

  explicit ListCollectionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListCollectionsRequest() = default;
};
class ListCollectionsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> favoriteId{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> worksId{};
  shared_ptr<string> worksName{};
  shared_ptr<string> worksType{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  ListCollectionsResponseBodyResult() {}

  explicit ListCollectionsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (favoriteId) {
      res["FavoriteId"] = boost::any(*favoriteId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    if (worksName) {
      res["WorksName"] = boost::any(*worksName);
    }
    if (worksType) {
      res["WorksType"] = boost::any(*worksType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FavoriteId") != m.end() && !m["FavoriteId"].empty()) {
      favoriteId = make_shared<long>(boost::any_cast<long>(m["FavoriteId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
    if (m.find("WorksName") != m.end() && !m["WorksName"].empty()) {
      worksName = make_shared<string>(boost::any_cast<string>(m["WorksName"]));
    }
    if (m.find("WorksType") != m.end() && !m["WorksType"].empty()) {
      worksType = make_shared<string>(boost::any_cast<string>(m["WorksType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~ListCollectionsResponseBodyResult() = default;
};
class ListCollectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListCollectionsResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  ListCollectionsResponseBody() {}

  explicit ListCollectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListCollectionsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCollectionsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListCollectionsResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListCollectionsResponseBody() = default;
};
class ListCollectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCollectionsResponseBody> body{};

  ListCollectionsResponse() {}

  explicit ListCollectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCollectionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCollectionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCollectionsResponse() = default;
};
class ListCubeDataLevelPermissionConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> ruleType{};

  ListCubeDataLevelPermissionConfigRequest() {}

  explicit ListCubeDataLevelPermissionConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~ListCubeDataLevelPermissionConfigRequest() = default;
};
class ListCubeDataLevelPermissionConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  ListCubeDataLevelPermissionConfigResponseBody() {}

  explicit ListCubeDataLevelPermissionConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListCubeDataLevelPermissionConfigResponseBody() = default;
};
class ListCubeDataLevelPermissionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCubeDataLevelPermissionConfigResponseBody> body{};

  ListCubeDataLevelPermissionConfigResponse() {}

  explicit ListCubeDataLevelPermissionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCubeDataLevelPermissionConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCubeDataLevelPermissionConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListCubeDataLevelPermissionConfigResponse() = default;
};
class ListDataLevelPermissionWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> ruleType{};

  ListDataLevelPermissionWhiteListRequest() {}

  explicit ListDataLevelPermissionWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~ListDataLevelPermissionWhiteListRequest() = default;
};
class ListDataLevelPermissionWhiteListResponseBodyResultUsersModel : public Darabonba::Model {
public:
  shared_ptr<vector<string>> userGroups{};
  shared_ptr<vector<string>> users{};

  ListDataLevelPermissionWhiteListResponseBodyResultUsersModel() {}

  explicit ListDataLevelPermissionWhiteListResponseBodyResultUsersModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroups) {
      res["UserGroups"] = boost::any(*userGroups);
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroups") != m.end() && !m["UserGroups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroups = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Users"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      users = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDataLevelPermissionWhiteListResponseBodyResultUsersModel() = default;
};
class ListDataLevelPermissionWhiteListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> ruleType{};
  shared_ptr<ListDataLevelPermissionWhiteListResponseBodyResultUsersModel> usersModel{};

  ListDataLevelPermissionWhiteListResponseBodyResult() {}

  explicit ListDataLevelPermissionWhiteListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (usersModel) {
      res["UsersModel"] = usersModel ? boost::any(usersModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("UsersModel") != m.end() && !m["UsersModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsersModel"].type()) {
        ListDataLevelPermissionWhiteListResponseBodyResultUsersModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsersModel"]));
        usersModel = make_shared<ListDataLevelPermissionWhiteListResponseBodyResultUsersModel>(model1);
      }
    }
  }


  virtual ~ListDataLevelPermissionWhiteListResponseBodyResult() = default;
};
class ListDataLevelPermissionWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListDataLevelPermissionWhiteListResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ListDataLevelPermissionWhiteListResponseBody() {}

  explicit ListDataLevelPermissionWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListDataLevelPermissionWhiteListResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListDataLevelPermissionWhiteListResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListDataLevelPermissionWhiteListResponseBody() = default;
};
class ListDataLevelPermissionWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataLevelPermissionWhiteListResponseBody> body{};

  ListDataLevelPermissionWhiteListResponse() {}

  explicit ListDataLevelPermissionWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataLevelPermissionWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataLevelPermissionWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataLevelPermissionWhiteListResponse() = default;
};
class ListDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dsType{};
  shared_ptr<string> workspaceId{};

  ListDataSourceRequest() {}

  explicit ListDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dsType) {
      res["DsType"] = boost::any(*dsType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DsType") != m.end() && !m["DsType"].empty()) {
      dsType = make_shared<string>(boost::any_cast<string>(m["DsType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListDataSourceRequest() = default;
};
class ListDataSourceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> creatorId{};
  shared_ptr<string> creatorName{};
  shared_ptr<string> datasourceId{};
  shared_ptr<string> dsType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> parentDsType{};
  shared_ptr<string> showName{};

  ListDataSourceResponseBodyResult() {}

  explicit ListDataSourceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (datasourceId) {
      res["DatasourceId"] = boost::any(*datasourceId);
    }
    if (dsType) {
      res["DsType"] = boost::any(*dsType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (parentDsType) {
      res["ParentDsType"] = boost::any(*parentDsType);
    }
    if (showName) {
      res["ShowName"] = boost::any(*showName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("DatasourceId") != m.end() && !m["DatasourceId"].empty()) {
      datasourceId = make_shared<string>(boost::any_cast<string>(m["DatasourceId"]));
    }
    if (m.find("DsType") != m.end() && !m["DsType"].empty()) {
      dsType = make_shared<string>(boost::any_cast<string>(m["DsType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("ParentDsType") != m.end() && !m["ParentDsType"].empty()) {
      parentDsType = make_shared<string>(boost::any_cast<string>(m["ParentDsType"]));
    }
    if (m.find("ShowName") != m.end() && !m["ShowName"].empty()) {
      showName = make_shared<string>(boost::any_cast<string>(m["ShowName"]));
    }
  }


  virtual ~ListDataSourceResponseBodyResult() = default;
};
class ListDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDataSourceResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  ListDataSourceResponseBody() {}

  explicit ListDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListDataSourceResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDataSourceResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListDataSourceResponseBody() = default;
};
class ListDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSourceResponseBody> body{};

  ListDataSourceResponse() {}

  explicit ListDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourceResponse() = default;
};
class ListFavoriteReportsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> treeType{};
  shared_ptr<string> userId{};

  ListFavoriteReportsRequest() {}

  explicit ListFavoriteReportsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (treeType) {
      res["TreeType"] = boost::any(*treeType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TreeType") != m.end() && !m["TreeType"].empty()) {
      treeType = make_shared<string>(boost::any_cast<string>(m["TreeType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListFavoriteReportsRequest() = default;
};
class ListFavoriteReportsResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<bool> favorite{};
  shared_ptr<string> favoriteDate{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> hasEditAuth{};
  shared_ptr<bool> hasViewAuth{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> ownerNum{};
  shared_ptr<long> publishStatus{};
  shared_ptr<string> treeId{};
  shared_ptr<string> type{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  ListFavoriteReportsResponseBodyResultData() {}

  explicit ListFavoriteReportsResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (favorite) {
      res["Favorite"] = boost::any(*favorite);
    }
    if (favoriteDate) {
      res["FavoriteDate"] = boost::any(*favoriteDate);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (hasEditAuth) {
      res["HasEditAuth"] = boost::any(*hasEditAuth);
    }
    if (hasViewAuth) {
      res["HasViewAuth"] = boost::any(*hasViewAuth);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (ownerNum) {
      res["OwnerNum"] = boost::any(*ownerNum);
    }
    if (publishStatus) {
      res["PublishStatus"] = boost::any(*publishStatus);
    }
    if (treeId) {
      res["TreeId"] = boost::any(*treeId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Favorite") != m.end() && !m["Favorite"].empty()) {
      favorite = make_shared<bool>(boost::any_cast<bool>(m["Favorite"]));
    }
    if (m.find("FavoriteDate") != m.end() && !m["FavoriteDate"].empty()) {
      favoriteDate = make_shared<string>(boost::any_cast<string>(m["FavoriteDate"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("HasEditAuth") != m.end() && !m["HasEditAuth"].empty()) {
      hasEditAuth = make_shared<bool>(boost::any_cast<bool>(m["HasEditAuth"]));
    }
    if (m.find("HasViewAuth") != m.end() && !m["HasViewAuth"].empty()) {
      hasViewAuth = make_shared<bool>(boost::any_cast<bool>(m["HasViewAuth"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("OwnerNum") != m.end() && !m["OwnerNum"].empty()) {
      ownerNum = make_shared<string>(boost::any_cast<string>(m["OwnerNum"]));
    }
    if (m.find("PublishStatus") != m.end() && !m["PublishStatus"].empty()) {
      publishStatus = make_shared<long>(boost::any_cast<long>(m["PublishStatus"]));
    }
    if (m.find("TreeId") != m.end() && !m["TreeId"].empty()) {
      treeId = make_shared<string>(boost::any_cast<string>(m["TreeId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~ListFavoriteReportsResponseBodyResultData() = default;
};
class ListFavoriteReportsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListFavoriteReportsResponseBodyResultData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPages{};

  ListFavoriteReportsResponseBodyResult() {}

  explicit ListFavoriteReportsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListFavoriteReportsResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFavoriteReportsResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListFavoriteReportsResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListFavoriteReportsResponseBodyResult() = default;
};
class ListFavoriteReportsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListFavoriteReportsResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ListFavoriteReportsResponseBody() {}

  explicit ListFavoriteReportsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListFavoriteReportsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListFavoriteReportsResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListFavoriteReportsResponseBody() = default;
};
class ListFavoriteReportsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFavoriteReportsResponseBody> body{};

  ListFavoriteReportsResponse() {}

  explicit ListFavoriteReportsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFavoriteReportsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFavoriteReportsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFavoriteReportsResponse() = default;
};
class ListOrganizationRoleUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> roleId{};

  ListOrganizationRoleUsersRequest() {}

  explicit ListOrganizationRoleUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
  }


  virtual ~ListOrganizationRoleUsersRequest() = default;
};
class ListOrganizationRoleUsersResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<string> nickName{};
  shared_ptr<string> userId{};

  ListOrganizationRoleUsersResponseBodyResultData() {}

  explicit ListOrganizationRoleUsersResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListOrganizationRoleUsersResponseBodyResultData() = default;
};
class ListOrganizationRoleUsersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListOrganizationRoleUsersResponseBodyResultData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPages{};

  ListOrganizationRoleUsersResponseBodyResult() {}

  explicit ListOrganizationRoleUsersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListOrganizationRoleUsersResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrganizationRoleUsersResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListOrganizationRoleUsersResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListOrganizationRoleUsersResponseBodyResult() = default;
};
class ListOrganizationRoleUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListOrganizationRoleUsersResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ListOrganizationRoleUsersResponseBody() {}

  explicit ListOrganizationRoleUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListOrganizationRoleUsersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListOrganizationRoleUsersResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListOrganizationRoleUsersResponseBody() = default;
};
class ListOrganizationRoleUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOrganizationRoleUsersResponseBody> body{};

  ListOrganizationRoleUsersResponse() {}

  explicit ListOrganizationRoleUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrganizationRoleUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrganizationRoleUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrganizationRoleUsersResponse() = default;
};
class ListOrganizationRolesResponseBodyResultAuthConfigList : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};

  ListOrganizationRolesResponseBodyResultAuthConfigList() {}

  explicit ListOrganizationRolesResponseBodyResultAuthConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
  }


  virtual ~ListOrganizationRolesResponseBodyResultAuthConfigList() = default;
};
class ListOrganizationRolesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListOrganizationRolesResponseBodyResultAuthConfigList>> authConfigList{};
  shared_ptr<bool> isSystemRole{};
  shared_ptr<long> roleId{};
  shared_ptr<string> roleName{};

  ListOrganizationRolesResponseBodyResult() {}

  explicit ListOrganizationRolesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authConfigList) {
      vector<boost::any> temp1;
      for(auto item1:*authConfigList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthConfigList"] = boost::any(temp1);
    }
    if (isSystemRole) {
      res["IsSystemRole"] = boost::any(*isSystemRole);
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
    if (m.find("AuthConfigList") != m.end() && !m["AuthConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthConfigList"].type()) {
        vector<ListOrganizationRolesResponseBodyResultAuthConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrganizationRolesResponseBodyResultAuthConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authConfigList = make_shared<vector<ListOrganizationRolesResponseBodyResultAuthConfigList>>(expect1);
      }
    }
    if (m.find("IsSystemRole") != m.end() && !m["IsSystemRole"].empty()) {
      isSystemRole = make_shared<bool>(boost::any_cast<bool>(m["IsSystemRole"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~ListOrganizationRolesResponseBodyResult() = default;
};
class ListOrganizationRolesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListOrganizationRolesResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  ListOrganizationRolesResponseBody() {}

  explicit ListOrganizationRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListOrganizationRolesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrganizationRolesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListOrganizationRolesResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListOrganizationRolesResponseBody() = default;
};
class ListOrganizationRolesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOrganizationRolesResponseBody> body{};

  ListOrganizationRolesResponse() {}

  explicit ListOrganizationRolesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrganizationRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrganizationRolesResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrganizationRolesResponse() = default;
};
class ListPortalMenuAuthorizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataPortalId{};

  ListPortalMenuAuthorizationRequest() {}

  explicit ListPortalMenuAuthorizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPortalId) {
      res["DataPortalId"] = boost::any(*dataPortalId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataPortalId") != m.end() && !m["DataPortalId"].empty()) {
      dataPortalId = make_shared<string>(boost::any_cast<string>(m["DataPortalId"]));
    }
  }


  virtual ~ListPortalMenuAuthorizationRequest() = default;
};
class ListPortalMenuAuthorizationResponseBodyResultReceivers : public Darabonba::Model {
public:
  shared_ptr<string> receiverId{};
  shared_ptr<long> receiverType{};

  ListPortalMenuAuthorizationResponseBodyResultReceivers() {}

  explicit ListPortalMenuAuthorizationResponseBodyResultReceivers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (receiverId) {
      res["ReceiverId"] = boost::any(*receiverId);
    }
    if (receiverType) {
      res["ReceiverType"] = boost::any(*receiverType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReceiverId") != m.end() && !m["ReceiverId"].empty()) {
      receiverId = make_shared<string>(boost::any_cast<string>(m["ReceiverId"]));
    }
    if (m.find("ReceiverType") != m.end() && !m["ReceiverType"].empty()) {
      receiverType = make_shared<long>(boost::any_cast<long>(m["ReceiverType"]));
    }
  }


  virtual ~ListPortalMenuAuthorizationResponseBodyResultReceivers() = default;
};
class ListPortalMenuAuthorizationResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> menuId{};
  shared_ptr<vector<ListPortalMenuAuthorizationResponseBodyResultReceivers>> receivers{};
  shared_ptr<bool> showOnlyWithAccess{};

  ListPortalMenuAuthorizationResponseBodyResult() {}

  explicit ListPortalMenuAuthorizationResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (menuId) {
      res["MenuId"] = boost::any(*menuId);
    }
    if (receivers) {
      vector<boost::any> temp1;
      for(auto item1:*receivers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Receivers"] = boost::any(temp1);
    }
    if (showOnlyWithAccess) {
      res["ShowOnlyWithAccess"] = boost::any(*showOnlyWithAccess);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MenuId") != m.end() && !m["MenuId"].empty()) {
      menuId = make_shared<string>(boost::any_cast<string>(m["MenuId"]));
    }
    if (m.find("Receivers") != m.end() && !m["Receivers"].empty()) {
      if (typeid(vector<boost::any>) == m["Receivers"].type()) {
        vector<ListPortalMenuAuthorizationResponseBodyResultReceivers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Receivers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPortalMenuAuthorizationResponseBodyResultReceivers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        receivers = make_shared<vector<ListPortalMenuAuthorizationResponseBodyResultReceivers>>(expect1);
      }
    }
    if (m.find("ShowOnlyWithAccess") != m.end() && !m["ShowOnlyWithAccess"].empty()) {
      showOnlyWithAccess = make_shared<bool>(boost::any_cast<bool>(m["ShowOnlyWithAccess"]));
    }
  }


  virtual ~ListPortalMenuAuthorizationResponseBodyResult() = default;
};
class ListPortalMenuAuthorizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListPortalMenuAuthorizationResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  ListPortalMenuAuthorizationResponseBody() {}

  explicit ListPortalMenuAuthorizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListPortalMenuAuthorizationResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPortalMenuAuthorizationResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListPortalMenuAuthorizationResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListPortalMenuAuthorizationResponseBody() = default;
};
class ListPortalMenuAuthorizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPortalMenuAuthorizationResponseBody> body{};

  ListPortalMenuAuthorizationResponse() {}

  explicit ListPortalMenuAuthorizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPortalMenuAuthorizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPortalMenuAuthorizationResponseBody>(model1);
      }
    }
  }


  virtual ~ListPortalMenuAuthorizationResponse() = default;
};
class ListPortalMenusRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataPortalId{};
  shared_ptr<string> userId{};

  ListPortalMenusRequest() {}

  explicit ListPortalMenusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataPortalId) {
      res["DataPortalId"] = boost::any(*dataPortalId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataPortalId") != m.end() && !m["DataPortalId"].empty()) {
      dataPortalId = make_shared<string>(boost::any_cast<string>(m["DataPortalId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListPortalMenusRequest() = default;
};
class ListPortalMenusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  ListPortalMenusResponseBody() {}

  explicit ListPortalMenusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListPortalMenusResponseBody() = default;
};
class ListPortalMenusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPortalMenusResponseBody> body{};

  ListPortalMenusResponse() {}

  explicit ListPortalMenusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPortalMenusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPortalMenusResponseBody>(model1);
      }
    }
  }


  virtual ~ListPortalMenusResponse() = default;
};
class ListRecentViewReportsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> offsetDay{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryMode{};
  shared_ptr<string> treeType{};
  shared_ptr<string> userId{};

  ListRecentViewReportsRequest() {}

  explicit ListRecentViewReportsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (offsetDay) {
      res["OffsetDay"] = boost::any(*offsetDay);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryMode) {
      res["QueryMode"] = boost::any(*queryMode);
    }
    if (treeType) {
      res["TreeType"] = boost::any(*treeType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("OffsetDay") != m.end() && !m["OffsetDay"].empty()) {
      offsetDay = make_shared<long>(boost::any_cast<long>(m["OffsetDay"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryMode") != m.end() && !m["QueryMode"].empty()) {
      queryMode = make_shared<string>(boost::any_cast<string>(m["QueryMode"]));
    }
    if (m.find("TreeType") != m.end() && !m["TreeType"].empty()) {
      treeType = make_shared<string>(boost::any_cast<string>(m["TreeType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListRecentViewReportsRequest() = default;
};
class ListRecentViewReportsResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<bool> favorite{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> hasEditAuth{};
  shared_ptr<bool> hasViewAuth{};
  shared_ptr<string> latestViewTime{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> ownerNum{};
  shared_ptr<long> publishStatus{};
  shared_ptr<string> treeId{};
  shared_ptr<string> type{};
  shared_ptr<long> viewCount{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  ListRecentViewReportsResponseBodyResultData() {}

  explicit ListRecentViewReportsResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (favorite) {
      res["Favorite"] = boost::any(*favorite);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (hasEditAuth) {
      res["HasEditAuth"] = boost::any(*hasEditAuth);
    }
    if (hasViewAuth) {
      res["HasViewAuth"] = boost::any(*hasViewAuth);
    }
    if (latestViewTime) {
      res["LatestViewTime"] = boost::any(*latestViewTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (ownerNum) {
      res["OwnerNum"] = boost::any(*ownerNum);
    }
    if (publishStatus) {
      res["PublishStatus"] = boost::any(*publishStatus);
    }
    if (treeId) {
      res["TreeId"] = boost::any(*treeId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (viewCount) {
      res["ViewCount"] = boost::any(*viewCount);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Favorite") != m.end() && !m["Favorite"].empty()) {
      favorite = make_shared<bool>(boost::any_cast<bool>(m["Favorite"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("HasEditAuth") != m.end() && !m["HasEditAuth"].empty()) {
      hasEditAuth = make_shared<bool>(boost::any_cast<bool>(m["HasEditAuth"]));
    }
    if (m.find("HasViewAuth") != m.end() && !m["HasViewAuth"].empty()) {
      hasViewAuth = make_shared<bool>(boost::any_cast<bool>(m["HasViewAuth"]));
    }
    if (m.find("LatestViewTime") != m.end() && !m["LatestViewTime"].empty()) {
      latestViewTime = make_shared<string>(boost::any_cast<string>(m["LatestViewTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("OwnerNum") != m.end() && !m["OwnerNum"].empty()) {
      ownerNum = make_shared<string>(boost::any_cast<string>(m["OwnerNum"]));
    }
    if (m.find("PublishStatus") != m.end() && !m["PublishStatus"].empty()) {
      publishStatus = make_shared<long>(boost::any_cast<long>(m["PublishStatus"]));
    }
    if (m.find("TreeId") != m.end() && !m["TreeId"].empty()) {
      treeId = make_shared<string>(boost::any_cast<string>(m["TreeId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ViewCount") != m.end() && !m["ViewCount"].empty()) {
      viewCount = make_shared<long>(boost::any_cast<long>(m["ViewCount"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~ListRecentViewReportsResponseBodyResultData() = default;
};
class ListRecentViewReportsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> attention{};
  shared_ptr<vector<ListRecentViewReportsResponseBodyResultData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPages{};

  ListRecentViewReportsResponseBodyResult() {}

  explicit ListRecentViewReportsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attention) {
      res["Attention"] = boost::any(*attention);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attention") != m.end() && !m["Attention"].empty()) {
      attention = make_shared<string>(boost::any_cast<string>(m["Attention"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListRecentViewReportsResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRecentViewReportsResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListRecentViewReportsResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListRecentViewReportsResponseBodyResult() = default;
};
class ListRecentViewReportsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListRecentViewReportsResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ListRecentViewReportsResponseBody() {}

  explicit ListRecentViewReportsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListRecentViewReportsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListRecentViewReportsResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListRecentViewReportsResponseBody() = default;
};
class ListRecentViewReportsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRecentViewReportsResponseBody> body{};

  ListRecentViewReportsResponse() {}

  explicit ListRecentViewReportsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRecentViewReportsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRecentViewReportsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRecentViewReportsResponse() = default;
};
class ListSharedReportsRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> treeType{};
  shared_ptr<string> userId{};

  ListSharedReportsRequest() {}

  explicit ListSharedReportsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (treeType) {
      res["TreeType"] = boost::any(*treeType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TreeType") != m.end() && !m["TreeType"].empty()) {
      treeType = make_shared<string>(boost::any_cast<string>(m["TreeType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListSharedReportsRequest() = default;
};
class ListSharedReportsResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<bool> favorite{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<bool> hasEditAuth{};
  shared_ptr<bool> hasViewAuth{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> ownerNum{};
  shared_ptr<long> publishStatus{};
  shared_ptr<string> treeId{};
  shared_ptr<string> type{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  ListSharedReportsResponseBodyResultData() {}

  explicit ListSharedReportsResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (favorite) {
      res["Favorite"] = boost::any(*favorite);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (hasEditAuth) {
      res["HasEditAuth"] = boost::any(*hasEditAuth);
    }
    if (hasViewAuth) {
      res["HasViewAuth"] = boost::any(*hasViewAuth);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (ownerNum) {
      res["OwnerNum"] = boost::any(*ownerNum);
    }
    if (publishStatus) {
      res["PublishStatus"] = boost::any(*publishStatus);
    }
    if (treeId) {
      res["TreeId"] = boost::any(*treeId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Favorite") != m.end() && !m["Favorite"].empty()) {
      favorite = make_shared<bool>(boost::any_cast<bool>(m["Favorite"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("HasEditAuth") != m.end() && !m["HasEditAuth"].empty()) {
      hasEditAuth = make_shared<bool>(boost::any_cast<bool>(m["HasEditAuth"]));
    }
    if (m.find("HasViewAuth") != m.end() && !m["HasViewAuth"].empty()) {
      hasViewAuth = make_shared<bool>(boost::any_cast<bool>(m["HasViewAuth"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("OwnerNum") != m.end() && !m["OwnerNum"].empty()) {
      ownerNum = make_shared<string>(boost::any_cast<string>(m["OwnerNum"]));
    }
    if (m.find("PublishStatus") != m.end() && !m["PublishStatus"].empty()) {
      publishStatus = make_shared<long>(boost::any_cast<long>(m["PublishStatus"]));
    }
    if (m.find("TreeId") != m.end() && !m["TreeId"].empty()) {
      treeId = make_shared<string>(boost::any_cast<string>(m["TreeId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~ListSharedReportsResponseBodyResultData() = default;
};
class ListSharedReportsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListSharedReportsResponseBodyResultData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPages{};

  ListSharedReportsResponseBodyResult() {}

  explicit ListSharedReportsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListSharedReportsResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSharedReportsResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListSharedReportsResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListSharedReportsResponseBodyResult() = default;
};
class ListSharedReportsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListSharedReportsResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ListSharedReportsResponseBody() {}

  explicit ListSharedReportsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListSharedReportsResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListSharedReportsResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListSharedReportsResponseBody() = default;
};
class ListSharedReportsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSharedReportsResponseBody> body{};

  ListSharedReportsResponse() {}

  explicit ListSharedReportsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSharedReportsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSharedReportsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSharedReportsResponse() = default;
};
class ListUserGroupsByUserIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  ListUserGroupsByUserIdRequest() {}

  explicit ListUserGroupsByUserIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListUserGroupsByUserIdRequest() = default;
};
class ListUserGroupsByUserIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<string> identifiedPath{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> modifyUser{};
  shared_ptr<string> parentUsergroupId{};
  shared_ptr<string> usergroupDesc{};
  shared_ptr<string> usergroupId{};
  shared_ptr<string> usergroupName{};

  ListUserGroupsByUserIdResponseBodyResult() {}

  explicit ListUserGroupsByUserIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (identifiedPath) {
      res["IdentifiedPath"] = boost::any(*identifiedPath);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (modifyUser) {
      res["ModifyUser"] = boost::any(*modifyUser);
    }
    if (parentUsergroupId) {
      res["ParentUsergroupId"] = boost::any(*parentUsergroupId);
    }
    if (usergroupDesc) {
      res["UsergroupDesc"] = boost::any(*usergroupDesc);
    }
    if (usergroupId) {
      res["UsergroupId"] = boost::any(*usergroupId);
    }
    if (usergroupName) {
      res["UsergroupName"] = boost::any(*usergroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("IdentifiedPath") != m.end() && !m["IdentifiedPath"].empty()) {
      identifiedPath = make_shared<string>(boost::any_cast<string>(m["IdentifiedPath"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModifyUser") != m.end() && !m["ModifyUser"].empty()) {
      modifyUser = make_shared<string>(boost::any_cast<string>(m["ModifyUser"]));
    }
    if (m.find("ParentUsergroupId") != m.end() && !m["ParentUsergroupId"].empty()) {
      parentUsergroupId = make_shared<string>(boost::any_cast<string>(m["ParentUsergroupId"]));
    }
    if (m.find("UsergroupDesc") != m.end() && !m["UsergroupDesc"].empty()) {
      usergroupDesc = make_shared<string>(boost::any_cast<string>(m["UsergroupDesc"]));
    }
    if (m.find("UsergroupId") != m.end() && !m["UsergroupId"].empty()) {
      usergroupId = make_shared<string>(boost::any_cast<string>(m["UsergroupId"]));
    }
    if (m.find("UsergroupName") != m.end() && !m["UsergroupName"].empty()) {
      usergroupName = make_shared<string>(boost::any_cast<string>(m["UsergroupName"]));
    }
  }


  virtual ~ListUserGroupsByUserIdResponseBodyResult() = default;
};
class ListUserGroupsByUserIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListUserGroupsByUserIdResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  ListUserGroupsByUserIdResponseBody() {}

  explicit ListUserGroupsByUserIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListUserGroupsByUserIdResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupsByUserIdResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListUserGroupsByUserIdResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListUserGroupsByUserIdResponseBody() = default;
};
class ListUserGroupsByUserIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserGroupsByUserIdResponseBody> body{};

  ListUserGroupsByUserIdResponse() {}

  explicit ListUserGroupsByUserIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserGroupsByUserIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserGroupsByUserIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserGroupsByUserIdResponse() = default;
};
class ListWorkspaceRoleUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> roleId{};
  shared_ptr<string> workspaceId{};

  ListWorkspaceRoleUsersRequest() {}

  explicit ListWorkspaceRoleUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListWorkspaceRoleUsersRequest() = default;
};
class ListWorkspaceRoleUsersResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<string> nickName{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  ListWorkspaceRoleUsersResponseBodyResultData() {}

  explicit ListWorkspaceRoleUsersResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~ListWorkspaceRoleUsersResponseBodyResultData() = default;
};
class ListWorkspaceRoleUsersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListWorkspaceRoleUsersResponseBodyResultData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPages{};

  ListWorkspaceRoleUsersResponseBodyResult() {}

  explicit ListWorkspaceRoleUsersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListWorkspaceRoleUsersResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkspaceRoleUsersResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListWorkspaceRoleUsersResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~ListWorkspaceRoleUsersResponseBodyResult() = default;
};
class ListWorkspaceRoleUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListWorkspaceRoleUsersResponseBodyResult> result{};
  shared_ptr<bool> success{};

  ListWorkspaceRoleUsersResponseBody() {}

  explicit ListWorkspaceRoleUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        ListWorkspaceRoleUsersResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<ListWorkspaceRoleUsersResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListWorkspaceRoleUsersResponseBody() = default;
};
class ListWorkspaceRoleUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkspaceRoleUsersResponseBody> body{};

  ListWorkspaceRoleUsersResponse() {}

  explicit ListWorkspaceRoleUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWorkspaceRoleUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkspaceRoleUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkspaceRoleUsersResponse() = default;
};
class ListWorkspaceRolesRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  ListWorkspaceRolesRequest() {}

  explicit ListWorkspaceRolesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListWorkspaceRolesRequest() = default;
};
class ListWorkspaceRolesResponseBodyResultAuthConfigList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actionAuthKeys{};
  shared_ptr<string> authKey{};

  ListWorkspaceRolesResponseBodyResultAuthConfigList() {}

  explicit ListWorkspaceRolesResponseBodyResultAuthConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionAuthKeys) {
      res["ActionAuthKeys"] = boost::any(*actionAuthKeys);
    }
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionAuthKeys") != m.end() && !m["ActionAuthKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ActionAuthKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ActionAuthKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actionAuthKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
  }


  virtual ~ListWorkspaceRolesResponseBodyResultAuthConfigList() = default;
};
class ListWorkspaceRolesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListWorkspaceRolesResponseBodyResultAuthConfigList>> authConfigList{};
  shared_ptr<bool> isSystemRole{};
  shared_ptr<long> roleId{};
  shared_ptr<string> roleName{};

  ListWorkspaceRolesResponseBodyResult() {}

  explicit ListWorkspaceRolesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authConfigList) {
      vector<boost::any> temp1;
      for(auto item1:*authConfigList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthConfigList"] = boost::any(temp1);
    }
    if (isSystemRole) {
      res["IsSystemRole"] = boost::any(*isSystemRole);
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
    if (m.find("AuthConfigList") != m.end() && !m["AuthConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthConfigList"].type()) {
        vector<ListWorkspaceRolesResponseBodyResultAuthConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkspaceRolesResponseBodyResultAuthConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authConfigList = make_shared<vector<ListWorkspaceRolesResponseBodyResultAuthConfigList>>(expect1);
      }
    }
    if (m.find("IsSystemRole") != m.end() && !m["IsSystemRole"].empty()) {
      isSystemRole = make_shared<bool>(boost::any_cast<bool>(m["IsSystemRole"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~ListWorkspaceRolesResponseBodyResult() = default;
};
class ListWorkspaceRolesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListWorkspaceRolesResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  ListWorkspaceRolesResponseBody() {}

  explicit ListWorkspaceRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<ListWorkspaceRolesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkspaceRolesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListWorkspaceRolesResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListWorkspaceRolesResponseBody() = default;
};
class ListWorkspaceRolesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkspaceRolesResponseBody> body{};

  ListWorkspaceRolesResponse() {}

  explicit ListWorkspaceRolesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWorkspaceRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkspaceRolesResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkspaceRolesResponse() = default;
};
class ManualRunMailTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> mailId{};

  ManualRunMailTaskRequest() {}

  explicit ManualRunMailTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mailId) {
      res["MailId"] = boost::any(*mailId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MailId") != m.end() && !m["MailId"].empty()) {
      mailId = make_shared<string>(boost::any_cast<string>(m["MailId"]));
    }
  }


  virtual ~ManualRunMailTaskRequest() = default;
};
class ManualRunMailTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  ManualRunMailTaskResponseBody() {}

  explicit ManualRunMailTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ManualRunMailTaskResponseBody() = default;
};
class ManualRunMailTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ManualRunMailTaskResponseBody> body{};

  ManualRunMailTaskResponse() {}

  explicit ManualRunMailTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ManualRunMailTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ManualRunMailTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ManualRunMailTaskResponse() = default;
};
class ModifyApiDatasourceParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> parameters{};
  shared_ptr<string> workspaceId{};

  ModifyApiDatasourceParametersRequest() {}

  explicit ModifyApiDatasourceParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ModifyApiDatasourceParametersRequest() = default;
};
class ModifyApiDatasourceParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  ModifyApiDatasourceParametersResponseBody() {}

  explicit ModifyApiDatasourceParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyApiDatasourceParametersResponseBody() = default;
};
class ModifyApiDatasourceParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyApiDatasourceParametersResponseBody> body{};

  ModifyApiDatasourceParametersResponse() {}

  explicit ModifyApiDatasourceParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyApiDatasourceParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyApiDatasourceParametersResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyApiDatasourceParametersResponse() = default;
};
class ModifyCopilotEmbedConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentName{};
  shared_ptr<string> copilotId{};
  shared_ptr<string> dataRange{};
  shared_ptr<string> moduleName{};

  ModifyCopilotEmbedConfigRequest() {}

  explicit ModifyCopilotEmbedConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentName) {
      res["AgentName"] = boost::any(*agentName);
    }
    if (copilotId) {
      res["CopilotId"] = boost::any(*copilotId);
    }
    if (dataRange) {
      res["DataRange"] = boost::any(*dataRange);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentName") != m.end() && !m["AgentName"].empty()) {
      agentName = make_shared<string>(boost::any_cast<string>(m["AgentName"]));
    }
    if (m.find("CopilotId") != m.end() && !m["CopilotId"].empty()) {
      copilotId = make_shared<string>(boost::any_cast<string>(m["CopilotId"]));
    }
    if (m.find("DataRange") != m.end() && !m["DataRange"].empty()) {
      dataRange = make_shared<string>(boost::any_cast<string>(m["DataRange"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
  }


  virtual ~ModifyCopilotEmbedConfigRequest() = default;
};
class ModifyCopilotEmbedConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  ModifyCopilotEmbedConfigResponseBody() {}

  explicit ModifyCopilotEmbedConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyCopilotEmbedConfigResponseBody() = default;
};
class ModifyCopilotEmbedConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyCopilotEmbedConfigResponseBody> body{};

  ModifyCopilotEmbedConfigResponse() {}

  explicit ModifyCopilotEmbedConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyCopilotEmbedConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyCopilotEmbedConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyCopilotEmbedConfigResponse() = default;
};
class QueryApprovalInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};
  shared_ptr<string> userId{};

  QueryApprovalInfoRequest() {}

  explicit QueryApprovalInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryApprovalInfoRequest() = default;
};
class QueryApprovalInfoResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<string> applicantId{};
  shared_ptr<string> applicantName{};
  shared_ptr<string> applicationId{};
  shared_ptr<string> applyReason{};
  shared_ptr<string> approverId{};
  shared_ptr<string> approverName{};
  shared_ptr<bool> deleteFlag{};
  shared_ptr<long> expireDate{};
  shared_ptr<long> flagStatus{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> handleReason{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> workspaceName{};

  QueryApprovalInfoResponseBodyResultData() {}

  explicit QueryApprovalInfoResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantId) {
      res["ApplicantId"] = boost::any(*applicantId);
    }
    if (applicantName) {
      res["ApplicantName"] = boost::any(*applicantName);
    }
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (applyReason) {
      res["ApplyReason"] = boost::any(*applyReason);
    }
    if (approverId) {
      res["ApproverId"] = boost::any(*approverId);
    }
    if (approverName) {
      res["ApproverName"] = boost::any(*approverName);
    }
    if (deleteFlag) {
      res["DeleteFlag"] = boost::any(*deleteFlag);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (flagStatus) {
      res["FlagStatus"] = boost::any(*flagStatus);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (handleReason) {
      res["HandleReason"] = boost::any(*handleReason);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicantId") != m.end() && !m["ApplicantId"].empty()) {
      applicantId = make_shared<string>(boost::any_cast<string>(m["ApplicantId"]));
    }
    if (m.find("ApplicantName") != m.end() && !m["ApplicantName"].empty()) {
      applicantName = make_shared<string>(boost::any_cast<string>(m["ApplicantName"]));
    }
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ApplyReason") != m.end() && !m["ApplyReason"].empty()) {
      applyReason = make_shared<string>(boost::any_cast<string>(m["ApplyReason"]));
    }
    if (m.find("ApproverId") != m.end() && !m["ApproverId"].empty()) {
      approverId = make_shared<string>(boost::any_cast<string>(m["ApproverId"]));
    }
    if (m.find("ApproverName") != m.end() && !m["ApproverName"].empty()) {
      approverName = make_shared<string>(boost::any_cast<string>(m["ApproverName"]));
    }
    if (m.find("DeleteFlag") != m.end() && !m["DeleteFlag"].empty()) {
      deleteFlag = make_shared<bool>(boost::any_cast<bool>(m["DeleteFlag"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<long>(boost::any_cast<long>(m["ExpireDate"]));
    }
    if (m.find("FlagStatus") != m.end() && !m["FlagStatus"].empty()) {
      flagStatus = make_shared<long>(boost::any_cast<long>(m["FlagStatus"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("HandleReason") != m.end() && !m["HandleReason"].empty()) {
      handleReason = make_shared<string>(boost::any_cast<string>(m["HandleReason"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QueryApprovalInfoResponseBodyResultData() = default;
};
class QueryApprovalInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryApprovalInfoResponseBodyResultData>> data{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> start{};
  shared_ptr<long> total{};
  shared_ptr<long> totalPages{};

  QueryApprovalInfoResponseBodyResult() {}

  explicit QueryApprovalInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryApprovalInfoResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryApprovalInfoResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryApprovalInfoResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~QueryApprovalInfoResponseBodyResult() = default;
};
class QueryApprovalInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryApprovalInfoResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryApprovalInfoResponseBody() {}

  explicit QueryApprovalInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryApprovalInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryApprovalInfoResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryApprovalInfoResponseBody() = default;
};
class QueryApprovalInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryApprovalInfoResponseBody> body{};

  QueryApprovalInfoResponse() {}

  explicit QueryApprovalInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryApprovalInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryApprovalInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryApprovalInfoResponse() = default;
};
class QueryAuditLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> logType{};
  shared_ptr<string> operatorId{};
  shared_ptr<string> operatorTypes{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> startDate{};
  shared_ptr<string> workspaceId{};

  QueryAuditLogRequest() {}

  explicit QueryAuditLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (operatorId) {
      res["OperatorId"] = boost::any(*operatorId);
    }
    if (operatorTypes) {
      res["OperatorTypes"] = boost::any(*operatorTypes);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("OperatorId") != m.end() && !m["OperatorId"].empty()) {
      operatorId = make_shared<string>(boost::any_cast<string>(m["OperatorId"]));
    }
    if (m.find("OperatorTypes") != m.end() && !m["OperatorTypes"].empty()) {
      operatorTypes = make_shared<string>(boost::any_cast<string>(m["OperatorTypes"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~QueryAuditLogRequest() = default;
};
class QueryAuditLogResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> operatorAccountName{};
  shared_ptr<string> operatorName{};
  shared_ptr<string> operatorType{};
  shared_ptr<string> targetId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetType{};
  shared_ptr<string> workspaceId{};

  QueryAuditLogResponseBodyResult() {}

  explicit QueryAuditLogResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (operatorAccountName) {
      res["OperatorAccountName"] = boost::any(*operatorAccountName);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    if (operatorType) {
      res["OperatorType"] = boost::any(*operatorType);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("OperatorAccountName") != m.end() && !m["OperatorAccountName"].empty()) {
      operatorAccountName = make_shared<string>(boost::any_cast<string>(m["OperatorAccountName"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
    if (m.find("OperatorType") != m.end() && !m["OperatorType"].empty()) {
      operatorType = make_shared<string>(boost::any_cast<string>(m["OperatorType"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~QueryAuditLogResponseBodyResult() = default;
};
class QueryAuditLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryAuditLogResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QueryAuditLogResponseBody() {}

  explicit QueryAuditLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryAuditLogResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAuditLogResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryAuditLogResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryAuditLogResponseBody() = default;
};
class QueryAuditLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAuditLogResponseBody> body{};

  QueryAuditLogResponse() {}

  explicit QueryAuditLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryAuditLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAuditLogResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAuditLogResponse() = default;
};
class QueryComponentPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> costTimeAvgMin{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryType{};
  shared_ptr<string> reportId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> workspaceId{};

  QueryComponentPerformanceRequest() {}

  explicit QueryComponentPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTimeAvgMin) {
      res["CostTimeAvgMin"] = boost::any(*costTimeAvgMin);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTimeAvgMin") != m.end() && !m["CostTimeAvgMin"].empty()) {
      costTimeAvgMin = make_shared<long>(boost::any_cast<long>(m["CostTimeAvgMin"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~QueryComponentPerformanceRequest() = default;
};
class QueryComponentPerformanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<double> cacheCostTimeAvg{};
  shared_ptr<long> cacheQueryCount{};
  shared_ptr<string> componentId{};
  shared_ptr<string> componentName{};
  shared_ptr<double> costTimeAvg{};
  shared_ptr<long> queryCount{};
  shared_ptr<double> queryCountAvg{};
  shared_ptr<double> queryOverFivePercentNum{};
  shared_ptr<string> queryOverFiveSecPercent{};
  shared_ptr<string> queryOverTenSecPercent{};
  shared_ptr<double> queryOverTenSecPercentNum{};
  shared_ptr<long> queryTimeoutCount{};
  shared_ptr<double> queryTimeoutCountPercent{};
  shared_ptr<double> quickIndexCostTimeAvg{};
  shared_ptr<long> quickIndexQueryCount{};
  shared_ptr<string> repeatQueryPercent{};
  shared_ptr<double> repeatQueryPercentNum{};
  shared_ptr<long> repeatSqlQueryCount{};
  shared_ptr<string> repeatSqlQueryPercent{};
  shared_ptr<string> reportId{};
  shared_ptr<string> reportName{};
  shared_ptr<string> reportType{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  QueryComponentPerformanceResponseBodyResult() {}

  explicit QueryComponentPerformanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheCostTimeAvg) {
      res["CacheCostTimeAvg"] = boost::any(*cacheCostTimeAvg);
    }
    if (cacheQueryCount) {
      res["CacheQueryCount"] = boost::any(*cacheQueryCount);
    }
    if (componentId) {
      res["ComponentId"] = boost::any(*componentId);
    }
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (costTimeAvg) {
      res["CostTimeAvg"] = boost::any(*costTimeAvg);
    }
    if (queryCount) {
      res["QueryCount"] = boost::any(*queryCount);
    }
    if (queryCountAvg) {
      res["QueryCountAvg"] = boost::any(*queryCountAvg);
    }
    if (queryOverFivePercentNum) {
      res["QueryOverFivePercentNum"] = boost::any(*queryOverFivePercentNum);
    }
    if (queryOverFiveSecPercent) {
      res["QueryOverFiveSecPercent"] = boost::any(*queryOverFiveSecPercent);
    }
    if (queryOverTenSecPercent) {
      res["QueryOverTenSecPercent"] = boost::any(*queryOverTenSecPercent);
    }
    if (queryOverTenSecPercentNum) {
      res["QueryOverTenSecPercentNum"] = boost::any(*queryOverTenSecPercentNum);
    }
    if (queryTimeoutCount) {
      res["QueryTimeoutCount"] = boost::any(*queryTimeoutCount);
    }
    if (queryTimeoutCountPercent) {
      res["QueryTimeoutCountPercent"] = boost::any(*queryTimeoutCountPercent);
    }
    if (quickIndexCostTimeAvg) {
      res["QuickIndexCostTimeAvg"] = boost::any(*quickIndexCostTimeAvg);
    }
    if (quickIndexQueryCount) {
      res["QuickIndexQueryCount"] = boost::any(*quickIndexQueryCount);
    }
    if (repeatQueryPercent) {
      res["RepeatQueryPercent"] = boost::any(*repeatQueryPercent);
    }
    if (repeatQueryPercentNum) {
      res["RepeatQueryPercentNum"] = boost::any(*repeatQueryPercentNum);
    }
    if (repeatSqlQueryCount) {
      res["RepeatSqlQueryCount"] = boost::any(*repeatSqlQueryCount);
    }
    if (repeatSqlQueryPercent) {
      res["RepeatSqlQueryPercent"] = boost::any(*repeatSqlQueryPercent);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (reportName) {
      res["ReportName"] = boost::any(*reportName);
    }
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheCostTimeAvg") != m.end() && !m["CacheCostTimeAvg"].empty()) {
      cacheCostTimeAvg = make_shared<double>(boost::any_cast<double>(m["CacheCostTimeAvg"]));
    }
    if (m.find("CacheQueryCount") != m.end() && !m["CacheQueryCount"].empty()) {
      cacheQueryCount = make_shared<long>(boost::any_cast<long>(m["CacheQueryCount"]));
    }
    if (m.find("ComponentId") != m.end() && !m["ComponentId"].empty()) {
      componentId = make_shared<string>(boost::any_cast<string>(m["ComponentId"]));
    }
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("CostTimeAvg") != m.end() && !m["CostTimeAvg"].empty()) {
      costTimeAvg = make_shared<double>(boost::any_cast<double>(m["CostTimeAvg"]));
    }
    if (m.find("QueryCount") != m.end() && !m["QueryCount"].empty()) {
      queryCount = make_shared<long>(boost::any_cast<long>(m["QueryCount"]));
    }
    if (m.find("QueryCountAvg") != m.end() && !m["QueryCountAvg"].empty()) {
      queryCountAvg = make_shared<double>(boost::any_cast<double>(m["QueryCountAvg"]));
    }
    if (m.find("QueryOverFivePercentNum") != m.end() && !m["QueryOverFivePercentNum"].empty()) {
      queryOverFivePercentNum = make_shared<double>(boost::any_cast<double>(m["QueryOverFivePercentNum"]));
    }
    if (m.find("QueryOverFiveSecPercent") != m.end() && !m["QueryOverFiveSecPercent"].empty()) {
      queryOverFiveSecPercent = make_shared<string>(boost::any_cast<string>(m["QueryOverFiveSecPercent"]));
    }
    if (m.find("QueryOverTenSecPercent") != m.end() && !m["QueryOverTenSecPercent"].empty()) {
      queryOverTenSecPercent = make_shared<string>(boost::any_cast<string>(m["QueryOverTenSecPercent"]));
    }
    if (m.find("QueryOverTenSecPercentNum") != m.end() && !m["QueryOverTenSecPercentNum"].empty()) {
      queryOverTenSecPercentNum = make_shared<double>(boost::any_cast<double>(m["QueryOverTenSecPercentNum"]));
    }
    if (m.find("QueryTimeoutCount") != m.end() && !m["QueryTimeoutCount"].empty()) {
      queryTimeoutCount = make_shared<long>(boost::any_cast<long>(m["QueryTimeoutCount"]));
    }
    if (m.find("QueryTimeoutCountPercent") != m.end() && !m["QueryTimeoutCountPercent"].empty()) {
      queryTimeoutCountPercent = make_shared<double>(boost::any_cast<double>(m["QueryTimeoutCountPercent"]));
    }
    if (m.find("QuickIndexCostTimeAvg") != m.end() && !m["QuickIndexCostTimeAvg"].empty()) {
      quickIndexCostTimeAvg = make_shared<double>(boost::any_cast<double>(m["QuickIndexCostTimeAvg"]));
    }
    if (m.find("QuickIndexQueryCount") != m.end() && !m["QuickIndexQueryCount"].empty()) {
      quickIndexQueryCount = make_shared<long>(boost::any_cast<long>(m["QuickIndexQueryCount"]));
    }
    if (m.find("RepeatQueryPercent") != m.end() && !m["RepeatQueryPercent"].empty()) {
      repeatQueryPercent = make_shared<string>(boost::any_cast<string>(m["RepeatQueryPercent"]));
    }
    if (m.find("RepeatQueryPercentNum") != m.end() && !m["RepeatQueryPercentNum"].empty()) {
      repeatQueryPercentNum = make_shared<double>(boost::any_cast<double>(m["RepeatQueryPercentNum"]));
    }
    if (m.find("RepeatSqlQueryCount") != m.end() && !m["RepeatSqlQueryCount"].empty()) {
      repeatSqlQueryCount = make_shared<long>(boost::any_cast<long>(m["RepeatSqlQueryCount"]));
    }
    if (m.find("RepeatSqlQueryPercent") != m.end() && !m["RepeatSqlQueryPercent"].empty()) {
      repeatSqlQueryPercent = make_shared<string>(boost::any_cast<string>(m["RepeatSqlQueryPercent"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("ReportName") != m.end() && !m["ReportName"].empty()) {
      reportName = make_shared<string>(boost::any_cast<string>(m["ReportName"]));
    }
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      reportType = make_shared<string>(boost::any_cast<string>(m["ReportType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QueryComponentPerformanceResponseBodyResult() = default;
};
class QueryComponentPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryComponentPerformanceResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QueryComponentPerformanceResponseBody() {}

  explicit QueryComponentPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryComponentPerformanceResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryComponentPerformanceResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryComponentPerformanceResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryComponentPerformanceResponseBody() = default;
};
class QueryComponentPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryComponentPerformanceResponseBody> body{};

  QueryComponentPerformanceResponse() {}

  explicit QueryComponentPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryComponentPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryComponentPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryComponentPerformanceResponse() = default;
};
class QueryCopilotEmbedConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};

  QueryCopilotEmbedConfigRequest() {}

  explicit QueryCopilotEmbedConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
  }


  virtual ~QueryCopilotEmbedConfigRequest() = default;
};
class QueryCopilotEmbedConfigResponseBodyResultDataRange : public Darabonba::Model {
public:
  shared_ptr<bool> allCube{};
  shared_ptr<bool> allTheme{};
  shared_ptr<vector<string>> llmCubes{};
  shared_ptr<vector<string>> themes{};

  QueryCopilotEmbedConfigResponseBodyResultDataRange() {}

  explicit QueryCopilotEmbedConfigResponseBodyResultDataRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allCube) {
      res["AllCube"] = boost::any(*allCube);
    }
    if (allTheme) {
      res["AllTheme"] = boost::any(*allTheme);
    }
    if (llmCubes) {
      res["LlmCubes"] = boost::any(*llmCubes);
    }
    if (themes) {
      res["Themes"] = boost::any(*themes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllCube") != m.end() && !m["AllCube"].empty()) {
      allCube = make_shared<bool>(boost::any_cast<bool>(m["AllCube"]));
    }
    if (m.find("AllTheme") != m.end() && !m["AllTheme"].empty()) {
      allTheme = make_shared<bool>(boost::any_cast<bool>(m["AllTheme"]));
    }
    if (m.find("LlmCubes") != m.end() && !m["LlmCubes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LlmCubes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LlmCubes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      llmCubes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Themes") != m.end() && !m["Themes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Themes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Themes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      themes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryCopilotEmbedConfigResponseBodyResultDataRange() = default;
};
class QueryCopilotEmbedConfigResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> agentName{};
  shared_ptr<string> copilotId{};
  shared_ptr<string> createUser{};
  shared_ptr<string> createUserName{};
  shared_ptr<QueryCopilotEmbedConfigResponseBodyResultDataRange> dataRange{};
  shared_ptr<string> modifyUser{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> showName{};

  QueryCopilotEmbedConfigResponseBodyResult() {}

  explicit QueryCopilotEmbedConfigResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentName) {
      res["AgentName"] = boost::any(*agentName);
    }
    if (copilotId) {
      res["CopilotId"] = boost::any(*copilotId);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (dataRange) {
      res["DataRange"] = dataRange ? boost::any(dataRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifyUser) {
      res["ModifyUser"] = boost::any(*modifyUser);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (showName) {
      res["ShowName"] = boost::any(*showName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentName") != m.end() && !m["AgentName"].empty()) {
      agentName = make_shared<string>(boost::any_cast<string>(m["AgentName"]));
    }
    if (m.find("CopilotId") != m.end() && !m["CopilotId"].empty()) {
      copilotId = make_shared<string>(boost::any_cast<string>(m["CopilotId"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("DataRange") != m.end() && !m["DataRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataRange"].type()) {
        QueryCopilotEmbedConfigResponseBodyResultDataRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataRange"]));
        dataRange = make_shared<QueryCopilotEmbedConfigResponseBodyResultDataRange>(model1);
      }
    }
    if (m.find("ModifyUser") != m.end() && !m["ModifyUser"].empty()) {
      modifyUser = make_shared<string>(boost::any_cast<string>(m["ModifyUser"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("ShowName") != m.end() && !m["ShowName"].empty()) {
      showName = make_shared<string>(boost::any_cast<string>(m["ShowName"]));
    }
  }


  virtual ~QueryCopilotEmbedConfigResponseBodyResult() = default;
};
class QueryCopilotEmbedConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryCopilotEmbedConfigResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QueryCopilotEmbedConfigResponseBody() {}

  explicit QueryCopilotEmbedConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryCopilotEmbedConfigResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCopilotEmbedConfigResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryCopilotEmbedConfigResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryCopilotEmbedConfigResponseBody() = default;
};
class QueryCopilotEmbedConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCopilotEmbedConfigResponseBody> body{};

  QueryCopilotEmbedConfigResponse() {}

  explicit QueryCopilotEmbedConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCopilotEmbedConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCopilotEmbedConfigResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCopilotEmbedConfigResponse() = default;
};
class QueryCubeOptimizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  QueryCubeOptimizationRequest() {}

  explicit QueryCubeOptimizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~QueryCubeOptimizationRequest() = default;
};
class QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel : public Darabonba::Model {
public:
  shared_ptr<double> cacheCostTimeAvg{};
  shared_ptr<long> cacheQueryCount{};
  shared_ptr<double> costTimeAvg{};
  shared_ptr<string> cubeId{};
  shared_ptr<string> cubeName{};
  shared_ptr<long> queryCount{};
  shared_ptr<double> queryCountAvg{};
  shared_ptr<double> queryOverFivePercentNum{};
  shared_ptr<string> queryOverFiveSecPercent{};
  shared_ptr<string> queryOverTenSecPercent{};
  shared_ptr<double> queryOverTenSecPercentNum{};
  shared_ptr<long> queryTimeoutCount{};
  shared_ptr<double> queryTimeoutCountPercent{};
  shared_ptr<double> quickIndexCostTimeAvg{};
  shared_ptr<long> quickIndexQueryCount{};
  shared_ptr<string> repeatQueryPercent{};
  shared_ptr<double> repeatQueryPercentNum{};
  shared_ptr<long> repeatSqlQueryCount{};
  shared_ptr<string> repeatSqlQueryPercent{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel() {}

  explicit QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheCostTimeAvg) {
      res["CacheCostTimeAvg"] = boost::any(*cacheCostTimeAvg);
    }
    if (cacheQueryCount) {
      res["CacheQueryCount"] = boost::any(*cacheQueryCount);
    }
    if (costTimeAvg) {
      res["CostTimeAvg"] = boost::any(*costTimeAvg);
    }
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (cubeName) {
      res["CubeName"] = boost::any(*cubeName);
    }
    if (queryCount) {
      res["QueryCount"] = boost::any(*queryCount);
    }
    if (queryCountAvg) {
      res["QueryCountAvg"] = boost::any(*queryCountAvg);
    }
    if (queryOverFivePercentNum) {
      res["QueryOverFivePercentNum"] = boost::any(*queryOverFivePercentNum);
    }
    if (queryOverFiveSecPercent) {
      res["QueryOverFiveSecPercent"] = boost::any(*queryOverFiveSecPercent);
    }
    if (queryOverTenSecPercent) {
      res["QueryOverTenSecPercent"] = boost::any(*queryOverTenSecPercent);
    }
    if (queryOverTenSecPercentNum) {
      res["QueryOverTenSecPercentNum"] = boost::any(*queryOverTenSecPercentNum);
    }
    if (queryTimeoutCount) {
      res["QueryTimeoutCount"] = boost::any(*queryTimeoutCount);
    }
    if (queryTimeoutCountPercent) {
      res["QueryTimeoutCountPercent"] = boost::any(*queryTimeoutCountPercent);
    }
    if (quickIndexCostTimeAvg) {
      res["QuickIndexCostTimeAvg"] = boost::any(*quickIndexCostTimeAvg);
    }
    if (quickIndexQueryCount) {
      res["QuickIndexQueryCount"] = boost::any(*quickIndexQueryCount);
    }
    if (repeatQueryPercent) {
      res["RepeatQueryPercent"] = boost::any(*repeatQueryPercent);
    }
    if (repeatQueryPercentNum) {
      res["RepeatQueryPercentNum"] = boost::any(*repeatQueryPercentNum);
    }
    if (repeatSqlQueryCount) {
      res["RepeatSqlQueryCount"] = boost::any(*repeatSqlQueryCount);
    }
    if (repeatSqlQueryPercent) {
      res["RepeatSqlQueryPercent"] = boost::any(*repeatSqlQueryPercent);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheCostTimeAvg") != m.end() && !m["CacheCostTimeAvg"].empty()) {
      cacheCostTimeAvg = make_shared<double>(boost::any_cast<double>(m["CacheCostTimeAvg"]));
    }
    if (m.find("CacheQueryCount") != m.end() && !m["CacheQueryCount"].empty()) {
      cacheQueryCount = make_shared<long>(boost::any_cast<long>(m["CacheQueryCount"]));
    }
    if (m.find("CostTimeAvg") != m.end() && !m["CostTimeAvg"].empty()) {
      costTimeAvg = make_shared<double>(boost::any_cast<double>(m["CostTimeAvg"]));
    }
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("CubeName") != m.end() && !m["CubeName"].empty()) {
      cubeName = make_shared<string>(boost::any_cast<string>(m["CubeName"]));
    }
    if (m.find("QueryCount") != m.end() && !m["QueryCount"].empty()) {
      queryCount = make_shared<long>(boost::any_cast<long>(m["QueryCount"]));
    }
    if (m.find("QueryCountAvg") != m.end() && !m["QueryCountAvg"].empty()) {
      queryCountAvg = make_shared<double>(boost::any_cast<double>(m["QueryCountAvg"]));
    }
    if (m.find("QueryOverFivePercentNum") != m.end() && !m["QueryOverFivePercentNum"].empty()) {
      queryOverFivePercentNum = make_shared<double>(boost::any_cast<double>(m["QueryOverFivePercentNum"]));
    }
    if (m.find("QueryOverFiveSecPercent") != m.end() && !m["QueryOverFiveSecPercent"].empty()) {
      queryOverFiveSecPercent = make_shared<string>(boost::any_cast<string>(m["QueryOverFiveSecPercent"]));
    }
    if (m.find("QueryOverTenSecPercent") != m.end() && !m["QueryOverTenSecPercent"].empty()) {
      queryOverTenSecPercent = make_shared<string>(boost::any_cast<string>(m["QueryOverTenSecPercent"]));
    }
    if (m.find("QueryOverTenSecPercentNum") != m.end() && !m["QueryOverTenSecPercentNum"].empty()) {
      queryOverTenSecPercentNum = make_shared<double>(boost::any_cast<double>(m["QueryOverTenSecPercentNum"]));
    }
    if (m.find("QueryTimeoutCount") != m.end() && !m["QueryTimeoutCount"].empty()) {
      queryTimeoutCount = make_shared<long>(boost::any_cast<long>(m["QueryTimeoutCount"]));
    }
    if (m.find("QueryTimeoutCountPercent") != m.end() && !m["QueryTimeoutCountPercent"].empty()) {
      queryTimeoutCountPercent = make_shared<double>(boost::any_cast<double>(m["QueryTimeoutCountPercent"]));
    }
    if (m.find("QuickIndexCostTimeAvg") != m.end() && !m["QuickIndexCostTimeAvg"].empty()) {
      quickIndexCostTimeAvg = make_shared<double>(boost::any_cast<double>(m["QuickIndexCostTimeAvg"]));
    }
    if (m.find("QuickIndexQueryCount") != m.end() && !m["QuickIndexQueryCount"].empty()) {
      quickIndexQueryCount = make_shared<long>(boost::any_cast<long>(m["QuickIndexQueryCount"]));
    }
    if (m.find("RepeatQueryPercent") != m.end() && !m["RepeatQueryPercent"].empty()) {
      repeatQueryPercent = make_shared<string>(boost::any_cast<string>(m["RepeatQueryPercent"]));
    }
    if (m.find("RepeatQueryPercentNum") != m.end() && !m["RepeatQueryPercentNum"].empty()) {
      repeatQueryPercentNum = make_shared<double>(boost::any_cast<double>(m["RepeatQueryPercentNum"]));
    }
    if (m.find("RepeatSqlQueryCount") != m.end() && !m["RepeatSqlQueryCount"].empty()) {
      repeatSqlQueryCount = make_shared<long>(boost::any_cast<long>(m["RepeatSqlQueryCount"]));
    }
    if (m.find("RepeatSqlQueryPercent") != m.end() && !m["RepeatSqlQueryPercent"].empty()) {
      repeatSqlQueryPercent = make_shared<string>(boost::any_cast<string>(m["RepeatSqlQueryPercent"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel() = default;
};
class QueryCubeOptimizationResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> adviceType{};
  shared_ptr<QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel> cubePerformanceDiagnoseModel{};

  QueryCubeOptimizationResponseBodyResult() {}

  explicit QueryCubeOptimizationResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adviceType) {
      res["AdviceType"] = boost::any(*adviceType);
    }
    if (cubePerformanceDiagnoseModel) {
      res["CubePerformanceDiagnoseModel"] = cubePerformanceDiagnoseModel ? boost::any(cubePerformanceDiagnoseModel->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdviceType") != m.end() && !m["AdviceType"].empty()) {
      adviceType = make_shared<string>(boost::any_cast<string>(m["AdviceType"]));
    }
    if (m.find("CubePerformanceDiagnoseModel") != m.end() && !m["CubePerformanceDiagnoseModel"].empty()) {
      if (typeid(map<string, boost::any>) == m["CubePerformanceDiagnoseModel"].type()) {
        QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CubePerformanceDiagnoseModel"]));
        cubePerformanceDiagnoseModel = make_shared<QueryCubeOptimizationResponseBodyResultCubePerformanceDiagnoseModel>(model1);
      }
    }
  }


  virtual ~QueryCubeOptimizationResponseBodyResult() = default;
};
class QueryCubeOptimizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryCubeOptimizationResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QueryCubeOptimizationResponseBody() {}

  explicit QueryCubeOptimizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryCubeOptimizationResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCubeOptimizationResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryCubeOptimizationResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryCubeOptimizationResponseBody() = default;
};
class QueryCubeOptimizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCubeOptimizationResponseBody> body{};

  QueryCubeOptimizationResponse() {}

  explicit QueryCubeOptimizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCubeOptimizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCubeOptimizationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCubeOptimizationResponse() = default;
};
class QueryCubePerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> costTimeAvgMin{};
  shared_ptr<string> cubeId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryType{};
  shared_ptr<string> workspaceId{};

  QueryCubePerformanceRequest() {}

  explicit QueryCubePerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTimeAvgMin) {
      res["CostTimeAvgMin"] = boost::any(*costTimeAvgMin);
    }
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTimeAvgMin") != m.end() && !m["CostTimeAvgMin"].empty()) {
      costTimeAvgMin = make_shared<long>(boost::any_cast<long>(m["CostTimeAvgMin"]));
    }
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~QueryCubePerformanceRequest() = default;
};
class QueryCubePerformanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<double> cacheCostTimeAvg{};
  shared_ptr<long> cacheQueryCount{};
  shared_ptr<double> costTimeAvg{};
  shared_ptr<string> cubeId{};
  shared_ptr<string> cubeName{};
  shared_ptr<long> queryCount{};
  shared_ptr<double> queryCountAvg{};
  shared_ptr<double> queryOverFivePercentNum{};
  shared_ptr<string> queryOverFiveSecPercent{};
  shared_ptr<string> queryOverTenSecPercent{};
  shared_ptr<double> queryOverTenSecPercentNum{};
  shared_ptr<long> queryTimeoutCount{};
  shared_ptr<double> queryTimeoutCountPercent{};
  shared_ptr<double> quickIndexCostTimeAvg{};
  shared_ptr<long> quickIndexQueryCount{};
  shared_ptr<string> repeatQueryPercent{};
  shared_ptr<double> repeatQueryPercentNum{};
  shared_ptr<long> repeatSqlQueryCount{};
  shared_ptr<string> repeatSqlQueryPercent{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  QueryCubePerformanceResponseBodyResult() {}

  explicit QueryCubePerformanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheCostTimeAvg) {
      res["CacheCostTimeAvg"] = boost::any(*cacheCostTimeAvg);
    }
    if (cacheQueryCount) {
      res["CacheQueryCount"] = boost::any(*cacheQueryCount);
    }
    if (costTimeAvg) {
      res["CostTimeAvg"] = boost::any(*costTimeAvg);
    }
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (cubeName) {
      res["CubeName"] = boost::any(*cubeName);
    }
    if (queryCount) {
      res["QueryCount"] = boost::any(*queryCount);
    }
    if (queryCountAvg) {
      res["QueryCountAvg"] = boost::any(*queryCountAvg);
    }
    if (queryOverFivePercentNum) {
      res["QueryOverFivePercentNum"] = boost::any(*queryOverFivePercentNum);
    }
    if (queryOverFiveSecPercent) {
      res["QueryOverFiveSecPercent"] = boost::any(*queryOverFiveSecPercent);
    }
    if (queryOverTenSecPercent) {
      res["QueryOverTenSecPercent"] = boost::any(*queryOverTenSecPercent);
    }
    if (queryOverTenSecPercentNum) {
      res["QueryOverTenSecPercentNum"] = boost::any(*queryOverTenSecPercentNum);
    }
    if (queryTimeoutCount) {
      res["QueryTimeoutCount"] = boost::any(*queryTimeoutCount);
    }
    if (queryTimeoutCountPercent) {
      res["QueryTimeoutCountPercent"] = boost::any(*queryTimeoutCountPercent);
    }
    if (quickIndexCostTimeAvg) {
      res["QuickIndexCostTimeAvg"] = boost::any(*quickIndexCostTimeAvg);
    }
    if (quickIndexQueryCount) {
      res["QuickIndexQueryCount"] = boost::any(*quickIndexQueryCount);
    }
    if (repeatQueryPercent) {
      res["RepeatQueryPercent"] = boost::any(*repeatQueryPercent);
    }
    if (repeatQueryPercentNum) {
      res["RepeatQueryPercentNum"] = boost::any(*repeatQueryPercentNum);
    }
    if (repeatSqlQueryCount) {
      res["RepeatSqlQueryCount"] = boost::any(*repeatSqlQueryCount);
    }
    if (repeatSqlQueryPercent) {
      res["RepeatSqlQueryPercent"] = boost::any(*repeatSqlQueryPercent);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheCostTimeAvg") != m.end() && !m["CacheCostTimeAvg"].empty()) {
      cacheCostTimeAvg = make_shared<double>(boost::any_cast<double>(m["CacheCostTimeAvg"]));
    }
    if (m.find("CacheQueryCount") != m.end() && !m["CacheQueryCount"].empty()) {
      cacheQueryCount = make_shared<long>(boost::any_cast<long>(m["CacheQueryCount"]));
    }
    if (m.find("CostTimeAvg") != m.end() && !m["CostTimeAvg"].empty()) {
      costTimeAvg = make_shared<double>(boost::any_cast<double>(m["CostTimeAvg"]));
    }
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("CubeName") != m.end() && !m["CubeName"].empty()) {
      cubeName = make_shared<string>(boost::any_cast<string>(m["CubeName"]));
    }
    if (m.find("QueryCount") != m.end() && !m["QueryCount"].empty()) {
      queryCount = make_shared<long>(boost::any_cast<long>(m["QueryCount"]));
    }
    if (m.find("QueryCountAvg") != m.end() && !m["QueryCountAvg"].empty()) {
      queryCountAvg = make_shared<double>(boost::any_cast<double>(m["QueryCountAvg"]));
    }
    if (m.find("QueryOverFivePercentNum") != m.end() && !m["QueryOverFivePercentNum"].empty()) {
      queryOverFivePercentNum = make_shared<double>(boost::any_cast<double>(m["QueryOverFivePercentNum"]));
    }
    if (m.find("QueryOverFiveSecPercent") != m.end() && !m["QueryOverFiveSecPercent"].empty()) {
      queryOverFiveSecPercent = make_shared<string>(boost::any_cast<string>(m["QueryOverFiveSecPercent"]));
    }
    if (m.find("QueryOverTenSecPercent") != m.end() && !m["QueryOverTenSecPercent"].empty()) {
      queryOverTenSecPercent = make_shared<string>(boost::any_cast<string>(m["QueryOverTenSecPercent"]));
    }
    if (m.find("QueryOverTenSecPercentNum") != m.end() && !m["QueryOverTenSecPercentNum"].empty()) {
      queryOverTenSecPercentNum = make_shared<double>(boost::any_cast<double>(m["QueryOverTenSecPercentNum"]));
    }
    if (m.find("QueryTimeoutCount") != m.end() && !m["QueryTimeoutCount"].empty()) {
      queryTimeoutCount = make_shared<long>(boost::any_cast<long>(m["QueryTimeoutCount"]));
    }
    if (m.find("QueryTimeoutCountPercent") != m.end() && !m["QueryTimeoutCountPercent"].empty()) {
      queryTimeoutCountPercent = make_shared<double>(boost::any_cast<double>(m["QueryTimeoutCountPercent"]));
    }
    if (m.find("QuickIndexCostTimeAvg") != m.end() && !m["QuickIndexCostTimeAvg"].empty()) {
      quickIndexCostTimeAvg = make_shared<double>(boost::any_cast<double>(m["QuickIndexCostTimeAvg"]));
    }
    if (m.find("QuickIndexQueryCount") != m.end() && !m["QuickIndexQueryCount"].empty()) {
      quickIndexQueryCount = make_shared<long>(boost::any_cast<long>(m["QuickIndexQueryCount"]));
    }
    if (m.find("RepeatQueryPercent") != m.end() && !m["RepeatQueryPercent"].empty()) {
      repeatQueryPercent = make_shared<string>(boost::any_cast<string>(m["RepeatQueryPercent"]));
    }
    if (m.find("RepeatQueryPercentNum") != m.end() && !m["RepeatQueryPercentNum"].empty()) {
      repeatQueryPercentNum = make_shared<double>(boost::any_cast<double>(m["RepeatQueryPercentNum"]));
    }
    if (m.find("RepeatSqlQueryCount") != m.end() && !m["RepeatSqlQueryCount"].empty()) {
      repeatSqlQueryCount = make_shared<long>(boost::any_cast<long>(m["RepeatSqlQueryCount"]));
    }
    if (m.find("RepeatSqlQueryPercent") != m.end() && !m["RepeatSqlQueryPercent"].empty()) {
      repeatSqlQueryPercent = make_shared<string>(boost::any_cast<string>(m["RepeatSqlQueryPercent"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QueryCubePerformanceResponseBodyResult() = default;
};
class QueryCubePerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryCubePerformanceResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QueryCubePerformanceResponseBody() {}

  explicit QueryCubePerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryCubePerformanceResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCubePerformanceResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryCubePerformanceResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryCubePerformanceResponseBody() = default;
};
class QueryCubePerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCubePerformanceResponseBody> body{};

  QueryCubePerformanceResponse() {}

  explicit QueryCubePerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCubePerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCubePerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCubePerformanceResponse() = default;
};
class QueryDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> conditions{};
  shared_ptr<string> returnFields{};
  shared_ptr<string> userId{};

  QueryDataRequest() {}

  explicit QueryDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (conditions) {
      res["Conditions"] = boost::any(*conditions);
    }
    if (returnFields) {
      res["ReturnFields"] = boost::any(*returnFields);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      conditions = make_shared<string>(boost::any_cast<string>(m["Conditions"]));
    }
    if (m.find("ReturnFields") != m.end() && !m["ReturnFields"].empty()) {
      returnFields = make_shared<string>(boost::any_cast<string>(m["ReturnFields"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryDataRequest() = default;
};
class QueryDataResponseBodyResultHeaders : public Darabonba::Model {
public:
  shared_ptr<string> aggregator{};
  shared_ptr<string> column{};
  shared_ptr<string> dataType{};
  shared_ptr<string> granularity{};
  shared_ptr<string> label{};
  shared_ptr<string> type{};

  QueryDataResponseBodyResultHeaders() {}

  explicit QueryDataResponseBodyResultHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregator) {
      res["Aggregator"] = boost::any(*aggregator);
    }
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aggregator") != m.end() && !m["Aggregator"].empty()) {
      aggregator = make_shared<string>(boost::any_cast<string>(m["Aggregator"]));
    }
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QueryDataResponseBodyResultHeaders() = default;
};
class QueryDataResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDataResponseBodyResultHeaders>> headers{};
  shared_ptr<string> sql{};
  shared_ptr<vector<map<string, boost::any>>> values{};

  QueryDataResponseBodyResult() {}

  explicit QueryDataResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      vector<boost::any> temp1;
      for(auto item1:*headers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Headers"] = boost::any(temp1);
    }
    if (sql) {
      res["Sql"] = boost::any(*sql);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Headers") != m.end() && !m["Headers"].empty()) {
      if (typeid(vector<boost::any>) == m["Headers"].type()) {
        vector<QueryDataResponseBodyResultHeaders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Headers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDataResponseBodyResultHeaders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        headers = make_shared<vector<QueryDataResponseBodyResultHeaders>>(expect1);
      }
    }
    if (m.find("Sql") != m.end() && !m["Sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["Sql"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      values = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~QueryDataResponseBodyResult() = default;
};
class QueryDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryDataResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryDataResponseBody() {}

  explicit QueryDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryDataResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryDataResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDataResponseBody() = default;
};
class QueryDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDataResponseBody> body{};

  QueryDataResponse() {}

  explicit QueryDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDataResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDataResponse() = default;
};
class QueryDataRangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> type{};

  QueryDataRangeRequest() {}

  explicit QueryDataRangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QueryDataRangeRequest() = default;
};
class QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> createUser{};
  shared_ptr<string> llmCubeId{};

  QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels() {}

  explicit QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (llmCubeId) {
      res["LlmCubeId"] = boost::any(*llmCubeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("LlmCubeId") != m.end() && !m["LlmCubeId"].empty()) {
      llmCubeId = make_shared<string>(boost::any_cast<string>(m["LlmCubeId"]));
    }
  }


  virtual ~QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels() = default;
};
class QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> createUser{};
  shared_ptr<string> llmCubeId{};

  QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels() {}

  explicit QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (llmCubeId) {
      res["LlmCubeId"] = boost::any(*llmCubeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("LlmCubeId") != m.end() && !m["LlmCubeId"].empty()) {
      llmCubeId = make_shared<string>(boost::any_cast<string>(m["LlmCubeId"]));
    }
  }


  virtual ~QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels() = default;
};
class QueryDataRangeResponseBodyResultApiCopilotThemeModels : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels>> apiCopilotLlmCubeModels{};
  shared_ptr<string> createUser{};
  shared_ptr<string> themeId{};
  shared_ptr<string> themeName{};

  QueryDataRangeResponseBodyResultApiCopilotThemeModels() {}

  explicit QueryDataRangeResponseBodyResultApiCopilotThemeModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiCopilotLlmCubeModels) {
      vector<boost::any> temp1;
      for(auto item1:*apiCopilotLlmCubeModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiCopilotLlmCubeModels"] = boost::any(temp1);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (themeId) {
      res["ThemeId"] = boost::any(*themeId);
    }
    if (themeName) {
      res["ThemeName"] = boost::any(*themeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiCopilotLlmCubeModels") != m.end() && !m["ApiCopilotLlmCubeModels"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiCopilotLlmCubeModels"].type()) {
        vector<QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiCopilotLlmCubeModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiCopilotLlmCubeModels = make_shared<vector<QueryDataRangeResponseBodyResultApiCopilotThemeModelsApiCopilotLlmCubeModels>>(expect1);
      }
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("ThemeId") != m.end() && !m["ThemeId"].empty()) {
      themeId = make_shared<string>(boost::any_cast<string>(m["ThemeId"]));
    }
    if (m.find("ThemeName") != m.end() && !m["ThemeName"].empty()) {
      themeName = make_shared<string>(boost::any_cast<string>(m["ThemeName"]));
    }
  }


  virtual ~QueryDataRangeResponseBodyResultApiCopilotThemeModels() = default;
};
class QueryDataRangeResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels>> apiCopilotLlmCubeModels{};
  shared_ptr<vector<QueryDataRangeResponseBodyResultApiCopilotThemeModels>> apiCopilotThemeModels{};

  QueryDataRangeResponseBodyResult() {}

  explicit QueryDataRangeResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiCopilotLlmCubeModels) {
      vector<boost::any> temp1;
      for(auto item1:*apiCopilotLlmCubeModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiCopilotLlmCubeModels"] = boost::any(temp1);
    }
    if (apiCopilotThemeModels) {
      vector<boost::any> temp1;
      for(auto item1:*apiCopilotThemeModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiCopilotThemeModels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiCopilotLlmCubeModels") != m.end() && !m["ApiCopilotLlmCubeModels"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiCopilotLlmCubeModels"].type()) {
        vector<QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiCopilotLlmCubeModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiCopilotLlmCubeModels = make_shared<vector<QueryDataRangeResponseBodyResultApiCopilotLlmCubeModels>>(expect1);
      }
    }
    if (m.find("ApiCopilotThemeModels") != m.end() && !m["ApiCopilotThemeModels"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiCopilotThemeModels"].type()) {
        vector<QueryDataRangeResponseBodyResultApiCopilotThemeModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiCopilotThemeModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDataRangeResponseBodyResultApiCopilotThemeModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiCopilotThemeModels = make_shared<vector<QueryDataRangeResponseBodyResultApiCopilotThemeModels>>(expect1);
      }
    }
  }


  virtual ~QueryDataRangeResponseBodyResult() = default;
};
class QueryDataRangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryDataRangeResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryDataRangeResponseBody() {}

  explicit QueryDataRangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryDataRangeResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryDataRangeResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDataRangeResponseBody() = default;
};
class QueryDataRangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDataRangeResponseBody> body{};

  QueryDataRangeResponse() {}

  explicit QueryDataRangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDataRangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDataRangeResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDataRangeResponse() = default;
};
class QueryDataServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> conditions{};
  shared_ptr<string> returnFields{};

  QueryDataServiceRequest() {}

  explicit QueryDataServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (conditions) {
      res["Conditions"] = boost::any(*conditions);
    }
    if (returnFields) {
      res["ReturnFields"] = boost::any(*returnFields);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      conditions = make_shared<string>(boost::any_cast<string>(m["Conditions"]));
    }
    if (m.find("ReturnFields") != m.end() && !m["ReturnFields"].empty()) {
      returnFields = make_shared<string>(boost::any_cast<string>(m["ReturnFields"]));
    }
  }


  virtual ~QueryDataServiceRequest() = default;
};
class QueryDataServiceResponseBodyResultHeaders : public Darabonba::Model {
public:
  shared_ptr<string> aggregator{};
  shared_ptr<string> column{};
  shared_ptr<string> dataType{};
  shared_ptr<string> granularity{};
  shared_ptr<string> label{};
  shared_ptr<string> type{};

  QueryDataServiceResponseBodyResultHeaders() {}

  explicit QueryDataServiceResponseBodyResultHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregator) {
      res["Aggregator"] = boost::any(*aggregator);
    }
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aggregator") != m.end() && !m["Aggregator"].empty()) {
      aggregator = make_shared<string>(boost::any_cast<string>(m["Aggregator"]));
    }
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QueryDataServiceResponseBodyResultHeaders() = default;
};
class QueryDataServiceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDataServiceResponseBodyResultHeaders>> headers{};
  shared_ptr<string> sql{};
  shared_ptr<vector<map<string, boost::any>>> values{};

  QueryDataServiceResponseBodyResult() {}

  explicit QueryDataServiceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      vector<boost::any> temp1;
      for(auto item1:*headers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Headers"] = boost::any(temp1);
    }
    if (sql) {
      res["Sql"] = boost::any(*sql);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Headers") != m.end() && !m["Headers"].empty()) {
      if (typeid(vector<boost::any>) == m["Headers"].type()) {
        vector<QueryDataServiceResponseBodyResultHeaders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Headers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDataServiceResponseBodyResultHeaders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        headers = make_shared<vector<QueryDataServiceResponseBodyResultHeaders>>(expect1);
      }
    }
    if (m.find("Sql") != m.end() && !m["Sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["Sql"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      values = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~QueryDataServiceResponseBodyResult() = default;
};
class QueryDataServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryDataServiceResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryDataServiceResponseBody() {}

  explicit QueryDataServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryDataServiceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryDataServiceResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDataServiceResponseBody() = default;
};
class QueryDataServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDataServiceResponseBody> body{};

  QueryDataServiceResponse() {}

  explicit QueryDataServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDataServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDataServiceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDataServiceResponse() = default;
};
class QueryDataServiceListRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userId{};

  QueryDataServiceListRequest() {}

  explicit QueryDataServiceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryDataServiceListRequest() = default;
};
class QueryDataServiceListResponseBodyResultDataContentFilter : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> filters{};
  shared_ptr<string> logicalOperator{};
  shared_ptr<string> type{};

  QueryDataServiceListResponseBodyResultDataContentFilter() {}

  explicit QueryDataServiceListResponseBodyResultDataContentFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filters) {
      res["Filters"] = boost::any(*filters);
    }
    if (logicalOperator) {
      res["LogicalOperator"] = boost::any(*logicalOperator);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Filters"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      filters = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("LogicalOperator") != m.end() && !m["LogicalOperator"].empty()) {
      logicalOperator = make_shared<string>(boost::any_cast<string>(m["LogicalOperator"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QueryDataServiceListResponseBodyResultDataContentFilter() = default;
};
class QueryDataServiceListResponseBodyResultDataContentReturnFieldsField : public Darabonba::Model {
public:
  shared_ptr<string> caption{};
  shared_ptr<string> column{};
  shared_ptr<string> dataType{};
  shared_ptr<string> fid{};
  shared_ptr<string> granularity{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  QueryDataServiceListResponseBodyResultDataContentReturnFieldsField() {}

  explicit QueryDataServiceListResponseBodyResultDataContentReturnFieldsField(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caption) {
      res["Caption"] = boost::any(*caption);
    }
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (fid) {
      res["Fid"] = boost::any(*fid);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Caption") != m.end() && !m["Caption"].empty()) {
      caption = make_shared<string>(boost::any_cast<string>(m["Caption"]));
    }
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Fid") != m.end() && !m["Fid"].empty()) {
      fid = make_shared<string>(boost::any_cast<string>(m["Fid"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~QueryDataServiceListResponseBodyResultDataContentReturnFieldsField() = default;
};
class QueryDataServiceListResponseBodyResultDataContentReturnFields : public Darabonba::Model {
public:
  shared_ptr<string> aggregator{};
  shared_ptr<string> alias{};
  shared_ptr<string> desc{};
  shared_ptr<QueryDataServiceListResponseBodyResultDataContentReturnFieldsField> field{};
  shared_ptr<string> orderby{};

  QueryDataServiceListResponseBodyResultDataContentReturnFields() {}

  explicit QueryDataServiceListResponseBodyResultDataContentReturnFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregator) {
      res["Aggregator"] = boost::any(*aggregator);
    }
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (field) {
      res["Field"] = field ? boost::any(field->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderby) {
      res["Orderby"] = boost::any(*orderby);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aggregator") != m.end() && !m["Aggregator"].empty()) {
      aggregator = make_shared<string>(boost::any_cast<string>(m["Aggregator"]));
    }
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      if (typeid(map<string, boost::any>) == m["Field"].type()) {
        QueryDataServiceListResponseBodyResultDataContentReturnFieldsField model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Field"]));
        field = make_shared<QueryDataServiceListResponseBodyResultDataContentReturnFieldsField>(model1);
      }
    }
    if (m.find("Orderby") != m.end() && !m["Orderby"].empty()) {
      orderby = make_shared<string>(boost::any_cast<string>(m["Orderby"]));
    }
  }


  virtual ~QueryDataServiceListResponseBodyResultDataContentReturnFields() = default;
};
class QueryDataServiceListResponseBodyResultDataContent : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> cubeName{};
  shared_ptr<bool> detail{};
  shared_ptr<QueryDataServiceListResponseBodyResultDataContentFilter> filter{};
  shared_ptr<vector<QueryDataServiceListResponseBodyResultDataContentReturnFields>> returnFields{};

  QueryDataServiceListResponseBodyResultDataContent() {}

  explicit QueryDataServiceListResponseBodyResultDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (cubeName) {
      res["CubeName"] = boost::any(*cubeName);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (filter) {
      res["Filter"] = filter ? boost::any(filter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (returnFields) {
      vector<boost::any> temp1;
      for(auto item1:*returnFields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReturnFields"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("CubeName") != m.end() && !m["CubeName"].empty()) {
      cubeName = make_shared<string>(boost::any_cast<string>(m["CubeName"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<bool>(boost::any_cast<bool>(m["Detail"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filter"].type()) {
        QueryDataServiceListResponseBodyResultDataContentFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Filter"]));
        filter = make_shared<QueryDataServiceListResponseBodyResultDataContentFilter>(model1);
      }
    }
    if (m.find("ReturnFields") != m.end() && !m["ReturnFields"].empty()) {
      if (typeid(vector<boost::any>) == m["ReturnFields"].type()) {
        vector<QueryDataServiceListResponseBodyResultDataContentReturnFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReturnFields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDataServiceListResponseBodyResultDataContentReturnFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        returnFields = make_shared<vector<QueryDataServiceListResponseBodyResultDataContentReturnFields>>(expect1);
      }
    }
  }


  virtual ~QueryDataServiceListResponseBodyResultDataContent() = default;
};
class QueryDataServiceListResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<QueryDataServiceListResponseBodyResultDataContent> content{};
  shared_ptr<string> creatorId{};
  shared_ptr<string> creatorName{};
  shared_ptr<string> cubeId{};
  shared_ptr<string> cubeName{};
  shared_ptr<string> desc{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> modifierId{};
  shared_ptr<string> modifierName{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> sid{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  QueryDataServiceListResponseBodyResultData() {}

  explicit QueryDataServiceListResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (cubeName) {
      res["CubeName"] = boost::any(*cubeName);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (modifierId) {
      res["ModifierId"] = boost::any(*modifierId);
    }
    if (modifierName) {
      res["ModifierName"] = boost::any(*modifierName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        QueryDataServiceListResponseBodyResultDataContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<QueryDataServiceListResponseBodyResultDataContent>(model1);
      }
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<string>(boost::any_cast<string>(m["CreatorId"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("CubeName") != m.end() && !m["CubeName"].empty()) {
      cubeName = make_shared<string>(boost::any_cast<string>(m["CubeName"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("ModifierId") != m.end() && !m["ModifierId"].empty()) {
      modifierId = make_shared<string>(boost::any_cast<string>(m["ModifierId"]));
    }
    if (m.find("ModifierName") != m.end() && !m["ModifierName"].empty()) {
      modifierName = make_shared<string>(boost::any_cast<string>(m["ModifierName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QueryDataServiceListResponseBodyResultData() = default;
};
class QueryDataServiceListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDataServiceListResponseBodyResultData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPages{};

  QueryDataServiceListResponseBodyResult() {}

  explicit QueryDataServiceListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryDataServiceListResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDataServiceListResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryDataServiceListResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~QueryDataServiceListResponseBodyResult() = default;
};
class QueryDataServiceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryDataServiceListResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryDataServiceListResponseBody() {}

  explicit QueryDataServiceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryDataServiceListResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryDataServiceListResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDataServiceListResponseBody() = default;
};
class QueryDataServiceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDataServiceListResponseBody> body{};

  QueryDataServiceListResponse() {}

  explicit QueryDataServiceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDataServiceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDataServiceListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDataServiceListResponse() = default;
};
class QueryDatasetDetailInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};

  QueryDatasetDetailInfoRequest() {}

  explicit QueryDatasetDetailInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
  }


  virtual ~QueryDatasetDetailInfoRequest() = default;
};
class QueryDatasetDetailInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  QueryDatasetDetailInfoResponseBody() {}

  explicit QueryDatasetDetailInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDatasetDetailInfoResponseBody() = default;
};
class QueryDatasetDetailInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDatasetDetailInfoResponseBody> body{};

  QueryDatasetDetailInfoResponse() {}

  explicit QueryDatasetDetailInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDatasetDetailInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDatasetDetailInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDatasetDetailInfoResponse() = default;
};
class QueryDatasetInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetId{};

  QueryDatasetInfoRequest() {}

  explicit QueryDatasetInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
  }


  virtual ~QueryDatasetInfoRequest() = default;
};
class QueryDatasetInfoResponseBodyResultCubeTableList : public Darabonba::Model {
public:
  shared_ptr<string> caption{};
  shared_ptr<bool> customsql{};
  shared_ptr<string> datasourceId{};
  shared_ptr<string> dsType{};
  shared_ptr<bool> factTable{};
  shared_ptr<string> sql{};
  shared_ptr<string> tableName{};
  shared_ptr<string> uniqueId{};

  QueryDatasetInfoResponseBodyResultCubeTableList() {}

  explicit QueryDatasetInfoResponseBodyResultCubeTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caption) {
      res["Caption"] = boost::any(*caption);
    }
    if (customsql) {
      res["Customsql"] = boost::any(*customsql);
    }
    if (datasourceId) {
      res["DatasourceId"] = boost::any(*datasourceId);
    }
    if (dsType) {
      res["DsType"] = boost::any(*dsType);
    }
    if (factTable) {
      res["FactTable"] = boost::any(*factTable);
    }
    if (sql) {
      res["Sql"] = boost::any(*sql);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (uniqueId) {
      res["UniqueId"] = boost::any(*uniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Caption") != m.end() && !m["Caption"].empty()) {
      caption = make_shared<string>(boost::any_cast<string>(m["Caption"]));
    }
    if (m.find("Customsql") != m.end() && !m["Customsql"].empty()) {
      customsql = make_shared<bool>(boost::any_cast<bool>(m["Customsql"]));
    }
    if (m.find("DatasourceId") != m.end() && !m["DatasourceId"].empty()) {
      datasourceId = make_shared<string>(boost::any_cast<string>(m["DatasourceId"]));
    }
    if (m.find("DsType") != m.end() && !m["DsType"].empty()) {
      dsType = make_shared<string>(boost::any_cast<string>(m["DsType"]));
    }
    if (m.find("FactTable") != m.end() && !m["FactTable"].empty()) {
      factTable = make_shared<bool>(boost::any_cast<bool>(m["FactTable"]));
    }
    if (m.find("Sql") != m.end() && !m["Sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["Sql"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("UniqueId") != m.end() && !m["UniqueId"].empty()) {
      uniqueId = make_shared<string>(boost::any_cast<string>(m["UniqueId"]));
    }
  }


  virtual ~QueryDatasetInfoResponseBodyResultCubeTableList() = default;
};
class QueryDatasetInfoResponseBodyResultDimensionList : public Darabonba::Model {
public:
  shared_ptr<string> caption{};
  shared_ptr<string> dataType{};
  shared_ptr<string> dimensionType{};
  shared_ptr<string> expression{};
  shared_ptr<string> factColumn{};
  shared_ptr<string> fieldDescription{};
  shared_ptr<string> granularity{};
  shared_ptr<string> refUid{};
  shared_ptr<string> tableUniqueId{};
  shared_ptr<string> uid{};

  QueryDatasetInfoResponseBodyResultDimensionList() {}

  explicit QueryDatasetInfoResponseBodyResultDimensionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caption) {
      res["Caption"] = boost::any(*caption);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (dimensionType) {
      res["DimensionType"] = boost::any(*dimensionType);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (factColumn) {
      res["FactColumn"] = boost::any(*factColumn);
    }
    if (fieldDescription) {
      res["FieldDescription"] = boost::any(*fieldDescription);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (refUid) {
      res["RefUid"] = boost::any(*refUid);
    }
    if (tableUniqueId) {
      res["TableUniqueId"] = boost::any(*tableUniqueId);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Caption") != m.end() && !m["Caption"].empty()) {
      caption = make_shared<string>(boost::any_cast<string>(m["Caption"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DimensionType") != m.end() && !m["DimensionType"].empty()) {
      dimensionType = make_shared<string>(boost::any_cast<string>(m["DimensionType"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("FactColumn") != m.end() && !m["FactColumn"].empty()) {
      factColumn = make_shared<string>(boost::any_cast<string>(m["FactColumn"]));
    }
    if (m.find("FieldDescription") != m.end() && !m["FieldDescription"].empty()) {
      fieldDescription = make_shared<string>(boost::any_cast<string>(m["FieldDescription"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("RefUid") != m.end() && !m["RefUid"].empty()) {
      refUid = make_shared<string>(boost::any_cast<string>(m["RefUid"]));
    }
    if (m.find("TableUniqueId") != m.end() && !m["TableUniqueId"].empty()) {
      tableUniqueId = make_shared<string>(boost::any_cast<string>(m["TableUniqueId"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~QueryDatasetInfoResponseBodyResultDimensionList() = default;
};
class QueryDatasetInfoResponseBodyResultDirectory : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> pathId{};
  shared_ptr<string> pathName{};

  QueryDatasetInfoResponseBodyResultDirectory() {}

  explicit QueryDatasetInfoResponseBodyResultDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pathId) {
      res["PathId"] = boost::any(*pathId);
    }
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PathId") != m.end() && !m["PathId"].empty()) {
      pathId = make_shared<string>(boost::any_cast<string>(m["PathId"]));
    }
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
  }


  virtual ~QueryDatasetInfoResponseBodyResultDirectory() = default;
};
class QueryDatasetInfoResponseBodyResultMeasureList : public Darabonba::Model {
public:
  shared_ptr<string> caption{};
  shared_ptr<string> dataType{};
  shared_ptr<string> expression{};
  shared_ptr<string> factColumn{};
  shared_ptr<string> fieldDescription{};
  shared_ptr<string> measureType{};
  shared_ptr<string> tableUniqueId{};
  shared_ptr<string> uid{};

  QueryDatasetInfoResponseBodyResultMeasureList() {}

  explicit QueryDatasetInfoResponseBodyResultMeasureList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caption) {
      res["Caption"] = boost::any(*caption);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (factColumn) {
      res["FactColumn"] = boost::any(*factColumn);
    }
    if (fieldDescription) {
      res["FieldDescription"] = boost::any(*fieldDescription);
    }
    if (measureType) {
      res["MeasureType"] = boost::any(*measureType);
    }
    if (tableUniqueId) {
      res["TableUniqueId"] = boost::any(*tableUniqueId);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Caption") != m.end() && !m["Caption"].empty()) {
      caption = make_shared<string>(boost::any_cast<string>(m["Caption"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("FactColumn") != m.end() && !m["FactColumn"].empty()) {
      factColumn = make_shared<string>(boost::any_cast<string>(m["FactColumn"]));
    }
    if (m.find("FieldDescription") != m.end() && !m["FieldDescription"].empty()) {
      fieldDescription = make_shared<string>(boost::any_cast<string>(m["FieldDescription"]));
    }
    if (m.find("MeasureType") != m.end() && !m["MeasureType"].empty()) {
      measureType = make_shared<string>(boost::any_cast<string>(m["MeasureType"]));
    }
    if (m.find("TableUniqueId") != m.end() && !m["TableUniqueId"].empty()) {
      tableUniqueId = make_shared<string>(boost::any_cast<string>(m["TableUniqueId"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~QueryDatasetInfoResponseBodyResultMeasureList() = default;
};
class QueryDatasetInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDatasetInfoResponseBodyResultCubeTableList>> cubeTableList{};
  shared_ptr<bool> custimzeSql{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> datasetName{};
  shared_ptr<vector<QueryDatasetInfoResponseBodyResultDimensionList>> dimensionList{};
  shared_ptr<QueryDatasetInfoResponseBodyResultDirectory> directory{};
  shared_ptr<string> dsId{};
  shared_ptr<string> dsName{};
  shared_ptr<string> dsType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<vector<QueryDatasetInfoResponseBodyResultMeasureList>> measureList{};
  shared_ptr<bool> openOfflineAcceleration{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerName{};
  shared_ptr<bool> rowLevel{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  QueryDatasetInfoResponseBodyResult() {}

  explicit QueryDatasetInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeTableList) {
      vector<boost::any> temp1;
      for(auto item1:*cubeTableList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CubeTableList"] = boost::any(temp1);
    }
    if (custimzeSql) {
      res["CustimzeSql"] = boost::any(*custimzeSql);
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (dimensionList) {
      vector<boost::any> temp1;
      for(auto item1:*dimensionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DimensionList"] = boost::any(temp1);
    }
    if (directory) {
      res["Directory"] = directory ? boost::any(directory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dsId) {
      res["DsId"] = boost::any(*dsId);
    }
    if (dsName) {
      res["DsName"] = boost::any(*dsName);
    }
    if (dsType) {
      res["DsType"] = boost::any(*dsType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["GmtModify"] = boost::any(*gmtModify);
    }
    if (measureList) {
      vector<boost::any> temp1;
      for(auto item1:*measureList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MeasureList"] = boost::any(temp1);
    }
    if (openOfflineAcceleration) {
      res["OpenOfflineAcceleration"] = boost::any(*openOfflineAcceleration);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (rowLevel) {
      res["RowLevel"] = boost::any(*rowLevel);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeTableList") != m.end() && !m["CubeTableList"].empty()) {
      if (typeid(vector<boost::any>) == m["CubeTableList"].type()) {
        vector<QueryDatasetInfoResponseBodyResultCubeTableList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CubeTableList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDatasetInfoResponseBodyResultCubeTableList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cubeTableList = make_shared<vector<QueryDatasetInfoResponseBodyResultCubeTableList>>(expect1);
      }
    }
    if (m.find("CustimzeSql") != m.end() && !m["CustimzeSql"].empty()) {
      custimzeSql = make_shared<bool>(boost::any_cast<bool>(m["CustimzeSql"]));
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("DimensionList") != m.end() && !m["DimensionList"].empty()) {
      if (typeid(vector<boost::any>) == m["DimensionList"].type()) {
        vector<QueryDatasetInfoResponseBodyResultDimensionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DimensionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDatasetInfoResponseBodyResultDimensionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dimensionList = make_shared<vector<QueryDatasetInfoResponseBodyResultDimensionList>>(expect1);
      }
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Directory"].type()) {
        QueryDatasetInfoResponseBodyResultDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Directory"]));
        directory = make_shared<QueryDatasetInfoResponseBodyResultDirectory>(model1);
      }
    }
    if (m.find("DsId") != m.end() && !m["DsId"].empty()) {
      dsId = make_shared<string>(boost::any_cast<string>(m["DsId"]));
    }
    if (m.find("DsName") != m.end() && !m["DsName"].empty()) {
      dsName = make_shared<string>(boost::any_cast<string>(m["DsName"]));
    }
    if (m.find("DsType") != m.end() && !m["DsType"].empty()) {
      dsType = make_shared<string>(boost::any_cast<string>(m["DsType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModify") != m.end() && !m["GmtModify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["GmtModify"]));
    }
    if (m.find("MeasureList") != m.end() && !m["MeasureList"].empty()) {
      if (typeid(vector<boost::any>) == m["MeasureList"].type()) {
        vector<QueryDatasetInfoResponseBodyResultMeasureList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MeasureList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDatasetInfoResponseBodyResultMeasureList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        measureList = make_shared<vector<QueryDatasetInfoResponseBodyResultMeasureList>>(expect1);
      }
    }
    if (m.find("OpenOfflineAcceleration") != m.end() && !m["OpenOfflineAcceleration"].empty()) {
      openOfflineAcceleration = make_shared<bool>(boost::any_cast<bool>(m["OpenOfflineAcceleration"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("RowLevel") != m.end() && !m["RowLevel"].empty()) {
      rowLevel = make_shared<bool>(boost::any_cast<bool>(m["RowLevel"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QueryDatasetInfoResponseBodyResult() = default;
};
class QueryDatasetInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryDatasetInfoResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryDatasetInfoResponseBody() {}

  explicit QueryDatasetInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryDatasetInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryDatasetInfoResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDatasetInfoResponseBody() = default;
};
class QueryDatasetInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDatasetInfoResponseBody> body{};

  QueryDatasetInfoResponse() {}

  explicit QueryDatasetInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDatasetInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDatasetInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDatasetInfoResponse() = default;
};
class QueryDatasetListRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> withChildren{};
  shared_ptr<string> workspaceId{};

  QueryDatasetListRequest() {}

  explicit QueryDatasetListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (withChildren) {
      res["WithChildren"] = boost::any(*withChildren);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("WithChildren") != m.end() && !m["WithChildren"].empty()) {
      withChildren = make_shared<bool>(boost::any_cast<bool>(m["WithChildren"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~QueryDatasetListRequest() = default;
};
class QueryDatasetListResponseBodyResultDataDataSource : public Darabonba::Model {
public:
  shared_ptr<string> dsId{};
  shared_ptr<string> dsName{};
  shared_ptr<string> dsType{};

  QueryDatasetListResponseBodyResultDataDataSource() {}

  explicit QueryDatasetListResponseBodyResultDataDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dsId) {
      res["DsId"] = boost::any(*dsId);
    }
    if (dsName) {
      res["DsName"] = boost::any(*dsName);
    }
    if (dsType) {
      res["DsType"] = boost::any(*dsType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DsId") != m.end() && !m["DsId"].empty()) {
      dsId = make_shared<string>(boost::any_cast<string>(m["DsId"]));
    }
    if (m.find("DsName") != m.end() && !m["DsName"].empty()) {
      dsName = make_shared<string>(boost::any_cast<string>(m["DsName"]));
    }
    if (m.find("DsType") != m.end() && !m["DsType"].empty()) {
      dsType = make_shared<string>(boost::any_cast<string>(m["DsType"]));
    }
  }


  virtual ~QueryDatasetListResponseBodyResultDataDataSource() = default;
};
class QueryDatasetListResponseBodyResultDataDirectory : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> pathId{};
  shared_ptr<string> pathName{};

  QueryDatasetListResponseBodyResultDataDirectory() {}

  explicit QueryDatasetListResponseBodyResultDataDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pathId) {
      res["PathId"] = boost::any(*pathId);
    }
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PathId") != m.end() && !m["PathId"].empty()) {
      pathId = make_shared<string>(boost::any_cast<string>(m["PathId"]));
    }
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
  }


  virtual ~QueryDatasetListResponseBodyResultDataDirectory() = default;
};
class QueryDatasetListResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<QueryDatasetListResponseBodyResultDataDataSource> dataSource{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> description{};
  shared_ptr<QueryDatasetListResponseBodyResultDataDirectory> directory{};
  shared_ptr<string> modifyTime{};
  shared_ptr<bool> openOfflineAcceleration{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerName{};
  shared_ptr<bool> rowLevel{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  QueryDatasetListResponseBodyResultData() {}

  explicit QueryDatasetListResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directory) {
      res["Directory"] = directory ? boost::any(directory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (openOfflineAcceleration) {
      res["OpenOfflineAcceleration"] = boost::any(*openOfflineAcceleration);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (rowLevel) {
      res["RowLevel"] = boost::any(*rowLevel);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        QueryDatasetListResponseBodyResultDataDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<QueryDatasetListResponseBodyResultDataDataSource>(model1);
      }
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Directory"].type()) {
        QueryDatasetListResponseBodyResultDataDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Directory"]));
        directory = make_shared<QueryDatasetListResponseBodyResultDataDirectory>(model1);
      }
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("OpenOfflineAcceleration") != m.end() && !m["OpenOfflineAcceleration"].empty()) {
      openOfflineAcceleration = make_shared<bool>(boost::any_cast<bool>(m["OpenOfflineAcceleration"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("RowLevel") != m.end() && !m["RowLevel"].empty()) {
      rowLevel = make_shared<bool>(boost::any_cast<bool>(m["RowLevel"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QueryDatasetListResponseBodyResultData() = default;
};
class QueryDatasetListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDatasetListResponseBodyResultData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPages{};

  QueryDatasetListResponseBodyResult() {}

  explicit QueryDatasetListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryDatasetListResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDatasetListResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryDatasetListResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~QueryDatasetListResponseBodyResult() = default;
};
class QueryDatasetListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryDatasetListResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryDatasetListResponseBody() {}

  explicit QueryDatasetListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryDatasetListResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryDatasetListResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDatasetListResponseBody() = default;
};
class QueryDatasetListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDatasetListResponseBody> body{};

  QueryDatasetListResponse() {}

  explicit QueryDatasetListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDatasetListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDatasetListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDatasetListResponse() = default;
};
class QueryDatasetSmartqStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};

  QueryDatasetSmartqStatusRequest() {}

  explicit QueryDatasetSmartqStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
  }


  virtual ~QueryDatasetSmartqStatusRequest() = default;
};
class QueryDatasetSmartqStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  QueryDatasetSmartqStatusResponseBody() {}

  explicit QueryDatasetSmartqStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDatasetSmartqStatusResponseBody() = default;
};
class QueryDatasetSmartqStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDatasetSmartqStatusResponseBody> body{};

  QueryDatasetSmartqStatusResponse() {}

  explicit QueryDatasetSmartqStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDatasetSmartqStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDatasetSmartqStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDatasetSmartqStatusResponse() = default;
};
class QueryDatasetSwitchInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};

  QueryDatasetSwitchInfoRequest() {}

  explicit QueryDatasetSwitchInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
  }


  virtual ~QueryDatasetSwitchInfoRequest() = default;
};
class QueryDatasetSwitchInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<long> isOpenColumnLevelPermission{};
  shared_ptr<long> isOpenRowLevelPermission{};

  QueryDatasetSwitchInfoResponseBodyResult() {}

  explicit QueryDatasetSwitchInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (isOpenColumnLevelPermission) {
      res["IsOpenColumnLevelPermission"] = boost::any(*isOpenColumnLevelPermission);
    }
    if (isOpenRowLevelPermission) {
      res["IsOpenRowLevelPermission"] = boost::any(*isOpenRowLevelPermission);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("IsOpenColumnLevelPermission") != m.end() && !m["IsOpenColumnLevelPermission"].empty()) {
      isOpenColumnLevelPermission = make_shared<long>(boost::any_cast<long>(m["IsOpenColumnLevelPermission"]));
    }
    if (m.find("IsOpenRowLevelPermission") != m.end() && !m["IsOpenRowLevelPermission"].empty()) {
      isOpenRowLevelPermission = make_shared<long>(boost::any_cast<long>(m["IsOpenRowLevelPermission"]));
    }
  }


  virtual ~QueryDatasetSwitchInfoResponseBodyResult() = default;
};
class QueryDatasetSwitchInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryDatasetSwitchInfoResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryDatasetSwitchInfoResponseBody() {}

  explicit QueryDatasetSwitchInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryDatasetSwitchInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryDatasetSwitchInfoResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDatasetSwitchInfoResponseBody() = default;
};
class QueryDatasetSwitchInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDatasetSwitchInfoResponseBody> body{};

  QueryDatasetSwitchInfoResponse() {}

  explicit QueryDatasetSwitchInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDatasetSwitchInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDatasetSwitchInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDatasetSwitchInfoResponse() = default;
};
class QueryEmbeddedInfoResponseBodyResultDetail : public Darabonba::Model {
public:
  shared_ptr<long> dashboardOfflineQuery{};
  shared_ptr<long> page{};
  shared_ptr<long> report{};

  QueryEmbeddedInfoResponseBodyResultDetail() {}

  explicit QueryEmbeddedInfoResponseBodyResultDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dashboardOfflineQuery) {
      res["DashboardOfflineQuery"] = boost::any(*dashboardOfflineQuery);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (report) {
      res["Report"] = boost::any(*report);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DashboardOfflineQuery") != m.end() && !m["DashboardOfflineQuery"].empty()) {
      dashboardOfflineQuery = make_shared<long>(boost::any_cast<long>(m["DashboardOfflineQuery"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("Report") != m.end() && !m["Report"].empty()) {
      report = make_shared<long>(boost::any_cast<long>(m["Report"]));
    }
  }


  virtual ~QueryEmbeddedInfoResponseBodyResultDetail() = default;
};
class QueryEmbeddedInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<QueryEmbeddedInfoResponseBodyResultDetail> detail{};
  shared_ptr<long> embeddedCount{};
  shared_ptr<long> maxCount{};

  QueryEmbeddedInfoResponseBodyResult() {}

  explicit QueryEmbeddedInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = detail ? boost::any(detail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (embeddedCount) {
      res["EmbeddedCount"] = boost::any(*embeddedCount);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      if (typeid(map<string, boost::any>) == m["Detail"].type()) {
        QueryEmbeddedInfoResponseBodyResultDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Detail"]));
        detail = make_shared<QueryEmbeddedInfoResponseBodyResultDetail>(model1);
      }
    }
    if (m.find("EmbeddedCount") != m.end() && !m["EmbeddedCount"].empty()) {
      embeddedCount = make_shared<long>(boost::any_cast<long>(m["EmbeddedCount"]));
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<long>(boost::any_cast<long>(m["MaxCount"]));
    }
  }


  virtual ~QueryEmbeddedInfoResponseBodyResult() = default;
};
class QueryEmbeddedInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryEmbeddedInfoResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryEmbeddedInfoResponseBody() {}

  explicit QueryEmbeddedInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryEmbeddedInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryEmbeddedInfoResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryEmbeddedInfoResponseBody() = default;
};
class QueryEmbeddedInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEmbeddedInfoResponseBody> body{};

  QueryEmbeddedInfoResponse() {}

  explicit QueryEmbeddedInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryEmbeddedInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEmbeddedInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEmbeddedInfoResponse() = default;
};
class QueryEmbeddedStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> worksId{};

  QueryEmbeddedStatusRequest() {}

  explicit QueryEmbeddedStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
  }


  virtual ~QueryEmbeddedStatusRequest() = default;
};
class QueryEmbeddedStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  QueryEmbeddedStatusResponseBody() {}

  explicit QueryEmbeddedStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryEmbeddedStatusResponseBody() = default;
};
class QueryEmbeddedStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEmbeddedStatusResponseBody> body{};

  QueryEmbeddedStatusResponse() {}

  explicit QueryEmbeddedStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryEmbeddedStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEmbeddedStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEmbeddedStatusResponse() = default;
};
class QueryLlmCubeWithThemeListByUserIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  QueryLlmCubeWithThemeListByUserIdRequest() {}

  explicit QueryLlmCubeWithThemeListByUserIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryLlmCubeWithThemeListByUserIdRequest() = default;
};
class QueryLlmCubeWithThemeListByUserIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> cubeIds{};
  shared_ptr<map<string, string>> themeIds{};

  QueryLlmCubeWithThemeListByUserIdResponseBodyResult() {}

  explicit QueryLlmCubeWithThemeListByUserIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeIds) {
      res["CubeIds"] = boost::any(*cubeIds);
    }
    if (themeIds) {
      res["ThemeIds"] = boost::any(*themeIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeIds") != m.end() && !m["CubeIds"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["CubeIds"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      cubeIds = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ThemeIds") != m.end() && !m["ThemeIds"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ThemeIds"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      themeIds = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~QueryLlmCubeWithThemeListByUserIdResponseBodyResult() = default;
};
class QueryLlmCubeWithThemeListByUserIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryLlmCubeWithThemeListByUserIdResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryLlmCubeWithThemeListByUserIdResponseBody() {}

  explicit QueryLlmCubeWithThemeListByUserIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryLlmCubeWithThemeListByUserIdResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryLlmCubeWithThemeListByUserIdResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryLlmCubeWithThemeListByUserIdResponseBody() = default;
};
class QueryLlmCubeWithThemeListByUserIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryLlmCubeWithThemeListByUserIdResponseBody> body{};

  QueryLlmCubeWithThemeListByUserIdResponse() {}

  explicit QueryLlmCubeWithThemeListByUserIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryLlmCubeWithThemeListByUserIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryLlmCubeWithThemeListByUserIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryLlmCubeWithThemeListByUserIdResponse() = default;
};
class QueryOrganizationRoleConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> roleId{};

  QueryOrganizationRoleConfigRequest() {}

  explicit QueryOrganizationRoleConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
  }


  virtual ~QueryOrganizationRoleConfigRequest() = default;
};
class QueryOrganizationRoleConfigResponseBodyResultAuthConfigList : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};

  QueryOrganizationRoleConfigResponseBodyResultAuthConfigList() {}

  explicit QueryOrganizationRoleConfigResponseBodyResultAuthConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
  }


  virtual ~QueryOrganizationRoleConfigResponseBodyResultAuthConfigList() = default;
};
class QueryOrganizationRoleConfigResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryOrganizationRoleConfigResponseBodyResultAuthConfigList>> authConfigList{};
  shared_ptr<bool> isSystemRole{};
  shared_ptr<long> roleId{};
  shared_ptr<string> roleName{};

  QueryOrganizationRoleConfigResponseBodyResult() {}

  explicit QueryOrganizationRoleConfigResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authConfigList) {
      vector<boost::any> temp1;
      for(auto item1:*authConfigList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthConfigList"] = boost::any(temp1);
    }
    if (isSystemRole) {
      res["IsSystemRole"] = boost::any(*isSystemRole);
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
    if (m.find("AuthConfigList") != m.end() && !m["AuthConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthConfigList"].type()) {
        vector<QueryOrganizationRoleConfigResponseBodyResultAuthConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryOrganizationRoleConfigResponseBodyResultAuthConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authConfigList = make_shared<vector<QueryOrganizationRoleConfigResponseBodyResultAuthConfigList>>(expect1);
      }
    }
    if (m.find("IsSystemRole") != m.end() && !m["IsSystemRole"].empty()) {
      isSystemRole = make_shared<bool>(boost::any_cast<bool>(m["IsSystemRole"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~QueryOrganizationRoleConfigResponseBodyResult() = default;
};
class QueryOrganizationRoleConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryOrganizationRoleConfigResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryOrganizationRoleConfigResponseBody() {}

  explicit QueryOrganizationRoleConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryOrganizationRoleConfigResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryOrganizationRoleConfigResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryOrganizationRoleConfigResponseBody() = default;
};
class QueryOrganizationRoleConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryOrganizationRoleConfigResponseBody> body{};

  QueryOrganizationRoleConfigResponse() {}

  explicit QueryOrganizationRoleConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryOrganizationRoleConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOrganizationRoleConfigResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOrganizationRoleConfigResponse() = default;
};
class QueryOrganizationWorkspaceListRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userId{};

  QueryOrganizationWorkspaceListRequest() {}

  explicit QueryOrganizationWorkspaceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
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
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryOrganizationWorkspaceListRequest() = default;
};
class QueryOrganizationWorkspaceListResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<bool> allowPublishOperation{};
  shared_ptr<bool> allowShareOperation{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<string> createUserAccountName{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> modifyUser{};
  shared_ptr<string> modifyUserAccountName{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> owner{};
  shared_ptr<string> ownerAccountName{};
  shared_ptr<string> workspaceDescription{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  QueryOrganizationWorkspaceListResponseBodyResultData() {}

  explicit QueryOrganizationWorkspaceListResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowPublishOperation) {
      res["AllowPublishOperation"] = boost::any(*allowPublishOperation);
    }
    if (allowShareOperation) {
      res["AllowShareOperation"] = boost::any(*allowShareOperation);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (createUserAccountName) {
      res["CreateUserAccountName"] = boost::any(*createUserAccountName);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (modifyUser) {
      res["ModifyUser"] = boost::any(*modifyUser);
    }
    if (modifyUserAccountName) {
      res["ModifyUserAccountName"] = boost::any(*modifyUserAccountName);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (ownerAccountName) {
      res["OwnerAccountName"] = boost::any(*ownerAccountName);
    }
    if (workspaceDescription) {
      res["WorkspaceDescription"] = boost::any(*workspaceDescription);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowPublishOperation") != m.end() && !m["AllowPublishOperation"].empty()) {
      allowPublishOperation = make_shared<bool>(boost::any_cast<bool>(m["AllowPublishOperation"]));
    }
    if (m.find("AllowShareOperation") != m.end() && !m["AllowShareOperation"].empty()) {
      allowShareOperation = make_shared<bool>(boost::any_cast<bool>(m["AllowShareOperation"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("CreateUserAccountName") != m.end() && !m["CreateUserAccountName"].empty()) {
      createUserAccountName = make_shared<string>(boost::any_cast<string>(m["CreateUserAccountName"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModifyUser") != m.end() && !m["ModifyUser"].empty()) {
      modifyUser = make_shared<string>(boost::any_cast<string>(m["ModifyUser"]));
    }
    if (m.find("ModifyUserAccountName") != m.end() && !m["ModifyUserAccountName"].empty()) {
      modifyUserAccountName = make_shared<string>(boost::any_cast<string>(m["ModifyUserAccountName"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("OwnerAccountName") != m.end() && !m["OwnerAccountName"].empty()) {
      ownerAccountName = make_shared<string>(boost::any_cast<string>(m["OwnerAccountName"]));
    }
    if (m.find("WorkspaceDescription") != m.end() && !m["WorkspaceDescription"].empty()) {
      workspaceDescription = make_shared<string>(boost::any_cast<string>(m["WorkspaceDescription"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QueryOrganizationWorkspaceListResponseBodyResultData() = default;
};
class QueryOrganizationWorkspaceListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryOrganizationWorkspaceListResponseBodyResultData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPages{};

  QueryOrganizationWorkspaceListResponseBodyResult() {}

  explicit QueryOrganizationWorkspaceListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryOrganizationWorkspaceListResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryOrganizationWorkspaceListResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryOrganizationWorkspaceListResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~QueryOrganizationWorkspaceListResponseBodyResult() = default;
};
class QueryOrganizationWorkspaceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryOrganizationWorkspaceListResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryOrganizationWorkspaceListResponseBody() {}

  explicit QueryOrganizationWorkspaceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryOrganizationWorkspaceListResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryOrganizationWorkspaceListResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryOrganizationWorkspaceListResponseBody() = default;
};
class QueryOrganizationWorkspaceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryOrganizationWorkspaceListResponseBody> body{};

  QueryOrganizationWorkspaceListResponse() {}

  explicit QueryOrganizationWorkspaceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryOrganizationWorkspaceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOrganizationWorkspaceListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOrganizationWorkspaceListResponse() = default;
};
class QueryReadableResourcesListByUserIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  QueryReadableResourcesListByUserIdRequest() {}

  explicit QueryReadableResourcesListByUserIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryReadableResourcesListByUserIdRequest() = default;
};
class QueryReadableResourcesListByUserIdResponseBodyResultDirectory : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> pathId{};
  shared_ptr<string> pathName{};

  QueryReadableResourcesListByUserIdResponseBodyResultDirectory() {}

  explicit QueryReadableResourcesListByUserIdResponseBodyResultDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pathId) {
      res["PathId"] = boost::any(*pathId);
    }
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PathId") != m.end() && !m["PathId"].empty()) {
      pathId = make_shared<string>(boost::any_cast<string>(m["PathId"]));
    }
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
  }


  virtual ~QueryReadableResourcesListByUserIdResponseBodyResultDirectory() = default;
};
class QueryReadableResourcesListByUserIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<QueryReadableResourcesListByUserIdResponseBodyResultDirectory> directory{};
  shared_ptr<string> modifyName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> securityLevel{};
  shared_ptr<long> status{};
  shared_ptr<long> thirdPartAuthFlag{};
  shared_ptr<string> workName{};
  shared_ptr<string> workType{};
  shared_ptr<string> worksId{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  QueryReadableResourcesListByUserIdResponseBodyResult() {}

  explicit QueryReadableResourcesListByUserIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (directory) {
      res["Directory"] = directory ? boost::any(directory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifyName) {
      res["ModifyName"] = boost::any(*modifyName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (thirdPartAuthFlag) {
      res["ThirdPartAuthFlag"] = boost::any(*thirdPartAuthFlag);
    }
    if (workName) {
      res["WorkName"] = boost::any(*workName);
    }
    if (workType) {
      res["WorkType"] = boost::any(*workType);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
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
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Directory"].type()) {
        QueryReadableResourcesListByUserIdResponseBodyResultDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Directory"]));
        directory = make_shared<QueryReadableResourcesListByUserIdResponseBodyResultDirectory>(model1);
      }
    }
    if (m.find("ModifyName") != m.end() && !m["ModifyName"].empty()) {
      modifyName = make_shared<string>(boost::any_cast<string>(m["ModifyName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<string>(boost::any_cast<string>(m["SecurityLevel"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThirdPartAuthFlag") != m.end() && !m["ThirdPartAuthFlag"].empty()) {
      thirdPartAuthFlag = make_shared<long>(boost::any_cast<long>(m["ThirdPartAuthFlag"]));
    }
    if (m.find("WorkName") != m.end() && !m["WorkName"].empty()) {
      workName = make_shared<string>(boost::any_cast<string>(m["WorkName"]));
    }
    if (m.find("WorkType") != m.end() && !m["WorkType"].empty()) {
      workType = make_shared<string>(boost::any_cast<string>(m["WorkType"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QueryReadableResourcesListByUserIdResponseBodyResult() = default;
};
class QueryReadableResourcesListByUserIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryReadableResourcesListByUserIdResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QueryReadableResourcesListByUserIdResponseBody() {}

  explicit QueryReadableResourcesListByUserIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryReadableResourcesListByUserIdResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryReadableResourcesListByUserIdResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryReadableResourcesListByUserIdResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryReadableResourcesListByUserIdResponseBody() = default;
};
class QueryReadableResourcesListByUserIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryReadableResourcesListByUserIdResponseBody> body{};

  QueryReadableResourcesListByUserIdResponse() {}

  explicit QueryReadableResourcesListByUserIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryReadableResourcesListByUserIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryReadableResourcesListByUserIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryReadableResourcesListByUserIdResponse() = default;
};
class QueryReportPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> costTimeAvgMin{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryType{};
  shared_ptr<string> reportId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> workspaceId{};

  QueryReportPerformanceRequest() {}

  explicit QueryReportPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTimeAvgMin) {
      res["CostTimeAvgMin"] = boost::any(*costTimeAvgMin);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTimeAvgMin") != m.end() && !m["CostTimeAvgMin"].empty()) {
      costTimeAvgMin = make_shared<long>(boost::any_cast<long>(m["CostTimeAvgMin"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~QueryReportPerformanceRequest() = default;
};
class QueryReportPerformanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<double> cacheCostTimeAvg{};
  shared_ptr<long> cacheQueryCount{};
  shared_ptr<long> componentQueryCount{};
  shared_ptr<double> componentQueryCountAvg{};
  shared_ptr<double> costTimeAvg{};
  shared_ptr<long> queryCount{};
  shared_ptr<double> queryCountAvg{};
  shared_ptr<double> queryOverFivePercentNum{};
  shared_ptr<string> queryOverFiveSecPercent{};
  shared_ptr<string> queryOverTenSecPercent{};
  shared_ptr<double> queryOverTenSecPercentNum{};
  shared_ptr<long> queryTimeoutCount{};
  shared_ptr<double> queryTimeoutCountPercent{};
  shared_ptr<double> quickIndexCostTimeAvg{};
  shared_ptr<long> quickIndexQueryCount{};
  shared_ptr<string> repeatQueryPercent{};
  shared_ptr<double> repeatQueryPercentNum{};
  shared_ptr<long> repeatSqlQueryCount{};
  shared_ptr<string> repeatSqlQueryPercent{};
  shared_ptr<string> reportId{};
  shared_ptr<string> reportName{};
  shared_ptr<string> reportType{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  QueryReportPerformanceResponseBodyResult() {}

  explicit QueryReportPerformanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheCostTimeAvg) {
      res["CacheCostTimeAvg"] = boost::any(*cacheCostTimeAvg);
    }
    if (cacheQueryCount) {
      res["CacheQueryCount"] = boost::any(*cacheQueryCount);
    }
    if (componentQueryCount) {
      res["ComponentQueryCount"] = boost::any(*componentQueryCount);
    }
    if (componentQueryCountAvg) {
      res["ComponentQueryCountAvg"] = boost::any(*componentQueryCountAvg);
    }
    if (costTimeAvg) {
      res["CostTimeAvg"] = boost::any(*costTimeAvg);
    }
    if (queryCount) {
      res["QueryCount"] = boost::any(*queryCount);
    }
    if (queryCountAvg) {
      res["QueryCountAvg"] = boost::any(*queryCountAvg);
    }
    if (queryOverFivePercentNum) {
      res["QueryOverFivePercentNum"] = boost::any(*queryOverFivePercentNum);
    }
    if (queryOverFiveSecPercent) {
      res["QueryOverFiveSecPercent"] = boost::any(*queryOverFiveSecPercent);
    }
    if (queryOverTenSecPercent) {
      res["QueryOverTenSecPercent"] = boost::any(*queryOverTenSecPercent);
    }
    if (queryOverTenSecPercentNum) {
      res["QueryOverTenSecPercentNum"] = boost::any(*queryOverTenSecPercentNum);
    }
    if (queryTimeoutCount) {
      res["QueryTimeoutCount"] = boost::any(*queryTimeoutCount);
    }
    if (queryTimeoutCountPercent) {
      res["QueryTimeoutCountPercent"] = boost::any(*queryTimeoutCountPercent);
    }
    if (quickIndexCostTimeAvg) {
      res["QuickIndexCostTimeAvg"] = boost::any(*quickIndexCostTimeAvg);
    }
    if (quickIndexQueryCount) {
      res["QuickIndexQueryCount"] = boost::any(*quickIndexQueryCount);
    }
    if (repeatQueryPercent) {
      res["RepeatQueryPercent"] = boost::any(*repeatQueryPercent);
    }
    if (repeatQueryPercentNum) {
      res["RepeatQueryPercentNum"] = boost::any(*repeatQueryPercentNum);
    }
    if (repeatSqlQueryCount) {
      res["RepeatSqlQueryCount"] = boost::any(*repeatSqlQueryCount);
    }
    if (repeatSqlQueryPercent) {
      res["RepeatSqlQueryPercent"] = boost::any(*repeatSqlQueryPercent);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (reportName) {
      res["ReportName"] = boost::any(*reportName);
    }
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheCostTimeAvg") != m.end() && !m["CacheCostTimeAvg"].empty()) {
      cacheCostTimeAvg = make_shared<double>(boost::any_cast<double>(m["CacheCostTimeAvg"]));
    }
    if (m.find("CacheQueryCount") != m.end() && !m["CacheQueryCount"].empty()) {
      cacheQueryCount = make_shared<long>(boost::any_cast<long>(m["CacheQueryCount"]));
    }
    if (m.find("ComponentQueryCount") != m.end() && !m["ComponentQueryCount"].empty()) {
      componentQueryCount = make_shared<long>(boost::any_cast<long>(m["ComponentQueryCount"]));
    }
    if (m.find("ComponentQueryCountAvg") != m.end() && !m["ComponentQueryCountAvg"].empty()) {
      componentQueryCountAvg = make_shared<double>(boost::any_cast<double>(m["ComponentQueryCountAvg"]));
    }
    if (m.find("CostTimeAvg") != m.end() && !m["CostTimeAvg"].empty()) {
      costTimeAvg = make_shared<double>(boost::any_cast<double>(m["CostTimeAvg"]));
    }
    if (m.find("QueryCount") != m.end() && !m["QueryCount"].empty()) {
      queryCount = make_shared<long>(boost::any_cast<long>(m["QueryCount"]));
    }
    if (m.find("QueryCountAvg") != m.end() && !m["QueryCountAvg"].empty()) {
      queryCountAvg = make_shared<double>(boost::any_cast<double>(m["QueryCountAvg"]));
    }
    if (m.find("QueryOverFivePercentNum") != m.end() && !m["QueryOverFivePercentNum"].empty()) {
      queryOverFivePercentNum = make_shared<double>(boost::any_cast<double>(m["QueryOverFivePercentNum"]));
    }
    if (m.find("QueryOverFiveSecPercent") != m.end() && !m["QueryOverFiveSecPercent"].empty()) {
      queryOverFiveSecPercent = make_shared<string>(boost::any_cast<string>(m["QueryOverFiveSecPercent"]));
    }
    if (m.find("QueryOverTenSecPercent") != m.end() && !m["QueryOverTenSecPercent"].empty()) {
      queryOverTenSecPercent = make_shared<string>(boost::any_cast<string>(m["QueryOverTenSecPercent"]));
    }
    if (m.find("QueryOverTenSecPercentNum") != m.end() && !m["QueryOverTenSecPercentNum"].empty()) {
      queryOverTenSecPercentNum = make_shared<double>(boost::any_cast<double>(m["QueryOverTenSecPercentNum"]));
    }
    if (m.find("QueryTimeoutCount") != m.end() && !m["QueryTimeoutCount"].empty()) {
      queryTimeoutCount = make_shared<long>(boost::any_cast<long>(m["QueryTimeoutCount"]));
    }
    if (m.find("QueryTimeoutCountPercent") != m.end() && !m["QueryTimeoutCountPercent"].empty()) {
      queryTimeoutCountPercent = make_shared<double>(boost::any_cast<double>(m["QueryTimeoutCountPercent"]));
    }
    if (m.find("QuickIndexCostTimeAvg") != m.end() && !m["QuickIndexCostTimeAvg"].empty()) {
      quickIndexCostTimeAvg = make_shared<double>(boost::any_cast<double>(m["QuickIndexCostTimeAvg"]));
    }
    if (m.find("QuickIndexQueryCount") != m.end() && !m["QuickIndexQueryCount"].empty()) {
      quickIndexQueryCount = make_shared<long>(boost::any_cast<long>(m["QuickIndexQueryCount"]));
    }
    if (m.find("RepeatQueryPercent") != m.end() && !m["RepeatQueryPercent"].empty()) {
      repeatQueryPercent = make_shared<string>(boost::any_cast<string>(m["RepeatQueryPercent"]));
    }
    if (m.find("RepeatQueryPercentNum") != m.end() && !m["RepeatQueryPercentNum"].empty()) {
      repeatQueryPercentNum = make_shared<double>(boost::any_cast<double>(m["RepeatQueryPercentNum"]));
    }
    if (m.find("RepeatSqlQueryCount") != m.end() && !m["RepeatSqlQueryCount"].empty()) {
      repeatSqlQueryCount = make_shared<long>(boost::any_cast<long>(m["RepeatSqlQueryCount"]));
    }
    if (m.find("RepeatSqlQueryPercent") != m.end() && !m["RepeatSqlQueryPercent"].empty()) {
      repeatSqlQueryPercent = make_shared<string>(boost::any_cast<string>(m["RepeatSqlQueryPercent"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("ReportName") != m.end() && !m["ReportName"].empty()) {
      reportName = make_shared<string>(boost::any_cast<string>(m["ReportName"]));
    }
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      reportType = make_shared<string>(boost::any_cast<string>(m["ReportType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QueryReportPerformanceResponseBodyResult() = default;
};
class QueryReportPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryReportPerformanceResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QueryReportPerformanceResponseBody() {}

  explicit QueryReportPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryReportPerformanceResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryReportPerformanceResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryReportPerformanceResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryReportPerformanceResponseBody() = default;
};
class QueryReportPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryReportPerformanceResponseBody> body{};

  QueryReportPerformanceResponse() {}

  explicit QueryReportPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryReportPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryReportPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryReportPerformanceResponse() = default;
};
class QueryShareListRequest : public Darabonba::Model {
public:
  shared_ptr<string> reportId{};

  QueryShareListRequest() {}

  explicit QueryShareListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
  }


  virtual ~QueryShareListRequest() = default;
};
class QueryShareListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> authPoint{};
  shared_ptr<long> expireDate{};
  shared_ptr<string> reportId{};
  shared_ptr<string> shareId{};
  shared_ptr<string> shareToId{};
  shared_ptr<string> shareToName{};
  shared_ptr<long> shareToType{};
  shared_ptr<string> shareType{};

  QueryShareListResponseBodyResult() {}

  explicit QueryShareListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authPoint) {
      res["AuthPoint"] = boost::any(*authPoint);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (reportId) {
      res["ReportId"] = boost::any(*reportId);
    }
    if (shareId) {
      res["ShareId"] = boost::any(*shareId);
    }
    if (shareToId) {
      res["ShareToId"] = boost::any(*shareToId);
    }
    if (shareToName) {
      res["ShareToName"] = boost::any(*shareToName);
    }
    if (shareToType) {
      res["ShareToType"] = boost::any(*shareToType);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthPoint") != m.end() && !m["AuthPoint"].empty()) {
      authPoint = make_shared<long>(boost::any_cast<long>(m["AuthPoint"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<long>(boost::any_cast<long>(m["ExpireDate"]));
    }
    if (m.find("ReportId") != m.end() && !m["ReportId"].empty()) {
      reportId = make_shared<string>(boost::any_cast<string>(m["ReportId"]));
    }
    if (m.find("ShareId") != m.end() && !m["ShareId"].empty()) {
      shareId = make_shared<string>(boost::any_cast<string>(m["ShareId"]));
    }
    if (m.find("ShareToId") != m.end() && !m["ShareToId"].empty()) {
      shareToId = make_shared<string>(boost::any_cast<string>(m["ShareToId"]));
    }
    if (m.find("ShareToName") != m.end() && !m["ShareToName"].empty()) {
      shareToName = make_shared<string>(boost::any_cast<string>(m["ShareToName"]));
    }
    if (m.find("ShareToType") != m.end() && !m["ShareToType"].empty()) {
      shareToType = make_shared<long>(boost::any_cast<long>(m["ShareToType"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
  }


  virtual ~QueryShareListResponseBodyResult() = default;
};
class QueryShareListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryShareListResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QueryShareListResponseBody() {}

  explicit QueryShareListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryShareListResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryShareListResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryShareListResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryShareListResponseBody() = default;
};
class QueryShareListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryShareListResponseBody> body{};

  QueryShareListResponse() {}

  explicit QueryShareListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryShareListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryShareListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryShareListResponse() = default;
};
class QuerySharesToUserListRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  QuerySharesToUserListRequest() {}

  explicit QuerySharesToUserListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QuerySharesToUserListRequest() = default;
};
class QuerySharesToUserListResponseBodyResultDirectory : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> pathId{};
  shared_ptr<string> pathName{};

  QuerySharesToUserListResponseBodyResultDirectory() {}

  explicit QuerySharesToUserListResponseBodyResultDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pathId) {
      res["PathId"] = boost::any(*pathId);
    }
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PathId") != m.end() && !m["PathId"].empty()) {
      pathId = make_shared<string>(boost::any_cast<string>(m["PathId"]));
    }
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
  }


  virtual ~QuerySharesToUserListResponseBodyResultDirectory() = default;
};
class QuerySharesToUserListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<QuerySharesToUserListResponseBodyResultDirectory> directory{};
  shared_ptr<string> modifyName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> securityLevel{};
  shared_ptr<long> status{};
  shared_ptr<long> thirdPartAuthFlag{};
  shared_ptr<string> workName{};
  shared_ptr<string> workType{};
  shared_ptr<string> worksId{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  QuerySharesToUserListResponseBodyResult() {}

  explicit QuerySharesToUserListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (directory) {
      res["Directory"] = directory ? boost::any(directory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifyName) {
      res["ModifyName"] = boost::any(*modifyName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (thirdPartAuthFlag) {
      res["ThirdPartAuthFlag"] = boost::any(*thirdPartAuthFlag);
    }
    if (workName) {
      res["WorkName"] = boost::any(*workName);
    }
    if (workType) {
      res["WorkType"] = boost::any(*workType);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
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
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Directory"].type()) {
        QuerySharesToUserListResponseBodyResultDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Directory"]));
        directory = make_shared<QuerySharesToUserListResponseBodyResultDirectory>(model1);
      }
    }
    if (m.find("ModifyName") != m.end() && !m["ModifyName"].empty()) {
      modifyName = make_shared<string>(boost::any_cast<string>(m["ModifyName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<string>(boost::any_cast<string>(m["SecurityLevel"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThirdPartAuthFlag") != m.end() && !m["ThirdPartAuthFlag"].empty()) {
      thirdPartAuthFlag = make_shared<long>(boost::any_cast<long>(m["ThirdPartAuthFlag"]));
    }
    if (m.find("WorkName") != m.end() && !m["WorkName"].empty()) {
      workName = make_shared<string>(boost::any_cast<string>(m["WorkName"]));
    }
    if (m.find("WorkType") != m.end() && !m["WorkType"].empty()) {
      workType = make_shared<string>(boost::any_cast<string>(m["WorkType"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QuerySharesToUserListResponseBodyResult() = default;
};
class QuerySharesToUserListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QuerySharesToUserListResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QuerySharesToUserListResponseBody() {}

  explicit QuerySharesToUserListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QuerySharesToUserListResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySharesToUserListResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QuerySharesToUserListResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QuerySharesToUserListResponseBody() = default;
};
class QuerySharesToUserListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySharesToUserListResponseBody> body{};

  QuerySharesToUserListResponse() {}

  explicit QuerySharesToUserListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySharesToUserListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySharesToUserListResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySharesToUserListResponse() = default;
};
class QuerySmartqPermissionByCubeIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> userId{};

  QuerySmartqPermissionByCubeIdRequest() {}

  explicit QuerySmartqPermissionByCubeIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QuerySmartqPermissionByCubeIdRequest() = default;
};
class QuerySmartqPermissionByCubeIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> cubeName{};
  shared_ptr<bool> hasPerssion{};

  QuerySmartqPermissionByCubeIdResponseBodyResult() {}

  explicit QuerySmartqPermissionByCubeIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (cubeName) {
      res["CubeName"] = boost::any(*cubeName);
    }
    if (hasPerssion) {
      res["HasPerssion"] = boost::any(*hasPerssion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("CubeName") != m.end() && !m["CubeName"].empty()) {
      cubeName = make_shared<string>(boost::any_cast<string>(m["CubeName"]));
    }
    if (m.find("HasPerssion") != m.end() && !m["HasPerssion"].empty()) {
      hasPerssion = make_shared<bool>(boost::any_cast<bool>(m["HasPerssion"]));
    }
  }


  virtual ~QuerySmartqPermissionByCubeIdResponseBodyResult() = default;
};
class QuerySmartqPermissionByCubeIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QuerySmartqPermissionByCubeIdResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QuerySmartqPermissionByCubeIdResponseBody() {}

  explicit QuerySmartqPermissionByCubeIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QuerySmartqPermissionByCubeIdResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QuerySmartqPermissionByCubeIdResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QuerySmartqPermissionByCubeIdResponseBody() = default;
};
class QuerySmartqPermissionByCubeIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySmartqPermissionByCubeIdResponseBody> body{};

  QuerySmartqPermissionByCubeIdResponse() {}

  explicit QuerySmartqPermissionByCubeIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySmartqPermissionByCubeIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySmartqPermissionByCubeIdResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySmartqPermissionByCubeIdResponse() = default;
};
class QueryTicketInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> ticket{};

  QueryTicketInfoRequest() {}

  explicit QueryTicketInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ticket) {
      res["Ticket"] = boost::any(*ticket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ticket") != m.end() && !m["Ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["Ticket"]));
    }
  }


  virtual ~QueryTicketInfoRequest() = default;
};
class QueryTicketInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> accessTicket{};
  shared_ptr<string> cmptId{};
  shared_ptr<string> globalParam{};
  shared_ptr<string> invalidTime{};
  shared_ptr<long> maxTicketNum{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> registerTime{};
  shared_ptr<long> usedTicketNum{};
  shared_ptr<string> userId{};
  shared_ptr<string> watermarkParam{};
  shared_ptr<string> worksId{};

  QueryTicketInfoResponseBodyResult() {}

  explicit QueryTicketInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessTicket) {
      res["AccessTicket"] = boost::any(*accessTicket);
    }
    if (cmptId) {
      res["CmptId"] = boost::any(*cmptId);
    }
    if (globalParam) {
      res["GlobalParam"] = boost::any(*globalParam);
    }
    if (invalidTime) {
      res["InvalidTime"] = boost::any(*invalidTime);
    }
    if (maxTicketNum) {
      res["MaxTicketNum"] = boost::any(*maxTicketNum);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (registerTime) {
      res["RegisterTime"] = boost::any(*registerTime);
    }
    if (usedTicketNum) {
      res["UsedTicketNum"] = boost::any(*usedTicketNum);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (watermarkParam) {
      res["WatermarkParam"] = boost::any(*watermarkParam);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessTicket") != m.end() && !m["AccessTicket"].empty()) {
      accessTicket = make_shared<string>(boost::any_cast<string>(m["AccessTicket"]));
    }
    if (m.find("CmptId") != m.end() && !m["CmptId"].empty()) {
      cmptId = make_shared<string>(boost::any_cast<string>(m["CmptId"]));
    }
    if (m.find("GlobalParam") != m.end() && !m["GlobalParam"].empty()) {
      globalParam = make_shared<string>(boost::any_cast<string>(m["GlobalParam"]));
    }
    if (m.find("InvalidTime") != m.end() && !m["InvalidTime"].empty()) {
      invalidTime = make_shared<string>(boost::any_cast<string>(m["InvalidTime"]));
    }
    if (m.find("MaxTicketNum") != m.end() && !m["MaxTicketNum"].empty()) {
      maxTicketNum = make_shared<long>(boost::any_cast<long>(m["MaxTicketNum"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("RegisterTime") != m.end() && !m["RegisterTime"].empty()) {
      registerTime = make_shared<string>(boost::any_cast<string>(m["RegisterTime"]));
    }
    if (m.find("UsedTicketNum") != m.end() && !m["UsedTicketNum"].empty()) {
      usedTicketNum = make_shared<long>(boost::any_cast<long>(m["UsedTicketNum"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WatermarkParam") != m.end() && !m["WatermarkParam"].empty()) {
      watermarkParam = make_shared<string>(boost::any_cast<string>(m["WatermarkParam"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
  }


  virtual ~QueryTicketInfoResponseBodyResult() = default;
};
class QueryTicketInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryTicketInfoResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryTicketInfoResponseBody() {}

  explicit QueryTicketInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryTicketInfoResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryTicketInfoResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryTicketInfoResponseBody() = default;
};
class QueryTicketInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTicketInfoResponseBody> body{};

  QueryTicketInfoResponse() {}

  explicit QueryTicketInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTicketInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTicketInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTicketInfoResponse() = default;
};
class QueryUserGroupListByParentIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> parentUserGroupId{};

  QueryUserGroupListByParentIdRequest() {}

  explicit QueryUserGroupListByParentIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentUserGroupId) {
      res["ParentUserGroupId"] = boost::any(*parentUserGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentUserGroupId") != m.end() && !m["ParentUserGroupId"].empty()) {
      parentUserGroupId = make_shared<string>(boost::any_cast<string>(m["ParentUserGroupId"]));
    }
  }


  virtual ~QueryUserGroupListByParentIdRequest() = default;
};
class QueryUserGroupListByParentIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<string> identifiedPath{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> modifyUser{};
  shared_ptr<string> parentUserGroupId{};
  shared_ptr<string> userGroupDescription{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userGroupName{};

  QueryUserGroupListByParentIdResponseBodyResult() {}

  explicit QueryUserGroupListByParentIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (identifiedPath) {
      res["IdentifiedPath"] = boost::any(*identifiedPath);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (modifyUser) {
      res["ModifyUser"] = boost::any(*modifyUser);
    }
    if (parentUserGroupId) {
      res["ParentUserGroupId"] = boost::any(*parentUserGroupId);
    }
    if (userGroupDescription) {
      res["UserGroupDescription"] = boost::any(*userGroupDescription);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userGroupName) {
      res["UserGroupName"] = boost::any(*userGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("IdentifiedPath") != m.end() && !m["IdentifiedPath"].empty()) {
      identifiedPath = make_shared<string>(boost::any_cast<string>(m["IdentifiedPath"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModifyUser") != m.end() && !m["ModifyUser"].empty()) {
      modifyUser = make_shared<string>(boost::any_cast<string>(m["ModifyUser"]));
    }
    if (m.find("ParentUserGroupId") != m.end() && !m["ParentUserGroupId"].empty()) {
      parentUserGroupId = make_shared<string>(boost::any_cast<string>(m["ParentUserGroupId"]));
    }
    if (m.find("UserGroupDescription") != m.end() && !m["UserGroupDescription"].empty()) {
      userGroupDescription = make_shared<string>(boost::any_cast<string>(m["UserGroupDescription"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserGroupName") != m.end() && !m["UserGroupName"].empty()) {
      userGroupName = make_shared<string>(boost::any_cast<string>(m["UserGroupName"]));
    }
  }


  virtual ~QueryUserGroupListByParentIdResponseBodyResult() = default;
};
class QueryUserGroupListByParentIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryUserGroupListByParentIdResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QueryUserGroupListByParentIdResponseBody() {}

  explicit QueryUserGroupListByParentIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryUserGroupListByParentIdResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryUserGroupListByParentIdResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryUserGroupListByParentIdResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryUserGroupListByParentIdResponseBody() = default;
};
class QueryUserGroupListByParentIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUserGroupListByParentIdResponseBody> body{};

  QueryUserGroupListByParentIdResponse() {}

  explicit QueryUserGroupListByParentIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUserGroupListByParentIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserGroupListByParentIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserGroupListByParentIdResponse() = default;
};
class QueryUserGroupMemberRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<string> userGroupId{};

  QueryUserGroupMemberRequest() {}

  explicit QueryUserGroupMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~QueryUserGroupMemberRequest() = default;
};
class QueryUserGroupMemberResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<bool> isUserGroup{};
  shared_ptr<string> name{};
  shared_ptr<string> parentUserGroupId{};
  shared_ptr<string> parentUserGroupName{};

  QueryUserGroupMemberResponseBodyResult() {}

  explicit QueryUserGroupMemberResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isUserGroup) {
      res["IsUserGroup"] = boost::any(*isUserGroup);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentUserGroupId) {
      res["ParentUserGroupId"] = boost::any(*parentUserGroupId);
    }
    if (parentUserGroupName) {
      res["ParentUserGroupName"] = boost::any(*parentUserGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IsUserGroup") != m.end() && !m["IsUserGroup"].empty()) {
      isUserGroup = make_shared<bool>(boost::any_cast<bool>(m["IsUserGroup"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentUserGroupId") != m.end() && !m["ParentUserGroupId"].empty()) {
      parentUserGroupId = make_shared<string>(boost::any_cast<string>(m["ParentUserGroupId"]));
    }
    if (m.find("ParentUserGroupName") != m.end() && !m["ParentUserGroupName"].empty()) {
      parentUserGroupName = make_shared<string>(boost::any_cast<string>(m["ParentUserGroupName"]));
    }
  }


  virtual ~QueryUserGroupMemberResponseBodyResult() = default;
};
class QueryUserGroupMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryUserGroupMemberResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QueryUserGroupMemberResponseBody() {}

  explicit QueryUserGroupMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryUserGroupMemberResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryUserGroupMemberResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryUserGroupMemberResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryUserGroupMemberResponseBody() = default;
};
class QueryUserGroupMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUserGroupMemberResponseBody> body{};

  QueryUserGroupMemberResponse() {}

  explicit QueryUserGroupMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUserGroupMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserGroupMemberResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserGroupMemberResponse() = default;
};
class QueryUserInfoByAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> account{};
  shared_ptr<string> parentAccountName{};

  QueryUserInfoByAccountRequest() {}

  explicit QueryUserInfoByAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = boost::any(*account);
    }
    if (parentAccountName) {
      res["ParentAccountName"] = boost::any(*parentAccountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      account = make_shared<string>(boost::any_cast<string>(m["Account"]));
    }
    if (m.find("ParentAccountName") != m.end() && !m["ParentAccountName"].empty()) {
      parentAccountName = make_shared<string>(boost::any_cast<string>(m["ParentAccountName"]));
    }
  }


  virtual ~QueryUserInfoByAccountRequest() = default;
};
class QueryUserInfoByAccountResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<bool> adminUser{};
  shared_ptr<bool> authAdminUser{};
  shared_ptr<string> email{};
  shared_ptr<string> nickName{};
  shared_ptr<string> phone{};
  shared_ptr<vector<long>> roleIdList{};
  shared_ptr<string> userId{};
  shared_ptr<long> userType{};

  QueryUserInfoByAccountResponseBodyResult() {}

  explicit QueryUserInfoByAccountResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (adminUser) {
      res["AdminUser"] = boost::any(*adminUser);
    }
    if (authAdminUser) {
      res["AuthAdminUser"] = boost::any(*authAdminUser);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (roleIdList) {
      res["RoleIdList"] = boost::any(*roleIdList);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AdminUser") != m.end() && !m["AdminUser"].empty()) {
      adminUser = make_shared<bool>(boost::any_cast<bool>(m["AdminUser"]));
    }
    if (m.find("AuthAdminUser") != m.end() && !m["AuthAdminUser"].empty()) {
      authAdminUser = make_shared<bool>(boost::any_cast<bool>(m["AuthAdminUser"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("RoleIdList") != m.end() && !m["RoleIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RoleIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      roleIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<long>(boost::any_cast<long>(m["UserType"]));
    }
  }


  virtual ~QueryUserInfoByAccountResponseBodyResult() = default;
};
class QueryUserInfoByAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryUserInfoByAccountResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryUserInfoByAccountResponseBody() {}

  explicit QueryUserInfoByAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryUserInfoByAccountResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryUserInfoByAccountResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryUserInfoByAccountResponseBody() = default;
};
class QueryUserInfoByAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUserInfoByAccountResponseBody> body{};

  QueryUserInfoByAccountResponse() {}

  explicit QueryUserInfoByAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUserInfoByAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserInfoByAccountResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserInfoByAccountResponse() = default;
};
class QueryUserInfoByUserIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  QueryUserInfoByUserIdRequest() {}

  explicit QueryUserInfoByUserIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryUserInfoByUserIdRequest() = default;
};
class QueryUserInfoByUserIdResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<bool> adminUser{};
  shared_ptr<bool> authAdminUser{};
  shared_ptr<string> email{};
  shared_ptr<string> nickName{};
  shared_ptr<string> phone{};
  shared_ptr<vector<long>> roleIdList{};
  shared_ptr<string> userId{};
  shared_ptr<long> userType{};

  QueryUserInfoByUserIdResponseBodyResult() {}

  explicit QueryUserInfoByUserIdResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (adminUser) {
      res["AdminUser"] = boost::any(*adminUser);
    }
    if (authAdminUser) {
      res["AuthAdminUser"] = boost::any(*authAdminUser);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (roleIdList) {
      res["RoleIdList"] = boost::any(*roleIdList);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AdminUser") != m.end() && !m["AdminUser"].empty()) {
      adminUser = make_shared<bool>(boost::any_cast<bool>(m["AdminUser"]));
    }
    if (m.find("AuthAdminUser") != m.end() && !m["AuthAdminUser"].empty()) {
      authAdminUser = make_shared<bool>(boost::any_cast<bool>(m["AuthAdminUser"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("RoleIdList") != m.end() && !m["RoleIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RoleIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      roleIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<long>(boost::any_cast<long>(m["UserType"]));
    }
  }


  virtual ~QueryUserInfoByUserIdResponseBodyResult() = default;
};
class QueryUserInfoByUserIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryUserInfoByUserIdResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryUserInfoByUserIdResponseBody() {}

  explicit QueryUserInfoByUserIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryUserInfoByUserIdResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryUserInfoByUserIdResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryUserInfoByUserIdResponseBody() = default;
};
class QueryUserInfoByUserIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUserInfoByUserIdResponseBody> body{};

  QueryUserInfoByUserIdResponse() {}

  explicit QueryUserInfoByUserIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUserInfoByUserIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserInfoByUserIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserInfoByUserIdResponse() = default;
};
class QueryUserListRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  QueryUserListRequest() {}

  explicit QueryUserListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryUserListRequest() = default;
};
class QueryUserListResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<bool> adminUser{};
  shared_ptr<bool> authAdminUser{};
  shared_ptr<bool> isDeleted{};
  shared_ptr<long> joinedDate{};
  shared_ptr<long> lastLoginTime{};
  shared_ptr<string> nickName{};
  shared_ptr<vector<long>> roleIdList{};
  shared_ptr<string> userId{};
  shared_ptr<long> userType{};

  QueryUserListResponseBodyResultData() {}

  explicit QueryUserListResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (adminUser) {
      res["AdminUser"] = boost::any(*adminUser);
    }
    if (authAdminUser) {
      res["AuthAdminUser"] = boost::any(*authAdminUser);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (joinedDate) {
      res["JoinedDate"] = boost::any(*joinedDate);
    }
    if (lastLoginTime) {
      res["LastLoginTime"] = boost::any(*lastLoginTime);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (roleIdList) {
      res["RoleIdList"] = boost::any(*roleIdList);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AdminUser") != m.end() && !m["AdminUser"].empty()) {
      adminUser = make_shared<bool>(boost::any_cast<bool>(m["AdminUser"]));
    }
    if (m.find("AuthAdminUser") != m.end() && !m["AuthAdminUser"].empty()) {
      authAdminUser = make_shared<bool>(boost::any_cast<bool>(m["AuthAdminUser"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<bool>(boost::any_cast<bool>(m["IsDeleted"]));
    }
    if (m.find("JoinedDate") != m.end() && !m["JoinedDate"].empty()) {
      joinedDate = make_shared<long>(boost::any_cast<long>(m["JoinedDate"]));
    }
    if (m.find("LastLoginTime") != m.end() && !m["LastLoginTime"].empty()) {
      lastLoginTime = make_shared<long>(boost::any_cast<long>(m["LastLoginTime"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("RoleIdList") != m.end() && !m["RoleIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RoleIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      roleIdList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<long>(boost::any_cast<long>(m["UserType"]));
    }
  }


  virtual ~QueryUserListResponseBodyResultData() = default;
};
class QueryUserListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryUserListResponseBodyResultData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPages{};

  QueryUserListResponseBodyResult() {}

  explicit QueryUserListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryUserListResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryUserListResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryUserListResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~QueryUserListResponseBodyResult() = default;
};
class QueryUserListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryUserListResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryUserListResponseBody() {}

  explicit QueryUserListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryUserListResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryUserListResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryUserListResponseBody() = default;
};
class QueryUserListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUserListResponseBody> body{};

  QueryUserListResponse() {}

  explicit QueryUserListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUserListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserListResponse() = default;
};
class QueryUserRoleInfoInWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  QueryUserRoleInfoInWorkspaceRequest() {}

  explicit QueryUserRoleInfoInWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~QueryUserRoleInfoInWorkspaceRequest() = default;
};
class QueryUserRoleInfoInWorkspaceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> roleCode{};
  shared_ptr<long> roleId{};
  shared_ptr<string> roleName{};

  QueryUserRoleInfoInWorkspaceResponseBodyResult() {}

  explicit QueryUserRoleInfoInWorkspaceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleCode") != m.end() && !m["RoleCode"].empty()) {
      roleCode = make_shared<string>(boost::any_cast<string>(m["RoleCode"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~QueryUserRoleInfoInWorkspaceResponseBodyResult() = default;
};
class QueryUserRoleInfoInWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryUserRoleInfoInWorkspaceResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryUserRoleInfoInWorkspaceResponseBody() {}

  explicit QueryUserRoleInfoInWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryUserRoleInfoInWorkspaceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryUserRoleInfoInWorkspaceResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryUserRoleInfoInWorkspaceResponseBody() = default;
};
class QueryUserRoleInfoInWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUserRoleInfoInWorkspaceResponseBody> body{};

  QueryUserRoleInfoInWorkspaceResponse() {}

  explicit QueryUserRoleInfoInWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUserRoleInfoInWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserRoleInfoInWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserRoleInfoInWorkspaceResponse() = default;
};
class QueryUserTagMetaListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> tagDescription{};
  shared_ptr<string> tagId{};
  shared_ptr<string> tagName{};

  QueryUserTagMetaListResponseBodyResult() {}

  explicit QueryUserTagMetaListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagDescription) {
      res["TagDescription"] = boost::any(*tagDescription);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagDescription") != m.end() && !m["TagDescription"].empty()) {
      tagDescription = make_shared<string>(boost::any_cast<string>(m["TagDescription"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~QueryUserTagMetaListResponseBodyResult() = default;
};
class QueryUserTagMetaListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryUserTagMetaListResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QueryUserTagMetaListResponseBody() {}

  explicit QueryUserTagMetaListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryUserTagMetaListResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryUserTagMetaListResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryUserTagMetaListResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryUserTagMetaListResponseBody() = default;
};
class QueryUserTagMetaListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUserTagMetaListResponseBody> body{};

  QueryUserTagMetaListResponse() {}

  explicit QueryUserTagMetaListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUserTagMetaListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserTagMetaListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserTagMetaListResponse() = default;
};
class QueryUserTagValueListRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  QueryUserTagValueListRequest() {}

  explicit QueryUserTagValueListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryUserTagValueListRequest() = default;
};
class QueryUserTagValueListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> tagId{};
  shared_ptr<string> tagName{};
  shared_ptr<string> tagValue{};

  QueryUserTagValueListResponseBodyResult() {}

  explicit QueryUserTagValueListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~QueryUserTagValueListResponseBodyResult() = default;
};
class QueryUserTagValueListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryUserTagValueListResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QueryUserTagValueListResponseBody() {}

  explicit QueryUserTagValueListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryUserTagValueListResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryUserTagValueListResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryUserTagValueListResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryUserTagValueListResponseBody() = default;
};
class QueryUserTagValueListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUserTagValueListResponseBody> body{};

  QueryUserTagValueListResponse() {}

  explicit QueryUserTagValueListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUserTagValueListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserTagValueListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserTagValueListResponse() = default;
};
class QueryWorksRequest : public Darabonba::Model {
public:
  shared_ptr<string> worksId{};

  QueryWorksRequest() {}

  explicit QueryWorksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
  }


  virtual ~QueryWorksRequest() = default;
};
class QueryWorksResponseBodyResultDirectory : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> pathId{};
  shared_ptr<string> pathName{};

  QueryWorksResponseBodyResultDirectory() {}

  explicit QueryWorksResponseBodyResultDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pathId) {
      res["PathId"] = boost::any(*pathId);
    }
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PathId") != m.end() && !m["PathId"].empty()) {
      pathId = make_shared<string>(boost::any_cast<string>(m["PathId"]));
    }
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
  }


  virtual ~QueryWorksResponseBodyResultDirectory() = default;
};
class QueryWorksResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> auth3rdFlag{};
  shared_ptr<string> description{};
  shared_ptr<QueryWorksResponseBodyResultDirectory> directory{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<string> modifyName{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerName{};
  shared_ptr<bool> publicFlag{};
  shared_ptr<long> publicInvalidTime{};
  shared_ptr<string> securityLevel{};
  shared_ptr<long> status{};
  shared_ptr<string> workName{};
  shared_ptr<string> workType{};
  shared_ptr<string> worksId{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  QueryWorksResponseBodyResult() {}

  explicit QueryWorksResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auth3rdFlag) {
      res["Auth3rdFlag"] = boost::any(*auth3rdFlag);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directory) {
      res["Directory"] = directory ? boost::any(directory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["GmtModify"] = boost::any(*gmtModify);
    }
    if (modifyName) {
      res["ModifyName"] = boost::any(*modifyName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (publicFlag) {
      res["PublicFlag"] = boost::any(*publicFlag);
    }
    if (publicInvalidTime) {
      res["PublicInvalidTime"] = boost::any(*publicInvalidTime);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workName) {
      res["WorkName"] = boost::any(*workName);
    }
    if (workType) {
      res["WorkType"] = boost::any(*workType);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Auth3rdFlag") != m.end() && !m["Auth3rdFlag"].empty()) {
      auth3rdFlag = make_shared<long>(boost::any_cast<long>(m["Auth3rdFlag"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Directory"].type()) {
        QueryWorksResponseBodyResultDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Directory"]));
        directory = make_shared<QueryWorksResponseBodyResultDirectory>(model1);
      }
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModify") != m.end() && !m["GmtModify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["GmtModify"]));
    }
    if (m.find("ModifyName") != m.end() && !m["ModifyName"].empty()) {
      modifyName = make_shared<string>(boost::any_cast<string>(m["ModifyName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("PublicFlag") != m.end() && !m["PublicFlag"].empty()) {
      publicFlag = make_shared<bool>(boost::any_cast<bool>(m["PublicFlag"]));
    }
    if (m.find("PublicInvalidTime") != m.end() && !m["PublicInvalidTime"].empty()) {
      publicInvalidTime = make_shared<long>(boost::any_cast<long>(m["PublicInvalidTime"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<string>(boost::any_cast<string>(m["SecurityLevel"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WorkName") != m.end() && !m["WorkName"].empty()) {
      workName = make_shared<string>(boost::any_cast<string>(m["WorkName"]));
    }
    if (m.find("WorkType") != m.end() && !m["WorkType"].empty()) {
      workType = make_shared<string>(boost::any_cast<string>(m["WorkType"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QueryWorksResponseBodyResult() = default;
};
class QueryWorksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryWorksResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryWorksResponseBody() {}

  explicit QueryWorksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryWorksResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryWorksResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryWorksResponseBody() = default;
};
class QueryWorksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryWorksResponseBody> body{};

  QueryWorksResponse() {}

  explicit QueryWorksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryWorksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryWorksResponseBody>(model1);
      }
    }
  }


  virtual ~QueryWorksResponse() = default;
};
class QueryWorksBloodRelationshipRequest : public Darabonba::Model {
public:
  shared_ptr<string> worksId{};

  QueryWorksBloodRelationshipRequest() {}

  explicit QueryWorksBloodRelationshipRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
  }


  virtual ~QueryWorksBloodRelationshipRequest() = default;
};
class QueryWorksBloodRelationshipResponseBodyResultQueryParams : public Darabonba::Model {
public:
  shared_ptr<string> areaId{};
  shared_ptr<string> areaName{};
  shared_ptr<string> caption{};
  shared_ptr<string> dataType{};
  shared_ptr<string> expression{};
  shared_ptr<bool> isMeasure{};
  shared_ptr<string> pathId{};
  shared_ptr<string> uid{};

  QueryWorksBloodRelationshipResponseBodyResultQueryParams() {}

  explicit QueryWorksBloodRelationshipResponseBodyResultQueryParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (areaId) {
      res["AreaId"] = boost::any(*areaId);
    }
    if (areaName) {
      res["AreaName"] = boost::any(*areaName);
    }
    if (caption) {
      res["Caption"] = boost::any(*caption);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (isMeasure) {
      res["IsMeasure"] = boost::any(*isMeasure);
    }
    if (pathId) {
      res["PathId"] = boost::any(*pathId);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AreaId") != m.end() && !m["AreaId"].empty()) {
      areaId = make_shared<string>(boost::any_cast<string>(m["AreaId"]));
    }
    if (m.find("AreaName") != m.end() && !m["AreaName"].empty()) {
      areaName = make_shared<string>(boost::any_cast<string>(m["AreaName"]));
    }
    if (m.find("Caption") != m.end() && !m["Caption"].empty()) {
      caption = make_shared<string>(boost::any_cast<string>(m["Caption"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("IsMeasure") != m.end() && !m["IsMeasure"].empty()) {
      isMeasure = make_shared<bool>(boost::any_cast<bool>(m["IsMeasure"]));
    }
    if (m.find("PathId") != m.end() && !m["PathId"].empty()) {
      pathId = make_shared<string>(boost::any_cast<string>(m["PathId"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~QueryWorksBloodRelationshipResponseBodyResultQueryParams() = default;
};
class QueryWorksBloodRelationshipResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> componentId{};
  shared_ptr<string> componentName{};
  shared_ptr<long> componentType{};
  shared_ptr<string> componentTypeCnName{};
  shared_ptr<string> componentTypeName{};
  shared_ptr<string> datasetId{};
  shared_ptr<vector<QueryWorksBloodRelationshipResponseBodyResultQueryParams>> queryParams{};

  QueryWorksBloodRelationshipResponseBodyResult() {}

  explicit QueryWorksBloodRelationshipResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentId) {
      res["ComponentId"] = boost::any(*componentId);
    }
    if (componentName) {
      res["ComponentName"] = boost::any(*componentName);
    }
    if (componentType) {
      res["ComponentType"] = boost::any(*componentType);
    }
    if (componentTypeCnName) {
      res["ComponentTypeCnName"] = boost::any(*componentTypeCnName);
    }
    if (componentTypeName) {
      res["ComponentTypeName"] = boost::any(*componentTypeName);
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (queryParams) {
      vector<boost::any> temp1;
      for(auto item1:*queryParams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QueryParams"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComponentId") != m.end() && !m["ComponentId"].empty()) {
      componentId = make_shared<string>(boost::any_cast<string>(m["ComponentId"]));
    }
    if (m.find("ComponentName") != m.end() && !m["ComponentName"].empty()) {
      componentName = make_shared<string>(boost::any_cast<string>(m["ComponentName"]));
    }
    if (m.find("ComponentType") != m.end() && !m["ComponentType"].empty()) {
      componentType = make_shared<long>(boost::any_cast<long>(m["ComponentType"]));
    }
    if (m.find("ComponentTypeCnName") != m.end() && !m["ComponentTypeCnName"].empty()) {
      componentTypeCnName = make_shared<string>(boost::any_cast<string>(m["ComponentTypeCnName"]));
    }
    if (m.find("ComponentTypeName") != m.end() && !m["ComponentTypeName"].empty()) {
      componentTypeName = make_shared<string>(boost::any_cast<string>(m["ComponentTypeName"]));
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("QueryParams") != m.end() && !m["QueryParams"].empty()) {
      if (typeid(vector<boost::any>) == m["QueryParams"].type()) {
        vector<QueryWorksBloodRelationshipResponseBodyResultQueryParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QueryParams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryWorksBloodRelationshipResponseBodyResultQueryParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryParams = make_shared<vector<QueryWorksBloodRelationshipResponseBodyResultQueryParams>>(expect1);
      }
    }
  }


  virtual ~QueryWorksBloodRelationshipResponseBodyResult() = default;
};
class QueryWorksBloodRelationshipResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryWorksBloodRelationshipResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  QueryWorksBloodRelationshipResponseBody() {}

  explicit QueryWorksBloodRelationshipResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<QueryWorksBloodRelationshipResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryWorksBloodRelationshipResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<QueryWorksBloodRelationshipResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryWorksBloodRelationshipResponseBody() = default;
};
class QueryWorksBloodRelationshipResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryWorksBloodRelationshipResponseBody> body{};

  QueryWorksBloodRelationshipResponse() {}

  explicit QueryWorksBloodRelationshipResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryWorksBloodRelationshipResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryWorksBloodRelationshipResponseBody>(model1);
      }
    }
  }


  virtual ~QueryWorksBloodRelationshipResponse() = default;
};
class QueryWorksByOrganizationRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};
  shared_ptr<long> thirdPartAuthFlag{};
  shared_ptr<string> worksType{};

  QueryWorksByOrganizationRequest() {}

  explicit QueryWorksByOrganizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (thirdPartAuthFlag) {
      res["ThirdPartAuthFlag"] = boost::any(*thirdPartAuthFlag);
    }
    if (worksType) {
      res["WorksType"] = boost::any(*worksType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThirdPartAuthFlag") != m.end() && !m["ThirdPartAuthFlag"].empty()) {
      thirdPartAuthFlag = make_shared<long>(boost::any_cast<long>(m["ThirdPartAuthFlag"]));
    }
    if (m.find("WorksType") != m.end() && !m["WorksType"].empty()) {
      worksType = make_shared<string>(boost::any_cast<string>(m["WorksType"]));
    }
  }


  virtual ~QueryWorksByOrganizationRequest() = default;
};
class QueryWorksByOrganizationResponseBodyResultDataDirectory : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> pathId{};
  shared_ptr<string> pathName{};

  QueryWorksByOrganizationResponseBodyResultDataDirectory() {}

  explicit QueryWorksByOrganizationResponseBodyResultDataDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pathId) {
      res["PathId"] = boost::any(*pathId);
    }
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PathId") != m.end() && !m["PathId"].empty()) {
      pathId = make_shared<string>(boost::any_cast<string>(m["PathId"]));
    }
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
  }


  virtual ~QueryWorksByOrganizationResponseBodyResultDataDirectory() = default;
};
class QueryWorksByOrganizationResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<long> auth3rdFlag{};
  shared_ptr<string> description{};
  shared_ptr<QueryWorksByOrganizationResponseBodyResultDataDirectory> directory{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<string> modifyName{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerName{};
  shared_ptr<bool> publicFlag{};
  shared_ptr<long> publicInvalidTime{};
  shared_ptr<string> securityLevel{};
  shared_ptr<long> status{};
  shared_ptr<string> workName{};
  shared_ptr<string> workType{};
  shared_ptr<string> worksId{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  QueryWorksByOrganizationResponseBodyResultData() {}

  explicit QueryWorksByOrganizationResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auth3rdFlag) {
      res["Auth3rdFlag"] = boost::any(*auth3rdFlag);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directory) {
      res["Directory"] = directory ? boost::any(directory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["GmtModify"] = boost::any(*gmtModify);
    }
    if (modifyName) {
      res["ModifyName"] = boost::any(*modifyName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (publicFlag) {
      res["PublicFlag"] = boost::any(*publicFlag);
    }
    if (publicInvalidTime) {
      res["PublicInvalidTime"] = boost::any(*publicInvalidTime);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workName) {
      res["WorkName"] = boost::any(*workName);
    }
    if (workType) {
      res["WorkType"] = boost::any(*workType);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Auth3rdFlag") != m.end() && !m["Auth3rdFlag"].empty()) {
      auth3rdFlag = make_shared<long>(boost::any_cast<long>(m["Auth3rdFlag"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Directory"].type()) {
        QueryWorksByOrganizationResponseBodyResultDataDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Directory"]));
        directory = make_shared<QueryWorksByOrganizationResponseBodyResultDataDirectory>(model1);
      }
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModify") != m.end() && !m["GmtModify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["GmtModify"]));
    }
    if (m.find("ModifyName") != m.end() && !m["ModifyName"].empty()) {
      modifyName = make_shared<string>(boost::any_cast<string>(m["ModifyName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("PublicFlag") != m.end() && !m["PublicFlag"].empty()) {
      publicFlag = make_shared<bool>(boost::any_cast<bool>(m["PublicFlag"]));
    }
    if (m.find("PublicInvalidTime") != m.end() && !m["PublicInvalidTime"].empty()) {
      publicInvalidTime = make_shared<long>(boost::any_cast<long>(m["PublicInvalidTime"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<string>(boost::any_cast<string>(m["SecurityLevel"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WorkName") != m.end() && !m["WorkName"].empty()) {
      workName = make_shared<string>(boost::any_cast<string>(m["WorkName"]));
    }
    if (m.find("WorkType") != m.end() && !m["WorkType"].empty()) {
      workType = make_shared<string>(boost::any_cast<string>(m["WorkType"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QueryWorksByOrganizationResponseBodyResultData() = default;
};
class QueryWorksByOrganizationResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryWorksByOrganizationResponseBodyResultData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPages{};

  QueryWorksByOrganizationResponseBodyResult() {}

  explicit QueryWorksByOrganizationResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryWorksByOrganizationResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryWorksByOrganizationResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryWorksByOrganizationResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~QueryWorksByOrganizationResponseBodyResult() = default;
};
class QueryWorksByOrganizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryWorksByOrganizationResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryWorksByOrganizationResponseBody() {}

  explicit QueryWorksByOrganizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryWorksByOrganizationResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryWorksByOrganizationResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryWorksByOrganizationResponseBody() = default;
};
class QueryWorksByOrganizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryWorksByOrganizationResponseBody> body{};

  QueryWorksByOrganizationResponse() {}

  explicit QueryWorksByOrganizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryWorksByOrganizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryWorksByOrganizationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryWorksByOrganizationResponse() = default;
};
class QueryWorksByWorkspaceRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> status{};
  shared_ptr<long> thirdPartAuthFlag{};
  shared_ptr<string> worksType{};
  shared_ptr<string> workspaceId{};

  QueryWorksByWorkspaceRequest() {}

  explicit QueryWorksByWorkspaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (thirdPartAuthFlag) {
      res["ThirdPartAuthFlag"] = boost::any(*thirdPartAuthFlag);
    }
    if (worksType) {
      res["WorksType"] = boost::any(*worksType);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ThirdPartAuthFlag") != m.end() && !m["ThirdPartAuthFlag"].empty()) {
      thirdPartAuthFlag = make_shared<long>(boost::any_cast<long>(m["ThirdPartAuthFlag"]));
    }
    if (m.find("WorksType") != m.end() && !m["WorksType"].empty()) {
      worksType = make_shared<string>(boost::any_cast<string>(m["WorksType"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~QueryWorksByWorkspaceRequest() = default;
};
class QueryWorksByWorkspaceResponseBodyResultDataDirectory : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> pathId{};
  shared_ptr<string> pathName{};

  QueryWorksByWorkspaceResponseBodyResultDataDirectory() {}

  explicit QueryWorksByWorkspaceResponseBodyResultDataDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pathId) {
      res["PathId"] = boost::any(*pathId);
    }
    if (pathName) {
      res["PathName"] = boost::any(*pathName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PathId") != m.end() && !m["PathId"].empty()) {
      pathId = make_shared<string>(boost::any_cast<string>(m["PathId"]));
    }
    if (m.find("PathName") != m.end() && !m["PathName"].empty()) {
      pathName = make_shared<string>(boost::any_cast<string>(m["PathName"]));
    }
  }


  virtual ~QueryWorksByWorkspaceResponseBodyResultDataDirectory() = default;
};
class QueryWorksByWorkspaceResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<long> auth3rdFlag{};
  shared_ptr<string> description{};
  shared_ptr<QueryWorksByWorkspaceResponseBodyResultDataDirectory> directory{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModify{};
  shared_ptr<string> modifyName{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerName{};
  shared_ptr<bool> publicFlag{};
  shared_ptr<long> publicInvalidTime{};
  shared_ptr<string> securityLevel{};
  shared_ptr<long> status{};
  shared_ptr<string> workName{};
  shared_ptr<string> workType{};
  shared_ptr<string> worksId{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> workspaceName{};

  QueryWorksByWorkspaceResponseBodyResultData() {}

  explicit QueryWorksByWorkspaceResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auth3rdFlag) {
      res["Auth3rdFlag"] = boost::any(*auth3rdFlag);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directory) {
      res["Directory"] = directory ? boost::any(directory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModify) {
      res["GmtModify"] = boost::any(*gmtModify);
    }
    if (modifyName) {
      res["ModifyName"] = boost::any(*modifyName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (publicFlag) {
      res["PublicFlag"] = boost::any(*publicFlag);
    }
    if (publicInvalidTime) {
      res["PublicInvalidTime"] = boost::any(*publicInvalidTime);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workName) {
      res["WorkName"] = boost::any(*workName);
    }
    if (workType) {
      res["WorkType"] = boost::any(*workType);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (workspaceName) {
      res["WorkspaceName"] = boost::any(*workspaceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Auth3rdFlag") != m.end() && !m["Auth3rdFlag"].empty()) {
      auth3rdFlag = make_shared<long>(boost::any_cast<long>(m["Auth3rdFlag"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      if (typeid(map<string, boost::any>) == m["Directory"].type()) {
        QueryWorksByWorkspaceResponseBodyResultDataDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Directory"]));
        directory = make_shared<QueryWorksByWorkspaceResponseBodyResultDataDirectory>(model1);
      }
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModify") != m.end() && !m["GmtModify"].empty()) {
      gmtModify = make_shared<string>(boost::any_cast<string>(m["GmtModify"]));
    }
    if (m.find("ModifyName") != m.end() && !m["ModifyName"].empty()) {
      modifyName = make_shared<string>(boost::any_cast<string>(m["ModifyName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("PublicFlag") != m.end() && !m["PublicFlag"].empty()) {
      publicFlag = make_shared<bool>(boost::any_cast<bool>(m["PublicFlag"]));
    }
    if (m.find("PublicInvalidTime") != m.end() && !m["PublicInvalidTime"].empty()) {
      publicInvalidTime = make_shared<long>(boost::any_cast<long>(m["PublicInvalidTime"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<string>(boost::any_cast<string>(m["SecurityLevel"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("WorkName") != m.end() && !m["WorkName"].empty()) {
      workName = make_shared<string>(boost::any_cast<string>(m["WorkName"]));
    }
    if (m.find("WorkType") != m.end() && !m["WorkType"].empty()) {
      workType = make_shared<string>(boost::any_cast<string>(m["WorkType"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("WorkspaceName") != m.end() && !m["WorkspaceName"].empty()) {
      workspaceName = make_shared<string>(boost::any_cast<string>(m["WorkspaceName"]));
    }
  }


  virtual ~QueryWorksByWorkspaceResponseBodyResultData() = default;
};
class QueryWorksByWorkspaceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryWorksByWorkspaceResponseBodyResultData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPages{};

  QueryWorksByWorkspaceResponseBodyResult() {}

  explicit QueryWorksByWorkspaceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryWorksByWorkspaceResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryWorksByWorkspaceResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryWorksByWorkspaceResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~QueryWorksByWorkspaceResponseBodyResult() = default;
};
class QueryWorksByWorkspaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryWorksByWorkspaceResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryWorksByWorkspaceResponseBody() {}

  explicit QueryWorksByWorkspaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryWorksByWorkspaceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryWorksByWorkspaceResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryWorksByWorkspaceResponseBody() = default;
};
class QueryWorksByWorkspaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryWorksByWorkspaceResponseBody> body{};

  QueryWorksByWorkspaceResponse() {}

  explicit QueryWorksByWorkspaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryWorksByWorkspaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryWorksByWorkspaceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryWorksByWorkspaceResponse() = default;
};
class QueryWorkspaceRoleConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> roleId{};

  QueryWorkspaceRoleConfigRequest() {}

  explicit QueryWorkspaceRoleConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
  }


  virtual ~QueryWorkspaceRoleConfigRequest() = default;
};
class QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actionAuthKeys{};
  shared_ptr<string> authKey{};

  QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList() {}

  explicit QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionAuthKeys) {
      res["ActionAuthKeys"] = boost::any(*actionAuthKeys);
    }
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionAuthKeys") != m.end() && !m["ActionAuthKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ActionAuthKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ActionAuthKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actionAuthKeys = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
  }


  virtual ~QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList() = default;
};
class QueryWorkspaceRoleConfigResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList>> authConfigList{};
  shared_ptr<bool> isSystemRole{};
  shared_ptr<long> roleId{};
  shared_ptr<string> roleName{};

  QueryWorkspaceRoleConfigResponseBodyResult() {}

  explicit QueryWorkspaceRoleConfigResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authConfigList) {
      vector<boost::any> temp1;
      for(auto item1:*authConfigList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuthConfigList"] = boost::any(temp1);
    }
    if (isSystemRole) {
      res["IsSystemRole"] = boost::any(*isSystemRole);
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
    if (m.find("AuthConfigList") != m.end() && !m["AuthConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["AuthConfigList"].type()) {
        vector<QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuthConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        authConfigList = make_shared<vector<QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList>>(expect1);
      }
    }
    if (m.find("IsSystemRole") != m.end() && !m["IsSystemRole"].empty()) {
      isSystemRole = make_shared<bool>(boost::any_cast<bool>(m["IsSystemRole"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~QueryWorkspaceRoleConfigResponseBodyResult() = default;
};
class QueryWorkspaceRoleConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryWorkspaceRoleConfigResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryWorkspaceRoleConfigResponseBody() {}

  explicit QueryWorkspaceRoleConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryWorkspaceRoleConfigResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryWorkspaceRoleConfigResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryWorkspaceRoleConfigResponseBody() = default;
};
class QueryWorkspaceRoleConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryWorkspaceRoleConfigResponseBody> body{};

  QueryWorkspaceRoleConfigResponse() {}

  explicit QueryWorkspaceRoleConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryWorkspaceRoleConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryWorkspaceRoleConfigResponseBody>(model1);
      }
    }
  }


  virtual ~QueryWorkspaceRoleConfigResponse() = default;
};
class QueryWorkspaceUserListRequest : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> workspaceId{};

  QueryWorkspaceUserListRequest() {}

  explicit QueryWorkspaceUserListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~QueryWorkspaceUserListRequest() = default;
};
class QueryWorkspaceUserListResponseBodyResultDataRole : public Darabonba::Model {
public:
  shared_ptr<string> roleCode{};
  shared_ptr<long> roleId{};
  shared_ptr<string> roleName{};

  QueryWorkspaceUserListResponseBodyResultDataRole() {}

  explicit QueryWorkspaceUserListResponseBodyResultDataRole(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleCode") != m.end() && !m["RoleCode"].empty()) {
      roleCode = make_shared<string>(boost::any_cast<string>(m["RoleCode"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~QueryWorkspaceUserListResponseBodyResultDataRole() = default;
};
class QueryWorkspaceUserListResponseBodyResultData : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> nickName{};
  shared_ptr<QueryWorkspaceUserListResponseBodyResultDataRole> role{};
  shared_ptr<string> userId{};

  QueryWorkspaceUserListResponseBodyResultData() {}

  explicit QueryWorkspaceUserListResponseBodyResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (role) {
      res["Role"] = role ? boost::any(role->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      if (typeid(map<string, boost::any>) == m["Role"].type()) {
        QueryWorkspaceUserListResponseBodyResultDataRole model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Role"]));
        role = make_shared<QueryWorkspaceUserListResponseBodyResultDataRole>(model1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryWorkspaceUserListResponseBodyResultData() = default;
};
class QueryWorkspaceUserListResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<QueryWorkspaceUserListResponseBodyResultData>> data{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalNum{};
  shared_ptr<long> totalPages{};

  QueryWorkspaceUserListResponseBodyResult() {}

  explicit QueryWorkspaceUserListResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (totalPages) {
      res["TotalPages"] = boost::any(*totalPages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryWorkspaceUserListResponseBodyResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryWorkspaceUserListResponseBodyResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryWorkspaceUserListResponseBodyResultData>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("TotalPages") != m.end() && !m["TotalPages"].empty()) {
      totalPages = make_shared<long>(boost::any_cast<long>(m["TotalPages"]));
    }
  }


  virtual ~QueryWorkspaceUserListResponseBodyResult() = default;
};
class QueryWorkspaceUserListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryWorkspaceUserListResponseBodyResult> result{};
  shared_ptr<bool> success{};

  QueryWorkspaceUserListResponseBody() {}

  explicit QueryWorkspaceUserListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        QueryWorkspaceUserListResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<QueryWorkspaceUserListResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryWorkspaceUserListResponseBody() = default;
};
class QueryWorkspaceUserListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryWorkspaceUserListResponseBody> body{};

  QueryWorkspaceUserListResponse() {}

  explicit QueryWorkspaceUserListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryWorkspaceUserListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryWorkspaceUserListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryWorkspaceUserListResponse() = default;
};
class ResultCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> handleReason{};
  shared_ptr<long> status{};

  ResultCallbackRequest() {}

  explicit ResultCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (handleReason) {
      res["HandleReason"] = boost::any(*handleReason);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("HandleReason") != m.end() && !m["HandleReason"].empty()) {
      handleReason = make_shared<string>(boost::any_cast<string>(m["HandleReason"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ResultCallbackRequest() = default;
};
class ResultCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  ResultCallbackResponseBody() {}

  explicit ResultCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ResultCallbackResponseBody() = default;
};
class ResultCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResultCallbackResponseBody> body{};

  ResultCallbackResponse() {}

  explicit ResultCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResultCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResultCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~ResultCallbackResponse() = default;
};
class SaveFavoritesRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> worksId{};

  SaveFavoritesRequest() {}

  explicit SaveFavoritesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
  }


  virtual ~SaveFavoritesRequest() = default;
};
class SaveFavoritesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  SaveFavoritesResponseBody() {}

  explicit SaveFavoritesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SaveFavoritesResponseBody() = default;
};
class SaveFavoritesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveFavoritesResponseBody> body{};

  SaveFavoritesResponse() {}

  explicit SaveFavoritesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveFavoritesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveFavoritesResponseBody>(model1);
      }
    }
  }


  virtual ~SaveFavoritesResponse() = default;
};
class SetDataLevelPermissionExtraConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> missHitPolicy{};
  shared_ptr<string> ruleType{};

  SetDataLevelPermissionExtraConfigRequest() {}

  explicit SetDataLevelPermissionExtraConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (missHitPolicy) {
      res["MissHitPolicy"] = boost::any(*missHitPolicy);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("MissHitPolicy") != m.end() && !m["MissHitPolicy"].empty()) {
      missHitPolicy = make_shared<string>(boost::any_cast<string>(m["MissHitPolicy"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~SetDataLevelPermissionExtraConfigRequest() = default;
};
class SetDataLevelPermissionExtraConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  SetDataLevelPermissionExtraConfigResponseBody() {}

  explicit SetDataLevelPermissionExtraConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetDataLevelPermissionExtraConfigResponseBody() = default;
};
class SetDataLevelPermissionExtraConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDataLevelPermissionExtraConfigResponseBody> body{};

  SetDataLevelPermissionExtraConfigResponse() {}

  explicit SetDataLevelPermissionExtraConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDataLevelPermissionExtraConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDataLevelPermissionExtraConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SetDataLevelPermissionExtraConfigResponse() = default;
};
class SetDataLevelPermissionRuleConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> ruleModel{};

  SetDataLevelPermissionRuleConfigRequest() {}

  explicit SetDataLevelPermissionRuleConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleModel) {
      res["RuleModel"] = boost::any(*ruleModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleModel") != m.end() && !m["RuleModel"].empty()) {
      ruleModel = make_shared<string>(boost::any_cast<string>(m["RuleModel"]));
    }
  }


  virtual ~SetDataLevelPermissionRuleConfigRequest() = default;
};
class SetDataLevelPermissionRuleConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  SetDataLevelPermissionRuleConfigResponseBody() {}

  explicit SetDataLevelPermissionRuleConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetDataLevelPermissionRuleConfigResponseBody() = default;
};
class SetDataLevelPermissionRuleConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDataLevelPermissionRuleConfigResponseBody> body{};

  SetDataLevelPermissionRuleConfigResponse() {}

  explicit SetDataLevelPermissionRuleConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDataLevelPermissionRuleConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDataLevelPermissionRuleConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SetDataLevelPermissionRuleConfigResponse() = default;
};
class SetDataLevelPermissionWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> whiteListModel{};

  SetDataLevelPermissionWhiteListRequest() {}

  explicit SetDataLevelPermissionWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (whiteListModel) {
      res["WhiteListModel"] = boost::any(*whiteListModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WhiteListModel") != m.end() && !m["WhiteListModel"].empty()) {
      whiteListModel = make_shared<string>(boost::any_cast<string>(m["WhiteListModel"]));
    }
  }


  virtual ~SetDataLevelPermissionWhiteListRequest() = default;
};
class SetDataLevelPermissionWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  SetDataLevelPermissionWhiteListResponseBody() {}

  explicit SetDataLevelPermissionWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetDataLevelPermissionWhiteListResponseBody() = default;
};
class SetDataLevelPermissionWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDataLevelPermissionWhiteListResponseBody> body{};

  SetDataLevelPermissionWhiteListResponse() {}

  explicit SetDataLevelPermissionWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetDataLevelPermissionWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDataLevelPermissionWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~SetDataLevelPermissionWhiteListResponse() = default;
};
class SmartqAuthTransferRequest : public Darabonba::Model {
public:
  shared_ptr<string> originUserId{};
  shared_ptr<string> targetUserIds{};

  SmartqAuthTransferRequest() {}

  explicit SmartqAuthTransferRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originUserId) {
      res["OriginUserId"] = boost::any(*originUserId);
    }
    if (targetUserIds) {
      res["TargetUserIds"] = boost::any(*targetUserIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginUserId") != m.end() && !m["OriginUserId"].empty()) {
      originUserId = make_shared<string>(boost::any_cast<string>(m["OriginUserId"]));
    }
    if (m.find("TargetUserIds") != m.end() && !m["TargetUserIds"].empty()) {
      targetUserIds = make_shared<string>(boost::any_cast<string>(m["TargetUserIds"]));
    }
  }


  virtual ~SmartqAuthTransferRequest() = default;
};
class SmartqAuthTransferResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  SmartqAuthTransferResponseBody() {}

  explicit SmartqAuthTransferResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SmartqAuthTransferResponseBody() = default;
};
class SmartqAuthTransferResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SmartqAuthTransferResponseBody> body{};

  SmartqAuthTransferResponse() {}

  explicit SmartqAuthTransferResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SmartqAuthTransferResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SmartqAuthTransferResponseBody>(model1);
      }
    }
  }


  virtual ~SmartqAuthTransferResponse() = default;
};
class SmartqAuthorizeRequest : public Darabonba::Model {
public:
  shared_ptr<string> expireDay{};
  shared_ptr<string> llmCubeThemes{};
  shared_ptr<string> llmCubes{};
  shared_ptr<long> operationType{};
  shared_ptr<string> userIds{};

  SmartqAuthorizeRequest() {}

  explicit SmartqAuthorizeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireDay) {
      res["ExpireDay"] = boost::any(*expireDay);
    }
    if (llmCubeThemes) {
      res["LlmCubeThemes"] = boost::any(*llmCubeThemes);
    }
    if (llmCubes) {
      res["LlmCubes"] = boost::any(*llmCubes);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireDay") != m.end() && !m["ExpireDay"].empty()) {
      expireDay = make_shared<string>(boost::any_cast<string>(m["ExpireDay"]));
    }
    if (m.find("LlmCubeThemes") != m.end() && !m["LlmCubeThemes"].empty()) {
      llmCubeThemes = make_shared<string>(boost::any_cast<string>(m["LlmCubeThemes"]));
    }
    if (m.find("LlmCubes") != m.end() && !m["LlmCubes"].empty()) {
      llmCubes = make_shared<string>(boost::any_cast<string>(m["LlmCubes"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<long>(boost::any_cast<long>(m["OperationType"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      userIds = make_shared<string>(boost::any_cast<string>(m["UserIds"]));
    }
  }


  virtual ~SmartqAuthorizeRequest() = default;
};
class SmartqAuthorizeResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> detailMessage{};
  shared_ptr<string> llmCube{};
  shared_ptr<string> llmCubeTheme{};
  shared_ptr<string> userId{};

  SmartqAuthorizeResponseBodyResult() {}

  explicit SmartqAuthorizeResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailMessage) {
      res["DetailMessage"] = boost::any(*detailMessage);
    }
    if (llmCube) {
      res["LlmCube"] = boost::any(*llmCube);
    }
    if (llmCubeTheme) {
      res["LlmCubeTheme"] = boost::any(*llmCubeTheme);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailMessage") != m.end() && !m["DetailMessage"].empty()) {
      detailMessage = make_shared<string>(boost::any_cast<string>(m["DetailMessage"]));
    }
    if (m.find("LlmCube") != m.end() && !m["LlmCube"].empty()) {
      llmCube = make_shared<string>(boost::any_cast<string>(m["LlmCube"]));
    }
    if (m.find("LlmCubeTheme") != m.end() && !m["LlmCubeTheme"].empty()) {
      llmCubeTheme = make_shared<string>(boost::any_cast<string>(m["LlmCubeTheme"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SmartqAuthorizeResponseBodyResult() = default;
};
class SmartqAuthorizeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<SmartqAuthorizeResponseBodyResult>> result{};
  shared_ptr<bool> success{};

  SmartqAuthorizeResponseBody() {}

  explicit SmartqAuthorizeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Result"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(vector<boost::any>) == m["Result"].type()) {
        vector<SmartqAuthorizeResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SmartqAuthorizeResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<SmartqAuthorizeResponseBodyResult>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SmartqAuthorizeResponseBody() = default;
};
class SmartqAuthorizeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SmartqAuthorizeResponseBody> body{};

  SmartqAuthorizeResponse() {}

  explicit SmartqAuthorizeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SmartqAuthorizeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SmartqAuthorizeResponseBody>(model1);
      }
    }
  }


  virtual ~SmartqAuthorizeResponse() = default;
};
class SmartqQueryAbilityRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userQuestion{};

  SmartqQueryAbilityRequest() {}

  explicit SmartqQueryAbilityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userQuestion) {
      res["UserQuestion"] = boost::any(*userQuestion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserQuestion") != m.end() && !m["UserQuestion"].empty()) {
      userQuestion = make_shared<string>(boost::any_cast<string>(m["UserQuestion"]));
    }
  }


  virtual ~SmartqQueryAbilityRequest() = default;
};
class SmartqQueryAbilityResponseBodyResultMetaType : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  SmartqQueryAbilityResponseBodyResultMetaType() {}

  explicit SmartqQueryAbilityResponseBodyResultMetaType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SmartqQueryAbilityResponseBodyResultMetaType() = default;
};
class SmartqQueryAbilityResponseBodyResultValues : public Darabonba::Model {
public:
  shared_ptr<vector<string>> row{};

  SmartqQueryAbilityResponseBodyResultValues() {}

  explicit SmartqQueryAbilityResponseBodyResultValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (row) {
      res["Row"] = boost::any(*row);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Row") != m.end() && !m["Row"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Row"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Row"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      row = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SmartqQueryAbilityResponseBodyResultValues() = default;
};
class SmartqQueryAbilityResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> chartType{};
  shared_ptr<vector<SmartqQueryAbilityResponseBodyResultMetaType>> metaType{};
  shared_ptr<vector<SmartqQueryAbilityResponseBodyResultValues>> values{};

  SmartqQueryAbilityResponseBodyResult() {}

  explicit SmartqQueryAbilityResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chartType) {
      res["ChartType"] = boost::any(*chartType);
    }
    if (metaType) {
      vector<boost::any> temp1;
      for(auto item1:*metaType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MetaType"] = boost::any(temp1);
    }
    if (values) {
      vector<boost::any> temp1;
      for(auto item1:*values){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Values"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChartType") != m.end() && !m["ChartType"].empty()) {
      chartType = make_shared<string>(boost::any_cast<string>(m["ChartType"]));
    }
    if (m.find("MetaType") != m.end() && !m["MetaType"].empty()) {
      if (typeid(vector<boost::any>) == m["MetaType"].type()) {
        vector<SmartqQueryAbilityResponseBodyResultMetaType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MetaType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SmartqQueryAbilityResponseBodyResultMetaType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metaType = make_shared<vector<SmartqQueryAbilityResponseBodyResultMetaType>>(expect1);
      }
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<SmartqQueryAbilityResponseBodyResultValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SmartqQueryAbilityResponseBodyResultValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<SmartqQueryAbilityResponseBodyResultValues>>(expect1);
      }
    }
  }


  virtual ~SmartqQueryAbilityResponseBodyResult() = default;
};
class SmartqQueryAbilityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SmartqQueryAbilityResponseBodyResult> result{};
  shared_ptr<bool> success{};

  SmartqQueryAbilityResponseBody() {}

  explicit SmartqQueryAbilityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        SmartqQueryAbilityResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<SmartqQueryAbilityResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SmartqQueryAbilityResponseBody() = default;
};
class SmartqQueryAbilityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SmartqQueryAbilityResponseBody> body{};

  SmartqQueryAbilityResponse() {}

  explicit SmartqQueryAbilityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SmartqQueryAbilityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SmartqQueryAbilityResponseBody>(model1);
      }
    }
  }


  virtual ~SmartqQueryAbilityResponse() = default;
};
class UpdateDataLevelPermissionStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<long> isOpen{};
  shared_ptr<string> ruleType{};

  UpdateDataLevelPermissionStatusRequest() {}

  explicit UpdateDataLevelPermissionStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (isOpen) {
      res["IsOpen"] = boost::any(*isOpen);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("IsOpen") != m.end() && !m["IsOpen"].empty()) {
      isOpen = make_shared<long>(boost::any_cast<long>(m["IsOpen"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~UpdateDataLevelPermissionStatusRequest() = default;
};
class UpdateDataLevelPermissionStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  UpdateDataLevelPermissionStatusResponseBody() {}

  explicit UpdateDataLevelPermissionStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateDataLevelPermissionStatusResponseBody() = default;
};
class UpdateDataLevelPermissionStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDataLevelPermissionStatusResponseBody> body{};

  UpdateDataLevelPermissionStatusResponse() {}

  explicit UpdateDataLevelPermissionStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDataLevelPermissionStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDataLevelPermissionStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDataLevelPermissionStatusResponse() = default;
};
class UpdateEmbeddedStatusRequest : public Darabonba::Model {
public:
  shared_ptr<bool> thirdPartAuthFlag{};
  shared_ptr<string> worksId{};

  UpdateEmbeddedStatusRequest() {}

  explicit UpdateEmbeddedStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (thirdPartAuthFlag) {
      res["ThirdPartAuthFlag"] = boost::any(*thirdPartAuthFlag);
    }
    if (worksId) {
      res["WorksId"] = boost::any(*worksId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ThirdPartAuthFlag") != m.end() && !m["ThirdPartAuthFlag"].empty()) {
      thirdPartAuthFlag = make_shared<bool>(boost::any_cast<bool>(m["ThirdPartAuthFlag"]));
    }
    if (m.find("WorksId") != m.end() && !m["WorksId"].empty()) {
      worksId = make_shared<string>(boost::any_cast<string>(m["WorksId"]));
    }
  }


  virtual ~UpdateEmbeddedStatusRequest() = default;
};
class UpdateEmbeddedStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> result{};
  shared_ptr<bool> success{};

  UpdateEmbeddedStatusResponseBody() {}

  explicit UpdateEmbeddedStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateEmbeddedStatusResponseBody() = default;
};
class UpdateEmbeddedStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEmbeddedStatusResponseBody> body{};

  UpdateEmbeddedStatusResponse() {}

  explicit UpdateEmbeddedStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEmbeddedStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEmbeddedStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEmbeddedStatusResponse() = default;
};
class UpdateTicketNumRequest : public Darabonba::Model {
public:
  shared_ptr<string> ticket{};
  shared_ptr<long> ticketNum{};

  UpdateTicketNumRequest() {}

  explicit UpdateTicketNumRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ticket) {
      res["Ticket"] = boost::any(*ticket);
    }
    if (ticketNum) {
      res["TicketNum"] = boost::any(*ticketNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ticket") != m.end() && !m["Ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["Ticket"]));
    }
    if (m.find("TicketNum") != m.end() && !m["TicketNum"].empty()) {
      ticketNum = make_shared<long>(boost::any_cast<long>(m["TicketNum"]));
    }
  }


  virtual ~UpdateTicketNumRequest() = default;
};
class UpdateTicketNumResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  UpdateTicketNumResponseBody() {}

  explicit UpdateTicketNumResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateTicketNumResponseBody() = default;
};
class UpdateTicketNumResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTicketNumResponseBody> body{};

  UpdateTicketNumResponse() {}

  explicit UpdateTicketNumResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateTicketNumResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTicketNumResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTicketNumResponse() = default;
};
class UpdateUserRequest : public Darabonba::Model {
public:
  shared_ptr<bool> adminUser{};
  shared_ptr<bool> authAdminUser{};
  shared_ptr<bool> isDeleted{};
  shared_ptr<string> nickName{};
  shared_ptr<string> roleIds{};
  shared_ptr<string> userId{};
  shared_ptr<long> userType{};

  UpdateUserRequest() {}

  explicit UpdateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adminUser) {
      res["AdminUser"] = boost::any(*adminUser);
    }
    if (authAdminUser) {
      res["AuthAdminUser"] = boost::any(*authAdminUser);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (roleIds) {
      res["RoleIds"] = boost::any(*roleIds);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdminUser") != m.end() && !m["AdminUser"].empty()) {
      adminUser = make_shared<bool>(boost::any_cast<bool>(m["AdminUser"]));
    }
    if (m.find("AuthAdminUser") != m.end() && !m["AuthAdminUser"].empty()) {
      authAdminUser = make_shared<bool>(boost::any_cast<bool>(m["AuthAdminUser"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<bool>(boost::any_cast<bool>(m["IsDeleted"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("RoleIds") != m.end() && !m["RoleIds"].empty()) {
      roleIds = make_shared<string>(boost::any_cast<string>(m["RoleIds"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<long>(boost::any_cast<long>(m["UserType"]));
    }
  }


  virtual ~UpdateUserRequest() = default;
};
class UpdateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

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
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class UpdateUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> userGroupDescription{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userGroupName{};

  UpdateUserGroupRequest() {}

  explicit UpdateUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupDescription) {
      res["UserGroupDescription"] = boost::any(*userGroupDescription);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userGroupName) {
      res["UserGroupName"] = boost::any(*userGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupDescription") != m.end() && !m["UserGroupDescription"].empty()) {
      userGroupDescription = make_shared<string>(boost::any_cast<string>(m["UserGroupDescription"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserGroupName") != m.end() && !m["UserGroupName"].empty()) {
      userGroupName = make_shared<string>(boost::any_cast<string>(m["UserGroupName"]));
    }
  }


  virtual ~UpdateUserGroupRequest() = default;
};
class UpdateUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  UpdateUserGroupResponseBody() {}

  explicit UpdateUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateUserGroupResponseBody() = default;
};
class UpdateUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserGroupResponseBody> body{};

  UpdateUserGroupResponse() {}

  explicit UpdateUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserGroupResponse() = default;
};
class UpdateUserTagMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> tagDescription{};
  shared_ptr<string> tagId{};
  shared_ptr<string> tagName{};

  UpdateUserTagMetaRequest() {}

  explicit UpdateUserTagMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagDescription) {
      res["TagDescription"] = boost::any(*tagDescription);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagDescription") != m.end() && !m["TagDescription"].empty()) {
      tagDescription = make_shared<string>(boost::any_cast<string>(m["TagDescription"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~UpdateUserTagMetaRequest() = default;
};
class UpdateUserTagMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  UpdateUserTagMetaResponseBody() {}

  explicit UpdateUserTagMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateUserTagMetaResponseBody() = default;
};
class UpdateUserTagMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserTagMetaResponseBody> body{};

  UpdateUserTagMetaResponse() {}

  explicit UpdateUserTagMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserTagMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserTagMetaResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserTagMetaResponse() = default;
};
class UpdateUserTagValueRequest : public Darabonba::Model {
public:
  shared_ptr<string> tagId{};
  shared_ptr<string> tagValue{};
  shared_ptr<string> userId{};

  UpdateUserTagValueRequest() {}

  explicit UpdateUserTagValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateUserTagValueRequest() = default;
};
class UpdateUserTagValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  UpdateUserTagValueResponseBody() {}

  explicit UpdateUserTagValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateUserTagValueResponseBody() = default;
};
class UpdateUserTagValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserTagValueResponseBody> body{};

  UpdateUserTagValueResponse() {}

  explicit UpdateUserTagValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserTagValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserTagValueResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserTagValueResponse() = default;
};
class UpdateWorkspaceUserRoleRequest : public Darabonba::Model {
public:
  shared_ptr<long> roleId{};
  shared_ptr<string> roleIds{};
  shared_ptr<string> userId{};
  shared_ptr<string> workspaceId{};

  UpdateWorkspaceUserRoleRequest() {}

  explicit UpdateWorkspaceUserRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (roleIds) {
      res["RoleIds"] = boost::any(*roleIds);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
    if (m.find("RoleIds") != m.end() && !m["RoleIds"].empty()) {
      roleIds = make_shared<string>(boost::any_cast<string>(m["RoleIds"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~UpdateWorkspaceUserRoleRequest() = default;
};
class UpdateWorkspaceUserRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  UpdateWorkspaceUserRoleResponseBody() {}

  explicit UpdateWorkspaceUserRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateWorkspaceUserRoleResponseBody() = default;
};
class UpdateWorkspaceUserRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkspaceUserRoleResponseBody> body{};

  UpdateWorkspaceUserRoleResponse() {}

  explicit UpdateWorkspaceUserRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWorkspaceUserRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkspaceUserRoleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkspaceUserRoleResponse() = default;
};
class UpdateWorkspaceUsersRoleRequest : public Darabonba::Model {
public:
  shared_ptr<long> roleId{};
  shared_ptr<string> userIds{};
  shared_ptr<string> workspaceId{};

  UpdateWorkspaceUsersRoleRequest() {}

  explicit UpdateWorkspaceUsersRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<long>(boost::any_cast<long>(m["RoleId"]));
    }
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      userIds = make_shared<string>(boost::any_cast<string>(m["UserIds"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~UpdateWorkspaceUsersRoleRequest() = default;
};
class UpdateWorkspaceUsersRoleResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> failure{};
  shared_ptr<map<string, boost::any>> failureDetail{};
  shared_ptr<long> success{};
  shared_ptr<long> total{};

  UpdateWorkspaceUsersRoleResponseBodyResult() {}

  explicit UpdateWorkspaceUsersRoleResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failure) {
      res["Failure"] = boost::any(*failure);
    }
    if (failureDetail) {
      res["FailureDetail"] = boost::any(*failureDetail);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Failure") != m.end() && !m["Failure"].empty()) {
      failure = make_shared<long>(boost::any_cast<long>(m["Failure"]));
    }
    if (m.find("FailureDetail") != m.end() && !m["FailureDetail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["FailureDetail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      failureDetail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<long>(boost::any_cast<long>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~UpdateWorkspaceUsersRoleResponseBodyResult() = default;
};
class UpdateWorkspaceUsersRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateWorkspaceUsersRoleResponseBodyResult> result{};
  shared_ptr<bool> success{};

  UpdateWorkspaceUsersRoleResponseBody() {}

  explicit UpdateWorkspaceUsersRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        UpdateWorkspaceUsersRoleResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<UpdateWorkspaceUsersRoleResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateWorkspaceUsersRoleResponseBody() = default;
};
class UpdateWorkspaceUsersRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkspaceUsersRoleResponseBody> body{};

  UpdateWorkspaceUsersRoleResponse() {}

  explicit UpdateWorkspaceUsersRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWorkspaceUsersRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkspaceUsersRoleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkspaceUsersRoleResponse() = default;
};
class WithdrawAllUserGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  WithdrawAllUserGroupsRequest() {}

  explicit WithdrawAllUserGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~WithdrawAllUserGroupsRequest() = default;
};
class WithdrawAllUserGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};
  shared_ptr<bool> success{};

  WithdrawAllUserGroupsResponseBody() {}

  explicit WithdrawAllUserGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~WithdrawAllUserGroupsResponseBody() = default;
};
class WithdrawAllUserGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<WithdrawAllUserGroupsResponseBody> body{};

  WithdrawAllUserGroupsResponse() {}

  explicit WithdrawAllUserGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        WithdrawAllUserGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WithdrawAllUserGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~WithdrawAllUserGroupsResponse() = default;
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
  AddDataLevelPermissionRuleUsersResponse addDataLevelPermissionRuleUsersWithOptions(shared_ptr<AddDataLevelPermissionRuleUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDataLevelPermissionRuleUsersResponse addDataLevelPermissionRuleUsers(shared_ptr<AddDataLevelPermissionRuleUsersRequest> request);
  AddDataLevelPermissionWhiteListResponse addDataLevelPermissionWhiteListWithOptions(shared_ptr<AddDataLevelPermissionWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDataLevelPermissionWhiteListResponse addDataLevelPermissionWhiteList(shared_ptr<AddDataLevelPermissionWhiteListRequest> request);
  AddShareReportResponse addShareReportWithOptions(shared_ptr<AddShareReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddShareReportResponse addShareReport(shared_ptr<AddShareReportRequest> request);
  AddUserResponse addUserWithOptions(shared_ptr<AddUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserResponse addUser(shared_ptr<AddUserRequest> request);
  AddUserGroupMemberResponse addUserGroupMemberWithOptions(shared_ptr<AddUserGroupMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserGroupMemberResponse addUserGroupMember(shared_ptr<AddUserGroupMemberRequest> request);
  AddUserGroupMembersResponse addUserGroupMembersWithOptions(shared_ptr<AddUserGroupMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserGroupMembersResponse addUserGroupMembers(shared_ptr<AddUserGroupMembersRequest> request);
  AddUserTagMetaResponse addUserTagMetaWithOptions(shared_ptr<AddUserTagMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserTagMetaResponse addUserTagMeta(shared_ptr<AddUserTagMetaRequest> request);
  AddUserToWorkspaceResponse addUserToWorkspaceWithOptions(shared_ptr<AddUserToWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserToWorkspaceResponse addUserToWorkspace(shared_ptr<AddUserToWorkspaceRequest> request);
  AddWorkspaceUsersResponse addWorkspaceUsersWithOptions(shared_ptr<AddWorkspaceUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddWorkspaceUsersResponse addWorkspaceUsers(shared_ptr<AddWorkspaceUsersRequest> request);
  AllotDatasetAccelerationTaskResponse allotDatasetAccelerationTaskWithOptions(shared_ptr<AllotDatasetAccelerationTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllotDatasetAccelerationTaskResponse allotDatasetAccelerationTask(shared_ptr<AllotDatasetAccelerationTaskRequest> request);
  AuthorizeMenuResponse authorizeMenuWithOptions(shared_ptr<AuthorizeMenuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuthorizeMenuResponse authorizeMenu(shared_ptr<AuthorizeMenuRequest> request);
  BatchAddFeishuUsersResponse batchAddFeishuUsersWithOptions(shared_ptr<BatchAddFeishuUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchAddFeishuUsersResponse batchAddFeishuUsers(shared_ptr<BatchAddFeishuUsersRequest> request);
  CancelAuthorizationMenuResponse cancelAuthorizationMenuWithOptions(shared_ptr<CancelAuthorizationMenuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelAuthorizationMenuResponse cancelAuthorizationMenu(shared_ptr<CancelAuthorizationMenuRequest> request);
  CancelCollectionResponse cancelCollectionWithOptions(shared_ptr<CancelCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelCollectionResponse cancelCollection(shared_ptr<CancelCollectionRequest> request);
  CancelReportShareResponse cancelReportShareWithOptions(shared_ptr<CancelReportShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelReportShareResponse cancelReportShare(shared_ptr<CancelReportShareRequest> request);
  ChangeVisibilityModelResponse changeVisibilityModelWithOptions(shared_ptr<ChangeVisibilityModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeVisibilityModelResponse changeVisibilityModel(shared_ptr<ChangeVisibilityModelRequest> request);
  CheckReadableResponse checkReadableWithOptions(shared_ptr<CheckReadableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckReadableResponse checkReadable(shared_ptr<CheckReadableRequest> request);
  CreateTicketResponse createTicketWithOptions(shared_ptr<CreateTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTicketResponse createTicket(shared_ptr<CreateTicketRequest> request);
  CreateTicket4CopilotResponse createTicket4CopilotWithOptions(shared_ptr<CreateTicket4CopilotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTicket4CopilotResponse createTicket4Copilot(shared_ptr<CreateTicket4CopilotRequest> request);
  CreateUserGroupResponse createUserGroupWithOptions(shared_ptr<CreateUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserGroupResponse createUserGroup(shared_ptr<CreateUserGroupRequest> request);
  DataSetBloodResponse dataSetBloodWithOptions(shared_ptr<DataSetBloodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DataSetBloodResponse dataSetBlood(shared_ptr<DataSetBloodRequest> request);
  DataSourceBloodResponse dataSourceBloodWithOptions(shared_ptr<DataSourceBloodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DataSourceBloodResponse dataSourceBlood(shared_ptr<DataSourceBloodRequest> request);
  DelayTicketExpireTimeResponse delayTicketExpireTimeWithOptions(shared_ptr<DelayTicketExpireTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DelayTicketExpireTimeResponse delayTicketExpireTime(shared_ptr<DelayTicketExpireTimeRequest> request);
  DeleteDataLevelPermissionRuleUsersResponse deleteDataLevelPermissionRuleUsersWithOptions(shared_ptr<DeleteDataLevelPermissionRuleUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataLevelPermissionRuleUsersResponse deleteDataLevelPermissionRuleUsers(shared_ptr<DeleteDataLevelPermissionRuleUsersRequest> request);
  DeleteDataLevelRuleConfigResponse deleteDataLevelRuleConfigWithOptions(shared_ptr<DeleteDataLevelRuleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataLevelRuleConfigResponse deleteDataLevelRuleConfig(shared_ptr<DeleteDataLevelRuleConfigRequest> request);
  DeleteTicketResponse deleteTicketWithOptions(shared_ptr<DeleteTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTicketResponse deleteTicket(shared_ptr<DeleteTicketRequest> request);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<DeleteUserRequest> request);
  DeleteUserFromWorkspaceResponse deleteUserFromWorkspaceWithOptions(shared_ptr<DeleteUserFromWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserFromWorkspaceResponse deleteUserFromWorkspace(shared_ptr<DeleteUserFromWorkspaceRequest> request);
  DeleteUserGroupResponse deleteUserGroupWithOptions(shared_ptr<DeleteUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserGroupResponse deleteUserGroup(shared_ptr<DeleteUserGroupRequest> request);
  DeleteUserGroupMemberResponse deleteUserGroupMemberWithOptions(shared_ptr<DeleteUserGroupMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserGroupMemberResponse deleteUserGroupMember(shared_ptr<DeleteUserGroupMemberRequest> request);
  DeleteUserGroupMembersResponse deleteUserGroupMembersWithOptions(shared_ptr<DeleteUserGroupMembersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserGroupMembersResponse deleteUserGroupMembers(shared_ptr<DeleteUserGroupMembersRequest> request);
  DeleteUserTagMetaResponse deleteUserTagMetaWithOptions(shared_ptr<DeleteUserTagMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserTagMetaResponse deleteUserTagMeta(shared_ptr<DeleteUserTagMetaRequest> request);
  GetDataSourceConnectionInfoResponse getDataSourceConnectionInfoWithOptions(shared_ptr<GetDataSourceConnectionInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataSourceConnectionInfoResponse getDataSourceConnectionInfo(shared_ptr<GetDataSourceConnectionInfoRequest> request);
  GetMailTaskStatusResponse getMailTaskStatusWithOptions(shared_ptr<GetMailTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMailTaskStatusResponse getMailTaskStatus(shared_ptr<GetMailTaskStatusRequest> request);
  GetUserGroupInfoResponse getUserGroupInfoWithOptions(shared_ptr<GetUserGroupInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserGroupInfoResponse getUserGroupInfo(shared_ptr<GetUserGroupInfoRequest> request);
  GetWorksEmbedListResponse getWorksEmbedListWithOptions(shared_ptr<GetWorksEmbedListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorksEmbedListResponse getWorksEmbedList(shared_ptr<GetWorksEmbedListRequest> request);
  ListApiDatasourceResponse listApiDatasourceWithOptions(shared_ptr<ListApiDatasourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApiDatasourceResponse listApiDatasource(shared_ptr<ListApiDatasourceRequest> request);
  ListByUserGroupIdResponse listByUserGroupIdWithOptions(shared_ptr<ListByUserGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListByUserGroupIdResponse listByUserGroupId(shared_ptr<ListByUserGroupIdRequest> request);
  ListCollectionsResponse listCollectionsWithOptions(shared_ptr<ListCollectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCollectionsResponse listCollections(shared_ptr<ListCollectionsRequest> request);
  ListCubeDataLevelPermissionConfigResponse listCubeDataLevelPermissionConfigWithOptions(shared_ptr<ListCubeDataLevelPermissionConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCubeDataLevelPermissionConfigResponse listCubeDataLevelPermissionConfig(shared_ptr<ListCubeDataLevelPermissionConfigRequest> request);
  ListDataLevelPermissionWhiteListResponse listDataLevelPermissionWhiteListWithOptions(shared_ptr<ListDataLevelPermissionWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataLevelPermissionWhiteListResponse listDataLevelPermissionWhiteList(shared_ptr<ListDataLevelPermissionWhiteListRequest> request);
  ListDataSourceResponse listDataSourceWithOptions(shared_ptr<ListDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourceResponse listDataSource(shared_ptr<ListDataSourceRequest> request);
  ListFavoriteReportsResponse listFavoriteReportsWithOptions(shared_ptr<ListFavoriteReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFavoriteReportsResponse listFavoriteReports(shared_ptr<ListFavoriteReportsRequest> request);
  ListOrganizationRoleUsersResponse listOrganizationRoleUsersWithOptions(shared_ptr<ListOrganizationRoleUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrganizationRoleUsersResponse listOrganizationRoleUsers(shared_ptr<ListOrganizationRoleUsersRequest> request);
  ListOrganizationRolesResponse listOrganizationRolesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrganizationRolesResponse listOrganizationRoles();
  ListPortalMenuAuthorizationResponse listPortalMenuAuthorizationWithOptions(shared_ptr<ListPortalMenuAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPortalMenuAuthorizationResponse listPortalMenuAuthorization(shared_ptr<ListPortalMenuAuthorizationRequest> request);
  ListPortalMenusResponse listPortalMenusWithOptions(shared_ptr<ListPortalMenusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPortalMenusResponse listPortalMenus(shared_ptr<ListPortalMenusRequest> request);
  ListRecentViewReportsResponse listRecentViewReportsWithOptions(shared_ptr<ListRecentViewReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRecentViewReportsResponse listRecentViewReports(shared_ptr<ListRecentViewReportsRequest> request);
  ListSharedReportsResponse listSharedReportsWithOptions(shared_ptr<ListSharedReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSharedReportsResponse listSharedReports(shared_ptr<ListSharedReportsRequest> request);
  ListUserGroupsByUserIdResponse listUserGroupsByUserIdWithOptions(shared_ptr<ListUserGroupsByUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserGroupsByUserIdResponse listUserGroupsByUserId(shared_ptr<ListUserGroupsByUserIdRequest> request);
  ListWorkspaceRoleUsersResponse listWorkspaceRoleUsersWithOptions(shared_ptr<ListWorkspaceRoleUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspaceRoleUsersResponse listWorkspaceRoleUsers(shared_ptr<ListWorkspaceRoleUsersRequest> request);
  ListWorkspaceRolesResponse listWorkspaceRolesWithOptions(shared_ptr<ListWorkspaceRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkspaceRolesResponse listWorkspaceRoles(shared_ptr<ListWorkspaceRolesRequest> request);
  ManualRunMailTaskResponse manualRunMailTaskWithOptions(shared_ptr<ManualRunMailTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ManualRunMailTaskResponse manualRunMailTask(shared_ptr<ManualRunMailTaskRequest> request);
  ModifyApiDatasourceParametersResponse modifyApiDatasourceParametersWithOptions(shared_ptr<ModifyApiDatasourceParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyApiDatasourceParametersResponse modifyApiDatasourceParameters(shared_ptr<ModifyApiDatasourceParametersRequest> request);
  ModifyCopilotEmbedConfigResponse modifyCopilotEmbedConfigWithOptions(shared_ptr<ModifyCopilotEmbedConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyCopilotEmbedConfigResponse modifyCopilotEmbedConfig(shared_ptr<ModifyCopilotEmbedConfigRequest> request);
  QueryApprovalInfoResponse queryApprovalInfoWithOptions(shared_ptr<QueryApprovalInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryApprovalInfoResponse queryApprovalInfo(shared_ptr<QueryApprovalInfoRequest> request);
  QueryAuditLogResponse queryAuditLogWithOptions(shared_ptr<QueryAuditLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAuditLogResponse queryAuditLog(shared_ptr<QueryAuditLogRequest> request);
  QueryComponentPerformanceResponse queryComponentPerformanceWithOptions(shared_ptr<QueryComponentPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryComponentPerformanceResponse queryComponentPerformance(shared_ptr<QueryComponentPerformanceRequest> request);
  QueryCopilotEmbedConfigResponse queryCopilotEmbedConfigWithOptions(shared_ptr<QueryCopilotEmbedConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCopilotEmbedConfigResponse queryCopilotEmbedConfig(shared_ptr<QueryCopilotEmbedConfigRequest> request);
  QueryCubeOptimizationResponse queryCubeOptimizationWithOptions(shared_ptr<QueryCubeOptimizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCubeOptimizationResponse queryCubeOptimization(shared_ptr<QueryCubeOptimizationRequest> request);
  QueryCubePerformanceResponse queryCubePerformanceWithOptions(shared_ptr<QueryCubePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCubePerformanceResponse queryCubePerformance(shared_ptr<QueryCubePerformanceRequest> request);
  QueryDataResponse queryDataWithOptions(shared_ptr<QueryDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDataResponse queryData(shared_ptr<QueryDataRequest> request);
  QueryDataRangeResponse queryDataRangeWithOptions(shared_ptr<QueryDataRangeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDataRangeResponse queryDataRange(shared_ptr<QueryDataRangeRequest> request);
  QueryDataServiceResponse queryDataServiceWithOptions(shared_ptr<QueryDataServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDataServiceResponse queryDataService(shared_ptr<QueryDataServiceRequest> request);
  QueryDataServiceListResponse queryDataServiceListWithOptions(shared_ptr<QueryDataServiceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDataServiceListResponse queryDataServiceList(shared_ptr<QueryDataServiceListRequest> request);
  QueryDatasetDetailInfoResponse queryDatasetDetailInfoWithOptions(shared_ptr<QueryDatasetDetailInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDatasetDetailInfoResponse queryDatasetDetailInfo(shared_ptr<QueryDatasetDetailInfoRequest> request);
  QueryDatasetInfoResponse queryDatasetInfoWithOptions(shared_ptr<QueryDatasetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDatasetInfoResponse queryDatasetInfo(shared_ptr<QueryDatasetInfoRequest> request);
  QueryDatasetListResponse queryDatasetListWithOptions(shared_ptr<QueryDatasetListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDatasetListResponse queryDatasetList(shared_ptr<QueryDatasetListRequest> request);
  QueryDatasetSmartqStatusResponse queryDatasetSmartqStatusWithOptions(shared_ptr<QueryDatasetSmartqStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDatasetSmartqStatusResponse queryDatasetSmartqStatus(shared_ptr<QueryDatasetSmartqStatusRequest> request);
  QueryDatasetSwitchInfoResponse queryDatasetSwitchInfoWithOptions(shared_ptr<QueryDatasetSwitchInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDatasetSwitchInfoResponse queryDatasetSwitchInfo(shared_ptr<QueryDatasetSwitchInfoRequest> request);
  QueryEmbeddedInfoResponse queryEmbeddedInfoWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEmbeddedInfoResponse queryEmbeddedInfo();
  QueryEmbeddedStatusResponse queryEmbeddedStatusWithOptions(shared_ptr<QueryEmbeddedStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEmbeddedStatusResponse queryEmbeddedStatus(shared_ptr<QueryEmbeddedStatusRequest> request);
  QueryLlmCubeWithThemeListByUserIdResponse queryLlmCubeWithThemeListByUserIdWithOptions(shared_ptr<QueryLlmCubeWithThemeListByUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryLlmCubeWithThemeListByUserIdResponse queryLlmCubeWithThemeListByUserId(shared_ptr<QueryLlmCubeWithThemeListByUserIdRequest> request);
  QueryOrganizationRoleConfigResponse queryOrganizationRoleConfigWithOptions(shared_ptr<QueryOrganizationRoleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOrganizationRoleConfigResponse queryOrganizationRoleConfig(shared_ptr<QueryOrganizationRoleConfigRequest> request);
  QueryOrganizationWorkspaceListResponse queryOrganizationWorkspaceListWithOptions(shared_ptr<QueryOrganizationWorkspaceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOrganizationWorkspaceListResponse queryOrganizationWorkspaceList(shared_ptr<QueryOrganizationWorkspaceListRequest> request);
  QueryReadableResourcesListByUserIdResponse queryReadableResourcesListByUserIdWithOptions(shared_ptr<QueryReadableResourcesListByUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryReadableResourcesListByUserIdResponse queryReadableResourcesListByUserId(shared_ptr<QueryReadableResourcesListByUserIdRequest> request);
  QueryReportPerformanceResponse queryReportPerformanceWithOptions(shared_ptr<QueryReportPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryReportPerformanceResponse queryReportPerformance(shared_ptr<QueryReportPerformanceRequest> request);
  QueryShareListResponse queryShareListWithOptions(shared_ptr<QueryShareListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryShareListResponse queryShareList(shared_ptr<QueryShareListRequest> request);
  QuerySharesToUserListResponse querySharesToUserListWithOptions(shared_ptr<QuerySharesToUserListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySharesToUserListResponse querySharesToUserList(shared_ptr<QuerySharesToUserListRequest> request);
  QuerySmartqPermissionByCubeIdResponse querySmartqPermissionByCubeIdWithOptions(shared_ptr<QuerySmartqPermissionByCubeIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySmartqPermissionByCubeIdResponse querySmartqPermissionByCubeId(shared_ptr<QuerySmartqPermissionByCubeIdRequest> request);
  QueryTicketInfoResponse queryTicketInfoWithOptions(shared_ptr<QueryTicketInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTicketInfoResponse queryTicketInfo(shared_ptr<QueryTicketInfoRequest> request);
  QueryUserGroupListByParentIdResponse queryUserGroupListByParentIdWithOptions(shared_ptr<QueryUserGroupListByParentIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserGroupListByParentIdResponse queryUserGroupListByParentId(shared_ptr<QueryUserGroupListByParentIdRequest> request);
  QueryUserGroupMemberResponse queryUserGroupMemberWithOptions(shared_ptr<QueryUserGroupMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserGroupMemberResponse queryUserGroupMember(shared_ptr<QueryUserGroupMemberRequest> request);
  QueryUserInfoByAccountResponse queryUserInfoByAccountWithOptions(shared_ptr<QueryUserInfoByAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserInfoByAccountResponse queryUserInfoByAccount(shared_ptr<QueryUserInfoByAccountRequest> request);
  QueryUserInfoByUserIdResponse queryUserInfoByUserIdWithOptions(shared_ptr<QueryUserInfoByUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserInfoByUserIdResponse queryUserInfoByUserId(shared_ptr<QueryUserInfoByUserIdRequest> request);
  QueryUserListResponse queryUserListWithOptions(shared_ptr<QueryUserListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserListResponse queryUserList(shared_ptr<QueryUserListRequest> request);
  QueryUserRoleInfoInWorkspaceResponse queryUserRoleInfoInWorkspaceWithOptions(shared_ptr<QueryUserRoleInfoInWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserRoleInfoInWorkspaceResponse queryUserRoleInfoInWorkspace(shared_ptr<QueryUserRoleInfoInWorkspaceRequest> request);
  QueryUserTagMetaListResponse queryUserTagMetaListWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserTagMetaListResponse queryUserTagMetaList();
  QueryUserTagValueListResponse queryUserTagValueListWithOptions(shared_ptr<QueryUserTagValueListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserTagValueListResponse queryUserTagValueList(shared_ptr<QueryUserTagValueListRequest> request);
  QueryWorksResponse queryWorksWithOptions(shared_ptr<QueryWorksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryWorksResponse queryWorks(shared_ptr<QueryWorksRequest> request);
  QueryWorksBloodRelationshipResponse queryWorksBloodRelationshipWithOptions(shared_ptr<QueryWorksBloodRelationshipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryWorksBloodRelationshipResponse queryWorksBloodRelationship(shared_ptr<QueryWorksBloodRelationshipRequest> request);
  QueryWorksByOrganizationResponse queryWorksByOrganizationWithOptions(shared_ptr<QueryWorksByOrganizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryWorksByOrganizationResponse queryWorksByOrganization(shared_ptr<QueryWorksByOrganizationRequest> request);
  QueryWorksByWorkspaceResponse queryWorksByWorkspaceWithOptions(shared_ptr<QueryWorksByWorkspaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryWorksByWorkspaceResponse queryWorksByWorkspace(shared_ptr<QueryWorksByWorkspaceRequest> request);
  QueryWorkspaceRoleConfigResponse queryWorkspaceRoleConfigWithOptions(shared_ptr<QueryWorkspaceRoleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryWorkspaceRoleConfigResponse queryWorkspaceRoleConfig(shared_ptr<QueryWorkspaceRoleConfigRequest> request);
  QueryWorkspaceUserListResponse queryWorkspaceUserListWithOptions(shared_ptr<QueryWorkspaceUserListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryWorkspaceUserListResponse queryWorkspaceUserList(shared_ptr<QueryWorkspaceUserListRequest> request);
  ResultCallbackResponse resultCallbackWithOptions(shared_ptr<ResultCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResultCallbackResponse resultCallback(shared_ptr<ResultCallbackRequest> request);
  SaveFavoritesResponse saveFavoritesWithOptions(shared_ptr<SaveFavoritesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveFavoritesResponse saveFavorites(shared_ptr<SaveFavoritesRequest> request);
  SetDataLevelPermissionExtraConfigResponse setDataLevelPermissionExtraConfigWithOptions(shared_ptr<SetDataLevelPermissionExtraConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDataLevelPermissionExtraConfigResponse setDataLevelPermissionExtraConfig(shared_ptr<SetDataLevelPermissionExtraConfigRequest> request);
  SetDataLevelPermissionRuleConfigResponse setDataLevelPermissionRuleConfigWithOptions(shared_ptr<SetDataLevelPermissionRuleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDataLevelPermissionRuleConfigResponse setDataLevelPermissionRuleConfig(shared_ptr<SetDataLevelPermissionRuleConfigRequest> request);
  SetDataLevelPermissionWhiteListResponse setDataLevelPermissionWhiteListWithOptions(shared_ptr<SetDataLevelPermissionWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDataLevelPermissionWhiteListResponse setDataLevelPermissionWhiteList(shared_ptr<SetDataLevelPermissionWhiteListRequest> request);
  SmartqAuthTransferResponse smartqAuthTransferWithOptions(shared_ptr<SmartqAuthTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SmartqAuthTransferResponse smartqAuthTransfer(shared_ptr<SmartqAuthTransferRequest> request);
  SmartqAuthorizeResponse smartqAuthorizeWithOptions(shared_ptr<SmartqAuthorizeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SmartqAuthorizeResponse smartqAuthorize(shared_ptr<SmartqAuthorizeRequest> request);
  SmartqQueryAbilityResponse smartqQueryAbilityWithOptions(shared_ptr<SmartqQueryAbilityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SmartqQueryAbilityResponse smartqQueryAbility(shared_ptr<SmartqQueryAbilityRequest> request);
  UpdateDataLevelPermissionStatusResponse updateDataLevelPermissionStatusWithOptions(shared_ptr<UpdateDataLevelPermissionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDataLevelPermissionStatusResponse updateDataLevelPermissionStatus(shared_ptr<UpdateDataLevelPermissionStatusRequest> request);
  UpdateEmbeddedStatusResponse updateEmbeddedStatusWithOptions(shared_ptr<UpdateEmbeddedStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEmbeddedStatusResponse updateEmbeddedStatus(shared_ptr<UpdateEmbeddedStatusRequest> request);
  UpdateTicketNumResponse updateTicketNumWithOptions(shared_ptr<UpdateTicketNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTicketNumResponse updateTicketNum(shared_ptr<UpdateTicketNumRequest> request);
  UpdateUserResponse updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserResponse updateUser(shared_ptr<UpdateUserRequest> request);
  UpdateUserGroupResponse updateUserGroupWithOptions(shared_ptr<UpdateUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserGroupResponse updateUserGroup(shared_ptr<UpdateUserGroupRequest> request);
  UpdateUserTagMetaResponse updateUserTagMetaWithOptions(shared_ptr<UpdateUserTagMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserTagMetaResponse updateUserTagMeta(shared_ptr<UpdateUserTagMetaRequest> request);
  UpdateUserTagValueResponse updateUserTagValueWithOptions(shared_ptr<UpdateUserTagValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserTagValueResponse updateUserTagValue(shared_ptr<UpdateUserTagValueRequest> request);
  UpdateWorkspaceUserRoleResponse updateWorkspaceUserRoleWithOptions(shared_ptr<UpdateWorkspaceUserRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkspaceUserRoleResponse updateWorkspaceUserRole(shared_ptr<UpdateWorkspaceUserRoleRequest> request);
  UpdateWorkspaceUsersRoleResponse updateWorkspaceUsersRoleWithOptions(shared_ptr<UpdateWorkspaceUsersRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkspaceUsersRoleResponse updateWorkspaceUsersRole(shared_ptr<UpdateWorkspaceUsersRoleRequest> request);
  WithdrawAllUserGroupsResponse withdrawAllUserGroupsWithOptions(shared_ptr<WithdrawAllUserGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WithdrawAllUserGroupsResponse withdrawAllUserGroups(shared_ptr<WithdrawAllUserGroupsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Quickbi-public20220101

#endif
