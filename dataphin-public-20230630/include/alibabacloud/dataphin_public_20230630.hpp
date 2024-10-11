// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DATAPHIN-PUBLIC20230630_H_
#define ALIBABACLOUD_DATAPHIN-PUBLIC20230630_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dataphin-public20230630 {
class DataSourceInfo : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> configs{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creator{};
  shared_ptr<string> creatorName{};
  shared_ptr<string> description{};
  shared_ptr<string> env{};
  shared_ptr<long> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> scope{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> type{};

  DataSourceInfo() {}

  explicit DataSourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      res["Configs"] = boost::any(*configs);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
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
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Configs"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      configs = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DataSourceInfo() = default;
};
class DatasourceCreate : public Darabonba::Model {
public:
  shared_ptr<bool> checkActivity{};
  shared_ptr<map<string, string>> configs{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  DatasourceCreate() {}

  explicit DatasourceCreate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkActivity) {
      res["CheckActivity"] = boost::any(*checkActivity);
    }
    if (configs) {
      res["Configs"] = boost::any(*configs);
    }
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (m.find("CheckActivity") != m.end() && !m["CheckActivity"].empty()) {
      checkActivity = make_shared<bool>(boost::any_cast<bool>(m["CheckActivity"]));
    }
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Configs"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      configs = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DatasourceCreate() = default;
};
class AddTenantMembersRequestAddCommandUserList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<vector<string>> roleList{};

  AddTenantMembersRequestAddCommandUserList() {}

  explicit AddTenantMembersRequestAddCommandUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (roleList) {
      res["RoleList"] = boost::any(*roleList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RoleList") != m.end() && !m["RoleList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RoleList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roleList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddTenantMembersRequestAddCommandUserList() = default;
};
class AddTenantMembersRequestAddCommand : public Darabonba::Model {
public:
  shared_ptr<vector<AddTenantMembersRequestAddCommandUserList>> userList{};

  AddTenantMembersRequestAddCommand() {}

  explicit AddTenantMembersRequestAddCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userList) {
      vector<boost::any> temp1;
      for(auto item1:*userList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserList") != m.end() && !m["UserList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserList"].type()) {
        vector<AddTenantMembersRequestAddCommandUserList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddTenantMembersRequestAddCommandUserList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userList = make_shared<vector<AddTenantMembersRequestAddCommandUserList>>(expect1);
      }
    }
  }


  virtual ~AddTenantMembersRequestAddCommand() = default;
};
class AddTenantMembersRequest : public Darabonba::Model {
public:
  shared_ptr<AddTenantMembersRequestAddCommand> addCommand{};
  shared_ptr<long> opTenantId{};

  AddTenantMembersRequest() {}

