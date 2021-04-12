// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DMS-ENTERPRISE20181101_H_
#define ALIBABACLOUD_DMS-ENTERPRISE20181101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dms-enterprise20181101 {
class SubmitStructSyncOrderApprovalRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<long> tid{};

  SubmitStructSyncOrderApprovalRequest() {}

  explicit SubmitStructSyncOrderApprovalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~SubmitStructSyncOrderApprovalRequest() = default;
};
class SubmitStructSyncOrderApprovalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<long> workflowInstanceId{};

  SubmitStructSyncOrderApprovalResponseBody() {}

  explicit SubmitStructSyncOrderApprovalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (workflowInstanceId) {
      res["WorkflowInstanceId"] = boost::any(*workflowInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("WorkflowInstanceId") != m.end() && !m["WorkflowInstanceId"].empty()) {
      workflowInstanceId = make_shared<long>(boost::any_cast<long>(m["WorkflowInstanceId"]));
    }
  }


  virtual ~SubmitStructSyncOrderApprovalResponseBody() = default;
};
class SubmitStructSyncOrderApprovalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitStructSyncOrderApprovalResponseBody> body{};

  SubmitStructSyncOrderApprovalResponse() {}

  explicit SubmitStructSyncOrderApprovalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitStructSyncOrderApprovalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitStructSyncOrderApprovalResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitStructSyncOrderApprovalResponse() = default;
};
class ListDatabaseUserPermssionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> permType{};
  shared_ptr<string> dbId{};
  shared_ptr<bool> logic{};
  shared_ptr<string> userName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDatabaseUserPermssionsRequest() {}

  explicit ListDatabaseUserPermssionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (permType) {
      res["PermType"] = boost::any(*permType);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("PermType") != m.end() && !m["PermType"].empty()) {
      permType = make_shared<string>(boost::any_cast<string>(m["PermType"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<string>(boost::any_cast<string>(m["DbId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListDatabaseUserPermssionsRequest() = default;
};
class ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail : public Darabonba::Model {
public:
  shared_ptr<string> originFrom{};
  shared_ptr<string> permType{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> createDate{};
  shared_ptr<string> userAccessId{};
  shared_ptr<string> extraData{};

  ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail() {}

  explicit ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originFrom) {
      res["OriginFrom"] = boost::any(*originFrom);
    }
    if (permType) {
      res["PermType"] = boost::any(*permType);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (userAccessId) {
      res["UserAccessId"] = boost::any(*userAccessId);
    }
    if (extraData) {
      res["ExtraData"] = boost::any(*extraData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginFrom") != m.end() && !m["OriginFrom"].empty()) {
      originFrom = make_shared<string>(boost::any_cast<string>(m["OriginFrom"]));
    }
    if (m.find("PermType") != m.end() && !m["PermType"].empty()) {
      permType = make_shared<string>(boost::any_cast<string>(m["PermType"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("UserAccessId") != m.end() && !m["UserAccessId"].empty()) {
      userAccessId = make_shared<string>(boost::any_cast<string>(m["UserAccessId"]));
    }
    if (m.find("ExtraData") != m.end() && !m["ExtraData"].empty()) {
      extraData = make_shared<string>(boost::any_cast<string>(m["ExtraData"]));
    }
  }


  virtual ~ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail() = default;
};
class ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails : public Darabonba::Model {
public:
  shared_ptr<vector<ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail>> permDetail{};

  ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails() {}

  explicit ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permDetail) {
      vector<boost::any> temp1;
      for(auto item1:*permDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermDetail") != m.end() && !m["PermDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["PermDetail"].type()) {
        vector<ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permDetail = make_shared<vector<ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail>>(expect1);
      }
    }
  }


  virtual ~ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails() = default;
};
class ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission : public Darabonba::Model {
public:
  shared_ptr<string> dbId{};
  shared_ptr<string> tableName{};
  shared_ptr<string> userId{};
  shared_ptr<string> schemaName{};
  shared_ptr<bool> logic{};
  shared_ptr<string> userNickName{};
  shared_ptr<string> instanceId{};
  shared_ptr<ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails> permDetails{};
  shared_ptr<string> envType{};
  shared_ptr<string> columnName{};
  shared_ptr<string> dbType{};
  shared_ptr<string> dsType{};
  shared_ptr<string> tableId{};
  shared_ptr<string> searchName{};
  shared_ptr<string> alias{};

  ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission() {}

  explicit ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (userNickName) {
      res["UserNickName"] = boost::any(*userNickName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (permDetails) {
      res["PermDetails"] = permDetails ? boost::any(permDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (dsType) {
      res["DsType"] = boost::any(*dsType);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<string>(boost::any_cast<string>(m["DbId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("UserNickName") != m.end() && !m["UserNickName"].empty()) {
      userNickName = make_shared<string>(boost::any_cast<string>(m["UserNickName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PermDetails") != m.end() && !m["PermDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["PermDetails"].type()) {
        ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PermDetails"]));
        permDetails = make_shared<ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails>(model1);
      }
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("DsType") != m.end() && !m["DsType"].empty()) {
      dsType = make_shared<string>(boost::any_cast<string>(m["DsType"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<string>(boost::any_cast<string>(m["TableId"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
  }


  virtual ~ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission() = default;
};
class ListDatabaseUserPermssionsResponseBodyUserPermissions : public Darabonba::Model {
public:
  shared_ptr<vector<ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission>> userPermission{};

  ListDatabaseUserPermssionsResponseBodyUserPermissions() {}

  explicit ListDatabaseUserPermssionsResponseBodyUserPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPermission) {
      vector<boost::any> temp1;
      for(auto item1:*userPermission){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserPermission"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPermission") != m.end() && !m["UserPermission"].empty()) {
      if (typeid(vector<boost::any>) == m["UserPermission"].type()) {
        vector<ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserPermission"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userPermission = make_shared<vector<ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission>>(expect1);
      }
    }
  }


  virtual ~ListDatabaseUserPermssionsResponseBodyUserPermissions() = default;
};
class ListDatabaseUserPermssionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<ListDatabaseUserPermssionsResponseBodyUserPermissions> userPermissions{};
  shared_ptr<bool> success{};

  ListDatabaseUserPermssionsResponseBody() {}

  explicit ListDatabaseUserPermssionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (userPermissions) {
      res["UserPermissions"] = userPermissions ? boost::any(userPermissions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("UserPermissions") != m.end() && !m["UserPermissions"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserPermissions"].type()) {
        ListDatabaseUserPermssionsResponseBodyUserPermissions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserPermissions"]));
        userPermissions = make_shared<ListDatabaseUserPermssionsResponseBodyUserPermissions>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListDatabaseUserPermssionsResponseBody() = default;
};
class ListDatabaseUserPermssionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDatabaseUserPermssionsResponseBody> body{};

  ListDatabaseUserPermssionsResponse() {}

  explicit ListDatabaseUserPermssionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDatabaseUserPermssionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatabaseUserPermssionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatabaseUserPermssionsResponse() = default;
};
class ListSensitiveColumnsRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> columnName{};
  shared_ptr<string> securityLevel{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListSensitiveColumnsRequest() {}

  explicit ListSensitiveColumnsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<string>(boost::any_cast<string>(m["SecurityLevel"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListSensitiveColumnsRequest() = default;
};
class ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn : public Darabonba::Model {
public:
  shared_ptr<string> columnName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> securityLevel{};
  shared_ptr<long> columnCount{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> functionType{};

  ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn() {}

  explicit ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    if (columnCount) {
      res["ColumnCount"] = boost::any(*columnCount);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (functionType) {
      res["FunctionType"] = boost::any(*functionType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<string>(boost::any_cast<string>(m["SecurityLevel"]));
    }
    if (m.find("ColumnCount") != m.end() && !m["ColumnCount"].empty()) {
      columnCount = make_shared<long>(boost::any_cast<long>(m["ColumnCount"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("FunctionType") != m.end() && !m["FunctionType"].empty()) {
      functionType = make_shared<string>(boost::any_cast<string>(m["FunctionType"]));
    }
  }


  virtual ~ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn() = default;
};
class ListSensitiveColumnsResponseBodySensitiveColumnList : public Darabonba::Model {
public:
  shared_ptr<vector<ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn>> sensitiveColumn{};

  ListSensitiveColumnsResponseBodySensitiveColumnList() {}

  explicit ListSensitiveColumnsResponseBodySensitiveColumnList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sensitiveColumn) {
      vector<boost::any> temp1;
      for(auto item1:*sensitiveColumn){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SensitiveColumn"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SensitiveColumn") != m.end() && !m["SensitiveColumn"].empty()) {
      if (typeid(vector<boost::any>) == m["SensitiveColumn"].type()) {
        vector<ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SensitiveColumn"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitiveColumn = make_shared<vector<ListSensitiveColumnsResponseBodySensitiveColumnListSensitiveColumn>>(expect1);
      }
    }
  }


  virtual ~ListSensitiveColumnsResponseBodySensitiveColumnList() = default;
};
class ListSensitiveColumnsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<ListSensitiveColumnsResponseBodySensitiveColumnList> sensitiveColumnList{};
  shared_ptr<bool> success{};

  ListSensitiveColumnsResponseBody() {}

  explicit ListSensitiveColumnsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (sensitiveColumnList) {
      res["SensitiveColumnList"] = sensitiveColumnList ? boost::any(sensitiveColumnList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("SensitiveColumnList") != m.end() && !m["SensitiveColumnList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SensitiveColumnList"].type()) {
        ListSensitiveColumnsResponseBodySensitiveColumnList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SensitiveColumnList"]));
        sensitiveColumnList = make_shared<ListSensitiveColumnsResponseBodySensitiveColumnList>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListSensitiveColumnsResponseBody() = default;
};
class ListSensitiveColumnsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSensitiveColumnsResponseBody> body{};

  ListSensitiveColumnsResponse() {}

  explicit ListSensitiveColumnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSensitiveColumnsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSensitiveColumnsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSensitiveColumnsResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> role{};
  shared_ptr<string> userState{};
  shared_ptr<string> searchKey{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (userState) {
      res["UserState"] = boost::any(*userState);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("UserState") != m.end() && !m["UserState"].empty()) {
      userState = make_shared<string>(boost::any_cast<string>(m["UserState"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListUsersRequest() = default;
};
class ListUsersResponseBodyUserListUserRoleIdList : public Darabonba::Model {
public:
  shared_ptr<vector<long>> roleIds{};

  ListUsersResponseBodyUserListUserRoleIdList() {}

  explicit ListUsersResponseBodyUserListUserRoleIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleIds) {
      res["RoleIds"] = boost::any(*roleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleIds") != m.end() && !m["RoleIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RoleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      roleIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~ListUsersResponseBodyUserListUserRoleIdList() = default;
};
class ListUsersResponseBodyUserListUserRoleNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> roleNames{};

  ListUsersResponseBodyUserListUserRoleNameList() {}

  explicit ListUsersResponseBodyUserListUserRoleNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleNames) {
      res["RoleNames"] = boost::any(*roleNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleNames") != m.end() && !m["RoleNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RoleNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roleNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListUsersResponseBodyUserListUserRoleNameList() = default;
};
class ListUsersResponseBodyUserListUser : public Darabonba::Model {
public:
  shared_ptr<string> state{};
  shared_ptr<long> curResultCount{};
  shared_ptr<string> userId{};
  shared_ptr<string> lastLoginTime{};
  shared_ptr<long> maxResultCount{};
  shared_ptr<string> parentUid{};
  shared_ptr<ListUsersResponseBodyUserListUserRoleIdList> roleIdList{};
  shared_ptr<ListUsersResponseBodyUserListUserRoleNameList> roleNameList{};
  shared_ptr<string> nickName{};
  shared_ptr<long> maxExecuteCount{};
  shared_ptr<long> curExecuteCount{};
  shared_ptr<string> mobile{};
  shared_ptr<string> uid{};

  ListUsersResponseBodyUserListUser() {}

  explicit ListUsersResponseBodyUserListUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (curResultCount) {
      res["CurResultCount"] = boost::any(*curResultCount);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (lastLoginTime) {
      res["LastLoginTime"] = boost::any(*lastLoginTime);
    }
    if (maxResultCount) {
      res["MaxResultCount"] = boost::any(*maxResultCount);
    }
    if (parentUid) {
      res["ParentUid"] = boost::any(*parentUid);
    }
    if (roleIdList) {
      res["RoleIdList"] = roleIdList ? boost::any(roleIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleNameList) {
      res["RoleNameList"] = roleNameList ? boost::any(roleNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (maxExecuteCount) {
      res["MaxExecuteCount"] = boost::any(*maxExecuteCount);
    }
    if (curExecuteCount) {
      res["CurExecuteCount"] = boost::any(*curExecuteCount);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("CurResultCount") != m.end() && !m["CurResultCount"].empty()) {
      curResultCount = make_shared<long>(boost::any_cast<long>(m["CurResultCount"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("LastLoginTime") != m.end() && !m["LastLoginTime"].empty()) {
      lastLoginTime = make_shared<string>(boost::any_cast<string>(m["LastLoginTime"]));
    }
    if (m.find("MaxResultCount") != m.end() && !m["MaxResultCount"].empty()) {
      maxResultCount = make_shared<long>(boost::any_cast<long>(m["MaxResultCount"]));
    }
    if (m.find("ParentUid") != m.end() && !m["ParentUid"].empty()) {
      parentUid = make_shared<string>(boost::any_cast<string>(m["ParentUid"]));
    }
    if (m.find("RoleIdList") != m.end() && !m["RoleIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleIdList"].type()) {
        ListUsersResponseBodyUserListUserRoleIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleIdList"]));
        roleIdList = make_shared<ListUsersResponseBodyUserListUserRoleIdList>(model1);
      }
    }
    if (m.find("RoleNameList") != m.end() && !m["RoleNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleNameList"].type()) {
        ListUsersResponseBodyUserListUserRoleNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleNameList"]));
        roleNameList = make_shared<ListUsersResponseBodyUserListUserRoleNameList>(model1);
      }
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("MaxExecuteCount") != m.end() && !m["MaxExecuteCount"].empty()) {
      maxExecuteCount = make_shared<long>(boost::any_cast<long>(m["MaxExecuteCount"]));
    }
    if (m.find("CurExecuteCount") != m.end() && !m["CurExecuteCount"].empty()) {
      curExecuteCount = make_shared<long>(boost::any_cast<long>(m["CurExecuteCount"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~ListUsersResponseBodyUserListUser() = default;
};
class ListUsersResponseBodyUserList : public Darabonba::Model {
public:
  shared_ptr<vector<ListUsersResponseBodyUserListUser>> user{};

  ListUsersResponseBodyUserList() {}

  explicit ListUsersResponseBodyUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListUsersResponseBodyUserListUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyUserListUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<ListUsersResponseBodyUserListUser>>(expect1);
      }
    }
  }


  virtual ~ListUsersResponseBodyUserList() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<ListUsersResponseBodyUserList> userList{};
  shared_ptr<bool> success{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (userList) {
      res["UserList"] = userList ? boost::any(userList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("UserList") != m.end() && !m["UserList"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserList"].type()) {
        ListUsersResponseBodyUserList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserList"]));
        userList = make_shared<ListUsersResponseBodyUserList>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class SubmitOrderApprovalRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> orderId{};

  SubmitOrderApprovalRequest() {}

  explicit SubmitOrderApprovalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~SubmitOrderApprovalRequest() = default;
};
class SubmitOrderApprovalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  SubmitOrderApprovalResponseBody() {}

  explicit SubmitOrderApprovalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubmitOrderApprovalResponseBody() = default;
};
class SubmitOrderApprovalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitOrderApprovalResponseBody> body{};

  SubmitOrderApprovalResponse() {}

  explicit SubmitOrderApprovalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitOrderApprovalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitOrderApprovalResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitOrderApprovalResponse() = default;
};
class GrantUserPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> userId{};
  shared_ptr<string> dsType{};
  shared_ptr<string> dbId{};
  shared_ptr<bool> logic{};
  shared_ptr<string> tableId{};
  shared_ptr<string> tableName{};
  shared_ptr<string> permTypes{};
  shared_ptr<string> expireDate{};

  GrantUserPermissionRequest() {}

  explicit GrantUserPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (dsType) {
      res["DsType"] = boost::any(*dsType);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (permTypes) {
      res["PermTypes"] = boost::any(*permTypes);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("DsType") != m.end() && !m["DsType"].empty()) {
      dsType = make_shared<string>(boost::any_cast<string>(m["DsType"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<string>(boost::any_cast<string>(m["DbId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<string>(boost::any_cast<string>(m["TableId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("PermTypes") != m.end() && !m["PermTypes"].empty()) {
      permTypes = make_shared<string>(boost::any_cast<string>(m["PermTypes"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
  }


  virtual ~GrantUserPermissionRequest() = default;
};
class GrantUserPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GrantUserPermissionResponseBody() {}

  explicit GrantUserPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GrantUserPermissionResponseBody() = default;
};
class GrantUserPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GrantUserPermissionResponseBody> body{};

  GrantUserPermissionResponse() {}

  explicit GrantUserPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GrantUserPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantUserPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~GrantUserPermissionResponse() = default;
};
class GetMetaTableDetailInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> tableGuid{};

  GetMetaTableDetailInfoRequest() {}

  explicit GetMetaTableDetailInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (tableGuid) {
      res["TableGuid"] = boost::any(*tableGuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("TableGuid") != m.end() && !m["TableGuid"].empty()) {
      tableGuid = make_shared<string>(boost::any_cast<string>(m["TableGuid"]));
    }
  }


  virtual ~GetMetaTableDetailInfoRequest() = default;
};
class GetMetaTableDetailInfoResponseBodyDetailInfoIndexList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> indexColumns{};
  shared_ptr<string> indexName{};
  shared_ptr<bool> unique{};
  shared_ptr<string> indexType{};
  shared_ptr<string> indexId{};

  GetMetaTableDetailInfoResponseBodyDetailInfoIndexList() {}

  explicit GetMetaTableDetailInfoResponseBodyDetailInfoIndexList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexColumns) {
      res["IndexColumns"] = boost::any(*indexColumns);
    }
    if (indexName) {
      res["IndexName"] = boost::any(*indexName);
    }
    if (unique) {
      res["Unique"] = boost::any(*unique);
    }
    if (indexType) {
      res["IndexType"] = boost::any(*indexType);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexColumns") != m.end() && !m["IndexColumns"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IndexColumns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IndexColumns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      indexColumns = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IndexName") != m.end() && !m["IndexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["IndexName"]));
    }
    if (m.find("Unique") != m.end() && !m["Unique"].empty()) {
      unique = make_shared<bool>(boost::any_cast<bool>(m["Unique"]));
    }
    if (m.find("IndexType") != m.end() && !m["IndexType"].empty()) {
      indexType = make_shared<string>(boost::any_cast<string>(m["IndexType"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
  }


  virtual ~GetMetaTableDetailInfoResponseBodyDetailInfoIndexList() = default;
};
class GetMetaTableDetailInfoResponseBodyDetailInfoColumnList : public Darabonba::Model {
public:
  shared_ptr<string> columnName{};
  shared_ptr<string> description{};
  shared_ptr<long> dataScale{};
  shared_ptr<long> dataPrecision{};
  shared_ptr<string> columnType{};
  shared_ptr<bool> autoIncrement{};
  shared_ptr<string> position{};
  shared_ptr<bool> nullable{};
  shared_ptr<string> columnId{};
  shared_ptr<long> dataLength{};

  GetMetaTableDetailInfoResponseBodyDetailInfoColumnList() {}

  explicit GetMetaTableDetailInfoResponseBodyDetailInfoColumnList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dataScale) {
      res["DataScale"] = boost::any(*dataScale);
    }
    if (dataPrecision) {
      res["DataPrecision"] = boost::any(*dataPrecision);
    }
    if (columnType) {
      res["ColumnType"] = boost::any(*columnType);
    }
    if (autoIncrement) {
      res["AutoIncrement"] = boost::any(*autoIncrement);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    if (nullable) {
      res["Nullable"] = boost::any(*nullable);
    }
    if (columnId) {
      res["ColumnId"] = boost::any(*columnId);
    }
    if (dataLength) {
      res["DataLength"] = boost::any(*dataLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DataScale") != m.end() && !m["DataScale"].empty()) {
      dataScale = make_shared<long>(boost::any_cast<long>(m["DataScale"]));
    }
    if (m.find("DataPrecision") != m.end() && !m["DataPrecision"].empty()) {
      dataPrecision = make_shared<long>(boost::any_cast<long>(m["DataPrecision"]));
    }
    if (m.find("ColumnType") != m.end() && !m["ColumnType"].empty()) {
      columnType = make_shared<string>(boost::any_cast<string>(m["ColumnType"]));
    }
    if (m.find("AutoIncrement") != m.end() && !m["AutoIncrement"].empty()) {
      autoIncrement = make_shared<bool>(boost::any_cast<bool>(m["AutoIncrement"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["Position"]));
    }
    if (m.find("Nullable") != m.end() && !m["Nullable"].empty()) {
      nullable = make_shared<bool>(boost::any_cast<bool>(m["Nullable"]));
    }
    if (m.find("ColumnId") != m.end() && !m["ColumnId"].empty()) {
      columnId = make_shared<string>(boost::any_cast<string>(m["ColumnId"]));
    }
    if (m.find("DataLength") != m.end() && !m["DataLength"].empty()) {
      dataLength = make_shared<long>(boost::any_cast<long>(m["DataLength"]));
    }
  }


  virtual ~GetMetaTableDetailInfoResponseBodyDetailInfoColumnList() = default;
};
class GetMetaTableDetailInfoResponseBodyDetailInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetMetaTableDetailInfoResponseBodyDetailInfoIndexList>> indexList{};
  shared_ptr<vector<GetMetaTableDetailInfoResponseBodyDetailInfoColumnList>> columnList{};

  GetMetaTableDetailInfoResponseBodyDetailInfo() {}

  explicit GetMetaTableDetailInfoResponseBodyDetailInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexList) {
      vector<boost::any> temp1;
      for(auto item1:*indexList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IndexList"] = boost::any(temp1);
    }
    if (columnList) {
      vector<boost::any> temp1;
      for(auto item1:*columnList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ColumnList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexList") != m.end() && !m["IndexList"].empty()) {
      if (typeid(vector<boost::any>) == m["IndexList"].type()) {
        vector<GetMetaTableDetailInfoResponseBodyDetailInfoIndexList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IndexList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMetaTableDetailInfoResponseBodyDetailInfoIndexList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        indexList = make_shared<vector<GetMetaTableDetailInfoResponseBodyDetailInfoIndexList>>(expect1);
      }
    }
    if (m.find("ColumnList") != m.end() && !m["ColumnList"].empty()) {
      if (typeid(vector<boost::any>) == m["ColumnList"].type()) {
        vector<GetMetaTableDetailInfoResponseBodyDetailInfoColumnList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ColumnList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMetaTableDetailInfoResponseBodyDetailInfoColumnList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columnList = make_shared<vector<GetMetaTableDetailInfoResponseBodyDetailInfoColumnList>>(expect1);
      }
    }
  }


  virtual ~GetMetaTableDetailInfoResponseBodyDetailInfo() = default;
};
class GetMetaTableDetailInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetMetaTableDetailInfoResponseBodyDetailInfo> detailInfo{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GetMetaTableDetailInfoResponseBody() {}

  explicit GetMetaTableDetailInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (detailInfo) {
      res["DetailInfo"] = detailInfo ? boost::any(detailInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("DetailInfo") != m.end() && !m["DetailInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DetailInfo"].type()) {
        GetMetaTableDetailInfoResponseBodyDetailInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DetailInfo"]));
        detailInfo = make_shared<GetMetaTableDetailInfoResponseBodyDetailInfo>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetMetaTableDetailInfoResponseBody() = default;
};
class GetMetaTableDetailInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMetaTableDetailInfoResponseBody> body{};

  GetMetaTableDetailInfoResponse() {}

  explicit GetMetaTableDetailInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMetaTableDetailInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMetaTableDetailInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetMetaTableDetailInfoResponse() = default;
};
class GetDataCorrectSQLFileRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<long> tid{};

  GetDataCorrectSQLFileRequest() {}

  explicit GetDataCorrectSQLFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~GetDataCorrectSQLFileRequest() = default;
};
class GetDataCorrectSQLFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> fileUrl{};

  GetDataCorrectSQLFileResponseBody() {}

  explicit GetDataCorrectSQLFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
  }


  virtual ~GetDataCorrectSQLFileResponseBody() = default;
};
class GetDataCorrectSQLFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDataCorrectSQLFileResponseBody> body{};

  GetDataCorrectSQLFileResponse() {}

  explicit GetDataCorrectSQLFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataCorrectSQLFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataCorrectSQLFileResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataCorrectSQLFileResponse() = default;
};
class CreateFreeLockCorrectOrderRequestParamDbItemList : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<bool> logic{};

  CreateFreeLockCorrectOrderRequestParamDbItemList() {}

  explicit CreateFreeLockCorrectOrderRequestParamDbItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
  }


  virtual ~CreateFreeLockCorrectOrderRequestParamDbItemList() = default;
};
class CreateFreeLockCorrectOrderRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> classify{};
  shared_ptr<string> execSQL{};
  shared_ptr<string> sqlType{};
  shared_ptr<string> attachmentName{};
  shared_ptr<string> rollbackSQL{};
  shared_ptr<string> rollbackAttachmentName{};
  shared_ptr<string> rollbackSqlType{};
  shared_ptr<vector<CreateFreeLockCorrectOrderRequestParamDbItemList>> dbItemList{};

  CreateFreeLockCorrectOrderRequestParam() {}

  explicit CreateFreeLockCorrectOrderRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classify) {
      res["Classify"] = boost::any(*classify);
    }
    if (execSQL) {
      res["ExecSQL"] = boost::any(*execSQL);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    if (attachmentName) {
      res["AttachmentName"] = boost::any(*attachmentName);
    }
    if (rollbackSQL) {
      res["RollbackSQL"] = boost::any(*rollbackSQL);
    }
    if (rollbackAttachmentName) {
      res["RollbackAttachmentName"] = boost::any(*rollbackAttachmentName);
    }
    if (rollbackSqlType) {
      res["RollbackSqlType"] = boost::any(*rollbackSqlType);
    }
    if (dbItemList) {
      vector<boost::any> temp1;
      for(auto item1:*dbItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classify") != m.end() && !m["Classify"].empty()) {
      classify = make_shared<string>(boost::any_cast<string>(m["Classify"]));
    }
    if (m.find("ExecSQL") != m.end() && !m["ExecSQL"].empty()) {
      execSQL = make_shared<string>(boost::any_cast<string>(m["ExecSQL"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["SqlType"]));
    }
    if (m.find("AttachmentName") != m.end() && !m["AttachmentName"].empty()) {
      attachmentName = make_shared<string>(boost::any_cast<string>(m["AttachmentName"]));
    }
    if (m.find("RollbackSQL") != m.end() && !m["RollbackSQL"].empty()) {
      rollbackSQL = make_shared<string>(boost::any_cast<string>(m["RollbackSQL"]));
    }
    if (m.find("RollbackAttachmentName") != m.end() && !m["RollbackAttachmentName"].empty()) {
      rollbackAttachmentName = make_shared<string>(boost::any_cast<string>(m["RollbackAttachmentName"]));
    }
    if (m.find("RollbackSqlType") != m.end() && !m["RollbackSqlType"].empty()) {
      rollbackSqlType = make_shared<string>(boost::any_cast<string>(m["RollbackSqlType"]));
    }
    if (m.find("DbItemList") != m.end() && !m["DbItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["DbItemList"].type()) {
        vector<CreateFreeLockCorrectOrderRequestParamDbItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFreeLockCorrectOrderRequestParamDbItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbItemList = make_shared<vector<CreateFreeLockCorrectOrderRequestParamDbItemList>>(expect1);
      }
    }
  }


  virtual ~CreateFreeLockCorrectOrderRequestParam() = default;
};
class CreateFreeLockCorrectOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<vector<long>> relatedUserList{};
  shared_ptr<CreateFreeLockCorrectOrderRequestParam> param{};
  shared_ptr<string> attachmentKey{};
  shared_ptr<long> tid{};

  CreateFreeLockCorrectOrderRequest() {}

  explicit CreateFreeLockCorrectOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (relatedUserList) {
      res["RelatedUserList"] = boost::any(*relatedUserList);
    }
    if (param) {
      res["Param"] = param ? boost::any(param->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (attachmentKey) {
      res["AttachmentKey"] = boost::any(*attachmentKey);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("RelatedUserList") != m.end() && !m["RelatedUserList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RelatedUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelatedUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      relatedUserList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      if (typeid(map<string, boost::any>) == m["Param"].type()) {
        CreateFreeLockCorrectOrderRequestParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Param"]));
        param = make_shared<CreateFreeLockCorrectOrderRequestParam>(model1);
      }
    }
    if (m.find("AttachmentKey") != m.end() && !m["AttachmentKey"].empty()) {
      attachmentKey = make_shared<string>(boost::any_cast<string>(m["AttachmentKey"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~CreateFreeLockCorrectOrderRequest() = default;
};
class CreateFreeLockCorrectOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> relatedUserListShrink{};
  shared_ptr<string> paramShrink{};
  shared_ptr<string> attachmentKey{};
  shared_ptr<long> tid{};

  CreateFreeLockCorrectOrderShrinkRequest() {}

  explicit CreateFreeLockCorrectOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (relatedUserListShrink) {
      res["RelatedUserList"] = boost::any(*relatedUserListShrink);
    }
    if (paramShrink) {
      res["Param"] = boost::any(*paramShrink);
    }
    if (attachmentKey) {
      res["AttachmentKey"] = boost::any(*attachmentKey);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("RelatedUserList") != m.end() && !m["RelatedUserList"].empty()) {
      relatedUserListShrink = make_shared<string>(boost::any_cast<string>(m["RelatedUserList"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      paramShrink = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("AttachmentKey") != m.end() && !m["AttachmentKey"].empty()) {
      attachmentKey = make_shared<string>(boost::any_cast<string>(m["AttachmentKey"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~CreateFreeLockCorrectOrderShrinkRequest() = default;
};
class CreateFreeLockCorrectOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<long>> createOrderResult{};

  CreateFreeLockCorrectOrderResponseBody() {}

  explicit CreateFreeLockCorrectOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (createOrderResult) {
      res["CreateOrderResult"] = boost::any(*createOrderResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("CreateOrderResult") != m.end() && !m["CreateOrderResult"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CreateOrderResult"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CreateOrderResult"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      createOrderResult = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateFreeLockCorrectOrderResponseBody() = default;
};
class CreateFreeLockCorrectOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateFreeLockCorrectOrderResponseBody> body{};

  CreateFreeLockCorrectOrderResponse() {}

  explicit CreateFreeLockCorrectOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFreeLockCorrectOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFreeLockCorrectOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFreeLockCorrectOrderResponse() = default;
};
class CreateOrderRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> comment{};
  shared_ptr<map<string, boost::any>> pluginParam{};
  shared_ptr<string> relatedUserList{};
  shared_ptr<string> pluginType{};
  shared_ptr<string> attachmentKey{};

  CreateOrderRequest() {}

  explicit CreateOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (pluginParam) {
      res["PluginParam"] = boost::any(*pluginParam);
    }
    if (relatedUserList) {
      res["RelatedUserList"] = boost::any(*relatedUserList);
    }
    if (pluginType) {
      res["PluginType"] = boost::any(*pluginType);
    }
    if (attachmentKey) {
      res["AttachmentKey"] = boost::any(*attachmentKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("PluginParam") != m.end() && !m["PluginParam"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["PluginParam"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      pluginParam = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RelatedUserList") != m.end() && !m["RelatedUserList"].empty()) {
      relatedUserList = make_shared<string>(boost::any_cast<string>(m["RelatedUserList"]));
    }
    if (m.find("PluginType") != m.end() && !m["PluginType"].empty()) {
      pluginType = make_shared<string>(boost::any_cast<string>(m["PluginType"]));
    }
    if (m.find("AttachmentKey") != m.end() && !m["AttachmentKey"].empty()) {
      attachmentKey = make_shared<string>(boost::any_cast<string>(m["AttachmentKey"]));
    }
  }


  virtual ~CreateOrderRequest() = default;
};
class CreateOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> comment{};
  shared_ptr<string> pluginParamShrink{};
  shared_ptr<string> relatedUserList{};
  shared_ptr<string> pluginType{};
  shared_ptr<string> attachmentKey{};

  CreateOrderShrinkRequest() {}

  explicit CreateOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (pluginParamShrink) {
      res["PluginParam"] = boost::any(*pluginParamShrink);
    }
    if (relatedUserList) {
      res["RelatedUserList"] = boost::any(*relatedUserList);
    }
    if (pluginType) {
      res["PluginType"] = boost::any(*pluginType);
    }
    if (attachmentKey) {
      res["AttachmentKey"] = boost::any(*attachmentKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("PluginParam") != m.end() && !m["PluginParam"].empty()) {
      pluginParamShrink = make_shared<string>(boost::any_cast<string>(m["PluginParam"]));
    }
    if (m.find("RelatedUserList") != m.end() && !m["RelatedUserList"].empty()) {
      relatedUserList = make_shared<string>(boost::any_cast<string>(m["RelatedUserList"]));
    }
    if (m.find("PluginType") != m.end() && !m["PluginType"].empty()) {
      pluginType = make_shared<string>(boost::any_cast<string>(m["PluginType"]));
    }
    if (m.find("AttachmentKey") != m.end() && !m["AttachmentKey"].empty()) {
      attachmentKey = make_shared<string>(boost::any_cast<string>(m["AttachmentKey"]));
    }
  }


  virtual ~CreateOrderShrinkRequest() = default;
};
class CreateOrderResponseBodyCreateOrderResult : public Darabonba::Model {
public:
  shared_ptr<vector<long>> orderIds{};

  CreateOrderResponseBodyCreateOrderResult() {}

  explicit CreateOrderResponseBodyCreateOrderResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderIds) {
      res["OrderIds"] = boost::any(*orderIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderIds") != m.end() && !m["OrderIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["OrderIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OrderIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      orderIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateOrderResponseBodyCreateOrderResult() = default;
};
class CreateOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateOrderResponseBodyCreateOrderResult> createOrderResult{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  CreateOrderResponseBody() {}

  explicit CreateOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createOrderResult) {
      res["CreateOrderResult"] = createOrderResult ? boost::any(createOrderResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateOrderResult") != m.end() && !m["CreateOrderResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateOrderResult"].type()) {
        CreateOrderResponseBodyCreateOrderResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateOrderResult"]));
        createOrderResult = make_shared<CreateOrderResponseBodyCreateOrderResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateOrderResponseBody() = default;
};
class CreateOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateOrderResponseBody> body{};

  CreateOrderResponse() {}

  explicit CreateOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOrderResponse() = default;
};
class ListDatabasesRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDatabasesRequest() {}

  explicit ListDatabasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListDatabasesRequest() = default;
};
class ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerIds{};

  ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList() {}

  explicit ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList() = default;
};
class ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerNames{};

  ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList() {}

  explicit ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerNames) {
      res["OwnerNames"] = boost::any(*ownerNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerNames") != m.end() && !m["OwnerNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList() = default;
};
class ListDatabasesResponseBodyDatabaseListDatabase : public Darabonba::Model {
public:
  shared_ptr<string> databaseId{};
  shared_ptr<string> host{};
  shared_ptr<string> catalogName{};
  shared_ptr<string> dbaName{};
  shared_ptr<string> state{};
  shared_ptr<string> dbaId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> port{};
  shared_ptr<string> envType{};
  shared_ptr<string> sid{};
  shared_ptr<ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList> ownerIdList{};
  shared_ptr<string> encoding{};
  shared_ptr<string> dbType{};
  shared_ptr<ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList> ownerNameList{};
  shared_ptr<string> searchName{};

  ListDatabasesResponseBodyDatabaseListDatabase() {}

  explicit ListDatabasesResponseBodyDatabaseListDatabase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseId) {
      res["DatabaseId"] = boost::any(*databaseId);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (catalogName) {
      res["CatalogName"] = boost::any(*catalogName);
    }
    if (dbaName) {
      res["DbaName"] = boost::any(*dbaName);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (dbaId) {
      res["DbaId"] = boost::any(*dbaId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (ownerIdList) {
      res["OwnerIdList"] = ownerIdList ? boost::any(ownerIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (encoding) {
      res["Encoding"] = boost::any(*encoding);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (ownerNameList) {
      res["OwnerNameList"] = ownerNameList ? boost::any(ownerNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseId") != m.end() && !m["DatabaseId"].empty()) {
      databaseId = make_shared<string>(boost::any_cast<string>(m["DatabaseId"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("CatalogName") != m.end() && !m["CatalogName"].empty()) {
      catalogName = make_shared<string>(boost::any_cast<string>(m["CatalogName"]));
    }
    if (m.find("DbaName") != m.end() && !m["DbaName"].empty()) {
      dbaName = make_shared<string>(boost::any_cast<string>(m["DbaName"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("DbaId") != m.end() && !m["DbaId"].empty()) {
      dbaId = make_shared<string>(boost::any_cast<string>(m["DbaId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("OwnerIdList") != m.end() && !m["OwnerIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerIdList"].type()) {
        ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerIdList"]));
        ownerIdList = make_shared<ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList>(model1);
      }
    }
    if (m.find("Encoding") != m.end() && !m["Encoding"].empty()) {
      encoding = make_shared<string>(boost::any_cast<string>(m["Encoding"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("OwnerNameList") != m.end() && !m["OwnerNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerNameList"].type()) {
        ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerNameList"]));
        ownerNameList = make_shared<ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList>(model1);
      }
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
  }


  virtual ~ListDatabasesResponseBodyDatabaseListDatabase() = default;
};
class ListDatabasesResponseBodyDatabaseList : public Darabonba::Model {
public:
  shared_ptr<vector<ListDatabasesResponseBodyDatabaseListDatabase>> database{};

  ListDatabasesResponseBodyDatabaseList() {}

  explicit ListDatabasesResponseBodyDatabaseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      vector<boost::any> temp1;
      for(auto item1:*database){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Database"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      if (typeid(vector<boost::any>) == m["Database"].type()) {
        vector<ListDatabasesResponseBodyDatabaseListDatabase> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Database"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDatabasesResponseBodyDatabaseListDatabase model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        database = make_shared<vector<ListDatabasesResponseBodyDatabaseListDatabase>>(expect1);
      }
    }
  }


  virtual ~ListDatabasesResponseBodyDatabaseList() = default;
};
class ListDatabasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<ListDatabasesResponseBodyDatabaseList> databaseList{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  ListDatabasesResponseBody() {}

  explicit ListDatabasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (databaseList) {
      res["DatabaseList"] = databaseList ? boost::any(databaseList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DatabaseList") != m.end() && !m["DatabaseList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DatabaseList"].type()) {
        ListDatabasesResponseBodyDatabaseList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DatabaseList"]));
        databaseList = make_shared<ListDatabasesResponseBodyDatabaseList>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListDatabasesResponseBody() = default;
};
class ListDatabasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDatabasesResponseBody> body{};

  ListDatabasesResponse() {}

  explicit ListDatabasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDatabasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatabasesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatabasesResponse() = default;
};
class ListUserPermissionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> permType{};
  shared_ptr<string> userId{};
  shared_ptr<string> databaseName{};
  shared_ptr<bool> logic{};
  shared_ptr<string> envType{};
  shared_ptr<string> dbType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListUserPermissionsRequest() {}

  explicit ListUserPermissionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (permType) {
      res["PermType"] = boost::any(*permType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("PermType") != m.end() && !m["PermType"].empty()) {
      permType = make_shared<string>(boost::any_cast<string>(m["PermType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListUserPermissionsRequest() = default;
};
class ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail : public Darabonba::Model {
public:
  shared_ptr<string> originFrom{};
  shared_ptr<string> permType{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> createDate{};
  shared_ptr<string> userAccessId{};
  shared_ptr<string> extraData{};

  ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail() {}

  explicit ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originFrom) {
      res["OriginFrom"] = boost::any(*originFrom);
    }
    if (permType) {
      res["PermType"] = boost::any(*permType);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (userAccessId) {
      res["UserAccessId"] = boost::any(*userAccessId);
    }
    if (extraData) {
      res["ExtraData"] = boost::any(*extraData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginFrom") != m.end() && !m["OriginFrom"].empty()) {
      originFrom = make_shared<string>(boost::any_cast<string>(m["OriginFrom"]));
    }
    if (m.find("PermType") != m.end() && !m["PermType"].empty()) {
      permType = make_shared<string>(boost::any_cast<string>(m["PermType"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("UserAccessId") != m.end() && !m["UserAccessId"].empty()) {
      userAccessId = make_shared<string>(boost::any_cast<string>(m["UserAccessId"]));
    }
    if (m.find("ExtraData") != m.end() && !m["ExtraData"].empty()) {
      extraData = make_shared<string>(boost::any_cast<string>(m["ExtraData"]));
    }
  }


  virtual ~ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail() = default;
};
class ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail>> permDetail{};

  ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails() {}

  explicit ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permDetail) {
      vector<boost::any> temp1;
      for(auto item1:*permDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PermDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PermDetail") != m.end() && !m["PermDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["PermDetail"].type()) {
        vector<ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PermDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permDetail = make_shared<vector<ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail>>(expect1);
      }
    }
  }


  virtual ~ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails() = default;
};
class ListUserPermissionsResponseBodyUserPermissionsUserPermission : public Darabonba::Model {
public:
  shared_ptr<string> dbId{};
  shared_ptr<string> tableName{};
  shared_ptr<string> userId{};
  shared_ptr<string> schemaName{};
  shared_ptr<bool> logic{};
  shared_ptr<string> userNickName{};
  shared_ptr<string> instanceId{};
  shared_ptr<ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails> permDetails{};
  shared_ptr<string> envType{};
  shared_ptr<string> columnName{};
  shared_ptr<string> dbType{};
  shared_ptr<string> dsType{};
  shared_ptr<string> tableId{};
  shared_ptr<string> searchName{};
  shared_ptr<string> alias{};

  ListUserPermissionsResponseBodyUserPermissionsUserPermission() {}

  explicit ListUserPermissionsResponseBodyUserPermissionsUserPermission(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (userNickName) {
      res["UserNickName"] = boost::any(*userNickName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (permDetails) {
      res["PermDetails"] = permDetails ? boost::any(permDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (dsType) {
      res["DsType"] = boost::any(*dsType);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<string>(boost::any_cast<string>(m["DbId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("UserNickName") != m.end() && !m["UserNickName"].empty()) {
      userNickName = make_shared<string>(boost::any_cast<string>(m["UserNickName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PermDetails") != m.end() && !m["PermDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["PermDetails"].type()) {
        ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PermDetails"]));
        permDetails = make_shared<ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails>(model1);
      }
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("DsType") != m.end() && !m["DsType"].empty()) {
      dsType = make_shared<string>(boost::any_cast<string>(m["DsType"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<string>(boost::any_cast<string>(m["TableId"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
  }


  virtual ~ListUserPermissionsResponseBodyUserPermissionsUserPermission() = default;
};
class ListUserPermissionsResponseBodyUserPermissions : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserPermissionsResponseBodyUserPermissionsUserPermission>> userPermission{};

  ListUserPermissionsResponseBodyUserPermissions() {}

  explicit ListUserPermissionsResponseBodyUserPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userPermission) {
      vector<boost::any> temp1;
      for(auto item1:*userPermission){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserPermission"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserPermission") != m.end() && !m["UserPermission"].empty()) {
      if (typeid(vector<boost::any>) == m["UserPermission"].type()) {
        vector<ListUserPermissionsResponseBodyUserPermissionsUserPermission> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserPermission"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserPermissionsResponseBodyUserPermissionsUserPermission model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userPermission = make_shared<vector<ListUserPermissionsResponseBodyUserPermissionsUserPermission>>(expect1);
      }
    }
  }


  virtual ~ListUserPermissionsResponseBodyUserPermissions() = default;
};
class ListUserPermissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<ListUserPermissionsResponseBodyUserPermissions> userPermissions{};
  shared_ptr<bool> success{};

  ListUserPermissionsResponseBody() {}

  explicit ListUserPermissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (userPermissions) {
      res["UserPermissions"] = userPermissions ? boost::any(userPermissions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("UserPermissions") != m.end() && !m["UserPermissions"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserPermissions"].type()) {
        ListUserPermissionsResponseBodyUserPermissions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserPermissions"]));
        userPermissions = make_shared<ListUserPermissionsResponseBodyUserPermissions>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListUserPermissionsResponseBody() = default;
};
class ListUserPermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListUserPermissionsResponseBody> body{};

  ListUserPermissionsResponse() {}

  explicit ListUserPermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserPermissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserPermissionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserPermissionsResponse() = default;
};
class ListWorkFlowTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> searchName{};

  ListWorkFlowTemplatesRequest() {}

  explicit ListWorkFlowTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
  }


  virtual ~ListWorkFlowTemplatesRequest() = default;
};
class ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> nodeName{};
  shared_ptr<long> position{};
  shared_ptr<long> createUserId{};
  shared_ptr<long> templateId{};
  shared_ptr<long> nodeId{};

  ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode() {}

  explicit ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["Position"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<long>(boost::any_cast<long>(m["CreateUserId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<long>(boost::any_cast<long>(m["NodeId"]));
    }
  }


  virtual ~ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode() = default;
};
class ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes : public Darabonba::Model {
public:
  shared_ptr<vector<ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode>> workflowNode{};

  ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes() {}

  explicit ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workflowNode) {
      vector<boost::any> temp1;
      for(auto item1:*workflowNode){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WorkflowNode"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkflowNode") != m.end() && !m["WorkflowNode"].empty()) {
      if (typeid(vector<boost::any>) == m["WorkflowNode"].type()) {
        vector<ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WorkflowNode"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workflowNode = make_shared<vector<ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode>>(expect1);
      }
    }
  }


  virtual ~ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes() = default;
};
class ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate : public Darabonba::Model {
public:
  shared_ptr<long> isSystem{};
  shared_ptr<ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes> workflowNodes{};
  shared_ptr<string> comment{};
  shared_ptr<string> enabled{};
  shared_ptr<string> templateName{};
  shared_ptr<long> templateId{};
  shared_ptr<long> createUserId{};

  ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate() {}

  explicit ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSystem) {
      res["IsSystem"] = boost::any(*isSystem);
    }
    if (workflowNodes) {
      res["WorkflowNodes"] = workflowNodes ? boost::any(workflowNodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSystem") != m.end() && !m["IsSystem"].empty()) {
      isSystem = make_shared<long>(boost::any_cast<long>(m["IsSystem"]));
    }
    if (m.find("WorkflowNodes") != m.end() && !m["WorkflowNodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["WorkflowNodes"].type()) {
        ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WorkflowNodes"]));
        workflowNodes = make_shared<ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplateWorkflowNodes>(model1);
      }
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<string>(boost::any_cast<string>(m["Enabled"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<long>(boost::any_cast<long>(m["CreateUserId"]));
    }
  }


  virtual ~ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate() = default;
};
class ListWorkFlowTemplatesResponseBodyWorkFlowTemplates : public Darabonba::Model {
public:
  shared_ptr<vector<ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate>> workFlowTemplate{};

  ListWorkFlowTemplatesResponseBodyWorkFlowTemplates() {}

  explicit ListWorkFlowTemplatesResponseBodyWorkFlowTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workFlowTemplate) {
      vector<boost::any> temp1;
      for(auto item1:*workFlowTemplate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WorkFlowTemplate"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkFlowTemplate") != m.end() && !m["WorkFlowTemplate"].empty()) {
      if (typeid(vector<boost::any>) == m["WorkFlowTemplate"].type()) {
        vector<ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WorkFlowTemplate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workFlowTemplate = make_shared<vector<ListWorkFlowTemplatesResponseBodyWorkFlowTemplatesWorkFlowTemplate>>(expect1);
      }
    }
  }


  virtual ~ListWorkFlowTemplatesResponseBodyWorkFlowTemplates() = default;
};
class ListWorkFlowTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};
  shared_ptr<ListWorkFlowTemplatesResponseBodyWorkFlowTemplates> workFlowTemplates{};

  ListWorkFlowTemplatesResponseBody() {}

  explicit ListWorkFlowTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (workFlowTemplates) {
      res["WorkFlowTemplates"] = workFlowTemplates ? boost::any(workFlowTemplates->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("WorkFlowTemplates") != m.end() && !m["WorkFlowTemplates"].empty()) {
      if (typeid(map<string, boost::any>) == m["WorkFlowTemplates"].type()) {
        ListWorkFlowTemplatesResponseBodyWorkFlowTemplates model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WorkFlowTemplates"]));
        workFlowTemplates = make_shared<ListWorkFlowTemplatesResponseBodyWorkFlowTemplates>(model1);
      }
    }
  }


  virtual ~ListWorkFlowTemplatesResponseBody() = default;
};
class ListWorkFlowTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListWorkFlowTemplatesResponseBody> body{};

  ListWorkFlowTemplatesResponse() {}

  explicit ListWorkFlowTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWorkFlowTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkFlowTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkFlowTemplatesResponse() = default;
};
class GetDataExportOrderDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> orderId{};

  GetDataExportOrderDetailRequest() {}

  explicit GetDataExportOrderDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~GetDataExportOrderDetailRequest() = default;
};
class GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo : public Darabonba::Model {
public:
  shared_ptr<long> preCheckId{};
  shared_ptr<string> jobStatus{};

  GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo() {}

  explicit GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (preCheckId) {
      res["PreCheckId"] = boost::any(*preCheckId);
    }
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PreCheckId") != m.end() && !m["PreCheckId"].empty()) {
      preCheckId = make_shared<long>(boost::any_cast<long>(m["PreCheckId"]));
    }
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["JobStatus"]));
    }
  }


  virtual ~GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo() = default;
};
class GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> database{};
  shared_ptr<string> classify{};
  shared_ptr<string> exeSQL{};
  shared_ptr<bool> logic{};
  shared_ptr<long> actualAffectRows{};
  shared_ptr<bool> ignoreAffectRows{};
  shared_ptr<string> ignoreAffectRowsReason{};
  shared_ptr<string> envType{};

  GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail() {}

  explicit GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (classify) {
      res["Classify"] = boost::any(*classify);
    }
    if (exeSQL) {
      res["ExeSQL"] = boost::any(*exeSQL);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (actualAffectRows) {
      res["ActualAffectRows"] = boost::any(*actualAffectRows);
    }
    if (ignoreAffectRows) {
      res["IgnoreAffectRows"] = boost::any(*ignoreAffectRows);
    }
    if (ignoreAffectRowsReason) {
      res["IgnoreAffectRowsReason"] = boost::any(*ignoreAffectRowsReason);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Classify") != m.end() && !m["Classify"].empty()) {
      classify = make_shared<string>(boost::any_cast<string>(m["Classify"]));
    }
    if (m.find("ExeSQL") != m.end() && !m["ExeSQL"].empty()) {
      exeSQL = make_shared<string>(boost::any_cast<string>(m["ExeSQL"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("ActualAffectRows") != m.end() && !m["ActualAffectRows"].empty()) {
      actualAffectRows = make_shared<long>(boost::any_cast<long>(m["ActualAffectRows"]));
    }
    if (m.find("IgnoreAffectRows") != m.end() && !m["IgnoreAffectRows"].empty()) {
      ignoreAffectRows = make_shared<bool>(boost::any_cast<bool>(m["IgnoreAffectRows"]));
    }
    if (m.find("IgnoreAffectRowsReason") != m.end() && !m["IgnoreAffectRowsReason"].empty()) {
      ignoreAffectRowsReason = make_shared<string>(boost::any_cast<string>(m["IgnoreAffectRowsReason"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
  }


  virtual ~GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail() = default;
};
class GetDataExportOrderDetailResponseBodyDataExportOrderDetail : public Darabonba::Model {
public:
  shared_ptr<GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo> keyInfo{};
  shared_ptr<GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail> orderDetail{};

  GetDataExportOrderDetailResponseBodyDataExportOrderDetail() {}

  explicit GetDataExportOrderDetailResponseBodyDataExportOrderDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyInfo) {
      res["KeyInfo"] = keyInfo ? boost::any(keyInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderDetail) {
      res["OrderDetail"] = orderDetail ? boost::any(orderDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyInfo") != m.end() && !m["KeyInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyInfo"].type()) {
        GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyInfo"]));
        keyInfo = make_shared<GetDataExportOrderDetailResponseBodyDataExportOrderDetailKeyInfo>(model1);
      }
    }
    if (m.find("OrderDetail") != m.end() && !m["OrderDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderDetail"].type()) {
        GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderDetail"]));
        orderDetail = make_shared<GetDataExportOrderDetailResponseBodyDataExportOrderDetailOrderDetail>(model1);
      }
    }
  }


  virtual ~GetDataExportOrderDetailResponseBodyDataExportOrderDetail() = default;
};
class GetDataExportOrderDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetDataExportOrderDetailResponseBodyDataExportOrderDetail> dataExportOrderDetail{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GetDataExportOrderDetailResponseBody() {}

  explicit GetDataExportOrderDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dataExportOrderDetail) {
      res["DataExportOrderDetail"] = dataExportOrderDetail ? boost::any(dataExportOrderDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("DataExportOrderDetail") != m.end() && !m["DataExportOrderDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataExportOrderDetail"].type()) {
        GetDataExportOrderDetailResponseBodyDataExportOrderDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataExportOrderDetail"]));
        dataExportOrderDetail = make_shared<GetDataExportOrderDetailResponseBodyDataExportOrderDetail>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetDataExportOrderDetailResponseBody() = default;
};
class GetDataExportOrderDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDataExportOrderDetailResponseBody> body{};

  GetDataExportOrderDetailResponse() {}

  explicit GetDataExportOrderDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataExportOrderDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataExportOrderDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataExportOrderDetailResponse() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> searchKey{};
  shared_ptr<string> dbType{};
  shared_ptr<string> envType{};
  shared_ptr<string> instanceSource{};
  shared_ptr<string> netType{};
  shared_ptr<string> instanceState{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (instanceSource) {
      res["InstanceSource"] = boost::any(*instanceSource);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (instanceState) {
      res["InstanceState"] = boost::any(*instanceState);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("InstanceSource") != m.end() && !m["InstanceSource"].empty()) {
      instanceSource = make_shared<string>(boost::any_cast<string>(m["InstanceSource"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("InstanceState") != m.end() && !m["InstanceState"].empty()) {
      instanceState = make_shared<string>(boost::any_cast<string>(m["InstanceState"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesResponseBodyInstanceListInstanceOwnerIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerIds{};

  ListInstancesResponseBodyInstanceListInstanceOwnerIdList() {}

  explicit ListInstancesResponseBodyInstanceListInstanceOwnerIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListInstancesResponseBodyInstanceListInstanceOwnerIdList() = default;
};
class ListInstancesResponseBodyInstanceListInstanceOwnerNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerNames{};

  ListInstancesResponseBodyInstanceListInstanceOwnerNameList() {}

  explicit ListInstancesResponseBodyInstanceListInstanceOwnerNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerNames) {
      res["OwnerNames"] = boost::any(*ownerNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerNames") != m.end() && !m["OwnerNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListInstancesResponseBodyInstanceListInstanceOwnerNameList() = default;
};
class ListInstancesResponseBodyInstanceListInstance : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> databaseUser{};
  shared_ptr<string> dbaId{};
  shared_ptr<long> useDsql{};
  shared_ptr<long> port{};
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<string> envType{};
  shared_ptr<string> sid{};
  shared_ptr<ListInstancesResponseBodyInstanceListInstanceOwnerIdList> ownerIdList{};
  shared_ptr<string> safeRuleId{};
  shared_ptr<ListInstancesResponseBodyInstanceListInstanceOwnerNameList> ownerNameList{};
  shared_ptr<string> dbaNickName{};
  shared_ptr<long> queryTimeout{};
  shared_ptr<string> instanceSource{};
  shared_ptr<string> host{};
  shared_ptr<string> state{};
  shared_ptr<string> dataLinkName{};
  shared_ptr<long> exportTimeout{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> databasePassword{};
  shared_ptr<string> instanceAlias{};
  shared_ptr<long> ddlOnline{};
  shared_ptr<string> ecsRegion{};

  ListInstancesResponseBodyInstanceListInstance() {}

  explicit ListInstancesResponseBodyInstanceListInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (databaseUser) {
      res["DatabaseUser"] = boost::any(*databaseUser);
    }
    if (dbaId) {
      res["DbaId"] = boost::any(*dbaId);
    }
    if (useDsql) {
      res["UseDsql"] = boost::any(*useDsql);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (ownerIdList) {
      res["OwnerIdList"] = ownerIdList ? boost::any(ownerIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (safeRuleId) {
      res["SafeRuleId"] = boost::any(*safeRuleId);
    }
    if (ownerNameList) {
      res["OwnerNameList"] = ownerNameList ? boost::any(ownerNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dbaNickName) {
      res["DbaNickName"] = boost::any(*dbaNickName);
    }
    if (queryTimeout) {
      res["QueryTimeout"] = boost::any(*queryTimeout);
    }
    if (instanceSource) {
      res["InstanceSource"] = boost::any(*instanceSource);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (dataLinkName) {
      res["DataLinkName"] = boost::any(*dataLinkName);
    }
    if (exportTimeout) {
      res["ExportTimeout"] = boost::any(*exportTimeout);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (databasePassword) {
      res["DatabasePassword"] = boost::any(*databasePassword);
    }
    if (instanceAlias) {
      res["InstanceAlias"] = boost::any(*instanceAlias);
    }
    if (ddlOnline) {
      res["DdlOnline"] = boost::any(*ddlOnline);
    }
    if (ecsRegion) {
      res["EcsRegion"] = boost::any(*ecsRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("DatabaseUser") != m.end() && !m["DatabaseUser"].empty()) {
      databaseUser = make_shared<string>(boost::any_cast<string>(m["DatabaseUser"]));
    }
    if (m.find("DbaId") != m.end() && !m["DbaId"].empty()) {
      dbaId = make_shared<string>(boost::any_cast<string>(m["DbaId"]));
    }
    if (m.find("UseDsql") != m.end() && !m["UseDsql"].empty()) {
      useDsql = make_shared<long>(boost::any_cast<long>(m["UseDsql"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("OwnerIdList") != m.end() && !m["OwnerIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerIdList"].type()) {
        ListInstancesResponseBodyInstanceListInstanceOwnerIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerIdList"]));
        ownerIdList = make_shared<ListInstancesResponseBodyInstanceListInstanceOwnerIdList>(model1);
      }
    }
    if (m.find("SafeRuleId") != m.end() && !m["SafeRuleId"].empty()) {
      safeRuleId = make_shared<string>(boost::any_cast<string>(m["SafeRuleId"]));
    }
    if (m.find("OwnerNameList") != m.end() && !m["OwnerNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerNameList"].type()) {
        ListInstancesResponseBodyInstanceListInstanceOwnerNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerNameList"]));
        ownerNameList = make_shared<ListInstancesResponseBodyInstanceListInstanceOwnerNameList>(model1);
      }
    }
    if (m.find("DbaNickName") != m.end() && !m["DbaNickName"].empty()) {
      dbaNickName = make_shared<string>(boost::any_cast<string>(m["DbaNickName"]));
    }
    if (m.find("QueryTimeout") != m.end() && !m["QueryTimeout"].empty()) {
      queryTimeout = make_shared<long>(boost::any_cast<long>(m["QueryTimeout"]));
    }
    if (m.find("InstanceSource") != m.end() && !m["InstanceSource"].empty()) {
      instanceSource = make_shared<string>(boost::any_cast<string>(m["InstanceSource"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("DataLinkName") != m.end() && !m["DataLinkName"].empty()) {
      dataLinkName = make_shared<string>(boost::any_cast<string>(m["DataLinkName"]));
    }
    if (m.find("ExportTimeout") != m.end() && !m["ExportTimeout"].empty()) {
      exportTimeout = make_shared<long>(boost::any_cast<long>(m["ExportTimeout"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("DatabasePassword") != m.end() && !m["DatabasePassword"].empty()) {
      databasePassword = make_shared<string>(boost::any_cast<string>(m["DatabasePassword"]));
    }
    if (m.find("InstanceAlias") != m.end() && !m["InstanceAlias"].empty()) {
      instanceAlias = make_shared<string>(boost::any_cast<string>(m["InstanceAlias"]));
    }
    if (m.find("DdlOnline") != m.end() && !m["DdlOnline"].empty()) {
      ddlOnline = make_shared<long>(boost::any_cast<long>(m["DdlOnline"]));
    }
    if (m.find("EcsRegion") != m.end() && !m["EcsRegion"].empty()) {
      ecsRegion = make_shared<string>(boost::any_cast<string>(m["EcsRegion"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstanceListInstance() = default;
};
class ListInstancesResponseBodyInstanceList : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstancesResponseBodyInstanceListInstance>> instance{};

  ListInstancesResponseBodyInstanceList() {}

  explicit ListInstancesResponseBodyInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<ListInstancesResponseBodyInstanceListInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstanceListInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<ListInstancesResponseBodyInstanceListInstance>>(expect1);
      }
    }
  }


  virtual ~ListInstancesResponseBodyInstanceList() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<ListInstancesResponseBodyInstanceList> instanceList{};
  shared_ptr<bool> success{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (instanceList) {
      res["InstanceList"] = instanceList ? boost::any(instanceList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceList"].type()) {
        ListInstancesResponseBodyInstanceList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceList"]));
        instanceList = make_shared<ListInstancesResponseBodyInstanceList>(model1);
      }
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
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class GetUserUploadFileJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobKey{};
  shared_ptr<long> tid{};

  GetUserUploadFileJobRequest() {}

  explicit GetUserUploadFileJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobKey) {
      res["JobKey"] = boost::any(*jobKey);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobKey") != m.end() && !m["JobKey"].empty()) {
      jobKey = make_shared<string>(boost::any_cast<string>(m["JobKey"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~GetUserUploadFileJobRequest() = default;
};
class GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> objectName{};

  GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam() {}

  explicit GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (objectName) {
      res["ObjectName"] = boost::any(*objectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("ObjectName") != m.end() && !m["ObjectName"].empty()) {
      objectName = make_shared<string>(boost::any_cast<string>(m["ObjectName"]));
    }
  }


  virtual ~GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam() = default;
};
class GetUserUploadFileJobResponseBodyUploadFileJobDetail : public Darabonba::Model {
public:
  shared_ptr<string> jobKey{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> fileSource{};
  shared_ptr<string> uploadType{};
  shared_ptr<string> uploadURL{};
  shared_ptr<GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam> uploadOSSParam{};
  shared_ptr<long> uploadedSize{};
  shared_ptr<string> jobStatus{};
  shared_ptr<string> jobStatusDesc{};
  shared_ptr<string> attachmentKey{};

  GetUserUploadFileJobResponseBodyUploadFileJobDetail() {}

  explicit GetUserUploadFileJobResponseBodyUploadFileJobDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobKey) {
      res["JobKey"] = boost::any(*jobKey);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileSource) {
      res["FileSource"] = boost::any(*fileSource);
    }
    if (uploadType) {
      res["UploadType"] = boost::any(*uploadType);
    }
    if (uploadURL) {
      res["UploadURL"] = boost::any(*uploadURL);
    }
    if (uploadOSSParam) {
      res["UploadOSSParam"] = uploadOSSParam ? boost::any(uploadOSSParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (uploadedSize) {
      res["UploadedSize"] = boost::any(*uploadedSize);
    }
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    if (jobStatusDesc) {
      res["JobStatusDesc"] = boost::any(*jobStatusDesc);
    }
    if (attachmentKey) {
      res["AttachmentKey"] = boost::any(*attachmentKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobKey") != m.end() && !m["JobKey"].empty()) {
      jobKey = make_shared<string>(boost::any_cast<string>(m["JobKey"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("FileSource") != m.end() && !m["FileSource"].empty()) {
      fileSource = make_shared<string>(boost::any_cast<string>(m["FileSource"]));
    }
    if (m.find("UploadType") != m.end() && !m["UploadType"].empty()) {
      uploadType = make_shared<string>(boost::any_cast<string>(m["UploadType"]));
    }
    if (m.find("UploadURL") != m.end() && !m["UploadURL"].empty()) {
      uploadURL = make_shared<string>(boost::any_cast<string>(m["UploadURL"]));
    }
    if (m.find("UploadOSSParam") != m.end() && !m["UploadOSSParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["UploadOSSParam"].type()) {
        GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UploadOSSParam"]));
        uploadOSSParam = make_shared<GetUserUploadFileJobResponseBodyUploadFileJobDetailUploadOSSParam>(model1);
      }
    }
    if (m.find("UploadedSize") != m.end() && !m["UploadedSize"].empty()) {
      uploadedSize = make_shared<long>(boost::any_cast<long>(m["UploadedSize"]));
    }
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["JobStatus"]));
    }
    if (m.find("JobStatusDesc") != m.end() && !m["JobStatusDesc"].empty()) {
      jobStatusDesc = make_shared<string>(boost::any_cast<string>(m["JobStatusDesc"]));
    }
    if (m.find("AttachmentKey") != m.end() && !m["AttachmentKey"].empty()) {
      attachmentKey = make_shared<string>(boost::any_cast<string>(m["AttachmentKey"]));
    }
  }


  virtual ~GetUserUploadFileJobResponseBodyUploadFileJobDetail() = default;
};
class GetUserUploadFileJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetUserUploadFileJobResponseBodyUploadFileJobDetail> uploadFileJobDetail{};

  GetUserUploadFileJobResponseBody() {}

  explicit GetUserUploadFileJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (uploadFileJobDetail) {
      res["UploadFileJobDetail"] = uploadFileJobDetail ? boost::any(uploadFileJobDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("UploadFileJobDetail") != m.end() && !m["UploadFileJobDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["UploadFileJobDetail"].type()) {
        GetUserUploadFileJobResponseBodyUploadFileJobDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UploadFileJobDetail"]));
        uploadFileJobDetail = make_shared<GetUserUploadFileJobResponseBodyUploadFileJobDetail>(model1);
      }
    }
  }


  virtual ~GetUserUploadFileJobResponseBody() = default;
};
class GetUserUploadFileJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserUploadFileJobResponseBody> body{};

  GetUserUploadFileJobResponse() {}

  explicit GetUserUploadFileJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserUploadFileJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserUploadFileJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserUploadFileJobResponse() = default;
};
class ListDDLPublishRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<long> tid{};

  ListDDLPublishRecordsRequest() {}

  explicit ListDDLPublishRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~ListDDLPublishRecordsRequest() = default;
};
class ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList : public Darabonba::Model {
public:
  shared_ptr<long> executeCount{};
  shared_ptr<string> scripts{};
  shared_ptr<string> tableName{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> taskJobStatus{};
  shared_ptr<long> DBTaskGroupId{};

  ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList() {}

  explicit ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executeCount) {
      res["ExecuteCount"] = boost::any(*executeCount);
    }
    if (scripts) {
      res["Scripts"] = boost::any(*scripts);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (statusDesc) {
      res["StatusDesc"] = boost::any(*statusDesc);
    }
    if (taskJobStatus) {
      res["TaskJobStatus"] = boost::any(*taskJobStatus);
    }
    if (DBTaskGroupId) {
      res["DBTaskGroupId"] = boost::any(*DBTaskGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecuteCount") != m.end() && !m["ExecuteCount"].empty()) {
      executeCount = make_shared<long>(boost::any_cast<long>(m["ExecuteCount"]));
    }
    if (m.find("Scripts") != m.end() && !m["Scripts"].empty()) {
      scripts = make_shared<string>(boost::any_cast<string>(m["Scripts"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("StatusDesc") != m.end() && !m["StatusDesc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["StatusDesc"]));
    }
    if (m.find("TaskJobStatus") != m.end() && !m["TaskJobStatus"].empty()) {
      taskJobStatus = make_shared<string>(boost::any_cast<string>(m["TaskJobStatus"]));
    }
    if (m.find("DBTaskGroupId") != m.end() && !m["DBTaskGroupId"].empty()) {
      DBTaskGroupId = make_shared<long>(boost::any_cast<long>(m["DBTaskGroupId"]));
    }
  }


  virtual ~ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList() = default;
};
class ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<bool> logic{};
  shared_ptr<string> planTime{};
  shared_ptr<string> publishStrategy{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> taskJobStatus{};
  shared_ptr<vector<ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList>> publishJobList{};

  ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList() {}

  explicit ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (planTime) {
      res["PlanTime"] = boost::any(*planTime);
    }
    if (publishStrategy) {
      res["PublishStrategy"] = boost::any(*publishStrategy);
    }
    if (statusDesc) {
      res["StatusDesc"] = boost::any(*statusDesc);
    }
    if (taskJobStatus) {
      res["TaskJobStatus"] = boost::any(*taskJobStatus);
    }
    if (publishJobList) {
      vector<boost::any> temp1;
      for(auto item1:*publishJobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PublishJobList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("PlanTime") != m.end() && !m["PlanTime"].empty()) {
      planTime = make_shared<string>(boost::any_cast<string>(m["PlanTime"]));
    }
    if (m.find("PublishStrategy") != m.end() && !m["PublishStrategy"].empty()) {
      publishStrategy = make_shared<string>(boost::any_cast<string>(m["PublishStrategy"]));
    }
    if (m.find("StatusDesc") != m.end() && !m["StatusDesc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["StatusDesc"]));
    }
    if (m.find("TaskJobStatus") != m.end() && !m["TaskJobStatus"].empty()) {
      taskJobStatus = make_shared<string>(boost::any_cast<string>(m["TaskJobStatus"]));
    }
    if (m.find("PublishJobList") != m.end() && !m["PublishJobList"].empty()) {
      if (typeid(vector<boost::any>) == m["PublishJobList"].type()) {
        vector<ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PublishJobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        publishJobList = make_shared<vector<ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoListPublishJobList>>(expect1);
      }
    }
  }


  virtual ~ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList() = default;
};
class ListDDLPublishRecordsResponseBodyDDLPublishRecordList : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> auditExpireTime{};
  shared_ptr<long> creatorId{};
  shared_ptr<bool> finality{};
  shared_ptr<string> finalityReason{};
  shared_ptr<string> publishStatus{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> statusDesc{};
  shared_ptr<long> workflowInstanceId{};
  shared_ptr<vector<ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList>> publishTaskInfoList{};

  ListDDLPublishRecordsResponseBodyDDLPublishRecordList() {}

  explicit ListDDLPublishRecordsResponseBodyDDLPublishRecordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (auditExpireTime) {
      res["AuditExpireTime"] = boost::any(*auditExpireTime);
    }
    if (creatorId) {
      res["CreatorId"] = boost::any(*creatorId);
    }
    if (finality) {
      res["Finality"] = boost::any(*finality);
    }
    if (finalityReason) {
      res["FinalityReason"] = boost::any(*finalityReason);
    }
    if (publishStatus) {
      res["PublishStatus"] = boost::any(*publishStatus);
    }
    if (riskLevel) {
      res["RiskLevel"] = boost::any(*riskLevel);
    }
    if (statusDesc) {
      res["StatusDesc"] = boost::any(*statusDesc);
    }
    if (workflowInstanceId) {
      res["WorkflowInstanceId"] = boost::any(*workflowInstanceId);
    }
    if (publishTaskInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*publishTaskInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PublishTaskInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("AuditExpireTime") != m.end() && !m["AuditExpireTime"].empty()) {
      auditExpireTime = make_shared<string>(boost::any_cast<string>(m["AuditExpireTime"]));
    }
    if (m.find("CreatorId") != m.end() && !m["CreatorId"].empty()) {
      creatorId = make_shared<long>(boost::any_cast<long>(m["CreatorId"]));
    }
    if (m.find("Finality") != m.end() && !m["Finality"].empty()) {
      finality = make_shared<bool>(boost::any_cast<bool>(m["Finality"]));
    }
    if (m.find("FinalityReason") != m.end() && !m["FinalityReason"].empty()) {
      finalityReason = make_shared<string>(boost::any_cast<string>(m["FinalityReason"]));
    }
    if (m.find("PublishStatus") != m.end() && !m["PublishStatus"].empty()) {
      publishStatus = make_shared<string>(boost::any_cast<string>(m["PublishStatus"]));
    }
    if (m.find("RiskLevel") != m.end() && !m["RiskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["RiskLevel"]));
    }
    if (m.find("StatusDesc") != m.end() && !m["StatusDesc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["StatusDesc"]));
    }
    if (m.find("WorkflowInstanceId") != m.end() && !m["WorkflowInstanceId"].empty()) {
      workflowInstanceId = make_shared<long>(boost::any_cast<long>(m["WorkflowInstanceId"]));
    }
    if (m.find("PublishTaskInfoList") != m.end() && !m["PublishTaskInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["PublishTaskInfoList"].type()) {
        vector<ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PublishTaskInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        publishTaskInfoList = make_shared<vector<ListDDLPublishRecordsResponseBodyDDLPublishRecordListPublishTaskInfoList>>(expect1);
      }
    }
  }


  virtual ~ListDDLPublishRecordsResponseBodyDDLPublishRecordList() = default;
};
class ListDDLPublishRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListDDLPublishRecordsResponseBodyDDLPublishRecordList>> DDLPublishRecordList{};

  ListDDLPublishRecordsResponseBody() {}

  explicit ListDDLPublishRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (DDLPublishRecordList) {
      vector<boost::any> temp1;
      for(auto item1:*DDLPublishRecordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DDLPublishRecordList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DDLPublishRecordList") != m.end() && !m["DDLPublishRecordList"].empty()) {
      if (typeid(vector<boost::any>) == m["DDLPublishRecordList"].type()) {
        vector<ListDDLPublishRecordsResponseBodyDDLPublishRecordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DDLPublishRecordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDDLPublishRecordsResponseBodyDDLPublishRecordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DDLPublishRecordList = make_shared<vector<ListDDLPublishRecordsResponseBodyDDLPublishRecordList>>(expect1);
      }
    }
  }


  virtual ~ListDDLPublishRecordsResponseBody() = default;
};
class ListDDLPublishRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDDLPublishRecordsResponseBody> body{};

  ListDDLPublishRecordsResponse() {}

  explicit ListDDLPublishRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDDLPublishRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDDLPublishRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDDLPublishRecordsResponse() = default;
};
class GetStructSyncJobDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<long> tid{};

  GetStructSyncJobDetailRequest() {}

  explicit GetStructSyncJobDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~GetStructSyncJobDetailRequest() = default;
};
class GetStructSyncJobDetailResponseBodyStructSyncJobDetail : public Darabonba::Model {
public:
  shared_ptr<string> jobStatus{};
  shared_ptr<string> message{};
  shared_ptr<long> tableAnalyzed{};
  shared_ptr<long> tableCount{};
  shared_ptr<long> sqlCount{};
  shared_ptr<long> executeCount{};
  shared_ptr<string> securityRule{};
  shared_ptr<long> DBTaskGroupId{};

  GetStructSyncJobDetailResponseBodyStructSyncJobDetail() {}

  explicit GetStructSyncJobDetailResponseBodyStructSyncJobDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (tableAnalyzed) {
      res["TableAnalyzed"] = boost::any(*tableAnalyzed);
    }
    if (tableCount) {
      res["TableCount"] = boost::any(*tableCount);
    }
    if (sqlCount) {
      res["SqlCount"] = boost::any(*sqlCount);
    }
    if (executeCount) {
      res["ExecuteCount"] = boost::any(*executeCount);
    }
    if (securityRule) {
      res["SecurityRule"] = boost::any(*securityRule);
    }
    if (DBTaskGroupId) {
      res["DBTaskGroupId"] = boost::any(*DBTaskGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["JobStatus"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TableAnalyzed") != m.end() && !m["TableAnalyzed"].empty()) {
      tableAnalyzed = make_shared<long>(boost::any_cast<long>(m["TableAnalyzed"]));
    }
    if (m.find("TableCount") != m.end() && !m["TableCount"].empty()) {
      tableCount = make_shared<long>(boost::any_cast<long>(m["TableCount"]));
    }
    if (m.find("SqlCount") != m.end() && !m["SqlCount"].empty()) {
      sqlCount = make_shared<long>(boost::any_cast<long>(m["SqlCount"]));
    }
    if (m.find("ExecuteCount") != m.end() && !m["ExecuteCount"].empty()) {
      executeCount = make_shared<long>(boost::any_cast<long>(m["ExecuteCount"]));
    }
    if (m.find("SecurityRule") != m.end() && !m["SecurityRule"].empty()) {
      securityRule = make_shared<string>(boost::any_cast<string>(m["SecurityRule"]));
    }
    if (m.find("DBTaskGroupId") != m.end() && !m["DBTaskGroupId"].empty()) {
      DBTaskGroupId = make_shared<long>(boost::any_cast<long>(m["DBTaskGroupId"]));
    }
  }


  virtual ~GetStructSyncJobDetailResponseBodyStructSyncJobDetail() = default;
};
class GetStructSyncJobDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetStructSyncJobDetailResponseBodyStructSyncJobDetail> structSyncJobDetail{};

  GetStructSyncJobDetailResponseBody() {}

  explicit GetStructSyncJobDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (structSyncJobDetail) {
      res["StructSyncJobDetail"] = structSyncJobDetail ? boost::any(structSyncJobDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("StructSyncJobDetail") != m.end() && !m["StructSyncJobDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["StructSyncJobDetail"].type()) {
        GetStructSyncJobDetailResponseBodyStructSyncJobDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StructSyncJobDetail"]));
        structSyncJobDetail = make_shared<GetStructSyncJobDetailResponseBodyStructSyncJobDetail>(model1);
      }
    }
  }


  virtual ~GetStructSyncJobDetailResponseBody() = default;
};
class GetStructSyncJobDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetStructSyncJobDetailResponseBody> body{};

  GetStructSyncJobDetailResponse() {}

  explicit GetStructSyncJobDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStructSyncJobDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStructSyncJobDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetStructSyncJobDetailResponse() = default;
};
class CreateUploadOSSFileJobRequestUploadTarget : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> objectName{};

  CreateUploadOSSFileJobRequestUploadTarget() {}

  explicit CreateUploadOSSFileJobRequestUploadTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (objectName) {
      res["ObjectName"] = boost::any(*objectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("ObjectName") != m.end() && !m["ObjectName"].empty()) {
      objectName = make_shared<string>(boost::any_cast<string>(m["ObjectName"]));
    }
  }


  virtual ~CreateUploadOSSFileJobRequestUploadTarget() = default;
};
class CreateUploadOSSFileJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSource{};
  shared_ptr<string> fileName{};
  shared_ptr<CreateUploadOSSFileJobRequestUploadTarget> uploadTarget{};
  shared_ptr<long> tid{};

  CreateUploadOSSFileJobRequest() {}

  explicit CreateUploadOSSFileJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSource) {
      res["FileSource"] = boost::any(*fileSource);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (uploadTarget) {
      res["UploadTarget"] = uploadTarget ? boost::any(uploadTarget->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSource") != m.end() && !m["FileSource"].empty()) {
      fileSource = make_shared<string>(boost::any_cast<string>(m["FileSource"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("UploadTarget") != m.end() && !m["UploadTarget"].empty()) {
      if (typeid(map<string, boost::any>) == m["UploadTarget"].type()) {
        CreateUploadOSSFileJobRequestUploadTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UploadTarget"]));
        uploadTarget = make_shared<CreateUploadOSSFileJobRequestUploadTarget>(model1);
      }
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~CreateUploadOSSFileJobRequest() = default;
};
class CreateUploadOSSFileJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSource{};
  shared_ptr<string> fileName{};
  shared_ptr<string> uploadTargetShrink{};
  shared_ptr<long> tid{};

  CreateUploadOSSFileJobShrinkRequest() {}

  explicit CreateUploadOSSFileJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSource) {
      res["FileSource"] = boost::any(*fileSource);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (uploadTargetShrink) {
      res["UploadTarget"] = boost::any(*uploadTargetShrink);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSource") != m.end() && !m["FileSource"].empty()) {
      fileSource = make_shared<string>(boost::any_cast<string>(m["FileSource"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("UploadTarget") != m.end() && !m["UploadTarget"].empty()) {
      uploadTargetShrink = make_shared<string>(boost::any_cast<string>(m["UploadTarget"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~CreateUploadOSSFileJobShrinkRequest() = default;
};
class CreateUploadOSSFileJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> jobKey{};

  CreateUploadOSSFileJobResponseBody() {}

  explicit CreateUploadOSSFileJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (jobKey) {
      res["JobKey"] = boost::any(*jobKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("JobKey") != m.end() && !m["JobKey"].empty()) {
      jobKey = make_shared<string>(boost::any_cast<string>(m["JobKey"]));
    }
  }


  virtual ~CreateUploadOSSFileJobResponseBody() = default;
};
class CreateUploadOSSFileJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateUploadOSSFileJobResponseBody> body{};

  CreateUploadOSSFileJobResponse() {}

  explicit CreateUploadOSSFileJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUploadOSSFileJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUploadOSSFileJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUploadOSSFileJobResponse() = default;
};
class SearchDatabaseRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> searchKey{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> envType{};
  shared_ptr<string> searchRange{};
  shared_ptr<string> searchTarget{};
  shared_ptr<string> dbType{};

  SearchDatabaseRequest() {}

  explicit SearchDatabaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (searchRange) {
      res["SearchRange"] = boost::any(*searchRange);
    }
    if (searchTarget) {
      res["SearchTarget"] = boost::any(*searchTarget);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("SearchRange") != m.end() && !m["SearchRange"].empty()) {
      searchRange = make_shared<string>(boost::any_cast<string>(m["SearchRange"]));
    }
    if (m.find("SearchTarget") != m.end() && !m["SearchTarget"].empty()) {
      searchTarget = make_shared<string>(boost::any_cast<string>(m["SearchTarget"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
  }


  virtual ~SearchDatabaseRequest() = default;
};
class SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerIds{};

  SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList() {}

  explicit SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList() = default;
};
class SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerNames{};

  SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList() {}

  explicit SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerNames) {
      res["OwnerNames"] = boost::any(*ownerNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerNames") != m.end() && !m["OwnerNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList() = default;
};
class SearchDatabaseResponseBodySearchDatabaseListSearchDatabase : public Darabonba::Model {
public:
  shared_ptr<string> databaseId{};
  shared_ptr<string> host{};
  shared_ptr<string> dbaId{};
  shared_ptr<string> schemaName{};
  shared_ptr<bool> logic{};
  shared_ptr<string> datalinkName{};
  shared_ptr<long> port{};
  shared_ptr<string> envType{};
  shared_ptr<string> sid{};
  shared_ptr<SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList> ownerIdList{};
  shared_ptr<string> encoding{};
  shared_ptr<string> dbType{};
  shared_ptr<SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList> ownerNameList{};
  shared_ptr<string> searchName{};
  shared_ptr<string> alias{};

  SearchDatabaseResponseBodySearchDatabaseListSearchDatabase() {}

  explicit SearchDatabaseResponseBodySearchDatabaseListSearchDatabase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseId) {
      res["DatabaseId"] = boost::any(*databaseId);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (dbaId) {
      res["DbaId"] = boost::any(*dbaId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (datalinkName) {
      res["DatalinkName"] = boost::any(*datalinkName);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (ownerIdList) {
      res["OwnerIdList"] = ownerIdList ? boost::any(ownerIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (encoding) {
      res["Encoding"] = boost::any(*encoding);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (ownerNameList) {
      res["OwnerNameList"] = ownerNameList ? boost::any(ownerNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseId") != m.end() && !m["DatabaseId"].empty()) {
      databaseId = make_shared<string>(boost::any_cast<string>(m["DatabaseId"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("DbaId") != m.end() && !m["DbaId"].empty()) {
      dbaId = make_shared<string>(boost::any_cast<string>(m["DbaId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("DatalinkName") != m.end() && !m["DatalinkName"].empty()) {
      datalinkName = make_shared<string>(boost::any_cast<string>(m["DatalinkName"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("OwnerIdList") != m.end() && !m["OwnerIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerIdList"].type()) {
        SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerIdList"]));
        ownerIdList = make_shared<SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList>(model1);
      }
    }
    if (m.find("Encoding") != m.end() && !m["Encoding"].empty()) {
      encoding = make_shared<string>(boost::any_cast<string>(m["Encoding"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("OwnerNameList") != m.end() && !m["OwnerNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerNameList"].type()) {
        SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerNameList"]));
        ownerNameList = make_shared<SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList>(model1);
      }
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
  }


  virtual ~SearchDatabaseResponseBodySearchDatabaseListSearchDatabase() = default;
};
class SearchDatabaseResponseBodySearchDatabaseList : public Darabonba::Model {
public:
  shared_ptr<vector<SearchDatabaseResponseBodySearchDatabaseListSearchDatabase>> searchDatabase{};

  SearchDatabaseResponseBodySearchDatabaseList() {}

  explicit SearchDatabaseResponseBodySearchDatabaseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (searchDatabase) {
      vector<boost::any> temp1;
      for(auto item1:*searchDatabase){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SearchDatabase"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SearchDatabase") != m.end() && !m["SearchDatabase"].empty()) {
      if (typeid(vector<boost::any>) == m["SearchDatabase"].type()) {
        vector<SearchDatabaseResponseBodySearchDatabaseListSearchDatabase> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SearchDatabase"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchDatabaseResponseBodySearchDatabaseListSearchDatabase model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        searchDatabase = make_shared<vector<SearchDatabaseResponseBodySearchDatabaseListSearchDatabase>>(expect1);
      }
    }
  }


  virtual ~SearchDatabaseResponseBodySearchDatabaseList() = default;
};
class SearchDatabaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<SearchDatabaseResponseBodySearchDatabaseList> searchDatabaseList{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  SearchDatabaseResponseBody() {}

  explicit SearchDatabaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (searchDatabaseList) {
      res["SearchDatabaseList"] = searchDatabaseList ? boost::any(searchDatabaseList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SearchDatabaseList") != m.end() && !m["SearchDatabaseList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SearchDatabaseList"].type()) {
        SearchDatabaseResponseBodySearchDatabaseList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SearchDatabaseList"]));
        searchDatabaseList = make_shared<SearchDatabaseResponseBodySearchDatabaseList>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SearchDatabaseResponseBody() = default;
};
class SearchDatabaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SearchDatabaseResponseBody> body{};

  SearchDatabaseResponse() {}

  explicit SearchDatabaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchDatabaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchDatabaseResponseBody>(model1);
      }
    }
  }


  virtual ~SearchDatabaseResponse() = default;
};
class GetDBTopologyRequest : public Darabonba::Model {
public:
  shared_ptr<long> logicDbId{};
  shared_ptr<long> tid{};

  GetDBTopologyRequest() {}

  explicit GetDBTopologyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicDbId) {
      res["LogicDbId"] = boost::any(*logicDbId);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicDbId") != m.end() && !m["LogicDbId"].empty()) {
      logicDbId = make_shared<long>(boost::any_cast<long>(m["LogicDbId"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~GetDBTopologyRequest() = default;
};
class GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> catalogName{};
  shared_ptr<string> searchName{};
  shared_ptr<string> dbType{};
  shared_ptr<string> envType{};
  shared_ptr<long> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceResourceId{};
  shared_ptr<string> instanceSource{};

  GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList() {}

  explicit GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (catalogName) {
      res["CatalogName"] = boost::any(*catalogName);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceResourceId) {
      res["InstanceResourceId"] = boost::any(*instanceResourceId);
    }
    if (instanceSource) {
      res["InstanceSource"] = boost::any(*instanceSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("CatalogName") != m.end() && !m["CatalogName"].empty()) {
      catalogName = make_shared<string>(boost::any_cast<string>(m["CatalogName"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceResourceId") != m.end() && !m["InstanceResourceId"].empty()) {
      instanceResourceId = make_shared<string>(boost::any_cast<string>(m["InstanceResourceId"]));
    }
    if (m.find("InstanceSource") != m.end() && !m["InstanceSource"].empty()) {
      instanceSource = make_shared<string>(boost::any_cast<string>(m["InstanceSource"]));
    }
  }


  virtual ~GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList() = default;
};
class GetDBTopologyResponseBodyDBTopology : public Darabonba::Model {
public:
  shared_ptr<long> logicDbId{};
  shared_ptr<string> logicDbName{};
  shared_ptr<string> searchName{};
  shared_ptr<string> alias{};
  shared_ptr<string> dbType{};
  shared_ptr<string> envType{};
  shared_ptr<vector<GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList>> DBTopologyInfoList{};

  GetDBTopologyResponseBodyDBTopology() {}

  explicit GetDBTopologyResponseBodyDBTopology(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicDbId) {
      res["LogicDbId"] = boost::any(*logicDbId);
    }
    if (logicDbName) {
      res["LogicDbName"] = boost::any(*logicDbName);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (DBTopologyInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*DBTopologyInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBTopologyInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicDbId") != m.end() && !m["LogicDbId"].empty()) {
      logicDbId = make_shared<long>(boost::any_cast<long>(m["LogicDbId"]));
    }
    if (m.find("LogicDbName") != m.end() && !m["LogicDbName"].empty()) {
      logicDbName = make_shared<string>(boost::any_cast<string>(m["LogicDbName"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("DBTopologyInfoList") != m.end() && !m["DBTopologyInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["DBTopologyInfoList"].type()) {
        vector<GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBTopologyInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBTopologyInfoList = make_shared<vector<GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList>>(expect1);
      }
    }
  }


  virtual ~GetDBTopologyResponseBodyDBTopology() = default;
};
class GetDBTopologyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetDBTopologyResponseBodyDBTopology> DBTopology{};

  GetDBTopologyResponseBody() {}

  explicit GetDBTopologyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (DBTopology) {
      res["DBTopology"] = DBTopology ? boost::any(DBTopology->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DBTopology") != m.end() && !m["DBTopology"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBTopology"].type()) {
        GetDBTopologyResponseBodyDBTopology model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBTopology"]));
        DBTopology = make_shared<GetDBTopologyResponseBodyDBTopology>(model1);
      }
    }
  }


  virtual ~GetDBTopologyResponseBody() = default;
};
class GetDBTopologyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDBTopologyResponseBody> body{};

  GetDBTopologyResponse() {}

  explicit GetDBTopologyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDBTopologyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDBTopologyResponseBody>(model1);
      }
    }
  }


  virtual ~GetDBTopologyResponse() = default;
};
class SyncDatabaseMetaRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> dbId{};
  shared_ptr<bool> logic{};

  SyncDatabaseMetaRequest() {}

  explicit SyncDatabaseMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<string>(boost::any_cast<string>(m["DbId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
  }


  virtual ~SyncDatabaseMetaRequest() = default;
};
class SyncDatabaseMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  SyncDatabaseMetaResponseBody() {}

  explicit SyncDatabaseMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SyncDatabaseMetaResponseBody() = default;
};
class SyncDatabaseMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SyncDatabaseMetaResponseBody> body{};

  SyncDatabaseMetaResponse() {}

  explicit SyncDatabaseMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncDatabaseMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncDatabaseMetaResponseBody>(model1);
      }
    }
  }


  virtual ~SyncDatabaseMetaResponse() = default;
};
class GetUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> uid{};
  shared_ptr<string> userId{};

  GetUserRequest() {}

  explicit GetUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetUserRequest() = default;
};
class GetUserResponseBodyUserRoleIdList : public Darabonba::Model {
public:
  shared_ptr<vector<long>> roleIds{};

  GetUserResponseBodyUserRoleIdList() {}

  explicit GetUserResponseBodyUserRoleIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleIds) {
      res["RoleIds"] = boost::any(*roleIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleIds") != m.end() && !m["RoleIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RoleIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      roleIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~GetUserResponseBodyUserRoleIdList() = default;
};
class GetUserResponseBodyUserRoleNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> roleNames{};

  GetUserResponseBodyUserRoleNameList() {}

  explicit GetUserResponseBodyUserRoleNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleNames) {
      res["RoleNames"] = boost::any(*roleNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleNames") != m.end() && !m["RoleNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RoleNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RoleNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roleNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetUserResponseBodyUserRoleNameList() = default;
};
class GetUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> state{};
  shared_ptr<long> curResultCount{};
  shared_ptr<string> userId{};
  shared_ptr<string> lastLoginTime{};
  shared_ptr<long> maxResultCount{};
  shared_ptr<long> parentUid{};
  shared_ptr<GetUserResponseBodyUserRoleIdList> roleIdList{};
  shared_ptr<GetUserResponseBodyUserRoleNameList> roleNameList{};
  shared_ptr<string> nickName{};
  shared_ptr<long> maxExecuteCount{};
  shared_ptr<long> curExecuteCount{};
  shared_ptr<string> mobile{};
  shared_ptr<string> uid{};

  GetUserResponseBodyUser() {}

  explicit GetUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (curResultCount) {
      res["CurResultCount"] = boost::any(*curResultCount);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (lastLoginTime) {
      res["LastLoginTime"] = boost::any(*lastLoginTime);
    }
    if (maxResultCount) {
      res["MaxResultCount"] = boost::any(*maxResultCount);
    }
    if (parentUid) {
      res["ParentUid"] = boost::any(*parentUid);
    }
    if (roleIdList) {
      res["RoleIdList"] = roleIdList ? boost::any(roleIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roleNameList) {
      res["RoleNameList"] = roleNameList ? boost::any(roleNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (maxExecuteCount) {
      res["MaxExecuteCount"] = boost::any(*maxExecuteCount);
    }
    if (curExecuteCount) {
      res["CurExecuteCount"] = boost::any(*curExecuteCount);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("CurResultCount") != m.end() && !m["CurResultCount"].empty()) {
      curResultCount = make_shared<long>(boost::any_cast<long>(m["CurResultCount"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("LastLoginTime") != m.end() && !m["LastLoginTime"].empty()) {
      lastLoginTime = make_shared<string>(boost::any_cast<string>(m["LastLoginTime"]));
    }
    if (m.find("MaxResultCount") != m.end() && !m["MaxResultCount"].empty()) {
      maxResultCount = make_shared<long>(boost::any_cast<long>(m["MaxResultCount"]));
    }
    if (m.find("ParentUid") != m.end() && !m["ParentUid"].empty()) {
      parentUid = make_shared<long>(boost::any_cast<long>(m["ParentUid"]));
    }
    if (m.find("RoleIdList") != m.end() && !m["RoleIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleIdList"].type()) {
        GetUserResponseBodyUserRoleIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleIdList"]));
        roleIdList = make_shared<GetUserResponseBodyUserRoleIdList>(model1);
      }
    }
    if (m.find("RoleNameList") != m.end() && !m["RoleNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RoleNameList"].type()) {
        GetUserResponseBodyUserRoleNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RoleNameList"]));
        roleNameList = make_shared<GetUserResponseBodyUserRoleNameList>(model1);
      }
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("MaxExecuteCount") != m.end() && !m["MaxExecuteCount"].empty()) {
      maxExecuteCount = make_shared<long>(boost::any_cast<long>(m["MaxExecuteCount"]));
    }
    if (m.find("CurExecuteCount") != m.end() && !m["CurExecuteCount"].empty()) {
      curExecuteCount = make_shared<long>(boost::any_cast<long>(m["CurExecuteCount"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~GetUserResponseBodyUser() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetUserResponseBodyUser> user{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
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
class ExecuteStructSyncRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<long> tid{};

  ExecuteStructSyncRequest() {}

  explicit ExecuteStructSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~ExecuteStructSyncRequest() = default;
};
class ExecuteStructSyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};

  ExecuteStructSyncResponseBody() {}

  explicit ExecuteStructSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
  }


  virtual ~ExecuteStructSyncResponseBody() = default;
};
class ExecuteStructSyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteStructSyncResponseBody> body{};

  ExecuteStructSyncResponse() {}

  explicit ExecuteStructSyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteStructSyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteStructSyncResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteStructSyncResponse() = default;
};
class GetDataCorrectOrderDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> orderId{};

  GetDataCorrectOrderDetailRequest() {}

  explicit GetDataCorrectOrderDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~GetDataCorrectOrderDetailRequest() = default;
};
class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO : public Darabonba::Model {
public:
  shared_ptr<string> userTip{};
  shared_ptr<string> checkStatus{};
  shared_ptr<string> checkStep{};

  GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO() {}

  explicit GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userTip) {
      res["UserTip"] = boost::any(*userTip);
    }
    if (checkStatus) {
      res["CheckStatus"] = boost::any(*checkStatus);
    }
    if (checkStep) {
      res["CheckStep"] = boost::any(*checkStep);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserTip") != m.end() && !m["UserTip"].empty()) {
      userTip = make_shared<string>(boost::any_cast<string>(m["UserTip"]));
    }
    if (m.find("CheckStatus") != m.end() && !m["CheckStatus"].empty()) {
      checkStatus = make_shared<string>(boost::any_cast<string>(m["CheckStatus"]));
    }
    if (m.find("CheckStep") != m.end() && !m["CheckStep"].empty()) {
      checkStep = make_shared<string>(boost::any_cast<string>(m["CheckStep"]));
    }
  }


  virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO() = default;
};
class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail : public Darabonba::Model {
public:
  shared_ptr<vector<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO>> taskCheckDO{};

  GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail() {}

  explicit GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskCheckDO) {
      vector<boost::any> temp1;
      for(auto item1:*taskCheckDO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskCheckDO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskCheckDO") != m.end() && !m["TaskCheckDO"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskCheckDO"].type()) {
        vector<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskCheckDO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskCheckDO = make_shared<vector<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetailTaskCheckDO>>(expect1);
      }
    }
  }


  virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail() = default;
};
class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail : public Darabonba::Model {
public:
  shared_ptr<string> rbSQL{};
  shared_ptr<string> rbAttachmentName{};
  shared_ptr<string> classify{};
  shared_ptr<string> exeSQL{};
  shared_ptr<long> estimateAffectRows{};
  shared_ptr<string> rbSQLType{};
  shared_ptr<long> actualAffectRows{};
  shared_ptr<bool> ignoreAffectRows{};
  shared_ptr<string> attachmentName{};
  shared_ptr<string> sqlType{};
  shared_ptr<string> ignoreAffectRowsReason{};

  GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail() {}

  explicit GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rbSQL) {
      res["RbSQL"] = boost::any(*rbSQL);
    }
    if (rbAttachmentName) {
      res["RbAttachmentName"] = boost::any(*rbAttachmentName);
    }
    if (classify) {
      res["Classify"] = boost::any(*classify);
    }
    if (exeSQL) {
      res["ExeSQL"] = boost::any(*exeSQL);
    }
    if (estimateAffectRows) {
      res["EstimateAffectRows"] = boost::any(*estimateAffectRows);
    }
    if (rbSQLType) {
      res["RbSQLType"] = boost::any(*rbSQLType);
    }
    if (actualAffectRows) {
      res["ActualAffectRows"] = boost::any(*actualAffectRows);
    }
    if (ignoreAffectRows) {
      res["IgnoreAffectRows"] = boost::any(*ignoreAffectRows);
    }
    if (attachmentName) {
      res["AttachmentName"] = boost::any(*attachmentName);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    if (ignoreAffectRowsReason) {
      res["IgnoreAffectRowsReason"] = boost::any(*ignoreAffectRowsReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RbSQL") != m.end() && !m["RbSQL"].empty()) {
      rbSQL = make_shared<string>(boost::any_cast<string>(m["RbSQL"]));
    }
    if (m.find("RbAttachmentName") != m.end() && !m["RbAttachmentName"].empty()) {
      rbAttachmentName = make_shared<string>(boost::any_cast<string>(m["RbAttachmentName"]));
    }
    if (m.find("Classify") != m.end() && !m["Classify"].empty()) {
      classify = make_shared<string>(boost::any_cast<string>(m["Classify"]));
    }
    if (m.find("ExeSQL") != m.end() && !m["ExeSQL"].empty()) {
      exeSQL = make_shared<string>(boost::any_cast<string>(m["ExeSQL"]));
    }
    if (m.find("EstimateAffectRows") != m.end() && !m["EstimateAffectRows"].empty()) {
      estimateAffectRows = make_shared<long>(boost::any_cast<long>(m["EstimateAffectRows"]));
    }
    if (m.find("RbSQLType") != m.end() && !m["RbSQLType"].empty()) {
      rbSQLType = make_shared<string>(boost::any_cast<string>(m["RbSQLType"]));
    }
    if (m.find("ActualAffectRows") != m.end() && !m["ActualAffectRows"].empty()) {
      actualAffectRows = make_shared<long>(boost::any_cast<long>(m["ActualAffectRows"]));
    }
    if (m.find("IgnoreAffectRows") != m.end() && !m["IgnoreAffectRows"].empty()) {
      ignoreAffectRows = make_shared<bool>(boost::any_cast<bool>(m["IgnoreAffectRows"]));
    }
    if (m.find("AttachmentName") != m.end() && !m["AttachmentName"].empty()) {
      attachmentName = make_shared<string>(boost::any_cast<string>(m["AttachmentName"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["SqlType"]));
    }
    if (m.find("IgnoreAffectRowsReason") != m.end() && !m["IgnoreAffectRowsReason"].empty()) {
      ignoreAffectRowsReason = make_shared<string>(boost::any_cast<string>(m["IgnoreAffectRowsReason"]));
    }
  }


  virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail() = default;
};
class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> dbType{};
  shared_ptr<bool> logic{};
  shared_ptr<string> searchName{};
  shared_ptr<string> envType{};

  GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase() {}

  explicit GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
  }


  virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase() = default;
};
class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList : public Darabonba::Model {
public:
  shared_ptr<vector<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase>> database{};

  GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList() {}

  explicit GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      vector<boost::any> temp1;
      for(auto item1:*database){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Database"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      if (typeid(vector<boost::any>) == m["Database"].type()) {
        vector<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Database"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        database = make_shared<vector<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseListDatabase>>(expect1);
      }
    }
  }


  virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList() = default;
};
class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail : public Darabonba::Model {
public:
  shared_ptr<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail> preCheckDetail{};
  shared_ptr<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail> orderDetail{};
  shared_ptr<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList> databaseList{};
  shared_ptr<string> status{};

  GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail() {}

  explicit GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (preCheckDetail) {
      res["PreCheckDetail"] = preCheckDetail ? boost::any(preCheckDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderDetail) {
      res["OrderDetail"] = orderDetail ? boost::any(orderDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (databaseList) {
      res["DatabaseList"] = databaseList ? boost::any(databaseList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PreCheckDetail") != m.end() && !m["PreCheckDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["PreCheckDetail"].type()) {
        GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PreCheckDetail"]));
        preCheckDetail = make_shared<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail>(model1);
      }
    }
    if (m.find("OrderDetail") != m.end() && !m["OrderDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderDetail"].type()) {
        GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderDetail"]));
        orderDetail = make_shared<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail>(model1);
      }
    }
    if (m.find("DatabaseList") != m.end() && !m["DatabaseList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DatabaseList"].type()) {
        GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DatabaseList"]));
        databaseList = make_shared<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail() = default;
};
class GetDataCorrectOrderDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail> dataCorrectOrderDetail{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GetDataCorrectOrderDetailResponseBody() {}

  explicit GetDataCorrectOrderDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dataCorrectOrderDetail) {
      res["DataCorrectOrderDetail"] = dataCorrectOrderDetail ? boost::any(dataCorrectOrderDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("DataCorrectOrderDetail") != m.end() && !m["DataCorrectOrderDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataCorrectOrderDetail"].type()) {
        GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataCorrectOrderDetail"]));
        dataCorrectOrderDetail = make_shared<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetDataCorrectOrderDetailResponseBody() = default;
};
class GetDataCorrectOrderDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDataCorrectOrderDetailResponseBody> body{};

  GetDataCorrectOrderDetailResponse() {}

  explicit GetDataCorrectOrderDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataCorrectOrderDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataCorrectOrderDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataCorrectOrderDetailResponse() = default;
};
class ListColumnsRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> tableId{};
  shared_ptr<bool> logic{};

  ListColumnsRequest() {}

  explicit ListColumnsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<string>(boost::any_cast<string>(m["TableId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
  }


  virtual ~ListColumnsRequest() = default;
};
class ListColumnsResponseBodyColumnListColumn : public Darabonba::Model {
public:
  shared_ptr<string> columnType{};
  shared_ptr<bool> autoIncrement{};
  shared_ptr<string> columnId{};
  shared_ptr<string> defaultValue{};
  shared_ptr<bool> sensitive{};
  shared_ptr<string> columnName{};
  shared_ptr<string> securityLevel{};
  shared_ptr<string> description{};
  shared_ptr<long> dataPrecision{};
  shared_ptr<long> dataScale{};
  shared_ptr<string> functionType{};
  shared_ptr<bool> nullable{};
  shared_ptr<long> dataLength{};

  ListColumnsResponseBodyColumnListColumn() {}

  explicit ListColumnsResponseBodyColumnListColumn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnType) {
      res["ColumnType"] = boost::any(*columnType);
    }
    if (autoIncrement) {
      res["AutoIncrement"] = boost::any(*autoIncrement);
    }
    if (columnId) {
      res["ColumnId"] = boost::any(*columnId);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (sensitive) {
      res["Sensitive"] = boost::any(*sensitive);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dataPrecision) {
      res["DataPrecision"] = boost::any(*dataPrecision);
    }
    if (dataScale) {
      res["DataScale"] = boost::any(*dataScale);
    }
    if (functionType) {
      res["FunctionType"] = boost::any(*functionType);
    }
    if (nullable) {
      res["Nullable"] = boost::any(*nullable);
    }
    if (dataLength) {
      res["DataLength"] = boost::any(*dataLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColumnType") != m.end() && !m["ColumnType"].empty()) {
      columnType = make_shared<string>(boost::any_cast<string>(m["ColumnType"]));
    }
    if (m.find("AutoIncrement") != m.end() && !m["AutoIncrement"].empty()) {
      autoIncrement = make_shared<bool>(boost::any_cast<bool>(m["AutoIncrement"]));
    }
    if (m.find("ColumnId") != m.end() && !m["ColumnId"].empty()) {
      columnId = make_shared<string>(boost::any_cast<string>(m["ColumnId"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("Sensitive") != m.end() && !m["Sensitive"].empty()) {
      sensitive = make_shared<bool>(boost::any_cast<bool>(m["Sensitive"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<string>(boost::any_cast<string>(m["SecurityLevel"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DataPrecision") != m.end() && !m["DataPrecision"].empty()) {
      dataPrecision = make_shared<long>(boost::any_cast<long>(m["DataPrecision"]));
    }
    if (m.find("DataScale") != m.end() && !m["DataScale"].empty()) {
      dataScale = make_shared<long>(boost::any_cast<long>(m["DataScale"]));
    }
    if (m.find("FunctionType") != m.end() && !m["FunctionType"].empty()) {
      functionType = make_shared<string>(boost::any_cast<string>(m["FunctionType"]));
    }
    if (m.find("Nullable") != m.end() && !m["Nullable"].empty()) {
      nullable = make_shared<bool>(boost::any_cast<bool>(m["Nullable"]));
    }
    if (m.find("DataLength") != m.end() && !m["DataLength"].empty()) {
      dataLength = make_shared<long>(boost::any_cast<long>(m["DataLength"]));
    }
  }


  virtual ~ListColumnsResponseBodyColumnListColumn() = default;
};
class ListColumnsResponseBodyColumnList : public Darabonba::Model {
public:
  shared_ptr<vector<ListColumnsResponseBodyColumnListColumn>> column{};

  ListColumnsResponseBodyColumnList() {}

  explicit ListColumnsResponseBodyColumnList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      vector<boost::any> temp1;
      for(auto item1:*column){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Column"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      if (typeid(vector<boost::any>) == m["Column"].type()) {
        vector<ListColumnsResponseBodyColumnListColumn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Column"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListColumnsResponseBodyColumnListColumn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        column = make_shared<vector<ListColumnsResponseBodyColumnListColumn>>(expect1);
      }
    }
  }


  virtual ~ListColumnsResponseBodyColumnList() = default;
};
class ListColumnsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<ListColumnsResponseBodyColumnList> columnList{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  ListColumnsResponseBody() {}

  explicit ListColumnsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (columnList) {
      res["ColumnList"] = columnList ? boost::any(columnList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ColumnList") != m.end() && !m["ColumnList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ColumnList"].type()) {
        ListColumnsResponseBodyColumnList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ColumnList"]));
        columnList = make_shared<ListColumnsResponseBodyColumnList>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListColumnsResponseBody() = default;
};
class ListColumnsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListColumnsResponseBody> body{};

  ListColumnsResponse() {}

  explicit ListColumnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListColumnsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListColumnsResponseBody>(model1);
      }
    }
  }


  virtual ~ListColumnsResponse() = default;
};
class RevokeUserPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> userId{};
  shared_ptr<string> dsType{};
  shared_ptr<string> dbId{};
  shared_ptr<bool> logic{};
  shared_ptr<string> tableId{};
  shared_ptr<string> tableName{};
  shared_ptr<string> permTypes{};
  shared_ptr<string> userAccessId{};

  RevokeUserPermissionRequest() {}

  explicit RevokeUserPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (dsType) {
      res["DsType"] = boost::any(*dsType);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (permTypes) {
      res["PermTypes"] = boost::any(*permTypes);
    }
    if (userAccessId) {
      res["UserAccessId"] = boost::any(*userAccessId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("DsType") != m.end() && !m["DsType"].empty()) {
      dsType = make_shared<string>(boost::any_cast<string>(m["DsType"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<string>(boost::any_cast<string>(m["DbId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<string>(boost::any_cast<string>(m["TableId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("PermTypes") != m.end() && !m["PermTypes"].empty()) {
      permTypes = make_shared<string>(boost::any_cast<string>(m["PermTypes"]));
    }
    if (m.find("UserAccessId") != m.end() && !m["UserAccessId"].empty()) {
      userAccessId = make_shared<string>(boost::any_cast<string>(m["UserAccessId"]));
    }
  }


  virtual ~RevokeUserPermissionRequest() = default;
};
class RevokeUserPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  RevokeUserPermissionResponseBody() {}

  explicit RevokeUserPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RevokeUserPermissionResponseBody() = default;
};
class RevokeUserPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RevokeUserPermissionResponseBody> body{};

  RevokeUserPermissionResponse() {}

  explicit RevokeUserPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RevokeUserPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeUserPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeUserPermissionResponse() = default;
};
class GetMetaTableColumnRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> tableGuid{};

  GetMetaTableColumnRequest() {}

  explicit GetMetaTableColumnRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (tableGuid) {
      res["TableGuid"] = boost::any(*tableGuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("TableGuid") != m.end() && !m["TableGuid"].empty()) {
      tableGuid = make_shared<string>(boost::any_cast<string>(m["TableGuid"]));
    }
  }


  virtual ~GetMetaTableColumnRequest() = default;
};
class GetMetaTableColumnResponseBodyColumnList : public Darabonba::Model {
public:
  shared_ptr<string> columnType{};
  shared_ptr<bool> autoIncrement{};
  shared_ptr<string> columnId{};
  shared_ptr<string> columnName{};
  shared_ptr<string> securityLevel{};
  shared_ptr<string> primaryKey{};
  shared_ptr<string> description{};
  shared_ptr<long> dataPrecision{};
  shared_ptr<long> dataScale{};
  shared_ptr<long> position{};
  shared_ptr<bool> nullable{};
  shared_ptr<long> dataLength{};

  GetMetaTableColumnResponseBodyColumnList() {}

  explicit GetMetaTableColumnResponseBodyColumnList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnType) {
      res["ColumnType"] = boost::any(*columnType);
    }
    if (autoIncrement) {
      res["AutoIncrement"] = boost::any(*autoIncrement);
    }
    if (columnId) {
      res["ColumnId"] = boost::any(*columnId);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    if (primaryKey) {
      res["PrimaryKey"] = boost::any(*primaryKey);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dataPrecision) {
      res["DataPrecision"] = boost::any(*dataPrecision);
    }
    if (dataScale) {
      res["DataScale"] = boost::any(*dataScale);
    }
    if (position) {
      res["Position"] = boost::any(*position);
    }
    if (nullable) {
      res["Nullable"] = boost::any(*nullable);
    }
    if (dataLength) {
      res["DataLength"] = boost::any(*dataLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColumnType") != m.end() && !m["ColumnType"].empty()) {
      columnType = make_shared<string>(boost::any_cast<string>(m["ColumnType"]));
    }
    if (m.find("AutoIncrement") != m.end() && !m["AutoIncrement"].empty()) {
      autoIncrement = make_shared<bool>(boost::any_cast<bool>(m["AutoIncrement"]));
    }
    if (m.find("ColumnId") != m.end() && !m["ColumnId"].empty()) {
      columnId = make_shared<string>(boost::any_cast<string>(m["ColumnId"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<string>(boost::any_cast<string>(m["SecurityLevel"]));
    }
    if (m.find("PrimaryKey") != m.end() && !m["PrimaryKey"].empty()) {
      primaryKey = make_shared<string>(boost::any_cast<string>(m["PrimaryKey"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DataPrecision") != m.end() && !m["DataPrecision"].empty()) {
      dataPrecision = make_shared<long>(boost::any_cast<long>(m["DataPrecision"]));
    }
    if (m.find("DataScale") != m.end() && !m["DataScale"].empty()) {
      dataScale = make_shared<long>(boost::any_cast<long>(m["DataScale"]));
    }
    if (m.find("Position") != m.end() && !m["Position"].empty()) {
      position = make_shared<long>(boost::any_cast<long>(m["Position"]));
    }
    if (m.find("Nullable") != m.end() && !m["Nullable"].empty()) {
      nullable = make_shared<bool>(boost::any_cast<bool>(m["Nullable"]));
    }
    if (m.find("DataLength") != m.end() && !m["DataLength"].empty()) {
      dataLength = make_shared<long>(boost::any_cast<long>(m["DataLength"]));
    }
  }


  virtual ~GetMetaTableColumnResponseBodyColumnList() = default;
};
class GetMetaTableColumnResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<GetMetaTableColumnResponseBodyColumnList>> columnList{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GetMetaTableColumnResponseBody() {}

  explicit GetMetaTableColumnResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (columnList) {
      vector<boost::any> temp1;
      for(auto item1:*columnList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ColumnList"] = boost::any(temp1);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ColumnList") != m.end() && !m["ColumnList"].empty()) {
      if (typeid(vector<boost::any>) == m["ColumnList"].type()) {
        vector<GetMetaTableColumnResponseBodyColumnList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ColumnList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMetaTableColumnResponseBodyColumnList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columnList = make_shared<vector<GetMetaTableColumnResponseBodyColumnList>>(expect1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetMetaTableColumnResponseBody() = default;
};
class GetMetaTableColumnResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMetaTableColumnResponseBody> body{};

  GetMetaTableColumnResponse() {}

  explicit GetMetaTableColumnResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMetaTableColumnResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMetaTableColumnResponseBody>(model1);
      }
    }
  }


  virtual ~GetMetaTableColumnResponse() = default;
};
class EnableUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> uid{};

  EnableUserRequest() {}

  explicit EnableUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~EnableUserRequest() = default;
};
class EnableUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  EnableUserResponseBody() {}

  explicit EnableUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableUserResponseBody() = default;
};
class EnableUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableUserResponseBody> body{};

  EnableUserResponse() {}

  explicit EnableUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableUserResponseBody>(model1);
      }
    }
  }


  virtual ~EnableUserResponse() = default;
};
class UpdateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> instanceSource{};
  shared_ptr<string> envType{};
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> ecsRegion{};
  shared_ptr<string> host{};
  shared_ptr<long> port{};
  shared_ptr<string> sid{};
  shared_ptr<string> databaseUser{};
  shared_ptr<string> databasePassword{};
  shared_ptr<string> instanceAlias{};
  shared_ptr<string> dbaId{};
  shared_ptr<string> safeRuleId{};
  shared_ptr<long> queryTimeout{};
  shared_ptr<long> exportTimeout{};
  shared_ptr<string> dataLinkName{};
  shared_ptr<long> ddlOnline{};
  shared_ptr<long> useDsql{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> skipTest{};

  UpdateInstanceRequest() {}

  explicit UpdateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceSource) {
      res["InstanceSource"] = boost::any(*instanceSource);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (ecsRegion) {
      res["EcsRegion"] = boost::any(*ecsRegion);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (databaseUser) {
      res["DatabaseUser"] = boost::any(*databaseUser);
    }
    if (databasePassword) {
      res["DatabasePassword"] = boost::any(*databasePassword);
    }
    if (instanceAlias) {
      res["InstanceAlias"] = boost::any(*instanceAlias);
    }
    if (dbaId) {
      res["DbaId"] = boost::any(*dbaId);
    }
    if (safeRuleId) {
      res["SafeRuleId"] = boost::any(*safeRuleId);
    }
    if (queryTimeout) {
      res["QueryTimeout"] = boost::any(*queryTimeout);
    }
    if (exportTimeout) {
      res["ExportTimeout"] = boost::any(*exportTimeout);
    }
    if (dataLinkName) {
      res["DataLinkName"] = boost::any(*dataLinkName);
    }
    if (ddlOnline) {
      res["DdlOnline"] = boost::any(*ddlOnline);
    }
    if (useDsql) {
      res["UseDsql"] = boost::any(*useDsql);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (skipTest) {
      res["SkipTest"] = boost::any(*skipTest);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceSource") != m.end() && !m["InstanceSource"].empty()) {
      instanceSource = make_shared<string>(boost::any_cast<string>(m["InstanceSource"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("EcsRegion") != m.end() && !m["EcsRegion"].empty()) {
      ecsRegion = make_shared<string>(boost::any_cast<string>(m["EcsRegion"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("DatabaseUser") != m.end() && !m["DatabaseUser"].empty()) {
      databaseUser = make_shared<string>(boost::any_cast<string>(m["DatabaseUser"]));
    }
    if (m.find("DatabasePassword") != m.end() && !m["DatabasePassword"].empty()) {
      databasePassword = make_shared<string>(boost::any_cast<string>(m["DatabasePassword"]));
    }
    if (m.find("InstanceAlias") != m.end() && !m["InstanceAlias"].empty()) {
      instanceAlias = make_shared<string>(boost::any_cast<string>(m["InstanceAlias"]));
    }
    if (m.find("DbaId") != m.end() && !m["DbaId"].empty()) {
      dbaId = make_shared<string>(boost::any_cast<string>(m["DbaId"]));
    }
    if (m.find("SafeRuleId") != m.end() && !m["SafeRuleId"].empty()) {
      safeRuleId = make_shared<string>(boost::any_cast<string>(m["SafeRuleId"]));
    }
    if (m.find("QueryTimeout") != m.end() && !m["QueryTimeout"].empty()) {
      queryTimeout = make_shared<long>(boost::any_cast<long>(m["QueryTimeout"]));
    }
    if (m.find("ExportTimeout") != m.end() && !m["ExportTimeout"].empty()) {
      exportTimeout = make_shared<long>(boost::any_cast<long>(m["ExportTimeout"]));
    }
    if (m.find("DataLinkName") != m.end() && !m["DataLinkName"].empty()) {
      dataLinkName = make_shared<string>(boost::any_cast<string>(m["DataLinkName"]));
    }
    if (m.find("DdlOnline") != m.end() && !m["DdlOnline"].empty()) {
      ddlOnline = make_shared<long>(boost::any_cast<long>(m["DdlOnline"]));
    }
    if (m.find("UseDsql") != m.end() && !m["UseDsql"].empty()) {
      useDsql = make_shared<long>(boost::any_cast<long>(m["UseDsql"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SkipTest") != m.end() && !m["SkipTest"].empty()) {
      skipTest = make_shared<bool>(boost::any_cast<bool>(m["SkipTest"]));
    }
  }


  virtual ~UpdateInstanceRequest() = default;
};
class UpdateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  UpdateInstanceResponseBody() {}

  explicit UpdateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateInstanceResponseBody() = default;
};
class UpdateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateInstanceResponseBody> body{};

  UpdateInstanceResponse() {}

  explicit UpdateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceResponse() = default;
};
class ExecuteScriptRequest : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> script{};
  shared_ptr<bool> logic{};
  shared_ptr<long> tid{};

  ExecuteScriptRequest() {}

  explicit ExecuteScriptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (script) {
      res["Script"] = boost::any(*script);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      script = make_shared<string>(boost::any_cast<string>(m["Script"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~ExecuteScriptRequest() = default;
};
class ExecuteScriptResponseBodyResults : public Darabonba::Model {
public:
  shared_ptr<vector<string>> columnNames{};
  shared_ptr<vector<map<string, boost::any>>> rows{};
  shared_ptr<bool> success{};
  shared_ptr<string> message{};
  shared_ptr<long> rowCount{};

  ExecuteScriptResponseBodyResults() {}

  explicit ExecuteScriptResponseBodyResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnNames) {
      res["ColumnNames"] = boost::any(*columnNames);
    }
    if (rows) {
      res["Rows"] = boost::any(*rows);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (rowCount) {
      res["RowCount"] = boost::any(*rowCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColumnNames") != m.end() && !m["ColumnNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ColumnNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ColumnNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      columnNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Rows"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Rows"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      rows = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RowCount") != m.end() && !m["RowCount"].empty()) {
      rowCount = make_shared<long>(boost::any_cast<long>(m["RowCount"]));
    }
  }


  virtual ~ExecuteScriptResponseBodyResults() = default;
};
class ExecuteScriptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ExecuteScriptResponseBodyResults>> results{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  ExecuteScriptResponseBody() {}

  explicit ExecuteScriptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<ExecuteScriptResponseBodyResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteScriptResponseBodyResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<ExecuteScriptResponseBodyResults>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExecuteScriptResponseBody() = default;
};
class ExecuteScriptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteScriptResponseBody> body{};

  ExecuteScriptResponse() {}

  explicit ExecuteScriptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteScriptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteScriptResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteScriptResponse() = default;
};
class ListDBTaskSQLJobDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> tid{};

  ListDBTaskSQLJobDetailRequest() {}

  explicit ListDBTaskSQLJobDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~ListDBTaskSQLJobDetailRequest() = default;
};
class ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList : public Darabonba::Model {
public:
  shared_ptr<long> jobDetailId{};
  shared_ptr<string> currentSql{};
  shared_ptr<long> executeCount{};
  shared_ptr<long> jobId{};
  shared_ptr<long> dbId{};
  shared_ptr<bool> logic{};
  shared_ptr<bool> skip{};
  shared_ptr<string> sqlType{};
  shared_ptr<string> status{};

  ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList() {}

  explicit ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobDetailId) {
      res["JobDetailId"] = boost::any(*jobDetailId);
    }
    if (currentSql) {
      res["CurrentSql"] = boost::any(*currentSql);
    }
    if (executeCount) {
      res["ExecuteCount"] = boost::any(*executeCount);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (skip) {
      res["Skip"] = boost::any(*skip);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobDetailId") != m.end() && !m["JobDetailId"].empty()) {
      jobDetailId = make_shared<long>(boost::any_cast<long>(m["JobDetailId"]));
    }
    if (m.find("CurrentSql") != m.end() && !m["CurrentSql"].empty()) {
      currentSql = make_shared<string>(boost::any_cast<string>(m["CurrentSql"]));
    }
    if (m.find("ExecuteCount") != m.end() && !m["ExecuteCount"].empty()) {
      executeCount = make_shared<long>(boost::any_cast<long>(m["ExecuteCount"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("Skip") != m.end() && !m["Skip"].empty()) {
      skip = make_shared<bool>(boost::any_cast<bool>(m["Skip"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["SqlType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList() = default;
};
class ListDBTaskSQLJobDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList>> DBTaskSQLJobDetailList{};
  shared_ptr<long> totalCount{};

  ListDBTaskSQLJobDetailResponseBody() {}

  explicit ListDBTaskSQLJobDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (DBTaskSQLJobDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*DBTaskSQLJobDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBTaskSQLJobDetailList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DBTaskSQLJobDetailList") != m.end() && !m["DBTaskSQLJobDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["DBTaskSQLJobDetailList"].type()) {
        vector<ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBTaskSQLJobDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBTaskSQLJobDetailList = make_shared<vector<ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDBTaskSQLJobDetailResponseBody() = default;
};
class ListDBTaskSQLJobDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDBTaskSQLJobDetailResponseBody> body{};

  ListDBTaskSQLJobDetailResponse() {}

  explicit ListDBTaskSQLJobDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDBTaskSQLJobDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDBTaskSQLJobDetailResponseBody>(model1);
      }
    }
  }


  virtual ~ListDBTaskSQLJobDetailResponse() = default;
};
class DisableUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> uid{};

  DisableUserRequest() {}

  explicit DisableUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~DisableUserRequest() = default;
};
class DisableUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  DisableUserResponseBody() {}

  explicit DisableUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DisableUserResponseBody() = default;
};
class DisableUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableUserResponseBody> body{};

  DisableUserResponse() {}

  explicit DisableUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableUserResponseBody>(model1);
      }
    }
  }


  virtual ~DisableUserResponse() = default;
};
class GetApprovalDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> workflowInstanceId{};

  GetApprovalDetailRequest() {}

  explicit GetApprovalDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (workflowInstanceId) {
      res["WorkflowInstanceId"] = boost::any(*workflowInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("WorkflowInstanceId") != m.end() && !m["WorkflowInstanceId"].empty()) {
      workflowInstanceId = make_shared<long>(boost::any_cast<long>(m["WorkflowInstanceId"]));
    }
  }


  virtual ~GetApprovalDetailRequest() = default;
};
class GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> auditUserIds{};

  GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList() {}

  explicit GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditUserIds) {
      res["AuditUserIds"] = boost::any(*auditUserIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditUserIds") != m.end() && !m["AuditUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuditUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuditUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      auditUserIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList() = default;
};
class GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode : public Darabonba::Model {
public:
  shared_ptr<string> operateTime{};
  shared_ptr<long> operatorId{};
  shared_ptr<string> nodeName{};
  shared_ptr<GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList> auditUserIdList{};
  shared_ptr<string> operateComment{};
  shared_ptr<string> workflowInsCode{};

  GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode() {}

  explicit GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operateTime) {
      res["OperateTime"] = boost::any(*operateTime);
    }
    if (operatorId) {
      res["OperatorId"] = boost::any(*operatorId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (auditUserIdList) {
      res["AuditUserIdList"] = auditUserIdList ? boost::any(auditUserIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operateComment) {
      res["OperateComment"] = boost::any(*operateComment);
    }
    if (workflowInsCode) {
      res["WorkflowInsCode"] = boost::any(*workflowInsCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperateTime") != m.end() && !m["OperateTime"].empty()) {
      operateTime = make_shared<string>(boost::any_cast<string>(m["OperateTime"]));
    }
    if (m.find("OperatorId") != m.end() && !m["OperatorId"].empty()) {
      operatorId = make_shared<long>(boost::any_cast<long>(m["OperatorId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("AuditUserIdList") != m.end() && !m["AuditUserIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuditUserIdList"].type()) {
        GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuditUserIdList"]));
        auditUserIdList = make_shared<GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNodeAuditUserIdList>(model1);
      }
    }
    if (m.find("OperateComment") != m.end() && !m["OperateComment"].empty()) {
      operateComment = make_shared<string>(boost::any_cast<string>(m["OperateComment"]));
    }
    if (m.find("WorkflowInsCode") != m.end() && !m["WorkflowInsCode"].empty()) {
      workflowInsCode = make_shared<string>(boost::any_cast<string>(m["WorkflowInsCode"]));
    }
  }


  virtual ~GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode() = default;
};
class GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes : public Darabonba::Model {
public:
  shared_ptr<vector<GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode>> workflowNode{};

  GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes() {}

  explicit GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workflowNode) {
      vector<boost::any> temp1;
      for(auto item1:*workflowNode){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WorkflowNode"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkflowNode") != m.end() && !m["WorkflowNode"].empty()) {
      if (typeid(vector<boost::any>) == m["WorkflowNode"].type()) {
        vector<GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WorkflowNode"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workflowNode = make_shared<vector<GetApprovalDetailResponseBodyApprovalDetailWorkflowNodesWorkflowNode>>(expect1);
      }
    }
  }


  virtual ~GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes() = default;
};
class GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler : public Darabonba::Model {
public:
  shared_ptr<string> nickName{};
  shared_ptr<long> id{};

  GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler() {}

  explicit GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler() = default;
};
class GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers : public Darabonba::Model {
public:
  shared_ptr<vector<GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler>> currentHandler{};

  GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers() {}

  explicit GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentHandler) {
      vector<boost::any> temp1;
      for(auto item1:*currentHandler){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CurrentHandler"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentHandler") != m.end() && !m["CurrentHandler"].empty()) {
      if (typeid(vector<boost::any>) == m["CurrentHandler"].type()) {
        vector<GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CurrentHandler"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        currentHandler = make_shared<vector<GetApprovalDetailResponseBodyApprovalDetailCurrentHandlersCurrentHandler>>(expect1);
      }
    }
  }


  virtual ~GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers() = default;
};
class GetApprovalDetailResponseBodyApprovalDetailReasonList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> reasons{};

  GetApprovalDetailResponseBodyApprovalDetailReasonList() {}

  explicit GetApprovalDetailResponseBodyApprovalDetailReasonList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reasons) {
      res["Reasons"] = boost::any(*reasons);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Reasons") != m.end() && !m["Reasons"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Reasons"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Reasons"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      reasons = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetApprovalDetailResponseBodyApprovalDetailReasonList() = default;
};
class GetApprovalDetailResponseBodyApprovalDetail : public Darabonba::Model {
public:
  shared_ptr<GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes> workflowNodes{};
  shared_ptr<string> description{};
  shared_ptr<GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers> currentHandlers{};
  shared_ptr<string> orderType{};
  shared_ptr<string> title{};
  shared_ptr<long> auditId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> workflowInsCode{};
  shared_ptr<GetApprovalDetailResponseBodyApprovalDetailReasonList> reasonList{};

  GetApprovalDetailResponseBodyApprovalDetail() {}

  explicit GetApprovalDetailResponseBodyApprovalDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workflowNodes) {
      res["WorkflowNodes"] = workflowNodes ? boost::any(workflowNodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (currentHandlers) {
      res["CurrentHandlers"] = currentHandlers ? boost::any(currentHandlers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (auditId) {
      res["AuditId"] = boost::any(*auditId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (workflowInsCode) {
      res["WorkflowInsCode"] = boost::any(*workflowInsCode);
    }
    if (reasonList) {
      res["ReasonList"] = reasonList ? boost::any(reasonList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkflowNodes") != m.end() && !m["WorkflowNodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["WorkflowNodes"].type()) {
        GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WorkflowNodes"]));
        workflowNodes = make_shared<GetApprovalDetailResponseBodyApprovalDetailWorkflowNodes>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CurrentHandlers") != m.end() && !m["CurrentHandlers"].empty()) {
      if (typeid(map<string, boost::any>) == m["CurrentHandlers"].type()) {
        GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CurrentHandlers"]));
        currentHandlers = make_shared<GetApprovalDetailResponseBodyApprovalDetailCurrentHandlers>(model1);
      }
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("AuditId") != m.end() && !m["AuditId"].empty()) {
      auditId = make_shared<long>(boost::any_cast<long>(m["AuditId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("WorkflowInsCode") != m.end() && !m["WorkflowInsCode"].empty()) {
      workflowInsCode = make_shared<string>(boost::any_cast<string>(m["WorkflowInsCode"]));
    }
    if (m.find("ReasonList") != m.end() && !m["ReasonList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ReasonList"].type()) {
        GetApprovalDetailResponseBodyApprovalDetailReasonList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ReasonList"]));
        reasonList = make_shared<GetApprovalDetailResponseBodyApprovalDetailReasonList>(model1);
      }
    }
  }


  virtual ~GetApprovalDetailResponseBodyApprovalDetail() = default;
};
class GetApprovalDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<GetApprovalDetailResponseBodyApprovalDetail> approvalDetail{};
  shared_ptr<bool> success{};

  GetApprovalDetailResponseBody() {}

  explicit GetApprovalDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (approvalDetail) {
      res["ApprovalDetail"] = approvalDetail ? boost::any(approvalDetail->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ApprovalDetail") != m.end() && !m["ApprovalDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApprovalDetail"].type()) {
        GetApprovalDetailResponseBodyApprovalDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApprovalDetail"]));
        approvalDetail = make_shared<GetApprovalDetailResponseBodyApprovalDetail>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetApprovalDetailResponseBody() = default;
};
class GetApprovalDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetApprovalDetailResponseBody> body{};

  GetApprovalDetailResponse() {}

  explicit GetApprovalDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetApprovalDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetApprovalDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetApprovalDetailResponse() = default;
};
class GetUserActiveTenantRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};

  GetUserActiveTenantRequest() {}

  explicit GetUserActiveTenantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~GetUserActiveTenantRequest() = default;
};
class GetUserActiveTenantResponseBodyTenant : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> tid{};
  shared_ptr<string> tenantName{};

  GetUserActiveTenantResponseBodyTenant() {}

  explicit GetUserActiveTenantResponseBodyTenant(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (tenantName) {
      res["TenantName"] = boost::any(*tenantName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("TenantName") != m.end() && !m["TenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["TenantName"]));
    }
  }


  virtual ~GetUserActiveTenantResponseBodyTenant() = default;
};
class GetUserActiveTenantResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetUserActiveTenantResponseBodyTenant> tenant{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GetUserActiveTenantResponseBody() {}

  explicit GetUserActiveTenantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenant) {
      res["Tenant"] = tenant ? boost::any(tenant->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tenant") != m.end() && !m["Tenant"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tenant"].type()) {
        GetUserActiveTenantResponseBodyTenant model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tenant"]));
        tenant = make_shared<GetUserActiveTenantResponseBodyTenant>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetUserActiveTenantResponseBody() = default;
};
class GetUserActiveTenantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetUserActiveTenantResponseBody> body{};

  GetUserActiveTenantResponse() {}

  explicit GetUserActiveTenantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserActiveTenantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserActiveTenantResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserActiveTenantResponse() = default;
};
class RegisterUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> uid{};
  shared_ptr<string> userNick{};
  shared_ptr<string> roleNames{};
  shared_ptr<string> mobile{};

  RegisterUserRequest() {}

  explicit RegisterUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (userNick) {
      res["UserNick"] = boost::any(*userNick);
    }
    if (roleNames) {
      res["RoleNames"] = boost::any(*roleNames);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("UserNick") != m.end() && !m["UserNick"].empty()) {
      userNick = make_shared<string>(boost::any_cast<string>(m["UserNick"]));
    }
    if (m.find("RoleNames") != m.end() && !m["RoleNames"].empty()) {
      roleNames = make_shared<string>(boost::any_cast<string>(m["RoleNames"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
  }


  virtual ~RegisterUserRequest() = default;
};
class RegisterUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  RegisterUserResponseBody() {}

  explicit RegisterUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RegisterUserResponseBody() = default;
};
class RegisterUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RegisterUserResponseBody> body{};

  RegisterUserResponse() {}

  explicit RegisterUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterUserResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterUserResponse() = default;
};
class GetInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> host{};
  shared_ptr<long> port{};
  shared_ptr<string> sid{};

  GetInstanceRequest() {}

  explicit GetInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
  }


  virtual ~GetInstanceRequest() = default;
};
class GetInstanceResponseBodyInstanceOwnerIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerIds{};

  GetInstanceResponseBodyInstanceOwnerIdList() {}

  explicit GetInstanceResponseBodyInstanceOwnerIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetInstanceResponseBodyInstanceOwnerIdList() = default;
};
class GetInstanceResponseBodyInstanceOwnerNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerNames{};

  GetInstanceResponseBodyInstanceOwnerNameList() {}

  explicit GetInstanceResponseBodyInstanceOwnerNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerNames) {
      res["OwnerNames"] = boost::any(*ownerNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerNames") != m.end() && !m["OwnerNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetInstanceResponseBodyInstanceOwnerNameList() = default;
};
class GetInstanceResponseBodyInstance : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> databaseUser{};
  shared_ptr<string> dbaId{};
  shared_ptr<long> useDsql{};
  shared_ptr<long> port{};
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<string> envType{};
  shared_ptr<string> sid{};
  shared_ptr<GetInstanceResponseBodyInstanceOwnerIdList> ownerIdList{};
  shared_ptr<string> safeRuleId{};
  shared_ptr<GetInstanceResponseBodyInstanceOwnerNameList> ownerNameList{};
  shared_ptr<string> dbaNickName{};
  shared_ptr<long> queryTimeout{};
  shared_ptr<string> instanceSource{};
  shared_ptr<string> host{};
  shared_ptr<string> state{};
  shared_ptr<string> dataLinkName{};
  shared_ptr<long> exportTimeout{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> databasePassword{};
  shared_ptr<string> instanceAlias{};
  shared_ptr<long> ddlOnline{};
  shared_ptr<string> ecsRegion{};

  GetInstanceResponseBodyInstance() {}

  explicit GetInstanceResponseBodyInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (databaseUser) {
      res["DatabaseUser"] = boost::any(*databaseUser);
    }
    if (dbaId) {
      res["DbaId"] = boost::any(*dbaId);
    }
    if (useDsql) {
      res["UseDsql"] = boost::any(*useDsql);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (ownerIdList) {
      res["OwnerIdList"] = ownerIdList ? boost::any(ownerIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (safeRuleId) {
      res["SafeRuleId"] = boost::any(*safeRuleId);
    }
    if (ownerNameList) {
      res["OwnerNameList"] = ownerNameList ? boost::any(ownerNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dbaNickName) {
      res["DbaNickName"] = boost::any(*dbaNickName);
    }
    if (queryTimeout) {
      res["QueryTimeout"] = boost::any(*queryTimeout);
    }
    if (instanceSource) {
      res["InstanceSource"] = boost::any(*instanceSource);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (dataLinkName) {
      res["DataLinkName"] = boost::any(*dataLinkName);
    }
    if (exportTimeout) {
      res["ExportTimeout"] = boost::any(*exportTimeout);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (databasePassword) {
      res["DatabasePassword"] = boost::any(*databasePassword);
    }
    if (instanceAlias) {
      res["InstanceAlias"] = boost::any(*instanceAlias);
    }
    if (ddlOnline) {
      res["DdlOnline"] = boost::any(*ddlOnline);
    }
    if (ecsRegion) {
      res["EcsRegion"] = boost::any(*ecsRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("DatabaseUser") != m.end() && !m["DatabaseUser"].empty()) {
      databaseUser = make_shared<string>(boost::any_cast<string>(m["DatabaseUser"]));
    }
    if (m.find("DbaId") != m.end() && !m["DbaId"].empty()) {
      dbaId = make_shared<string>(boost::any_cast<string>(m["DbaId"]));
    }
    if (m.find("UseDsql") != m.end() && !m["UseDsql"].empty()) {
      useDsql = make_shared<long>(boost::any_cast<long>(m["UseDsql"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("OwnerIdList") != m.end() && !m["OwnerIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerIdList"].type()) {
        GetInstanceResponseBodyInstanceOwnerIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerIdList"]));
        ownerIdList = make_shared<GetInstanceResponseBodyInstanceOwnerIdList>(model1);
      }
    }
    if (m.find("SafeRuleId") != m.end() && !m["SafeRuleId"].empty()) {
      safeRuleId = make_shared<string>(boost::any_cast<string>(m["SafeRuleId"]));
    }
    if (m.find("OwnerNameList") != m.end() && !m["OwnerNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerNameList"].type()) {
        GetInstanceResponseBodyInstanceOwnerNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerNameList"]));
        ownerNameList = make_shared<GetInstanceResponseBodyInstanceOwnerNameList>(model1);
      }
    }
    if (m.find("DbaNickName") != m.end() && !m["DbaNickName"].empty()) {
      dbaNickName = make_shared<string>(boost::any_cast<string>(m["DbaNickName"]));
    }
    if (m.find("QueryTimeout") != m.end() && !m["QueryTimeout"].empty()) {
      queryTimeout = make_shared<long>(boost::any_cast<long>(m["QueryTimeout"]));
    }
    if (m.find("InstanceSource") != m.end() && !m["InstanceSource"].empty()) {
      instanceSource = make_shared<string>(boost::any_cast<string>(m["InstanceSource"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("DataLinkName") != m.end() && !m["DataLinkName"].empty()) {
      dataLinkName = make_shared<string>(boost::any_cast<string>(m["DataLinkName"]));
    }
    if (m.find("ExportTimeout") != m.end() && !m["ExportTimeout"].empty()) {
      exportTimeout = make_shared<long>(boost::any_cast<long>(m["ExportTimeout"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("DatabasePassword") != m.end() && !m["DatabasePassword"].empty()) {
      databasePassword = make_shared<string>(boost::any_cast<string>(m["DatabasePassword"]));
    }
    if (m.find("InstanceAlias") != m.end() && !m["InstanceAlias"].empty()) {
      instanceAlias = make_shared<string>(boost::any_cast<string>(m["InstanceAlias"]));
    }
    if (m.find("DdlOnline") != m.end() && !m["DdlOnline"].empty()) {
      ddlOnline = make_shared<long>(boost::any_cast<long>(m["DdlOnline"]));
    }
    if (m.find("EcsRegion") != m.end() && !m["EcsRegion"].empty()) {
      ecsRegion = make_shared<string>(boost::any_cast<string>(m["EcsRegion"]));
    }
  }


  virtual ~GetInstanceResponseBodyInstance() = default;
};
class GetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetInstanceResponseBodyInstance> instance{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GetInstanceResponseBody() {}

  explicit GetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instance) {
      res["Instance"] = instance ? boost::any(instance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instance"].type()) {
        GetInstanceResponseBodyInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instance"]));
        instance = make_shared<GetInstanceResponseBodyInstance>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetInstanceResponseBody() = default;
};
class GetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetInstanceResponseBody> body{};

  GetInstanceResponse() {}

  explicit GetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResponse() = default;
};
class GetPermApplyOrderDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<long> tid{};

  GetPermApplyOrderDetailRequest() {}

  explicit GetPermApplyOrderDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~GetPermApplyOrderDetailRequest() = default;
};
class GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<bool> logic{};
  shared_ptr<string> dbType{};
  shared_ptr<string> searchName{};
  shared_ptr<vector<long>> ownerIds{};
  shared_ptr<vector<string>> ownerNickNames{};
  shared_ptr<string> envType{};

  GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo() {}

  explicit GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    if (ownerNickNames) {
      res["OwnerNickNames"] = boost::any(*ownerNickNames);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ownerIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("OwnerNickNames") != m.end() && !m["OwnerNickNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerNickNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerNickNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerNickNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
  }


  virtual ~GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo() = default;
};
class GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};

  GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo() {}

  explicit GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo() = default;
};
class GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};
  shared_ptr<string> columnName{};

  GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo() {}

  explicit GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
  }


  virtual ~GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo() = default;
};
class GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> searchName{};
  shared_ptr<string> dbType{};
  shared_ptr<string> envType{};
  shared_ptr<string> host{};
  shared_ptr<long> port{};
  shared_ptr<vector<long>> ownerIds{};
  shared_ptr<vector<string>> ownerNickName{};
  shared_ptr<long> dbaId{};
  shared_ptr<string> dbaNickName{};

  GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo() {}

  explicit GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    if (ownerNickName) {
      res["OwnerNickName"] = boost::any(*ownerNickName);
    }
    if (dbaId) {
      res["DbaId"] = boost::any(*dbaId);
    }
    if (dbaNickName) {
      res["DbaNickName"] = boost::any(*dbaNickName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ownerIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("OwnerNickName") != m.end() && !m["OwnerNickName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerNickName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerNickName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerNickName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DbaId") != m.end() && !m["DbaId"].empty()) {
      dbaId = make_shared<long>(boost::any_cast<long>(m["DbaId"]));
    }
    if (m.find("DbaNickName") != m.end() && !m["DbaNickName"].empty()) {
      dbaNickName = make_shared<string>(boost::any_cast<string>(m["DbaNickName"]));
    }
  }


  virtual ~GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo() = default;
};
class GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources : public Darabonba::Model {
public:
  shared_ptr<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo> databaseInfo{};
  shared_ptr<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo> tableInfo{};
  shared_ptr<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo> columnInfo{};
  shared_ptr<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo> instanceInfo{};

  GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources() {}

  explicit GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseInfo) {
      res["DatabaseInfo"] = databaseInfo ? boost::any(databaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableInfo) {
      res["TableInfo"] = tableInfo ? boost::any(tableInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (columnInfo) {
      res["ColumnInfo"] = columnInfo ? boost::any(columnInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceInfo) {
      res["InstanceInfo"] = instanceInfo ? boost::any(instanceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseInfo") != m.end() && !m["DatabaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DatabaseInfo"].type()) {
        GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DatabaseInfo"]));
        databaseInfo = make_shared<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesDatabaseInfo>(model1);
      }
    }
    if (m.find("TableInfo") != m.end() && !m["TableInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableInfo"].type()) {
        GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableInfo"]));
        tableInfo = make_shared<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesTableInfo>(model1);
      }
    }
    if (m.find("ColumnInfo") != m.end() && !m["ColumnInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ColumnInfo"].type()) {
        GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ColumnInfo"]));
        columnInfo = make_shared<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesColumnInfo>(model1);
      }
    }
    if (m.find("InstanceInfo") != m.end() && !m["InstanceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceInfo"].type()) {
        GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceInfo"]));
        instanceInfo = make_shared<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResourcesInstanceInfo>(model1);
      }
    }
  }


  virtual ~GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources() = default;
};
class GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail : public Darabonba::Model {
public:
  shared_ptr<vector<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources>> resources{};
  shared_ptr<long> permType{};
  shared_ptr<long> seconds{};
  shared_ptr<string> applyType{};

  GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail() {}

  explicit GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (permType) {
      res["PermType"] = boost::any(*permType);
    }
    if (seconds) {
      res["Seconds"] = boost::any(*seconds);
    }
    if (applyType) {
      res["ApplyType"] = boost::any(*applyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetailResources>>(expect1);
      }
    }
    if (m.find("PermType") != m.end() && !m["PermType"].empty()) {
      permType = make_shared<long>(boost::any_cast<long>(m["PermType"]));
    }
    if (m.find("Seconds") != m.end() && !m["Seconds"].empty()) {
      seconds = make_shared<long>(boost::any_cast<long>(m["Seconds"]));
    }
    if (m.find("ApplyType") != m.end() && !m["ApplyType"].empty()) {
      applyType = make_shared<string>(boost::any_cast<string>(m["ApplyType"]));
    }
  }


  virtual ~GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail() = default;
};
class GetPermApplyOrderDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail> permApplyOrderDetail{};

  GetPermApplyOrderDetailResponseBody() {}

  explicit GetPermApplyOrderDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (permApplyOrderDetail) {
      res["PermApplyOrderDetail"] = permApplyOrderDetail ? boost::any(permApplyOrderDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("PermApplyOrderDetail") != m.end() && !m["PermApplyOrderDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["PermApplyOrderDetail"].type()) {
        GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PermApplyOrderDetail"]));
        permApplyOrderDetail = make_shared<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail>(model1);
      }
    }
  }


  virtual ~GetPermApplyOrderDetailResponseBody() = default;
};
class GetPermApplyOrderDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetPermApplyOrderDetailResponseBody> body{};

  GetPermApplyOrderDetailResponse() {}

  explicit GetPermApplyOrderDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPermApplyOrderDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPermApplyOrderDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetPermApplyOrderDetailResponse() = default;
};
class ListIndexesRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> tableId{};
  shared_ptr<bool> logic{};

  ListIndexesRequest() {}

  explicit ListIndexesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<string>(boost::any_cast<string>(m["TableId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
  }


  virtual ~ListIndexesRequest() = default;
};
class ListIndexesResponseBodyIndexListIndex : public Darabonba::Model {
public:
  shared_ptr<string> indexName{};
  shared_ptr<string> indexType{};
  shared_ptr<string> tableId{};
  shared_ptr<string> indexId{};
  shared_ptr<string> indexComment{};

  ListIndexesResponseBodyIndexListIndex() {}

  explicit ListIndexesResponseBodyIndexListIndex(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexName) {
      res["IndexName"] = boost::any(*indexName);
    }
    if (indexType) {
      res["IndexType"] = boost::any(*indexType);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (indexComment) {
      res["IndexComment"] = boost::any(*indexComment);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexName") != m.end() && !m["IndexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["IndexName"]));
    }
    if (m.find("IndexType") != m.end() && !m["IndexType"].empty()) {
      indexType = make_shared<string>(boost::any_cast<string>(m["IndexType"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<string>(boost::any_cast<string>(m["TableId"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("IndexComment") != m.end() && !m["IndexComment"].empty()) {
      indexComment = make_shared<string>(boost::any_cast<string>(m["IndexComment"]));
    }
  }


  virtual ~ListIndexesResponseBodyIndexListIndex() = default;
};
class ListIndexesResponseBodyIndexList : public Darabonba::Model {
public:
  shared_ptr<vector<ListIndexesResponseBodyIndexListIndex>> index{};

  ListIndexesResponseBodyIndexList() {}

  explicit ListIndexesResponseBodyIndexList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      vector<boost::any> temp1;
      for(auto item1:*index){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Index"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      if (typeid(vector<boost::any>) == m["Index"].type()) {
        vector<ListIndexesResponseBodyIndexListIndex> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Index"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIndexesResponseBodyIndexListIndex model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        index = make_shared<vector<ListIndexesResponseBodyIndexListIndex>>(expect1);
      }
    }
  }


  virtual ~ListIndexesResponseBodyIndexList() = default;
};
class ListIndexesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<ListIndexesResponseBodyIndexList> indexList{};
  shared_ptr<bool> success{};

  ListIndexesResponseBody() {}

  explicit ListIndexesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (indexList) {
      res["IndexList"] = indexList ? boost::any(indexList->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("IndexList") != m.end() && !m["IndexList"].empty()) {
      if (typeid(map<string, boost::any>) == m["IndexList"].type()) {
        ListIndexesResponseBodyIndexList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IndexList"]));
        indexList = make_shared<ListIndexesResponseBodyIndexList>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListIndexesResponseBody() = default;
};
class ListIndexesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListIndexesResponseBody> body{};

  ListIndexesResponse() {}

  explicit ListIndexesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIndexesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIndexesResponseBody>(model1);
      }
    }
  }


  virtual ~ListIndexesResponse() = default;
};
class ListLogicTablesRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> databaseId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchName{};
  shared_ptr<bool> returnGuid{};

  ListLogicTablesRequest() {}

  explicit ListLogicTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (databaseId) {
      res["DatabaseId"] = boost::any(*databaseId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (returnGuid) {
      res["ReturnGuid"] = boost::any(*returnGuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("DatabaseId") != m.end() && !m["DatabaseId"].empty()) {
      databaseId = make_shared<string>(boost::any_cast<string>(m["DatabaseId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("ReturnGuid") != m.end() && !m["ReturnGuid"].empty()) {
      returnGuid = make_shared<bool>(boost::any_cast<bool>(m["ReturnGuid"]));
    }
  }


  virtual ~ListLogicTablesRequest() = default;
};
class ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerIds{};

  ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList() {}

  explicit ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList() = default;
};
class ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerNames{};

  ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList() {}

  explicit ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerNames) {
      res["OwnerNames"] = boost::any(*ownerNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerNames") != m.end() && !m["OwnerNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList() = default;
};
class ListLogicTablesResponseBodyLogicTableListLogicTable : public Darabonba::Model {
public:
  shared_ptr<string> databaseId{};
  shared_ptr<string> tableName{};
  shared_ptr<string> tableCount{};
  shared_ptr<ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList> ownerIdList{};
  shared_ptr<ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList> ownerNameList{};
  shared_ptr<string> schemaName{};
  shared_ptr<bool> logic{};
  shared_ptr<string> tableExpr{};
  shared_ptr<string> tableGuid{};
  shared_ptr<string> tableId{};

  ListLogicTablesResponseBodyLogicTableListLogicTable() {}

  explicit ListLogicTablesResponseBodyLogicTableListLogicTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseId) {
      res["DatabaseId"] = boost::any(*databaseId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tableCount) {
      res["TableCount"] = boost::any(*tableCount);
    }
    if (ownerIdList) {
      res["OwnerIdList"] = ownerIdList ? boost::any(ownerIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ownerNameList) {
      res["OwnerNameList"] = ownerNameList ? boost::any(ownerNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (tableExpr) {
      res["TableExpr"] = boost::any(*tableExpr);
    }
    if (tableGuid) {
      res["TableGuid"] = boost::any(*tableGuid);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseId") != m.end() && !m["DatabaseId"].empty()) {
      databaseId = make_shared<string>(boost::any_cast<string>(m["DatabaseId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TableCount") != m.end() && !m["TableCount"].empty()) {
      tableCount = make_shared<string>(boost::any_cast<string>(m["TableCount"]));
    }
    if (m.find("OwnerIdList") != m.end() && !m["OwnerIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerIdList"].type()) {
        ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerIdList"]));
        ownerIdList = make_shared<ListLogicTablesResponseBodyLogicTableListLogicTableOwnerIdList>(model1);
      }
    }
    if (m.find("OwnerNameList") != m.end() && !m["OwnerNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerNameList"].type()) {
        ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerNameList"]));
        ownerNameList = make_shared<ListLogicTablesResponseBodyLogicTableListLogicTableOwnerNameList>(model1);
      }
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("TableExpr") != m.end() && !m["TableExpr"].empty()) {
      tableExpr = make_shared<string>(boost::any_cast<string>(m["TableExpr"]));
    }
    if (m.find("TableGuid") != m.end() && !m["TableGuid"].empty()) {
      tableGuid = make_shared<string>(boost::any_cast<string>(m["TableGuid"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<string>(boost::any_cast<string>(m["TableId"]));
    }
  }


  virtual ~ListLogicTablesResponseBodyLogicTableListLogicTable() = default;
};
class ListLogicTablesResponseBodyLogicTableList : public Darabonba::Model {
public:
  shared_ptr<vector<ListLogicTablesResponseBodyLogicTableListLogicTable>> logicTable{};

  ListLogicTablesResponseBodyLogicTableList() {}

  explicit ListLogicTablesResponseBodyLogicTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicTable) {
      vector<boost::any> temp1;
      for(auto item1:*logicTable){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogicTable"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicTable") != m.end() && !m["LogicTable"].empty()) {
      if (typeid(vector<boost::any>) == m["LogicTable"].type()) {
        vector<ListLogicTablesResponseBodyLogicTableListLogicTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogicTable"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLogicTablesResponseBodyLogicTableListLogicTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logicTable = make_shared<vector<ListLogicTablesResponseBodyLogicTableListLogicTable>>(expect1);
      }
    }
  }


  virtual ~ListLogicTablesResponseBodyLogicTableList() = default;
};
class ListLogicTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<ListLogicTablesResponseBodyLogicTableList> logicTableList{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  ListLogicTablesResponseBody() {}

  explicit ListLogicTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (logicTableList) {
      res["LogicTableList"] = logicTableList ? boost::any(logicTableList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("LogicTableList") != m.end() && !m["LogicTableList"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogicTableList"].type()) {
        ListLogicTablesResponseBodyLogicTableList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogicTableList"]));
        logicTableList = make_shared<ListLogicTablesResponseBodyLogicTableList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListLogicTablesResponseBody() = default;
};
class ListLogicTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListLogicTablesResponseBody> body{};

  ListLogicTablesResponse() {}

  explicit ListLogicTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLogicTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLogicTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListLogicTablesResponse() = default;
};
class GetTableTopologyRequest : public Darabonba::Model {
public:
  shared_ptr<string> tableGuid{};
  shared_ptr<long> tid{};

  GetTableTopologyRequest() {}

  explicit GetTableTopologyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableGuid) {
      res["TableGuid"] = boost::any(*tableGuid);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableGuid") != m.end() && !m["TableGuid"].empty()) {
      tableGuid = make_shared<string>(boost::any_cast<string>(m["TableGuid"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~GetTableTopologyRequest() = default;
};
class GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList : public Darabonba::Model {
public:
  shared_ptr<string> tableNameList{};
  shared_ptr<string> tableNameExpr{};
  shared_ptr<long> tableCount{};
  shared_ptr<long> dbId{};
  shared_ptr<string> dbSearchName{};
  shared_ptr<long> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceResourceId{};
  shared_ptr<string> instanceSource{};
  shared_ptr<string> dbName{};
  shared_ptr<string> dbType{};

  GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList() {}

  explicit GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableNameList) {
      res["TableNameList"] = boost::any(*tableNameList);
    }
    if (tableNameExpr) {
      res["TableNameExpr"] = boost::any(*tableNameExpr);
    }
    if (tableCount) {
      res["TableCount"] = boost::any(*tableCount);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (dbSearchName) {
      res["DbSearchName"] = boost::any(*dbSearchName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceResourceId) {
      res["InstanceResourceId"] = boost::any(*instanceResourceId);
    }
    if (instanceSource) {
      res["InstanceSource"] = boost::any(*instanceSource);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableNameList") != m.end() && !m["TableNameList"].empty()) {
      tableNameList = make_shared<string>(boost::any_cast<string>(m["TableNameList"]));
    }
    if (m.find("TableNameExpr") != m.end() && !m["TableNameExpr"].empty()) {
      tableNameExpr = make_shared<string>(boost::any_cast<string>(m["TableNameExpr"]));
    }
    if (m.find("TableCount") != m.end() && !m["TableCount"].empty()) {
      tableCount = make_shared<long>(boost::any_cast<long>(m["TableCount"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("DbSearchName") != m.end() && !m["DbSearchName"].empty()) {
      dbSearchName = make_shared<string>(boost::any_cast<string>(m["DbSearchName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceResourceId") != m.end() && !m["InstanceResourceId"].empty()) {
      instanceResourceId = make_shared<string>(boost::any_cast<string>(m["InstanceResourceId"]));
    }
    if (m.find("InstanceSource") != m.end() && !m["InstanceSource"].empty()) {
      instanceSource = make_shared<string>(boost::any_cast<string>(m["InstanceSource"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
  }


  virtual ~GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList() = default;
};
class GetTableTopologyResponseBodyTableTopology : public Darabonba::Model {
public:
  shared_ptr<string> tableGuid{};
  shared_ptr<string> tableName{};
  shared_ptr<vector<GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList>> tableTopologyInfoList{};
  shared_ptr<bool> logic{};

  GetTableTopologyResponseBodyTableTopology() {}

  explicit GetTableTopologyResponseBodyTableTopology(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableGuid) {
      res["TableGuid"] = boost::any(*tableGuid);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tableTopologyInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*tableTopologyInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableTopologyInfoList"] = boost::any(temp1);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableGuid") != m.end() && !m["TableGuid"].empty()) {
      tableGuid = make_shared<string>(boost::any_cast<string>(m["TableGuid"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TableTopologyInfoList") != m.end() && !m["TableTopologyInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["TableTopologyInfoList"].type()) {
        vector<GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableTopologyInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableTopologyInfoList = make_shared<vector<GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList>>(expect1);
      }
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
  }


  virtual ~GetTableTopologyResponseBodyTableTopology() = default;
};
class GetTableTopologyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetTableTopologyResponseBodyTableTopology> tableTopology{};

  GetTableTopologyResponseBody() {}

  explicit GetTableTopologyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (tableTopology) {
      res["TableTopology"] = tableTopology ? boost::any(tableTopology->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("TableTopology") != m.end() && !m["TableTopology"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableTopology"].type()) {
        GetTableTopologyResponseBodyTableTopology model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableTopology"]));
        tableTopology = make_shared<GetTableTopologyResponseBodyTableTopology>(model1);
      }
    }
  }


  virtual ~GetTableTopologyResponseBody() = default;
};
class GetTableTopologyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTableTopologyResponseBody> body{};

  GetTableTopologyResponse() {}

  explicit GetTableTopologyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTableTopologyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTableTopologyResponseBody>(model1);
      }
    }
  }


  virtual ~GetTableTopologyResponse() = default;
};
class GetDataExportDownloadURLRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> orderId{};

  GetDataExportDownloadURLRequest() {}

  explicit GetDataExportDownloadURLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~GetDataExportDownloadURLRequest() = default;
};
class GetDataExportDownloadURLResponseBodyDownloadURLResult : public Darabonba::Model {
public:
  shared_ptr<bool> hasResult{};
  shared_ptr<string> tipMessage{};
  shared_ptr<string> URL{};

  GetDataExportDownloadURLResponseBodyDownloadURLResult() {}

  explicit GetDataExportDownloadURLResponseBodyDownloadURLResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasResult) {
      res["HasResult"] = boost::any(*hasResult);
    }
    if (tipMessage) {
      res["TipMessage"] = boost::any(*tipMessage);
    }
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasResult") != m.end() && !m["HasResult"].empty()) {
      hasResult = make_shared<bool>(boost::any_cast<bool>(m["HasResult"]));
    }
    if (m.find("TipMessage") != m.end() && !m["TipMessage"].empty()) {
      tipMessage = make_shared<string>(boost::any_cast<string>(m["TipMessage"]));
    }
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~GetDataExportDownloadURLResponseBodyDownloadURLResult() = default;
};
class GetDataExportDownloadURLResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDataExportDownloadURLResponseBodyDownloadURLResult> downloadURLResult{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GetDataExportDownloadURLResponseBody() {}

  explicit GetDataExportDownloadURLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadURLResult) {
      res["DownloadURLResult"] = downloadURLResult ? boost::any(downloadURLResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadURLResult") != m.end() && !m["DownloadURLResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["DownloadURLResult"].type()) {
        GetDataExportDownloadURLResponseBodyDownloadURLResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DownloadURLResult"]));
        downloadURLResult = make_shared<GetDataExportDownloadURLResponseBodyDownloadURLResult>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetDataExportDownloadURLResponseBody() = default;
};
class GetDataExportDownloadURLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDataExportDownloadURLResponseBody> body{};

  GetDataExportDownloadURLResponse() {}

  explicit GetDataExportDownloadURLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataExportDownloadURLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataExportDownloadURLResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataExportDownloadURLResponse() = default;
};
class CreateDataCronClearOrderRequestParamDbItemList : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<bool> logic{};

  CreateDataCronClearOrderRequestParamDbItemList() {}

  explicit CreateDataCronClearOrderRequestParamDbItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
  }


  virtual ~CreateDataCronClearOrderRequestParamDbItemList() = default;
};
class CreateDataCronClearOrderRequestParamCronClearItemList : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};
  shared_ptr<string> columnName{};
  shared_ptr<long> remainDays{};
  shared_ptr<string> timeUnit{};
  shared_ptr<string> filterSQL{};

  CreateDataCronClearOrderRequestParamCronClearItemList() {}

  explicit CreateDataCronClearOrderRequestParamCronClearItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (remainDays) {
      res["RemainDays"] = boost::any(*remainDays);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    if (filterSQL) {
      res["FilterSQL"] = boost::any(*filterSQL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("RemainDays") != m.end() && !m["RemainDays"].empty()) {
      remainDays = make_shared<long>(boost::any_cast<long>(m["RemainDays"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["TimeUnit"]));
    }
    if (m.find("FilterSQL") != m.end() && !m["FilterSQL"].empty()) {
      filterSQL = make_shared<string>(boost::any_cast<string>(m["FilterSQL"]));
    }
  }


  virtual ~CreateDataCronClearOrderRequestParamCronClearItemList() = default;
};
class CreateDataCronClearOrderRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> classify{};
  shared_ptr<vector<CreateDataCronClearOrderRequestParamDbItemList>> dbItemList{};
  shared_ptr<string> cronFormat{};
  shared_ptr<vector<CreateDataCronClearOrderRequestParamCronClearItemList>> cronClearItemList{};
  shared_ptr<bool> specifyDuration{};
  shared_ptr<long> durationHour{};

  CreateDataCronClearOrderRequestParam() {}

  explicit CreateDataCronClearOrderRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classify) {
      res["Classify"] = boost::any(*classify);
    }
    if (dbItemList) {
      vector<boost::any> temp1;
      for(auto item1:*dbItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbItemList"] = boost::any(temp1);
    }
    if (cronFormat) {
      res["CronFormat"] = boost::any(*cronFormat);
    }
    if (cronClearItemList) {
      vector<boost::any> temp1;
      for(auto item1:*cronClearItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CronClearItemList"] = boost::any(temp1);
    }
    if (specifyDuration) {
      res["specifyDuration"] = boost::any(*specifyDuration);
    }
    if (durationHour) {
      res["DurationHour"] = boost::any(*durationHour);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classify") != m.end() && !m["Classify"].empty()) {
      classify = make_shared<string>(boost::any_cast<string>(m["Classify"]));
    }
    if (m.find("DbItemList") != m.end() && !m["DbItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["DbItemList"].type()) {
        vector<CreateDataCronClearOrderRequestParamDbItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDataCronClearOrderRequestParamDbItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbItemList = make_shared<vector<CreateDataCronClearOrderRequestParamDbItemList>>(expect1);
      }
    }
    if (m.find("CronFormat") != m.end() && !m["CronFormat"].empty()) {
      cronFormat = make_shared<string>(boost::any_cast<string>(m["CronFormat"]));
    }
    if (m.find("CronClearItemList") != m.end() && !m["CronClearItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["CronClearItemList"].type()) {
        vector<CreateDataCronClearOrderRequestParamCronClearItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CronClearItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDataCronClearOrderRequestParamCronClearItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cronClearItemList = make_shared<vector<CreateDataCronClearOrderRequestParamCronClearItemList>>(expect1);
      }
    }
    if (m.find("specifyDuration") != m.end() && !m["specifyDuration"].empty()) {
      specifyDuration = make_shared<bool>(boost::any_cast<bool>(m["specifyDuration"]));
    }
    if (m.find("DurationHour") != m.end() && !m["DurationHour"].empty()) {
      durationHour = make_shared<long>(boost::any_cast<long>(m["DurationHour"]));
    }
  }


  virtual ~CreateDataCronClearOrderRequestParam() = default;
};
class CreateDataCronClearOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<vector<long>> relatedUserList{};
  shared_ptr<CreateDataCronClearOrderRequestParam> param{};
  shared_ptr<string> attachmentKey{};
  shared_ptr<long> tid{};

  CreateDataCronClearOrderRequest() {}

  explicit CreateDataCronClearOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (relatedUserList) {
      res["RelatedUserList"] = boost::any(*relatedUserList);
    }
    if (param) {
      res["Param"] = param ? boost::any(param->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (attachmentKey) {
      res["AttachmentKey"] = boost::any(*attachmentKey);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("RelatedUserList") != m.end() && !m["RelatedUserList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RelatedUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelatedUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      relatedUserList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      if (typeid(map<string, boost::any>) == m["Param"].type()) {
        CreateDataCronClearOrderRequestParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Param"]));
        param = make_shared<CreateDataCronClearOrderRequestParam>(model1);
      }
    }
    if (m.find("AttachmentKey") != m.end() && !m["AttachmentKey"].empty()) {
      attachmentKey = make_shared<string>(boost::any_cast<string>(m["AttachmentKey"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~CreateDataCronClearOrderRequest() = default;
};
class CreateDataCronClearOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> relatedUserListShrink{};
  shared_ptr<string> paramShrink{};
  shared_ptr<string> attachmentKey{};
  shared_ptr<long> tid{};

  CreateDataCronClearOrderShrinkRequest() {}

  explicit CreateDataCronClearOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (relatedUserListShrink) {
      res["RelatedUserList"] = boost::any(*relatedUserListShrink);
    }
    if (paramShrink) {
      res["Param"] = boost::any(*paramShrink);
    }
    if (attachmentKey) {
      res["AttachmentKey"] = boost::any(*attachmentKey);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("RelatedUserList") != m.end() && !m["RelatedUserList"].empty()) {
      relatedUserListShrink = make_shared<string>(boost::any_cast<string>(m["RelatedUserList"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      paramShrink = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("AttachmentKey") != m.end() && !m["AttachmentKey"].empty()) {
      attachmentKey = make_shared<string>(boost::any_cast<string>(m["AttachmentKey"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~CreateDataCronClearOrderShrinkRequest() = default;
};
class CreateDataCronClearOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<long>> createOrderResult{};

  CreateDataCronClearOrderResponseBody() {}

  explicit CreateDataCronClearOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (createOrderResult) {
      res["CreateOrderResult"] = boost::any(*createOrderResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("CreateOrderResult") != m.end() && !m["CreateOrderResult"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CreateOrderResult"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CreateOrderResult"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      createOrderResult = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateDataCronClearOrderResponseBody() = default;
};
class CreateDataCronClearOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDataCronClearOrderResponseBody> body{};

  CreateDataCronClearOrderResponse() {}

  explicit CreateDataCronClearOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDataCronClearOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataCronClearOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataCronClearOrderResponse() = default;
};
class CreatePublishGroupTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> orderId{};
  shared_ptr<long> dbId{};
  shared_ptr<bool> logic{};
  shared_ptr<string> publishStrategy{};
  shared_ptr<string> planTime{};

  CreatePublishGroupTaskRequest() {}

  explicit CreatePublishGroupTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (publishStrategy) {
      res["PublishStrategy"] = boost::any(*publishStrategy);
    }
    if (planTime) {
      res["PlanTime"] = boost::any(*planTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("PublishStrategy") != m.end() && !m["PublishStrategy"].empty()) {
      publishStrategy = make_shared<string>(boost::any_cast<string>(m["PublishStrategy"]));
    }
    if (m.find("PlanTime") != m.end() && !m["PlanTime"].empty()) {
      planTime = make_shared<string>(boost::any_cast<string>(m["PlanTime"]));
    }
  }


  virtual ~CreatePublishGroupTaskRequest() = default;
};
class CreatePublishGroupTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  CreatePublishGroupTaskResponseBody() {}

  explicit CreatePublishGroupTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreatePublishGroupTaskResponseBody() = default;
};
class CreatePublishGroupTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreatePublishGroupTaskResponseBody> body{};

  CreatePublishGroupTaskResponse() {}

  explicit CreatePublishGroupTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePublishGroupTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePublishGroupTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePublishGroupTaskResponse() = default;
};
class GetDatabaseRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> host{};
  shared_ptr<long> port{};
  shared_ptr<string> sid{};
  shared_ptr<string> schemaName{};

  GetDatabaseRequest() {}

  explicit GetDatabaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~GetDatabaseRequest() = default;
};
class GetDatabaseResponseBodyDatabaseOwnerIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerIds{};

  GetDatabaseResponseBodyDatabaseOwnerIdList() {}

  explicit GetDatabaseResponseBodyDatabaseOwnerIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetDatabaseResponseBodyDatabaseOwnerIdList() = default;
};
class GetDatabaseResponseBodyDatabaseOwnerNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerNames{};

  GetDatabaseResponseBodyDatabaseOwnerNameList() {}

  explicit GetDatabaseResponseBodyDatabaseOwnerNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerNames) {
      res["OwnerNames"] = boost::any(*ownerNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerNames") != m.end() && !m["OwnerNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetDatabaseResponseBodyDatabaseOwnerNameList() = default;
};
class GetDatabaseResponseBodyDatabase : public Darabonba::Model {
public:
  shared_ptr<string> databaseId{};
  shared_ptr<string> host{};
  shared_ptr<string> catalogName{};
  shared_ptr<string> dbaName{};
  shared_ptr<string> state{};
  shared_ptr<string> dbaId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> port{};
  shared_ptr<string> envType{};
  shared_ptr<string> sid{};
  shared_ptr<GetDatabaseResponseBodyDatabaseOwnerIdList> ownerIdList{};
  shared_ptr<string> encoding{};
  shared_ptr<string> dbType{};
  shared_ptr<GetDatabaseResponseBodyDatabaseOwnerNameList> ownerNameList{};
  shared_ptr<string> searchName{};

  GetDatabaseResponseBodyDatabase() {}

  explicit GetDatabaseResponseBodyDatabase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseId) {
      res["DatabaseId"] = boost::any(*databaseId);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (catalogName) {
      res["CatalogName"] = boost::any(*catalogName);
    }
    if (dbaName) {
      res["DbaName"] = boost::any(*dbaName);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (dbaId) {
      res["DbaId"] = boost::any(*dbaId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (ownerIdList) {
      res["OwnerIdList"] = ownerIdList ? boost::any(ownerIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (encoding) {
      res["Encoding"] = boost::any(*encoding);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (ownerNameList) {
      res["OwnerNameList"] = ownerNameList ? boost::any(ownerNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseId") != m.end() && !m["DatabaseId"].empty()) {
      databaseId = make_shared<string>(boost::any_cast<string>(m["DatabaseId"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("CatalogName") != m.end() && !m["CatalogName"].empty()) {
      catalogName = make_shared<string>(boost::any_cast<string>(m["CatalogName"]));
    }
    if (m.find("DbaName") != m.end() && !m["DbaName"].empty()) {
      dbaName = make_shared<string>(boost::any_cast<string>(m["DbaName"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("DbaId") != m.end() && !m["DbaId"].empty()) {
      dbaId = make_shared<string>(boost::any_cast<string>(m["DbaId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("OwnerIdList") != m.end() && !m["OwnerIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerIdList"].type()) {
        GetDatabaseResponseBodyDatabaseOwnerIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerIdList"]));
        ownerIdList = make_shared<GetDatabaseResponseBodyDatabaseOwnerIdList>(model1);
      }
    }
    if (m.find("Encoding") != m.end() && !m["Encoding"].empty()) {
      encoding = make_shared<string>(boost::any_cast<string>(m["Encoding"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("OwnerNameList") != m.end() && !m["OwnerNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerNameList"].type()) {
        GetDatabaseResponseBodyDatabaseOwnerNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerNameList"]));
        ownerNameList = make_shared<GetDatabaseResponseBodyDatabaseOwnerNameList>(model1);
      }
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
  }


  virtual ~GetDatabaseResponseBodyDatabase() = default;
};
class GetDatabaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetDatabaseResponseBodyDatabase> database{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GetDatabaseResponseBody() {}

  explicit GetDatabaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (database) {
      res["Database"] = database ? boost::any(database->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      if (typeid(map<string, boost::any>) == m["Database"].type()) {
        GetDatabaseResponseBodyDatabase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Database"]));
        database = make_shared<GetDatabaseResponseBodyDatabase>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetDatabaseResponseBody() = default;
};
class GetDatabaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDatabaseResponseBody> body{};

  GetDatabaseResponse() {}

  explicit GetDatabaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDatabaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatabaseResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatabaseResponse() = default;
};
class GetOwnerApplyOrderDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<long> tid{};

  GetOwnerApplyOrderDetailRequest() {}

  explicit GetOwnerApplyOrderDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~GetOwnerApplyOrderDetailRequest() = default;
};
class GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail : public Darabonba::Model {
public:
  shared_ptr<string> searchName{};
  shared_ptr<string> dbType{};
  shared_ptr<string> envType{};
  shared_ptr<string> tableName{};
  shared_ptr<vector<long>> ownerIds{};
  shared_ptr<vector<string>> ownerNickNames{};

  GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail() {}

  explicit GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    if (ownerNickNames) {
      res["OwnerNickNames"] = boost::any(*ownerNickNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ownerIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("OwnerNickNames") != m.end() && !m["OwnerNickNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerNickNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerNickNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerNickNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail() = default;
};
class GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources : public Darabonba::Model {
public:
  shared_ptr<bool> logic{};
  shared_ptr<string> targetId{};
  shared_ptr<GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail> resourceDetail{};

  GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources() {}

  explicit GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (resourceDetail) {
      res["ResourceDetail"] = resourceDetail ? boost::any(resourceDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("ResourceDetail") != m.end() && !m["ResourceDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceDetail"].type()) {
        GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceDetail"]));
        resourceDetail = make_shared<GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResourcesResourceDetail>(model1);
      }
    }
  }


  virtual ~GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources() = default;
};
class GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail : public Darabonba::Model {
public:
  shared_ptr<string> applyType{};
  shared_ptr<vector<GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources>> resources{};

  GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail() {}

  explicit GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyType) {
      res["ApplyType"] = boost::any(*applyType);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyType") != m.end() && !m["ApplyType"].empty()) {
      applyType = make_shared<string>(boost::any_cast<string>(m["ApplyType"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetailResources>>(expect1);
      }
    }
  }


  virtual ~GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail() = default;
};
class GetOwnerApplyOrderDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail> ownerApplyOrderDetail{};

  GetOwnerApplyOrderDetailResponseBody() {}

  explicit GetOwnerApplyOrderDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (ownerApplyOrderDetail) {
      res["OwnerApplyOrderDetail"] = ownerApplyOrderDetail ? boost::any(ownerApplyOrderDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("OwnerApplyOrderDetail") != m.end() && !m["OwnerApplyOrderDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerApplyOrderDetail"].type()) {
        GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerApplyOrderDetail"]));
        ownerApplyOrderDetail = make_shared<GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail>(model1);
      }
    }
  }


  virtual ~GetOwnerApplyOrderDetailResponseBody() = default;
};
class GetOwnerApplyOrderDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOwnerApplyOrderDetailResponseBody> body{};

  GetOwnerApplyOrderDetailResponse() {}

  explicit GetOwnerApplyOrderDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOwnerApplyOrderDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOwnerApplyOrderDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetOwnerApplyOrderDetailResponse() = default;
};
class GetOpLogRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> module{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  GetOpLogRequest() {}

  explicit GetOpLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~GetOpLogRequest() = default;
};
class GetOpLogResponseBodyOpLogDetailsOpLogDetail : public Darabonba::Model {
public:
  shared_ptr<string> module{};
  shared_ptr<string> database{};
  shared_ptr<long> userId{};
  shared_ptr<string> opContent{};
  shared_ptr<string> userNick{};
  shared_ptr<long> orderId{};
  shared_ptr<string> opTime{};

  GetOpLogResponseBodyOpLogDetailsOpLogDetail() {}

  explicit GetOpLogResponseBodyOpLogDetailsOpLogDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (module) {
      res["Module"] = boost::any(*module);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (opContent) {
      res["OpContent"] = boost::any(*opContent);
    }
    if (userNick) {
      res["UserNick"] = boost::any(*userNick);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (opTime) {
      res["OpTime"] = boost::any(*opTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("OpContent") != m.end() && !m["OpContent"].empty()) {
      opContent = make_shared<string>(boost::any_cast<string>(m["OpContent"]));
    }
    if (m.find("UserNick") != m.end() && !m["UserNick"].empty()) {
      userNick = make_shared<string>(boost::any_cast<string>(m["UserNick"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OpTime") != m.end() && !m["OpTime"].empty()) {
      opTime = make_shared<string>(boost::any_cast<string>(m["OpTime"]));
    }
  }


  virtual ~GetOpLogResponseBodyOpLogDetailsOpLogDetail() = default;
};
class GetOpLogResponseBodyOpLogDetails : public Darabonba::Model {
public:
  shared_ptr<vector<GetOpLogResponseBodyOpLogDetailsOpLogDetail>> opLogDetail{};

  GetOpLogResponseBodyOpLogDetails() {}

  explicit GetOpLogResponseBodyOpLogDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (opLogDetail) {
      vector<boost::any> temp1;
      for(auto item1:*opLogDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OpLogDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpLogDetail") != m.end() && !m["OpLogDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["OpLogDetail"].type()) {
        vector<GetOpLogResponseBodyOpLogDetailsOpLogDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OpLogDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOpLogResponseBodyOpLogDetailsOpLogDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        opLogDetail = make_shared<vector<GetOpLogResponseBodyOpLogDetailsOpLogDetail>>(expect1);
      }
    }
  }


  virtual ~GetOpLogResponseBodyOpLogDetails() = default;
};
class GetOpLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetOpLogResponseBodyOpLogDetails> opLogDetails{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GetOpLogResponseBody() {}

  explicit GetOpLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (opLogDetails) {
      res["OpLogDetails"] = opLogDetails ? boost::any(opLogDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("OpLogDetails") != m.end() && !m["OpLogDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpLogDetails"].type()) {
        GetOpLogResponseBodyOpLogDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpLogDetails"]));
        opLogDetails = make_shared<GetOpLogResponseBodyOpLogDetails>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetOpLogResponseBody() = default;
};
class GetOpLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOpLogResponseBody> body{};

  GetOpLogResponse() {}

  explicit GetOpLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOpLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOpLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetOpLogResponse() = default;
};
class SearchTableRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> searchKey{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> envType{};
  shared_ptr<string> searchRange{};
  shared_ptr<string> searchTarget{};
  shared_ptr<string> dbType{};
  shared_ptr<bool> returnGuid{};

  SearchTableRequest() {}

  explicit SearchTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (searchKey) {
      res["SearchKey"] = boost::any(*searchKey);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (searchRange) {
      res["SearchRange"] = boost::any(*searchRange);
    }
    if (searchTarget) {
      res["SearchTarget"] = boost::any(*searchTarget);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (returnGuid) {
      res["ReturnGuid"] = boost::any(*returnGuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("SearchKey") != m.end() && !m["SearchKey"].empty()) {
      searchKey = make_shared<string>(boost::any_cast<string>(m["SearchKey"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("SearchRange") != m.end() && !m["SearchRange"].empty()) {
      searchRange = make_shared<string>(boost::any_cast<string>(m["SearchRange"]));
    }
    if (m.find("SearchTarget") != m.end() && !m["SearchTarget"].empty()) {
      searchTarget = make_shared<string>(boost::any_cast<string>(m["SearchTarget"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("ReturnGuid") != m.end() && !m["ReturnGuid"].empty()) {
      returnGuid = make_shared<bool>(boost::any_cast<bool>(m["ReturnGuid"]));
    }
  }


  virtual ~SearchTableRequest() = default;
};
class SearchTableResponseBodySearchTableListSearchTableOwnerIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerIds{};

  SearchTableResponseBodySearchTableListSearchTableOwnerIdList() {}

  explicit SearchTableResponseBodySearchTableListSearchTableOwnerIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchTableResponseBodySearchTableListSearchTableOwnerIdList() = default;
};
class SearchTableResponseBodySearchTableListSearchTableOwnerNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerNames{};

  SearchTableResponseBodySearchTableListSearchTableOwnerNameList() {}

  explicit SearchTableResponseBodySearchTableListSearchTableOwnerNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerNames) {
      res["OwnerNames"] = boost::any(*ownerNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerNames") != m.end() && !m["OwnerNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SearchTableResponseBodySearchTableListSearchTableOwnerNameList() = default;
};
class SearchTableResponseBodySearchTableListSearchTable : public Darabonba::Model {
public:
  shared_ptr<string> databaseId{};
  shared_ptr<string> tableName{};
  shared_ptr<string> DBSearchName{};
  shared_ptr<bool> logic{};
  shared_ptr<string> envType{};
  shared_ptr<string> dbName{};
  shared_ptr<SearchTableResponseBodySearchTableListSearchTableOwnerIdList> ownerIdList{};
  shared_ptr<string> description{};
  shared_ptr<string> encoding{};
  shared_ptr<string> dbType{};
  shared_ptr<SearchTableResponseBodySearchTableListSearchTableOwnerNameList> ownerNameList{};
  shared_ptr<string> tableSchemaName{};
  shared_ptr<string> tableGuid{};
  shared_ptr<string> engine{};
  shared_ptr<string> tableId{};

  SearchTableResponseBodySearchTableListSearchTable() {}

  explicit SearchTableResponseBodySearchTableListSearchTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseId) {
      res["DatabaseId"] = boost::any(*databaseId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (DBSearchName) {
      res["DBSearchName"] = boost::any(*DBSearchName);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (ownerIdList) {
      res["OwnerIdList"] = ownerIdList ? boost::any(ownerIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encoding) {
      res["Encoding"] = boost::any(*encoding);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (ownerNameList) {
      res["OwnerNameList"] = ownerNameList ? boost::any(ownerNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableSchemaName) {
      res["TableSchemaName"] = boost::any(*tableSchemaName);
    }
    if (tableGuid) {
      res["TableGuid"] = boost::any(*tableGuid);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseId") != m.end() && !m["DatabaseId"].empty()) {
      databaseId = make_shared<string>(boost::any_cast<string>(m["DatabaseId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("DBSearchName") != m.end() && !m["DBSearchName"].empty()) {
      DBSearchName = make_shared<string>(boost::any_cast<string>(m["DBSearchName"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("OwnerIdList") != m.end() && !m["OwnerIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerIdList"].type()) {
        SearchTableResponseBodySearchTableListSearchTableOwnerIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerIdList"]));
        ownerIdList = make_shared<SearchTableResponseBodySearchTableListSearchTableOwnerIdList>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Encoding") != m.end() && !m["Encoding"].empty()) {
      encoding = make_shared<string>(boost::any_cast<string>(m["Encoding"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("OwnerNameList") != m.end() && !m["OwnerNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerNameList"].type()) {
        SearchTableResponseBodySearchTableListSearchTableOwnerNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerNameList"]));
        ownerNameList = make_shared<SearchTableResponseBodySearchTableListSearchTableOwnerNameList>(model1);
      }
    }
    if (m.find("TableSchemaName") != m.end() && !m["TableSchemaName"].empty()) {
      tableSchemaName = make_shared<string>(boost::any_cast<string>(m["TableSchemaName"]));
    }
    if (m.find("TableGuid") != m.end() && !m["TableGuid"].empty()) {
      tableGuid = make_shared<string>(boost::any_cast<string>(m["TableGuid"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<string>(boost::any_cast<string>(m["TableId"]));
    }
  }


  virtual ~SearchTableResponseBodySearchTableListSearchTable() = default;
};
class SearchTableResponseBodySearchTableList : public Darabonba::Model {
public:
  shared_ptr<vector<SearchTableResponseBodySearchTableListSearchTable>> searchTable{};

  SearchTableResponseBodySearchTableList() {}

  explicit SearchTableResponseBodySearchTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (searchTable) {
      vector<boost::any> temp1;
      for(auto item1:*searchTable){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SearchTable"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SearchTable") != m.end() && !m["SearchTable"].empty()) {
      if (typeid(vector<boost::any>) == m["SearchTable"].type()) {
        vector<SearchTableResponseBodySearchTableListSearchTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SearchTable"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchTableResponseBodySearchTableListSearchTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        searchTable = make_shared<vector<SearchTableResponseBodySearchTableListSearchTable>>(expect1);
      }
    }
  }


  virtual ~SearchTableResponseBodySearchTableList() = default;
};
class SearchTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<SearchTableResponseBodySearchTableList> searchTableList{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  SearchTableResponseBody() {}

  explicit SearchTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (searchTableList) {
      res["SearchTableList"] = searchTableList ? boost::any(searchTableList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SearchTableList") != m.end() && !m["SearchTableList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SearchTableList"].type()) {
        SearchTableResponseBodySearchTableList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SearchTableList"]));
        searchTableList = make_shared<SearchTableResponseBodySearchTableList>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SearchTableResponseBody() = default;
};
class SearchTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SearchTableResponseBody> body{};

  SearchTableResponse() {}

  explicit SearchTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchTableResponseBody>(model1);
      }
    }
  }


  virtual ~SearchTableResponse() = default;
};
class ListDBTaskSQLJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> DBTaskGroupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> tid{};

  ListDBTaskSQLJobRequest() {}

  explicit ListDBTaskSQLJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBTaskGroupId) {
      res["DBTaskGroupId"] = boost::any(*DBTaskGroupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBTaskGroupId") != m.end() && !m["DBTaskGroupId"].empty()) {
      DBTaskGroupId = make_shared<long>(boost::any_cast<long>(m["DBTaskGroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~ListDBTaskSQLJobRequest() = default;
};
class ListDBTaskSQLJobResponseBodyDBTaskSQLJobList : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};
  shared_ptr<string> jobType{};
  shared_ptr<string> comment{};
  shared_ptr<string> dbSearchName{};
  shared_ptr<long> dbId{};
  shared_ptr<bool> logic{};
  shared_ptr<string> createTime{};
  shared_ptr<string> lastExecTime{};
  shared_ptr<long> dbTaskGroupId{};
  shared_ptr<string> status{};
  shared_ptr<bool> transactional{};

  ListDBTaskSQLJobResponseBodyDBTaskSQLJobList() {}

  explicit ListDBTaskSQLJobResponseBodyDBTaskSQLJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (dbSearchName) {
      res["DbSearchName"] = boost::any(*dbSearchName);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastExecTime) {
      res["LastExecTime"] = boost::any(*lastExecTime);
    }
    if (dbTaskGroupId) {
      res["DbTaskGroupId"] = boost::any(*dbTaskGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transactional) {
      res["Transactional"] = boost::any(*transactional);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("DbSearchName") != m.end() && !m["DbSearchName"].empty()) {
      dbSearchName = make_shared<string>(boost::any_cast<string>(m["DbSearchName"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("LastExecTime") != m.end() && !m["LastExecTime"].empty()) {
      lastExecTime = make_shared<string>(boost::any_cast<string>(m["LastExecTime"]));
    }
    if (m.find("DbTaskGroupId") != m.end() && !m["DbTaskGroupId"].empty()) {
      dbTaskGroupId = make_shared<long>(boost::any_cast<long>(m["DbTaskGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Transactional") != m.end() && !m["Transactional"].empty()) {
      transactional = make_shared<bool>(boost::any_cast<bool>(m["Transactional"]));
    }
  }


  virtual ~ListDBTaskSQLJobResponseBodyDBTaskSQLJobList() = default;
};
class ListDBTaskSQLJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<ListDBTaskSQLJobResponseBodyDBTaskSQLJobList>> DBTaskSQLJobList{};
  shared_ptr<long> totalCount{};

  ListDBTaskSQLJobResponseBody() {}

  explicit ListDBTaskSQLJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (DBTaskSQLJobList) {
      vector<boost::any> temp1;
      for(auto item1:*DBTaskSQLJobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBTaskSQLJobList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DBTaskSQLJobList") != m.end() && !m["DBTaskSQLJobList"].empty()) {
      if (typeid(vector<boost::any>) == m["DBTaskSQLJobList"].type()) {
        vector<ListDBTaskSQLJobResponseBodyDBTaskSQLJobList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBTaskSQLJobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDBTaskSQLJobResponseBodyDBTaskSQLJobList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBTaskSQLJobList = make_shared<vector<ListDBTaskSQLJobResponseBodyDBTaskSQLJobList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDBTaskSQLJobResponseBody() = default;
};
class ListDBTaskSQLJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDBTaskSQLJobResponseBody> body{};

  ListDBTaskSQLJobResponse() {}

  explicit ListDBTaskSQLJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDBTaskSQLJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDBTaskSQLJobResponseBody>(model1);
      }
    }
  }


  virtual ~ListDBTaskSQLJobResponse() = default;
};
class DeleteUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> uid{};

  DeleteUserRequest() {}

  explicit DeleteUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~DeleteUserRequest() = default;
};
class DeleteUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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
class GetDataCronClearTaskDetailListRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> tid{};

  GetDataCronClearTaskDetailListRequest() {}

  explicit GetDataCronClearTaskDetailListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~GetDataCronClearTaskDetailListRequest() = default;
};
class GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList : public Darabonba::Model {
public:
  shared_ptr<long> DBTaskGroupId{};
  shared_ptr<string> jobStatus{};
  shared_ptr<long> actualAffectRows{};
  shared_ptr<string> createTime{};

  GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList() {}

  explicit GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBTaskGroupId) {
      res["DBTaskGroupId"] = boost::any(*DBTaskGroupId);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (actualAffectRows) {
      res["ActualAffectRows"] = boost::any(*actualAffectRows);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBTaskGroupId") != m.end() && !m["DBTaskGroupId"].empty()) {
      DBTaskGroupId = make_shared<long>(boost::any_cast<long>(m["DBTaskGroupId"]));
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("ActualAffectRows") != m.end() && !m["ActualAffectRows"].empty()) {
      actualAffectRows = make_shared<long>(boost::any_cast<long>(m["ActualAffectRows"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
  }


  virtual ~GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList() = default;
};
class GetDataCronClearTaskDetailListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList>> dataCronClearTaskDetailList{};
  shared_ptr<long> totalCount{};

  GetDataCronClearTaskDetailListResponseBody() {}

  explicit GetDataCronClearTaskDetailListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (dataCronClearTaskDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*dataCronClearTaskDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataCronClearTaskDetailList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DataCronClearTaskDetailList") != m.end() && !m["DataCronClearTaskDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataCronClearTaskDetailList"].type()) {
        vector<GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataCronClearTaskDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataCronClearTaskDetailList = make_shared<vector<GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetDataCronClearTaskDetailListResponseBody() = default;
};
class GetDataCronClearTaskDetailListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDataCronClearTaskDetailListResponseBody> body{};

  GetDataCronClearTaskDetailListResponse() {}

  explicit GetDataCronClearTaskDetailListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataCronClearTaskDetailListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataCronClearTaskDetailListResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataCronClearTaskDetailListResponse() = default;
};
class GetStructSyncJobAnalyzeResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> compareType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> tid{};

  GetStructSyncJobAnalyzeResultRequest() {}

  explicit GetStructSyncJobAnalyzeResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (compareType) {
      res["CompareType"] = boost::any(*compareType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("CompareType") != m.end() && !m["CompareType"].empty()) {
      compareType = make_shared<string>(boost::any_cast<string>(m["CompareType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~GetStructSyncJobAnalyzeResultRequest() = default;
};
class GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList : public Darabonba::Model {
public:
  shared_ptr<string> compareType{};
  shared_ptr<long> count{};

  GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList() {}

  explicit GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compareType) {
      res["CompareType"] = boost::any(*compareType);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompareType") != m.end() && !m["CompareType"].empty()) {
      compareType = make_shared<string>(boost::any_cast<string>(m["CompareType"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList() = default;
};
class GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList : public Darabonba::Model {
public:
  shared_ptr<string> sourceTableName{};
  shared_ptr<string> targetTableName{};
  shared_ptr<string> script{};

  GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList() {}

  explicit GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceTableName) {
      res["SourceTableName"] = boost::any(*sourceTableName);
    }
    if (targetTableName) {
      res["TargetTableName"] = boost::any(*targetTableName);
    }
    if (script) {
      res["Script"] = boost::any(*script);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceTableName") != m.end() && !m["SourceTableName"].empty()) {
      sourceTableName = make_shared<string>(boost::any_cast<string>(m["SourceTableName"]));
    }
    if (m.find("TargetTableName") != m.end() && !m["TargetTableName"].empty()) {
      targetTableName = make_shared<string>(boost::any_cast<string>(m["TargetTableName"]));
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      script = make_shared<string>(boost::any_cast<string>(m["Script"]));
    }
  }


  virtual ~GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList() = default;
};
class GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList>> summaryList{};
  shared_ptr<vector<GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList>> resultList{};

  GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult() {}

  explicit GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (summaryList) {
      vector<boost::any> temp1;
      for(auto item1:*summaryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SummaryList"] = boost::any(temp1);
    }
    if (resultList) {
      vector<boost::any> temp1;
      for(auto item1:*resultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SummaryList") != m.end() && !m["SummaryList"].empty()) {
      if (typeid(vector<boost::any>) == m["SummaryList"].type()) {
        vector<GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SummaryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        summaryList = make_shared<vector<GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultSummaryList>>(expect1);
      }
    }
    if (m.find("ResultList") != m.end() && !m["ResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultList"].type()) {
        vector<GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultList = make_shared<vector<GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResultResultList>>(expect1);
      }
    }
  }


  virtual ~GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult() = default;
};
class GetStructSyncJobAnalyzeResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult> structSyncJobAnalyzeResult{};

  GetStructSyncJobAnalyzeResultResponseBody() {}

  explicit GetStructSyncJobAnalyzeResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (structSyncJobAnalyzeResult) {
      res["StructSyncJobAnalyzeResult"] = structSyncJobAnalyzeResult ? boost::any(structSyncJobAnalyzeResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("StructSyncJobAnalyzeResult") != m.end() && !m["StructSyncJobAnalyzeResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["StructSyncJobAnalyzeResult"].type()) {
        GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StructSyncJobAnalyzeResult"]));
        structSyncJobAnalyzeResult = make_shared<GetStructSyncJobAnalyzeResultResponseBodyStructSyncJobAnalyzeResult>(model1);
      }
    }
  }


  virtual ~GetStructSyncJobAnalyzeResultResponseBody() = default;
};
class GetStructSyncJobAnalyzeResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetStructSyncJobAnalyzeResultResponseBody> body{};

  GetStructSyncJobAnalyzeResultResponse() {}

  explicit GetStructSyncJobAnalyzeResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStructSyncJobAnalyzeResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStructSyncJobAnalyzeResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetStructSyncJobAnalyzeResultResponse() = default;
};
class ApproveOrderRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> workflowInstanceId{};
  shared_ptr<string> approvalType{};
  shared_ptr<string> comment{};

  ApproveOrderRequest() {}

  explicit ApproveOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (workflowInstanceId) {
      res["WorkflowInstanceId"] = boost::any(*workflowInstanceId);
    }
    if (approvalType) {
      res["ApprovalType"] = boost::any(*approvalType);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("WorkflowInstanceId") != m.end() && !m["WorkflowInstanceId"].empty()) {
      workflowInstanceId = make_shared<long>(boost::any_cast<long>(m["WorkflowInstanceId"]));
    }
    if (m.find("ApprovalType") != m.end() && !m["ApprovalType"].empty()) {
      approvalType = make_shared<string>(boost::any_cast<string>(m["ApprovalType"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
  }


  virtual ~ApproveOrderRequest() = default;
};
class ApproveOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  ApproveOrderResponseBody() {}

  explicit ApproveOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ApproveOrderResponseBody() = default;
};
class ApproveOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ApproveOrderResponseBody> body{};

  ApproveOrderResponse() {}

  explicit ApproveOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApproveOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApproveOrderResponseBody>(model1);
      }
    }
  }


  virtual ~ApproveOrderResponse() = default;
};
class GetDataCorrectTaskDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<long> tid{};

  GetDataCorrectTaskDetailRequest() {}

  explicit GetDataCorrectTaskDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~GetDataCorrectTaskDetailRequest() = default;
};
class GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail : public Darabonba::Model {
public:
  shared_ptr<long> DBTaskGroupId{};
  shared_ptr<string> jobStatus{};
  shared_ptr<long> actualAffectRows{};
  shared_ptr<string> createTime{};

  GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail() {}

  explicit GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBTaskGroupId) {
      res["DBTaskGroupId"] = boost::any(*DBTaskGroupId);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (actualAffectRows) {
      res["ActualAffectRows"] = boost::any(*actualAffectRows);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBTaskGroupId") != m.end() && !m["DBTaskGroupId"].empty()) {
      DBTaskGroupId = make_shared<long>(boost::any_cast<long>(m["DBTaskGroupId"]));
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("ActualAffectRows") != m.end() && !m["ActualAffectRows"].empty()) {
      actualAffectRows = make_shared<long>(boost::any_cast<long>(m["ActualAffectRows"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
  }


  virtual ~GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail() = default;
};
class GetDataCorrectTaskDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail> dataCorrectTaskDetail{};

  GetDataCorrectTaskDetailResponseBody() {}

  explicit GetDataCorrectTaskDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (dataCorrectTaskDetail) {
      res["DataCorrectTaskDetail"] = dataCorrectTaskDetail ? boost::any(dataCorrectTaskDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("DataCorrectTaskDetail") != m.end() && !m["DataCorrectTaskDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataCorrectTaskDetail"].type()) {
        GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataCorrectTaskDetail"]));
        dataCorrectTaskDetail = make_shared<GetDataCorrectTaskDetailResponseBodyDataCorrectTaskDetail>(model1);
      }
    }
  }


  virtual ~GetDataCorrectTaskDetailResponseBody() = default;
};
class GetDataCorrectTaskDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDataCorrectTaskDetailResponseBody> body{};

  GetDataCorrectTaskDetailResponse() {}

  explicit GetDataCorrectTaskDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataCorrectTaskDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataCorrectTaskDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataCorrectTaskDetailResponse() = default;
};
class CreateUploadFileJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSource{};
  shared_ptr<string> fileName{};
  shared_ptr<string> uploadURL{};
  shared_ptr<long> tid{};

  CreateUploadFileJobRequest() {}

  explicit CreateUploadFileJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSource) {
      res["FileSource"] = boost::any(*fileSource);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (uploadURL) {
      res["UploadURL"] = boost::any(*uploadURL);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSource") != m.end() && !m["FileSource"].empty()) {
      fileSource = make_shared<string>(boost::any_cast<string>(m["FileSource"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("UploadURL") != m.end() && !m["UploadURL"].empty()) {
      uploadURL = make_shared<string>(boost::any_cast<string>(m["UploadURL"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~CreateUploadFileJobRequest() = default;
};
class CreateUploadFileJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> jobKey{};

  CreateUploadFileJobResponseBody() {}

  explicit CreateUploadFileJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (jobKey) {
      res["JobKey"] = boost::any(*jobKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("JobKey") != m.end() && !m["JobKey"].empty()) {
      jobKey = make_shared<string>(boost::any_cast<string>(m["JobKey"]));
    }
  }


  virtual ~CreateUploadFileJobResponseBody() = default;
};
class CreateUploadFileJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateUploadFileJobResponseBody> body{};

  CreateUploadFileJobResponse() {}

  explicit CreateUploadFileJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUploadFileJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUploadFileJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUploadFileJobResponse() = default;
};
class ListLogicDatabasesRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListLogicDatabasesRequest() {}

  explicit ListLogicDatabasesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListLogicDatabasesRequest() = default;
};
class ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerIds{};

  ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList() {}

  explicit ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList() = default;
};
class ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerNames{};

  ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList() {}

  explicit ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerNames) {
      res["OwnerNames"] = boost::any(*ownerNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerNames") != m.end() && !m["OwnerNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList() = default;
};
class ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase : public Darabonba::Model {
public:
  shared_ptr<string> databaseId{};
  shared_ptr<ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList> ownerIdList{};
  shared_ptr<string> dbType{};
  shared_ptr<ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList> ownerNameList{};
  shared_ptr<bool> logic{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> searchName{};
  shared_ptr<string> envType{};

  ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase() {}

  explicit ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseId) {
      res["DatabaseId"] = boost::any(*databaseId);
    }
    if (ownerIdList) {
      res["OwnerIdList"] = ownerIdList ? boost::any(ownerIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (ownerNameList) {
      res["OwnerNameList"] = ownerNameList ? boost::any(ownerNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseId") != m.end() && !m["DatabaseId"].empty()) {
      databaseId = make_shared<string>(boost::any_cast<string>(m["DatabaseId"]));
    }
    if (m.find("OwnerIdList") != m.end() && !m["OwnerIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerIdList"].type()) {
        ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerIdList"]));
        ownerIdList = make_shared<ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList>(model1);
      }
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("OwnerNameList") != m.end() && !m["OwnerNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerNameList"].type()) {
        ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerNameList"]));
        ownerNameList = make_shared<ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList>(model1);
      }
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
  }


  virtual ~ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase() = default;
};
class ListLogicDatabasesResponseBodyLogicDatabaseList : public Darabonba::Model {
public:
  shared_ptr<vector<ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase>> logicDatabase{};

  ListLogicDatabasesResponseBodyLogicDatabaseList() {}

  explicit ListLogicDatabasesResponseBodyLogicDatabaseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicDatabase) {
      vector<boost::any> temp1;
      for(auto item1:*logicDatabase){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogicDatabase"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicDatabase") != m.end() && !m["LogicDatabase"].empty()) {
      if (typeid(vector<boost::any>) == m["LogicDatabase"].type()) {
        vector<ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogicDatabase"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logicDatabase = make_shared<vector<ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase>>(expect1);
      }
    }
  }


  virtual ~ListLogicDatabasesResponseBodyLogicDatabaseList() = default;
};
class ListLogicDatabasesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<ListLogicDatabasesResponseBodyLogicDatabaseList> logicDatabaseList{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  ListLogicDatabasesResponseBody() {}

  explicit ListLogicDatabasesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (logicDatabaseList) {
      res["LogicDatabaseList"] = logicDatabaseList ? boost::any(logicDatabaseList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("LogicDatabaseList") != m.end() && !m["LogicDatabaseList"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogicDatabaseList"].type()) {
        ListLogicDatabasesResponseBodyLogicDatabaseList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogicDatabaseList"]));
        logicDatabaseList = make_shared<ListLogicDatabasesResponseBodyLogicDatabaseList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListLogicDatabasesResponseBody() = default;
};
class ListLogicDatabasesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListLogicDatabasesResponseBody> body{};

  ListLogicDatabasesResponse() {}

  explicit ListLogicDatabasesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLogicDatabasesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLogicDatabasesResponseBody>(model1);
      }
    }
  }


  virtual ~ListLogicDatabasesResponse() = default;
};
class CreateDataImportOrderRequestParamDbItemList : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<bool> logic{};

  CreateDataImportOrderRequestParamDbItemList() {}

  explicit CreateDataImportOrderRequestParamDbItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
  }


  virtual ~CreateDataImportOrderRequestParamDbItemList() = default;
};
class CreateDataImportOrderRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> classify{};
  shared_ptr<string> attachmentName{};
  shared_ptr<vector<CreateDataImportOrderRequestParamDbItemList>> dbItemList{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileEncoding{};
  shared_ptr<string> tableName{};
  shared_ptr<string> insertType{};
  shared_ptr<bool> csvFirstRowIsColumnDef{};
  shared_ptr<bool> ignoreError{};
  shared_ptr<string> importMode{};
  shared_ptr<string> rollbackSQL{};
  shared_ptr<string> rollbackAttachmentName{};
  shared_ptr<string> rollbackSqlType{};

  CreateDataImportOrderRequestParam() {}

  explicit CreateDataImportOrderRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classify) {
      res["Classify"] = boost::any(*classify);
    }
    if (attachmentName) {
      res["AttachmentName"] = boost::any(*attachmentName);
    }
    if (dbItemList) {
      vector<boost::any> temp1;
      for(auto item1:*dbItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbItemList"] = boost::any(temp1);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileEncoding) {
      res["FileEncoding"] = boost::any(*fileEncoding);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (insertType) {
      res["InsertType"] = boost::any(*insertType);
    }
    if (csvFirstRowIsColumnDef) {
      res["CsvFirstRowIsColumnDef"] = boost::any(*csvFirstRowIsColumnDef);
    }
    if (ignoreError) {
      res["IgnoreError"] = boost::any(*ignoreError);
    }
    if (importMode) {
      res["ImportMode"] = boost::any(*importMode);
    }
    if (rollbackSQL) {
      res["RollbackSQL"] = boost::any(*rollbackSQL);
    }
    if (rollbackAttachmentName) {
      res["RollbackAttachmentName"] = boost::any(*rollbackAttachmentName);
    }
    if (rollbackSqlType) {
      res["RollbackSqlType"] = boost::any(*rollbackSqlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classify") != m.end() && !m["Classify"].empty()) {
      classify = make_shared<string>(boost::any_cast<string>(m["Classify"]));
    }
    if (m.find("AttachmentName") != m.end() && !m["AttachmentName"].empty()) {
      attachmentName = make_shared<string>(boost::any_cast<string>(m["AttachmentName"]));
    }
    if (m.find("DbItemList") != m.end() && !m["DbItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["DbItemList"].type()) {
        vector<CreateDataImportOrderRequestParamDbItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDataImportOrderRequestParamDbItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbItemList = make_shared<vector<CreateDataImportOrderRequestParamDbItemList>>(expect1);
      }
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileEncoding") != m.end() && !m["FileEncoding"].empty()) {
      fileEncoding = make_shared<string>(boost::any_cast<string>(m["FileEncoding"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("InsertType") != m.end() && !m["InsertType"].empty()) {
      insertType = make_shared<string>(boost::any_cast<string>(m["InsertType"]));
    }
    if (m.find("CsvFirstRowIsColumnDef") != m.end() && !m["CsvFirstRowIsColumnDef"].empty()) {
      csvFirstRowIsColumnDef = make_shared<bool>(boost::any_cast<bool>(m["CsvFirstRowIsColumnDef"]));
    }
    if (m.find("IgnoreError") != m.end() && !m["IgnoreError"].empty()) {
      ignoreError = make_shared<bool>(boost::any_cast<bool>(m["IgnoreError"]));
    }
    if (m.find("ImportMode") != m.end() && !m["ImportMode"].empty()) {
      importMode = make_shared<string>(boost::any_cast<string>(m["ImportMode"]));
    }
    if (m.find("RollbackSQL") != m.end() && !m["RollbackSQL"].empty()) {
      rollbackSQL = make_shared<string>(boost::any_cast<string>(m["RollbackSQL"]));
    }
    if (m.find("RollbackAttachmentName") != m.end() && !m["RollbackAttachmentName"].empty()) {
      rollbackAttachmentName = make_shared<string>(boost::any_cast<string>(m["RollbackAttachmentName"]));
    }
    if (m.find("RollbackSqlType") != m.end() && !m["RollbackSqlType"].empty()) {
      rollbackSqlType = make_shared<string>(boost::any_cast<string>(m["RollbackSqlType"]));
    }
  }


  virtual ~CreateDataImportOrderRequestParam() = default;
};
class CreateDataImportOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<vector<long>> relatedUserList{};
  shared_ptr<CreateDataImportOrderRequestParam> param{};
  shared_ptr<string> attachmentKey{};
  shared_ptr<long> tid{};

  CreateDataImportOrderRequest() {}

  explicit CreateDataImportOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (relatedUserList) {
      res["RelatedUserList"] = boost::any(*relatedUserList);
    }
    if (param) {
      res["Param"] = param ? boost::any(param->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (attachmentKey) {
      res["AttachmentKey"] = boost::any(*attachmentKey);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("RelatedUserList") != m.end() && !m["RelatedUserList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RelatedUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelatedUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      relatedUserList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      if (typeid(map<string, boost::any>) == m["Param"].type()) {
        CreateDataImportOrderRequestParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Param"]));
        param = make_shared<CreateDataImportOrderRequestParam>(model1);
      }
    }
    if (m.find("AttachmentKey") != m.end() && !m["AttachmentKey"].empty()) {
      attachmentKey = make_shared<string>(boost::any_cast<string>(m["AttachmentKey"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~CreateDataImportOrderRequest() = default;
};
class CreateDataImportOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> relatedUserListShrink{};
  shared_ptr<string> paramShrink{};
  shared_ptr<string> attachmentKey{};
  shared_ptr<long> tid{};

  CreateDataImportOrderShrinkRequest() {}

  explicit CreateDataImportOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (relatedUserListShrink) {
      res["RelatedUserList"] = boost::any(*relatedUserListShrink);
    }
    if (paramShrink) {
      res["Param"] = boost::any(*paramShrink);
    }
    if (attachmentKey) {
      res["AttachmentKey"] = boost::any(*attachmentKey);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("RelatedUserList") != m.end() && !m["RelatedUserList"].empty()) {
      relatedUserListShrink = make_shared<string>(boost::any_cast<string>(m["RelatedUserList"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      paramShrink = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("AttachmentKey") != m.end() && !m["AttachmentKey"].empty()) {
      attachmentKey = make_shared<string>(boost::any_cast<string>(m["AttachmentKey"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~CreateDataImportOrderShrinkRequest() = default;
};
class CreateDataImportOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<long>> createOrderResult{};

  CreateDataImportOrderResponseBody() {}

  explicit CreateDataImportOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (createOrderResult) {
      res["CreateOrderResult"] = boost::any(*createOrderResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("CreateOrderResult") != m.end() && !m["CreateOrderResult"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CreateOrderResult"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CreateOrderResult"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      createOrderResult = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateDataImportOrderResponseBody() = default;
};
class CreateDataImportOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDataImportOrderResponseBody> body{};

  CreateDataImportOrderResponse() {}

  explicit CreateDataImportOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDataImportOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataImportOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataImportOrderResponse() = default;
};
class CloseOrderRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> orderId{};
  shared_ptr<string> closeReason{};

  CloseOrderRequest() {}

  explicit CloseOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (closeReason) {
      res["CloseReason"] = boost::any(*closeReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("CloseReason") != m.end() && !m["CloseReason"].empty()) {
      closeReason = make_shared<string>(boost::any_cast<string>(m["CloseReason"]));
    }
  }


  virtual ~CloseOrderRequest() = default;
};
class CloseOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  CloseOrderResponseBody() {}

  explicit CloseOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CloseOrderResponseBody() = default;
};
class CloseOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CloseOrderResponseBody> body{};

  CloseOrderResponse() {}

  explicit CloseOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloseOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CloseOrderResponse() = default;
};
class SyncInstanceMetaRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> ignoreTable{};

  SyncInstanceMetaRequest() {}

  explicit SyncInstanceMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ignoreTable) {
      res["IgnoreTable"] = boost::any(*ignoreTable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IgnoreTable") != m.end() && !m["IgnoreTable"].empty()) {
      ignoreTable = make_shared<bool>(boost::any_cast<bool>(m["IgnoreTable"]));
    }
  }


  virtual ~SyncInstanceMetaRequest() = default;
};
class SyncInstanceMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  SyncInstanceMetaResponseBody() {}

  explicit SyncInstanceMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SyncInstanceMetaResponseBody() = default;
};
class SyncInstanceMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SyncInstanceMetaResponseBody> body{};

  SyncInstanceMetaResponse() {}

  explicit SyncInstanceMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncInstanceMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncInstanceMetaResponseBody>(model1);
      }
    }
  }


  virtual ~SyncInstanceMetaResponse() = default;
};
class ListOrdersRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> pluginType{};
  shared_ptr<string> orderResultType{};
  shared_ptr<string> searchDateType{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> searchContent{};
  shared_ptr<string> orderStatus{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  ListOrdersRequest() {}

  explicit ListOrdersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (pluginType) {
      res["PluginType"] = boost::any(*pluginType);
    }
    if (orderResultType) {
      res["OrderResultType"] = boost::any(*orderResultType);
    }
    if (searchDateType) {
      res["SearchDateType"] = boost::any(*searchDateType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (searchContent) {
      res["SearchContent"] = boost::any(*searchContent);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("PluginType") != m.end() && !m["PluginType"].empty()) {
      pluginType = make_shared<string>(boost::any_cast<string>(m["PluginType"]));
    }
    if (m.find("OrderResultType") != m.end() && !m["OrderResultType"].empty()) {
      orderResultType = make_shared<string>(boost::any_cast<string>(m["OrderResultType"]));
    }
    if (m.find("SearchDateType") != m.end() && !m["SearchDateType"].empty()) {
      searchDateType = make_shared<string>(boost::any_cast<string>(m["SearchDateType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("SearchContent") != m.end() && !m["SearchContent"].empty()) {
      searchContent = make_shared<string>(boost::any_cast<string>(m["SearchContent"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["OrderStatus"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~ListOrdersRequest() = default;
};
class ListOrdersResponseBodyOrdersOrder : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> lastModifyTime{};
  shared_ptr<string> statusCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> committer{};
  shared_ptr<long> committerId{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> pluginType{};
  shared_ptr<long> orderId{};

  ListOrdersResponseBodyOrdersOrder() {}

  explicit ListOrdersResponseBodyOrdersOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (committer) {
      res["Committer"] = boost::any(*committer);
    }
    if (committerId) {
      res["CommitterId"] = boost::any(*committerId);
    }
    if (statusDesc) {
      res["StatusDesc"] = boost::any(*statusDesc);
    }
    if (pluginType) {
      res["PluginType"] = boost::any(*pluginType);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<string>(boost::any_cast<string>(m["LastModifyTime"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<string>(boost::any_cast<string>(m["StatusCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Committer") != m.end() && !m["Committer"].empty()) {
      committer = make_shared<string>(boost::any_cast<string>(m["Committer"]));
    }
    if (m.find("CommitterId") != m.end() && !m["CommitterId"].empty()) {
      committerId = make_shared<long>(boost::any_cast<long>(m["CommitterId"]));
    }
    if (m.find("StatusDesc") != m.end() && !m["StatusDesc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["StatusDesc"]));
    }
    if (m.find("PluginType") != m.end() && !m["PluginType"].empty()) {
      pluginType = make_shared<string>(boost::any_cast<string>(m["PluginType"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~ListOrdersResponseBodyOrdersOrder() = default;
};
class ListOrdersResponseBodyOrders : public Darabonba::Model {
public:
  shared_ptr<vector<ListOrdersResponseBodyOrdersOrder>> order{};

  ListOrdersResponseBodyOrders() {}

  explicit ListOrdersResponseBodyOrders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      vector<boost::any> temp1;
      for(auto item1:*order){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Order"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      if (typeid(vector<boost::any>) == m["Order"].type()) {
        vector<ListOrdersResponseBodyOrdersOrder> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Order"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOrdersResponseBodyOrdersOrder model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        order = make_shared<vector<ListOrdersResponseBodyOrdersOrder>>(expect1);
      }
    }
  }


  virtual ~ListOrdersResponseBodyOrders() = default;
};
class ListOrdersResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListOrdersResponseBodyOrders> orders{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  ListOrdersResponseBody() {}

  explicit ListOrdersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orders) {
      res["Orders"] = orders ? boost::any(orders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Orders") != m.end() && !m["Orders"].empty()) {
      if (typeid(map<string, boost::any>) == m["Orders"].type()) {
        ListOrdersResponseBodyOrders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Orders"]));
        orders = make_shared<ListOrdersResponseBodyOrders>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListOrdersResponseBody() = default;
};
class ListOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOrdersResponseBody> body{};

  ListOrdersResponse() {}

  explicit ListOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOrdersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOrdersResponseBody>(model1);
      }
    }
  }


  virtual ~ListOrdersResponse() = default;
};
class GetOrderBaseInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> orderId{};

  GetOrderBaseInfoRequest() {}

  explicit GetOrderBaseInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~GetOrderBaseInfoRequest() = default;
};
class GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> userNicks{};

  GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList() {}

  explicit GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userNicks) {
      res["UserNicks"] = boost::any(*userNicks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserNicks") != m.end() && !m["UserNicks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserNicks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserNicks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userNicks = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList() = default;
};
class GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> userIds{};

  GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList() {}

  explicit GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userIds) {
      res["UserIds"] = boost::any(*userIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserIds") != m.end() && !m["UserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList() = default;
};
class GetOrderBaseInfoResponseBodyOrderBaseInfo : public Darabonba::Model {
public:
  shared_ptr<GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList> relatedUserNickList{};
  shared_ptr<string> comment{};
  shared_ptr<string> createTime{};
  shared_ptr<string> committer{};
  shared_ptr<long> workflowInstanceId{};
  shared_ptr<long> committerId{};
  shared_ptr<string> lastModifyTime{};
  shared_ptr<string> statusCode{};
  shared_ptr<GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList> relatedUserList{};
  shared_ptr<string> workflowStatusDesc{};
  shared_ptr<string> statusDesc{};
  shared_ptr<string> pluginType{};
  shared_ptr<long> orderId{};

  GetOrderBaseInfoResponseBodyOrderBaseInfo() {}

  explicit GetOrderBaseInfoResponseBodyOrderBaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relatedUserNickList) {
      res["RelatedUserNickList"] = relatedUserNickList ? boost::any(relatedUserNickList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (committer) {
      res["Committer"] = boost::any(*committer);
    }
    if (workflowInstanceId) {
      res["WorkflowInstanceId"] = boost::any(*workflowInstanceId);
    }
    if (committerId) {
      res["CommitterId"] = boost::any(*committerId);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    if (relatedUserList) {
      res["RelatedUserList"] = relatedUserList ? boost::any(relatedUserList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workflowStatusDesc) {
      res["WorkflowStatusDesc"] = boost::any(*workflowStatusDesc);
    }
    if (statusDesc) {
      res["StatusDesc"] = boost::any(*statusDesc);
    }
    if (pluginType) {
      res["PluginType"] = boost::any(*pluginType);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RelatedUserNickList") != m.end() && !m["RelatedUserNickList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RelatedUserNickList"].type()) {
        GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RelatedUserNickList"]));
        relatedUserNickList = make_shared<GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserNickList>(model1);
      }
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Committer") != m.end() && !m["Committer"].empty()) {
      committer = make_shared<string>(boost::any_cast<string>(m["Committer"]));
    }
    if (m.find("WorkflowInstanceId") != m.end() && !m["WorkflowInstanceId"].empty()) {
      workflowInstanceId = make_shared<long>(boost::any_cast<long>(m["WorkflowInstanceId"]));
    }
    if (m.find("CommitterId") != m.end() && !m["CommitterId"].empty()) {
      committerId = make_shared<long>(boost::any_cast<long>(m["CommitterId"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<string>(boost::any_cast<string>(m["LastModifyTime"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<string>(boost::any_cast<string>(m["StatusCode"]));
    }
    if (m.find("RelatedUserList") != m.end() && !m["RelatedUserList"].empty()) {
      if (typeid(map<string, boost::any>) == m["RelatedUserList"].type()) {
        GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RelatedUserList"]));
        relatedUserList = make_shared<GetOrderBaseInfoResponseBodyOrderBaseInfoRelatedUserList>(model1);
      }
    }
    if (m.find("WorkflowStatusDesc") != m.end() && !m["WorkflowStatusDesc"].empty()) {
      workflowStatusDesc = make_shared<string>(boost::any_cast<string>(m["WorkflowStatusDesc"]));
    }
    if (m.find("StatusDesc") != m.end() && !m["StatusDesc"].empty()) {
      statusDesc = make_shared<string>(boost::any_cast<string>(m["StatusDesc"]));
    }
    if (m.find("PluginType") != m.end() && !m["PluginType"].empty()) {
      pluginType = make_shared<string>(boost::any_cast<string>(m["PluginType"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~GetOrderBaseInfoResponseBodyOrderBaseInfo() = default;
};
class GetOrderBaseInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetOrderBaseInfoResponseBodyOrderBaseInfo> orderBaseInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GetOrderBaseInfoResponseBody() {}

  explicit GetOrderBaseInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderBaseInfo) {
      res["OrderBaseInfo"] = orderBaseInfo ? boost::any(orderBaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderBaseInfo") != m.end() && !m["OrderBaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderBaseInfo"].type()) {
        GetOrderBaseInfoResponseBodyOrderBaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderBaseInfo"]));
        orderBaseInfo = make_shared<GetOrderBaseInfoResponseBodyOrderBaseInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetOrderBaseInfoResponseBody() = default;
};
class GetOrderBaseInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOrderBaseInfoResponseBody> body{};

  GetOrderBaseInfoResponse() {}

  explicit GetOrderBaseInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrderBaseInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrderBaseInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrderBaseInfoResponse() = default;
};
class ListUserTenantsRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};

  ListUserTenantsRequest() {}

  explicit ListUserTenantsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~ListUserTenantsRequest() = default;
};
class ListUserTenantsResponseBodyTenantList : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> tid{};
  shared_ptr<string> tenantName{};

  ListUserTenantsResponseBodyTenantList() {}

  explicit ListUserTenantsResponseBodyTenantList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (tenantName) {
      res["TenantName"] = boost::any(*tenantName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("TenantName") != m.end() && !m["TenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["TenantName"]));
    }
  }


  virtual ~ListUserTenantsResponseBodyTenantList() = default;
};
class ListUserTenantsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListUserTenantsResponseBodyTenantList>> tenantList{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  ListUserTenantsResponseBody() {}

  explicit ListUserTenantsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tenantList) {
      vector<boost::any> temp1;
      for(auto item1:*tenantList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TenantList"] = boost::any(temp1);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("TenantList") != m.end() && !m["TenantList"].empty()) {
      if (typeid(vector<boost::any>) == m["TenantList"].type()) {
        vector<ListUserTenantsResponseBodyTenantList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TenantList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserTenantsResponseBodyTenantList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tenantList = make_shared<vector<ListUserTenantsResponseBodyTenantList>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListUserTenantsResponseBody() = default;
};
class ListUserTenantsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListUserTenantsResponseBody> body{};

  ListUserTenantsResponse() {}

  explicit ListUserTenantsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserTenantsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserTenantsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserTenantsResponse() = default;
};
class SetOwnersRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> ownerType{};
  shared_ptr<string> ownerIds{};

  SetOwnersRequest() {}

  explicit SetOwnersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (ownerType) {
      res["OwnerType"] = boost::any(*ownerType);
    }
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("OwnerType") != m.end() && !m["OwnerType"].empty()) {
      ownerType = make_shared<string>(boost::any_cast<string>(m["OwnerType"]));
    }
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      ownerIds = make_shared<string>(boost::any_cast<string>(m["OwnerIds"]));
    }
  }


  virtual ~SetOwnersRequest() = default;
};
class SetOwnersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  SetOwnersResponseBody() {}

  explicit SetOwnersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetOwnersResponseBody() = default;
};
class SetOwnersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetOwnersResponseBody> body{};

  SetOwnersResponse() {}

  explicit SetOwnersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetOwnersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetOwnersResponseBody>(model1);
      }
    }
  }


  virtual ~SetOwnersResponse() = default;
};
class CreateDataCorrectOrderRequestParamDbItemList : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<bool> logic{};

  CreateDataCorrectOrderRequestParamDbItemList() {}

  explicit CreateDataCorrectOrderRequestParamDbItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
  }


  virtual ~CreateDataCorrectOrderRequestParamDbItemList() = default;
};
class CreateDataCorrectOrderRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> classify{};
  shared_ptr<long> estimateAffectRows{};
  shared_ptr<string> execSQL{};
  shared_ptr<string> sqlType{};
  shared_ptr<string> attachmentName{};
  shared_ptr<string> rollbackSQL{};
  shared_ptr<string> rollbackAttachmentName{};
  shared_ptr<string> rollbackSqlType{};
  shared_ptr<vector<CreateDataCorrectOrderRequestParamDbItemList>> dbItemList{};

  CreateDataCorrectOrderRequestParam() {}

  explicit CreateDataCorrectOrderRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classify) {
      res["Classify"] = boost::any(*classify);
    }
    if (estimateAffectRows) {
      res["EstimateAffectRows"] = boost::any(*estimateAffectRows);
    }
    if (execSQL) {
      res["ExecSQL"] = boost::any(*execSQL);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    if (attachmentName) {
      res["AttachmentName"] = boost::any(*attachmentName);
    }
    if (rollbackSQL) {
      res["RollbackSQL"] = boost::any(*rollbackSQL);
    }
    if (rollbackAttachmentName) {
      res["RollbackAttachmentName"] = boost::any(*rollbackAttachmentName);
    }
    if (rollbackSqlType) {
      res["RollbackSqlType"] = boost::any(*rollbackSqlType);
    }
    if (dbItemList) {
      vector<boost::any> temp1;
      for(auto item1:*dbItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DbItemList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classify") != m.end() && !m["Classify"].empty()) {
      classify = make_shared<string>(boost::any_cast<string>(m["Classify"]));
    }
    if (m.find("EstimateAffectRows") != m.end() && !m["EstimateAffectRows"].empty()) {
      estimateAffectRows = make_shared<long>(boost::any_cast<long>(m["EstimateAffectRows"]));
    }
    if (m.find("ExecSQL") != m.end() && !m["ExecSQL"].empty()) {
      execSQL = make_shared<string>(boost::any_cast<string>(m["ExecSQL"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["SqlType"]));
    }
    if (m.find("AttachmentName") != m.end() && !m["AttachmentName"].empty()) {
      attachmentName = make_shared<string>(boost::any_cast<string>(m["AttachmentName"]));
    }
    if (m.find("RollbackSQL") != m.end() && !m["RollbackSQL"].empty()) {
      rollbackSQL = make_shared<string>(boost::any_cast<string>(m["RollbackSQL"]));
    }
    if (m.find("RollbackAttachmentName") != m.end() && !m["RollbackAttachmentName"].empty()) {
      rollbackAttachmentName = make_shared<string>(boost::any_cast<string>(m["RollbackAttachmentName"]));
    }
    if (m.find("RollbackSqlType") != m.end() && !m["RollbackSqlType"].empty()) {
      rollbackSqlType = make_shared<string>(boost::any_cast<string>(m["RollbackSqlType"]));
    }
    if (m.find("DbItemList") != m.end() && !m["DbItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["DbItemList"].type()) {
        vector<CreateDataCorrectOrderRequestParamDbItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DbItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDataCorrectOrderRequestParamDbItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dbItemList = make_shared<vector<CreateDataCorrectOrderRequestParamDbItemList>>(expect1);
      }
    }
  }


  virtual ~CreateDataCorrectOrderRequestParam() = default;
};
class CreateDataCorrectOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<vector<long>> relatedUserList{};
  shared_ptr<CreateDataCorrectOrderRequestParam> param{};
  shared_ptr<string> attachmentKey{};
  shared_ptr<long> tid{};

  CreateDataCorrectOrderRequest() {}

  explicit CreateDataCorrectOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (relatedUserList) {
      res["RelatedUserList"] = boost::any(*relatedUserList);
    }
    if (param) {
      res["Param"] = param ? boost::any(param->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (attachmentKey) {
      res["AttachmentKey"] = boost::any(*attachmentKey);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("RelatedUserList") != m.end() && !m["RelatedUserList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RelatedUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelatedUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      relatedUserList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      if (typeid(map<string, boost::any>) == m["Param"].type()) {
        CreateDataCorrectOrderRequestParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Param"]));
        param = make_shared<CreateDataCorrectOrderRequestParam>(model1);
      }
    }
    if (m.find("AttachmentKey") != m.end() && !m["AttachmentKey"].empty()) {
      attachmentKey = make_shared<string>(boost::any_cast<string>(m["AttachmentKey"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~CreateDataCorrectOrderRequest() = default;
};
class CreateDataCorrectOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> relatedUserListShrink{};
  shared_ptr<string> paramShrink{};
  shared_ptr<string> attachmentKey{};
  shared_ptr<long> tid{};

  CreateDataCorrectOrderShrinkRequest() {}

  explicit CreateDataCorrectOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (relatedUserListShrink) {
      res["RelatedUserList"] = boost::any(*relatedUserListShrink);
    }
    if (paramShrink) {
      res["Param"] = boost::any(*paramShrink);
    }
    if (attachmentKey) {
      res["AttachmentKey"] = boost::any(*attachmentKey);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("RelatedUserList") != m.end() && !m["RelatedUserList"].empty()) {
      relatedUserListShrink = make_shared<string>(boost::any_cast<string>(m["RelatedUserList"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      paramShrink = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("AttachmentKey") != m.end() && !m["AttachmentKey"].empty()) {
      attachmentKey = make_shared<string>(boost::any_cast<string>(m["AttachmentKey"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~CreateDataCorrectOrderShrinkRequest() = default;
};
class CreateDataCorrectOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<long>> createOrderResult{};

  CreateDataCorrectOrderResponseBody() {}

  explicit CreateDataCorrectOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (createOrderResult) {
      res["CreateOrderResult"] = boost::any(*createOrderResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("CreateOrderResult") != m.end() && !m["CreateOrderResult"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CreateOrderResult"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CreateOrderResult"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      createOrderResult = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateDataCorrectOrderResponseBody() = default;
};
class CreateDataCorrectOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDataCorrectOrderResponseBody> body{};

  CreateDataCorrectOrderResponse() {}

  explicit CreateDataCorrectOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDataCorrectOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataCorrectOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataCorrectOrderResponse() = default;
};
class GetLogicDatabaseRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> dbId{};

  GetLogicDatabaseRequest() {}

  explicit GetLogicDatabaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<string>(boost::any_cast<string>(m["DbId"]));
    }
  }


  virtual ~GetLogicDatabaseRequest() = default;
};
class GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerIds{};

  GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList() {}

  explicit GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList() = default;
};
class GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerNames{};

  GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList() {}

  explicit GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerNames) {
      res["OwnerNames"] = boost::any(*ownerNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerNames") != m.end() && !m["OwnerNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList() = default;
};
class GetLogicDatabaseResponseBodyLogicDatabase : public Darabonba::Model {
public:
  shared_ptr<string> databaseId{};
  shared_ptr<GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList> ownerIdList{};
  shared_ptr<string> dbType{};
  shared_ptr<GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList> ownerNameList{};
  shared_ptr<bool> logic{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> searchName{};
  shared_ptr<string> envType{};

  GetLogicDatabaseResponseBodyLogicDatabase() {}

  explicit GetLogicDatabaseResponseBodyLogicDatabase(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseId) {
      res["DatabaseId"] = boost::any(*databaseId);
    }
    if (ownerIdList) {
      res["OwnerIdList"] = ownerIdList ? boost::any(ownerIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (ownerNameList) {
      res["OwnerNameList"] = ownerNameList ? boost::any(ownerNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseId") != m.end() && !m["DatabaseId"].empty()) {
      databaseId = make_shared<string>(boost::any_cast<string>(m["DatabaseId"]));
    }
    if (m.find("OwnerIdList") != m.end() && !m["OwnerIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerIdList"].type()) {
        GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerIdList"]));
        ownerIdList = make_shared<GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList>(model1);
      }
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("OwnerNameList") != m.end() && !m["OwnerNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerNameList"].type()) {
        GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerNameList"]));
        ownerNameList = make_shared<GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList>(model1);
      }
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
  }


  virtual ~GetLogicDatabaseResponseBodyLogicDatabase() = default;
};
class GetLogicDatabaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetLogicDatabaseResponseBodyLogicDatabase> logicDatabase{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GetLogicDatabaseResponseBody() {}

  explicit GetLogicDatabaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logicDatabase) {
      res["LogicDatabase"] = logicDatabase ? boost::any(logicDatabase->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogicDatabase") != m.end() && !m["LogicDatabase"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogicDatabase"].type()) {
        GetLogicDatabaseResponseBodyLogicDatabase model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogicDatabase"]));
        logicDatabase = make_shared<GetLogicDatabaseResponseBodyLogicDatabase>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetLogicDatabaseResponseBody() = default;
};
class GetLogicDatabaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetLogicDatabaseResponseBody> body{};

  GetLogicDatabaseResponse() {}

  explicit GetLogicDatabaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLogicDatabaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLogicDatabaseResponseBody>(model1);
      }
    }
  }


  virtual ~GetLogicDatabaseResponse() = default;
};
class GetDataCorrectBackupFilesRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> orderId{};
  shared_ptr<map<string, boost::any>> actionDetail{};

  GetDataCorrectBackupFilesRequest() {}

  explicit GetDataCorrectBackupFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (actionDetail) {
      res["ActionDetail"] = boost::any(*actionDetail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("ActionDetail") != m.end() && !m["ActionDetail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ActionDetail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      actionDetail = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetDataCorrectBackupFilesRequest() = default;
};
class GetDataCorrectBackupFilesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> orderId{};
  shared_ptr<string> actionDetailShrink{};

  GetDataCorrectBackupFilesShrinkRequest() {}

  explicit GetDataCorrectBackupFilesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (actionDetailShrink) {
      res["ActionDetail"] = boost::any(*actionDetailShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("ActionDetail") != m.end() && !m["ActionDetail"].empty()) {
      actionDetailShrink = make_shared<string>(boost::any_cast<string>(m["ActionDetail"]));
    }
  }


  virtual ~GetDataCorrectBackupFilesShrinkRequest() = default;
};
class GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fileUrl{};

  GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles() {}

  explicit GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FileUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FileUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fileUrl = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles() = default;
};
class GetDataCorrectBackupFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};
  shared_ptr<GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles> dataCorrectBackupFiles{};

  GetDataCorrectBackupFilesResponseBody() {}

  explicit GetDataCorrectBackupFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (dataCorrectBackupFiles) {
      res["DataCorrectBackupFiles"] = dataCorrectBackupFiles ? boost::any(dataCorrectBackupFiles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("DataCorrectBackupFiles") != m.end() && !m["DataCorrectBackupFiles"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataCorrectBackupFiles"].type()) {
        GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataCorrectBackupFiles"]));
        dataCorrectBackupFiles = make_shared<GetDataCorrectBackupFilesResponseBodyDataCorrectBackupFiles>(model1);
      }
    }
  }


  virtual ~GetDataCorrectBackupFilesResponseBody() = default;
};
class GetDataCorrectBackupFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDataCorrectBackupFilesResponseBody> body{};

  GetDataCorrectBackupFilesResponse() {}

  explicit GetDataCorrectBackupFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataCorrectBackupFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataCorrectBackupFilesResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataCorrectBackupFilesResponse() = default;
};
class RegisterInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> instanceSource{};
  shared_ptr<string> networkType{};
  shared_ptr<string> envType{};
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> ecsRegion{};
  shared_ptr<string> host{};
  shared_ptr<long> port{};
  shared_ptr<string> sid{};
  shared_ptr<string> databaseUser{};
  shared_ptr<string> databasePassword{};
  shared_ptr<string> instanceAlias{};
  shared_ptr<long> dbaUid{};
  shared_ptr<string> safeRule{};
  shared_ptr<long> queryTimeout{};
  shared_ptr<long> exportTimeout{};
  shared_ptr<string> dataLinkName{};
  shared_ptr<long> ddlOnline{};
  shared_ptr<long> useDsql{};
  shared_ptr<bool> skipTest{};

  RegisterInstanceRequest() {}

  explicit RegisterInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceSource) {
      res["InstanceSource"] = boost::any(*instanceSource);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (ecsRegion) {
      res["EcsRegion"] = boost::any(*ecsRegion);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (databaseUser) {
      res["DatabaseUser"] = boost::any(*databaseUser);
    }
    if (databasePassword) {
      res["DatabasePassword"] = boost::any(*databasePassword);
    }
    if (instanceAlias) {
      res["InstanceAlias"] = boost::any(*instanceAlias);
    }
    if (dbaUid) {
      res["DbaUid"] = boost::any(*dbaUid);
    }
    if (safeRule) {
      res["SafeRule"] = boost::any(*safeRule);
    }
    if (queryTimeout) {
      res["QueryTimeout"] = boost::any(*queryTimeout);
    }
    if (exportTimeout) {
      res["ExportTimeout"] = boost::any(*exportTimeout);
    }
    if (dataLinkName) {
      res["DataLinkName"] = boost::any(*dataLinkName);
    }
    if (ddlOnline) {
      res["DdlOnline"] = boost::any(*ddlOnline);
    }
    if (useDsql) {
      res["UseDsql"] = boost::any(*useDsql);
    }
    if (skipTest) {
      res["SkipTest"] = boost::any(*skipTest);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceSource") != m.end() && !m["InstanceSource"].empty()) {
      instanceSource = make_shared<string>(boost::any_cast<string>(m["InstanceSource"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("EcsRegion") != m.end() && !m["EcsRegion"].empty()) {
      ecsRegion = make_shared<string>(boost::any_cast<string>(m["EcsRegion"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("DatabaseUser") != m.end() && !m["DatabaseUser"].empty()) {
      databaseUser = make_shared<string>(boost::any_cast<string>(m["DatabaseUser"]));
    }
    if (m.find("DatabasePassword") != m.end() && !m["DatabasePassword"].empty()) {
      databasePassword = make_shared<string>(boost::any_cast<string>(m["DatabasePassword"]));
    }
    if (m.find("InstanceAlias") != m.end() && !m["InstanceAlias"].empty()) {
      instanceAlias = make_shared<string>(boost::any_cast<string>(m["InstanceAlias"]));
    }
    if (m.find("DbaUid") != m.end() && !m["DbaUid"].empty()) {
      dbaUid = make_shared<long>(boost::any_cast<long>(m["DbaUid"]));
    }
    if (m.find("SafeRule") != m.end() && !m["SafeRule"].empty()) {
      safeRule = make_shared<string>(boost::any_cast<string>(m["SafeRule"]));
    }
    if (m.find("QueryTimeout") != m.end() && !m["QueryTimeout"].empty()) {
      queryTimeout = make_shared<long>(boost::any_cast<long>(m["QueryTimeout"]));
    }
    if (m.find("ExportTimeout") != m.end() && !m["ExportTimeout"].empty()) {
      exportTimeout = make_shared<long>(boost::any_cast<long>(m["ExportTimeout"]));
    }
    if (m.find("DataLinkName") != m.end() && !m["DataLinkName"].empty()) {
      dataLinkName = make_shared<string>(boost::any_cast<string>(m["DataLinkName"]));
    }
    if (m.find("DdlOnline") != m.end() && !m["DdlOnline"].empty()) {
      ddlOnline = make_shared<long>(boost::any_cast<long>(m["DdlOnline"]));
    }
    if (m.find("UseDsql") != m.end() && !m["UseDsql"].empty()) {
      useDsql = make_shared<long>(boost::any_cast<long>(m["UseDsql"]));
    }
    if (m.find("SkipTest") != m.end() && !m["SkipTest"].empty()) {
      skipTest = make_shared<bool>(boost::any_cast<bool>(m["SkipTest"]));
    }
  }


  virtual ~RegisterInstanceRequest() = default;
};
class RegisterInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  RegisterInstanceResponseBody() {}

  explicit RegisterInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RegisterInstanceResponseBody() = default;
};
class RegisterInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RegisterInstanceResponseBody> body{};

  RegisterInstanceResponse() {}

  explicit RegisterInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterInstanceResponse() = default;
};
class CreateStructSyncOrderRequestParamSource : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> dbSearchName{};
  shared_ptr<bool> logic{};
  shared_ptr<string> versionId{};

  CreateStructSyncOrderRequestParamSource() {}

  explicit CreateStructSyncOrderRequestParamSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (dbSearchName) {
      res["DbSearchName"] = boost::any(*dbSearchName);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("DbSearchName") != m.end() && !m["DbSearchName"].empty()) {
      dbSearchName = make_shared<string>(boost::any_cast<string>(m["DbSearchName"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~CreateStructSyncOrderRequestParamSource() = default;
};
class CreateStructSyncOrderRequestParamTarget : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> dbSearchName{};
  shared_ptr<bool> logic{};
  shared_ptr<string> versionId{};

  CreateStructSyncOrderRequestParamTarget() {}

  explicit CreateStructSyncOrderRequestParamTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (dbSearchName) {
      res["DbSearchName"] = boost::any(*dbSearchName);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("DbSearchName") != m.end() && !m["DbSearchName"].empty()) {
      dbSearchName = make_shared<string>(boost::any_cast<string>(m["DbSearchName"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~CreateStructSyncOrderRequestParamTarget() = default;
};
class CreateStructSyncOrderRequestParamTableInfoList : public Darabonba::Model {
public:
  shared_ptr<string> sourceTableName{};
  shared_ptr<string> targetTableName{};

  CreateStructSyncOrderRequestParamTableInfoList() {}

  explicit CreateStructSyncOrderRequestParamTableInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceTableName) {
      res["SourceTableName"] = boost::any(*sourceTableName);
    }
    if (targetTableName) {
      res["TargetTableName"] = boost::any(*targetTableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceTableName") != m.end() && !m["SourceTableName"].empty()) {
      sourceTableName = make_shared<string>(boost::any_cast<string>(m["SourceTableName"]));
    }
    if (m.find("TargetTableName") != m.end() && !m["TargetTableName"].empty()) {
      targetTableName = make_shared<string>(boost::any_cast<string>(m["TargetTableName"]));
    }
  }


  virtual ~CreateStructSyncOrderRequestParamTableInfoList() = default;
};
class CreateStructSyncOrderRequestParam : public Darabonba::Model {
public:
  shared_ptr<CreateStructSyncOrderRequestParamSource> source{};
  shared_ptr<CreateStructSyncOrderRequestParamTarget> target{};
  shared_ptr<bool> ignoreError{};
  shared_ptr<vector<CreateStructSyncOrderRequestParamTableInfoList>> tableInfoList{};

  CreateStructSyncOrderRequestParam() {}

  explicit CreateStructSyncOrderRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["Source"] = source ? boost::any(source->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (target) {
      res["Target"] = target ? boost::any(target->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ignoreError) {
      res["IgnoreError"] = boost::any(*ignoreError);
    }
    if (tableInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*tableInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      if (typeid(map<string, boost::any>) == m["Source"].type()) {
        CreateStructSyncOrderRequestParamSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Source"]));
        source = make_shared<CreateStructSyncOrderRequestParamSource>(model1);
      }
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      if (typeid(map<string, boost::any>) == m["Target"].type()) {
        CreateStructSyncOrderRequestParamTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Target"]));
        target = make_shared<CreateStructSyncOrderRequestParamTarget>(model1);
      }
    }
    if (m.find("IgnoreError") != m.end() && !m["IgnoreError"].empty()) {
      ignoreError = make_shared<bool>(boost::any_cast<bool>(m["IgnoreError"]));
    }
    if (m.find("TableInfoList") != m.end() && !m["TableInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["TableInfoList"].type()) {
        vector<CreateStructSyncOrderRequestParamTableInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateStructSyncOrderRequestParamTableInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableInfoList = make_shared<vector<CreateStructSyncOrderRequestParamTableInfoList>>(expect1);
      }
    }
  }


  virtual ~CreateStructSyncOrderRequestParam() = default;
};
class CreateStructSyncOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<vector<long>> relatedUserList{};
  shared_ptr<CreateStructSyncOrderRequestParam> param{};
  shared_ptr<string> attachmentKey{};
  shared_ptr<long> tid{};

  CreateStructSyncOrderRequest() {}

  explicit CreateStructSyncOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (relatedUserList) {
      res["RelatedUserList"] = boost::any(*relatedUserList);
    }
    if (param) {
      res["Param"] = param ? boost::any(param->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (attachmentKey) {
      res["AttachmentKey"] = boost::any(*attachmentKey);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("RelatedUserList") != m.end() && !m["RelatedUserList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["RelatedUserList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelatedUserList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      relatedUserList = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      if (typeid(map<string, boost::any>) == m["Param"].type()) {
        CreateStructSyncOrderRequestParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Param"]));
        param = make_shared<CreateStructSyncOrderRequestParam>(model1);
      }
    }
    if (m.find("AttachmentKey") != m.end() && !m["AttachmentKey"].empty()) {
      attachmentKey = make_shared<string>(boost::any_cast<string>(m["AttachmentKey"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~CreateStructSyncOrderRequest() = default;
};
class CreateStructSyncOrderShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> relatedUserListShrink{};
  shared_ptr<string> paramShrink{};
  shared_ptr<string> attachmentKey{};
  shared_ptr<long> tid{};

  CreateStructSyncOrderShrinkRequest() {}

  explicit CreateStructSyncOrderShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (relatedUserListShrink) {
      res["RelatedUserList"] = boost::any(*relatedUserListShrink);
    }
    if (paramShrink) {
      res["Param"] = boost::any(*paramShrink);
    }
    if (attachmentKey) {
      res["AttachmentKey"] = boost::any(*attachmentKey);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("RelatedUserList") != m.end() && !m["RelatedUserList"].empty()) {
      relatedUserListShrink = make_shared<string>(boost::any_cast<string>(m["RelatedUserList"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      paramShrink = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
    if (m.find("AttachmentKey") != m.end() && !m["AttachmentKey"].empty()) {
      attachmentKey = make_shared<string>(boost::any_cast<string>(m["AttachmentKey"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~CreateStructSyncOrderShrinkRequest() = default;
};
class CreateStructSyncOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<vector<long>> createOrderResult{};

  CreateStructSyncOrderResponseBody() {}

  explicit CreateStructSyncOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (createOrderResult) {
      res["CreateOrderResult"] = boost::any(*createOrderResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("CreateOrderResult") != m.end() && !m["CreateOrderResult"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CreateOrderResult"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CreateOrderResult"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      createOrderResult = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~CreateStructSyncOrderResponseBody() = default;
};
class CreateStructSyncOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateStructSyncOrderResponseBody> body{};

  CreateStructSyncOrderResponse() {}

  explicit CreateStructSyncOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateStructSyncOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateStructSyncOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateStructSyncOrderResponse() = default;
};
class ExecuteDataExportRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> orderId{};
  shared_ptr<map<string, boost::any>> actionDetail{};

  ExecuteDataExportRequest() {}

  explicit ExecuteDataExportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (actionDetail) {
      res["ActionDetail"] = boost::any(*actionDetail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("ActionDetail") != m.end() && !m["ActionDetail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ActionDetail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      actionDetail = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ExecuteDataExportRequest() = default;
};
class ExecuteDataExportShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> orderId{};
  shared_ptr<string> actionDetailShrink{};

  ExecuteDataExportShrinkRequest() {}

  explicit ExecuteDataExportShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (actionDetailShrink) {
      res["ActionDetail"] = boost::any(*actionDetailShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("ActionDetail") != m.end() && !m["ActionDetail"].empty()) {
      actionDetailShrink = make_shared<string>(boost::any_cast<string>(m["ActionDetail"]));
    }
  }


  virtual ~ExecuteDataExportShrinkRequest() = default;
};
class ExecuteDataExportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  ExecuteDataExportResponseBody() {}

  explicit ExecuteDataExportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExecuteDataExportResponseBody() = default;
};
class ExecuteDataExportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteDataExportResponseBody> body{};

  ExecuteDataExportResponse() {}

  explicit ExecuteDataExportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteDataExportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteDataExportResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteDataExportResponse() = default;
};
class ExecuteDataCorrectRequest : public Darabonba::Model {
public:
  shared_ptr<string> tid{};
  shared_ptr<long> orderId{};
  shared_ptr<map<string, boost::any>> actionDetail{};

  ExecuteDataCorrectRequest() {}

  explicit ExecuteDataCorrectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (actionDetail) {
      res["ActionDetail"] = boost::any(*actionDetail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("ActionDetail") != m.end() && !m["ActionDetail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ActionDetail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      actionDetail = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ExecuteDataCorrectRequest() = default;
};
class ExecuteDataCorrectShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> tid{};
  shared_ptr<long> orderId{};
  shared_ptr<string> actionDetailShrink{};

  ExecuteDataCorrectShrinkRequest() {}

  explicit ExecuteDataCorrectShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (actionDetailShrink) {
      res["ActionDetail"] = boost::any(*actionDetailShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<string>(boost::any_cast<string>(m["Tid"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("ActionDetail") != m.end() && !m["ActionDetail"].empty()) {
      actionDetailShrink = make_shared<string>(boost::any_cast<string>(m["ActionDetail"]));
    }
  }


  virtual ~ExecuteDataCorrectShrinkRequest() = default;
};
class ExecuteDataCorrectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  ExecuteDataCorrectResponseBody() {}

  explicit ExecuteDataCorrectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExecuteDataCorrectResponseBody() = default;
};
class ExecuteDataCorrectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteDataCorrectResponseBody> body{};

  ExecuteDataCorrectResponse() {}

  explicit ExecuteDataCorrectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteDataCorrectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteDataCorrectResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteDataCorrectResponse() = default;
};
class ListTablesRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> databaseId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> searchName{};
  shared_ptr<bool> returnGuid{};

  ListTablesRequest() {}

  explicit ListTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (databaseId) {
      res["DatabaseId"] = boost::any(*databaseId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (returnGuid) {
      res["ReturnGuid"] = boost::any(*returnGuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("DatabaseId") != m.end() && !m["DatabaseId"].empty()) {
      databaseId = make_shared<string>(boost::any_cast<string>(m["DatabaseId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("ReturnGuid") != m.end() && !m["ReturnGuid"].empty()) {
      returnGuid = make_shared<bool>(boost::any_cast<bool>(m["ReturnGuid"]));
    }
  }


  virtual ~ListTablesRequest() = default;
};
class ListTablesResponseBodyTableListTableOwnerIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerIds{};

  ListTablesResponseBodyTableListTableOwnerIdList() {}

  explicit ListTablesResponseBodyTableListTableOwnerIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerIds) {
      res["OwnerIds"] = boost::any(*ownerIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerIds") != m.end() && !m["OwnerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTablesResponseBodyTableListTableOwnerIdList() = default;
};
class ListTablesResponseBodyTableListTableOwnerNameList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ownerNames{};

  ListTablesResponseBodyTableListTableOwnerNameList() {}

  explicit ListTablesResponseBodyTableListTableOwnerNameList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerNames) {
      res["OwnerNames"] = boost::any(*ownerNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerNames") != m.end() && !m["OwnerNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OwnerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OwnerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ownerNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTablesResponseBodyTableListTableOwnerNameList() = default;
};
class ListTablesResponseBodyTableListTable : public Darabonba::Model {
public:
  shared_ptr<string> databaseId{};
  shared_ptr<string> tableName{};
  shared_ptr<long> storeCapacity{};
  shared_ptr<ListTablesResponseBodyTableListTableOwnerIdList> ownerIdList{};
  shared_ptr<string> description{};
  shared_ptr<string> encoding{};
  shared_ptr<ListTablesResponseBodyTableListTableOwnerNameList> ownerNameList{};
  shared_ptr<string> tableSchemaName{};
  shared_ptr<string> tableType{};
  shared_ptr<string> tableGuid{};
  shared_ptr<string> engine{};
  shared_ptr<long> numRows{};
  shared_ptr<string> tableId{};

  ListTablesResponseBodyTableListTable() {}

  explicit ListTablesResponseBodyTableListTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (databaseId) {
      res["DatabaseId"] = boost::any(*databaseId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (storeCapacity) {
      res["StoreCapacity"] = boost::any(*storeCapacity);
    }
    if (ownerIdList) {
      res["OwnerIdList"] = ownerIdList ? boost::any(ownerIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encoding) {
      res["Encoding"] = boost::any(*encoding);
    }
    if (ownerNameList) {
      res["OwnerNameList"] = ownerNameList ? boost::any(ownerNameList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableSchemaName) {
      res["TableSchemaName"] = boost::any(*tableSchemaName);
    }
    if (tableType) {
      res["TableType"] = boost::any(*tableType);
    }
    if (tableGuid) {
      res["TableGuid"] = boost::any(*tableGuid);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (numRows) {
      res["NumRows"] = boost::any(*numRows);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatabaseId") != m.end() && !m["DatabaseId"].empty()) {
      databaseId = make_shared<string>(boost::any_cast<string>(m["DatabaseId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("StoreCapacity") != m.end() && !m["StoreCapacity"].empty()) {
      storeCapacity = make_shared<long>(boost::any_cast<long>(m["StoreCapacity"]));
    }
    if (m.find("OwnerIdList") != m.end() && !m["OwnerIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerIdList"].type()) {
        ListTablesResponseBodyTableListTableOwnerIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerIdList"]));
        ownerIdList = make_shared<ListTablesResponseBodyTableListTableOwnerIdList>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Encoding") != m.end() && !m["Encoding"].empty()) {
      encoding = make_shared<string>(boost::any_cast<string>(m["Encoding"]));
    }
    if (m.find("OwnerNameList") != m.end() && !m["OwnerNameList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OwnerNameList"].type()) {
        ListTablesResponseBodyTableListTableOwnerNameList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OwnerNameList"]));
        ownerNameList = make_shared<ListTablesResponseBodyTableListTableOwnerNameList>(model1);
      }
    }
    if (m.find("TableSchemaName") != m.end() && !m["TableSchemaName"].empty()) {
      tableSchemaName = make_shared<string>(boost::any_cast<string>(m["TableSchemaName"]));
    }
    if (m.find("TableType") != m.end() && !m["TableType"].empty()) {
      tableType = make_shared<string>(boost::any_cast<string>(m["TableType"]));
    }
    if (m.find("TableGuid") != m.end() && !m["TableGuid"].empty()) {
      tableGuid = make_shared<string>(boost::any_cast<string>(m["TableGuid"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("NumRows") != m.end() && !m["NumRows"].empty()) {
      numRows = make_shared<long>(boost::any_cast<long>(m["NumRows"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<string>(boost::any_cast<string>(m["TableId"]));
    }
  }


  virtual ~ListTablesResponseBodyTableListTable() = default;
};
class ListTablesResponseBodyTableList : public Darabonba::Model {
public:
  shared_ptr<vector<ListTablesResponseBodyTableListTable>> table{};

  ListTablesResponseBodyTableList() {}

  explicit ListTablesResponseBodyTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (table) {
      vector<boost::any> temp1;
      for(auto item1:*table){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Table"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      if (typeid(vector<boost::any>) == m["Table"].type()) {
        vector<ListTablesResponseBodyTableListTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTablesResponseBodyTableListTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<ListTablesResponseBodyTableListTable>>(expect1);
      }
    }
  }


  virtual ~ListTablesResponseBodyTableList() = default;
};
class ListTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<ListTablesResponseBodyTableList> tableList{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  ListTablesResponseBody() {}

  explicit ListTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (tableList) {
      res["TableList"] = tableList ? boost::any(tableList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("TableList") != m.end() && !m["TableList"].empty()) {
      if (typeid(map<string, boost::any>) == m["TableList"].type()) {
        ListTablesResponseBodyTableList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TableList"]));
        tableList = make_shared<ListTablesResponseBodyTableList>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListTablesResponseBody() = default;
};
class ListTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTablesResponseBody> body{};

  ListTablesResponse() {}

  explicit ListTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTablesResponse() = default;
};
class ListWorkFlowNodesRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> searchName{};

  ListWorkFlowNodesRequest() {}

  explicit ListWorkFlowNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
  }


  virtual ~ListWorkFlowNodesRequest() = default;
};
class ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser : public Darabonba::Model {
public:
  shared_ptr<string> realName{};
  shared_ptr<long> userId{};
  shared_ptr<string> nickName{};

  ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser() {}

  explicit ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (realName) {
      res["RealName"] = boost::any(*realName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RealName") != m.end() && !m["RealName"].empty()) {
      realName = make_shared<string>(boost::any_cast<string>(m["RealName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
  }


  virtual ~ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser() = default;
};
class ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers : public Darabonba::Model {
public:
  shared_ptr<vector<ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser>> auditUser{};

  ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers() {}

  explicit ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditUser) {
      vector<boost::any> temp1;
      for(auto item1:*auditUser){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuditUser"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditUser") != m.end() && !m["AuditUser"].empty()) {
      if (typeid(vector<boost::any>) == m["AuditUser"].type()) {
        vector<ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuditUser"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        auditUser = make_shared<vector<ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsersAuditUser>>(expect1);
      }
    }
  }


  virtual ~ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers() = default;
};
class ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> createUserNickName{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> nodeName{};
  shared_ptr<ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers> auditUsers{};
  shared_ptr<long> createUserId{};
  shared_ptr<long> nodeId{};

  ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode() {}

  explicit ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (createUserNickName) {
      res["CreateUserNickName"] = boost::any(*createUserNickName);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (auditUsers) {
      res["AuditUsers"] = auditUsers ? boost::any(auditUsers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("CreateUserNickName") != m.end() && !m["CreateUserNickName"].empty()) {
      createUserNickName = make_shared<string>(boost::any_cast<string>(m["CreateUserNickName"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("AuditUsers") != m.end() && !m["AuditUsers"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuditUsers"].type()) {
        ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuditUsers"]));
        auditUsers = make_shared<ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNodeAuditUsers>(model1);
      }
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<long>(boost::any_cast<long>(m["CreateUserId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<long>(boost::any_cast<long>(m["NodeId"]));
    }
  }


  virtual ~ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode() = default;
};
class ListWorkFlowNodesResponseBodyWorkflowNodes : public Darabonba::Model {
public:
  shared_ptr<vector<ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode>> workflowNode{};

  ListWorkFlowNodesResponseBodyWorkflowNodes() {}

  explicit ListWorkFlowNodesResponseBodyWorkflowNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workflowNode) {
      vector<boost::any> temp1;
      for(auto item1:*workflowNode){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WorkflowNode"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WorkflowNode") != m.end() && !m["WorkflowNode"].empty()) {
      if (typeid(vector<boost::any>) == m["WorkflowNode"].type()) {
        vector<ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WorkflowNode"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workflowNode = make_shared<vector<ListWorkFlowNodesResponseBodyWorkflowNodesWorkflowNode>>(expect1);
      }
    }
  }


  virtual ~ListWorkFlowNodesResponseBodyWorkflowNodes() = default;
};
class ListWorkFlowNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<ListWorkFlowNodesResponseBodyWorkflowNodes> workflowNodes{};
  shared_ptr<bool> success{};

  ListWorkFlowNodesResponseBody() {}

  explicit ListWorkFlowNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (workflowNodes) {
      res["WorkflowNodes"] = workflowNodes ? boost::any(workflowNodes->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("WorkflowNodes") != m.end() && !m["WorkflowNodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["WorkflowNodes"].type()) {
        ListWorkFlowNodesResponseBodyWorkflowNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WorkflowNodes"]));
        workflowNodes = make_shared<ListWorkFlowNodesResponseBodyWorkflowNodes>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListWorkFlowNodesResponseBody() = default;
};
class ListWorkFlowNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListWorkFlowNodesResponseBody> body{};

  ListWorkFlowNodesResponse() {}

  explicit ListWorkFlowNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWorkFlowNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkFlowNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkFlowNodesResponse() = default;
};
class GetStructSyncOrderDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<long> tid{};

  GetStructSyncOrderDetailRequest() {}

  explicit GetStructSyncOrderDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~GetStructSyncOrderDetailRequest() = default;
};
class GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> searchName{};
  shared_ptr<string> dbType{};
  shared_ptr<string> envType{};
  shared_ptr<bool> logic{};

  GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo() {}

  explicit GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
  }


  virtual ~GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo() = default;
};
class GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> searchName{};
  shared_ptr<string> dbType{};
  shared_ptr<string> envType{};
  shared_ptr<bool> logic{};

  GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo() {}

  explicit GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
  }


  virtual ~GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo() = default;
};
class GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo : public Darabonba::Model {
public:
  shared_ptr<string> versionId{};

  GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo() {}

  explicit GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo() = default;
};
class GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo : public Darabonba::Model {
public:
  shared_ptr<string> versionId{};

  GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo() {}

  explicit GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo() = default;
};
class GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList : public Darabonba::Model {
public:
  shared_ptr<string> sourceTableName{};
  shared_ptr<string> targetTableName{};

  GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList() {}

  explicit GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceTableName) {
      res["SourceTableName"] = boost::any(*sourceTableName);
    }
    if (targetTableName) {
      res["TargetTableName"] = boost::any(*targetTableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceTableName") != m.end() && !m["SourceTableName"].empty()) {
      sourceTableName = make_shared<string>(boost::any_cast<string>(m["SourceTableName"]));
    }
    if (m.find("TargetTableName") != m.end() && !m["TargetTableName"].empty()) {
      targetTableName = make_shared<string>(boost::any_cast<string>(m["TargetTableName"]));
    }
  }


  virtual ~GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList() = default;
};
class GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail : public Darabonba::Model {
public:
  shared_ptr<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo> sourceDatabaseInfo{};
  shared_ptr<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo> targetDatabaseInfo{};
  shared_ptr<string> sourceType{};
  shared_ptr<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo> sourceVersionInfo{};
  shared_ptr<string> targetType{};
  shared_ptr<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo> targetVersionInfo{};
  shared_ptr<vector<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList>> tableInfoList{};
  shared_ptr<bool> ignoreError{};

  GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail() {}

  explicit GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceDatabaseInfo) {
      res["SourceDatabaseInfo"] = sourceDatabaseInfo ? boost::any(sourceDatabaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetDatabaseInfo) {
      res["TargetDatabaseInfo"] = targetDatabaseInfo ? boost::any(targetDatabaseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceVersionInfo) {
      res["SourceVersionInfo"] = sourceVersionInfo ? boost::any(sourceVersionInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (targetVersionInfo) {
      res["TargetVersionInfo"] = targetVersionInfo ? boost::any(targetVersionInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*tableInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableInfoList"] = boost::any(temp1);
    }
    if (ignoreError) {
      res["IgnoreError"] = boost::any(*ignoreError);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceDatabaseInfo") != m.end() && !m["SourceDatabaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceDatabaseInfo"].type()) {
        GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceDatabaseInfo"]));
        sourceDatabaseInfo = make_shared<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo>(model1);
      }
    }
    if (m.find("TargetDatabaseInfo") != m.end() && !m["TargetDatabaseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetDatabaseInfo"].type()) {
        GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetDatabaseInfo"]));
        targetDatabaseInfo = make_shared<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo>(model1);
      }
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceVersionInfo") != m.end() && !m["SourceVersionInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["SourceVersionInfo"].type()) {
        GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SourceVersionInfo"]));
        sourceVersionInfo = make_shared<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo>(model1);
      }
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("TargetVersionInfo") != m.end() && !m["TargetVersionInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetVersionInfo"].type()) {
        GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetVersionInfo"]));
        targetVersionInfo = make_shared<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo>(model1);
      }
    }
    if (m.find("TableInfoList") != m.end() && !m["TableInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["TableInfoList"].type()) {
        vector<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableInfoList = make_shared<vector<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList>>(expect1);
      }
    }
    if (m.find("IgnoreError") != m.end() && !m["IgnoreError"].empty()) {
      ignoreError = make_shared<bool>(boost::any_cast<bool>(m["IgnoreError"]));
    }
  }


  virtual ~GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail() = default;
};
class GetStructSyncOrderDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail> structSyncOrderDetail{};

  GetStructSyncOrderDetailResponseBody() {}

  explicit GetStructSyncOrderDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (structSyncOrderDetail) {
      res["StructSyncOrderDetail"] = structSyncOrderDetail ? boost::any(structSyncOrderDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("StructSyncOrderDetail") != m.end() && !m["StructSyncOrderDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["StructSyncOrderDetail"].type()) {
        GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StructSyncOrderDetail"]));
        structSyncOrderDetail = make_shared<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail>(model1);
      }
    }
  }


  virtual ~GetStructSyncOrderDetailResponseBody() = default;
};
class GetStructSyncOrderDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetStructSyncOrderDetailResponseBody> body{};

  GetStructSyncOrderDetailResponse() {}

  explicit GetStructSyncOrderDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStructSyncOrderDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStructSyncOrderDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetStructSyncOrderDetailResponse() = default;
};
class ListSensitiveColumnsDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<string> columnName{};

  ListSensitiveColumnsDetailRequest() {}

  explicit ListSensitiveColumnsDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
  }


  virtual ~ListSensitiveColumnsDetailRequest() = default;
};
class ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail : public Darabonba::Model {
public:
  shared_ptr<long> dbId{};
  shared_ptr<string> columnName{};
  shared_ptr<string> columnDescription{};
  shared_ptr<string> tableName{};
  shared_ptr<string> dbType{};
  shared_ptr<string> columnType{};
  shared_ptr<bool> logic{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> searchName{};
  shared_ptr<string> envType{};

  ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail() {}

  explicit ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (columnDescription) {
      res["ColumnDescription"] = boost::any(*columnDescription);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (columnType) {
      res["ColumnType"] = boost::any(*columnType);
    }
    if (logic) {
      res["Logic"] = boost::any(*logic);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (searchName) {
      res["SearchName"] = boost::any(*searchName);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<long>(boost::any_cast<long>(m["DbId"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("ColumnDescription") != m.end() && !m["ColumnDescription"].empty()) {
      columnDescription = make_shared<string>(boost::any_cast<string>(m["ColumnDescription"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("ColumnType") != m.end() && !m["ColumnType"].empty()) {
      columnType = make_shared<string>(boost::any_cast<string>(m["ColumnType"]));
    }
    if (m.find("Logic") != m.end() && !m["Logic"].empty()) {
      logic = make_shared<bool>(boost::any_cast<bool>(m["Logic"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("SearchName") != m.end() && !m["SearchName"].empty()) {
      searchName = make_shared<string>(boost::any_cast<string>(m["SearchName"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
  }


  virtual ~ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail() = default;
};
class ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList : public Darabonba::Model {
public:
  shared_ptr<vector<ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail>> sensitiveColumnsDetail{};

  ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList() {}

  explicit ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sensitiveColumnsDetail) {
      vector<boost::any> temp1;
      for(auto item1:*sensitiveColumnsDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SensitiveColumnsDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SensitiveColumnsDetail") != m.end() && !m["SensitiveColumnsDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["SensitiveColumnsDetail"].type()) {
        vector<ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SensitiveColumnsDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitiveColumnsDetail = make_shared<vector<ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailListSensitiveColumnsDetail>>(expect1);
      }
    }
  }


  virtual ~ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList() = default;
};
class ListSensitiveColumnsDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList> sensitiveColumnsDetailList{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  ListSensitiveColumnsDetailResponseBody() {}

  explicit ListSensitiveColumnsDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sensitiveColumnsDetailList) {
      res["SensitiveColumnsDetailList"] = sensitiveColumnsDetailList ? boost::any(sensitiveColumnsDetailList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("SensitiveColumnsDetailList") != m.end() && !m["SensitiveColumnsDetailList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SensitiveColumnsDetailList"].type()) {
        ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SensitiveColumnsDetailList"]));
        sensitiveColumnsDetailList = make_shared<ListSensitiveColumnsDetailResponseBodySensitiveColumnsDetailList>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListSensitiveColumnsDetailResponseBody() = default;
};
class ListSensitiveColumnsDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSensitiveColumnsDetailResponseBody> body{};

  ListSensitiveColumnsDetailResponse() {}

  explicit ListSensitiveColumnsDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSensitiveColumnsDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSensitiveColumnsDetailResponseBody>(model1);
      }
    }
  }


  virtual ~ListSensitiveColumnsDetailResponse() = default;
};
class UpdateUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<long> uid{};
  shared_ptr<string> userNick{};
  shared_ptr<string> roleNames{};
  shared_ptr<string> mobile{};
  shared_ptr<long> maxExecuteCount{};
  shared_ptr<long> maxResultCount{};

  UpdateUserRequest() {}

  explicit UpdateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (userNick) {
      res["UserNick"] = boost::any(*userNick);
    }
    if (roleNames) {
      res["RoleNames"] = boost::any(*roleNames);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (maxExecuteCount) {
      res["MaxExecuteCount"] = boost::any(*maxExecuteCount);
    }
    if (maxResultCount) {
      res["MaxResultCount"] = boost::any(*maxResultCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
    if (m.find("UserNick") != m.end() && !m["UserNick"].empty()) {
      userNick = make_shared<string>(boost::any_cast<string>(m["UserNick"]));
    }
    if (m.find("RoleNames") != m.end() && !m["RoleNames"].empty()) {
      roleNames = make_shared<string>(boost::any_cast<string>(m["RoleNames"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("MaxExecuteCount") != m.end() && !m["MaxExecuteCount"].empty()) {
      maxExecuteCount = make_shared<long>(boost::any_cast<long>(m["MaxExecuteCount"]));
    }
    if (m.find("MaxResultCount") != m.end() && !m["MaxResultCount"].empty()) {
      maxResultCount = make_shared<long>(boost::any_cast<long>(m["MaxResultCount"]));
    }
  }


  virtual ~UpdateUserRequest() = default;
};
class UpdateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
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
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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
class GetStructSyncExecSqlDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> tid{};

  GetStructSyncExecSqlDetailRequest() {}

  explicit GetStructSyncExecSqlDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
  }


  virtual ~GetStructSyncExecSqlDetailRequest() = default;
};
class GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail : public Darabonba::Model {
public:
  shared_ptr<long> totalSqlCount{};
  shared_ptr<string> execSql{};

  GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail() {}

  explicit GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalSqlCount) {
      res["TotalSqlCount"] = boost::any(*totalSqlCount);
    }
    if (execSql) {
      res["ExecSql"] = boost::any(*execSql);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalSqlCount") != m.end() && !m["TotalSqlCount"].empty()) {
      totalSqlCount = make_shared<long>(boost::any_cast<long>(m["TotalSqlCount"]));
    }
    if (m.find("ExecSql") != m.end() && !m["ExecSql"].empty()) {
      execSql = make_shared<string>(boost::any_cast<string>(m["ExecSql"]));
    }
  }


  virtual ~GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail() = default;
};
class GetStructSyncExecSqlDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail> structSyncExecSqlDetail{};

  GetStructSyncExecSqlDetailResponseBody() {}

  explicit GetStructSyncExecSqlDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (structSyncExecSqlDetail) {
      res["StructSyncExecSqlDetail"] = structSyncExecSqlDetail ? boost::any(structSyncExecSqlDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("StructSyncExecSqlDetail") != m.end() && !m["StructSyncExecSqlDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["StructSyncExecSqlDetail"].type()) {
        GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StructSyncExecSqlDetail"]));
        structSyncExecSqlDetail = make_shared<GetStructSyncExecSqlDetailResponseBodyStructSyncExecSqlDetail>(model1);
      }
    }
  }


  virtual ~GetStructSyncExecSqlDetailResponseBody() = default;
};
class GetStructSyncExecSqlDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetStructSyncExecSqlDetailResponseBody> body{};

  GetStructSyncExecSqlDetailResponse() {}

  explicit GetStructSyncExecSqlDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStructSyncExecSqlDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStructSyncExecSqlDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetStructSyncExecSqlDetailResponse() = default;
};
class DeleteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> host{};
  shared_ptr<long> port{};
  shared_ptr<string> sid{};

  DeleteInstanceRequest() {}

  explicit DeleteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
  }


  virtual ~DeleteInstanceRequest() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteInstanceResponseBody() = default;
};
class DeleteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class GetTableDBTopologyRequest : public Darabonba::Model {
public:
  shared_ptr<long> tid{};
  shared_ptr<string> tableGuid{};

  GetTableDBTopologyRequest() {}

  explicit GetTableDBTopologyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tid) {
      res["Tid"] = boost::any(*tid);
    }
    if (tableGuid) {
      res["TableGuid"] = boost::any(*tableGuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tid") != m.end() && !m["Tid"].empty()) {
      tid = make_shared<long>(boost::any_cast<long>(m["Tid"]));
    }
    if (m.find("TableGuid") != m.end() && !m["TableGuid"].empty()) {
      tableGuid = make_shared<string>(boost::any_cast<string>(m["TableGuid"]));
    }
  }


  virtual ~GetTableDBTopologyRequest() = default;
};
class GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};
  shared_ptr<string> tableType{};
  shared_ptr<string> tableId{};

  GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList() {}

  explicit GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (tableType) {
      res["TableType"] = boost::any(*tableType);
    }
    if (tableId) {
      res["TableId"] = boost::any(*tableId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("TableType") != m.end() && !m["TableType"].empty()) {
      tableType = make_shared<string>(boost::any_cast<string>(m["TableType"]));
    }
    if (m.find("TableId") != m.end() && !m["TableId"].empty()) {
      tableId = make_shared<string>(boost::any_cast<string>(m["TableId"]));
    }
  }


  virtual ~GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList() = default;
};
class GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList : public Darabonba::Model {
public:
  shared_ptr<string> dbId{};
  shared_ptr<string> dbName{};
  shared_ptr<string> dbType{};
  shared_ptr<vector<GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList>> tableList{};
  shared_ptr<string> envType{};

  GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList() {}

  explicit GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbId) {
      res["DbId"] = boost::any(*dbId);
    }
    if (dbName) {
      res["DbName"] = boost::any(*dbName);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (tableList) {
      vector<boost::any> temp1;
      for(auto item1:*tableList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableList"] = boost::any(temp1);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbId") != m.end() && !m["DbId"].empty()) {
      dbId = make_shared<string>(boost::any_cast<string>(m["DbId"]));
    }
    if (m.find("DbName") != m.end() && !m["DbName"].empty()) {
      dbName = make_shared<string>(boost::any_cast<string>(m["DbName"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("TableList") != m.end() && !m["TableList"].empty()) {
      if (typeid(vector<boost::any>) == m["TableList"].type()) {
        vector<GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableList = make_shared<vector<GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList>>(expect1);
      }
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
  }


  virtual ~GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList() = default;
};
class GetTableDBTopologyResponseBodyDBTopologyDataSourceList : public Darabonba::Model {
public:
  shared_ptr<string> sid{};
  shared_ptr<string> host{};
  shared_ptr<string> dbType{};
  shared_ptr<vector<GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList>> databaseList{};
  shared_ptr<long> port{};

  GetTableDBTopologyResponseBodyDBTopologyDataSourceList() {}

  explicit GetTableDBTopologyResponseBodyDBTopologyDataSourceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sid) {
      res["Sid"] = boost::any(*sid);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (databaseList) {
      vector<boost::any> temp1;
      for(auto item1:*databaseList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DatabaseList"] = boost::any(temp1);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sid") != m.end() && !m["Sid"].empty()) {
      sid = make_shared<string>(boost::any_cast<string>(m["Sid"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("DatabaseList") != m.end() && !m["DatabaseList"].empty()) {
      if (typeid(vector<boost::any>) == m["DatabaseList"].type()) {
        vector<GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DatabaseList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        databaseList = make_shared<vector<GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList>>(expect1);
      }
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~GetTableDBTopologyResponseBodyDBTopologyDataSourceList() = default;
};
class GetTableDBTopologyResponseBodyDBTopology : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};
  shared_ptr<vector<GetTableDBTopologyResponseBodyDBTopologyDataSourceList>> dataSourceList{};
  shared_ptr<string> tableGuid{};

  GetTableDBTopologyResponseBodyDBTopology() {}

  explicit GetTableDBTopologyResponseBodyDBTopology(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (dataSourceList) {
      vector<boost::any> temp1;
      for(auto item1:*dataSourceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSourceList"] = boost::any(temp1);
    }
    if (tableGuid) {
      res["TableGuid"] = boost::any(*tableGuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("DataSourceList") != m.end() && !m["DataSourceList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSourceList"].type()) {
        vector<GetTableDBTopologyResponseBodyDBTopologyDataSourceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSourceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTableDBTopologyResponseBodyDBTopologyDataSourceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSourceList = make_shared<vector<GetTableDBTopologyResponseBodyDBTopologyDataSourceList>>(expect1);
      }
    }
    if (m.find("TableGuid") != m.end() && !m["TableGuid"].empty()) {
      tableGuid = make_shared<string>(boost::any_cast<string>(m["TableGuid"]));
    }
  }


  virtual ~GetTableDBTopologyResponseBodyDBTopology() = default;
};
class GetTableDBTopologyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTableDBTopologyResponseBodyDBTopology> DBTopology{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  GetTableDBTopologyResponseBody() {}

  explicit GetTableDBTopologyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (DBTopology) {
      res["DBTopology"] = DBTopology ? boost::any(DBTopology->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("DBTopology") != m.end() && !m["DBTopology"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBTopology"].type()) {
        GetTableDBTopologyResponseBodyDBTopology model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBTopology"]));
        DBTopology = make_shared<GetTableDBTopologyResponseBodyDBTopology>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetTableDBTopologyResponseBody() = default;
};
class GetTableDBTopologyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTableDBTopologyResponseBody> body{};

  GetTableDBTopologyResponse() {}

  explicit GetTableDBTopologyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTableDBTopologyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTableDBTopologyResponseBody>(model1);
      }
    }
  }


  virtual ~GetTableDBTopologyResponse() = default;
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
  SubmitStructSyncOrderApprovalResponse submitStructSyncOrderApprovalWithOptions(shared_ptr<SubmitStructSyncOrderApprovalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitStructSyncOrderApprovalResponse submitStructSyncOrderApproval(shared_ptr<SubmitStructSyncOrderApprovalRequest> request);
  ListDatabaseUserPermssionsResponse listDatabaseUserPermssionsWithOptions(shared_ptr<ListDatabaseUserPermssionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatabaseUserPermssionsResponse listDatabaseUserPermssions(shared_ptr<ListDatabaseUserPermssionsRequest> request);
  ListSensitiveColumnsResponse listSensitiveColumnsWithOptions(shared_ptr<ListSensitiveColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSensitiveColumnsResponse listSensitiveColumns(shared_ptr<ListSensitiveColumnsRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  SubmitOrderApprovalResponse submitOrderApprovalWithOptions(shared_ptr<SubmitOrderApprovalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitOrderApprovalResponse submitOrderApproval(shared_ptr<SubmitOrderApprovalRequest> request);
  GrantUserPermissionResponse grantUserPermissionWithOptions(shared_ptr<GrantUserPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantUserPermissionResponse grantUserPermission(shared_ptr<GrantUserPermissionRequest> request);
  GetMetaTableDetailInfoResponse getMetaTableDetailInfoWithOptions(shared_ptr<GetMetaTableDetailInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMetaTableDetailInfoResponse getMetaTableDetailInfo(shared_ptr<GetMetaTableDetailInfoRequest> request);
  GetDataCorrectSQLFileResponse getDataCorrectSQLFileWithOptions(shared_ptr<GetDataCorrectSQLFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataCorrectSQLFileResponse getDataCorrectSQLFile(shared_ptr<GetDataCorrectSQLFileRequest> request);
  CreateFreeLockCorrectOrderResponse createFreeLockCorrectOrderWithOptions(shared_ptr<CreateFreeLockCorrectOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFreeLockCorrectOrderResponse createFreeLockCorrectOrder(shared_ptr<CreateFreeLockCorrectOrderRequest> request);
  CreateOrderResponse createOrderWithOptions(shared_ptr<CreateOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOrderResponse createOrder(shared_ptr<CreateOrderRequest> request);
  ListDatabasesResponse listDatabasesWithOptions(shared_ptr<ListDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatabasesResponse listDatabases(shared_ptr<ListDatabasesRequest> request);
  ListUserPermissionsResponse listUserPermissionsWithOptions(shared_ptr<ListUserPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserPermissionsResponse listUserPermissions(shared_ptr<ListUserPermissionsRequest> request);
  ListWorkFlowTemplatesResponse listWorkFlowTemplatesWithOptions(shared_ptr<ListWorkFlowTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkFlowTemplatesResponse listWorkFlowTemplates(shared_ptr<ListWorkFlowTemplatesRequest> request);
  GetDataExportOrderDetailResponse getDataExportOrderDetailWithOptions(shared_ptr<GetDataExportOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataExportOrderDetailResponse getDataExportOrderDetail(shared_ptr<GetDataExportOrderDetailRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  GetUserUploadFileJobResponse getUserUploadFileJobWithOptions(shared_ptr<GetUserUploadFileJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserUploadFileJobResponse getUserUploadFileJob(shared_ptr<GetUserUploadFileJobRequest> request);
  ListDDLPublishRecordsResponse listDDLPublishRecordsWithOptions(shared_ptr<ListDDLPublishRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDDLPublishRecordsResponse listDDLPublishRecords(shared_ptr<ListDDLPublishRecordsRequest> request);
  GetStructSyncJobDetailResponse getStructSyncJobDetailWithOptions(shared_ptr<GetStructSyncJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStructSyncJobDetailResponse getStructSyncJobDetail(shared_ptr<GetStructSyncJobDetailRequest> request);
  CreateUploadOSSFileJobResponse createUploadOSSFileJobWithOptions(shared_ptr<CreateUploadOSSFileJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUploadOSSFileJobResponse createUploadOSSFileJob(shared_ptr<CreateUploadOSSFileJobRequest> request);
  SearchDatabaseResponse searchDatabaseWithOptions(shared_ptr<SearchDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchDatabaseResponse searchDatabase(shared_ptr<SearchDatabaseRequest> request);
  GetDBTopologyResponse getDBTopologyWithOptions(shared_ptr<GetDBTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDBTopologyResponse getDBTopology(shared_ptr<GetDBTopologyRequest> request);
  SyncDatabaseMetaResponse syncDatabaseMetaWithOptions(shared_ptr<SyncDatabaseMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncDatabaseMetaResponse syncDatabaseMeta(shared_ptr<SyncDatabaseMetaRequest> request);
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  ExecuteStructSyncResponse executeStructSyncWithOptions(shared_ptr<ExecuteStructSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteStructSyncResponse executeStructSync(shared_ptr<ExecuteStructSyncRequest> request);
  GetDataCorrectOrderDetailResponse getDataCorrectOrderDetailWithOptions(shared_ptr<GetDataCorrectOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataCorrectOrderDetailResponse getDataCorrectOrderDetail(shared_ptr<GetDataCorrectOrderDetailRequest> request);
  ListColumnsResponse listColumnsWithOptions(shared_ptr<ListColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListColumnsResponse listColumns(shared_ptr<ListColumnsRequest> request);
  RevokeUserPermissionResponse revokeUserPermissionWithOptions(shared_ptr<RevokeUserPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeUserPermissionResponse revokeUserPermission(shared_ptr<RevokeUserPermissionRequest> request);
  GetMetaTableColumnResponse getMetaTableColumnWithOptions(shared_ptr<GetMetaTableColumnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMetaTableColumnResponse getMetaTableColumn(shared_ptr<GetMetaTableColumnRequest> request);
  EnableUserResponse enableUserWithOptions(shared_ptr<EnableUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableUserResponse enableUser(shared_ptr<EnableUserRequest> request);
  UpdateInstanceResponse updateInstanceWithOptions(shared_ptr<UpdateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceResponse updateInstance(shared_ptr<UpdateInstanceRequest> request);
  ExecuteScriptResponse executeScriptWithOptions(shared_ptr<ExecuteScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteScriptResponse executeScript(shared_ptr<ExecuteScriptRequest> request);
  ListDBTaskSQLJobDetailResponse listDBTaskSQLJobDetailWithOptions(shared_ptr<ListDBTaskSQLJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDBTaskSQLJobDetailResponse listDBTaskSQLJobDetail(shared_ptr<ListDBTaskSQLJobDetailRequest> request);
  DisableUserResponse disableUserWithOptions(shared_ptr<DisableUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableUserResponse disableUser(shared_ptr<DisableUserRequest> request);
  GetApprovalDetailResponse getApprovalDetailWithOptions(shared_ptr<GetApprovalDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetApprovalDetailResponse getApprovalDetail(shared_ptr<GetApprovalDetailRequest> request);
  GetUserActiveTenantResponse getUserActiveTenantWithOptions(shared_ptr<GetUserActiveTenantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserActiveTenantResponse getUserActiveTenant(shared_ptr<GetUserActiveTenantRequest> request);
  RegisterUserResponse registerUserWithOptions(shared_ptr<RegisterUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterUserResponse registerUser(shared_ptr<RegisterUserRequest> request);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<GetInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<GetInstanceRequest> request);
  GetPermApplyOrderDetailResponse getPermApplyOrderDetailWithOptions(shared_ptr<GetPermApplyOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPermApplyOrderDetailResponse getPermApplyOrderDetail(shared_ptr<GetPermApplyOrderDetailRequest> request);
  ListIndexesResponse listIndexesWithOptions(shared_ptr<ListIndexesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIndexesResponse listIndexes(shared_ptr<ListIndexesRequest> request);
  ListLogicTablesResponse listLogicTablesWithOptions(shared_ptr<ListLogicTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLogicTablesResponse listLogicTables(shared_ptr<ListLogicTablesRequest> request);
  GetTableTopologyResponse getTableTopologyWithOptions(shared_ptr<GetTableTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTableTopologyResponse getTableTopology(shared_ptr<GetTableTopologyRequest> request);
  GetDataExportDownloadURLResponse getDataExportDownloadURLWithOptions(shared_ptr<GetDataExportDownloadURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataExportDownloadURLResponse getDataExportDownloadURL(shared_ptr<GetDataExportDownloadURLRequest> request);
  CreateDataCronClearOrderResponse createDataCronClearOrderWithOptions(shared_ptr<CreateDataCronClearOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataCronClearOrderResponse createDataCronClearOrder(shared_ptr<CreateDataCronClearOrderRequest> request);
  CreatePublishGroupTaskResponse createPublishGroupTaskWithOptions(shared_ptr<CreatePublishGroupTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePublishGroupTaskResponse createPublishGroupTask(shared_ptr<CreatePublishGroupTaskRequest> request);
  GetDatabaseResponse getDatabaseWithOptions(shared_ptr<GetDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatabaseResponse getDatabase(shared_ptr<GetDatabaseRequest> request);
  GetOwnerApplyOrderDetailResponse getOwnerApplyOrderDetailWithOptions(shared_ptr<GetOwnerApplyOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOwnerApplyOrderDetailResponse getOwnerApplyOrderDetail(shared_ptr<GetOwnerApplyOrderDetailRequest> request);
  GetOpLogResponse getOpLogWithOptions(shared_ptr<GetOpLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOpLogResponse getOpLog(shared_ptr<GetOpLogRequest> request);
  SearchTableResponse searchTableWithOptions(shared_ptr<SearchTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchTableResponse searchTable(shared_ptr<SearchTableRequest> request);
  ListDBTaskSQLJobResponse listDBTaskSQLJobWithOptions(shared_ptr<ListDBTaskSQLJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDBTaskSQLJobResponse listDBTaskSQLJob(shared_ptr<ListDBTaskSQLJobRequest> request);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<DeleteUserRequest> request);
  GetDataCronClearTaskDetailListResponse getDataCronClearTaskDetailListWithOptions(shared_ptr<GetDataCronClearTaskDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataCronClearTaskDetailListResponse getDataCronClearTaskDetailList(shared_ptr<GetDataCronClearTaskDetailListRequest> request);
  GetStructSyncJobAnalyzeResultResponse getStructSyncJobAnalyzeResultWithOptions(shared_ptr<GetStructSyncJobAnalyzeResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStructSyncJobAnalyzeResultResponse getStructSyncJobAnalyzeResult(shared_ptr<GetStructSyncJobAnalyzeResultRequest> request);
  ApproveOrderResponse approveOrderWithOptions(shared_ptr<ApproveOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApproveOrderResponse approveOrder(shared_ptr<ApproveOrderRequest> request);
  GetDataCorrectTaskDetailResponse getDataCorrectTaskDetailWithOptions(shared_ptr<GetDataCorrectTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataCorrectTaskDetailResponse getDataCorrectTaskDetail(shared_ptr<GetDataCorrectTaskDetailRequest> request);
  CreateUploadFileJobResponse createUploadFileJobWithOptions(shared_ptr<CreateUploadFileJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUploadFileJobResponse createUploadFileJob(shared_ptr<CreateUploadFileJobRequest> request);
  ListLogicDatabasesResponse listLogicDatabasesWithOptions(shared_ptr<ListLogicDatabasesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLogicDatabasesResponse listLogicDatabases(shared_ptr<ListLogicDatabasesRequest> request);
  CreateDataImportOrderResponse createDataImportOrderWithOptions(shared_ptr<CreateDataImportOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataImportOrderResponse createDataImportOrder(shared_ptr<CreateDataImportOrderRequest> request);
  CloseOrderResponse closeOrderWithOptions(shared_ptr<CloseOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseOrderResponse closeOrder(shared_ptr<CloseOrderRequest> request);
  SyncInstanceMetaResponse syncInstanceMetaWithOptions(shared_ptr<SyncInstanceMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncInstanceMetaResponse syncInstanceMeta(shared_ptr<SyncInstanceMetaRequest> request);
  ListOrdersResponse listOrdersWithOptions(shared_ptr<ListOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOrdersResponse listOrders(shared_ptr<ListOrdersRequest> request);
  GetOrderBaseInfoResponse getOrderBaseInfoWithOptions(shared_ptr<GetOrderBaseInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrderBaseInfoResponse getOrderBaseInfo(shared_ptr<GetOrderBaseInfoRequest> request);
  ListUserTenantsResponse listUserTenantsWithOptions(shared_ptr<ListUserTenantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserTenantsResponse listUserTenants(shared_ptr<ListUserTenantsRequest> request);
  SetOwnersResponse setOwnersWithOptions(shared_ptr<SetOwnersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetOwnersResponse setOwners(shared_ptr<SetOwnersRequest> request);
  CreateDataCorrectOrderResponse createDataCorrectOrderWithOptions(shared_ptr<CreateDataCorrectOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataCorrectOrderResponse createDataCorrectOrder(shared_ptr<CreateDataCorrectOrderRequest> request);
  GetLogicDatabaseResponse getLogicDatabaseWithOptions(shared_ptr<GetLogicDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLogicDatabaseResponse getLogicDatabase(shared_ptr<GetLogicDatabaseRequest> request);
  GetDataCorrectBackupFilesResponse getDataCorrectBackupFilesWithOptions(shared_ptr<GetDataCorrectBackupFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataCorrectBackupFilesResponse getDataCorrectBackupFiles(shared_ptr<GetDataCorrectBackupFilesRequest> request);
  RegisterInstanceResponse registerInstanceWithOptions(shared_ptr<RegisterInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterInstanceResponse registerInstance(shared_ptr<RegisterInstanceRequest> request);
  CreateStructSyncOrderResponse createStructSyncOrderWithOptions(shared_ptr<CreateStructSyncOrderRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStructSyncOrderResponse createStructSyncOrder(shared_ptr<CreateStructSyncOrderRequest> request);
  ExecuteDataExportResponse executeDataExportWithOptions(shared_ptr<ExecuteDataExportRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteDataExportResponse executeDataExport(shared_ptr<ExecuteDataExportRequest> request);
  ExecuteDataCorrectResponse executeDataCorrectWithOptions(shared_ptr<ExecuteDataCorrectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteDataCorrectResponse executeDataCorrect(shared_ptr<ExecuteDataCorrectRequest> request);
  ListTablesResponse listTablesWithOptions(shared_ptr<ListTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTablesResponse listTables(shared_ptr<ListTablesRequest> request);
  ListWorkFlowNodesResponse listWorkFlowNodesWithOptions(shared_ptr<ListWorkFlowNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkFlowNodesResponse listWorkFlowNodes(shared_ptr<ListWorkFlowNodesRequest> request);
  GetStructSyncOrderDetailResponse getStructSyncOrderDetailWithOptions(shared_ptr<GetStructSyncOrderDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStructSyncOrderDetailResponse getStructSyncOrderDetail(shared_ptr<GetStructSyncOrderDetailRequest> request);
  ListSensitiveColumnsDetailResponse listSensitiveColumnsDetailWithOptions(shared_ptr<ListSensitiveColumnsDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSensitiveColumnsDetailResponse listSensitiveColumnsDetail(shared_ptr<ListSensitiveColumnsDetailRequest> request);
  UpdateUserResponse updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserResponse updateUser(shared_ptr<UpdateUserRequest> request);
  GetStructSyncExecSqlDetailResponse getStructSyncExecSqlDetailWithOptions(shared_ptr<GetStructSyncExecSqlDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStructSyncExecSqlDetailResponse getStructSyncExecSqlDetail(shared_ptr<GetStructSyncExecSqlDetailRequest> request);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<DeleteInstanceRequest> request);
  GetTableDBTopologyResponse getTableDBTopologyWithOptions(shared_ptr<GetTableDBTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTableDBTopologyResponse getTableDBTopology(shared_ptr<GetTableDBTopologyRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dms-enterprise20181101

#endif