  explicit AddTenantMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addCommand) {
      res["AddCommand"] = addCommand ? boost::any(addCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddCommand") != m.end() && !m["AddCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddCommand"].type()) {
        AddTenantMembersRequestAddCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddCommand"]));
        addCommand = make_shared<AddTenantMembersRequestAddCommand>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~AddTenantMembersRequest() = default;
};
class AddTenantMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> addCommandShrink{};
  shared_ptr<long> opTenantId{};

  AddTenantMembersShrinkRequest() {}

  explicit AddTenantMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addCommandShrink) {
      res["AddCommand"] = boost::any(*addCommandShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddCommand") != m.end() && !m["AddCommand"].empty()) {
      addCommandShrink = make_shared<string>(boost::any_cast<string>(m["AddCommand"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~AddTenantMembersShrinkRequest() = default;
};
class AddTenantMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddTenantMembersResponseBody() {}

  explicit AddTenantMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~AddTenantMembersResponseBody() = default;
};
class AddTenantMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddTenantMembersResponseBody> body{};

  AddTenantMembersResponse() {}

  explicit AddTenantMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddTenantMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddTenantMembersResponseBody>(model1);
      }
    }
  }


  virtual ~AddTenantMembersResponse() = default;
};
class AddTenantMembersBySourceUserRequestAddCommandSourceUserList : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> dingNumber{};
  shared_ptr<string> displayName{};
  shared_ptr<string> mail{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> sourceId{};

  AddTenantMembersBySourceUserRequestAddCommandSourceUserList() {}

  explicit AddTenantMembersBySourceUserRequestAddCommandSourceUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (dingNumber) {
      res["DingNumber"] = boost::any(*dingNumber);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (mail) {
      res["Mail"] = boost::any(*mail);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DingNumber") != m.end() && !m["DingNumber"].empty()) {
      dingNumber = make_shared<string>(boost::any_cast<string>(m["DingNumber"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Mail") != m.end() && !m["Mail"].empty()) {
      mail = make_shared<string>(boost::any_cast<string>(m["Mail"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
  }


  virtual ~AddTenantMembersBySourceUserRequestAddCommandSourceUserList() = default;
};
class AddTenantMembersBySourceUserRequestAddCommand : public Darabonba::Model {
public:
  shared_ptr<vector<AddTenantMembersBySourceUserRequestAddCommandSourceUserList>> sourceUserList{};

  AddTenantMembersBySourceUserRequestAddCommand() {}

  explicit AddTenantMembersBySourceUserRequestAddCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceUserList) {
      vector<boost::any> temp1;
      for(auto item1:*sourceUserList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceUserList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceUserList") != m.end() && !m["SourceUserList"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceUserList"].type()) {
        vector<AddTenantMembersBySourceUserRequestAddCommandSourceUserList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceUserList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddTenantMembersBySourceUserRequestAddCommandSourceUserList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceUserList = make_shared<vector<AddTenantMembersBySourceUserRequestAddCommandSourceUserList>>(expect1);
      }
    }
  }


  virtual ~AddTenantMembersBySourceUserRequestAddCommand() = default;
};
class AddTenantMembersBySourceUserRequest : public Darabonba::Model {
public:
  shared_ptr<AddTenantMembersBySourceUserRequestAddCommand> addCommand{};
  shared_ptr<long> opTenantId{};

  AddTenantMembersBySourceUserRequest() {}

  explicit AddTenantMembersBySourceUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addCommand) {
      res["AddCommand"] = addCommand ? boost::any(addCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddCommand") != m.end() && !m["AddCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddCommand"].type()) {
        AddTenantMembersBySourceUserRequestAddCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddCommand"]));
        addCommand = make_shared<AddTenantMembersBySourceUserRequestAddCommand>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~AddTenantMembersBySourceUserRequest() = default;
};
class AddTenantMembersBySourceUserShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> addCommandShrink{};
  shared_ptr<long> opTenantId{};

  AddTenantMembersBySourceUserShrinkRequest() {}

  explicit AddTenantMembersBySourceUserShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addCommandShrink) {
      res["AddCommand"] = boost::any(*addCommandShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddCommand") != m.end() && !m["AddCommand"].empty()) {
      addCommandShrink = make_shared<string>(boost::any_cast<string>(m["AddCommand"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~AddTenantMembersBySourceUserShrinkRequest() = default;
};
class AddTenantMembersBySourceUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddTenantMembersBySourceUserResponseBody() {}

  explicit AddTenantMembersBySourceUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~AddTenantMembersBySourceUserResponseBody() = default;
};
class AddTenantMembersBySourceUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddTenantMembersBySourceUserResponseBody> body{};

  AddTenantMembersBySourceUserResponse() {}

  explicit AddTenantMembersBySourceUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddTenantMembersBySourceUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddTenantMembersBySourceUserResponseBody>(model1);
      }
    }
  }


  virtual ~AddTenantMembersBySourceUserResponse() = default;
};
class AddUserGroupMemberRequestAddCommand : public Darabonba::Model {
public:
  shared_ptr<string> userGroupId{};
  shared_ptr<vector<string>> userIdList{};

  AddUserGroupMemberRequestAddCommand() {}

  explicit AddUserGroupMemberRequestAddCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddUserGroupMemberRequestAddCommand() = default;
};
class AddUserGroupMemberRequest : public Darabonba::Model {
public:
  shared_ptr<AddUserGroupMemberRequestAddCommand> addCommand{};
  shared_ptr<long> opTenantId{};

  AddUserGroupMemberRequest() {}

  explicit AddUserGroupMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addCommand) {
      res["AddCommand"] = addCommand ? boost::any(addCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddCommand") != m.end() && !m["AddCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["AddCommand"].type()) {
        AddUserGroupMemberRequestAddCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AddCommand"]));
        addCommand = make_shared<AddUserGroupMemberRequestAddCommand>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~AddUserGroupMemberRequest() = default;
};
class AddUserGroupMemberShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> addCommandShrink{};
  shared_ptr<long> opTenantId{};

  AddUserGroupMemberShrinkRequest() {}

  explicit AddUserGroupMemberShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addCommandShrink) {
      res["AddCommand"] = boost::any(*addCommandShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddCommand") != m.end() && !m["AddCommand"].empty()) {
      addCommandShrink = make_shared<string>(boost::any_cast<string>(m["AddCommand"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~AddUserGroupMemberShrinkRequest() = default;
};
class AddUserGroupMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddUserGroupMemberResponseBody() {}

  explicit AddUserGroupMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
class CheckDataSourceConnectivityRequestCheckCommandConfigItemList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CheckDataSourceConnectivityRequestCheckCommandConfigItemList() {}

  explicit CheckDataSourceConnectivityRequestCheckCommandConfigItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CheckDataSourceConnectivityRequestCheckCommandConfigItemList() = default;
};
class CheckDataSourceConnectivityRequestCheckCommand : public Darabonba::Model {
public:
  shared_ptr<vector<CheckDataSourceConnectivityRequestCheckCommandConfigItemList>> configItemList{};
  shared_ptr<string> type{};

  CheckDataSourceConnectivityRequestCheckCommand() {}

  explicit CheckDataSourceConnectivityRequestCheckCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configItemList) {
      vector<boost::any> temp1;
      for(auto item1:*configItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigItemList"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigItemList") != m.end() && !m["ConfigItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigItemList"].type()) {
        vector<CheckDataSourceConnectivityRequestCheckCommandConfigItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckDataSourceConnectivityRequestCheckCommandConfigItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configItemList = make_shared<vector<CheckDataSourceConnectivityRequestCheckCommandConfigItemList>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CheckDataSourceConnectivityRequestCheckCommand() = default;
};
class CheckDataSourceConnectivityRequest : public Darabonba::Model {
public:
  shared_ptr<CheckDataSourceConnectivityRequestCheckCommand> checkCommand{};
  shared_ptr<long> opTenantId{};

  CheckDataSourceConnectivityRequest() {}

  explicit CheckDataSourceConnectivityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkCommand) {
      res["CheckCommand"] = checkCommand ? boost::any(checkCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckCommand") != m.end() && !m["CheckCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["CheckCommand"].type()) {
        CheckDataSourceConnectivityRequestCheckCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CheckCommand"]));
        checkCommand = make_shared<CheckDataSourceConnectivityRequestCheckCommand>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CheckDataSourceConnectivityRequest() = default;
};
class CheckDataSourceConnectivityShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> checkCommandShrink{};
  shared_ptr<long> opTenantId{};

  CheckDataSourceConnectivityShrinkRequest() {}

  explicit CheckDataSourceConnectivityShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkCommandShrink) {
      res["CheckCommand"] = boost::any(*checkCommandShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckCommand") != m.end() && !m["CheckCommand"].empty()) {
      checkCommandShrink = make_shared<string>(boost::any_cast<string>(m["CheckCommand"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CheckDataSourceConnectivityShrinkRequest() = default;
};
class CheckDataSourceConnectivityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckDataSourceConnectivityResponseBody() {}

  explicit CheckDataSourceConnectivityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~CheckDataSourceConnectivityResponseBody() = default;
};
class CheckDataSourceConnectivityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDataSourceConnectivityResponseBody> body{};

  CheckDataSourceConnectivityResponse() {}

  explicit CheckDataSourceConnectivityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckDataSourceConnectivityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDataSourceConnectivityResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDataSourceConnectivityResponse() = default;
};
class CheckDataSourceConnectivityByIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> opTenantId{};

  CheckDataSourceConnectivityByIdRequest() {}

  explicit CheckDataSourceConnectivityByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CheckDataSourceConnectivityByIdRequest() = default;
};
class CheckDataSourceConnectivityByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckDataSourceConnectivityByIdResponseBody() {}

  explicit CheckDataSourceConnectivityByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~CheckDataSourceConnectivityByIdResponseBody() = default;
};
class CheckDataSourceConnectivityByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDataSourceConnectivityByIdResponseBody> body{};

  CheckDataSourceConnectivityByIdResponse() {}

  explicit CheckDataSourceConnectivityByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckDataSourceConnectivityByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDataSourceConnectivityByIdResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDataSourceConnectivityByIdResponse() = default;
};
class CheckResourcePermissionRequestCheckCommandResourceList : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};

  CheckResourcePermissionRequestCheckCommandResourceList() {}

  explicit CheckResourcePermissionRequestCheckCommandResourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~CheckResourcePermissionRequestCheckCommandResourceList() = default;
};
class CheckResourcePermissionRequestCheckCommand : public Darabonba::Model {
public:
  shared_ptr<string> operate{};
  shared_ptr<vector<CheckResourcePermissionRequestCheckCommandResourceList>> resourceList{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> userId{};

  CheckResourcePermissionRequestCheckCommand() {}

  explicit CheckResourcePermissionRequestCheckCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operate) {
      res["Operate"] = boost::any(*operate);
    }
    if (resourceList) {
      vector<boost::any> temp1;
      for(auto item1:*resourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceList"] = boost::any(temp1);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operate") != m.end() && !m["Operate"].empty()) {
      operate = make_shared<string>(boost::any_cast<string>(m["Operate"]));
    }
    if (m.find("ResourceList") != m.end() && !m["ResourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceList"].type()) {
        vector<CheckResourcePermissionRequestCheckCommandResourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckResourcePermissionRequestCheckCommandResourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceList = make_shared<vector<CheckResourcePermissionRequestCheckCommandResourceList>>(expect1);
      }
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CheckResourcePermissionRequestCheckCommand() = default;
};
class CheckResourcePermissionRequest : public Darabonba::Model {
public:
  shared_ptr<CheckResourcePermissionRequestCheckCommand> checkCommand{};
  shared_ptr<long> opTenantId{};

  CheckResourcePermissionRequest() {}

  explicit CheckResourcePermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkCommand) {
      res["CheckCommand"] = checkCommand ? boost::any(checkCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckCommand") != m.end() && !m["CheckCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["CheckCommand"].type()) {
        CheckResourcePermissionRequestCheckCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CheckCommand"]));
        checkCommand = make_shared<CheckResourcePermissionRequestCheckCommand>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CheckResourcePermissionRequest() = default;
};
class CheckResourcePermissionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> checkCommandShrink{};
  shared_ptr<long> opTenantId{};

  CheckResourcePermissionShrinkRequest() {}

  explicit CheckResourcePermissionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkCommandShrink) {
      res["CheckCommand"] = boost::any(*checkCommandShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckCommand") != m.end() && !m["CheckCommand"].empty()) {
      checkCommandShrink = make_shared<string>(boost::any_cast<string>(m["CheckCommand"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CheckResourcePermissionShrinkRequest() = default;
};
class CheckResourcePermissionResponseBodyResourcePermissionList : public Darabonba::Model {
public:
  shared_ptr<bool> hasPermission{};
  shared_ptr<string> resourceId{};

  CheckResourcePermissionResponseBodyResourcePermissionList() {}

  explicit CheckResourcePermissionResponseBodyResourcePermissionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasPermission) {
      res["HasPermission"] = boost::any(*hasPermission);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasPermission") != m.end() && !m["HasPermission"].empty()) {
      hasPermission = make_shared<bool>(boost::any_cast<bool>(m["HasPermission"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~CheckResourcePermissionResponseBodyResourcePermissionList() = default;
};
class CheckResourcePermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<CheckResourcePermissionResponseBodyResourcePermissionList>> resourcePermissionList{};
  shared_ptr<bool> success{};

  CheckResourcePermissionResponseBody() {}

  explicit CheckResourcePermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourcePermissionList) {
      vector<boost::any> temp1;
      for(auto item1:*resourcePermissionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcePermissionList"] = boost::any(temp1);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourcePermissionList") != m.end() && !m["ResourcePermissionList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourcePermissionList"].type()) {
        vector<CheckResourcePermissionResponseBodyResourcePermissionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourcePermissionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckResourcePermissionResponseBodyResourcePermissionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourcePermissionList = make_shared<vector<CheckResourcePermissionResponseBodyResourcePermissionList>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckResourcePermissionResponseBody() = default;
};
class CheckResourcePermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckResourcePermissionResponseBody> body{};

  CheckResourcePermissionResponse() {}

  explicit CheckResourcePermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckResourcePermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckResourcePermissionResponseBody>(model1);
      }
    }
  }


  virtual ~CheckResourcePermissionResponse() = default;
};
class CreateAdHocFileRequestCreateCommand : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> directory{};
  shared_ptr<string> name{};
  shared_ptr<long> projectId{};

  CreateAdHocFileRequestCreateCommand() {}

  explicit CreateAdHocFileRequestCreateCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (directory) {
      res["Directory"] = boost::any(*directory);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      directory = make_shared<string>(boost::any_cast<string>(m["Directory"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~CreateAdHocFileRequestCreateCommand() = default;
};
class CreateAdHocFileRequest : public Darabonba::Model {
public:
  shared_ptr<CreateAdHocFileRequestCreateCommand> createCommand{};
  shared_ptr<long> opTenantId{};

  CreateAdHocFileRequest() {}

  explicit CreateAdHocFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createCommand) {
      res["CreateCommand"] = createCommand ? boost::any(createCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateCommand") != m.end() && !m["CreateCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateCommand"].type()) {
        CreateAdHocFileRequestCreateCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateCommand"]));
        createCommand = make_shared<CreateAdHocFileRequestCreateCommand>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CreateAdHocFileRequest() = default;
};
class CreateAdHocFileShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> createCommandShrink{};
  shared_ptr<long> opTenantId{};

  CreateAdHocFileShrinkRequest() {}

  explicit CreateAdHocFileShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createCommandShrink) {
      res["CreateCommand"] = boost::any(*createCommandShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateCommand") != m.end() && !m["CreateCommand"].empty()) {
      createCommandShrink = make_shared<string>(boost::any_cast<string>(m["CreateCommand"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CreateAdHocFileShrinkRequest() = default;
};
class CreateAdHocFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> fileId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAdHocFileResponseBody() {}

  explicit CreateAdHocFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["FileId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~CreateAdHocFileResponseBody() = default;
};
class CreateAdHocFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAdHocFileResponseBody> body{};

  CreateAdHocFileResponse() {}

  explicit CreateAdHocFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAdHocFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAdHocFileResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAdHocFileResponse() = default;
};
class CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreateConfigItemList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreateConfigItemList() {}

  explicit CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreateConfigItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreateConfigItemList() = default;
};
class CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate : public Darabonba::Model {
public:
  shared_ptr<bool> checkActivity{};
  shared_ptr<vector<CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreateConfigItemList>> configItemList{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate() {}

  explicit CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkActivity) {
      res["CheckActivity"] = boost::any(*checkActivity);
    }
    if (configItemList) {
      vector<boost::any> temp1;
      for(auto item1:*configItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigItemList"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (m.find("CheckActivity") != m.end() && !m["CheckActivity"].empty()) {
      checkActivity = make_shared<bool>(boost::any_cast<bool>(m["CheckActivity"]));
    }
    if (m.find("ConfigItemList") != m.end() && !m["ConfigItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigItemList"].type()) {
        vector<CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreateConfigItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreateConfigItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configItemList = make_shared<vector<CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreateConfigItemList>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate() = default;
};
class CreateDataSourceRequestCreateCommandDevDataSourceCreate : public Darabonba::Model {
public:
  shared_ptr<CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate> dataSourceCreate{};
  shared_ptr<long> prodDataSourceId{};

  CreateDataSourceRequestCreateCommandDevDataSourceCreate() {}

  explicit CreateDataSourceRequestCreateCommandDevDataSourceCreate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceCreate) {
      res["DataSourceCreate"] = dataSourceCreate ? boost::any(dataSourceCreate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (prodDataSourceId) {
      res["ProdDataSourceId"] = boost::any(*prodDataSourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceCreate") != m.end() && !m["DataSourceCreate"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSourceCreate"].type()) {
        CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSourceCreate"]));
        dataSourceCreate = make_shared<CreateDataSourceRequestCreateCommandDevDataSourceCreateDataSourceCreate>(model1);
      }
    }
    if (m.find("ProdDataSourceId") != m.end() && !m["ProdDataSourceId"].empty()) {
      prodDataSourceId = make_shared<long>(boost::any_cast<long>(m["ProdDataSourceId"]));
    }
  }


  virtual ~CreateDataSourceRequestCreateCommandDevDataSourceCreate() = default;
};
class CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList() {}

  explicit CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList() = default;
};
class CreateDataSourceRequestCreateCommandProdDataSourceCreate : public Darabonba::Model {
public:
  shared_ptr<bool> checkActivity{};
  shared_ptr<vector<CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList>> configItemList{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateDataSourceRequestCreateCommandProdDataSourceCreate() {}

  explicit CreateDataSourceRequestCreateCommandProdDataSourceCreate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkActivity) {
      res["CheckActivity"] = boost::any(*checkActivity);
    }
    if (configItemList) {
      vector<boost::any> temp1;
      for(auto item1:*configItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigItemList"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (m.find("CheckActivity") != m.end() && !m["CheckActivity"].empty()) {
      checkActivity = make_shared<bool>(boost::any_cast<bool>(m["CheckActivity"]));
    }
    if (m.find("ConfigItemList") != m.end() && !m["ConfigItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigItemList"].type()) {
        vector<CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configItemList = make_shared<vector<CreateDataSourceRequestCreateCommandProdDataSourceCreateConfigItemList>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateDataSourceRequestCreateCommandProdDataSourceCreate() = default;
};
class CreateDataSourceRequestCreateCommand : public Darabonba::Model {
public:
  shared_ptr<CreateDataSourceRequestCreateCommandDevDataSourceCreate> devDataSourceCreate{};
  shared_ptr<CreateDataSourceRequestCreateCommandProdDataSourceCreate> prodDataSourceCreate{};

  CreateDataSourceRequestCreateCommand() {}

  explicit CreateDataSourceRequestCreateCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (devDataSourceCreate) {
      res["DevDataSourceCreate"] = devDataSourceCreate ? boost::any(devDataSourceCreate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (prodDataSourceCreate) {
      res["ProdDataSourceCreate"] = prodDataSourceCreate ? boost::any(prodDataSourceCreate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DevDataSourceCreate") != m.end() && !m["DevDataSourceCreate"].empty()) {
      if (typeid(map<string, boost::any>) == m["DevDataSourceCreate"].type()) {
        CreateDataSourceRequestCreateCommandDevDataSourceCreate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DevDataSourceCreate"]));
        devDataSourceCreate = make_shared<CreateDataSourceRequestCreateCommandDevDataSourceCreate>(model1);
      }
    }
    if (m.find("ProdDataSourceCreate") != m.end() && !m["ProdDataSourceCreate"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProdDataSourceCreate"].type()) {
        CreateDataSourceRequestCreateCommandProdDataSourceCreate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProdDataSourceCreate"]));
        prodDataSourceCreate = make_shared<CreateDataSourceRequestCreateCommandProdDataSourceCreate>(model1);
      }
    }
  }


  virtual ~CreateDataSourceRequestCreateCommand() = default;
};
class CreateDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<CreateDataSourceRequestCreateCommand> createCommand{};
  shared_ptr<long> opTenantId{};

  CreateDataSourceRequest() {}

  explicit CreateDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createCommand) {
      res["CreateCommand"] = createCommand ? boost::any(createCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateCommand") != m.end() && !m["CreateCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateCommand"].type()) {
        CreateDataSourceRequestCreateCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateCommand"]));
        createCommand = make_shared<CreateDataSourceRequestCreateCommand>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CreateDataSourceRequest() = default;
};
class CreateDataSourceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> createCommandShrink{};
  shared_ptr<long> opTenantId{};

  CreateDataSourceShrinkRequest() {}

  explicit CreateDataSourceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createCommandShrink) {
      res["CreateCommand"] = boost::any(*createCommandShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateCommand") != m.end() && !m["CreateCommand"].empty()) {
      createCommandShrink = make_shared<string>(boost::any_cast<string>(m["CreateCommand"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CreateDataSourceShrinkRequest() = default;
};
class CreateDataSourceResponseBodyCreateResult : public Darabonba::Model {
public:
  shared_ptr<long> devDataSourceId{};
  shared_ptr<long> prodDataSourceId{};

  CreateDataSourceResponseBodyCreateResult() {}

  explicit CreateDataSourceResponseBodyCreateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (devDataSourceId) {
      res["DevDataSourceId"] = boost::any(*devDataSourceId);
    }
    if (prodDataSourceId) {
      res["ProdDataSourceId"] = boost::any(*prodDataSourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DevDataSourceId") != m.end() && !m["DevDataSourceId"].empty()) {
      devDataSourceId = make_shared<long>(boost::any_cast<long>(m["DevDataSourceId"]));
    }
    if (m.find("ProdDataSourceId") != m.end() && !m["ProdDataSourceId"].empty()) {
      prodDataSourceId = make_shared<long>(boost::any_cast<long>(m["ProdDataSourceId"]));
    }
  }


  virtual ~CreateDataSourceResponseBodyCreateResult() = default;
};
class CreateDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateDataSourceResponseBodyCreateResult> createResult{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDataSourceResponseBody() {}

  explicit CreateDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (createResult) {
      res["CreateResult"] = createResult ? boost::any(createResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("CreateResult") != m.end() && !m["CreateResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateResult"].type()) {
        CreateDataSourceResponseBodyCreateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateResult"]));
        createResult = make_shared<CreateDataSourceResponseBodyCreateResult>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~CreateDataSourceResponseBody() = default;
};
class CreateDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDataSourceResponseBody> body{};

  CreateDataSourceResponse() {}

  explicit CreateDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataSourceResponse() = default;
};
class CreateDirectoryRequestCreateCommand : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> directory{};
  shared_ptr<string> name{};
  shared_ptr<long> projectId{};

  CreateDirectoryRequestCreateCommand() {}

  explicit CreateDirectoryRequestCreateCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (directory) {
      res["Directory"] = boost::any(*directory);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      directory = make_shared<string>(boost::any_cast<string>(m["Directory"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~CreateDirectoryRequestCreateCommand() = default;
};
class CreateDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<CreateDirectoryRequestCreateCommand> createCommand{};
  shared_ptr<long> opTenantId{};

  CreateDirectoryRequest() {}

  explicit CreateDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createCommand) {
      res["CreateCommand"] = createCommand ? boost::any(createCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateCommand") != m.end() && !m["CreateCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateCommand"].type()) {
        CreateDirectoryRequestCreateCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateCommand"]));
        createCommand = make_shared<CreateDirectoryRequestCreateCommand>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CreateDirectoryRequest() = default;
};
class CreateDirectoryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> createCommandShrink{};
  shared_ptr<long> opTenantId{};

  CreateDirectoryShrinkRequest() {}

  explicit CreateDirectoryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createCommandShrink) {
      res["CreateCommand"] = boost::any(*createCommandShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateCommand") != m.end() && !m["CreateCommand"].empty()) {
      createCommandShrink = make_shared<string>(boost::any_cast<string>(m["CreateCommand"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CreateDirectoryShrinkRequest() = default;
};
class CreateDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> fileId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDirectoryResponseBody() {}

  explicit CreateDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["FileId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
class CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fieldIdList{};
  shared_ptr<string> id{};

  CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList() {}

  explicit CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldIdList) {
      res["FieldIdList"] = boost::any(*fieldIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldIdList") != m.end() && !m["FieldIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList() = default;
};
class CreateNodeSupplementRequestCreateCommandFilterList : public Darabonba::Model {
public:
  shared_ptr<bool> exclude{};
  shared_ptr<string> key{};
  shared_ptr<vector<string>> valueList{};

  CreateNodeSupplementRequestCreateCommandFilterList() {}

  explicit CreateNodeSupplementRequestCreateCommandFilterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (valueList) {
      res["ValueList"] = boost::any(*valueList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<bool>(boost::any_cast<bool>(m["Exclude"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ValueList") != m.end() && !m["ValueList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ValueList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ValueList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      valueList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateNodeSupplementRequestCreateCommandFilterList() = default;
};
class CreateNodeSupplementRequestCreateCommandGlobalParamList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateNodeSupplementRequestCreateCommandGlobalParamList() {}

  explicit CreateNodeSupplementRequestCreateCommandGlobalParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateNodeSupplementRequestCreateCommandGlobalParamList() = default;
};
class CreateNodeSupplementRequestCreateCommandNodeIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fieldIdList{};
  shared_ptr<string> id{};

  CreateNodeSupplementRequestCreateCommandNodeIdList() {}

  explicit CreateNodeSupplementRequestCreateCommandNodeIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldIdList) {
      res["FieldIdList"] = boost::any(*fieldIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldIdList") != m.end() && !m["FieldIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateNodeSupplementRequestCreateCommandNodeIdList() = default;
};
class CreateNodeSupplementRequestCreateCommandNodeParamsListParamList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateNodeSupplementRequestCreateCommandNodeParamsListParamList() {}

  explicit CreateNodeSupplementRequestCreateCommandNodeParamsListParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateNodeSupplementRequestCreateCommandNodeParamsListParamList() = default;
};
class CreateNodeSupplementRequestCreateCommandNodeParamsList : public Darabonba::Model {
public:
  shared_ptr<string> nodeId{};
  shared_ptr<vector<CreateNodeSupplementRequestCreateCommandNodeParamsListParamList>> paramList{};

  CreateNodeSupplementRequestCreateCommandNodeParamsList() {}

  explicit CreateNodeSupplementRequestCreateCommandNodeParamsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (paramList) {
      vector<boost::any> temp1;
      for(auto item1:*paramList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("ParamList") != m.end() && !m["ParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamList"].type()) {
        vector<CreateNodeSupplementRequestCreateCommandNodeParamsListParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateNodeSupplementRequestCreateCommandNodeParamsListParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramList = make_shared<vector<CreateNodeSupplementRequestCreateCommandNodeParamsListParamList>>(expect1);
      }
    }
  }


  virtual ~CreateNodeSupplementRequestCreateCommandNodeParamsList() = default;
};
class CreateNodeSupplementRequestCreateCommand : public Darabonba::Model {
public:
  shared_ptr<bool> containAllDownStream{};
  shared_ptr<vector<CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList>> downStreamNodeIdList{};
  shared_ptr<string> endBizDate{};
  shared_ptr<vector<CreateNodeSupplementRequestCreateCommandFilterList>> filterList{};
  shared_ptr<vector<CreateNodeSupplementRequestCreateCommandGlobalParamList>> globalParamList{};
  shared_ptr<string> maxDueTime{};
  shared_ptr<string> minDueTime{};
  shared_ptr<string> name{};
  shared_ptr<vector<CreateNodeSupplementRequestCreateCommandNodeIdList>> nodeIdList{};
  shared_ptr<vector<CreateNodeSupplementRequestCreateCommandNodeParamsList>> nodeParamsList{};
  shared_ptr<long> parallelism{};
  shared_ptr<long> projectId{};
  shared_ptr<string> startBizDate{};

  CreateNodeSupplementRequestCreateCommand() {}

  explicit CreateNodeSupplementRequestCreateCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containAllDownStream) {
      res["ContainAllDownStream"] = boost::any(*containAllDownStream);
    }
    if (downStreamNodeIdList) {
      vector<boost::any> temp1;
      for(auto item1:*downStreamNodeIdList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DownStreamNodeIdList"] = boost::any(temp1);
    }
    if (endBizDate) {
      res["EndBizDate"] = boost::any(*endBizDate);
    }
    if (filterList) {
      vector<boost::any> temp1;
      for(auto item1:*filterList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FilterList"] = boost::any(temp1);
    }
    if (globalParamList) {
      vector<boost::any> temp1;
      for(auto item1:*globalParamList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GlobalParamList"] = boost::any(temp1);
    }
    if (maxDueTime) {
      res["MaxDueTime"] = boost::any(*maxDueTime);
    }
    if (minDueTime) {
      res["MinDueTime"] = boost::any(*minDueTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodeIdList) {
      vector<boost::any> temp1;
      for(auto item1:*nodeIdList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeIdList"] = boost::any(temp1);
    }
    if (nodeParamsList) {
      vector<boost::any> temp1;
      for(auto item1:*nodeParamsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeParamsList"] = boost::any(temp1);
    }
    if (parallelism) {
      res["Parallelism"] = boost::any(*parallelism);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (startBizDate) {
      res["StartBizDate"] = boost::any(*startBizDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainAllDownStream") != m.end() && !m["ContainAllDownStream"].empty()) {
      containAllDownStream = make_shared<bool>(boost::any_cast<bool>(m["ContainAllDownStream"]));
    }
    if (m.find("DownStreamNodeIdList") != m.end() && !m["DownStreamNodeIdList"].empty()) {
      if (typeid(vector<boost::any>) == m["DownStreamNodeIdList"].type()) {
        vector<CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DownStreamNodeIdList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        downStreamNodeIdList = make_shared<vector<CreateNodeSupplementRequestCreateCommandDownStreamNodeIdList>>(expect1);
      }
    }
    if (m.find("EndBizDate") != m.end() && !m["EndBizDate"].empty()) {
      endBizDate = make_shared<string>(boost::any_cast<string>(m["EndBizDate"]));
    }
    if (m.find("FilterList") != m.end() && !m["FilterList"].empty()) {
      if (typeid(vector<boost::any>) == m["FilterList"].type()) {
        vector<CreateNodeSupplementRequestCreateCommandFilterList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FilterList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateNodeSupplementRequestCreateCommandFilterList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filterList = make_shared<vector<CreateNodeSupplementRequestCreateCommandFilterList>>(expect1);
      }
    }
    if (m.find("GlobalParamList") != m.end() && !m["GlobalParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["GlobalParamList"].type()) {
        vector<CreateNodeSupplementRequestCreateCommandGlobalParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GlobalParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateNodeSupplementRequestCreateCommandGlobalParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        globalParamList = make_shared<vector<CreateNodeSupplementRequestCreateCommandGlobalParamList>>(expect1);
      }
    }
    if (m.find("MaxDueTime") != m.end() && !m["MaxDueTime"].empty()) {
      maxDueTime = make_shared<string>(boost::any_cast<string>(m["MaxDueTime"]));
    }
    if (m.find("MinDueTime") != m.end() && !m["MinDueTime"].empty()) {
      minDueTime = make_shared<string>(boost::any_cast<string>(m["MinDueTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodeIdList") != m.end() && !m["NodeIdList"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeIdList"].type()) {
        vector<CreateNodeSupplementRequestCreateCommandNodeIdList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeIdList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateNodeSupplementRequestCreateCommandNodeIdList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeIdList = make_shared<vector<CreateNodeSupplementRequestCreateCommandNodeIdList>>(expect1);
      }
    }
    if (m.find("NodeParamsList") != m.end() && !m["NodeParamsList"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeParamsList"].type()) {
        vector<CreateNodeSupplementRequestCreateCommandNodeParamsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeParamsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateNodeSupplementRequestCreateCommandNodeParamsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeParamsList = make_shared<vector<CreateNodeSupplementRequestCreateCommandNodeParamsList>>(expect1);
      }
    }
    if (m.find("Parallelism") != m.end() && !m["Parallelism"].empty()) {
      parallelism = make_shared<long>(boost::any_cast<long>(m["Parallelism"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("StartBizDate") != m.end() && !m["StartBizDate"].empty()) {
      startBizDate = make_shared<string>(boost::any_cast<string>(m["StartBizDate"]));
    }
  }


  virtual ~CreateNodeSupplementRequestCreateCommand() = default;
};
class CreateNodeSupplementRequest : public Darabonba::Model {
public:
  shared_ptr<CreateNodeSupplementRequestCreateCommand> createCommand{};
  shared_ptr<string> env{};
  shared_ptr<long> opTenantId{};

  CreateNodeSupplementRequest() {}

  explicit CreateNodeSupplementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createCommand) {
      res["CreateCommand"] = createCommand ? boost::any(createCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateCommand") != m.end() && !m["CreateCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateCommand"].type()) {
        CreateNodeSupplementRequestCreateCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateCommand"]));
        createCommand = make_shared<CreateNodeSupplementRequestCreateCommand>(model1);
      }
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CreateNodeSupplementRequest() = default;
};
class CreateNodeSupplementShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> createCommandShrink{};
  shared_ptr<string> env{};
  shared_ptr<long> opTenantId{};

  CreateNodeSupplementShrinkRequest() {}

  explicit CreateNodeSupplementShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createCommandShrink) {
      res["CreateCommand"] = boost::any(*createCommandShrink);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateCommand") != m.end() && !m["CreateCommand"].empty()) {
      createCommandShrink = make_shared<string>(boost::any_cast<string>(m["CreateCommand"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CreateNodeSupplementShrinkRequest() = default;
};
class CreateNodeSupplementResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> submitId{};
  shared_ptr<bool> success{};

  CreateNodeSupplementResponseBody() {}

  explicit CreateNodeSupplementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (submitId) {
      res["SubmitId"] = boost::any(*submitId);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubmitId") != m.end() && !m["SubmitId"].empty()) {
      submitId = make_shared<string>(boost::any_cast<string>(m["SubmitId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateNodeSupplementResponseBody() = default;
};
class CreateNodeSupplementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNodeSupplementResponseBody> body{};

  CreateNodeSupplementResponse() {}

  explicit CreateNodeSupplementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateNodeSupplementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNodeSupplementResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNodeSupplementResponse() = default;
};
class CreateUserGroupRequestCreateCommand : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<vector<string>> adminUserIdList{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  CreateUserGroupRequestCreateCommand() {}

  explicit CreateUserGroupRequestCreateCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (adminUserIdList) {
      res["AdminUserIdList"] = boost::any(*adminUserIdList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("AdminUserIdList") != m.end() && !m["AdminUserIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AdminUserIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AdminUserIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      adminUserIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateUserGroupRequestCreateCommand() = default;
};
class CreateUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<CreateUserGroupRequestCreateCommand> createCommand{};
  shared_ptr<long> opTenantId{};

  CreateUserGroupRequest() {}

  explicit CreateUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createCommand) {
      res["CreateCommand"] = createCommand ? boost::any(createCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateCommand") != m.end() && !m["CreateCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateCommand"].type()) {
        CreateUserGroupRequestCreateCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateCommand"]));
        createCommand = make_shared<CreateUserGroupRequestCreateCommand>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CreateUserGroupRequest() = default;
};
class CreateUserGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> createCommandShrink{};
  shared_ptr<long> opTenantId{};

  CreateUserGroupShrinkRequest() {}

  explicit CreateUserGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createCommandShrink) {
      res["CreateCommand"] = boost::any(*createCommandShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateCommand") != m.end() && !m["CreateCommand"].empty()) {
      createCommandShrink = make_shared<string>(boost::any_cast<string>(m["CreateCommand"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~CreateUserGroupShrinkRequest() = default;
};
class CreateUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> userGroupId{};

  CreateUserGroupResponseBody() {}

  explicit CreateUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
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
class DeleteAdHocFileRequest : public Darabonba::Model {
public:
  shared_ptr<long> fileId{};
  shared_ptr<long> opTenantId{};
  shared_ptr<long> projectId{};

  DeleteAdHocFileRequest() {}

  explicit DeleteAdHocFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["FileId"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~DeleteAdHocFileRequest() = default;
};
class DeleteAdHocFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAdHocFileResponseBody() {}

  explicit DeleteAdHocFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DeleteAdHocFileResponseBody() = default;
};
class DeleteAdHocFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAdHocFileResponseBody> body{};

  DeleteAdHocFileResponse() {}

  explicit DeleteAdHocFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAdHocFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAdHocFileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAdHocFileResponse() = default;
};
class DeleteDataSourceRequestDeleteCommand : public Darabonba::Model {
public:
  shared_ptr<string> mode{};
  shared_ptr<long> prodDataSourceId{};

  DeleteDataSourceRequestDeleteCommand() {}

  explicit DeleteDataSourceRequestDeleteCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (prodDataSourceId) {
      res["ProdDataSourceId"] = boost::any(*prodDataSourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("ProdDataSourceId") != m.end() && !m["ProdDataSourceId"].empty()) {
      prodDataSourceId = make_shared<long>(boost::any_cast<long>(m["ProdDataSourceId"]));
    }
  }


  virtual ~DeleteDataSourceRequestDeleteCommand() = default;
};
class DeleteDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<DeleteDataSourceRequestDeleteCommand> deleteCommand{};
  shared_ptr<long> opTenantId{};

  DeleteDataSourceRequest() {}

  explicit DeleteDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteCommand) {
      res["DeleteCommand"] = deleteCommand ? boost::any(deleteCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteCommand") != m.end() && !m["DeleteCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeleteCommand"].type()) {
        DeleteDataSourceRequestDeleteCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeleteCommand"]));
        deleteCommand = make_shared<DeleteDataSourceRequestDeleteCommand>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~DeleteDataSourceRequest() = default;
};
class DeleteDataSourceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> deleteCommandShrink{};
  shared_ptr<long> opTenantId{};

  DeleteDataSourceShrinkRequest() {}

  explicit DeleteDataSourceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteCommandShrink) {
      res["DeleteCommand"] = boost::any(*deleteCommandShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteCommand") != m.end() && !m["DeleteCommand"].empty()) {
      deleteCommandShrink = make_shared<string>(boost::any_cast<string>(m["DeleteCommand"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~DeleteDataSourceShrinkRequest() = default;
};
class DeleteDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDataSourceResponseBody() {}

  explicit DeleteDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DeleteDataSourceResponseBody() = default;
};
class DeleteDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDataSourceResponseBody> body{};

  DeleteDataSourceResponse() {}

  explicit DeleteDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataSourceResponse() = default;
};
class DeleteDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> fileId{};
  shared_ptr<long> opTenantId{};
  shared_ptr<long> projectId{};

  DeleteDirectoryRequest() {}

  explicit DeleteDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["FileId"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~DeleteDirectoryRequest() = default;
};
class DeleteDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDirectoryResponseBody() {}

  explicit DeleteDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
class DeleteUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<string> userGroupId{};

  DeleteUserGroupRequest() {}

  explicit DeleteUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~DeleteUserGroupRequest() = default;
};
class DeleteUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteUserGroupResponseBody() {}

  explicit DeleteUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
class ExecuteManualNodeRequestExecuteCommandParamList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ExecuteManualNodeRequestExecuteCommandParamList() {}

  explicit ExecuteManualNodeRequestExecuteCommandParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExecuteManualNodeRequestExecuteCommandParamList() = default;
};
class ExecuteManualNodeRequestExecuteCommand : public Darabonba::Model {
public:
  shared_ptr<string> endBizDate{};
  shared_ptr<string> flowName{};
  shared_ptr<string> nodeId{};
  shared_ptr<vector<ExecuteManualNodeRequestExecuteCommandParamList>> paramList{};
  shared_ptr<long> projectId{};
  shared_ptr<string> startBizDate{};

  ExecuteManualNodeRequestExecuteCommand() {}

  explicit ExecuteManualNodeRequestExecuteCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endBizDate) {
      res["EndBizDate"] = boost::any(*endBizDate);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (paramList) {
      vector<boost::any> temp1;
      for(auto item1:*paramList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamList"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (startBizDate) {
      res["StartBizDate"] = boost::any(*startBizDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndBizDate") != m.end() && !m["EndBizDate"].empty()) {
      endBizDate = make_shared<string>(boost::any_cast<string>(m["EndBizDate"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("ParamList") != m.end() && !m["ParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamList"].type()) {
        vector<ExecuteManualNodeRequestExecuteCommandParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteManualNodeRequestExecuteCommandParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramList = make_shared<vector<ExecuteManualNodeRequestExecuteCommandParamList>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("StartBizDate") != m.end() && !m["StartBizDate"].empty()) {
      startBizDate = make_shared<string>(boost::any_cast<string>(m["StartBizDate"]));
    }
  }


  virtual ~ExecuteManualNodeRequestExecuteCommand() = default;
};
class ExecuteManualNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<ExecuteManualNodeRequestExecuteCommand> executeCommand{};
  shared_ptr<long> opTenantId{};

  ExecuteManualNodeRequest() {}

  explicit ExecuteManualNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (executeCommand) {
      res["ExecuteCommand"] = executeCommand ? boost::any(executeCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("ExecuteCommand") != m.end() && !m["ExecuteCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExecuteCommand"].type()) {
        ExecuteManualNodeRequestExecuteCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExecuteCommand"]));
        executeCommand = make_shared<ExecuteManualNodeRequestExecuteCommand>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ExecuteManualNodeRequest() = default;
};
class ExecuteManualNodeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<string> executeCommandShrink{};
  shared_ptr<long> opTenantId{};

  ExecuteManualNodeShrinkRequest() {}

  explicit ExecuteManualNodeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (executeCommandShrink) {
      res["ExecuteCommand"] = boost::any(*executeCommandShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("ExecuteCommand") != m.end() && !m["ExecuteCommand"].empty()) {
      executeCommandShrink = make_shared<string>(boost::any_cast<string>(m["ExecuteCommand"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ExecuteManualNodeShrinkRequest() = default;
};
class ExecuteManualNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> flowId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteManualNodeResponseBody() {}

  explicit ExecuteManualNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ExecuteManualNodeResponseBody() = default;
};
class ExecuteManualNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteManualNodeResponseBody> body{};

  ExecuteManualNodeResponse() {}

  explicit ExecuteManualNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExecuteManualNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteManualNodeResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteManualNodeResponse() = default;
};
class FixDataRequestFixDataCommandDownStreamInstanceIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fieldInstanceIdList{};
  shared_ptr<string> id{};

  FixDataRequestFixDataCommandDownStreamInstanceIdList() {}

  explicit FixDataRequestFixDataCommandDownStreamInstanceIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldInstanceIdList) {
      res["FieldInstanceIdList"] = boost::any(*fieldInstanceIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldInstanceIdList") != m.end() && !m["FieldInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldInstanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~FixDataRequestFixDataCommandDownStreamInstanceIdList() = default;
};
class FixDataRequestFixDataCommandRootInstanceId : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fieldInstanceIdList{};
  shared_ptr<string> id{};

  FixDataRequestFixDataCommandRootInstanceId() {}

  explicit FixDataRequestFixDataCommandRootInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldInstanceIdList) {
      res["FieldInstanceIdList"] = boost::any(*fieldInstanceIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldInstanceIdList") != m.end() && !m["FieldInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldInstanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~FixDataRequestFixDataCommandRootInstanceId() = default;
};
class FixDataRequestFixDataCommand : public Darabonba::Model {
public:
  shared_ptr<bool> containRootInstance{};
  shared_ptr<vector<FixDataRequestFixDataCommandDownStreamInstanceIdList>> downStreamInstanceIdList{};
  shared_ptr<string> downstreamRange{};
  shared_ptr<bool> forceRerun{};
  shared_ptr<long> projectId{};
  shared_ptr<FixDataRequestFixDataCommandRootInstanceId> rootInstanceId{};

  FixDataRequestFixDataCommand() {}

  explicit FixDataRequestFixDataCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containRootInstance) {
      res["ContainRootInstance"] = boost::any(*containRootInstance);
    }
    if (downStreamInstanceIdList) {
      vector<boost::any> temp1;
      for(auto item1:*downStreamInstanceIdList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DownStreamInstanceIdList"] = boost::any(temp1);
    }
    if (downstreamRange) {
      res["DownstreamRange"] = boost::any(*downstreamRange);
    }
    if (forceRerun) {
      res["ForceRerun"] = boost::any(*forceRerun);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (rootInstanceId) {
      res["RootInstanceId"] = rootInstanceId ? boost::any(rootInstanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainRootInstance") != m.end() && !m["ContainRootInstance"].empty()) {
      containRootInstance = make_shared<bool>(boost::any_cast<bool>(m["ContainRootInstance"]));
    }
    if (m.find("DownStreamInstanceIdList") != m.end() && !m["DownStreamInstanceIdList"].empty()) {
      if (typeid(vector<boost::any>) == m["DownStreamInstanceIdList"].type()) {
        vector<FixDataRequestFixDataCommandDownStreamInstanceIdList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DownStreamInstanceIdList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FixDataRequestFixDataCommandDownStreamInstanceIdList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        downStreamInstanceIdList = make_shared<vector<FixDataRequestFixDataCommandDownStreamInstanceIdList>>(expect1);
      }
    }
    if (m.find("DownstreamRange") != m.end() && !m["DownstreamRange"].empty()) {
      downstreamRange = make_shared<string>(boost::any_cast<string>(m["DownstreamRange"]));
    }
    if (m.find("ForceRerun") != m.end() && !m["ForceRerun"].empty()) {
      forceRerun = make_shared<bool>(boost::any_cast<bool>(m["ForceRerun"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("RootInstanceId") != m.end() && !m["RootInstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["RootInstanceId"].type()) {
        FixDataRequestFixDataCommandRootInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RootInstanceId"]));
        rootInstanceId = make_shared<FixDataRequestFixDataCommandRootInstanceId>(model1);
      }
    }
  }


  virtual ~FixDataRequestFixDataCommand() = default;
};
class FixDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<FixDataRequestFixDataCommand> fixDataCommand{};
  shared_ptr<long> opTenantId{};

  FixDataRequest() {}

  explicit FixDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (fixDataCommand) {
      res["FixDataCommand"] = fixDataCommand ? boost::any(fixDataCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("FixDataCommand") != m.end() && !m["FixDataCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["FixDataCommand"].type()) {
        FixDataRequestFixDataCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FixDataCommand"]));
        fixDataCommand = make_shared<FixDataRequestFixDataCommand>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~FixDataRequest() = default;
};
class FixDataShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<string> fixDataCommandShrink{};
  shared_ptr<long> opTenantId{};

  FixDataShrinkRequest() {}

  explicit FixDataShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (fixDataCommandShrink) {
      res["FixDataCommand"] = boost::any(*fixDataCommandShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("FixDataCommand") != m.end() && !m["FixDataCommand"].empty()) {
      fixDataCommandShrink = make_shared<string>(boost::any_cast<string>(m["FixDataCommand"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~FixDataShrinkRequest() = default;
};
class FixDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> submitId{};
  shared_ptr<bool> success{};

  FixDataResponseBody() {}

  explicit FixDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (submitId) {
      res["SubmitId"] = boost::any(*submitId);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubmitId") != m.end() && !m["SubmitId"].empty()) {
      submitId = make_shared<string>(boost::any_cast<string>(m["SubmitId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~FixDataResponseBody() = default;
};
class FixDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FixDataResponseBody> body{};

  FixDataResponse() {}

  explicit FixDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        FixDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FixDataResponseBody>(model1);
      }
    }
  }


  virtual ~FixDataResponse() = default;
};
class GetAdHocFileRequest : public Darabonba::Model {
public:
  shared_ptr<long> fileId{};
  shared_ptr<long> opTenantId{};
  shared_ptr<long> projectId{};

  GetAdHocFileRequest() {}

  explicit GetAdHocFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["FileId"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~GetAdHocFileRequest() = default;
};
class GetAdHocFileResponseBodyFileInfo : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> creator{};
  shared_ptr<string> directory{};
  shared_ptr<long> id{};
  shared_ptr<string> lastModifier{};
  shared_ptr<string> name{};
  shared_ptr<long> projectId{};

  GetAdHocFileResponseBodyFileInfo() {}

  explicit GetAdHocFileResponseBodyFileInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (directory) {
      res["Directory"] = boost::any(*directory);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifier) {
      res["LastModifier"] = boost::any(*lastModifier);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      directory = make_shared<string>(boost::any_cast<string>(m["Directory"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LastModifier") != m.end() && !m["LastModifier"].empty()) {
      lastModifier = make_shared<string>(boost::any_cast<string>(m["LastModifier"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~GetAdHocFileResponseBodyFileInfo() = default;
};
class GetAdHocFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetAdHocFileResponseBodyFileInfo> fileInfo{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAdHocFileResponseBody() {}

  explicit GetAdHocFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (fileInfo) {
      res["FileInfo"] = fileInfo ? boost::any(fileInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("FileInfo") != m.end() && !m["FileInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileInfo"].type()) {
        GetAdHocFileResponseBodyFileInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileInfo"]));
        fileInfo = make_shared<GetAdHocFileResponseBodyFileInfo>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetAdHocFileResponseBody() = default;
};
class GetAdHocFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAdHocFileResponseBody> body{};

  GetAdHocFileResponse() {}

  explicit GetAdHocFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAdHocFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAdHocFileResponseBody>(model1);
      }
    }
  }


  virtual ~GetAdHocFileResponse() = default;
};
class GetDevObjectDependencyRequest : public Darabonba::Model {
public:
  shared_ptr<string> objectFrom{};
  shared_ptr<string> objectId{};
  shared_ptr<string> objectType{};
  shared_ptr<long> opTenantId{};
  shared_ptr<long> projectId{};

  GetDevObjectDependencyRequest() {}

  explicit GetDevObjectDependencyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectFrom) {
      res["ObjectFrom"] = boost::any(*objectFrom);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ObjectFrom") != m.end() && !m["ObjectFrom"].empty()) {
      objectFrom = make_shared<string>(boost::any_cast<string>(m["ObjectFrom"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~GetDevObjectDependencyRequest() = default;
};
class GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod : public Darabonba::Model {
public:
  shared_ptr<long> periodOffset{};
  shared_ptr<string> periodType{};

  GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod() {}

  explicit GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (periodOffset) {
      res["PeriodOffset"] = boost::any(*periodOffset);
    }
    if (periodType) {
      res["PeriodType"] = boost::any(*periodType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeriodOffset") != m.end() && !m["PeriodOffset"].empty()) {
      periodOffset = make_shared<long>(boost::any_cast<long>(m["PeriodOffset"]));
    }
    if (m.find("PeriodType") != m.end() && !m["PeriodType"].empty()) {
      periodType = make_shared<string>(boost::any_cast<string>(m["PeriodType"]));
    }
  }


  virtual ~GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod() = default;
};
class GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> description{};
  shared_ptr<string> key{};

  GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList() {}

  explicit GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList() = default;
};
class GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList() {}

  explicit GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList() = default;
};
class GetDevObjectDependencyResponseBodyDevObjectDependencyList : public Darabonba::Model {
public:
  shared_ptr<bool> autoParse{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizUnitId{};
  shared_ptr<string> bizUnitName{};
  shared_ptr<string> cronExpression{};
  shared_ptr<bool> customCronExpression{};
  shared_ptr<vector<string>> dependFieldList{};
  shared_ptr<GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod> dependencyPeriod{};
  shared_ptr<string> dependencyStrategy{};
  shared_ptr<bool> dimMidNode{};
  shared_ptr<vector<string>> effectFieldList{};
  shared_ptr<string> externalBizInfo{};
  shared_ptr<bool> manuallyAdd{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeName{};
  shared_ptr<string> nodeOutputName{};
  shared_ptr<string> nodeOutputTableName{};
  shared_ptr<string> nodeType{};
  shared_ptr<vector<GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList>> outputContextParamList{};
  shared_ptr<vector<GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList>> ownerList{};
  shared_ptr<long> periodDiff{};
  shared_ptr<long> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> scheduleType{};
  shared_ptr<bool> selfDepend{};
  shared_ptr<string> subBizType{};
  shared_ptr<bool> valid{};

  GetDevObjectDependencyResponseBodyDevObjectDependencyList() {}

  explicit GetDevObjectDependencyResponseBodyDevObjectDependencyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoParse) {
      res["AutoParse"] = boost::any(*autoParse);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizUnitId) {
      res["BizUnitId"] = boost::any(*bizUnitId);
    }
    if (bizUnitName) {
      res["BizUnitName"] = boost::any(*bizUnitName);
    }
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    if (customCronExpression) {
      res["CustomCronExpression"] = boost::any(*customCronExpression);
    }
    if (dependFieldList) {
      res["DependFieldList"] = boost::any(*dependFieldList);
    }
    if (dependencyPeriod) {
      res["DependencyPeriod"] = dependencyPeriod ? boost::any(dependencyPeriod->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dependencyStrategy) {
      res["DependencyStrategy"] = boost::any(*dependencyStrategy);
    }
    if (dimMidNode) {
      res["DimMidNode"] = boost::any(*dimMidNode);
    }
    if (effectFieldList) {
      res["EffectFieldList"] = boost::any(*effectFieldList);
    }
    if (externalBizInfo) {
      res["ExternalBizInfo"] = boost::any(*externalBizInfo);
    }
    if (manuallyAdd) {
      res["ManuallyAdd"] = boost::any(*manuallyAdd);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (nodeOutputName) {
      res["NodeOutputName"] = boost::any(*nodeOutputName);
    }
    if (nodeOutputTableName) {
      res["NodeOutputTableName"] = boost::any(*nodeOutputTableName);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (outputContextParamList) {
      vector<boost::any> temp1;
      for(auto item1:*outputContextParamList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OutputContextParamList"] = boost::any(temp1);
    }
    if (ownerList) {
      vector<boost::any> temp1;
      for(auto item1:*ownerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OwnerList"] = boost::any(temp1);
    }
    if (periodDiff) {
      res["PeriodDiff"] = boost::any(*periodDiff);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (selfDepend) {
      res["SelfDepend"] = boost::any(*selfDepend);
    }
    if (subBizType) {
      res["SubBizType"] = boost::any(*subBizType);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoParse") != m.end() && !m["AutoParse"].empty()) {
      autoParse = make_shared<bool>(boost::any_cast<bool>(m["AutoParse"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizUnitId") != m.end() && !m["BizUnitId"].empty()) {
      bizUnitId = make_shared<string>(boost::any_cast<string>(m["BizUnitId"]));
    }
    if (m.find("BizUnitName") != m.end() && !m["BizUnitName"].empty()) {
      bizUnitName = make_shared<string>(boost::any_cast<string>(m["BizUnitName"]));
    }
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
    if (m.find("CustomCronExpression") != m.end() && !m["CustomCronExpression"].empty()) {
      customCronExpression = make_shared<bool>(boost::any_cast<bool>(m["CustomCronExpression"]));
    }
    if (m.find("DependFieldList") != m.end() && !m["DependFieldList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DependFieldList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DependFieldList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dependFieldList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DependencyPeriod") != m.end() && !m["DependencyPeriod"].empty()) {
      if (typeid(map<string, boost::any>) == m["DependencyPeriod"].type()) {
        GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DependencyPeriod"]));
        dependencyPeriod = make_shared<GetDevObjectDependencyResponseBodyDevObjectDependencyListDependencyPeriod>(model1);
      }
    }
    if (m.find("DependencyStrategy") != m.end() && !m["DependencyStrategy"].empty()) {
      dependencyStrategy = make_shared<string>(boost::any_cast<string>(m["DependencyStrategy"]));
    }
    if (m.find("DimMidNode") != m.end() && !m["DimMidNode"].empty()) {
      dimMidNode = make_shared<bool>(boost::any_cast<bool>(m["DimMidNode"]));
    }
    if (m.find("EffectFieldList") != m.end() && !m["EffectFieldList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EffectFieldList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EffectFieldList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      effectFieldList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ExternalBizInfo") != m.end() && !m["ExternalBizInfo"].empty()) {
      externalBizInfo = make_shared<string>(boost::any_cast<string>(m["ExternalBizInfo"]));
    }
    if (m.find("ManuallyAdd") != m.end() && !m["ManuallyAdd"].empty()) {
      manuallyAdd = make_shared<bool>(boost::any_cast<bool>(m["ManuallyAdd"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("NodeOutputName") != m.end() && !m["NodeOutputName"].empty()) {
      nodeOutputName = make_shared<string>(boost::any_cast<string>(m["NodeOutputName"]));
    }
    if (m.find("NodeOutputTableName") != m.end() && !m["NodeOutputTableName"].empty()) {
      nodeOutputTableName = make_shared<string>(boost::any_cast<string>(m["NodeOutputTableName"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("OutputContextParamList") != m.end() && !m["OutputContextParamList"].empty()) {
      if (typeid(vector<boost::any>) == m["OutputContextParamList"].type()) {
        vector<GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OutputContextParamList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outputContextParamList = make_shared<vector<GetDevObjectDependencyResponseBodyDevObjectDependencyListOutputContextParamList>>(expect1);
      }
    }
    if (m.find("OwnerList") != m.end() && !m["OwnerList"].empty()) {
      if (typeid(vector<boost::any>) == m["OwnerList"].type()) {
        vector<GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OwnerList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ownerList = make_shared<vector<GetDevObjectDependencyResponseBodyDevObjectDependencyListOwnerList>>(expect1);
      }
    }
    if (m.find("PeriodDiff") != m.end() && !m["PeriodDiff"].empty()) {
      periodDiff = make_shared<long>(boost::any_cast<long>(m["PeriodDiff"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("SelfDepend") != m.end() && !m["SelfDepend"].empty()) {
      selfDepend = make_shared<bool>(boost::any_cast<bool>(m["SelfDepend"]));
    }
    if (m.find("SubBizType") != m.end() && !m["SubBizType"].empty()) {
      subBizType = make_shared<string>(boost::any_cast<string>(m["SubBizType"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<bool>(boost::any_cast<bool>(m["Valid"]));
    }
  }


  virtual ~GetDevObjectDependencyResponseBodyDevObjectDependencyList() = default;
};
class GetDevObjectDependencyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetDevObjectDependencyResponseBodyDevObjectDependencyList>> devObjectDependencyList{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDevObjectDependencyResponseBody() {}

  explicit GetDevObjectDependencyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (devObjectDependencyList) {
      vector<boost::any> temp1;
      for(auto item1:*devObjectDependencyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DevObjectDependencyList"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("DevObjectDependencyList") != m.end() && !m["DevObjectDependencyList"].empty()) {
      if (typeid(vector<boost::any>) == m["DevObjectDependencyList"].type()) {
        vector<GetDevObjectDependencyResponseBodyDevObjectDependencyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DevObjectDependencyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDevObjectDependencyResponseBodyDevObjectDependencyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        devObjectDependencyList = make_shared<vector<GetDevObjectDependencyResponseBodyDevObjectDependencyList>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetDevObjectDependencyResponseBody() = default;
};
class GetDevObjectDependencyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDevObjectDependencyResponseBody> body{};

  GetDevObjectDependencyResponse() {}

  explicit GetDevObjectDependencyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDevObjectDependencyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDevObjectDependencyResponseBody>(model1);
      }
    }
  }


  virtual ~GetDevObjectDependencyResponse() = default;
};
class GetInstanceDownStreamRequestInstanceGet : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> nodeType{};

  GetInstanceDownStreamRequestInstanceGet() {}

  explicit GetInstanceDownStreamRequestInstanceGet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
  }


  virtual ~GetInstanceDownStreamRequestInstanceGet() = default;
};
class GetInstanceDownStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> downStreamDepth{};
  shared_ptr<string> env{};
  shared_ptr<GetInstanceDownStreamRequestInstanceGet> instanceGet{};
  shared_ptr<long> opTenantId{};
  shared_ptr<string> runStatus{};

  GetInstanceDownStreamRequest() {}

  explicit GetInstanceDownStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downStreamDepth) {
      res["DownStreamDepth"] = boost::any(*downStreamDepth);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (instanceGet) {
      res["InstanceGet"] = instanceGet ? boost::any(instanceGet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (runStatus) {
      res["RunStatus"] = boost::any(*runStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownStreamDepth") != m.end() && !m["DownStreamDepth"].empty()) {
      downStreamDepth = make_shared<long>(boost::any_cast<long>(m["DownStreamDepth"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("InstanceGet") != m.end() && !m["InstanceGet"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceGet"].type()) {
        GetInstanceDownStreamRequestInstanceGet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceGet"]));
        instanceGet = make_shared<GetInstanceDownStreamRequestInstanceGet>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("RunStatus") != m.end() && !m["RunStatus"].empty()) {
      runStatus = make_shared<string>(boost::any_cast<string>(m["RunStatus"]));
    }
  }


  virtual ~GetInstanceDownStreamRequest() = default;
};
class GetInstanceDownStreamShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> downStreamDepth{};
  shared_ptr<string> env{};
  shared_ptr<string> instanceGetShrink{};
  shared_ptr<long> opTenantId{};
  shared_ptr<string> runStatus{};

  GetInstanceDownStreamShrinkRequest() {}

  explicit GetInstanceDownStreamShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downStreamDepth) {
      res["DownStreamDepth"] = boost::any(*downStreamDepth);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (instanceGetShrink) {
      res["InstanceGet"] = boost::any(*instanceGetShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (runStatus) {
      res["RunStatus"] = boost::any(*runStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownStreamDepth") != m.end() && !m["DownStreamDepth"].empty()) {
      downStreamDepth = make_shared<long>(boost::any_cast<long>(m["DownStreamDepth"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("InstanceGet") != m.end() && !m["InstanceGet"].empty()) {
      instanceGetShrink = make_shared<string>(boost::any_cast<string>(m["InstanceGet"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("RunStatus") != m.end() && !m["RunStatus"].empty()) {
      runStatus = make_shared<string>(boost::any_cast<string>(m["RunStatus"]));
    }
  }


  virtual ~GetInstanceDownStreamShrinkRequest() = default;
};
class GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList : public Darabonba::Model {
public:
  shared_ptr<string> fieldInstanceId{};
  shared_ptr<string> runStatus{};
  shared_ptr<string> selectStatus{};

  GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList() {}

  explicit GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldInstanceId) {
      res["FieldInstanceId"] = boost::any(*fieldInstanceId);
    }
    if (runStatus) {
      res["RunStatus"] = boost::any(*runStatus);
    }
    if (selectStatus) {
      res["SelectStatus"] = boost::any(*selectStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldInstanceId") != m.end() && !m["FieldInstanceId"].empty()) {
      fieldInstanceId = make_shared<string>(boost::any_cast<string>(m["FieldInstanceId"]));
    }
    if (m.find("RunStatus") != m.end() && !m["RunStatus"].empty()) {
      runStatus = make_shared<string>(boost::any_cast<string>(m["RunStatus"]));
    }
    if (m.find("SelectStatus") != m.end() && !m["SelectStatus"].empty()) {
      selectStatus = make_shared<string>(boost::any_cast<string>(m["SelectStatus"]));
    }
  }


  virtual ~GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList() = default;
};
class GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo() {}

  explicit GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo() = default;
};
class GetInstanceDownStreamResponseBodyInstanceRelationList : public Darabonba::Model {
public:
  shared_ptr<long> downStreamDepth{};
  shared_ptr<string> extendInfo{};
  shared_ptr<vector<GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList>> fieldInstanceList{};
  shared_ptr<GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo> instanceInfo{};
  shared_ptr<string> runStatus{};
  shared_ptr<string> selectStatus{};
  shared_ptr<string> selectStatusCause{};

  GetInstanceDownStreamResponseBodyInstanceRelationList() {}

  explicit GetInstanceDownStreamResponseBodyInstanceRelationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downStreamDepth) {
      res["DownStreamDepth"] = boost::any(*downStreamDepth);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (fieldInstanceList) {
      vector<boost::any> temp1;
      for(auto item1:*fieldInstanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FieldInstanceList"] = boost::any(temp1);
    }
    if (instanceInfo) {
      res["InstanceInfo"] = instanceInfo ? boost::any(instanceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (runStatus) {
      res["RunStatus"] = boost::any(*runStatus);
    }
    if (selectStatus) {
      res["SelectStatus"] = boost::any(*selectStatus);
    }
    if (selectStatusCause) {
      res["SelectStatusCause"] = boost::any(*selectStatusCause);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownStreamDepth") != m.end() && !m["DownStreamDepth"].empty()) {
      downStreamDepth = make_shared<long>(boost::any_cast<long>(m["DownStreamDepth"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfo = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("FieldInstanceList") != m.end() && !m["FieldInstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["FieldInstanceList"].type()) {
        vector<GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FieldInstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fieldInstanceList = make_shared<vector<GetInstanceDownStreamResponseBodyInstanceRelationListFieldInstanceList>>(expect1);
      }
    }
    if (m.find("InstanceInfo") != m.end() && !m["InstanceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceInfo"].type()) {
        GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceInfo"]));
        instanceInfo = make_shared<GetInstanceDownStreamResponseBodyInstanceRelationListInstanceInfo>(model1);
      }
    }
    if (m.find("RunStatus") != m.end() && !m["RunStatus"].empty()) {
      runStatus = make_shared<string>(boost::any_cast<string>(m["RunStatus"]));
    }
    if (m.find("SelectStatus") != m.end() && !m["SelectStatus"].empty()) {
      selectStatus = make_shared<string>(boost::any_cast<string>(m["SelectStatus"]));
    }
    if (m.find("SelectStatusCause") != m.end() && !m["SelectStatusCause"].empty()) {
      selectStatusCause = make_shared<string>(boost::any_cast<string>(m["SelectStatusCause"]));
    }
  }


  virtual ~GetInstanceDownStreamResponseBodyInstanceRelationList() = default;
};
class GetInstanceDownStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<GetInstanceDownStreamResponseBodyInstanceRelationList>> instanceRelationList{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceDownStreamResponseBody() {}

  explicit GetInstanceDownStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceRelationList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceRelationList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceRelationList"] = boost::any(temp1);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceRelationList") != m.end() && !m["InstanceRelationList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceRelationList"].type()) {
        vector<GetInstanceDownStreamResponseBodyInstanceRelationList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceRelationList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceDownStreamResponseBodyInstanceRelationList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceRelationList = make_shared<vector<GetInstanceDownStreamResponseBodyInstanceRelationList>>(expect1);
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


  virtual ~GetInstanceDownStreamResponseBody() = default;
};
class GetInstanceDownStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceDownStreamResponseBody> body{};

  GetInstanceDownStreamResponse() {}

  explicit GetInstanceDownStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetInstanceDownStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceDownStreamResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceDownStreamResponse() = default;
};
class GetInstanceUpDownStreamRequestInstanceId : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fieldInstanceIdList{};
  shared_ptr<string> id{};

  GetInstanceUpDownStreamRequestInstanceId() {}

  explicit GetInstanceUpDownStreamRequestInstanceId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldInstanceIdList) {
      res["FieldInstanceIdList"] = boost::any(*fieldInstanceIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldInstanceIdList") != m.end() && !m["FieldInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldInstanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetInstanceUpDownStreamRequestInstanceId() = default;
};
class GetInstanceUpDownStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> downStreamDepth{};
  shared_ptr<string> env{};
  shared_ptr<GetInstanceUpDownStreamRequestInstanceId> instanceId{};
  shared_ptr<long> opTenantId{};
  shared_ptr<long> projectId{};
  shared_ptr<long> upStreamDepth{};

  GetInstanceUpDownStreamRequest() {}

  explicit GetInstanceUpDownStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downStreamDepth) {
      res["DownStreamDepth"] = boost::any(*downStreamDepth);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (instanceId) {
      res["InstanceId"] = instanceId ? boost::any(instanceId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (upStreamDepth) {
      res["UpStreamDepth"] = boost::any(*upStreamDepth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownStreamDepth") != m.end() && !m["DownStreamDepth"].empty()) {
      downStreamDepth = make_shared<long>(boost::any_cast<long>(m["DownStreamDepth"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceId"].type()) {
        GetInstanceUpDownStreamRequestInstanceId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceId"]));
        instanceId = make_shared<GetInstanceUpDownStreamRequestInstanceId>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("UpStreamDepth") != m.end() && !m["UpStreamDepth"].empty()) {
      upStreamDepth = make_shared<long>(boost::any_cast<long>(m["UpStreamDepth"]));
    }
  }


  virtual ~GetInstanceUpDownStreamRequest() = default;
};
class GetInstanceUpDownStreamShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> downStreamDepth{};
  shared_ptr<string> env{};
  shared_ptr<string> instanceIdShrink{};
  shared_ptr<long> opTenantId{};
  shared_ptr<long> projectId{};
  shared_ptr<long> upStreamDepth{};

  GetInstanceUpDownStreamShrinkRequest() {}

  explicit GetInstanceUpDownStreamShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downStreamDepth) {
      res["DownStreamDepth"] = boost::any(*downStreamDepth);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (instanceIdShrink) {
      res["InstanceId"] = boost::any(*instanceIdShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (upStreamDepth) {
      res["UpStreamDepth"] = boost::any(*upStreamDepth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownStreamDepth") != m.end() && !m["DownStreamDepth"].empty()) {
      downStreamDepth = make_shared<long>(boost::any_cast<long>(m["DownStreamDepth"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceIdShrink = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("UpStreamDepth") != m.end() && !m["UpStreamDepth"].empty()) {
      upStreamDepth = make_shared<long>(boost::any_cast<long>(m["UpStreamDepth"]));
    }
  }


  virtual ~GetInstanceUpDownStreamShrinkRequest() = default;
};
class GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fieldInstanceIdList{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeType{};

  GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList() {}

  explicit GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldInstanceIdList) {
      res["FieldInstanceIdList"] = boost::any(*fieldInstanceIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldInstanceIdList") != m.end() && !m["FieldInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldInstanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
  }


  virtual ~GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList() = default;
};
class GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fieldInstanceIdList{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeType{};

  GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList() {}

  explicit GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldInstanceIdList) {
      res["FieldInstanceIdList"] = boost::any(*fieldInstanceIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldInstanceIdList") != m.end() && !m["FieldInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldInstanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
  }


  virtual ~GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList() = default;
};
class GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fieldInstanceIdList{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeType{};

  GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList() {}

  explicit GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldInstanceIdList) {
      res["FieldInstanceIdList"] = boost::any(*fieldInstanceIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldInstanceIdList") != m.end() && !m["FieldInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldInstanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
  }


  virtual ~GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList() = default;
};
class GetInstanceUpDownStreamResponseBodyInstanceDagInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList>> downInstanceList{};
  shared_ptr<vector<GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList>> startInstanceList{};
  shared_ptr<vector<GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList>> upInstanceList{};

  GetInstanceUpDownStreamResponseBodyInstanceDagInfo() {}

  explicit GetInstanceUpDownStreamResponseBodyInstanceDagInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downInstanceList) {
      vector<boost::any> temp1;
      for(auto item1:*downInstanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DownInstanceList"] = boost::any(temp1);
    }
    if (startInstanceList) {
      vector<boost::any> temp1;
      for(auto item1:*startInstanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StartInstanceList"] = boost::any(temp1);
    }
    if (upInstanceList) {
      vector<boost::any> temp1;
      for(auto item1:*upInstanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UpInstanceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownInstanceList") != m.end() && !m["DownInstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["DownInstanceList"].type()) {
        vector<GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DownInstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        downInstanceList = make_shared<vector<GetInstanceUpDownStreamResponseBodyInstanceDagInfoDownInstanceList>>(expect1);
      }
    }
    if (m.find("StartInstanceList") != m.end() && !m["StartInstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["StartInstanceList"].type()) {
        vector<GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StartInstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        startInstanceList = make_shared<vector<GetInstanceUpDownStreamResponseBodyInstanceDagInfoStartInstanceList>>(expect1);
      }
    }
    if (m.find("UpInstanceList") != m.end() && !m["UpInstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["UpInstanceList"].type()) {
        vector<GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UpInstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        upInstanceList = make_shared<vector<GetInstanceUpDownStreamResponseBodyInstanceDagInfoUpInstanceList>>(expect1);
      }
    }
  }


  virtual ~GetInstanceUpDownStreamResponseBodyInstanceDagInfo() = default;
};
class GetInstanceUpDownStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<GetInstanceUpDownStreamResponseBodyInstanceDagInfo> instanceDagInfo{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetInstanceUpDownStreamResponseBody() {}

  explicit GetInstanceUpDownStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceDagInfo) {
      res["InstanceDagInfo"] = instanceDagInfo ? boost::any(instanceDagInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceDagInfo") != m.end() && !m["InstanceDagInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceDagInfo"].type()) {
        GetInstanceUpDownStreamResponseBodyInstanceDagInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceDagInfo"]));
        instanceDagInfo = make_shared<GetInstanceUpDownStreamResponseBodyInstanceDagInfo>(model1);
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


  virtual ~GetInstanceUpDownStreamResponseBody() = default;
};
class GetInstanceUpDownStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceUpDownStreamResponseBody> body{};

  GetInstanceUpDownStreamResponse() {}

  explicit GetInstanceUpDownStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetInstanceUpDownStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceUpDownStreamResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceUpDownStreamResponse() = default;
};
class GetMyRolesRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};

  GetMyRolesRequest() {}

  explicit GetMyRolesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~GetMyRolesRequest() = default;
};
class GetMyRolesResponseBodyRoleList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  GetMyRolesResponseBodyRoleList() {}

  explicit GetMyRolesResponseBodyRoleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetMyRolesResponseBodyRoleList() = default;
};
class GetMyRolesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetMyRolesResponseBodyRoleList>> roleList{};
  shared_ptr<bool> success{};

  GetMyRolesResponseBody() {}

  explicit GetMyRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleList") != m.end() && !m["RoleList"].empty()) {
      if (typeid(vector<boost::any>) == m["RoleList"].type()) {
        vector<GetMyRolesResponseBodyRoleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMyRolesResponseBodyRoleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roleList = make_shared<vector<GetMyRolesResponseBodyRoleList>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetMyRolesResponseBody() = default;
};
class GetMyRolesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMyRolesResponseBody> body{};

  GetMyRolesResponse() {}

  explicit GetMyRolesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMyRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMyRolesResponseBody>(model1);
      }
    }
  }


  virtual ~GetMyRolesResponse() = default;
};
class GetMyTenantsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> featureCodeList{};
  shared_ptr<long> opTenantId{};

  GetMyTenantsRequest() {}

  explicit GetMyTenantsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureCodeList) {
      res["FeatureCodeList"] = boost::any(*featureCodeList);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureCodeList") != m.end() && !m["FeatureCodeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FeatureCodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FeatureCodeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      featureCodeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~GetMyTenantsRequest() = default;
};
class GetMyTenantsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> featureCodeListShrink{};
  shared_ptr<long> opTenantId{};

  GetMyTenantsShrinkRequest() {}

  explicit GetMyTenantsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureCodeListShrink) {
      res["FeatureCodeList"] = boost::any(*featureCodeListShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureCodeList") != m.end() && !m["FeatureCodeList"].empty()) {
      featureCodeListShrink = make_shared<string>(boost::any_cast<string>(m["FeatureCodeList"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~GetMyTenantsShrinkRequest() = default;
};
class GetMyTenantsResponseBodyTenantList : public Darabonba::Model {
public:
  shared_ptr<long> deleteTime{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<bool> opsTenant{};
  shared_ptr<string> ownerId{};
  shared_ptr<bool> resourceLimited{};
  shared_ptr<vector<string>> tenantTypeList{};
  shared_ptr<string> titleType{};
  shared_ptr<bool> visible{};

  GetMyTenantsResponseBodyTenantList() {}

  explicit GetMyTenantsResponseBodyTenantList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deleteTime) {
      res["DeleteTime"] = boost::any(*deleteTime);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (opsTenant) {
      res["OpsTenant"] = boost::any(*opsTenant);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceLimited) {
      res["ResourceLimited"] = boost::any(*resourceLimited);
    }
    if (tenantTypeList) {
      res["TenantTypeList"] = boost::any(*tenantTypeList);
    }
    if (titleType) {
      res["TitleType"] = boost::any(*titleType);
    }
    if (visible) {
      res["Visible"] = boost::any(*visible);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeleteTime") != m.end() && !m["DeleteTime"].empty()) {
      deleteTime = make_shared<long>(boost::any_cast<long>(m["DeleteTime"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OpsTenant") != m.end() && !m["OpsTenant"].empty()) {
      opsTenant = make_shared<bool>(boost::any_cast<bool>(m["OpsTenant"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("ResourceLimited") != m.end() && !m["ResourceLimited"].empty()) {
      resourceLimited = make_shared<bool>(boost::any_cast<bool>(m["ResourceLimited"]));
    }
    if (m.find("TenantTypeList") != m.end() && !m["TenantTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TenantTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TenantTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tenantTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TitleType") != m.end() && !m["TitleType"].empty()) {
      titleType = make_shared<string>(boost::any_cast<string>(m["TitleType"]));
    }
    if (m.find("Visible") != m.end() && !m["Visible"].empty()) {
      visible = make_shared<bool>(boost::any_cast<bool>(m["Visible"]));
    }
  }


  virtual ~GetMyTenantsResponseBodyTenantList() = default;
};
class GetMyTenantsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<vector<GetMyTenantsResponseBodyTenantList>> tenantList{};

  GetMyTenantsResponseBody() {}

  explicit GetMyTenantsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (tenantList) {
      vector<boost::any> temp1;
      for(auto item1:*tenantList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TenantList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
    if (m.find("TenantList") != m.end() && !m["TenantList"].empty()) {
      if (typeid(vector<boost::any>) == m["TenantList"].type()) {
        vector<GetMyTenantsResponseBodyTenantList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TenantList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMyTenantsResponseBodyTenantList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tenantList = make_shared<vector<GetMyTenantsResponseBodyTenantList>>(expect1);
      }
    }
  }


  virtual ~GetMyTenantsResponseBody() = default;
};
class GetMyTenantsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMyTenantsResponseBody> body{};

  GetMyTenantsResponse() {}

  explicit GetMyTenantsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMyTenantsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMyTenantsResponseBody>(model1);
      }
    }
  }


  virtual ~GetMyTenantsResponse() = default;
};
class GetNodeUpDownStreamRequestNodeId : public Darabonba::Model {
public:
  shared_ptr<string> fieldIdList{};
  shared_ptr<string> id{};

  GetNodeUpDownStreamRequestNodeId() {}

  explicit GetNodeUpDownStreamRequestNodeId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldIdList) {
      res["FieldIdList"] = boost::any(*fieldIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldIdList") != m.end() && !m["FieldIdList"].empty()) {
      fieldIdList = make_shared<string>(boost::any_cast<string>(m["FieldIdList"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetNodeUpDownStreamRequestNodeId() = default;
};
class GetNodeUpDownStreamRequest : public Darabonba::Model {
public:
  shared_ptr<long> downStreamDepth{};
  shared_ptr<string> env{};
  shared_ptr<GetNodeUpDownStreamRequestNodeId> nodeId{};
  shared_ptr<long> opTenantId{};
  shared_ptr<long> projectId{};
  shared_ptr<long> upStreamDepth{};

  GetNodeUpDownStreamRequest() {}

  explicit GetNodeUpDownStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downStreamDepth) {
      res["DownStreamDepth"] = boost::any(*downStreamDepth);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (nodeId) {
      res["NodeId"] = nodeId ? boost::any(nodeId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (upStreamDepth) {
      res["UpStreamDepth"] = boost::any(*upStreamDepth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownStreamDepth") != m.end() && !m["DownStreamDepth"].empty()) {
      downStreamDepth = make_shared<long>(boost::any_cast<long>(m["DownStreamDepth"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeId"].type()) {
        GetNodeUpDownStreamRequestNodeId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeId"]));
        nodeId = make_shared<GetNodeUpDownStreamRequestNodeId>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("UpStreamDepth") != m.end() && !m["UpStreamDepth"].empty()) {
      upStreamDepth = make_shared<long>(boost::any_cast<long>(m["UpStreamDepth"]));
    }
  }


  virtual ~GetNodeUpDownStreamRequest() = default;
};
class GetNodeUpDownStreamShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> downStreamDepth{};
  shared_ptr<string> env{};
  shared_ptr<string> nodeIdShrink{};
  shared_ptr<long> opTenantId{};
  shared_ptr<long> projectId{};
  shared_ptr<long> upStreamDepth{};

  GetNodeUpDownStreamShrinkRequest() {}

  explicit GetNodeUpDownStreamShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downStreamDepth) {
      res["DownStreamDepth"] = boost::any(*downStreamDepth);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (nodeIdShrink) {
      res["NodeId"] = boost::any(*nodeIdShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (upStreamDepth) {
      res["UpStreamDepth"] = boost::any(*upStreamDepth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownStreamDepth") != m.end() && !m["DownStreamDepth"].empty()) {
      downStreamDepth = make_shared<long>(boost::any_cast<long>(m["DownStreamDepth"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeIdShrink = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("UpStreamDepth") != m.end() && !m["UpStreamDepth"].empty()) {
      upStreamDepth = make_shared<long>(boost::any_cast<long>(m["UpStreamDepth"]));
    }
  }


  virtual ~GetNodeUpDownStreamShrinkRequest() = default;
};
class GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fieldIdList{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList() {}

  explicit GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldIdList) {
      res["FieldIdList"] = boost::any(*fieldIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("FieldIdList") != m.end() && !m["FieldIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList() = default;
};
class GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fieldIdList{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList() {}

  explicit GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldIdList) {
      res["FieldIdList"] = boost::any(*fieldIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("FieldIdList") != m.end() && !m["FieldIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList() = default;
};
class GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fieldIdList{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList() {}

  explicit GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldIdList) {
      res["FieldIdList"] = boost::any(*fieldIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("FieldIdList") != m.end() && !m["FieldIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList() = default;
};
class GetNodeUpDownStreamResponseBodyNodeDagInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList>> downStreamNodeList{};
  shared_ptr<vector<GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList>> startNodeList{};
  shared_ptr<vector<GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList>> upStreamNodeList{};

  GetNodeUpDownStreamResponseBodyNodeDagInfo() {}

  explicit GetNodeUpDownStreamResponseBodyNodeDagInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downStreamNodeList) {
      vector<boost::any> temp1;
      for(auto item1:*downStreamNodeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DownStreamNodeList"] = boost::any(temp1);
    }
    if (startNodeList) {
      vector<boost::any> temp1;
      for(auto item1:*startNodeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StartNodeList"] = boost::any(temp1);
    }
    if (upStreamNodeList) {
      vector<boost::any> temp1;
      for(auto item1:*upStreamNodeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UpStreamNodeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownStreamNodeList") != m.end() && !m["DownStreamNodeList"].empty()) {
      if (typeid(vector<boost::any>) == m["DownStreamNodeList"].type()) {
        vector<GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DownStreamNodeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        downStreamNodeList = make_shared<vector<GetNodeUpDownStreamResponseBodyNodeDagInfoDownStreamNodeList>>(expect1);
      }
    }
    if (m.find("StartNodeList") != m.end() && !m["StartNodeList"].empty()) {
      if (typeid(vector<boost::any>) == m["StartNodeList"].type()) {
        vector<GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StartNodeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        startNodeList = make_shared<vector<GetNodeUpDownStreamResponseBodyNodeDagInfoStartNodeList>>(expect1);
      }
    }
    if (m.find("UpStreamNodeList") != m.end() && !m["UpStreamNodeList"].empty()) {
      if (typeid(vector<boost::any>) == m["UpStreamNodeList"].type()) {
        vector<GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UpStreamNodeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        upStreamNodeList = make_shared<vector<GetNodeUpDownStreamResponseBodyNodeDagInfoUpStreamNodeList>>(expect1);
      }
    }
  }


  virtual ~GetNodeUpDownStreamResponseBodyNodeDagInfo() = default;
};
class GetNodeUpDownStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<GetNodeUpDownStreamResponseBodyNodeDagInfo> nodeDagInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetNodeUpDownStreamResponseBody() {}

  explicit GetNodeUpDownStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nodeDagInfo) {
      res["NodeDagInfo"] = nodeDagInfo ? boost::any(nodeDagInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NodeDagInfo") != m.end() && !m["NodeDagInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeDagInfo"].type()) {
        GetNodeUpDownStreamResponseBodyNodeDagInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeDagInfo"]));
        nodeDagInfo = make_shared<GetNodeUpDownStreamResponseBodyNodeDagInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetNodeUpDownStreamResponseBody() = default;
};
class GetNodeUpDownStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNodeUpDownStreamResponseBody> body{};

  GetNodeUpDownStreamResponse() {}

  explicit GetNodeUpDownStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetNodeUpDownStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNodeUpDownStreamResponseBody>(model1);
      }
    }
  }


  virtual ~GetNodeUpDownStreamResponse() = default;
};
class GetOperationSubmitStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<string> jobId{};
  shared_ptr<long> opTenantId{};

  GetOperationSubmitStatusRequest() {}

  explicit GetOperationSubmitStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~GetOperationSubmitStatusRequest() = default;
};
class GetOperationSubmitStatusResponseBodyOperationSubmitJob : public Darabonba::Model {
public:
  shared_ptr<string> externalBizId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> operation{};
  shared_ptr<string> operationStatus{};
  shared_ptr<string> operator_{};
  shared_ptr<string> progress{};

  GetOperationSubmitStatusResponseBodyOperationSubmitJob() {}

  explicit GetOperationSubmitStatusResponseBodyOperationSubmitJob(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalBizId) {
      res["ExternalBizId"] = boost::any(*externalBizId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (operationStatus) {
      res["OperationStatus"] = boost::any(*operationStatus);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalBizId") != m.end() && !m["ExternalBizId"].empty()) {
      externalBizId = make_shared<string>(boost::any_cast<string>(m["ExternalBizId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("OperationStatus") != m.end() && !m["OperationStatus"].empty()) {
      operationStatus = make_shared<string>(boost::any_cast<string>(m["OperationStatus"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
  }


  virtual ~GetOperationSubmitStatusResponseBodyOperationSubmitJob() = default;
};
class GetOperationSubmitStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<GetOperationSubmitStatusResponseBodyOperationSubmitJob> operationSubmitJob{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOperationSubmitStatusResponseBody() {}

  explicit GetOperationSubmitStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (operationSubmitJob) {
      res["OperationSubmitJob"] = operationSubmitJob ? boost::any(operationSubmitJob->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OperationSubmitJob") != m.end() && !m["OperationSubmitJob"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperationSubmitJob"].type()) {
        GetOperationSubmitStatusResponseBodyOperationSubmitJob model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperationSubmitJob"]));
        operationSubmitJob = make_shared<GetOperationSubmitStatusResponseBodyOperationSubmitJob>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetOperationSubmitStatusResponseBody() = default;
};
class GetOperationSubmitStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOperationSubmitStatusResponseBody> body{};

  GetOperationSubmitStatusResponse() {}

  explicit GetOperationSubmitStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetOperationSubmitStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOperationSubmitStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetOperationSubmitStatusResponse() = default;
};
class GetPhysicalInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> opTenantId{};
  shared_ptr<long> projectId{};

  GetPhysicalInstanceRequest() {}

  explicit GetPhysicalInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~GetPhysicalInstanceRequest() = default;
};
class GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator() {}

  explicit GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator() = default;
};
class GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier() {}

  explicit GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier() = default;
};
class GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList() {}

  explicit GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList() = default;
};
class GetPhysicalInstanceResponseBodyInstanceNodeInfo : public Darabonba::Model {
public:
  shared_ptr<string> bizUnitName{};
  shared_ptr<string> createTime{};
  shared_ptr<GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator> creator{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> from{};
  shared_ptr<bool> hasDev{};
  shared_ptr<bool> hasProd{};
  shared_ptr<string> id{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier> modifier{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList>> ownerList{};
  shared_ptr<vector<string>> priorityList{};
  shared_ptr<vector<string>> resourceGroupList{};
  shared_ptr<bool> schedulePaused{};
  shared_ptr<vector<string>> schedulePeriodList{};
  shared_ptr<string> subDetailType{};
  shared_ptr<string> type{};

  GetPhysicalInstanceResponseBodyInstanceNodeInfo() {}

  explicit GetPhysicalInstanceResponseBodyInstanceNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUnitName) {
      res["BizUnitName"] = boost::any(*bizUnitName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (hasDev) {
      res["HasDev"] = boost::any(*hasDev);
    }
    if (hasProd) {
      res["HasProd"] = boost::any(*hasProd);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (modifier) {
      res["Modifier"] = modifier ? boost::any(modifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerList) {
      vector<boost::any> temp1;
      for(auto item1:*ownerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OwnerList"] = boost::any(temp1);
    }
    if (priorityList) {
      res["PriorityList"] = boost::any(*priorityList);
    }
    if (resourceGroupList) {
      res["ResourceGroupList"] = boost::any(*resourceGroupList);
    }
    if (schedulePaused) {
      res["SchedulePaused"] = boost::any(*schedulePaused);
    }
    if (schedulePeriodList) {
      res["SchedulePeriodList"] = boost::any(*schedulePeriodList);
    }
    if (subDetailType) {
      res["SubDetailType"] = boost::any(*subDetailType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUnitName") != m.end() && !m["BizUnitName"].empty()) {
      bizUnitName = make_shared<string>(boost::any_cast<string>(m["BizUnitName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<GetPhysicalInstanceResponseBodyInstanceNodeInfoCreator>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("HasDev") != m.end() && !m["HasDev"].empty()) {
      hasDev = make_shared<bool>(boost::any_cast<bool>(m["HasDev"]));
    }
    if (m.find("HasProd") != m.end() && !m["HasProd"].empty()) {
      hasProd = make_shared<bool>(boost::any_cast<bool>(m["HasProd"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Modifier"].type()) {
        GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Modifier"]));
        modifier = make_shared<GetPhysicalInstanceResponseBodyInstanceNodeInfoModifier>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerList") != m.end() && !m["OwnerList"].empty()) {
      if (typeid(vector<boost::any>) == m["OwnerList"].type()) {
        vector<GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OwnerList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ownerList = make_shared<vector<GetPhysicalInstanceResponseBodyInstanceNodeInfoOwnerList>>(expect1);
      }
    }
    if (m.find("PriorityList") != m.end() && !m["PriorityList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PriorityList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PriorityList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      priorityList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroupList") != m.end() && !m["ResourceGroupList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceGroupList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceGroupList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceGroupList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SchedulePaused") != m.end() && !m["SchedulePaused"].empty()) {
      schedulePaused = make_shared<bool>(boost::any_cast<bool>(m["SchedulePaused"]));
    }
    if (m.find("SchedulePeriodList") != m.end() && !m["SchedulePeriodList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SchedulePeriodList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SchedulePeriodList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      schedulePeriodList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubDetailType") != m.end() && !m["SubDetailType"].empty()) {
      subDetailType = make_shared<string>(boost::any_cast<string>(m["SubDetailType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetPhysicalInstanceResponseBodyInstanceNodeInfo() = default;
};
class GetPhysicalInstanceResponseBodyInstance : public Darabonba::Model {
public:
  shared_ptr<string> bizDate{};
  shared_ptr<string> dueTime{};
  shared_ptr<string> duration{};
  shared_ptr<long> endExecuteTime{};
  shared_ptr<string> extendInfo{};
  shared_ptr<string> id{};
  shared_ptr<long> index{};
  shared_ptr<GetPhysicalInstanceResponseBodyInstanceNodeInfo> nodeInfo{};
  shared_ptr<long> startExecuteTime{};
  shared_ptr<vector<string>> statusList{};

  GetPhysicalInstanceResponseBodyInstance() {}

  explicit GetPhysicalInstanceResponseBodyInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (dueTime) {
      res["DueTime"] = boost::any(*dueTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (endExecuteTime) {
      res["EndExecuteTime"] = boost::any(*endExecuteTime);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (nodeInfo) {
      res["NodeInfo"] = nodeInfo ? boost::any(nodeInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startExecuteTime) {
      res["StartExecuteTime"] = boost::any(*startExecuteTime);
    }
    if (statusList) {
      res["StatusList"] = boost::any(*statusList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<string>(boost::any_cast<string>(m["BizDate"]));
    }
    if (m.find("DueTime") != m.end() && !m["DueTime"].empty()) {
      dueTime = make_shared<string>(boost::any_cast<string>(m["DueTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("EndExecuteTime") != m.end() && !m["EndExecuteTime"].empty()) {
      endExecuteTime = make_shared<long>(boost::any_cast<long>(m["EndExecuteTime"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfo = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("NodeInfo") != m.end() && !m["NodeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeInfo"].type()) {
        GetPhysicalInstanceResponseBodyInstanceNodeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeInfo"]));
        nodeInfo = make_shared<GetPhysicalInstanceResponseBodyInstanceNodeInfo>(model1);
      }
    }
    if (m.find("StartExecuteTime") != m.end() && !m["StartExecuteTime"].empty()) {
      startExecuteTime = make_shared<long>(boost::any_cast<long>(m["StartExecuteTime"]));
    }
    if (m.find("StatusList") != m.end() && !m["StatusList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StatusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StatusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetPhysicalInstanceResponseBodyInstance() = default;
};
class GetPhysicalInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<GetPhysicalInstanceResponseBodyInstance> instance{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPhysicalInstanceResponseBody() {}

  explicit GetPhysicalInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instance) {
      res["Instance"] = instance ? boost::any(instance->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instance"].type()) {
        GetPhysicalInstanceResponseBodyInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instance"]));
        instance = make_shared<GetPhysicalInstanceResponseBodyInstance>(model1);
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


  virtual ~GetPhysicalInstanceResponseBody() = default;
};
class GetPhysicalInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPhysicalInstanceResponseBody> body{};

  GetPhysicalInstanceResponse() {}

  explicit GetPhysicalInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPhysicalInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPhysicalInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetPhysicalInstanceResponse() = default;
};
class GetPhysicalInstanceLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> opTenantId{};
  shared_ptr<long> projectId{};

  GetPhysicalInstanceLogRequest() {}

  explicit GetPhysicalInstanceLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~GetPhysicalInstanceLogRequest() = default;
};
class GetPhysicalInstanceLogResponseBodyTaskrunLogList : public Darabonba::Model {
public:
  shared_ptr<string> duration{};
  shared_ptr<string> endTime{};
  shared_ptr<string> logContent{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskrunId{};

  GetPhysicalInstanceLogResponseBodyTaskrunLogList() {}

  explicit GetPhysicalInstanceLogResponseBodyTaskrunLogList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (logContent) {
      res["LogContent"] = boost::any(*logContent);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskrunId) {
      res["TaskrunId"] = boost::any(*taskrunId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("LogContent") != m.end() && !m["LogContent"].empty()) {
      logContent = make_shared<string>(boost::any_cast<string>(m["LogContent"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskrunId") != m.end() && !m["TaskrunId"].empty()) {
      taskrunId = make_shared<string>(boost::any_cast<string>(m["TaskrunId"]));
    }
  }


  virtual ~GetPhysicalInstanceLogResponseBodyTaskrunLogList() = default;
};
class GetPhysicalInstanceLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<vector<GetPhysicalInstanceLogResponseBodyTaskrunLogList>> taskrunLogList{};

  GetPhysicalInstanceLogResponseBody() {}

  explicit GetPhysicalInstanceLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (taskrunLogList) {
      vector<boost::any> temp1;
      for(auto item1:*taskrunLogList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskrunLogList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
    if (m.find("TaskrunLogList") != m.end() && !m["TaskrunLogList"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskrunLogList"].type()) {
        vector<GetPhysicalInstanceLogResponseBodyTaskrunLogList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskrunLogList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPhysicalInstanceLogResponseBodyTaskrunLogList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskrunLogList = make_shared<vector<GetPhysicalInstanceLogResponseBodyTaskrunLogList>>(expect1);
      }
    }
  }


  virtual ~GetPhysicalInstanceLogResponseBody() = default;
};
class GetPhysicalInstanceLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPhysicalInstanceLogResponseBody> body{};

  GetPhysicalInstanceLogResponse() {}

  explicit GetPhysicalInstanceLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPhysicalInstanceLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPhysicalInstanceLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetPhysicalInstanceLogResponse() = default;
};
class GetPhysicalNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> opTenantId{};

  GetPhysicalNodeRequest() {}

  explicit GetPhysicalNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~GetPhysicalNodeRequest() = default;
};
class GetPhysicalNodeResponseBodyNodeInfoCreator : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetPhysicalNodeResponseBodyNodeInfoCreator() {}

  explicit GetPhysicalNodeResponseBodyNodeInfoCreator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetPhysicalNodeResponseBodyNodeInfoCreator() = default;
};
class GetPhysicalNodeResponseBodyNodeInfoModifier : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetPhysicalNodeResponseBodyNodeInfoModifier() {}

  explicit GetPhysicalNodeResponseBodyNodeInfoModifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetPhysicalNodeResponseBodyNodeInfoModifier() = default;
};
class GetPhysicalNodeResponseBodyNodeInfoOwner : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetPhysicalNodeResponseBodyNodeInfoOwner() {}

  explicit GetPhysicalNodeResponseBodyNodeInfoOwner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetPhysicalNodeResponseBodyNodeInfoOwner() = default;
};
class GetPhysicalNodeResponseBodyNodeInfoProjectInfo : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetPhysicalNodeResponseBodyNodeInfoProjectInfo() {}

  explicit GetPhysicalNodeResponseBodyNodeInfoProjectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetPhysicalNodeResponseBodyNodeInfoProjectInfo() = default;
};
class GetPhysicalNodeResponseBodyNodeInfo : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<GetPhysicalNodeResponseBodyNodeInfoCreator> creator{};
  shared_ptr<string> cronExpression{};
  shared_ptr<long> dataSourceId{};
  shared_ptr<string> dataSourceSchema{};
  shared_ptr<string> description{};
  shared_ptr<string> from{};
  shared_ptr<string> id{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<GetPhysicalNodeResponseBodyNodeInfoModifier> modifier{};
  shared_ptr<string> name{};
  shared_ptr<string> operatorType{};
  shared_ptr<vector<string>> outputNameList{};
  shared_ptr<GetPhysicalNodeResponseBodyNodeInfoOwner> owner{};
  shared_ptr<string> priority{};
  shared_ptr<GetPhysicalNodeResponseBodyNodeInfoProjectInfo> projectInfo{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> status{};
  shared_ptr<string> triggerConfig{};

  GetPhysicalNodeResponseBodyNodeInfo() {}

  explicit GetPhysicalNodeResponseBodyNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (dataSourceSchema) {
      res["DataSourceSchema"] = boost::any(*dataSourceSchema);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (modifier) {
      res["Modifier"] = modifier ? boost::any(modifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operatorType) {
      res["OperatorType"] = boost::any(*operatorType);
    }
    if (outputNameList) {
      res["OutputNameList"] = boost::any(*outputNameList);
    }
    if (owner) {
      res["Owner"] = owner ? boost::any(owner->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (projectInfo) {
      res["ProjectInfo"] = projectInfo ? boost::any(projectInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (triggerConfig) {
      res["TriggerConfig"] = boost::any(*triggerConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        GetPhysicalNodeResponseBodyNodeInfoCreator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<GetPhysicalNodeResponseBodyNodeInfoCreator>(model1);
      }
    }
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<long>(boost::any_cast<long>(m["DataSourceId"]));
    }
    if (m.find("DataSourceSchema") != m.end() && !m["DataSourceSchema"].empty()) {
      dataSourceSchema = make_shared<string>(boost::any_cast<string>(m["DataSourceSchema"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["LastModifiedTime"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Modifier"].type()) {
        GetPhysicalNodeResponseBodyNodeInfoModifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Modifier"]));
        modifier = make_shared<GetPhysicalNodeResponseBodyNodeInfoModifier>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperatorType") != m.end() && !m["OperatorType"].empty()) {
      operatorType = make_shared<string>(boost::any_cast<string>(m["OperatorType"]));
    }
    if (m.find("OutputNameList") != m.end() && !m["OutputNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OutputNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OutputNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      outputNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      if (typeid(map<string, boost::any>) == m["Owner"].type()) {
        GetPhysicalNodeResponseBodyNodeInfoOwner model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Owner"]));
        owner = make_shared<GetPhysicalNodeResponseBodyNodeInfoOwner>(model1);
      }
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("ProjectInfo") != m.end() && !m["ProjectInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProjectInfo"].type()) {
        GetPhysicalNodeResponseBodyNodeInfoProjectInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProjectInfo"]));
        projectInfo = make_shared<GetPhysicalNodeResponseBodyNodeInfoProjectInfo>(model1);
      }
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TriggerConfig") != m.end() && !m["TriggerConfig"].empty()) {
      triggerConfig = make_shared<string>(boost::any_cast<string>(m["TriggerConfig"]));
    }
  }


  virtual ~GetPhysicalNodeResponseBodyNodeInfo() = default;
};
class GetPhysicalNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<GetPhysicalNodeResponseBodyNodeInfo> nodeInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPhysicalNodeResponseBody() {}

  explicit GetPhysicalNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nodeInfo) {
      res["NodeInfo"] = nodeInfo ? boost::any(nodeInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NodeInfo") != m.end() && !m["NodeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeInfo"].type()) {
        GetPhysicalNodeResponseBodyNodeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeInfo"]));
        nodeInfo = make_shared<GetPhysicalNodeResponseBodyNodeInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPhysicalNodeResponseBody() = default;
};
class GetPhysicalNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPhysicalNodeResponseBody> body{};

  GetPhysicalNodeResponse() {}

  explicit GetPhysicalNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPhysicalNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPhysicalNodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetPhysicalNodeResponse() = default;
};
class GetPhysicalNodeByOutputNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<long> opTenantId{};
  shared_ptr<string> outputName{};

  GetPhysicalNodeByOutputNameRequest() {}

  explicit GetPhysicalNodeByOutputNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (outputName) {
      res["OutputName"] = boost::any(*outputName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("OutputName") != m.end() && !m["OutputName"].empty()) {
      outputName = make_shared<string>(boost::any_cast<string>(m["OutputName"]));
    }
  }


  virtual ~GetPhysicalNodeByOutputNameRequest() = default;
};
class GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator() {}

  explicit GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator() = default;
};
class GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier() {}

  explicit GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier() = default;
};
class GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner() {}

  explicit GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner() = default;
};
class GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo() {}

  explicit GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo() = default;
};
class GetPhysicalNodeByOutputNameResponseBodyNodeInfo : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator> creator{};
  shared_ptr<string> description{};
  shared_ptr<string> from{};
  shared_ptr<string> id{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier> modifier{};
  shared_ptr<string> name{};
  shared_ptr<string> operatorType{};
  shared_ptr<GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner> owner{};
  shared_ptr<string> priority{};
  shared_ptr<GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo> projectInfo{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> status{};
  shared_ptr<string> triggerConfig{};

  GetPhysicalNodeByOutputNameResponseBodyNodeInfo() {}

  explicit GetPhysicalNodeByOutputNameResponseBodyNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (modifier) {
      res["Modifier"] = modifier ? boost::any(modifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operatorType) {
      res["OperatorType"] = boost::any(*operatorType);
    }
    if (owner) {
      res["Owner"] = owner ? boost::any(owner->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (projectInfo) {
      res["ProjectInfo"] = projectInfo ? boost::any(projectInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (triggerConfig) {
      res["TriggerConfig"] = boost::any(*triggerConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<GetPhysicalNodeByOutputNameResponseBodyNodeInfoCreator>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["LastModifiedTime"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Modifier"].type()) {
        GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Modifier"]));
        modifier = make_shared<GetPhysicalNodeByOutputNameResponseBodyNodeInfoModifier>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperatorType") != m.end() && !m["OperatorType"].empty()) {
      operatorType = make_shared<string>(boost::any_cast<string>(m["OperatorType"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      if (typeid(map<string, boost::any>) == m["Owner"].type()) {
        GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Owner"]));
        owner = make_shared<GetPhysicalNodeByOutputNameResponseBodyNodeInfoOwner>(model1);
      }
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("ProjectInfo") != m.end() && !m["ProjectInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProjectInfo"].type()) {
        GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProjectInfo"]));
        projectInfo = make_shared<GetPhysicalNodeByOutputNameResponseBodyNodeInfoProjectInfo>(model1);
      }
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TriggerConfig") != m.end() && !m["TriggerConfig"].empty()) {
      triggerConfig = make_shared<string>(boost::any_cast<string>(m["TriggerConfig"]));
    }
  }


  virtual ~GetPhysicalNodeByOutputNameResponseBodyNodeInfo() = default;
};
class GetPhysicalNodeByOutputNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<GetPhysicalNodeByOutputNameResponseBodyNodeInfo> nodeInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPhysicalNodeByOutputNameResponseBody() {}

  explicit GetPhysicalNodeByOutputNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nodeInfo) {
      res["NodeInfo"] = nodeInfo ? boost::any(nodeInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NodeInfo") != m.end() && !m["NodeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeInfo"].type()) {
        GetPhysicalNodeByOutputNameResponseBodyNodeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeInfo"]));
        nodeInfo = make_shared<GetPhysicalNodeByOutputNameResponseBodyNodeInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPhysicalNodeByOutputNameResponseBody() = default;
};
class GetPhysicalNodeByOutputNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPhysicalNodeByOutputNameResponseBody> body{};

  GetPhysicalNodeByOutputNameResponse() {}

  explicit GetPhysicalNodeByOutputNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPhysicalNodeByOutputNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPhysicalNodeByOutputNameResponseBody>(model1);
      }
    }
  }


  virtual ~GetPhysicalNodeByOutputNameResponse() = default;
};
class GetPhysicalNodeContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> opTenantId{};

  GetPhysicalNodeContentRequest() {}

  explicit GetPhysicalNodeContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~GetPhysicalNodeContentRequest() = default;
};
class GetPhysicalNodeContentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> codeContent{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeName{};

  GetPhysicalNodeContentResponseBodyData() {}

  explicit GetPhysicalNodeContentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeContent) {
      res["CodeContent"] = boost::any(*codeContent);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeContent") != m.end() && !m["CodeContent"].empty()) {
      codeContent = make_shared<string>(boost::any_cast<string>(m["CodeContent"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
  }


  virtual ~GetPhysicalNodeContentResponseBodyData() = default;
};
class GetPhysicalNodeContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetPhysicalNodeContentResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPhysicalNodeContentResponseBody() {}

  explicit GetPhysicalNodeContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
        GetPhysicalNodeContentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPhysicalNodeContentResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetPhysicalNodeContentResponseBody() = default;
};
class GetPhysicalNodeContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPhysicalNodeContentResponseBody> body{};

  GetPhysicalNodeContentResponse() {}

  explicit GetPhysicalNodeContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPhysicalNodeContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPhysicalNodeContentResponseBody>(model1);
      }
    }
  }


  virtual ~GetPhysicalNodeContentResponse() = default;
};
class GetPhysicalNodeOperationLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<string> nodeId{};
  shared_ptr<long> opTenantId{};

  GetPhysicalNodeOperationLogRequest() {}

  explicit GetPhysicalNodeOperationLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~GetPhysicalNodeOperationLogRequest() = default;
};
class GetPhysicalNodeOperationLogResponseBodyOperationLogList : public Darabonba::Model {
public:
  shared_ptr<string> context{};
  shared_ptr<string> operationTime{};
  shared_ptr<string> operationType{};
  shared_ptr<string> operator_{};
  shared_ptr<string> operatorName{};

  GetPhysicalNodeOperationLogResponseBodyOperationLogList() {}

  explicit GetPhysicalNodeOperationLogResponseBodyOperationLogList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["Context"] = boost::any(*context);
    }
    if (operationTime) {
      res["OperationTime"] = boost::any(*operationTime);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (operatorName) {
      res["OperatorName"] = boost::any(*operatorName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Context") != m.end() && !m["Context"].empty()) {
      context = make_shared<string>(boost::any_cast<string>(m["Context"]));
    }
    if (m.find("OperationTime") != m.end() && !m["OperationTime"].empty()) {
      operationTime = make_shared<string>(boost::any_cast<string>(m["OperationTime"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("OperatorName") != m.end() && !m["OperatorName"].empty()) {
      operatorName = make_shared<string>(boost::any_cast<string>(m["OperatorName"]));
    }
  }


  virtual ~GetPhysicalNodeOperationLogResponseBodyOperationLogList() = default;
};
class GetPhysicalNodeOperationLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<vector<GetPhysicalNodeOperationLogResponseBodyOperationLogList>> operationLogList{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPhysicalNodeOperationLogResponseBody() {}

  explicit GetPhysicalNodeOperationLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (operationLogList) {
      vector<boost::any> temp1;
      for(auto item1:*operationLogList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperationLogList"] = boost::any(temp1);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OperationLogList") != m.end() && !m["OperationLogList"].empty()) {
      if (typeid(vector<boost::any>) == m["OperationLogList"].type()) {
        vector<GetPhysicalNodeOperationLogResponseBodyOperationLogList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperationLogList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPhysicalNodeOperationLogResponseBodyOperationLogList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operationLogList = make_shared<vector<GetPhysicalNodeOperationLogResponseBodyOperationLogList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPhysicalNodeOperationLogResponseBody() = default;
};
class GetPhysicalNodeOperationLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPhysicalNodeOperationLogResponseBody> body{};

  GetPhysicalNodeOperationLogResponse() {}

  explicit GetPhysicalNodeOperationLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPhysicalNodeOperationLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPhysicalNodeOperationLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetPhysicalNodeOperationLogResponse() = default;
};
class GetProjectProduceUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<long> projectId{};

  GetProjectProduceUserRequest() {}

  explicit GetProjectProduceUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~GetProjectProduceUserRequest() = default;
};
class GetProjectProduceUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  GetProjectProduceUserResponseBodyUser() {}

  explicit GetProjectProduceUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetProjectProduceUserResponseBodyUser() = default;
};
class GetProjectProduceUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetProjectProduceUserResponseBodyUser> user{};

  GetProjectProduceUserResponseBody() {}

  explicit GetProjectProduceUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        GetProjectProduceUserResponseBodyUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<GetProjectProduceUserResponseBodyUser>(model1);
      }
    }
  }


  virtual ~GetProjectProduceUserResponseBody() = default;
};
class GetProjectProduceUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectProduceUserResponseBody> body{};

  GetProjectProduceUserResponse() {}

  explicit GetProjectProduceUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetProjectProduceUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectProduceUserResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectProduceUserResponse() = default;
};
class GetSupplementDagrunRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<long> opTenantId{};
  shared_ptr<string> supplementId{};

  GetSupplementDagrunRequest() {}

  explicit GetSupplementDagrunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (supplementId) {
      res["SupplementId"] = boost::any(*supplementId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("SupplementId") != m.end() && !m["SupplementId"].empty()) {
      supplementId = make_shared<string>(boost::any_cast<string>(m["SupplementId"]));
    }
  }


  virtual ~GetSupplementDagrunRequest() = default;
};
class GetSupplementDagrunResponseBodyDagrunList : public Darabonba::Model {
public:
  shared_ptr<string> bizDate{};
  shared_ptr<string> duration{};
  shared_ptr<long> endExecuteTime{};
  shared_ptr<string> id{};
  shared_ptr<long> startExecuteTime{};
  shared_ptr<string> status{};
  shared_ptr<string> supplementId{};

  GetSupplementDagrunResponseBodyDagrunList() {}

  explicit GetSupplementDagrunResponseBodyDagrunList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (endExecuteTime) {
      res["EndExecuteTime"] = boost::any(*endExecuteTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (startExecuteTime) {
      res["StartExecuteTime"] = boost::any(*startExecuteTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplementId) {
      res["SupplementId"] = boost::any(*supplementId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<string>(boost::any_cast<string>(m["BizDate"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("EndExecuteTime") != m.end() && !m["EndExecuteTime"].empty()) {
      endExecuteTime = make_shared<long>(boost::any_cast<long>(m["EndExecuteTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("StartExecuteTime") != m.end() && !m["StartExecuteTime"].empty()) {
      startExecuteTime = make_shared<long>(boost::any_cast<long>(m["StartExecuteTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupplementId") != m.end() && !m["SupplementId"].empty()) {
      supplementId = make_shared<string>(boost::any_cast<string>(m["SupplementId"]));
    }
  }


  virtual ~GetSupplementDagrunResponseBodyDagrunList() = default;
};
class GetSupplementDagrunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetSupplementDagrunResponseBodyDagrunList>> dagrunList{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetSupplementDagrunResponseBody() {}

  explicit GetSupplementDagrunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dagrunList) {
      vector<boost::any> temp1;
      for(auto item1:*dagrunList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DagrunList"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("DagrunList") != m.end() && !m["DagrunList"].empty()) {
      if (typeid(vector<boost::any>) == m["DagrunList"].type()) {
        vector<GetSupplementDagrunResponseBodyDagrunList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DagrunList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSupplementDagrunResponseBodyDagrunList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dagrunList = make_shared<vector<GetSupplementDagrunResponseBodyDagrunList>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GetSupplementDagrunResponseBody() = default;
};
class GetSupplementDagrunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSupplementDagrunResponseBody> body{};

  GetSupplementDagrunResponse() {}

  explicit GetSupplementDagrunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSupplementDagrunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSupplementDagrunResponseBody>(model1);
      }
    }
  }


  virtual ~GetSupplementDagrunResponse() = default;
};
class GetSupplementDagrunInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> dagrunId{};
  shared_ptr<string> env{};
  shared_ptr<long> opTenantId{};

  GetSupplementDagrunInstanceRequest() {}

  explicit GetSupplementDagrunInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dagrunId) {
      res["DagrunId"] = boost::any(*dagrunId);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DagrunId") != m.end() && !m["DagrunId"].empty()) {
      dagrunId = make_shared<string>(boost::any_cast<string>(m["DagrunId"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~GetSupplementDagrunInstanceRequest() = default;
};
class GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoCreator : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoCreator() {}

  explicit GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoCreator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoCreator() = default;
};
class GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoModifier : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoModifier() {}

  explicit GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoModifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoModifier() = default;
};
class GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList() {}

  explicit GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList() = default;
};
class GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo : public Darabonba::Model {
public:
  shared_ptr<string> bizUnitName{};
  shared_ptr<string> createTime{};
  shared_ptr<GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoCreator> creator{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> from{};
  shared_ptr<bool> hasDev{};
  shared_ptr<bool> hasProd{};
  shared_ptr<string> id{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoModifier> modifier{};
  shared_ptr<string> name{};
  shared_ptr<vector<GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList>> ownerList{};
  shared_ptr<vector<string>> priorityList{};
  shared_ptr<vector<string>> resourceGroupList{};
  shared_ptr<bool> schedulePaused{};
  shared_ptr<vector<string>> schedulePeriodList{};
  shared_ptr<string> subDetailType{};
  shared_ptr<string> type{};

  GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo() {}

  explicit GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUnitName) {
      res["BizUnitName"] = boost::any(*bizUnitName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (hasDev) {
      res["HasDev"] = boost::any(*hasDev);
    }
    if (hasProd) {
      res["HasProd"] = boost::any(*hasProd);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (modifier) {
      res["Modifier"] = modifier ? boost::any(modifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerList) {
      vector<boost::any> temp1;
      for(auto item1:*ownerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OwnerList"] = boost::any(temp1);
    }
    if (priorityList) {
      res["PriorityList"] = boost::any(*priorityList);
    }
    if (resourceGroupList) {
      res["ResourceGroupList"] = boost::any(*resourceGroupList);
    }
    if (schedulePaused) {
      res["SchedulePaused"] = boost::any(*schedulePaused);
    }
    if (schedulePeriodList) {
      res["SchedulePeriodList"] = boost::any(*schedulePeriodList);
    }
    if (subDetailType) {
      res["SubDetailType"] = boost::any(*subDetailType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUnitName") != m.end() && !m["BizUnitName"].empty()) {
      bizUnitName = make_shared<string>(boost::any_cast<string>(m["BizUnitName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoCreator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoCreator>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("HasDev") != m.end() && !m["HasDev"].empty()) {
      hasDev = make_shared<bool>(boost::any_cast<bool>(m["HasDev"]));
    }
    if (m.find("HasProd") != m.end() && !m["HasProd"].empty()) {
      hasProd = make_shared<bool>(boost::any_cast<bool>(m["HasProd"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Modifier"].type()) {
        GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoModifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Modifier"]));
        modifier = make_shared<GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoModifier>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerList") != m.end() && !m["OwnerList"].empty()) {
      if (typeid(vector<boost::any>) == m["OwnerList"].type()) {
        vector<GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OwnerList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ownerList = make_shared<vector<GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfoOwnerList>>(expect1);
      }
    }
    if (m.find("PriorityList") != m.end() && !m["PriorityList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PriorityList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PriorityList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      priorityList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroupList") != m.end() && !m["ResourceGroupList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceGroupList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceGroupList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceGroupList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SchedulePaused") != m.end() && !m["SchedulePaused"].empty()) {
      schedulePaused = make_shared<bool>(boost::any_cast<bool>(m["SchedulePaused"]));
    }
    if (m.find("SchedulePeriodList") != m.end() && !m["SchedulePeriodList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SchedulePeriodList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SchedulePeriodList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      schedulePeriodList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubDetailType") != m.end() && !m["SubDetailType"].empty()) {
      subDetailType = make_shared<string>(boost::any_cast<string>(m["SubDetailType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo() = default;
};
class GetSupplementDagrunInstanceResponseBodyInstanceList : public Darabonba::Model {
public:
  shared_ptr<long> bizDate{};
  shared_ptr<long> dueTime{};
  shared_ptr<string> duration{};
  shared_ptr<long> endExecuteTime{};
  shared_ptr<string> extendInfo{};
  shared_ptr<string> id{};
  shared_ptr<long> index{};
  shared_ptr<GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo> nodeInfo{};
  shared_ptr<long> startExecuteTime{};
  shared_ptr<vector<string>> statusList{};
  shared_ptr<string> type{};

  GetSupplementDagrunInstanceResponseBodyInstanceList() {}

  explicit GetSupplementDagrunInstanceResponseBodyInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (dueTime) {
      res["DueTime"] = boost::any(*dueTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (endExecuteTime) {
      res["EndExecuteTime"] = boost::any(*endExecuteTime);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (nodeInfo) {
      res["NodeInfo"] = nodeInfo ? boost::any(nodeInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startExecuteTime) {
      res["StartExecuteTime"] = boost::any(*startExecuteTime);
    }
    if (statusList) {
      res["StatusList"] = boost::any(*statusList);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<long>(boost::any_cast<long>(m["BizDate"]));
    }
    if (m.find("DueTime") != m.end() && !m["DueTime"].empty()) {
      dueTime = make_shared<long>(boost::any_cast<long>(m["DueTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("EndExecuteTime") != m.end() && !m["EndExecuteTime"].empty()) {
      endExecuteTime = make_shared<long>(boost::any_cast<long>(m["EndExecuteTime"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfo = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("NodeInfo") != m.end() && !m["NodeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeInfo"].type()) {
        GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeInfo"]));
        nodeInfo = make_shared<GetSupplementDagrunInstanceResponseBodyInstanceListNodeInfo>(model1);
      }
    }
    if (m.find("StartExecuteTime") != m.end() && !m["StartExecuteTime"].empty()) {
      startExecuteTime = make_shared<long>(boost::any_cast<long>(m["StartExecuteTime"]));
    }
    if (m.find("StatusList") != m.end() && !m["StatusList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StatusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StatusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetSupplementDagrunInstanceResponseBodyInstanceList() = default;
};
class GetSupplementDagrunInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<GetSupplementDagrunInstanceResponseBodyInstanceList>> instanceList{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetSupplementDagrunInstanceResponseBody() {}

  explicit GetSupplementDagrunInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceList"] = boost::any(temp1);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceList"].type()) {
        vector<GetSupplementDagrunInstanceResponseBodyInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSupplementDagrunInstanceResponseBodyInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceList = make_shared<vector<GetSupplementDagrunInstanceResponseBodyInstanceList>>(expect1);
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


  virtual ~GetSupplementDagrunInstanceResponseBody() = default;
};
class GetSupplementDagrunInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSupplementDagrunInstanceResponseBody> body{};

  GetSupplementDagrunInstanceResponse() {}

  explicit GetSupplementDagrunInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSupplementDagrunInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSupplementDagrunInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetSupplementDagrunInstanceResponse() = default;
};
class GetUserBySourceIdRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<string> sourceId{};

  GetUserBySourceIdRequest() {}

  explicit GetUserBySourceIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
  }


  virtual ~GetUserBySourceIdRequest() = default;
};
class GetUserBySourceIdResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};

  GetUserBySourceIdResponseBodyUser() {}

  explicit GetUserBySourceIdResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetUserBySourceIdResponseBodyUser() = default;
};
class GetUserBySourceIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetUserBySourceIdResponseBodyUser> user{};

  GetUserBySourceIdResponseBody() {}

  explicit GetUserBySourceIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        GetUserBySourceIdResponseBodyUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<GetUserBySourceIdResponseBodyUser>(model1);
      }
    }
  }


  virtual ~GetUserBySourceIdResponseBody() = default;
};
class GetUserBySourceIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserBySourceIdResponseBody> body{};

  GetUserBySourceIdResponse() {}

  explicit GetUserBySourceIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserBySourceIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserBySourceIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserBySourceIdResponse() = default;
};
class GetUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<string> userGroupId{};

  GetUserGroupRequest() {}

  explicit GetUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~GetUserGroupRequest() = default;
};
class GetUserGroupResponseBodyUserGroupInfoAdminList : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};

  GetUserGroupResponseBodyUserGroupInfoAdminList() {}

  explicit GetUserGroupResponseBodyUserGroupInfoAdminList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~GetUserGroupResponseBodyUserGroupInfoAdminList() = default;
};
class GetUserGroupResponseBodyUserGroupInfo : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<vector<GetUserGroupResponseBodyUserGroupInfoAdminList>> adminList{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> myRole{};
  shared_ptr<string> name{};

  GetUserGroupResponseBodyUserGroupInfo() {}

  explicit GetUserGroupResponseBodyUserGroupInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (adminList) {
      vector<boost::any> temp1;
      for(auto item1:*adminList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdminList"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (myRole) {
      res["MyRole"] = boost::any(*myRole);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("AdminList") != m.end() && !m["AdminList"].empty()) {
      if (typeid(vector<boost::any>) == m["AdminList"].type()) {
        vector<GetUserGroupResponseBodyUserGroupInfoAdminList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdminList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserGroupResponseBodyUserGroupInfoAdminList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        adminList = make_shared<vector<GetUserGroupResponseBodyUserGroupInfoAdminList>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MyRole") != m.end() && !m["MyRole"].empty()) {
      myRole = make_shared<string>(boost::any_cast<string>(m["MyRole"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetUserGroupResponseBodyUserGroupInfo() = default;
};
class GetUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetUserGroupResponseBodyUserGroupInfo> userGroupInfo{};

  GetUserGroupResponseBody() {}

  explicit GetUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (userGroupInfo) {
      res["UserGroupInfo"] = userGroupInfo ? boost::any(userGroupInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
    if (m.find("UserGroupInfo") != m.end() && !m["UserGroupInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserGroupInfo"].type()) {
        GetUserGroupResponseBodyUserGroupInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserGroupInfo"]));
        userGroupInfo = make_shared<GetUserGroupResponseBodyUserGroupInfo>(model1);
      }
    }
  }


  virtual ~GetUserGroupResponseBody() = default;
};
class GetUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserGroupResponseBody> body{};

  GetUserGroupResponse() {}

  explicit GetUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserGroupResponse() = default;
};
class GetUsersRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<vector<string>> userIdList{};

  GetUsersRequest() {}

  explicit GetUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (userIdList) {
      res["UserIdList"] = boost::any(*userIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UserIdList") != m.end() && !m["UserIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetUsersRequest() = default;
};
class GetUsersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<string> userIdListShrink{};

  GetUsersShrinkRequest() {}

  explicit GetUsersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (userIdListShrink) {
      res["UserIdList"] = boost::any(*userIdListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UserIdList") != m.end() && !m["UserIdList"].empty()) {
      userIdListShrink = make_shared<string>(boost::any_cast<string>(m["UserIdList"]));
    }
  }


  virtual ~GetUsersShrinkRequest() = default;
};
class GetUsersResponseBodyUserList : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> dingNumber{};
  shared_ptr<string> displayName{};
  shared_ptr<string> displayNameWithoutStatus{};
  shared_ptr<string> enableWhiteIp{};
  shared_ptr<string> feiShuRobot{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> id{};
  shared_ptr<string> mail{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<string> parentId{};
  shared_ptr<string> realName{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> weChatRobot{};
  shared_ptr<string> whiteIp{};

  GetUsersResponseBodyUserList() {}

  explicit GetUsersResponseBodyUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (dingNumber) {
      res["DingNumber"] = boost::any(*dingNumber);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (displayNameWithoutStatus) {
      res["DisplayNameWithoutStatus"] = boost::any(*displayNameWithoutStatus);
    }
    if (enableWhiteIp) {
      res["EnableWhiteIp"] = boost::any(*enableWhiteIp);
    }
    if (feiShuRobot) {
      res["FeiShuRobot"] = boost::any(*feiShuRobot);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mail) {
      res["Mail"] = boost::any(*mail);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (realName) {
      res["RealName"] = boost::any(*realName);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (weChatRobot) {
      res["WeChatRobot"] = boost::any(*weChatRobot);
    }
    if (whiteIp) {
      res["WhiteIp"] = boost::any(*whiteIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DingNumber") != m.end() && !m["DingNumber"].empty()) {
      dingNumber = make_shared<string>(boost::any_cast<string>(m["DingNumber"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("DisplayNameWithoutStatus") != m.end() && !m["DisplayNameWithoutStatus"].empty()) {
      displayNameWithoutStatus = make_shared<string>(boost::any_cast<string>(m["DisplayNameWithoutStatus"]));
    }
    if (m.find("EnableWhiteIp") != m.end() && !m["EnableWhiteIp"].empty()) {
      enableWhiteIp = make_shared<string>(boost::any_cast<string>(m["EnableWhiteIp"]));
    }
    if (m.find("FeiShuRobot") != m.end() && !m["FeiShuRobot"].empty()) {
      feiShuRobot = make_shared<string>(boost::any_cast<string>(m["FeiShuRobot"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Mail") != m.end() && !m["Mail"].empty()) {
      mail = make_shared<string>(boost::any_cast<string>(m["Mail"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("RealName") != m.end() && !m["RealName"].empty()) {
      realName = make_shared<string>(boost::any_cast<string>(m["RealName"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("WeChatRobot") != m.end() && !m["WeChatRobot"].empty()) {
      weChatRobot = make_shared<string>(boost::any_cast<string>(m["WeChatRobot"]));
    }
    if (m.find("WhiteIp") != m.end() && !m["WhiteIp"].empty()) {
      whiteIp = make_shared<string>(boost::any_cast<string>(m["WhiteIp"]));
    }
  }


  virtual ~GetUsersResponseBodyUserList() = default;
};
class GetUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<vector<GetUsersResponseBodyUserList>> userList{};

  GetUsersResponseBody() {}

  explicit GetUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (userList) {
      vector<boost::any> temp1;
      for(auto item1:*userList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
    if (m.find("UserList") != m.end() && !m["UserList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserList"].type()) {
        vector<GetUsersResponseBodyUserList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUsersResponseBodyUserList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userList = make_shared<vector<GetUsersResponseBodyUserList>>(expect1);
      }
    }
  }


  virtual ~GetUsersResponseBody() = default;
};
class GetUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUsersResponseBody> body{};

  GetUsersResponse() {}

  explicit GetUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUsersResponseBody>(model1);
      }
    }
  }


  virtual ~GetUsersResponse() = default;
};
class GrantResourcePermissionRequestGrantCommandResourceList : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};

  GrantResourcePermissionRequestGrantCommandResourceList() {}

  explicit GrantResourcePermissionRequestGrantCommandResourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~GrantResourcePermissionRequestGrantCommandResourceList() = default;
};
class GrantResourcePermissionRequestGrantCommand : public Darabonba::Model {
public:
  shared_ptr<string> effectiveEnd{};
  shared_ptr<vector<string>> operateList{};
  shared_ptr<string> reason{};
  shared_ptr<vector<GrantResourcePermissionRequestGrantCommandResourceList>> resourceList{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> userIdList{};

  GrantResourcePermissionRequestGrantCommand() {}

  explicit GrantResourcePermissionRequestGrantCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effectiveEnd) {
      res["EffectiveEnd"] = boost::any(*effectiveEnd);
    }
    if (operateList) {
      res["OperateList"] = boost::any(*operateList);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (resourceList) {
      vector<boost::any> temp1;
      for(auto item1:*resourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceList"] = boost::any(temp1);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (userIdList) {
      res["UserIdList"] = boost::any(*userIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EffectiveEnd") != m.end() && !m["EffectiveEnd"].empty()) {
      effectiveEnd = make_shared<string>(boost::any_cast<string>(m["EffectiveEnd"]));
    }
    if (m.find("OperateList") != m.end() && !m["OperateList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OperateList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OperateList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      operateList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("ResourceList") != m.end() && !m["ResourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceList"].type()) {
        vector<GrantResourcePermissionRequestGrantCommandResourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GrantResourcePermissionRequestGrantCommandResourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceList = make_shared<vector<GrantResourcePermissionRequestGrantCommandResourceList>>(expect1);
      }
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("UserIdList") != m.end() && !m["UserIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GrantResourcePermissionRequestGrantCommand() = default;
};
class GrantResourcePermissionRequest : public Darabonba::Model {
public:
  shared_ptr<GrantResourcePermissionRequestGrantCommand> grantCommand{};
  shared_ptr<long> opTenantId{};

  GrantResourcePermissionRequest() {}

  explicit GrantResourcePermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (grantCommand) {
      res["GrantCommand"] = grantCommand ? boost::any(grantCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GrantCommand") != m.end() && !m["GrantCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["GrantCommand"].type()) {
        GrantResourcePermissionRequestGrantCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GrantCommand"]));
        grantCommand = make_shared<GrantResourcePermissionRequestGrantCommand>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~GrantResourcePermissionRequest() = default;
};
class GrantResourcePermissionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> grantCommandShrink{};
  shared_ptr<long> opTenantId{};

  GrantResourcePermissionShrinkRequest() {}

  explicit GrantResourcePermissionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (grantCommandShrink) {
      res["GrantCommand"] = boost::any(*grantCommandShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GrantCommand") != m.end() && !m["GrantCommand"].empty()) {
      grantCommandShrink = make_shared<string>(boost::any_cast<string>(m["GrantCommand"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~GrantResourcePermissionShrinkRequest() = default;
};
class GrantResourcePermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GrantResourcePermissionResponseBody() {}

  explicit GrantResourcePermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GrantResourcePermissionResponseBody() = default;
};
class GrantResourcePermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GrantResourcePermissionResponseBody> body{};

  GrantResourcePermissionResponse() {}

  explicit GrantResourcePermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GrantResourcePermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantResourcePermissionResponseBody>(model1);
      }
    }
  }


  virtual ~GrantResourcePermissionResponse() = default;
};
class ListAddableRolesRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};

  ListAddableRolesRequest() {}

  explicit ListAddableRolesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListAddableRolesRequest() = default;
};
class ListAddableRolesResponseBodyRoleList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  ListAddableRolesResponseBodyRoleList() {}

  explicit ListAddableRolesResponseBodyRoleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListAddableRolesResponseBodyRoleList() = default;
};
class ListAddableRolesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAddableRolesResponseBodyRoleList>> roleList{};
  shared_ptr<bool> success{};

  ListAddableRolesResponseBody() {}

  explicit ListAddableRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleList") != m.end() && !m["RoleList"].empty()) {
      if (typeid(vector<boost::any>) == m["RoleList"].type()) {
        vector<ListAddableRolesResponseBodyRoleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAddableRolesResponseBodyRoleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roleList = make_shared<vector<ListAddableRolesResponseBodyRoleList>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAddableRolesResponseBody() = default;
};
class ListAddableRolesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAddableRolesResponseBody> body{};

  ListAddableRolesResponse() {}

  explicit ListAddableRolesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAddableRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAddableRolesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAddableRolesResponse() = default;
};
class ListAddableUsersRequestListQuery : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchText{};

  ListAddableUsersRequestListQuery() {}

  explicit ListAddableUsersRequestListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (searchText) {
      res["SearchText"] = boost::any(*searchText);
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
    if (m.find("SearchText") != m.end() && !m["SearchText"].empty()) {
      searchText = make_shared<string>(boost::any_cast<string>(m["SearchText"]));
    }
  }


  virtual ~ListAddableUsersRequestListQuery() = default;
};
class ListAddableUsersRequest : public Darabonba::Model {
public:
  shared_ptr<ListAddableUsersRequestListQuery> listQuery{};
  shared_ptr<long> opTenantId{};

  ListAddableUsersRequest() {}

  explicit ListAddableUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQuery) {
      res["ListQuery"] = listQuery ? boost::any(listQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListQuery"].type()) {
        ListAddableUsersRequestListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListQuery"]));
        listQuery = make_shared<ListAddableUsersRequestListQuery>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListAddableUsersRequest() = default;
};
class ListAddableUsersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> listQueryShrink{};
  shared_ptr<long> opTenantId{};

  ListAddableUsersShrinkRequest() {}

  explicit ListAddableUsersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQueryShrink) {
      res["ListQuery"] = boost::any(*listQueryShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      listQueryShrink = make_shared<string>(boost::any_cast<string>(m["ListQuery"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListAddableUsersShrinkRequest() = default;
};
class ListAddableUsersResponseBodyPageResultUserList : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> dingNumber{};
  shared_ptr<string> displayName{};
  shared_ptr<string> displayNameWithoutStatus{};
  shared_ptr<string> enableWhiteIp{};
  shared_ptr<string> feiShuRobot{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> id{};
  shared_ptr<string> mail{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<string> parentId{};
  shared_ptr<string> realName{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> weChatRobot{};
  shared_ptr<string> whiteIp{};

  ListAddableUsersResponseBodyPageResultUserList() {}

  explicit ListAddableUsersResponseBodyPageResultUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (dingNumber) {
      res["DingNumber"] = boost::any(*dingNumber);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (displayNameWithoutStatus) {
      res["DisplayNameWithoutStatus"] = boost::any(*displayNameWithoutStatus);
    }
    if (enableWhiteIp) {
      res["EnableWhiteIp"] = boost::any(*enableWhiteIp);
    }
    if (feiShuRobot) {
      res["FeiShuRobot"] = boost::any(*feiShuRobot);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mail) {
      res["Mail"] = boost::any(*mail);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (realName) {
      res["RealName"] = boost::any(*realName);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (weChatRobot) {
      res["WeChatRobot"] = boost::any(*weChatRobot);
    }
    if (whiteIp) {
      res["WhiteIp"] = boost::any(*whiteIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DingNumber") != m.end() && !m["DingNumber"].empty()) {
      dingNumber = make_shared<string>(boost::any_cast<string>(m["DingNumber"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("DisplayNameWithoutStatus") != m.end() && !m["DisplayNameWithoutStatus"].empty()) {
      displayNameWithoutStatus = make_shared<string>(boost::any_cast<string>(m["DisplayNameWithoutStatus"]));
    }
    if (m.find("EnableWhiteIp") != m.end() && !m["EnableWhiteIp"].empty()) {
      enableWhiteIp = make_shared<string>(boost::any_cast<string>(m["EnableWhiteIp"]));
    }
    if (m.find("FeiShuRobot") != m.end() && !m["FeiShuRobot"].empty()) {
      feiShuRobot = make_shared<string>(boost::any_cast<string>(m["FeiShuRobot"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Mail") != m.end() && !m["Mail"].empty()) {
      mail = make_shared<string>(boost::any_cast<string>(m["Mail"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("RealName") != m.end() && !m["RealName"].empty()) {
      realName = make_shared<string>(boost::any_cast<string>(m["RealName"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("WeChatRobot") != m.end() && !m["WeChatRobot"].empty()) {
      weChatRobot = make_shared<string>(boost::any_cast<string>(m["WeChatRobot"]));
    }
    if (m.find("WhiteIp") != m.end() && !m["WhiteIp"].empty()) {
      whiteIp = make_shared<string>(boost::any_cast<string>(m["WhiteIp"]));
    }
  }


  virtual ~ListAddableUsersResponseBodyPageResultUserList() = default;
};
class ListAddableUsersResponseBodyPageResult : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListAddableUsersResponseBodyPageResultUserList>> userList{};

  ListAddableUsersResponseBodyPageResult() {}

  explicit ListAddableUsersResponseBodyPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (userList) {
      vector<boost::any> temp1;
      for(auto item1:*userList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UserList") != m.end() && !m["UserList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserList"].type()) {
        vector<ListAddableUsersResponseBodyPageResultUserList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAddableUsersResponseBodyPageResultUserList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userList = make_shared<vector<ListAddableUsersResponseBodyPageResultUserList>>(expect1);
      }
    }
  }


  virtual ~ListAddableUsersResponseBodyPageResult() = default;
};
class ListAddableUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<ListAddableUsersResponseBodyPageResult> pageResult{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListAddableUsersResponseBody() {}

  explicit ListAddableUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageResult) {
      res["PageResult"] = pageResult ? boost::any(pageResult->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageResult") != m.end() && !m["PageResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageResult"].type()) {
        ListAddableUsersResponseBodyPageResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageResult"]));
        pageResult = make_shared<ListAddableUsersResponseBodyPageResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListAddableUsersResponseBody() = default;
};
class ListAddableUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAddableUsersResponseBody> body{};

  ListAddableUsersResponse() {}

  explicit ListAddableUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAddableUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAddableUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListAddableUsersResponse() = default;
};
class ListDataSourceWithConfigRequestListQuery : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> ownerList{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> scopeList{};
  shared_ptr<string> tag{};
  shared_ptr<vector<string>> typeList{};

  ListDataSourceWithConfigRequestListQuery() {}

  explicit ListDataSourceWithConfigRequestListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerList) {
      res["OwnerList"] = boost::any(*ownerList);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (scopeList) {
      res["ScopeList"] = boost::any(*scopeList);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (typeList) {
      res["TypeList"] = boost::any(*typeList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerList") != m.end() && !m["OwnerList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ScopeList") != m.end() && !m["ScopeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScopeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScopeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scopeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TypeList") != m.end() && !m["TypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      typeList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDataSourceWithConfigRequestListQuery() = default;
};
class ListDataSourceWithConfigRequest : public Darabonba::Model {
public:
  shared_ptr<ListDataSourceWithConfigRequestListQuery> listQuery{};
  shared_ptr<long> opTenantId{};

  ListDataSourceWithConfigRequest() {}

  explicit ListDataSourceWithConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQuery) {
      res["ListQuery"] = listQuery ? boost::any(listQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListQuery"].type()) {
        ListDataSourceWithConfigRequestListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListQuery"]));
        listQuery = make_shared<ListDataSourceWithConfigRequestListQuery>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListDataSourceWithConfigRequest() = default;
};
class ListDataSourceWithConfigShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> listQueryShrink{};
  shared_ptr<long> opTenantId{};

  ListDataSourceWithConfigShrinkRequest() {}

  explicit ListDataSourceWithConfigShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQueryShrink) {
      res["ListQuery"] = boost::any(*listQueryShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      listQueryShrink = make_shared<string>(boost::any_cast<string>(m["ListQuery"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListDataSourceWithConfigShrinkRequest() = default;
};
class ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfoConfigItemList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfoConfigItemList() {}

  explicit ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfoConfigItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfoConfigItemList() = default;
};
class ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfoConfigItemList>> configItemList{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creator{};
  shared_ptr<string> creatorName{};
  shared_ptr<string> description{};
  shared_ptr<string> env{};
  shared_ptr<long> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> scope{};
  shared_ptr<string> type{};

  ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo() {}

  explicit ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configItemList) {
      vector<boost::any> temp1;
      for(auto item1:*configItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigItemList"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigItemList") != m.end() && !m["ConfigItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigItemList"].type()) {
        vector<ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfoConfigItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfoConfigItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configItemList = make_shared<vector<ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfoConfigItemList>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo() = default;
};
class ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList() {}

  explicit ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList() = default;
};
class ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList>> configItemList{};
  shared_ptr<long> createTime{};
  shared_ptr<string> creator{};
  shared_ptr<string> creatorName{};
  shared_ptr<string> description{};
  shared_ptr<string> env{};
  shared_ptr<long> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> scope{};
  shared_ptr<string> type{};

  ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo() {}

  explicit ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configItemList) {
      vector<boost::any> temp1;
      for(auto item1:*configItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigItemList"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (creatorName) {
      res["CreatorName"] = boost::any(*creatorName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (ownerName) {
      res["OwnerName"] = boost::any(*ownerName);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigItemList") != m.end() && !m["ConfigItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigItemList"].type()) {
        vector<ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configItemList = make_shared<vector<ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfoConfigItemList>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("CreatorName") != m.end() && !m["CreatorName"].empty()) {
      creatorName = make_shared<string>(boost::any_cast<string>(m["CreatorName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("OwnerName") != m.end() && !m["OwnerName"].empty()) {
      ownerName = make_shared<string>(boost::any_cast<string>(m["OwnerName"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo() = default;
};
class ListDataSourceWithConfigResponseBodyPageResultDataSourceList : public Darabonba::Model {
public:
  shared_ptr<ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo> devDataSourceInfo{};
  shared_ptr<ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo> prodDataSourceInfo{};

  ListDataSourceWithConfigResponseBodyPageResultDataSourceList() {}

  explicit ListDataSourceWithConfigResponseBodyPageResultDataSourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (devDataSourceInfo) {
      res["DevDataSourceInfo"] = devDataSourceInfo ? boost::any(devDataSourceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (prodDataSourceInfo) {
      res["ProdDataSourceInfo"] = prodDataSourceInfo ? boost::any(prodDataSourceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DevDataSourceInfo") != m.end() && !m["DevDataSourceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DevDataSourceInfo"].type()) {
        ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DevDataSourceInfo"]));
        devDataSourceInfo = make_shared<ListDataSourceWithConfigResponseBodyPageResultDataSourceListDevDataSourceInfo>(model1);
      }
    }
    if (m.find("ProdDataSourceInfo") != m.end() && !m["ProdDataSourceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProdDataSourceInfo"].type()) {
        ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProdDataSourceInfo"]));
        prodDataSourceInfo = make_shared<ListDataSourceWithConfigResponseBodyPageResultDataSourceListProdDataSourceInfo>(model1);
      }
    }
  }


  virtual ~ListDataSourceWithConfigResponseBodyPageResultDataSourceList() = default;
};
class ListDataSourceWithConfigResponseBodyPageResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListDataSourceWithConfigResponseBodyPageResultDataSourceList>> dataSourceList{};
  shared_ptr<long> totalCount{};

  ListDataSourceWithConfigResponseBodyPageResult() {}

  explicit ListDataSourceWithConfigResponseBodyPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceList) {
      vector<boost::any> temp1;
      for(auto item1:*dataSourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSourceList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceList") != m.end() && !m["DataSourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSourceList"].type()) {
        vector<ListDataSourceWithConfigResponseBodyPageResultDataSourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceWithConfigResponseBodyPageResultDataSourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSourceList = make_shared<vector<ListDataSourceWithConfigResponseBodyPageResultDataSourceList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDataSourceWithConfigResponseBodyPageResult() = default;
};
class ListDataSourceWithConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<ListDataSourceWithConfigResponseBodyPageResult> pageResult{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDataSourceWithConfigResponseBody() {}

  explicit ListDataSourceWithConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageResult) {
      res["PageResult"] = pageResult ? boost::any(pageResult->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageResult") != m.end() && !m["PageResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageResult"].type()) {
        ListDataSourceWithConfigResponseBodyPageResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageResult"]));
        pageResult = make_shared<ListDataSourceWithConfigResponseBodyPageResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListDataSourceWithConfigResponseBody() = default;
};
class ListDataSourceWithConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSourceWithConfigResponseBody> body{};

  ListDataSourceWithConfigResponse() {}

  explicit ListDataSourceWithConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDataSourceWithConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourceWithConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourceWithConfigResponse() = default;
};
class ListFilesRequestListQuery : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> directory{};
  shared_ptr<string> env{};
  shared_ptr<long> projectId{};
  shared_ptr<bool> recursive{};

  ListFilesRequestListQuery() {}

  explicit ListFilesRequestListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (directory) {
      res["Directory"] = boost::any(*directory);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (recursive) {
      res["Recursive"] = boost::any(*recursive);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      directory = make_shared<string>(boost::any_cast<string>(m["Directory"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("Recursive") != m.end() && !m["Recursive"].empty()) {
      recursive = make_shared<bool>(boost::any_cast<bool>(m["Recursive"]));
    }
  }


  virtual ~ListFilesRequestListQuery() = default;
};
class ListFilesRequest : public Darabonba::Model {
public:
  shared_ptr<ListFilesRequestListQuery> listQuery{};
  shared_ptr<long> opTenantId{};

  ListFilesRequest() {}

  explicit ListFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQuery) {
      res["ListQuery"] = listQuery ? boost::any(listQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListQuery"].type()) {
        ListFilesRequestListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListQuery"]));
        listQuery = make_shared<ListFilesRequestListQuery>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListFilesRequest() = default;
};
class ListFilesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> listQueryShrink{};
  shared_ptr<long> opTenantId{};

  ListFilesShrinkRequest() {}

  explicit ListFilesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQueryShrink) {
      res["ListQuery"] = boost::any(*listQueryShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      listQueryShrink = make_shared<string>(boost::any_cast<string>(m["ListQuery"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListFilesShrinkRequest() = default;
};
class ListFilesResponseBodyFileList : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> content{};
  shared_ptr<string> creator{};
  shared_ptr<string> directory{};
  shared_ptr<string> fileType{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> lastModifier{};
  shared_ptr<string> name{};
  shared_ptr<long> projectId{};

  ListFilesResponseBodyFileList() {}

  explicit ListFilesResponseBodyFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (directory) {
      res["Directory"] = boost::any(*directory);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifier) {
      res["LastModifier"] = boost::any(*lastModifier);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      directory = make_shared<string>(boost::any_cast<string>(m["Directory"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("LastModifier") != m.end() && !m["LastModifier"].empty()) {
      lastModifier = make_shared<string>(boost::any_cast<string>(m["LastModifier"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~ListFilesResponseBodyFileList() = default;
};
class ListFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListFilesResponseBodyFileList>> fileList{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListFilesResponseBody() {}

  explicit ListFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (fileList) {
      vector<boost::any> temp1;
      for(auto item1:*fileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileList"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileList"].type()) {
        vector<ListFilesResponseBodyFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFilesResponseBodyFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileList = make_shared<vector<ListFilesResponseBodyFileList>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ListFilesResponseBody() = default;
};
class ListFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFilesResponseBody> body{};

  ListFilesResponse() {}

  explicit ListFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFilesResponseBody>(model1);
      }
    }
  }


  virtual ~ListFilesResponse() = default;
};
class ListInstancesRequestListQuery : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> bizUnitId{};
  shared_ptr<string> maxBizDate{};
  shared_ptr<string> maxRunDate{};
  shared_ptr<string> minBizDate{};
  shared_ptr<string> minRunDate{};
  shared_ptr<string> nodeId{};
  shared_ptr<vector<string>> ownerList{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> priorityList{};
  shared_ptr<long> projectId{};
  shared_ptr<vector<string>> runStatusList{};
  shared_ptr<bool> schedulePaused{};
  shared_ptr<vector<string>> schedulePeriodList{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> searchText{};
  shared_ptr<vector<string>> subBizTypeList{};

  ListInstancesRequestListQuery() {}

  explicit ListInstancesRequestListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizUnitId) {
      res["BizUnitId"] = boost::any(*bizUnitId);
    }
    if (maxBizDate) {
      res["MaxBizDate"] = boost::any(*maxBizDate);
    }
    if (maxRunDate) {
      res["MaxRunDate"] = boost::any(*maxRunDate);
    }
    if (minBizDate) {
      res["MinBizDate"] = boost::any(*minBizDate);
    }
    if (minRunDate) {
      res["MinRunDate"] = boost::any(*minRunDate);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (ownerList) {
      res["OwnerList"] = boost::any(*ownerList);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (priorityList) {
      res["PriorityList"] = boost::any(*priorityList);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (runStatusList) {
      res["RunStatusList"] = boost::any(*runStatusList);
    }
    if (schedulePaused) {
      res["SchedulePaused"] = boost::any(*schedulePaused);
    }
    if (schedulePeriodList) {
      res["SchedulePeriodList"] = boost::any(*schedulePeriodList);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (searchText) {
      res["SearchText"] = boost::any(*searchText);
    }
    if (subBizTypeList) {
      res["SubBizTypeList"] = boost::any(*subBizTypeList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizUnitId") != m.end() && !m["BizUnitId"].empty()) {
      bizUnitId = make_shared<long>(boost::any_cast<long>(m["BizUnitId"]));
    }
    if (m.find("MaxBizDate") != m.end() && !m["MaxBizDate"].empty()) {
      maxBizDate = make_shared<string>(boost::any_cast<string>(m["MaxBizDate"]));
    }
    if (m.find("MaxRunDate") != m.end() && !m["MaxRunDate"].empty()) {
      maxRunDate = make_shared<string>(boost::any_cast<string>(m["MaxRunDate"]));
    }
    if (m.find("MinBizDate") != m.end() && !m["MinBizDate"].empty()) {
      minBizDate = make_shared<string>(boost::any_cast<string>(m["MinBizDate"]));
    }
    if (m.find("MinRunDate") != m.end() && !m["MinRunDate"].empty()) {
      minRunDate = make_shared<string>(boost::any_cast<string>(m["MinRunDate"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("OwnerList") != m.end() && !m["OwnerList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PriorityList") != m.end() && !m["PriorityList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PriorityList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PriorityList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      priorityList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("RunStatusList") != m.end() && !m["RunStatusList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RunStatusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RunStatusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      runStatusList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SchedulePaused") != m.end() && !m["SchedulePaused"].empty()) {
      schedulePaused = make_shared<bool>(boost::any_cast<bool>(m["SchedulePaused"]));
    }
    if (m.find("SchedulePeriodList") != m.end() && !m["SchedulePeriodList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SchedulePeriodList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SchedulePeriodList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      schedulePeriodList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("SearchText") != m.end() && !m["SearchText"].empty()) {
      searchText = make_shared<string>(boost::any_cast<string>(m["SearchText"]));
    }
    if (m.find("SubBizTypeList") != m.end() && !m["SubBizTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SubBizTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubBizTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      subBizTypeList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListInstancesRequestListQuery() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<ListInstancesRequestListQuery> listQuery{};
  shared_ptr<long> opTenantId{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (listQuery) {
      res["ListQuery"] = listQuery ? boost::any(listQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListQuery"].type()) {
        ListInstancesRequestListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListQuery"]));
        listQuery = make_shared<ListInstancesRequestListQuery>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<string> listQueryShrink{};
  shared_ptr<long> opTenantId{};

  ListInstancesShrinkRequest() {}

  explicit ListInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (listQueryShrink) {
      res["ListQuery"] = boost::any(*listQueryShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      listQueryShrink = make_shared<string>(boost::any_cast<string>(m["ListQuery"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListInstancesShrinkRequest() = default;
};
class ListInstancesResponseBodyPageResultDataNodeInfoCreator : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ListInstancesResponseBodyPageResultDataNodeInfoCreator() {}

  explicit ListInstancesResponseBodyPageResultDataNodeInfoCreator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListInstancesResponseBodyPageResultDataNodeInfoCreator() = default;
};
class ListInstancesResponseBodyPageResultDataNodeInfoModifier : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ListInstancesResponseBodyPageResultDataNodeInfoModifier() {}

  explicit ListInstancesResponseBodyPageResultDataNodeInfoModifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListInstancesResponseBodyPageResultDataNodeInfoModifier() = default;
};
class ListInstancesResponseBodyPageResultDataNodeInfoOwnerList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ListInstancesResponseBodyPageResultDataNodeInfoOwnerList() {}

  explicit ListInstancesResponseBodyPageResultDataNodeInfoOwnerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListInstancesResponseBodyPageResultDataNodeInfoOwnerList() = default;
};
class ListInstancesResponseBodyPageResultDataNodeInfo : public Darabonba::Model {
public:
  shared_ptr<string> bizUnitName{};
  shared_ptr<string> createTime{};
  shared_ptr<ListInstancesResponseBodyPageResultDataNodeInfoCreator> creator{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> from{};
  shared_ptr<bool> hasDev{};
  shared_ptr<bool> hasProd{};
  shared_ptr<string> id{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<ListInstancesResponseBodyPageResultDataNodeInfoModifier> modifier{};
  shared_ptr<string> name{};
  shared_ptr<vector<ListInstancesResponseBodyPageResultDataNodeInfoOwnerList>> ownerList{};
  shared_ptr<vector<string>> priorityList{};
  shared_ptr<vector<string>> resourceGroupList{};
  shared_ptr<bool> schedulePaused{};
  shared_ptr<vector<string>> schedulePeriodList{};
  shared_ptr<string> subDetailType{};
  shared_ptr<string> type{};

  ListInstancesResponseBodyPageResultDataNodeInfo() {}

  explicit ListInstancesResponseBodyPageResultDataNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUnitName) {
      res["BizUnitName"] = boost::any(*bizUnitName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (hasDev) {
      res["HasDev"] = boost::any(*hasDev);
    }
    if (hasProd) {
      res["HasProd"] = boost::any(*hasProd);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (modifier) {
      res["Modifier"] = modifier ? boost::any(modifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerList) {
      vector<boost::any> temp1;
      for(auto item1:*ownerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OwnerList"] = boost::any(temp1);
    }
    if (priorityList) {
      res["PriorityList"] = boost::any(*priorityList);
    }
    if (resourceGroupList) {
      res["ResourceGroupList"] = boost::any(*resourceGroupList);
    }
    if (schedulePaused) {
      res["SchedulePaused"] = boost::any(*schedulePaused);
    }
    if (schedulePeriodList) {
      res["SchedulePeriodList"] = boost::any(*schedulePeriodList);
    }
    if (subDetailType) {
      res["SubDetailType"] = boost::any(*subDetailType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUnitName") != m.end() && !m["BizUnitName"].empty()) {
      bizUnitName = make_shared<string>(boost::any_cast<string>(m["BizUnitName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        ListInstancesResponseBodyPageResultDataNodeInfoCreator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<ListInstancesResponseBodyPageResultDataNodeInfoCreator>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("HasDev") != m.end() && !m["HasDev"].empty()) {
      hasDev = make_shared<bool>(boost::any_cast<bool>(m["HasDev"]));
    }
    if (m.find("HasProd") != m.end() && !m["HasProd"].empty()) {
      hasProd = make_shared<bool>(boost::any_cast<bool>(m["HasProd"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Modifier"].type()) {
        ListInstancesResponseBodyPageResultDataNodeInfoModifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Modifier"]));
        modifier = make_shared<ListInstancesResponseBodyPageResultDataNodeInfoModifier>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerList") != m.end() && !m["OwnerList"].empty()) {
      if (typeid(vector<boost::any>) == m["OwnerList"].type()) {
        vector<ListInstancesResponseBodyPageResultDataNodeInfoOwnerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OwnerList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyPageResultDataNodeInfoOwnerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ownerList = make_shared<vector<ListInstancesResponseBodyPageResultDataNodeInfoOwnerList>>(expect1);
      }
    }
    if (m.find("PriorityList") != m.end() && !m["PriorityList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PriorityList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PriorityList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      priorityList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroupList") != m.end() && !m["ResourceGroupList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceGroupList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceGroupList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceGroupList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SchedulePaused") != m.end() && !m["SchedulePaused"].empty()) {
      schedulePaused = make_shared<bool>(boost::any_cast<bool>(m["SchedulePaused"]));
    }
    if (m.find("SchedulePeriodList") != m.end() && !m["SchedulePeriodList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SchedulePeriodList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SchedulePeriodList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      schedulePeriodList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubDetailType") != m.end() && !m["SubDetailType"].empty()) {
      subDetailType = make_shared<string>(boost::any_cast<string>(m["SubDetailType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListInstancesResponseBodyPageResultDataNodeInfo() = default;
};
class ListInstancesResponseBodyPageResultData : public Darabonba::Model {
public:
  shared_ptr<string> bizDate{};
  shared_ptr<string> dueTime{};
  shared_ptr<string> duration{};
  shared_ptr<long> endExecuteTime{};
  shared_ptr<string> extendInfo{};
  shared_ptr<string> id{};
  shared_ptr<long> index{};
  shared_ptr<ListInstancesResponseBodyPageResultDataNodeInfo> nodeInfo{};
  shared_ptr<long> startExecuteTime{};
  shared_ptr<vector<string>> statusList{};

  ListInstancesResponseBodyPageResultData() {}

  explicit ListInstancesResponseBodyPageResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizDate) {
      res["BizDate"] = boost::any(*bizDate);
    }
    if (dueTime) {
      res["DueTime"] = boost::any(*dueTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (endExecuteTime) {
      res["EndExecuteTime"] = boost::any(*endExecuteTime);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (nodeInfo) {
      res["NodeInfo"] = nodeInfo ? boost::any(nodeInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startExecuteTime) {
      res["StartExecuteTime"] = boost::any(*startExecuteTime);
    }
    if (statusList) {
      res["StatusList"] = boost::any(*statusList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizDate") != m.end() && !m["BizDate"].empty()) {
      bizDate = make_shared<string>(boost::any_cast<string>(m["BizDate"]));
    }
    if (m.find("DueTime") != m.end() && !m["DueTime"].empty()) {
      dueTime = make_shared<string>(boost::any_cast<string>(m["DueTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("EndExecuteTime") != m.end() && !m["EndExecuteTime"].empty()) {
      endExecuteTime = make_shared<long>(boost::any_cast<long>(m["EndExecuteTime"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfo = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("NodeInfo") != m.end() && !m["NodeInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeInfo"].type()) {
        ListInstancesResponseBodyPageResultDataNodeInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeInfo"]));
        nodeInfo = make_shared<ListInstancesResponseBodyPageResultDataNodeInfo>(model1);
      }
    }
    if (m.find("StartExecuteTime") != m.end() && !m["StartExecuteTime"].empty()) {
      startExecuteTime = make_shared<long>(boost::any_cast<long>(m["StartExecuteTime"]));
    }
    if (m.find("StatusList") != m.end() && !m["StatusList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StatusList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StatusList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statusList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListInstancesResponseBodyPageResultData() = default;
};
class ListInstancesResponseBodyPageResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstancesResponseBodyPageResultData>> data{};
  shared_ptr<long> totalCount{};

  ListInstancesResponseBodyPageResult() {}

  explicit ListInstancesResponseBodyPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListInstancesResponseBodyPageResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyPageResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListInstancesResponseBodyPageResultData>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListInstancesResponseBodyPageResult() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<ListInstancesResponseBodyPageResult> pageResult{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageResult) {
      res["PageResult"] = pageResult ? boost::any(pageResult->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageResult") != m.end() && !m["PageResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageResult"].type()) {
        ListInstancesResponseBodyPageResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageResult"]));
        pageResult = make_shared<ListInstancesResponseBodyPageResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListInstancesResponseBody() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class ListNodeDownStreamRequestListQueryFilterList : public Darabonba::Model {
public:
  shared_ptr<bool> exclude{};
  shared_ptr<string> key{};
  shared_ptr<vector<string>> valueList{};

  ListNodeDownStreamRequestListQueryFilterList() {}

  explicit ListNodeDownStreamRequestListQueryFilterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exclude) {
      res["Exclude"] = boost::any(*exclude);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (valueList) {
      res["ValueList"] = boost::any(*valueList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exclude") != m.end() && !m["Exclude"].empty()) {
      exclude = make_shared<bool>(boost::any_cast<bool>(m["Exclude"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ValueList") != m.end() && !m["ValueList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ValueList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ValueList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      valueList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListNodeDownStreamRequestListQueryFilterList() = default;
};
class ListNodeDownStreamRequestListQueryNodeIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fieldIdList{};
  shared_ptr<string> id{};

  ListNodeDownStreamRequestListQueryNodeIdList() {}

  explicit ListNodeDownStreamRequestListQueryNodeIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldIdList) {
      res["FieldIdList"] = boost::any(*fieldIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldIdList") != m.end() && !m["FieldIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListNodeDownStreamRequestListQueryNodeIdList() = default;
};
class ListNodeDownStreamRequestListQuery : public Darabonba::Model {
public:
  shared_ptr<long> downStreamDepth{};
  shared_ptr<vector<ListNodeDownStreamRequestListQueryFilterList>> filterList{};
  shared_ptr<vector<ListNodeDownStreamRequestListQueryNodeIdList>> nodeIdList{};
  shared_ptr<long> projectId{};

  ListNodeDownStreamRequestListQuery() {}

  explicit ListNodeDownStreamRequestListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downStreamDepth) {
      res["DownStreamDepth"] = boost::any(*downStreamDepth);
    }
    if (filterList) {
      vector<boost::any> temp1;
      for(auto item1:*filterList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FilterList"] = boost::any(temp1);
    }
    if (nodeIdList) {
      vector<boost::any> temp1;
      for(auto item1:*nodeIdList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeIdList"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownStreamDepth") != m.end() && !m["DownStreamDepth"].empty()) {
      downStreamDepth = make_shared<long>(boost::any_cast<long>(m["DownStreamDepth"]));
    }
    if (m.find("FilterList") != m.end() && !m["FilterList"].empty()) {
      if (typeid(vector<boost::any>) == m["FilterList"].type()) {
        vector<ListNodeDownStreamRequestListQueryFilterList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FilterList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDownStreamRequestListQueryFilterList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filterList = make_shared<vector<ListNodeDownStreamRequestListQueryFilterList>>(expect1);
      }
    }
    if (m.find("NodeIdList") != m.end() && !m["NodeIdList"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeIdList"].type()) {
        vector<ListNodeDownStreamRequestListQueryNodeIdList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeIdList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDownStreamRequestListQueryNodeIdList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeIdList = make_shared<vector<ListNodeDownStreamRequestListQueryNodeIdList>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~ListNodeDownStreamRequestListQuery() = default;
};
class ListNodeDownStreamRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<ListNodeDownStreamRequestListQuery> listQuery{};
  shared_ptr<long> opTenantId{};

  ListNodeDownStreamRequest() {}

  explicit ListNodeDownStreamRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (listQuery) {
      res["ListQuery"] = listQuery ? boost::any(listQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListQuery"].type()) {
        ListNodeDownStreamRequestListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListQuery"]));
        listQuery = make_shared<ListNodeDownStreamRequestListQuery>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListNodeDownStreamRequest() = default;
};
class ListNodeDownStreamShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<string> listQueryShrink{};
  shared_ptr<long> opTenantId{};

  ListNodeDownStreamShrinkRequest() {}

  explicit ListNodeDownStreamShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (listQueryShrink) {
      res["ListQuery"] = boost::any(*listQueryShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      listQueryShrink = make_shared<string>(boost::any_cast<string>(m["ListQuery"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListNodeDownStreamShrinkRequest() = default;
};
class ListNodeDownStreamResponseBodyNodeInfoList : public Darabonba::Model {
public:
  shared_ptr<long> depth{};
  shared_ptr<vector<string>> fieldIdList{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListNodeDownStreamResponseBodyNodeInfoList() {}

  explicit ListNodeDownStreamResponseBodyNodeInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (depth) {
      res["Depth"] = boost::any(*depth);
    }
    if (fieldIdList) {
      res["FieldIdList"] = boost::any(*fieldIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("Depth") != m.end() && !m["Depth"].empty()) {
      depth = make_shared<long>(boost::any_cast<long>(m["Depth"]));
    }
    if (m.find("FieldIdList") != m.end() && !m["FieldIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListNodeDownStreamResponseBodyNodeInfoList() = default;
};
class ListNodeDownStreamResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<vector<ListNodeDownStreamResponseBodyNodeInfoList>> nodeInfoList{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListNodeDownStreamResponseBody() {}

  explicit ListNodeDownStreamResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nodeInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInfoList"] = boost::any(temp1);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NodeInfoList") != m.end() && !m["NodeInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInfoList"].type()) {
        vector<ListNodeDownStreamResponseBodyNodeInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDownStreamResponseBodyNodeInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInfoList = make_shared<vector<ListNodeDownStreamResponseBodyNodeInfoList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListNodeDownStreamResponseBody() = default;
};
class ListNodeDownStreamResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodeDownStreamResponseBody> body{};

  ListNodeDownStreamResponse() {}

  explicit ListNodeDownStreamResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListNodeDownStreamResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodeDownStreamResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodeDownStreamResponse() = default;
};
class ListNodesRequestListQuery : public Darabonba::Model {
public:
  shared_ptr<bool> dryRun{};
  shared_ptr<string> nodeBizType{};
  shared_ptr<vector<string>> nodeSubBizTypeList{};
  shared_ptr<vector<string>> ownerList{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> priorityList{};
  shared_ptr<long> projectId{};
  shared_ptr<bool> schedulePaused{};
  shared_ptr<vector<string>> schedulePeriodList{};
  shared_ptr<string> scheduleType{};
  shared_ptr<string> searchText{};

  ListNodesRequestListQuery() {}

  explicit ListNodesRequestListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (nodeBizType) {
      res["NodeBizType"] = boost::any(*nodeBizType);
    }
    if (nodeSubBizTypeList) {
      res["NodeSubBizTypeList"] = boost::any(*nodeSubBizTypeList);
    }
    if (ownerList) {
      res["OwnerList"] = boost::any(*ownerList);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (priorityList) {
      res["PriorityList"] = boost::any(*priorityList);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (schedulePaused) {
      res["SchedulePaused"] = boost::any(*schedulePaused);
    }
    if (schedulePeriodList) {
      res["SchedulePeriodList"] = boost::any(*schedulePeriodList);
    }
    if (scheduleType) {
      res["ScheduleType"] = boost::any(*scheduleType);
    }
    if (searchText) {
      res["SearchText"] = boost::any(*searchText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("NodeBizType") != m.end() && !m["NodeBizType"].empty()) {
      nodeBizType = make_shared<string>(boost::any_cast<string>(m["NodeBizType"]));
    }
    if (m.find("NodeSubBizTypeList") != m.end() && !m["NodeSubBizTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeSubBizTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeSubBizTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeSubBizTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerList") != m.end() && !m["OwnerList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PriorityList") != m.end() && !m["PriorityList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PriorityList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PriorityList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      priorityList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("SchedulePaused") != m.end() && !m["SchedulePaused"].empty()) {
      schedulePaused = make_shared<bool>(boost::any_cast<bool>(m["SchedulePaused"]));
    }
    if (m.find("SchedulePeriodList") != m.end() && !m["SchedulePeriodList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SchedulePeriodList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SchedulePeriodList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      schedulePeriodList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScheduleType") != m.end() && !m["ScheduleType"].empty()) {
      scheduleType = make_shared<string>(boost::any_cast<string>(m["ScheduleType"]));
    }
    if (m.find("SearchText") != m.end() && !m["SearchText"].empty()) {
      searchText = make_shared<string>(boost::any_cast<string>(m["SearchText"]));
    }
  }


  virtual ~ListNodesRequestListQuery() = default;
};
class ListNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<ListNodesRequestListQuery> listQuery{};
  shared_ptr<long> opTenantId{};

  ListNodesRequest() {}

  explicit ListNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (listQuery) {
      res["ListQuery"] = listQuery ? boost::any(listQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListQuery"].type()) {
        ListNodesRequestListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListQuery"]));
        listQuery = make_shared<ListNodesRequestListQuery>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListNodesRequest() = default;
};
class ListNodesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<string> listQueryShrink{};
  shared_ptr<long> opTenantId{};

  ListNodesShrinkRequest() {}

  explicit ListNodesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (listQueryShrink) {
      res["ListQuery"] = boost::any(*listQueryShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      listQueryShrink = make_shared<string>(boost::any_cast<string>(m["ListQuery"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListNodesShrinkRequest() = default;
};
class ListNodesResponseBodyPageResultNodeListCreator : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ListNodesResponseBodyPageResultNodeListCreator() {}

  explicit ListNodesResponseBodyPageResultNodeListCreator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListNodesResponseBodyPageResultNodeListCreator() = default;
};
class ListNodesResponseBodyPageResultNodeListModifier : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ListNodesResponseBodyPageResultNodeListModifier() {}

  explicit ListNodesResponseBodyPageResultNodeListModifier(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListNodesResponseBodyPageResultNodeListModifier() = default;
};
class ListNodesResponseBodyPageResultNodeListOwnerList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ListNodesResponseBodyPageResultNodeListOwnerList() {}

  explicit ListNodesResponseBodyPageResultNodeListOwnerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListNodesResponseBodyPageResultNodeListOwnerList() = default;
};
class ListNodesResponseBodyPageResultNodeListProjectInfo : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ListNodesResponseBodyPageResultNodeListProjectInfo() {}

  explicit ListNodesResponseBodyPageResultNodeListProjectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListNodesResponseBodyPageResultNodeListProjectInfo() = default;
};
class ListNodesResponseBodyPageResultNodeList : public Darabonba::Model {
public:
  shared_ptr<string> bizUnitName{};
  shared_ptr<string> createTime{};
  shared_ptr<ListNodesResponseBodyPageResultNodeListCreator> creator{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> extendInfo{};
  shared_ptr<string> from{};
  shared_ptr<bool> hasDev{};
  shared_ptr<bool> hasProd{};
  shared_ptr<string> id{};
  shared_ptr<string> lastModifiedTime{};
  shared_ptr<ListNodesResponseBodyPageResultNodeListModifier> modifier{};
  shared_ptr<string> name{};
  shared_ptr<vector<ListNodesResponseBodyPageResultNodeListOwnerList>> ownerList{};
  shared_ptr<vector<string>> priorityList{};
  shared_ptr<ListNodesResponseBodyPageResultNodeListProjectInfo> projectInfo{};
  shared_ptr<bool> schedulePaused{};
  shared_ptr<vector<string>> schedulePeriodList{};
  shared_ptr<string> subDetailType{};
  shared_ptr<string> type{};

  ListNodesResponseBodyPageResultNodeList() {}

  explicit ListNodesResponseBodyPageResultNodeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUnitName) {
      res["BizUnitName"] = boost::any(*bizUnitName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (hasDev) {
      res["HasDev"] = boost::any(*hasDev);
    }
    if (hasProd) {
      res["HasProd"] = boost::any(*hasProd);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (modifier) {
      res["Modifier"] = modifier ? boost::any(modifier->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerList) {
      vector<boost::any> temp1;
      for(auto item1:*ownerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OwnerList"] = boost::any(temp1);
    }
    if (priorityList) {
      res["PriorityList"] = boost::any(*priorityList);
    }
    if (projectInfo) {
      res["ProjectInfo"] = projectInfo ? boost::any(projectInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (schedulePaused) {
      res["SchedulePaused"] = boost::any(*schedulePaused);
    }
    if (schedulePeriodList) {
      res["SchedulePeriodList"] = boost::any(*schedulePeriodList);
    }
    if (subDetailType) {
      res["SubDetailType"] = boost::any(*subDetailType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUnitName") != m.end() && !m["BizUnitName"].empty()) {
      bizUnitName = make_shared<string>(boost::any_cast<string>(m["BizUnitName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        ListNodesResponseBodyPageResultNodeListCreator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<ListNodesResponseBodyPageResultNodeListCreator>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfo = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("HasDev") != m.end() && !m["HasDev"].empty()) {
      hasDev = make_shared<bool>(boost::any_cast<bool>(m["HasDev"]));
    }
    if (m.find("HasProd") != m.end() && !m["HasProd"].empty()) {
      hasProd = make_shared<bool>(boost::any_cast<bool>(m["HasProd"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<string>(boost::any_cast<string>(m["LastModifiedTime"]));
    }
    if (m.find("Modifier") != m.end() && !m["Modifier"].empty()) {
      if (typeid(map<string, boost::any>) == m["Modifier"].type()) {
        ListNodesResponseBodyPageResultNodeListModifier model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Modifier"]));
        modifier = make_shared<ListNodesResponseBodyPageResultNodeListModifier>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerList") != m.end() && !m["OwnerList"].empty()) {
      if (typeid(vector<boost::any>) == m["OwnerList"].type()) {
        vector<ListNodesResponseBodyPageResultNodeListOwnerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OwnerList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPageResultNodeListOwnerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ownerList = make_shared<vector<ListNodesResponseBodyPageResultNodeListOwnerList>>(expect1);
      }
    }
    if (m.find("PriorityList") != m.end() && !m["PriorityList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PriorityList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PriorityList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      priorityList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProjectInfo") != m.end() && !m["ProjectInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProjectInfo"].type()) {
        ListNodesResponseBodyPageResultNodeListProjectInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProjectInfo"]));
        projectInfo = make_shared<ListNodesResponseBodyPageResultNodeListProjectInfo>(model1);
      }
    }
    if (m.find("SchedulePaused") != m.end() && !m["SchedulePaused"].empty()) {
      schedulePaused = make_shared<bool>(boost::any_cast<bool>(m["SchedulePaused"]));
    }
    if (m.find("SchedulePeriodList") != m.end() && !m["SchedulePeriodList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SchedulePeriodList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SchedulePeriodList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      schedulePeriodList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SubDetailType") != m.end() && !m["SubDetailType"].empty()) {
      subDetailType = make_shared<string>(boost::any_cast<string>(m["SubDetailType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListNodesResponseBodyPageResultNodeList() = default;
};
class ListNodesResponseBodyPageResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesResponseBodyPageResultNodeList>> nodeList{};
  shared_ptr<long> totalCount{};

  ListNodesResponseBodyPageResult() {}

  explicit ListNodesResponseBodyPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeList) {
      vector<boost::any> temp1;
      for(auto item1:*nodeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeList") != m.end() && !m["NodeList"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeList"].type()) {
        vector<ListNodesResponseBodyPageResultNodeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPageResultNodeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeList = make_shared<vector<ListNodesResponseBodyPageResultNodeList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListNodesResponseBodyPageResult() = default;
};
class ListNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<ListNodesResponseBodyPageResult> pageResult{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListNodesResponseBody() {}

  explicit ListNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageResult) {
      res["PageResult"] = pageResult ? boost::any(pageResult->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageResult") != m.end() && !m["PageResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageResult"].type()) {
        ListNodesResponseBodyPageResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageResult"]));
        pageResult = make_shared<ListNodesResponseBodyPageResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListNodesResponseBody() = default;
};
class ListNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodesResponseBody> body{};

  ListNodesResponse() {}

  explicit ListNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodesResponse() = default;
};
class ListResourcePermissionOperationLogRequestListQuery : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchText{};
  shared_ptr<string> tabType{};

  ListResourcePermissionOperationLogRequestListQuery() {}

  explicit ListResourcePermissionOperationLogRequestListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (searchText) {
      res["SearchText"] = boost::any(*searchText);
    }
    if (tabType) {
      res["TabType"] = boost::any(*tabType);
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
    if (m.find("SearchText") != m.end() && !m["SearchText"].empty()) {
      searchText = make_shared<string>(boost::any_cast<string>(m["SearchText"]));
    }
    if (m.find("TabType") != m.end() && !m["TabType"].empty()) {
      tabType = make_shared<string>(boost::any_cast<string>(m["TabType"]));
    }
  }


  virtual ~ListResourcePermissionOperationLogRequestListQuery() = default;
};
class ListResourcePermissionOperationLogRequest : public Darabonba::Model {
public:
  shared_ptr<ListResourcePermissionOperationLogRequestListQuery> listQuery{};
  shared_ptr<long> opTenantId{};

  ListResourcePermissionOperationLogRequest() {}

  explicit ListResourcePermissionOperationLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQuery) {
      res["ListQuery"] = listQuery ? boost::any(listQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListQuery"].type()) {
        ListResourcePermissionOperationLogRequestListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListQuery"]));
        listQuery = make_shared<ListResourcePermissionOperationLogRequestListQuery>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListResourcePermissionOperationLogRequest() = default;
};
class ListResourcePermissionOperationLogShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> listQueryShrink{};
  shared_ptr<long> opTenantId{};

  ListResourcePermissionOperationLogShrinkRequest() {}

  explicit ListResourcePermissionOperationLogShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQueryShrink) {
      res["ListQuery"] = boost::any(*listQueryShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      listQueryShrink = make_shared<string>(boost::any_cast<string>(m["ListQuery"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListResourcePermissionOperationLogShrinkRequest() = default;
};
class ListResourcePermissionOperationLogResponseBodyPageResultDataAccount : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListResourcePermissionOperationLogResponseBodyPageResultDataAccount() {}

  explicit ListResourcePermissionOperationLogResponseBodyPageResultDataAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcePermissionOperationLogResponseBodyPageResultDataAccount() = default;
};
class ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> type{};

  ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod() {}

  explicit ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod() = default;
};
class ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> env{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo() {}

  explicit ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo() = default;
};
class ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> env{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo() {}

  explicit ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo() = default;
};
class ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo : public Darabonba::Model {
public:
  shared_ptr<ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo> bizUnitInfo{};
  shared_ptr<string> displayName{};
  shared_ptr<string> env{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo> projectInfo{};
  shared_ptr<string> type{};

  ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo() {}

  explicit ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUnitInfo) {
      res["BizUnitInfo"] = bizUnitInfo ? boost::any(bizUnitInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectInfo) {
      res["ProjectInfo"] = projectInfo ? boost::any(projectInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUnitInfo") != m.end() && !m["BizUnitInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["BizUnitInfo"].type()) {
        ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BizUnitInfo"]));
        bizUnitInfo = make_shared<ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoBizUnitInfo>(model1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectInfo") != m.end() && !m["ProjectInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProjectInfo"].type()) {
        ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProjectInfo"]));
        projectInfo = make_shared<ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfoProjectInfo>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo() = default;
};
class ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount() {}

  explicit ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount() = default;
};
class ListResourcePermissionOperationLogResponseBodyPageResultData : public Darabonba::Model {
public:
  shared_ptr<ListResourcePermissionOperationLogResponseBodyPageResultDataAccount> account{};
  shared_ptr<string> authScope{};
  shared_ptr<long> operateId{};
  shared_ptr<long> operateTime{};
  shared_ptr<string> operateType{};
  shared_ptr<ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod> period{};
  shared_ptr<string> reason{};
  shared_ptr<ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo> resourceInfo{};
  shared_ptr<ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount> targetAccount{};

  ListResourcePermissionOperationLogResponseBodyPageResultData() {}

  explicit ListResourcePermissionOperationLogResponseBodyPageResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (account) {
      res["Account"] = account ? boost::any(account->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (authScope) {
      res["AuthScope"] = boost::any(*authScope);
    }
    if (operateId) {
      res["OperateId"] = boost::any(*operateId);
    }
    if (operateTime) {
      res["OperateTime"] = boost::any(*operateTime);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (period) {
      res["Period"] = period ? boost::any(period->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (resourceInfo) {
      res["ResourceInfo"] = resourceInfo ? boost::any(resourceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetAccount) {
      res["TargetAccount"] = targetAccount ? boost::any(targetAccount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Account") != m.end() && !m["Account"].empty()) {
      if (typeid(map<string, boost::any>) == m["Account"].type()) {
        ListResourcePermissionOperationLogResponseBodyPageResultDataAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Account"]));
        account = make_shared<ListResourcePermissionOperationLogResponseBodyPageResultDataAccount>(model1);
      }
    }
    if (m.find("AuthScope") != m.end() && !m["AuthScope"].empty()) {
      authScope = make_shared<string>(boost::any_cast<string>(m["AuthScope"]));
    }
    if (m.find("OperateId") != m.end() && !m["OperateId"].empty()) {
      operateId = make_shared<long>(boost::any_cast<long>(m["OperateId"]));
    }
    if (m.find("OperateTime") != m.end() && !m["OperateTime"].empty()) {
      operateTime = make_shared<long>(boost::any_cast<long>(m["OperateTime"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      if (typeid(map<string, boost::any>) == m["Period"].type()) {
        ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Period"]));
        period = make_shared<ListResourcePermissionOperationLogResponseBodyPageResultDataPeriod>(model1);
      }
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("ResourceInfo") != m.end() && !m["ResourceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceInfo"].type()) {
        ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceInfo"]));
        resourceInfo = make_shared<ListResourcePermissionOperationLogResponseBodyPageResultDataResourceInfo>(model1);
      }
    }
    if (m.find("TargetAccount") != m.end() && !m["TargetAccount"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetAccount"].type()) {
        ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetAccount"]));
        targetAccount = make_shared<ListResourcePermissionOperationLogResponseBodyPageResultDataTargetAccount>(model1);
      }
    }
  }


  virtual ~ListResourcePermissionOperationLogResponseBodyPageResultData() = default;
};
class ListResourcePermissionOperationLogResponseBodyPageResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourcePermissionOperationLogResponseBodyPageResultData>> data{};
  shared_ptr<long> totalCount{};

  ListResourcePermissionOperationLogResponseBodyPageResult() {}

  explicit ListResourcePermissionOperationLogResponseBodyPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListResourcePermissionOperationLogResponseBodyPageResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcePermissionOperationLogResponseBodyPageResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListResourcePermissionOperationLogResponseBodyPageResultData>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListResourcePermissionOperationLogResponseBodyPageResult() = default;
};
class ListResourcePermissionOperationLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<ListResourcePermissionOperationLogResponseBodyPageResult> pageResult{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListResourcePermissionOperationLogResponseBody() {}

  explicit ListResourcePermissionOperationLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageResult) {
      res["PageResult"] = pageResult ? boost::any(pageResult->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageResult") != m.end() && !m["PageResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageResult"].type()) {
        ListResourcePermissionOperationLogResponseBodyPageResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageResult"]));
        pageResult = make_shared<ListResourcePermissionOperationLogResponseBodyPageResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListResourcePermissionOperationLogResponseBody() = default;
};
class ListResourcePermissionOperationLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcePermissionOperationLogResponseBody> body{};

  ListResourcePermissionOperationLogResponse() {}

  explicit ListResourcePermissionOperationLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListResourcePermissionOperationLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcePermissionOperationLogResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcePermissionOperationLogResponse() = default;
};
class ListResourcePermissionsRequestListQuery : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchText{};
  shared_ptr<string> tabType{};

  ListResourcePermissionsRequestListQuery() {}

  explicit ListResourcePermissionsRequestListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (searchText) {
      res["SearchText"] = boost::any(*searchText);
    }
    if (tabType) {
      res["TabType"] = boost::any(*tabType);
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
    if (m.find("SearchText") != m.end() && !m["SearchText"].empty()) {
      searchText = make_shared<string>(boost::any_cast<string>(m["SearchText"]));
    }
    if (m.find("TabType") != m.end() && !m["TabType"].empty()) {
      tabType = make_shared<string>(boost::any_cast<string>(m["TabType"]));
    }
  }


  virtual ~ListResourcePermissionsRequestListQuery() = default;
};
class ListResourcePermissionsRequest : public Darabonba::Model {
public:
  shared_ptr<ListResourcePermissionsRequestListQuery> listQuery{};
  shared_ptr<long> opTenantId{};

  ListResourcePermissionsRequest() {}

  explicit ListResourcePermissionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQuery) {
      res["ListQuery"] = listQuery ? boost::any(listQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListQuery"].type()) {
        ListResourcePermissionsRequestListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListQuery"]));
        listQuery = make_shared<ListResourcePermissionsRequestListQuery>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListResourcePermissionsRequest() = default;
};
class ListResourcePermissionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> listQueryShrink{};
  shared_ptr<long> opTenantId{};

  ListResourcePermissionsShrinkRequest() {}

  explicit ListResourcePermissionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQueryShrink) {
      res["ListQuery"] = boost::any(*listQueryShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      listQueryShrink = make_shared<string>(boost::any_cast<string>(m["ListQuery"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListResourcePermissionsShrinkRequest() = default;
};
class ListResourcePermissionsResponseBodyPageResultDataPeriod : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> type{};

  ListResourcePermissionsResponseBodyPageResultDataPeriod() {}

  explicit ListResourcePermissionsResponseBodyPageResultDataPeriod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcePermissionsResponseBodyPageResultDataPeriod() = default;
};
class ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> type{};

  ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod() {}

  explicit ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod() = default;
};
class ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList : public Darabonba::Model {
public:
  shared_ptr<ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod> period{};
  shared_ptr<string> permissionType{};

  ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList() {}

  explicit ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (period) {
      res["Period"] = period ? boost::any(period->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (permissionType) {
      res["PermissionType"] = boost::any(*permissionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      if (typeid(map<string, boost::any>) == m["Period"].type()) {
        ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Period"]));
        period = make_shared<ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodListPeriod>(model1);
      }
    }
    if (m.find("PermissionType") != m.end() && !m["PermissionType"].empty()) {
      permissionType = make_shared<string>(boost::any_cast<string>(m["PermissionType"]));
    }
  }


  virtual ~ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList() = default;
};
class ListResourcePermissionsResponseBodyPageResultDataResourceInfoBizUnitInfo : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> env{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ListResourcePermissionsResponseBodyPageResultDataResourceInfoBizUnitInfo() {}

  explicit ListResourcePermissionsResponseBodyPageResultDataResourceInfoBizUnitInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListResourcePermissionsResponseBodyPageResultDataResourceInfoBizUnitInfo() = default;
};
class ListResourcePermissionsResponseBodyPageResultDataResourceInfoProjectInfo : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> env{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  ListResourcePermissionsResponseBodyPageResultDataResourceInfoProjectInfo() {}

  explicit ListResourcePermissionsResponseBodyPageResultDataResourceInfoProjectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListResourcePermissionsResponseBodyPageResultDataResourceInfoProjectInfo() = default;
};
class ListResourcePermissionsResponseBodyPageResultDataResourceInfo : public Darabonba::Model {
public:
  shared_ptr<ListResourcePermissionsResponseBodyPageResultDataResourceInfoBizUnitInfo> bizUnitInfo{};
  shared_ptr<string> displayName{};
  shared_ptr<string> env{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<ListResourcePermissionsResponseBodyPageResultDataResourceInfoProjectInfo> projectInfo{};
  shared_ptr<string> type{};

  ListResourcePermissionsResponseBodyPageResultDataResourceInfo() {}

  explicit ListResourcePermissionsResponseBodyPageResultDataResourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizUnitInfo) {
      res["BizUnitInfo"] = bizUnitInfo ? boost::any(bizUnitInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectInfo) {
      res["ProjectInfo"] = projectInfo ? boost::any(projectInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizUnitInfo") != m.end() && !m["BizUnitInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["BizUnitInfo"].type()) {
        ListResourcePermissionsResponseBodyPageResultDataResourceInfoBizUnitInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BizUnitInfo"]));
        bizUnitInfo = make_shared<ListResourcePermissionsResponseBodyPageResultDataResourceInfoBizUnitInfo>(model1);
      }
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectInfo") != m.end() && !m["ProjectInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProjectInfo"].type()) {
        ListResourcePermissionsResponseBodyPageResultDataResourceInfoProjectInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProjectInfo"]));
        projectInfo = make_shared<ListResourcePermissionsResponseBodyPageResultDataResourceInfoProjectInfo>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcePermissionsResponseBodyPageResultDataResourceInfo() = default;
};
class ListResourcePermissionsResponseBodyPageResultDataTargetAccount : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListResourcePermissionsResponseBodyPageResultDataTargetAccount() {}

  explicit ListResourcePermissionsResponseBodyPageResultDataTargetAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcePermissionsResponseBodyPageResultDataTargetAccount() = default;
};
class ListResourcePermissionsResponseBodyPageResultData : public Darabonba::Model {
public:
  shared_ptr<string> authScope{};
  shared_ptr<ListResourcePermissionsResponseBodyPageResultDataPeriod> period{};
  shared_ptr<vector<ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList>> permissionPeriodList{};
  shared_ptr<string> recordId{};
  shared_ptr<ListResourcePermissionsResponseBodyPageResultDataResourceInfo> resourceInfo{};
  shared_ptr<ListResourcePermissionsResponseBodyPageResultDataTargetAccount> targetAccount{};

  ListResourcePermissionsResponseBodyPageResultData() {}

  explicit ListResourcePermissionsResponseBodyPageResultData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authScope) {
      res["AuthScope"] = boost::any(*authScope);
    }
    if (period) {
      res["Period"] = period ? boost::any(period->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (permissionPeriodList) {
      vector<boost::any> temp1;
      for(auto item1:*permissionPeriodList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermissionPeriodList"] = boost::any(temp1);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    if (resourceInfo) {
      res["ResourceInfo"] = resourceInfo ? boost::any(resourceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetAccount) {
      res["TargetAccount"] = targetAccount ? boost::any(targetAccount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthScope") != m.end() && !m["AuthScope"].empty()) {
      authScope = make_shared<string>(boost::any_cast<string>(m["AuthScope"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      if (typeid(map<string, boost::any>) == m["Period"].type()) {
        ListResourcePermissionsResponseBodyPageResultDataPeriod model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Period"]));
        period = make_shared<ListResourcePermissionsResponseBodyPageResultDataPeriod>(model1);
      }
    }
    if (m.find("PermissionPeriodList") != m.end() && !m["PermissionPeriodList"].empty()) {
      if (typeid(vector<boost::any>) == m["PermissionPeriodList"].type()) {
        vector<ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermissionPeriodList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissionPeriodList = make_shared<vector<ListResourcePermissionsResponseBodyPageResultDataPermissionPeriodList>>(expect1);
      }
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
    if (m.find("ResourceInfo") != m.end() && !m["ResourceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceInfo"].type()) {
        ListResourcePermissionsResponseBodyPageResultDataResourceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceInfo"]));
        resourceInfo = make_shared<ListResourcePermissionsResponseBodyPageResultDataResourceInfo>(model1);
      }
    }
    if (m.find("TargetAccount") != m.end() && !m["TargetAccount"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetAccount"].type()) {
        ListResourcePermissionsResponseBodyPageResultDataTargetAccount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetAccount"]));
        targetAccount = make_shared<ListResourcePermissionsResponseBodyPageResultDataTargetAccount>(model1);
      }
    }
  }


  virtual ~ListResourcePermissionsResponseBodyPageResultData() = default;
};
class ListResourcePermissionsResponseBodyPageResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourcePermissionsResponseBodyPageResultData>> data{};
  shared_ptr<long> totalCount{};

  ListResourcePermissionsResponseBodyPageResult() {}

  explicit ListResourcePermissionsResponseBodyPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListResourcePermissionsResponseBodyPageResultData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcePermissionsResponseBodyPageResultData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListResourcePermissionsResponseBodyPageResultData>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListResourcePermissionsResponseBodyPageResult() = default;
};
class ListResourcePermissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<ListResourcePermissionsResponseBodyPageResult> pageResult{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListResourcePermissionsResponseBody() {}

  explicit ListResourcePermissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageResult) {
      res["PageResult"] = pageResult ? boost::any(pageResult->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageResult") != m.end() && !m["PageResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageResult"].type()) {
        ListResourcePermissionsResponseBodyPageResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageResult"]));
        pageResult = make_shared<ListResourcePermissionsResponseBodyPageResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListResourcePermissionsResponseBody() = default;
};
class ListResourcePermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcePermissionsResponseBody> body{};

  ListResourcePermissionsResponse() {}

  explicit ListResourcePermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListResourcePermissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcePermissionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcePermissionsResponse() = default;
};
class ListTenantMembersRequestListQuery : public Darabonba::Model {
public:
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> roleList{};
  shared_ptr<string> searchText{};
  shared_ptr<vector<string>> userGroupIdList{};

  ListTenantMembersRequestListQuery() {}

  explicit ListTenantMembersRequestListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (roleList) {
      res["RoleList"] = boost::any(*roleList);
    }
    if (searchText) {
      res["SearchText"] = boost::any(*searchText);
    }
    if (userGroupIdList) {
      res["UserGroupIdList"] = boost::any(*userGroupIdList);
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
    if (m.find("RoleList") != m.end() && !m["RoleList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RoleList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roleList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SearchText") != m.end() && !m["SearchText"].empty()) {
      searchText = make_shared<string>(boost::any_cast<string>(m["SearchText"]));
    }
    if (m.find("UserGroupIdList") != m.end() && !m["UserGroupIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTenantMembersRequestListQuery() = default;
};
class ListTenantMembersRequest : public Darabonba::Model {
public:
  shared_ptr<ListTenantMembersRequestListQuery> listQuery{};
  shared_ptr<long> opTenantId{};

  ListTenantMembersRequest() {}

  explicit ListTenantMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQuery) {
      res["ListQuery"] = listQuery ? boost::any(listQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListQuery"].type()) {
        ListTenantMembersRequestListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListQuery"]));
        listQuery = make_shared<ListTenantMembersRequestListQuery>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListTenantMembersRequest() = default;
};
class ListTenantMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> listQueryShrink{};
  shared_ptr<long> opTenantId{};

  ListTenantMembersShrinkRequest() {}

  explicit ListTenantMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQueryShrink) {
      res["ListQuery"] = boost::any(*listQueryShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      listQueryShrink = make_shared<string>(boost::any_cast<string>(m["ListQuery"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListTenantMembersShrinkRequest() = default;
};
class ListTenantMembersResponseBodyPageResultUserListUserGroupList : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  ListTenantMembersResponseBodyPageResultUserListUserGroupList() {}

  explicit ListTenantMembersResponseBodyPageResultUserListUserGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListTenantMembersResponseBodyPageResultUserListUserGroupList() = default;
};
class ListTenantMembersResponseBodyPageResultUserList : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> dingNumber{};
  shared_ptr<string> displayName{};
  shared_ptr<string> displayNameWithoutStatus{};
  shared_ptr<string> enableWhiteIp{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> id{};
  shared_ptr<string> mail{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<string> name{};
  shared_ptr<string> nickName{};
  shared_ptr<string> realName{};
  shared_ptr<vector<string>> roleList{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> sourceType{};
  shared_ptr<vector<ListTenantMembersResponseBodyPageResultUserListUserGroupList>> userGroupList{};
  shared_ptr<string> whiteIp{};

  ListTenantMembersResponseBodyPageResultUserList() {}

  explicit ListTenantMembersResponseBodyPageResultUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (dingNumber) {
      res["DingNumber"] = boost::any(*dingNumber);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (displayNameWithoutStatus) {
      res["DisplayNameWithoutStatus"] = boost::any(*displayNameWithoutStatus);
    }
    if (enableWhiteIp) {
      res["EnableWhiteIp"] = boost::any(*enableWhiteIp);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (mail) {
      res["Mail"] = boost::any(*mail);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (realName) {
      res["RealName"] = boost::any(*realName);
    }
    if (roleList) {
      res["RoleList"] = boost::any(*roleList);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (userGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*userGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserGroupList"] = boost::any(temp1);
    }
    if (whiteIp) {
      res["WhiteIp"] = boost::any(*whiteIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DingNumber") != m.end() && !m["DingNumber"].empty()) {
      dingNumber = make_shared<string>(boost::any_cast<string>(m["DingNumber"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("DisplayNameWithoutStatus") != m.end() && !m["DisplayNameWithoutStatus"].empty()) {
      displayNameWithoutStatus = make_shared<string>(boost::any_cast<string>(m["DisplayNameWithoutStatus"]));
    }
    if (m.find("EnableWhiteIp") != m.end() && !m["EnableWhiteIp"].empty()) {
      enableWhiteIp = make_shared<string>(boost::any_cast<string>(m["EnableWhiteIp"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Mail") != m.end() && !m["Mail"].empty()) {
      mail = make_shared<string>(boost::any_cast<string>(m["Mail"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("RealName") != m.end() && !m["RealName"].empty()) {
      realName = make_shared<string>(boost::any_cast<string>(m["RealName"]));
    }
    if (m.find("RoleList") != m.end() && !m["RoleList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RoleList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roleList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("UserGroupList") != m.end() && !m["UserGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserGroupList"].type()) {
        vector<ListTenantMembersResponseBodyPageResultUserListUserGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTenantMembersResponseBodyPageResultUserListUserGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userGroupList = make_shared<vector<ListTenantMembersResponseBodyPageResultUserListUserGroupList>>(expect1);
      }
    }
    if (m.find("WhiteIp") != m.end() && !m["WhiteIp"].empty()) {
      whiteIp = make_shared<string>(boost::any_cast<string>(m["WhiteIp"]));
    }
  }


  virtual ~ListTenantMembersResponseBodyPageResultUserList() = default;
};
class ListTenantMembersResponseBodyPageResult : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListTenantMembersResponseBodyPageResultUserList>> userList{};

  ListTenantMembersResponseBodyPageResult() {}

  explicit ListTenantMembersResponseBodyPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (userList) {
      vector<boost::any> temp1;
      for(auto item1:*userList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UserList") != m.end() && !m["UserList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserList"].type()) {
        vector<ListTenantMembersResponseBodyPageResultUserList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTenantMembersResponseBodyPageResultUserList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userList = make_shared<vector<ListTenantMembersResponseBodyPageResultUserList>>(expect1);
      }
    }
  }


  virtual ~ListTenantMembersResponseBodyPageResult() = default;
};
class ListTenantMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<ListTenantMembersResponseBodyPageResult> pageResult{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListTenantMembersResponseBody() {}

  explicit ListTenantMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageResult) {
      res["PageResult"] = pageResult ? boost::any(pageResult->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageResult") != m.end() && !m["PageResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageResult"].type()) {
        ListTenantMembersResponseBodyPageResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageResult"]));
        pageResult = make_shared<ListTenantMembersResponseBodyPageResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListTenantMembersResponseBody() = default;
};
class ListTenantMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTenantMembersResponseBody> body{};

  ListTenantMembersResponse() {}

  explicit ListTenantMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTenantMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTenantMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListTenantMembersResponse() = default;
};
class ListUserGroupMembersRequestListQuery : public Darabonba::Model {
public:
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userGroupId{};
  shared_ptr<vector<string>> userIdList{};

  ListUserGroupMembersRequestListQuery() {}

  explicit ListUserGroupMembersRequestListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userIdList) {
      res["UserIdList"] = boost::any(*userIdList);
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
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserIdList") != m.end() && !m["UserIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListUserGroupMembersRequestListQuery() = default;
};
class ListUserGroupMembersRequest : public Darabonba::Model {
public:
  shared_ptr<ListUserGroupMembersRequestListQuery> listQuery{};
  shared_ptr<long> opTenantId{};

  ListUserGroupMembersRequest() {}

  explicit ListUserGroupMembersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQuery) {
      res["ListQuery"] = listQuery ? boost::any(listQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListQuery"].type()) {
        ListUserGroupMembersRequestListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListQuery"]));
        listQuery = make_shared<ListUserGroupMembersRequestListQuery>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListUserGroupMembersRequest() = default;
};
class ListUserGroupMembersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> listQueryShrink{};
  shared_ptr<long> opTenantId{};

  ListUserGroupMembersShrinkRequest() {}

  explicit ListUserGroupMembersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQueryShrink) {
      res["ListQuery"] = boost::any(*listQueryShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      listQueryShrink = make_shared<string>(boost::any_cast<string>(m["ListQuery"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListUserGroupMembersShrinkRequest() = default;
};
class ListUserGroupMembersResponseBodyPageResultMemberListCreator : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};

  ListUserGroupMembersResponseBodyPageResultMemberListCreator() {}

  explicit ListUserGroupMembersResponseBodyPageResultMemberListCreator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListUserGroupMembersResponseBodyPageResultMemberListCreator() = default;
};
class ListUserGroupMembersResponseBodyPageResultMemberListUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};

  ListUserGroupMembersResponseBodyPageResultMemberListUserInfo() {}

  explicit ListUserGroupMembersResponseBodyPageResultMemberListUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListUserGroupMembersResponseBodyPageResultMemberListUserInfo() = default;
};
class ListUserGroupMembersResponseBodyPageResultMemberList : public Darabonba::Model {
public:
  shared_ptr<ListUserGroupMembersResponseBodyPageResultMemberListCreator> creator{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> id{};
  shared_ptr<string> userGroupId{};
  shared_ptr<ListUserGroupMembersResponseBodyPageResultMemberListUserInfo> userInfo{};
  shared_ptr<string> userRole{};

  ListUserGroupMembersResponseBodyPageResultMemberList() {}

  explicit ListUserGroupMembersResponseBodyPageResultMemberList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["Creator"] = creator ? boost::any(creator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userInfo) {
      res["UserInfo"] = userInfo ? boost::any(userInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userRole) {
      res["UserRole"] = boost::any(*userRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Creator"].type()) {
        ListUserGroupMembersResponseBodyPageResultMemberListCreator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Creator"]));
        creator = make_shared<ListUserGroupMembersResponseBodyPageResultMemberListCreator>(model1);
      }
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserInfo"].type()) {
        ListUserGroupMembersResponseBodyPageResultMemberListUserInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserInfo"]));
        userInfo = make_shared<ListUserGroupMembersResponseBodyPageResultMemberListUserInfo>(model1);
      }
    }
    if (m.find("UserRole") != m.end() && !m["UserRole"].empty()) {
      userRole = make_shared<string>(boost::any_cast<string>(m["UserRole"]));
    }
  }


  virtual ~ListUserGroupMembersResponseBodyPageResultMemberList() = default;
};
class ListUserGroupMembersResponseBodyPageResult : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserGroupMembersResponseBodyPageResultMemberList>> memberList{};
  shared_ptr<long> totalCount{};

  ListUserGroupMembersResponseBodyPageResult() {}

  explicit ListUserGroupMembersResponseBodyPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberList) {
      vector<boost::any> temp1;
      for(auto item1:*memberList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MemberList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberList") != m.end() && !m["MemberList"].empty()) {
      if (typeid(vector<boost::any>) == m["MemberList"].type()) {
        vector<ListUserGroupMembersResponseBodyPageResultMemberList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MemberList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupMembersResponseBodyPageResultMemberList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        memberList = make_shared<vector<ListUserGroupMembersResponseBodyPageResultMemberList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListUserGroupMembersResponseBodyPageResult() = default;
};
class ListUserGroupMembersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<ListUserGroupMembersResponseBodyPageResult> pageResult{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListUserGroupMembersResponseBody() {}

  explicit ListUserGroupMembersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageResult) {
      res["PageResult"] = pageResult ? boost::any(pageResult->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageResult") != m.end() && !m["PageResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageResult"].type()) {
        ListUserGroupMembersResponseBodyPageResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageResult"]));
        pageResult = make_shared<ListUserGroupMembersResponseBodyPageResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListUserGroupMembersResponseBody() = default;
};
class ListUserGroupMembersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserGroupMembersResponseBody> body{};

  ListUserGroupMembersResponse() {}

  explicit ListUserGroupMembersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserGroupMembersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserGroupMembersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserGroupMembersResponse() = default;
};
class ListUserGroupsRequestListQuery : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<vector<string>> adminIdList{};
  shared_ptr<bool> filterMine{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  ListUserGroupsRequestListQuery() {}

  explicit ListUserGroupsRequestListQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (adminIdList) {
      res["AdminIdList"] = boost::any(*adminIdList);
    }
    if (filterMine) {
      res["FilterMine"] = boost::any(*filterMine);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("AdminIdList") != m.end() && !m["AdminIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AdminIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AdminIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      adminIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FilterMine") != m.end() && !m["FilterMine"].empty()) {
      filterMine = make_shared<bool>(boost::any_cast<bool>(m["FilterMine"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListUserGroupsRequestListQuery() = default;
};
class ListUserGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<ListUserGroupsRequestListQuery> listQuery{};
  shared_ptr<long> opTenantId{};

  ListUserGroupsRequest() {}

  explicit ListUserGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQuery) {
      res["ListQuery"] = listQuery ? boost::any(listQuery->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      if (typeid(map<string, boost::any>) == m["ListQuery"].type()) {
        ListUserGroupsRequestListQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ListQuery"]));
        listQuery = make_shared<ListUserGroupsRequestListQuery>(model1);
      }
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListUserGroupsRequest() = default;
};
class ListUserGroupsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> listQueryShrink{};
  shared_ptr<long> opTenantId{};

  ListUserGroupsShrinkRequest() {}

  explicit ListUserGroupsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listQueryShrink) {
      res["ListQuery"] = boost::any(*listQueryShrink);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListQuery") != m.end() && !m["ListQuery"].empty()) {
      listQueryShrink = make_shared<string>(boost::any_cast<string>(m["ListQuery"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
  }


  virtual ~ListUserGroupsShrinkRequest() = default;
};
class ListUserGroupsResponseBodyPageResultUserGroupListAdminList : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> id{};

  ListUserGroupsResponseBodyPageResultUserGroupListAdminList() {}

  explicit ListUserGroupsResponseBodyPageResultUserGroupListAdminList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ListUserGroupsResponseBodyPageResultUserGroupListAdminList() = default;
};
class ListUserGroupsResponseBodyPageResultUserGroupList : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<vector<ListUserGroupsResponseBodyPageResultUserGroupListAdminList>> adminList{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> myRole{};
  shared_ptr<string> name{};

  ListUserGroupsResponseBodyPageResultUserGroupList() {}

  explicit ListUserGroupsResponseBodyPageResultUserGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (adminList) {
      vector<boost::any> temp1;
      for(auto item1:*adminList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdminList"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (myRole) {
      res["MyRole"] = boost::any(*myRole);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("AdminList") != m.end() && !m["AdminList"].empty()) {
      if (typeid(vector<boost::any>) == m["AdminList"].type()) {
        vector<ListUserGroupsResponseBodyPageResultUserGroupListAdminList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdminList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupsResponseBodyPageResultUserGroupListAdminList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        adminList = make_shared<vector<ListUserGroupsResponseBodyPageResultUserGroupListAdminList>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MyRole") != m.end() && !m["MyRole"].empty()) {
      myRole = make_shared<string>(boost::any_cast<string>(m["MyRole"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListUserGroupsResponseBodyPageResultUserGroupList() = default;
};
class ListUserGroupsResponseBodyPageResult : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListUserGroupsResponseBodyPageResultUserGroupList>> userGroupList{};

  ListUserGroupsResponseBodyPageResult() {}

  explicit ListUserGroupsResponseBodyPageResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (userGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*userGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserGroupList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UserGroupList") != m.end() && !m["UserGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserGroupList"].type()) {
        vector<ListUserGroupsResponseBodyPageResultUserGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupsResponseBodyPageResultUserGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userGroupList = make_shared<vector<ListUserGroupsResponseBodyPageResultUserGroupList>>(expect1);
      }
    }
  }


  virtual ~ListUserGroupsResponseBodyPageResult() = default;
};
class ListUserGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<ListUserGroupsResponseBodyPageResult> pageResult{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListUserGroupsResponseBody() {}

  explicit ListUserGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageResult) {
      res["PageResult"] = pageResult ? boost::any(pageResult->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageResult") != m.end() && !m["PageResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["PageResult"].type()) {
        ListUserGroupsResponseBodyPageResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PageResult"]));
        pageResult = make_shared<ListUserGroupsResponseBodyPageResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListUserGroupsResponseBody() = default;
};
class ListUserGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserGroupsResponseBody> body{};

  ListUserGroupsResponse() {}

  explicit ListUserGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListUserGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserGroupsResponse() = default;
};
class OperateInstanceRequestOperateCommandInstanceIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fieldInstanceIdList{};
  shared_ptr<string> id{};

  OperateInstanceRequestOperateCommandInstanceIdList() {}

  explicit OperateInstanceRequestOperateCommandInstanceIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fieldInstanceIdList) {
      res["FieldInstanceIdList"] = boost::any(*fieldInstanceIdList);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FieldInstanceIdList") != m.end() && !m["FieldInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FieldInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FieldInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fieldInstanceIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~OperateInstanceRequestOperateCommandInstanceIdList() = default;
};
class OperateInstanceRequestOperateCommand : public Darabonba::Model {
public:
  shared_ptr<vector<OperateInstanceRequestOperateCommandInstanceIdList>> instanceIdList{};
  shared_ptr<string> operation{};
  shared_ptr<long> projectId{};

  OperateInstanceRequestOperateCommand() {}

  explicit OperateInstanceRequestOperateCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIdList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceIdList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceIdList"] = boost::any(temp1);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIdList") != m.end() && !m["InstanceIdList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceIdList"].type()) {
        vector<OperateInstanceRequestOperateCommandInstanceIdList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceIdList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OperateInstanceRequestOperateCommandInstanceIdList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceIdList = make_shared<vector<OperateInstanceRequestOperateCommandInstanceIdList>>(expect1);
      }
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~OperateInstanceRequestOperateCommand() = default;
};
class OperateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<long> opTenantId{};
  shared_ptr<OperateInstanceRequestOperateCommand> operateCommand{};

  OperateInstanceRequest() {}

  explicit OperateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (operateCommand) {
      res["OperateCommand"] = operateCommand ? boost::any(operateCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("OperateCommand") != m.end() && !m["OperateCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["OperateCommand"].type()) {
        OperateInstanceRequestOperateCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OperateCommand"]));
        operateCommand = make_shared<OperateInstanceRequestOperateCommand>(model1);
      }
    }
  }


  virtual ~OperateInstanceRequest() = default;
};
class OperateInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<long> opTenantId{};
  shared_ptr<string> operateCommandShrink{};

  OperateInstanceShrinkRequest() {}

  explicit OperateInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (operateCommandShrink) {
      res["OperateCommand"] = boost::any(*operateCommandShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("OperateCommand") != m.end() && !m["OperateCommand"].empty()) {
      operateCommandShrink = make_shared<string>(boost::any_cast<string>(m["OperateCommand"]));
    }
  }


  virtual ~OperateInstanceShrinkRequest() = default;
};
class OperateInstanceResponseBodyInstanceStatusList : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerName{};
  shared_ptr<string> status{};

  OperateInstanceResponseBodyInstanceStatusList() {}

  explicit OperateInstanceResponseBodyInstanceStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~OperateInstanceResponseBodyInstanceStatusList() = default;
};
class OperateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<OperateInstanceResponseBodyInstanceStatusList>> instanceStatusList{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OperateInstanceResponseBody() {}

  explicit OperateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (instanceStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceStatusList"] = boost::any(temp1);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InstanceStatusList") != m.end() && !m["InstanceStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceStatusList"].type()) {
        vector<OperateInstanceResponseBodyInstanceStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OperateInstanceResponseBodyInstanceStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceStatusList = make_shared<vector<OperateInstanceResponseBodyInstanceStatusList>>(expect1);
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


  virtual ~OperateInstanceResponseBody() = default;
};
class OperateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateInstanceResponseBody> body{};

  OperateInstanceResponse() {}

  explicit OperateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OperateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~OperateInstanceResponse() = default;
};
class PausePhysicalNodeRequestPauseCommand : public Darabonba::Model {
public:
  shared_ptr<vector<string>> nodeIdList{};
  shared_ptr<long> projectId{};

  PausePhysicalNodeRequestPauseCommand() {}

  explicit PausePhysicalNodeRequestPauseCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeIdList) {
      res["NodeIdList"] = boost::any(*nodeIdList);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeIdList") != m.end() && !m["NodeIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~PausePhysicalNodeRequestPauseCommand() = default;
};
class PausePhysicalNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<long> opTenantId{};
  shared_ptr<PausePhysicalNodeRequestPauseCommand> pauseCommand{};

  PausePhysicalNodeRequest() {}

  explicit PausePhysicalNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (pauseCommand) {
      res["PauseCommand"] = pauseCommand ? boost::any(pauseCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("PauseCommand") != m.end() && !m["PauseCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["PauseCommand"].type()) {
        PausePhysicalNodeRequestPauseCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PauseCommand"]));
        pauseCommand = make_shared<PausePhysicalNodeRequestPauseCommand>(model1);
      }
    }
  }


  virtual ~PausePhysicalNodeRequest() = default;
};
class PausePhysicalNodeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<long> opTenantId{};
  shared_ptr<string> pauseCommandShrink{};

  PausePhysicalNodeShrinkRequest() {}

  explicit PausePhysicalNodeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (pauseCommandShrink) {
      res["PauseCommand"] = boost::any(*pauseCommandShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("PauseCommand") != m.end() && !m["PauseCommand"].empty()) {
      pauseCommandShrink = make_shared<string>(boost::any_cast<string>(m["PauseCommand"]));
    }
  }


  virtual ~PausePhysicalNodeShrinkRequest() = default;
};
class PausePhysicalNodeResponseBodyNodeOperateResultList : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> status{};

  PausePhysicalNodeResponseBodyNodeOperateResultList() {}

  explicit PausePhysicalNodeResponseBodyNodeOperateResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~PausePhysicalNodeResponseBodyNodeOperateResultList() = default;
};
class PausePhysicalNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<vector<PausePhysicalNodeResponseBodyNodeOperateResultList>> nodeOperateResultList{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PausePhysicalNodeResponseBody() {}

  explicit PausePhysicalNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nodeOperateResultList) {
      vector<boost::any> temp1;
      for(auto item1:*nodeOperateResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeOperateResultList"] = boost::any(temp1);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NodeOperateResultList") != m.end() && !m["NodeOperateResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeOperateResultList"].type()) {
        vector<PausePhysicalNodeResponseBodyNodeOperateResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeOperateResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PausePhysicalNodeResponseBodyNodeOperateResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeOperateResultList = make_shared<vector<PausePhysicalNodeResponseBodyNodeOperateResultList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PausePhysicalNodeResponseBody() = default;
};
class PausePhysicalNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PausePhysicalNodeResponseBody> body{};

  PausePhysicalNodeResponse() {}

  explicit PausePhysicalNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PausePhysicalNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PausePhysicalNodeResponseBody>(model1);
      }
    }
  }


  virtual ~PausePhysicalNodeResponse() = default;
};
class RemoveTenantMemberRequestRemoveCommand : public Darabonba::Model {
public:
  shared_ptr<string> sourceId{};

  RemoveTenantMemberRequestRemoveCommand() {}

  explicit RemoveTenantMemberRequestRemoveCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
  }


  virtual ~RemoveTenantMemberRequestRemoveCommand() = default;
};
class RemoveTenantMemberRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<RemoveTenantMemberRequestRemoveCommand> removeCommand{};

  RemoveTenantMemberRequest() {}

  explicit RemoveTenantMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (removeCommand) {
      res["RemoveCommand"] = removeCommand ? boost::any(removeCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("RemoveCommand") != m.end() && !m["RemoveCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["RemoveCommand"].type()) {
        RemoveTenantMemberRequestRemoveCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RemoveCommand"]));
        removeCommand = make_shared<RemoveTenantMemberRequestRemoveCommand>(model1);
      }
    }
  }


  virtual ~RemoveTenantMemberRequest() = default;
};
class RemoveTenantMemberShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<string> removeCommandShrink{};

  RemoveTenantMemberShrinkRequest() {}

  explicit RemoveTenantMemberShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (removeCommandShrink) {
      res["RemoveCommand"] = boost::any(*removeCommandShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("RemoveCommand") != m.end() && !m["RemoveCommand"].empty()) {
      removeCommandShrink = make_shared<string>(boost::any_cast<string>(m["RemoveCommand"]));
    }
  }


  virtual ~RemoveTenantMemberShrinkRequest() = default;
};
class RemoveTenantMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RemoveTenantMemberResponseBody() {}

  explicit RemoveTenantMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~RemoveTenantMemberResponseBody() = default;
};
class RemoveTenantMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveTenantMemberResponseBody> body{};

  RemoveTenantMemberResponse() {}

  explicit RemoveTenantMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveTenantMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveTenantMemberResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveTenantMemberResponse() = default;
};
class RemoveUserGroupMemberRequestRemoveCommand : public Darabonba::Model {
public:
  shared_ptr<string> userGroupId{};
  shared_ptr<vector<string>> userIdList{};

  RemoveUserGroupMemberRequestRemoveCommand() {}

  explicit RemoveUserGroupMemberRequestRemoveCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RemoveUserGroupMemberRequestRemoveCommand() = default;
};
class RemoveUserGroupMemberRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<RemoveUserGroupMemberRequestRemoveCommand> removeCommand{};

  RemoveUserGroupMemberRequest() {}

  explicit RemoveUserGroupMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (removeCommand) {
      res["RemoveCommand"] = removeCommand ? boost::any(removeCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("RemoveCommand") != m.end() && !m["RemoveCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["RemoveCommand"].type()) {
        RemoveUserGroupMemberRequestRemoveCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RemoveCommand"]));
        removeCommand = make_shared<RemoveUserGroupMemberRequestRemoveCommand>(model1);
      }
    }
  }


  virtual ~RemoveUserGroupMemberRequest() = default;
};
class RemoveUserGroupMemberShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<string> removeCommandShrink{};

  RemoveUserGroupMemberShrinkRequest() {}

  explicit RemoveUserGroupMemberShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (removeCommandShrink) {
      res["RemoveCommand"] = boost::any(*removeCommandShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("RemoveCommand") != m.end() && !m["RemoveCommand"].empty()) {
      removeCommandShrink = make_shared<string>(boost::any_cast<string>(m["RemoveCommand"]));
    }
  }


  virtual ~RemoveUserGroupMemberShrinkRequest() = default;
};
class RemoveUserGroupMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RemoveUserGroupMemberResponseBody() {}

  explicit RemoveUserGroupMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~RemoveUserGroupMemberResponseBody() = default;
};
class RemoveUserGroupMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveUserGroupMemberResponseBody> body{};

  RemoveUserGroupMemberResponse() {}

  explicit RemoveUserGroupMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveUserGroupMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveUserGroupMemberResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveUserGroupMemberResponse() = default;
};
class ResumePhysicalNodeRequestResumeCommand : public Darabonba::Model {
public:
  shared_ptr<vector<string>> nodeIdList{};
  shared_ptr<long> projectId{};

  ResumePhysicalNodeRequestResumeCommand() {}

  explicit ResumePhysicalNodeRequestResumeCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeIdList) {
      res["NodeIdList"] = boost::any(*nodeIdList);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeIdList") != m.end() && !m["NodeIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NodeIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NodeIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodeIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~ResumePhysicalNodeRequestResumeCommand() = default;
};
class ResumePhysicalNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<long> opTenantId{};
  shared_ptr<ResumePhysicalNodeRequestResumeCommand> resumeCommand{};

  ResumePhysicalNodeRequest() {}

  explicit ResumePhysicalNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (resumeCommand) {
      res["ResumeCommand"] = resumeCommand ? boost::any(resumeCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ResumeCommand") != m.end() && !m["ResumeCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResumeCommand"].type()) {
        ResumePhysicalNodeRequestResumeCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResumeCommand"]));
        resumeCommand = make_shared<ResumePhysicalNodeRequestResumeCommand>(model1);
      }
    }
  }


  virtual ~ResumePhysicalNodeRequest() = default;
};
class ResumePhysicalNodeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<long> opTenantId{};
  shared_ptr<string> resumeCommandShrink{};

  ResumePhysicalNodeShrinkRequest() {}

  explicit ResumePhysicalNodeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (resumeCommandShrink) {
      res["ResumeCommand"] = boost::any(*resumeCommandShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ResumeCommand") != m.end() && !m["ResumeCommand"].empty()) {
      resumeCommandShrink = make_shared<string>(boost::any_cast<string>(m["ResumeCommand"]));
    }
  }


  virtual ~ResumePhysicalNodeShrinkRequest() = default;
};
class ResumePhysicalNodeResponseBodyNodeOperateResultList : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> status{};

  ResumePhysicalNodeResponseBodyNodeOperateResultList() {}

  explicit ResumePhysicalNodeResponseBodyNodeOperateResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ResumePhysicalNodeResponseBodyNodeOperateResultList() = default;
};
class ResumePhysicalNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<vector<ResumePhysicalNodeResponseBodyNodeOperateResultList>> nodeOperateResultList{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ResumePhysicalNodeResponseBody() {}

  explicit ResumePhysicalNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nodeOperateResultList) {
      vector<boost::any> temp1;
      for(auto item1:*nodeOperateResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeOperateResultList"] = boost::any(temp1);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NodeOperateResultList") != m.end() && !m["NodeOperateResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeOperateResultList"].type()) {
        vector<ResumePhysicalNodeResponseBodyNodeOperateResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeOperateResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResumePhysicalNodeResponseBodyNodeOperateResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeOperateResultList = make_shared<vector<ResumePhysicalNodeResponseBodyNodeOperateResultList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ResumePhysicalNodeResponseBody() = default;
};
class ResumePhysicalNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResumePhysicalNodeResponseBody> body{};

  ResumePhysicalNodeResponse() {}

  explicit ResumePhysicalNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResumePhysicalNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumePhysicalNodeResponseBody>(model1);
      }
    }
  }


  virtual ~ResumePhysicalNodeResponse() = default;
};
class RevokeResourcePermissionRequestRevokeCommandResourceList : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};

  RevokeResourcePermissionRequestRevokeCommandResourceList() {}

  explicit RevokeResourcePermissionRequestRevokeCommandResourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~RevokeResourcePermissionRequestRevokeCommandResourceList() = default;
};
class RevokeResourcePermissionRequestRevokeCommand : public Darabonba::Model {
public:
  shared_ptr<vector<string>> operateList{};
  shared_ptr<string> reason{};
  shared_ptr<vector<RevokeResourcePermissionRequestRevokeCommandResourceList>> resourceList{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> userId{};

  RevokeResourcePermissionRequestRevokeCommand() {}

  explicit RevokeResourcePermissionRequestRevokeCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateList) {
      res["OperateList"] = boost::any(*operateList);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (resourceList) {
      vector<boost::any> temp1;
      for(auto item1:*resourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceList"] = boost::any(temp1);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateList") != m.end() && !m["OperateList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OperateList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OperateList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      operateList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("ResourceList") != m.end() && !m["ResourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceList"].type()) {
        vector<RevokeResourcePermissionRequestRevokeCommandResourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RevokeResourcePermissionRequestRevokeCommandResourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceList = make_shared<vector<RevokeResourcePermissionRequestRevokeCommandResourceList>>(expect1);
      }
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~RevokeResourcePermissionRequestRevokeCommand() = default;
};
class RevokeResourcePermissionRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<RevokeResourcePermissionRequestRevokeCommand> revokeCommand{};

  RevokeResourcePermissionRequest() {}

  explicit RevokeResourcePermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (revokeCommand) {
      res["RevokeCommand"] = revokeCommand ? boost::any(revokeCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("RevokeCommand") != m.end() && !m["RevokeCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["RevokeCommand"].type()) {
        RevokeResourcePermissionRequestRevokeCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RevokeCommand"]));
        revokeCommand = make_shared<RevokeResourcePermissionRequestRevokeCommand>(model1);
      }
    }
  }


  virtual ~RevokeResourcePermissionRequest() = default;
};
class RevokeResourcePermissionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<string> revokeCommandShrink{};

  RevokeResourcePermissionShrinkRequest() {}

  explicit RevokeResourcePermissionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (revokeCommandShrink) {
      res["RevokeCommand"] = boost::any(*revokeCommandShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("RevokeCommand") != m.end() && !m["RevokeCommand"].empty()) {
      revokeCommandShrink = make_shared<string>(boost::any_cast<string>(m["RevokeCommand"]));
    }
  }


  virtual ~RevokeResourcePermissionShrinkRequest() = default;
};
class RevokeResourcePermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RevokeResourcePermissionResponseBody() {}

  explicit RevokeResourcePermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~RevokeResourcePermissionResponseBody() = default;
};
class RevokeResourcePermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RevokeResourcePermissionResponseBody> body{};

  RevokeResourcePermissionResponse() {}

  explicit RevokeResourcePermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RevokeResourcePermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeResourcePermissionResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeResourcePermissionResponse() = default;
};
class UpdateAdHocFileRequestUpdateCommand : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> fileId{};
  shared_ptr<long> projectId{};

  UpdateAdHocFileRequestUpdateCommand() {}

  explicit UpdateAdHocFileRequestUpdateCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["FileId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~UpdateAdHocFileRequestUpdateCommand() = default;
};
class UpdateAdHocFileRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<UpdateAdHocFileRequestUpdateCommand> updateCommand{};

  UpdateAdHocFileRequest() {}

  explicit UpdateAdHocFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (updateCommand) {
      res["UpdateCommand"] = updateCommand ? boost::any(updateCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UpdateCommand") != m.end() && !m["UpdateCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpdateCommand"].type()) {
        UpdateAdHocFileRequestUpdateCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpdateCommand"]));
        updateCommand = make_shared<UpdateAdHocFileRequestUpdateCommand>(model1);
      }
    }
  }


  virtual ~UpdateAdHocFileRequest() = default;
};
class UpdateAdHocFileShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<string> updateCommandShrink{};

  UpdateAdHocFileShrinkRequest() {}

  explicit UpdateAdHocFileShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (updateCommandShrink) {
      res["UpdateCommand"] = boost::any(*updateCommandShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UpdateCommand") != m.end() && !m["UpdateCommand"].empty()) {
      updateCommandShrink = make_shared<string>(boost::any_cast<string>(m["UpdateCommand"]));
    }
  }


  virtual ~UpdateAdHocFileShrinkRequest() = default;
};
class UpdateAdHocFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAdHocFileResponseBody() {}

  explicit UpdateAdHocFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~UpdateAdHocFileResponseBody() = default;
};
class UpdateAdHocFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAdHocFileResponseBody> body{};

  UpdateAdHocFileResponse() {}

  explicit UpdateAdHocFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAdHocFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAdHocFileResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAdHocFileResponse() = default;
};
class UpdateDataSourceBasicInfoRequestUpdateCommand : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  UpdateDataSourceBasicInfoRequestUpdateCommand() {}

  explicit UpdateDataSourceBasicInfoRequestUpdateCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateDataSourceBasicInfoRequestUpdateCommand() = default;
};
class UpdateDataSourceBasicInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<UpdateDataSourceBasicInfoRequestUpdateCommand> updateCommand{};

  UpdateDataSourceBasicInfoRequest() {}

  explicit UpdateDataSourceBasicInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (updateCommand) {
      res["UpdateCommand"] = updateCommand ? boost::any(updateCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UpdateCommand") != m.end() && !m["UpdateCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpdateCommand"].type()) {
        UpdateDataSourceBasicInfoRequestUpdateCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpdateCommand"]));
        updateCommand = make_shared<UpdateDataSourceBasicInfoRequestUpdateCommand>(model1);
      }
    }
  }


  virtual ~UpdateDataSourceBasicInfoRequest() = default;
};
class UpdateDataSourceBasicInfoShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<string> updateCommandShrink{};

  UpdateDataSourceBasicInfoShrinkRequest() {}

  explicit UpdateDataSourceBasicInfoShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (updateCommandShrink) {
      res["UpdateCommand"] = boost::any(*updateCommandShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UpdateCommand") != m.end() && !m["UpdateCommand"].empty()) {
      updateCommandShrink = make_shared<string>(boost::any_cast<string>(m["UpdateCommand"]));
    }
  }


  virtual ~UpdateDataSourceBasicInfoShrinkRequest() = default;
};
class UpdateDataSourceBasicInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateDataSourceBasicInfoResponseBody() {}

  explicit UpdateDataSourceBasicInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~UpdateDataSourceBasicInfoResponseBody() = default;
};
class UpdateDataSourceBasicInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDataSourceBasicInfoResponseBody> body{};

  UpdateDataSourceBasicInfoResponse() {}

  explicit UpdateDataSourceBasicInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDataSourceBasicInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDataSourceBasicInfoResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDataSourceBasicInfoResponse() = default;
};
class UpdateDataSourceConfigRequestUpdateCommandConfigItemList : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  UpdateDataSourceConfigRequestUpdateCommandConfigItemList() {}

  explicit UpdateDataSourceConfigRequestUpdateCommandConfigItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDataSourceConfigRequestUpdateCommandConfigItemList() = default;
};
class UpdateDataSourceConfigRequestUpdateCommand : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateDataSourceConfigRequestUpdateCommandConfigItemList>> configItemList{};
  shared_ptr<long> id{};

  UpdateDataSourceConfigRequestUpdateCommand() {}

  explicit UpdateDataSourceConfigRequestUpdateCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configItemList) {
      vector<boost::any> temp1;
      for(auto item1:*configItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConfigItemList"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigItemList") != m.end() && !m["ConfigItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["ConfigItemList"].type()) {
        vector<UpdateDataSourceConfigRequestUpdateCommandConfigItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConfigItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDataSourceConfigRequestUpdateCommandConfigItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configItemList = make_shared<vector<UpdateDataSourceConfigRequestUpdateCommandConfigItemList>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~UpdateDataSourceConfigRequestUpdateCommand() = default;
};
class UpdateDataSourceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<UpdateDataSourceConfigRequestUpdateCommand> updateCommand{};

  UpdateDataSourceConfigRequest() {}

  explicit UpdateDataSourceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (updateCommand) {
      res["UpdateCommand"] = updateCommand ? boost::any(updateCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UpdateCommand") != m.end() && !m["UpdateCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpdateCommand"].type()) {
        UpdateDataSourceConfigRequestUpdateCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpdateCommand"]));
        updateCommand = make_shared<UpdateDataSourceConfigRequestUpdateCommand>(model1);
      }
    }
  }


  virtual ~UpdateDataSourceConfigRequest() = default;
};
class UpdateDataSourceConfigShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<string> updateCommandShrink{};

  UpdateDataSourceConfigShrinkRequest() {}

  explicit UpdateDataSourceConfigShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (updateCommandShrink) {
      res["UpdateCommand"] = boost::any(*updateCommandShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UpdateCommand") != m.end() && !m["UpdateCommand"].empty()) {
      updateCommandShrink = make_shared<string>(boost::any_cast<string>(m["UpdateCommand"]));
    }
  }


  virtual ~UpdateDataSourceConfigShrinkRequest() = default;
};
class UpdateDataSourceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateDataSourceConfigResponseBody() {}

  explicit UpdateDataSourceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~UpdateDataSourceConfigResponseBody() = default;
};
class UpdateDataSourceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDataSourceConfigResponseBody> body{};

  UpdateDataSourceConfigResponse() {}

  explicit UpdateDataSourceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateDataSourceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDataSourceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDataSourceConfigResponse() = default;
};
class UpdateFileDirectoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> directory{};
  shared_ptr<long> fileId{};
  shared_ptr<long> opTenantId{};
  shared_ptr<long> projectId{};

  UpdateFileDirectoryRequest() {}

  explicit UpdateFileDirectoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directory) {
      res["Directory"] = boost::any(*directory);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Directory") != m.end() && !m["Directory"].empty()) {
      directory = make_shared<string>(boost::any_cast<string>(m["Directory"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["FileId"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~UpdateFileDirectoryRequest() = default;
};
class UpdateFileDirectoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateFileDirectoryResponseBody() {}

  explicit UpdateFileDirectoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~UpdateFileDirectoryResponseBody() = default;
};
class UpdateFileDirectoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFileDirectoryResponseBody> body{};

  UpdateFileDirectoryResponse() {}

  explicit UpdateFileDirectoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateFileDirectoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFileDirectoryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFileDirectoryResponse() = default;
};
class UpdateFileNameRequest : public Darabonba::Model {
public:
  shared_ptr<long> fileId{};
  shared_ptr<string> name{};
  shared_ptr<long> opTenantId{};
  shared_ptr<long> projectId{};

  UpdateFileNameRequest() {}

  explicit UpdateFileNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<long>(boost::any_cast<long>(m["FileId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~UpdateFileNameRequest() = default;
};
class UpdateFileNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateFileNameResponseBody() {}

  explicit UpdateFileNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~UpdateFileNameResponseBody() = default;
};
class UpdateFileNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFileNameResponseBody> body{};

  UpdateFileNameResponse() {}

  explicit UpdateFileNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateFileNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFileNameResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFileNameResponse() = default;
};
class UpdateTenantMemberRequestUpdateCommandMemberList : public Darabonba::Model {
public:
  shared_ptr<string> dingNumber{};
  shared_ptr<string> mail{};
  shared_ptr<string> mobilePhone{};
  shared_ptr<vector<string>> roleList{};
  shared_ptr<string> userId{};

  UpdateTenantMemberRequestUpdateCommandMemberList() {}

  explicit UpdateTenantMemberRequestUpdateCommandMemberList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dingNumber) {
      res["DingNumber"] = boost::any(*dingNumber);
    }
    if (mail) {
      res["Mail"] = boost::any(*mail);
    }
    if (mobilePhone) {
      res["MobilePhone"] = boost::any(*mobilePhone);
    }
    if (roleList) {
      res["RoleList"] = boost::any(*roleList);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DingNumber") != m.end() && !m["DingNumber"].empty()) {
      dingNumber = make_shared<string>(boost::any_cast<string>(m["DingNumber"]));
    }
    if (m.find("Mail") != m.end() && !m["Mail"].empty()) {
      mail = make_shared<string>(boost::any_cast<string>(m["Mail"]));
    }
    if (m.find("MobilePhone") != m.end() && !m["MobilePhone"].empty()) {
      mobilePhone = make_shared<string>(boost::any_cast<string>(m["MobilePhone"]));
    }
    if (m.find("RoleList") != m.end() && !m["RoleList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RoleList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roleList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateTenantMemberRequestUpdateCommandMemberList() = default;
};
class UpdateTenantMemberRequestUpdateCommand : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateTenantMemberRequestUpdateCommandMemberList>> memberList{};

  UpdateTenantMemberRequestUpdateCommand() {}

  explicit UpdateTenantMemberRequestUpdateCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memberList) {
      vector<boost::any> temp1;
      for(auto item1:*memberList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MemberList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MemberList") != m.end() && !m["MemberList"].empty()) {
      if (typeid(vector<boost::any>) == m["MemberList"].type()) {
        vector<UpdateTenantMemberRequestUpdateCommandMemberList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MemberList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateTenantMemberRequestUpdateCommandMemberList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        memberList = make_shared<vector<UpdateTenantMemberRequestUpdateCommandMemberList>>(expect1);
      }
    }
  }


  virtual ~UpdateTenantMemberRequestUpdateCommand() = default;
};
class UpdateTenantMemberRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<UpdateTenantMemberRequestUpdateCommand> updateCommand{};

  UpdateTenantMemberRequest() {}

  explicit UpdateTenantMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (updateCommand) {
      res["UpdateCommand"] = updateCommand ? boost::any(updateCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UpdateCommand") != m.end() && !m["UpdateCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpdateCommand"].type()) {
        UpdateTenantMemberRequestUpdateCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpdateCommand"]));
        updateCommand = make_shared<UpdateTenantMemberRequestUpdateCommand>(model1);
      }
    }
  }


  virtual ~UpdateTenantMemberRequest() = default;
};
class UpdateTenantMemberShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<string> updateCommandShrink{};

  UpdateTenantMemberShrinkRequest() {}

  explicit UpdateTenantMemberShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (updateCommandShrink) {
      res["UpdateCommand"] = boost::any(*updateCommandShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UpdateCommand") != m.end() && !m["UpdateCommand"].empty()) {
      updateCommandShrink = make_shared<string>(boost::any_cast<string>(m["UpdateCommand"]));
    }
  }


  virtual ~UpdateTenantMemberShrinkRequest() = default;
};
class UpdateTenantMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateTenantMemberResponseBody() {}

  explicit UpdateTenantMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~UpdateTenantMemberResponseBody() = default;
};
class UpdateTenantMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTenantMemberResponseBody> body{};

  UpdateTenantMemberResponse() {}

  explicit UpdateTenantMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTenantMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTenantMemberResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTenantMemberResponse() = default;
};
class UpdateUserGroupRequestUpdateCommand : public Darabonba::Model {
public:
  shared_ptr<vector<string>> adminUserIdList{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  UpdateUserGroupRequestUpdateCommand() {}

  explicit UpdateUserGroupRequestUpdateCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adminUserIdList) {
      res["AdminUserIdList"] = boost::any(*adminUserIdList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdminUserIdList") != m.end() && !m["AdminUserIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AdminUserIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AdminUserIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      adminUserIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateUserGroupRequestUpdateCommand() = default;
};
class UpdateUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<UpdateUserGroupRequestUpdateCommand> updateCommand{};

  UpdateUserGroupRequest() {}

  explicit UpdateUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (updateCommand) {
      res["UpdateCommand"] = updateCommand ? boost::any(updateCommand->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UpdateCommand") != m.end() && !m["UpdateCommand"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpdateCommand"].type()) {
        UpdateUserGroupRequestUpdateCommand model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpdateCommand"]));
        updateCommand = make_shared<UpdateUserGroupRequestUpdateCommand>(model1);
      }
    }
  }


  virtual ~UpdateUserGroupRequest() = default;
};
class UpdateUserGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> opTenantId{};
  shared_ptr<string> updateCommandShrink{};

  UpdateUserGroupShrinkRequest() {}

  explicit UpdateUserGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (updateCommandShrink) {
      res["UpdateCommand"] = boost::any(*updateCommandShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UpdateCommand") != m.end() && !m["UpdateCommand"].empty()) {
      updateCommandShrink = make_shared<string>(boost::any_cast<string>(m["UpdateCommand"]));
    }
  }


  virtual ~UpdateUserGroupShrinkRequest() = default;
};
class UpdateUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateUserGroupResponseBody() {}

  explicit UpdateUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
class UpdateUserGroupSwitchRequest : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<long> opTenantId{};
  shared_ptr<string> userGroupId{};

  UpdateUserGroupSwitchRequest() {}

  explicit UpdateUserGroupSwitchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["Active"] = boost::any(*active);
    }
    if (opTenantId) {
      res["OpTenantId"] = boost::any(*opTenantId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Active") != m.end() && !m["Active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["Active"]));
    }
    if (m.find("OpTenantId") != m.end() && !m["OpTenantId"].empty()) {
      opTenantId = make_shared<long>(boost::any_cast<long>(m["OpTenantId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~UpdateUserGroupSwitchRequest() = default;
};
class UpdateUserGroupSwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateUserGroupSwitchResponseBody() {}

  explicit UpdateUserGroupSwitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~UpdateUserGroupSwitchResponseBody() = default;
};
class UpdateUserGroupSwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserGroupSwitchResponseBody> body{};

  UpdateUserGroupSwitchResponse() {}

  explicit UpdateUserGroupSwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateUserGroupSwitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserGroupSwitchResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserGroupSwitchResponse() = default;
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
  AddTenantMembersResponse addTenantMembersWithOptions(shared_ptr<AddTenantMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddTenantMembersResponse addTenantMembers(shared_ptr<AddTenantMembersRequest> request);
  AddTenantMembersBySourceUserResponse addTenantMembersBySourceUserWithOptions(shared_ptr<AddTenantMembersBySourceUserRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddTenantMembersBySourceUserResponse addTenantMembersBySourceUser(shared_ptr<AddTenantMembersBySourceUserRequest> request);
  AddUserGroupMemberResponse addUserGroupMemberWithOptions(shared_ptr<AddUserGroupMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserGroupMemberResponse addUserGroupMember(shared_ptr<AddUserGroupMemberRequest> request);
  CheckDataSourceConnectivityResponse checkDataSourceConnectivityWithOptions(shared_ptr<CheckDataSourceConnectivityRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDataSourceConnectivityResponse checkDataSourceConnectivity(shared_ptr<CheckDataSourceConnectivityRequest> request);
  CheckDataSourceConnectivityByIdResponse checkDataSourceConnectivityByIdWithOptions(shared_ptr<CheckDataSourceConnectivityByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDataSourceConnectivityByIdResponse checkDataSourceConnectivityById(shared_ptr<CheckDataSourceConnectivityByIdRequest> request);
  CheckResourcePermissionResponse checkResourcePermissionWithOptions(shared_ptr<CheckResourcePermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckResourcePermissionResponse checkResourcePermission(shared_ptr<CheckResourcePermissionRequest> request);
  CreateAdHocFileResponse createAdHocFileWithOptions(shared_ptr<CreateAdHocFileRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAdHocFileResponse createAdHocFile(shared_ptr<CreateAdHocFileRequest> request);
  CreateDataSourceResponse createDataSourceWithOptions(shared_ptr<CreateDataSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataSourceResponse createDataSource(shared_ptr<CreateDataSourceRequest> request);
  CreateDirectoryResponse createDirectoryWithOptions(shared_ptr<CreateDirectoryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDirectoryResponse createDirectory(shared_ptr<CreateDirectoryRequest> request);
  CreateNodeSupplementResponse createNodeSupplementWithOptions(shared_ptr<CreateNodeSupplementRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNodeSupplementResponse createNodeSupplement(shared_ptr<CreateNodeSupplementRequest> request);
  CreateUserGroupResponse createUserGroupWithOptions(shared_ptr<CreateUserGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserGroupResponse createUserGroup(shared_ptr<CreateUserGroupRequest> request);
  DeleteAdHocFileResponse deleteAdHocFileWithOptions(shared_ptr<DeleteAdHocFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAdHocFileResponse deleteAdHocFile(shared_ptr<DeleteAdHocFileRequest> request);
  DeleteDataSourceResponse deleteDataSourceWithOptions(shared_ptr<DeleteDataSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataSourceResponse deleteDataSource(shared_ptr<DeleteDataSourceRequest> request);
  DeleteDirectoryResponse deleteDirectoryWithOptions(shared_ptr<DeleteDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDirectoryResponse deleteDirectory(shared_ptr<DeleteDirectoryRequest> request);
  DeleteUserGroupResponse deleteUserGroupWithOptions(shared_ptr<DeleteUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserGroupResponse deleteUserGroup(shared_ptr<DeleteUserGroupRequest> request);
  ExecuteManualNodeResponse executeManualNodeWithOptions(shared_ptr<ExecuteManualNodeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteManualNodeResponse executeManualNode(shared_ptr<ExecuteManualNodeRequest> request);
  FixDataResponse fixDataWithOptions(shared_ptr<FixDataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FixDataResponse fixData(shared_ptr<FixDataRequest> request);
  GetAdHocFileResponse getAdHocFileWithOptions(shared_ptr<GetAdHocFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAdHocFileResponse getAdHocFile(shared_ptr<GetAdHocFileRequest> request);
  GetDevObjectDependencyResponse getDevObjectDependencyWithOptions(shared_ptr<GetDevObjectDependencyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDevObjectDependencyResponse getDevObjectDependency(shared_ptr<GetDevObjectDependencyRequest> request);
  GetInstanceDownStreamResponse getInstanceDownStreamWithOptions(shared_ptr<GetInstanceDownStreamRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceDownStreamResponse getInstanceDownStream(shared_ptr<GetInstanceDownStreamRequest> request);
  GetInstanceUpDownStreamResponse getInstanceUpDownStreamWithOptions(shared_ptr<GetInstanceUpDownStreamRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceUpDownStreamResponse getInstanceUpDownStream(shared_ptr<GetInstanceUpDownStreamRequest> request);
  GetMyRolesResponse getMyRolesWithOptions(shared_ptr<GetMyRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMyRolesResponse getMyRoles(shared_ptr<GetMyRolesRequest> request);
  GetMyTenantsResponse getMyTenantsWithOptions(shared_ptr<GetMyTenantsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMyTenantsResponse getMyTenants(shared_ptr<GetMyTenantsRequest> request);
  GetNodeUpDownStreamResponse getNodeUpDownStreamWithOptions(shared_ptr<GetNodeUpDownStreamRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNodeUpDownStreamResponse getNodeUpDownStream(shared_ptr<GetNodeUpDownStreamRequest> request);
  GetOperationSubmitStatusResponse getOperationSubmitStatusWithOptions(shared_ptr<GetOperationSubmitStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOperationSubmitStatusResponse getOperationSubmitStatus(shared_ptr<GetOperationSubmitStatusRequest> request);
  GetPhysicalInstanceResponse getPhysicalInstanceWithOptions(shared_ptr<GetPhysicalInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhysicalInstanceResponse getPhysicalInstance(shared_ptr<GetPhysicalInstanceRequest> request);
  GetPhysicalInstanceLogResponse getPhysicalInstanceLogWithOptions(shared_ptr<GetPhysicalInstanceLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhysicalInstanceLogResponse getPhysicalInstanceLog(shared_ptr<GetPhysicalInstanceLogRequest> request);
  GetPhysicalNodeResponse getPhysicalNodeWithOptions(shared_ptr<GetPhysicalNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhysicalNodeResponse getPhysicalNode(shared_ptr<GetPhysicalNodeRequest> request);
  GetPhysicalNodeByOutputNameResponse getPhysicalNodeByOutputNameWithOptions(shared_ptr<GetPhysicalNodeByOutputNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhysicalNodeByOutputNameResponse getPhysicalNodeByOutputName(shared_ptr<GetPhysicalNodeByOutputNameRequest> request);
  GetPhysicalNodeContentResponse getPhysicalNodeContentWithOptions(shared_ptr<GetPhysicalNodeContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhysicalNodeContentResponse getPhysicalNodeContent(shared_ptr<GetPhysicalNodeContentRequest> request);
  GetPhysicalNodeOperationLogResponse getPhysicalNodeOperationLogWithOptions(shared_ptr<GetPhysicalNodeOperationLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhysicalNodeOperationLogResponse getPhysicalNodeOperationLog(shared_ptr<GetPhysicalNodeOperationLogRequest> request);
  GetProjectProduceUserResponse getProjectProduceUserWithOptions(shared_ptr<GetProjectProduceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectProduceUserResponse getProjectProduceUser(shared_ptr<GetProjectProduceUserRequest> request);
  GetSupplementDagrunResponse getSupplementDagrunWithOptions(shared_ptr<GetSupplementDagrunRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSupplementDagrunResponse getSupplementDagrun(shared_ptr<GetSupplementDagrunRequest> request);
  GetSupplementDagrunInstanceResponse getSupplementDagrunInstanceWithOptions(shared_ptr<GetSupplementDagrunInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSupplementDagrunInstanceResponse getSupplementDagrunInstance(shared_ptr<GetSupplementDagrunInstanceRequest> request);
  GetUserBySourceIdResponse getUserBySourceIdWithOptions(shared_ptr<GetUserBySourceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserBySourceIdResponse getUserBySourceId(shared_ptr<GetUserBySourceIdRequest> request);
  GetUserGroupResponse getUserGroupWithOptions(shared_ptr<GetUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserGroupResponse getUserGroup(shared_ptr<GetUserGroupRequest> request);
  GetUsersResponse getUsersWithOptions(shared_ptr<GetUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUsersResponse getUsers(shared_ptr<GetUsersRequest> request);
  GrantResourcePermissionResponse grantResourcePermissionWithOptions(shared_ptr<GrantResourcePermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantResourcePermissionResponse grantResourcePermission(shared_ptr<GrantResourcePermissionRequest> request);
  ListAddableRolesResponse listAddableRolesWithOptions(shared_ptr<ListAddableRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAddableRolesResponse listAddableRoles(shared_ptr<ListAddableRolesRequest> request);
  ListAddableUsersResponse listAddableUsersWithOptions(shared_ptr<ListAddableUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAddableUsersResponse listAddableUsers(shared_ptr<ListAddableUsersRequest> request);
  ListDataSourceWithConfigResponse listDataSourceWithConfigWithOptions(shared_ptr<ListDataSourceWithConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourceWithConfigResponse listDataSourceWithConfig(shared_ptr<ListDataSourceWithConfigRequest> request);
  ListFilesResponse listFilesWithOptions(shared_ptr<ListFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFilesResponse listFiles(shared_ptr<ListFilesRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  ListNodeDownStreamResponse listNodeDownStreamWithOptions(shared_ptr<ListNodeDownStreamRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodeDownStreamResponse listNodeDownStream(shared_ptr<ListNodeDownStreamRequest> request);
  ListNodesResponse listNodesWithOptions(shared_ptr<ListNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodesResponse listNodes(shared_ptr<ListNodesRequest> request);
  ListResourcePermissionOperationLogResponse listResourcePermissionOperationLogWithOptions(shared_ptr<ListResourcePermissionOperationLogRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcePermissionOperationLogResponse listResourcePermissionOperationLog(shared_ptr<ListResourcePermissionOperationLogRequest> request);
  ListResourcePermissionsResponse listResourcePermissionsWithOptions(shared_ptr<ListResourcePermissionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcePermissionsResponse listResourcePermissions(shared_ptr<ListResourcePermissionsRequest> request);
  ListTenantMembersResponse listTenantMembersWithOptions(shared_ptr<ListTenantMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTenantMembersResponse listTenantMembers(shared_ptr<ListTenantMembersRequest> request);
  ListUserGroupMembersResponse listUserGroupMembersWithOptions(shared_ptr<ListUserGroupMembersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserGroupMembersResponse listUserGroupMembers(shared_ptr<ListUserGroupMembersRequest> request);
  ListUserGroupsResponse listUserGroupsWithOptions(shared_ptr<ListUserGroupsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserGroupsResponse listUserGroups(shared_ptr<ListUserGroupsRequest> request);
  OperateInstanceResponse operateInstanceWithOptions(shared_ptr<OperateInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateInstanceResponse operateInstance(shared_ptr<OperateInstanceRequest> request);
  PausePhysicalNodeResponse pausePhysicalNodeWithOptions(shared_ptr<PausePhysicalNodeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PausePhysicalNodeResponse pausePhysicalNode(shared_ptr<PausePhysicalNodeRequest> request);
  RemoveTenantMemberResponse removeTenantMemberWithOptions(shared_ptr<RemoveTenantMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveTenantMemberResponse removeTenantMember(shared_ptr<RemoveTenantMemberRequest> request);
  RemoveUserGroupMemberResponse removeUserGroupMemberWithOptions(shared_ptr<RemoveUserGroupMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveUserGroupMemberResponse removeUserGroupMember(shared_ptr<RemoveUserGroupMemberRequest> request);
  ResumePhysicalNodeResponse resumePhysicalNodeWithOptions(shared_ptr<ResumePhysicalNodeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumePhysicalNodeResponse resumePhysicalNode(shared_ptr<ResumePhysicalNodeRequest> request);
  RevokeResourcePermissionResponse revokeResourcePermissionWithOptions(shared_ptr<RevokeResourcePermissionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeResourcePermissionResponse revokeResourcePermission(shared_ptr<RevokeResourcePermissionRequest> request);
  UpdateAdHocFileResponse updateAdHocFileWithOptions(shared_ptr<UpdateAdHocFileRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAdHocFileResponse updateAdHocFile(shared_ptr<UpdateAdHocFileRequest> request);
  UpdateDataSourceBasicInfoResponse updateDataSourceBasicInfoWithOptions(shared_ptr<UpdateDataSourceBasicInfoRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDataSourceBasicInfoResponse updateDataSourceBasicInfo(shared_ptr<UpdateDataSourceBasicInfoRequest> request);
  UpdateDataSourceConfigResponse updateDataSourceConfigWithOptions(shared_ptr<UpdateDataSourceConfigRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDataSourceConfigResponse updateDataSourceConfig(shared_ptr<UpdateDataSourceConfigRequest> request);
  UpdateFileDirectoryResponse updateFileDirectoryWithOptions(shared_ptr<UpdateFileDirectoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFileDirectoryResponse updateFileDirectory(shared_ptr<UpdateFileDirectoryRequest> request);
  UpdateFileNameResponse updateFileNameWithOptions(shared_ptr<UpdateFileNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFileNameResponse updateFileName(shared_ptr<UpdateFileNameRequest> request);
  UpdateTenantMemberResponse updateTenantMemberWithOptions(shared_ptr<UpdateTenantMemberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTenantMemberResponse updateTenantMember(shared_ptr<UpdateTenantMemberRequest> request);
  UpdateUserGroupResponse updateUserGroupWithOptions(shared_ptr<UpdateUserGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserGroupResponse updateUserGroup(shared_ptr<UpdateUserGroupRequest> request);
  UpdateUserGroupSwitchResponse updateUserGroupSwitchWithOptions(shared_ptr<UpdateUserGroupSwitchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserGroupSwitchResponse updateUserGroupSwitch(shared_ptr<UpdateUserGroupSwitchRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dataphin-public20230630

#endif
