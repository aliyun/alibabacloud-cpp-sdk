// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ADB20190315_H_
#define ALIBABACLOUD_ADB20190315_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Adb20190315 {
class AllocateClusterPublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> connectionStringPrefix{};

  AllocateClusterPublicConnectionRequest() {}

  explicit AllocateClusterPublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
  }


  virtual ~AllocateClusterPublicConnectionRequest() = default;
};
class AllocateClusterPublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AllocateClusterPublicConnectionResponseBody() {}

  explicit AllocateClusterPublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AllocateClusterPublicConnectionResponseBody() = default;
};
class AllocateClusterPublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AllocateClusterPublicConnectionResponseBody> body{};

  AllocateClusterPublicConnectionResponse() {}

  explicit AllocateClusterPublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllocateClusterPublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateClusterPublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateClusterPublicConnectionResponse() = default;
};
class BindDBResourcePoolWithUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> poolName{};
  shared_ptr<string> poolUser{};

  BindDBResourcePoolWithUserRequest() {}

  explicit BindDBResourcePoolWithUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (poolName) {
      res["PoolName"] = boost::any(*poolName);
    }
    if (poolUser) {
      res["PoolUser"] = boost::any(*poolUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PoolName") != m.end() && !m["PoolName"].empty()) {
      poolName = make_shared<string>(boost::any_cast<string>(m["PoolName"]));
    }
    if (m.find("PoolUser") != m.end() && !m["PoolUser"].empty()) {
      poolUser = make_shared<string>(boost::any_cast<string>(m["PoolUser"]));
    }
  }


  virtual ~BindDBResourcePoolWithUserRequest() = default;
};
class BindDBResourcePoolWithUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BindDBResourcePoolWithUserResponseBody() {}

  explicit BindDBResourcePoolWithUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BindDBResourcePoolWithUserResponseBody() = default;
};
class BindDBResourcePoolWithUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BindDBResourcePoolWithUserResponseBody> body{};

  BindDBResourcePoolWithUserResponse() {}

  explicit BindDBResourcePoolWithUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindDBResourcePoolWithUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindDBResourcePoolWithUserResponseBody>(model1);
      }
    }
  }


  virtual ~BindDBResourcePoolWithUserResponse() = default;
};
class CreateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountType{};

  CreateAccountRequest() {}

  explicit CreateAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
  }


  virtual ~CreateAccountRequest() = default;
};
class CreateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> DBClusterId{};

  CreateAccountResponseBody() {}

  explicit CreateAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~CreateAccountResponseBody() = default;
};
class CreateAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAccountResponseBody> body{};

  CreateAccountResponse() {}

  explicit CreateAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccountResponse() = default;
};
class CreateDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> DBClusterVersion{};
  shared_ptr<string> DBClusterCategory{};
  shared_ptr<string> DBClusterClass{};
  shared_ptr<string> DBNodeGroupCount{};
  shared_ptr<string> DBNodeStorage{};
  shared_ptr<string> DBClusterNetworkType{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> usedTime{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> executorCount{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> mode{};
  shared_ptr<string> storageResource{};
  shared_ptr<string> storageType{};
  shared_ptr<string> computeResource{};
  shared_ptr<string> restoreType{};
  shared_ptr<string> sourceDBInstanceName{};
  shared_ptr<string> backupSetID{};
  shared_ptr<string> restoreTime{};
  shared_ptr<string> elasticIOResource{};

  CreateDBClusterRequest() {}

  explicit CreateDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (DBClusterVersion) {
      res["DBClusterVersion"] = boost::any(*DBClusterVersion);
    }
    if (DBClusterCategory) {
      res["DBClusterCategory"] = boost::any(*DBClusterCategory);
    }
    if (DBClusterClass) {
      res["DBClusterClass"] = boost::any(*DBClusterClass);
    }
    if (DBNodeGroupCount) {
      res["DBNodeGroupCount"] = boost::any(*DBNodeGroupCount);
    }
    if (DBNodeStorage) {
      res["DBNodeStorage"] = boost::any(*DBNodeStorage);
    }
    if (DBClusterNetworkType) {
      res["DBClusterNetworkType"] = boost::any(*DBClusterNetworkType);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (executorCount) {
      res["ExecutorCount"] = boost::any(*executorCount);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (storageResource) {
      res["StorageResource"] = boost::any(*storageResource);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (computeResource) {
      res["ComputeResource"] = boost::any(*computeResource);
    }
    if (restoreType) {
      res["RestoreType"] = boost::any(*restoreType);
    }
    if (sourceDBInstanceName) {
      res["SourceDBInstanceName"] = boost::any(*sourceDBInstanceName);
    }
    if (backupSetID) {
      res["BackupSetID"] = boost::any(*backupSetID);
    }
    if (restoreTime) {
      res["RestoreTime"] = boost::any(*restoreTime);
    }
    if (elasticIOResource) {
      res["ElasticIOResource"] = boost::any(*elasticIOResource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DBClusterVersion") != m.end() && !m["DBClusterVersion"].empty()) {
      DBClusterVersion = make_shared<string>(boost::any_cast<string>(m["DBClusterVersion"]));
    }
    if (m.find("DBClusterCategory") != m.end() && !m["DBClusterCategory"].empty()) {
      DBClusterCategory = make_shared<string>(boost::any_cast<string>(m["DBClusterCategory"]));
    }
    if (m.find("DBClusterClass") != m.end() && !m["DBClusterClass"].empty()) {
      DBClusterClass = make_shared<string>(boost::any_cast<string>(m["DBClusterClass"]));
    }
    if (m.find("DBNodeGroupCount") != m.end() && !m["DBNodeGroupCount"].empty()) {
      DBNodeGroupCount = make_shared<string>(boost::any_cast<string>(m["DBNodeGroupCount"]));
    }
    if (m.find("DBNodeStorage") != m.end() && !m["DBNodeStorage"].empty()) {
      DBNodeStorage = make_shared<string>(boost::any_cast<string>(m["DBNodeStorage"]));
    }
    if (m.find("DBClusterNetworkType") != m.end() && !m["DBClusterNetworkType"].empty()) {
      DBClusterNetworkType = make_shared<string>(boost::any_cast<string>(m["DBClusterNetworkType"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<string>(boost::any_cast<string>(m["UsedTime"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ExecutorCount") != m.end() && !m["ExecutorCount"].empty()) {
      executorCount = make_shared<string>(boost::any_cast<string>(m["ExecutorCount"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("StorageResource") != m.end() && !m["StorageResource"].empty()) {
      storageResource = make_shared<string>(boost::any_cast<string>(m["StorageResource"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("ComputeResource") != m.end() && !m["ComputeResource"].empty()) {
      computeResource = make_shared<string>(boost::any_cast<string>(m["ComputeResource"]));
    }
    if (m.find("RestoreType") != m.end() && !m["RestoreType"].empty()) {
      restoreType = make_shared<string>(boost::any_cast<string>(m["RestoreType"]));
    }
    if (m.find("SourceDBInstanceName") != m.end() && !m["SourceDBInstanceName"].empty()) {
      sourceDBInstanceName = make_shared<string>(boost::any_cast<string>(m["SourceDBInstanceName"]));
    }
    if (m.find("BackupSetID") != m.end() && !m["BackupSetID"].empty()) {
      backupSetID = make_shared<string>(boost::any_cast<string>(m["BackupSetID"]));
    }
    if (m.find("RestoreTime") != m.end() && !m["RestoreTime"].empty()) {
      restoreTime = make_shared<string>(boost::any_cast<string>(m["RestoreTime"]));
    }
    if (m.find("ElasticIOResource") != m.end() && !m["ElasticIOResource"].empty()) {
      elasticIOResource = make_shared<string>(boost::any_cast<string>(m["ElasticIOResource"]));
    }
  }


  virtual ~CreateDBClusterRequest() = default;
};
class CreateDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> orderId{};

  CreateDBClusterResponseBody() {}

  explicit CreateDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~CreateDBClusterResponseBody() = default;
};
class CreateDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDBClusterResponseBody> body{};

  CreateDBClusterResponse() {}

  explicit CreateDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBClusterResponse() = default;
};
class CreateDBResourcePoolRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> poolName{};
  shared_ptr<string> queryType{};
  shared_ptr<long> nodeNum{};

  CreateDBResourcePoolRequest() {}

  explicit CreateDBResourcePoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (poolName) {
      res["PoolName"] = boost::any(*poolName);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (nodeNum) {
      res["NodeNum"] = boost::any(*nodeNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PoolName") != m.end() && !m["PoolName"].empty()) {
      poolName = make_shared<string>(boost::any_cast<string>(m["PoolName"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("NodeNum") != m.end() && !m["NodeNum"].empty()) {
      nodeNum = make_shared<long>(boost::any_cast<long>(m["NodeNum"]));
    }
  }


  virtual ~CreateDBResourcePoolRequest() = default;
};
class CreateDBResourcePoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDBResourcePoolResponseBody() {}

  explicit CreateDBResourcePoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDBResourcePoolResponseBody() = default;
};
class CreateDBResourcePoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDBResourcePoolResponseBody> body{};

  CreateDBResourcePoolResponse() {}

  explicit CreateDBResourcePoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDBResourcePoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBResourcePoolResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBResourcePoolResponse() = default;
};
class CreateElasticPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> elasticPlanName{};
  shared_ptr<string> resourcePoolName{};
  shared_ptr<long> elasticPlanNodeNum{};
  shared_ptr<string> elasticPlanTimeStart{};
  shared_ptr<string> elasticPlanTimeEnd{};
  shared_ptr<string> elasticPlanWeeklyRepeat{};
  shared_ptr<string> elasticPlanStartDay{};
  shared_ptr<string> elasticPlanEndDay{};
  shared_ptr<bool> elasticPlanEnable{};

  CreateElasticPlanRequest() {}

  explicit CreateElasticPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    if (resourcePoolName) {
      res["ResourcePoolName"] = boost::any(*resourcePoolName);
    }
    if (elasticPlanNodeNum) {
      res["ElasticPlanNodeNum"] = boost::any(*elasticPlanNodeNum);
    }
    if (elasticPlanTimeStart) {
      res["ElasticPlanTimeStart"] = boost::any(*elasticPlanTimeStart);
    }
    if (elasticPlanTimeEnd) {
      res["ElasticPlanTimeEnd"] = boost::any(*elasticPlanTimeEnd);
    }
    if (elasticPlanWeeklyRepeat) {
      res["ElasticPlanWeeklyRepeat"] = boost::any(*elasticPlanWeeklyRepeat);
    }
    if (elasticPlanStartDay) {
      res["ElasticPlanStartDay"] = boost::any(*elasticPlanStartDay);
    }
    if (elasticPlanEndDay) {
      res["ElasticPlanEndDay"] = boost::any(*elasticPlanEndDay);
    }
    if (elasticPlanEnable) {
      res["ElasticPlanEnable"] = boost::any(*elasticPlanEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
    if (m.find("ResourcePoolName") != m.end() && !m["ResourcePoolName"].empty()) {
      resourcePoolName = make_shared<string>(boost::any_cast<string>(m["ResourcePoolName"]));
    }
    if (m.find("ElasticPlanNodeNum") != m.end() && !m["ElasticPlanNodeNum"].empty()) {
      elasticPlanNodeNum = make_shared<long>(boost::any_cast<long>(m["ElasticPlanNodeNum"]));
    }
    if (m.find("ElasticPlanTimeStart") != m.end() && !m["ElasticPlanTimeStart"].empty()) {
      elasticPlanTimeStart = make_shared<string>(boost::any_cast<string>(m["ElasticPlanTimeStart"]));
    }
    if (m.find("ElasticPlanTimeEnd") != m.end() && !m["ElasticPlanTimeEnd"].empty()) {
      elasticPlanTimeEnd = make_shared<string>(boost::any_cast<string>(m["ElasticPlanTimeEnd"]));
    }
    if (m.find("ElasticPlanWeeklyRepeat") != m.end() && !m["ElasticPlanWeeklyRepeat"].empty()) {
      elasticPlanWeeklyRepeat = make_shared<string>(boost::any_cast<string>(m["ElasticPlanWeeklyRepeat"]));
    }
    if (m.find("ElasticPlanStartDay") != m.end() && !m["ElasticPlanStartDay"].empty()) {
      elasticPlanStartDay = make_shared<string>(boost::any_cast<string>(m["ElasticPlanStartDay"]));
    }
    if (m.find("ElasticPlanEndDay") != m.end() && !m["ElasticPlanEndDay"].empty()) {
      elasticPlanEndDay = make_shared<string>(boost::any_cast<string>(m["ElasticPlanEndDay"]));
    }
    if (m.find("ElasticPlanEnable") != m.end() && !m["ElasticPlanEnable"].empty()) {
      elasticPlanEnable = make_shared<bool>(boost::any_cast<bool>(m["ElasticPlanEnable"]));
    }
  }


  virtual ~CreateElasticPlanRequest() = default;
};
class CreateElasticPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateElasticPlanResponseBody() {}

  explicit CreateElasticPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateElasticPlanResponseBody() = default;
};
class CreateElasticPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateElasticPlanResponseBody> body{};

  CreateElasticPlanResponse() {}

  explicit CreateElasticPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateElasticPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateElasticPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateElasticPlanResponse() = default;
};
class DeleteAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountType{};

  DeleteAccountRequest() {}

  explicit DeleteAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
  }


  virtual ~DeleteAccountRequest() = default;
};
class DeleteAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAccountResponseBody() {}

  explicit DeleteAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAccountResponseBody() = default;
};
class DeleteAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteAccountResponseBody> body{};

  DeleteAccountResponse() {}

  explicit DeleteAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAccountResponse() = default;
};
class DeleteDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};

  DeleteDBClusterRequest() {}

  explicit DeleteDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DeleteDBClusterRequest() = default;
};
class DeleteDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> DBClusterId{};

  DeleteDBClusterResponseBody() {}

  explicit DeleteDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DeleteDBClusterResponseBody() = default;
};
class DeleteDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDBClusterResponseBody> body{};

  DeleteDBClusterResponse() {}

  explicit DeleteDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBClusterResponse() = default;
};
class DeleteDBResourcePoolRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> poolName{};

  DeleteDBResourcePoolRequest() {}

  explicit DeleteDBResourcePoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (poolName) {
      res["PoolName"] = boost::any(*poolName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PoolName") != m.end() && !m["PoolName"].empty()) {
      poolName = make_shared<string>(boost::any_cast<string>(m["PoolName"]));
    }
  }


  virtual ~DeleteDBResourcePoolRequest() = default;
};
class DeleteDBResourcePoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDBResourcePoolResponseBody() {}

  explicit DeleteDBResourcePoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDBResourcePoolResponseBody() = default;
};
class DeleteDBResourcePoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDBResourcePoolResponseBody> body{};

  DeleteDBResourcePoolResponse() {}

  explicit DeleteDBResourcePoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDBResourcePoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBResourcePoolResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBResourcePoolResponse() = default;
};
class DeleteElasticPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> elasticPlanName{};

  DeleteElasticPlanRequest() {}

  explicit DeleteElasticPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
  }


  virtual ~DeleteElasticPlanRequest() = default;
};
class DeleteElasticPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteElasticPlanResponseBody() {}

  explicit DeleteElasticPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteElasticPlanResponseBody() = default;
};
class DeleteElasticPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteElasticPlanResponseBody> body{};

  DeleteElasticPlanResponse() {}

  explicit DeleteElasticPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteElasticPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteElasticPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteElasticPlanResponse() = default;
};
class DescribeAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountType{};

  DescribeAccountsRequest() {}

  explicit DescribeAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
  }


  virtual ~DescribeAccountsRequest() = default;
};
class DescribeAccountsResponseBodyAccountListDBAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountStatus{};
  shared_ptr<string> accountDescription{};
  shared_ptr<string> accountType{};
  shared_ptr<string> accountName{};

  DescribeAccountsResponseBodyAccountListDBAccount() {}

  explicit DescribeAccountsResponseBodyAccountListDBAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DescribeAccountsResponseBodyAccountListDBAccount() = default;
};
class DescribeAccountsResponseBodyAccountList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccountsResponseBodyAccountListDBAccount>> DBAccount{};

  DescribeAccountsResponseBodyAccountList() {}

  explicit DescribeAccountsResponseBodyAccountList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBAccount) {
      vector<boost::any> temp1;
      for(auto item1:*DBAccount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBAccount"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBAccount") != m.end() && !m["DBAccount"].empty()) {
      if (typeid(vector<boost::any>) == m["DBAccount"].type()) {
        vector<DescribeAccountsResponseBodyAccountListDBAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBAccount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountsResponseBodyAccountListDBAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBAccount = make_shared<vector<DescribeAccountsResponseBodyAccountListDBAccount>>(expect1);
      }
    }
  }


  virtual ~DescribeAccountsResponseBodyAccountList() = default;
};
class DescribeAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAccountsResponseBodyAccountList> accountList{};

  DescribeAccountsResponseBody() {}

  explicit DescribeAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (accountList) {
      res["AccountList"] = accountList ? boost::any(accountList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AccountList") != m.end() && !m["AccountList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountList"].type()) {
        DescribeAccountsResponseBodyAccountList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountList"]));
        accountList = make_shared<DescribeAccountsResponseBodyAccountList>(model1);
      }
    }
  }


  virtual ~DescribeAccountsResponseBody() = default;
};
class DescribeAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAccountsResponseBody> body{};

  DescribeAccountsResponse() {}

  explicit DescribeAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountsResponse() = default;
};
class DescribeAllAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};

  DescribeAllAccountsRequest() {}

  explicit DescribeAllAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeAllAccountsRequest() = default;
};
class DescribeAllAccountsResponseBodyAccountList : public Darabonba::Model {
public:
  shared_ptr<string> user{};

  DescribeAllAccountsResponseBodyAccountList() {}

  explicit DescribeAllAccountsResponseBodyAccountList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DescribeAllAccountsResponseBodyAccountList() = default;
};
class DescribeAllAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeAllAccountsResponseBodyAccountList>> accountList{};

  DescribeAllAccountsResponseBody() {}

  explicit DescribeAllAccountsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (accountList) {
      vector<boost::any> temp1;
      for(auto item1:*accountList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccountList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AccountList") != m.end() && !m["AccountList"].empty()) {
      if (typeid(vector<boost::any>) == m["AccountList"].type()) {
        vector<DescribeAllAccountsResponseBodyAccountList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccountList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllAccountsResponseBodyAccountList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accountList = make_shared<vector<DescribeAllAccountsResponseBodyAccountList>>(expect1);
      }
    }
  }


  virtual ~DescribeAllAccountsResponseBody() = default;
};
class DescribeAllAccountsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAllAccountsResponseBody> body{};

  DescribeAllAccountsResponse() {}

  explicit DescribeAllAccountsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAllAccountsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAllAccountsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAllAccountsResponse() = default;
};
class DescribeAllDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeAllDataSourceRequest() {}

  explicit DescribeAllDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeAllDataSourceRequest() = default;
};
class DescribeAllDataSourceResponseBodyTablesTable : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};

  DescribeAllDataSourceResponseBodyTablesTable() {}

  explicit DescribeAllDataSourceResponseBodyTablesTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~DescribeAllDataSourceResponseBodyTablesTable() = default;
};
class DescribeAllDataSourceResponseBodyTables : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllDataSourceResponseBodyTablesTable>> table{};

  DescribeAllDataSourceResponseBodyTables() {}

  explicit DescribeAllDataSourceResponseBodyTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeAllDataSourceResponseBodyTablesTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllDataSourceResponseBodyTablesTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<DescribeAllDataSourceResponseBodyTablesTable>>(expect1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponseBodyTables() = default;
};
class DescribeAllDataSourceResponseBodyColumnsColumn : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> columnName{};
  shared_ptr<string> tableName{};
  shared_ptr<bool> autoIncrementColumn{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> primaryKey{};
  shared_ptr<string> schemaName{};

  DescribeAllDataSourceResponseBodyColumnsColumn() {}

  explicit DescribeAllDataSourceResponseBodyColumnsColumn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (autoIncrementColumn) {
      res["AutoIncrementColumn"] = boost::any(*autoIncrementColumn);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (primaryKey) {
      res["PrimaryKey"] = boost::any(*primaryKey);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("AutoIncrementColumn") != m.end() && !m["AutoIncrementColumn"].empty()) {
      autoIncrementColumn = make_shared<bool>(boost::any_cast<bool>(m["AutoIncrementColumn"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PrimaryKey") != m.end() && !m["PrimaryKey"].empty()) {
      primaryKey = make_shared<bool>(boost::any_cast<bool>(m["PrimaryKey"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~DescribeAllDataSourceResponseBodyColumnsColumn() = default;
};
class DescribeAllDataSourceResponseBodyColumns : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllDataSourceResponseBodyColumnsColumn>> column{};

  DescribeAllDataSourceResponseBodyColumns() {}

  explicit DescribeAllDataSourceResponseBodyColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeAllDataSourceResponseBodyColumnsColumn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Column"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllDataSourceResponseBodyColumnsColumn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        column = make_shared<vector<DescribeAllDataSourceResponseBodyColumnsColumn>>(expect1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponseBodyColumns() = default;
};
class DescribeAllDataSourceResponseBodySchemasSchema : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};

  DescribeAllDataSourceResponseBodySchemasSchema() {}

  explicit DescribeAllDataSourceResponseBodySchemasSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~DescribeAllDataSourceResponseBodySchemasSchema() = default;
};
class DescribeAllDataSourceResponseBodySchemas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllDataSourceResponseBodySchemasSchema>> schema{};

  DescribeAllDataSourceResponseBodySchemas() {}

  explicit DescribeAllDataSourceResponseBodySchemas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schema) {
      vector<boost::any> temp1;
      for(auto item1:*schema){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schema"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      if (typeid(vector<boost::any>) == m["Schema"].type()) {
        vector<DescribeAllDataSourceResponseBodySchemasSchema> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schema"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllDataSourceResponseBodySchemasSchema model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schema = make_shared<vector<DescribeAllDataSourceResponseBodySchemasSchema>>(expect1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponseBodySchemas() = default;
};
class DescribeAllDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAllDataSourceResponseBodyTables> tables{};
  shared_ptr<DescribeAllDataSourceResponseBodyColumns> columns{};
  shared_ptr<DescribeAllDataSourceResponseBodySchemas> schemas{};

  DescribeAllDataSourceResponseBody() {}

  explicit DescribeAllDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tables) {
      res["Tables"] = tables ? boost::any(tables->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (columns) {
      res["Columns"] = columns ? boost::any(columns->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (schemas) {
      res["Schemas"] = schemas ? boost::any(schemas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tables"].type()) {
        DescribeAllDataSourceResponseBodyTables model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tables"]));
        tables = make_shared<DescribeAllDataSourceResponseBodyTables>(model1);
      }
    }
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(map<string, boost::any>) == m["Columns"].type()) {
        DescribeAllDataSourceResponseBodyColumns model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Columns"]));
        columns = make_shared<DescribeAllDataSourceResponseBodyColumns>(model1);
      }
    }
    if (m.find("Schemas") != m.end() && !m["Schemas"].empty()) {
      if (typeid(map<string, boost::any>) == m["Schemas"].type()) {
        DescribeAllDataSourceResponseBodySchemas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Schemas"]));
        schemas = make_shared<DescribeAllDataSourceResponseBodySchemas>(model1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponseBody() = default;
};
class DescribeAllDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAllDataSourceResponseBody> body{};

  DescribeAllDataSourceResponse() {}

  explicit DescribeAllDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAllDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAllDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAllDataSourceResponse() = default;
};
class DescribeAuditLogConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};

  DescribeAuditLogConfigRequest() {}

  explicit DescribeAuditLogConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAuditLogConfigRequest() = default;
};
class DescribeAuditLogConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> auditLogStatus{};
  shared_ptr<string> DBClusterId{};

  DescribeAuditLogConfigResponseBody() {}

  explicit DescribeAuditLogConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (auditLogStatus) {
      res["AuditLogStatus"] = boost::any(*auditLogStatus);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AuditLogStatus") != m.end() && !m["AuditLogStatus"].empty()) {
      auditLogStatus = make_shared<string>(boost::any_cast<string>(m["AuditLogStatus"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeAuditLogConfigResponseBody() = default;
};
class DescribeAuditLogConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAuditLogConfigResponseBody> body{};

  DescribeAuditLogConfigResponse() {}

  explicit DescribeAuditLogConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAuditLogConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditLogConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditLogConfigResponse() = default;
};
class DescribeAuditLogRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> DBName{};
  shared_ptr<string> queryKeyword{};
  shared_ptr<string> sqlType{};
  shared_ptr<string> succeed{};
  shared_ptr<string> hostAddress{};
  shared_ptr<string> orderType{};
  shared_ptr<string> user{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeAuditLogRecordsRequest() {}

  explicit DescribeAuditLogRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (queryKeyword) {
      res["QueryKeyword"] = boost::any(*queryKeyword);
    }
    if (sqlType) {
      res["SqlType"] = boost::any(*sqlType);
    }
    if (succeed) {
      res["Succeed"] = boost::any(*succeed);
    }
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (user) {
      res["User"] = boost::any(*user);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("QueryKeyword") != m.end() && !m["QueryKeyword"].empty()) {
      queryKeyword = make_shared<string>(boost::any_cast<string>(m["QueryKeyword"]));
    }
    if (m.find("SqlType") != m.end() && !m["SqlType"].empty()) {
      sqlType = make_shared<string>(boost::any_cast<string>(m["SqlType"]));
    }
    if (m.find("Succeed") != m.end() && !m["Succeed"].empty()) {
      succeed = make_shared<string>(boost::any_cast<string>(m["Succeed"]));
    }
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeAuditLogRecordsRequest() = default;
};
class DescribeAuditLogRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> hostAddress{};
  shared_ptr<string> succeed{};
  shared_ptr<string> SQLText{};
  shared_ptr<string> totalTime{};
  shared_ptr<string> connId{};
  shared_ptr<string> DBName{};
  shared_ptr<string> SQLType{};
  shared_ptr<string> executeTime{};
  shared_ptr<string> processID{};

  DescribeAuditLogRecordsResponseBodyItems() {}

  explicit DescribeAuditLogRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (succeed) {
      res["Succeed"] = boost::any(*succeed);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    if (totalTime) {
      res["TotalTime"] = boost::any(*totalTime);
    }
    if (connId) {
      res["ConnId"] = boost::any(*connId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (SQLType) {
      res["SQLType"] = boost::any(*SQLType);
    }
    if (executeTime) {
      res["ExecuteTime"] = boost::any(*executeTime);
    }
    if (processID) {
      res["ProcessID"] = boost::any(*processID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("Succeed") != m.end() && !m["Succeed"].empty()) {
      succeed = make_shared<string>(boost::any_cast<string>(m["Succeed"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
    if (m.find("TotalTime") != m.end() && !m["TotalTime"].empty()) {
      totalTime = make_shared<string>(boost::any_cast<string>(m["TotalTime"]));
    }
    if (m.find("ConnId") != m.end() && !m["ConnId"].empty()) {
      connId = make_shared<string>(boost::any_cast<string>(m["ConnId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("SQLType") != m.end() && !m["SQLType"].empty()) {
      SQLType = make_shared<string>(boost::any_cast<string>(m["SQLType"]));
    }
    if (m.find("ExecuteTime") != m.end() && !m["ExecuteTime"].empty()) {
      executeTime = make_shared<string>(boost::any_cast<string>(m["ExecuteTime"]));
    }
    if (m.find("ProcessID") != m.end() && !m["ProcessID"].empty()) {
      processID = make_shared<string>(boost::any_cast<string>(m["ProcessID"]));
    }
  }


  virtual ~DescribeAuditLogRecordsResponseBodyItems() = default;
};
class DescribeAuditLogRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> totalCount{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<DescribeAuditLogRecordsResponseBodyItems>> items{};

  DescribeAuditLogRecordsResponseBody() {}

  explicit DescribeAuditLogRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeAuditLogRecordsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAuditLogRecordsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeAuditLogRecordsResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeAuditLogRecordsResponseBody() = default;
};
class DescribeAuditLogRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAuditLogRecordsResponseBody> body{};

  DescribeAuditLogRecordsResponse() {}

  explicit DescribeAuditLogRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAuditLogRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditLogRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditLogRecordsResponse() = default;
};
class DescribeAutoRenewAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> DBClusterIds{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> resourceGroupId{};

  DescribeAutoRenewAttributeRequest() {}

  explicit DescribeAutoRenewAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (DBClusterIds) {
      res["DBClusterIds"] = boost::any(*DBClusterIds);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DBClusterIds") != m.end() && !m["DBClusterIds"].empty()) {
      DBClusterIds = make_shared<string>(boost::any_cast<string>(m["DBClusterIds"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~DescribeAutoRenewAttributeRequest() = default;
};
class DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> periodUnit{};
  shared_ptr<long> duration{};
  shared_ptr<string> renewalStatus{};
  shared_ptr<bool> autoRenewEnabled{};
  shared_ptr<string> regionId{};

  DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute() {}

  explicit DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (renewalStatus) {
      res["RenewalStatus"] = boost::any(*renewalStatus);
    }
    if (autoRenewEnabled) {
      res["AutoRenewEnabled"] = boost::any(*autoRenewEnabled);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("RenewalStatus") != m.end() && !m["RenewalStatus"].empty()) {
      renewalStatus = make_shared<string>(boost::any_cast<string>(m["RenewalStatus"]));
    }
    if (m.find("AutoRenewEnabled") != m.end() && !m["AutoRenewEnabled"].empty()) {
      autoRenewEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewEnabled"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute() = default;
};
class DescribeAutoRenewAttributeResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute>> autoRenewAttribute{};

  DescribeAutoRenewAttributeResponseBodyItems() {}

  explicit DescribeAutoRenewAttributeResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenewAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*autoRenewAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AutoRenewAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenewAttribute") != m.end() && !m["AutoRenewAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["AutoRenewAttribute"].type()) {
        vector<DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AutoRenewAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        autoRenewAttribute = make_shared<vector<DescribeAutoRenewAttributeResponseBodyItemsAutoRenewAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribeAutoRenewAttributeResponseBodyItems() = default;
};
class DescribeAutoRenewAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalRecordCount{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribeAutoRenewAttributeResponseBodyItems> items{};

  DescribeAutoRenewAttributeResponseBody() {}

  explicit DescribeAutoRenewAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeAutoRenewAttributeResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeAutoRenewAttributeResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeAutoRenewAttributeResponseBody() = default;
};
class DescribeAutoRenewAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAutoRenewAttributeResponseBody> body{};

  DescribeAutoRenewAttributeResponse() {}

  explicit DescribeAutoRenewAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAutoRenewAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAutoRenewAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAutoRenewAttributeResponse() = default;
};
class DescribeAvailableResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> acceptLanguage{};

  DescribeAvailableResourceRequest() {}

  explicit DescribeAvailableResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~DescribeAvailableResourceRequest() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorListNodeCount : public Darabonba::Model {
public:
  shared_ptr<string> step{};
  shared_ptr<string> minCount{};
  shared_ptr<string> maxCount{};

  DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorListNodeCount() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorListNodeCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (step) {
      res["Step"] = boost::any(*step);
    }
    if (minCount) {
      res["MinCount"] = boost::any(*minCount);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<string>(boost::any_cast<string>(m["Step"]));
    }
    if (m.find("MinCount") != m.end() && !m["MinCount"].empty()) {
      minCount = make_shared<string>(boost::any_cast<string>(m["MinCount"]));
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<string>(boost::any_cast<string>(m["MaxCount"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorListNodeCount() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorListNodeCount> nodeCount{};

  DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeCount) {
      res["NodeCount"] = nodeCount ? boost::any(nodeCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeCount"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorListNodeCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeCount"]));
        nodeCount = make_shared<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorListNodeCount>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountListNodeCount : public Darabonba::Model {
public:
  shared_ptr<string> step{};
  shared_ptr<string> minCount{};
  shared_ptr<string> maxCount{};

  DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountListNodeCount() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountListNodeCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (step) {
      res["Step"] = boost::any(*step);
    }
    if (minCount) {
      res["MinCount"] = boost::any(*minCount);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<string>(boost::any_cast<string>(m["Step"]));
    }
    if (m.find("MinCount") != m.end() && !m["MinCount"].empty()) {
      minCount = make_shared<string>(boost::any_cast<string>(m["MinCount"]));
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<string>(boost::any_cast<string>(m["MaxCount"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountListNodeCount() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountListNodeCount> nodeCount{};
  shared_ptr<vector<string>> storageSize{};

  DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeCount) {
      res["NodeCount"] = nodeCount ? boost::any(nodeCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeCount"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountListNodeCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeCount"]));
        nodeCount = make_shared<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountListNodeCount>(model1);
      }
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StorageSize"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StorageSize"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      storageSize = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList>> supportedExecutorList{};
  shared_ptr<string> instanceClass{};
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList>> supportedNodeCountList{};
  shared_ptr<string> tips{};

  DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedExecutorList) {
      vector<boost::any> temp1;
      for(auto item1:*supportedExecutorList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedExecutorList"] = boost::any(temp1);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (supportedNodeCountList) {
      vector<boost::any> temp1;
      for(auto item1:*supportedNodeCountList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedNodeCountList"] = boost::any(temp1);
    }
    if (tips) {
      res["Tips"] = boost::any(*tips);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedExecutorList") != m.end() && !m["SupportedExecutorList"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedExecutorList"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedExecutorList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedExecutorList = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedExecutorList>>(expect1);
      }
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("SupportedNodeCountList") != m.end() && !m["SupportedNodeCountList"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedNodeCountList"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedNodeCountList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedNodeCountList = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassListSupportedNodeCountList>>(expect1);
      }
    }
    if (m.find("Tips") != m.end() && !m["Tips"].empty()) {
      tips = make_shared<string>(boost::any_cast<string>(m["Tips"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource : public Darabonba::Model {
public:
  shared_ptr<string> step{};
  shared_ptr<string> minCount{};
  shared_ptr<string> maxCount{};

  DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (step) {
      res["Step"] = boost::any(*step);
    }
    if (minCount) {
      res["MinCount"] = boost::any(*minCount);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<string>(boost::any_cast<string>(m["Step"]));
    }
    if (m.find("MinCount") != m.end() && !m["MinCount"].empty()) {
      minCount = make_shared<string>(boost::any_cast<string>(m["MinCount"]));
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<string>(boost::any_cast<string>(m["MaxCount"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource> supportedElasticIOResource{};
  shared_ptr<vector<string>> supportedStorageResource{};
  shared_ptr<string> storageType{};
  shared_ptr<vector<string>> supportedComputeResource{};

  DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedElasticIOResource) {
      res["SupportedElasticIOResource"] = supportedElasticIOResource ? boost::any(supportedElasticIOResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (supportedStorageResource) {
      res["SupportedStorageResource"] = boost::any(*supportedStorageResource);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (supportedComputeResource) {
      res["SupportedComputeResource"] = boost::any(*supportedComputeResource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedElasticIOResource") != m.end() && !m["SupportedElasticIOResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportedElasticIOResource"].type()) {
        DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportedElasticIOResource"]));
        supportedElasticIOResource = make_shared<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResourceSupportedElasticIOResource>(model1);
      }
    }
    if (m.find("SupportedStorageResource") != m.end() && !m["SupportedStorageResource"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedStorageResource"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedStorageResource"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedStorageResource = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("SupportedComputeResource") != m.end() && !m["SupportedComputeResource"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedComputeResource"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedComputeResource"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedComputeResource = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList : public Darabonba::Model {
public:
  shared_ptr<string> serial{};
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList>> supportedInstanceClassList{};
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource>> supportedFlexibleResource{};

  DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serial) {
      res["Serial"] = boost::any(*serial);
    }
    if (supportedInstanceClassList) {
      vector<boost::any> temp1;
      for(auto item1:*supportedInstanceClassList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedInstanceClassList"] = boost::any(temp1);
    }
    if (supportedFlexibleResource) {
      vector<boost::any> temp1;
      for(auto item1:*supportedFlexibleResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedFlexibleResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Serial") != m.end() && !m["Serial"].empty()) {
      serial = make_shared<string>(boost::any_cast<string>(m["Serial"]));
    }
    if (m.find("SupportedInstanceClassList") != m.end() && !m["SupportedInstanceClassList"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedInstanceClassList"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedInstanceClassList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedInstanceClassList = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedInstanceClassList>>(expect1);
      }
    }
    if (m.find("SupportedFlexibleResource") != m.end() && !m["SupportedFlexibleResource"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedFlexibleResource"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedFlexibleResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedFlexibleResource = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialListSupportedFlexibleResource>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList>> supportedSerialList{};
  shared_ptr<string> mode{};

  DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedSerialList) {
      vector<boost::any> temp1;
      for(auto item1:*supportedSerialList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedSerialList"] = boost::any(temp1);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedSerialList") != m.end() && !m["SupportedSerialList"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedSerialList"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedSerialList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedSerialList = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedModeSupportedSerialList>>(expect1);
      }
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode() = default;
};
class DescribeAvailableResourceResponseBodyAvailableZoneList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode>> supportedMode{};
  shared_ptr<string> zoneId{};

  DescribeAvailableResourceResponseBodyAvailableZoneList() {}

  explicit DescribeAvailableResourceResponseBodyAvailableZoneList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedMode) {
      vector<boost::any> temp1;
      for(auto item1:*supportedMode){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedMode"] = boost::any(temp1);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedMode") != m.end() && !m["SupportedMode"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedMode"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedMode"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedMode = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZoneListSupportedMode>>(expect1);
      }
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeAvailableResourceResponseBodyAvailableZoneList() = default;
};
class DescribeAvailableResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<DescribeAvailableResourceResponseBodyAvailableZoneList>> availableZoneList{};

  DescribeAvailableResourceResponseBody() {}

  explicit DescribeAvailableResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (availableZoneList) {
      vector<boost::any> temp1;
      for(auto item1:*availableZoneList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvailableZoneList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AvailableZoneList") != m.end() && !m["AvailableZoneList"].empty()) {
      if (typeid(vector<boost::any>) == m["AvailableZoneList"].type()) {
        vector<DescribeAvailableResourceResponseBodyAvailableZoneList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvailableZoneList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourceResponseBodyAvailableZoneList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        availableZoneList = make_shared<vector<DescribeAvailableResourceResponseBodyAvailableZoneList>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponseBody() = default;
};
class DescribeAvailableResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAvailableResourceResponseBody> body{};

  DescribeAvailableResourceResponse() {}

  explicit DescribeAvailableResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAvailableResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAvailableResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourceResponse() = default;
};
class DescribeBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};

  DescribeBackupPolicyRequest() {}

  explicit DescribeBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeBackupPolicyRequest() = default;
};
class DescribeBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<long> logBackupRetentionPeriod{};
  shared_ptr<string> requestId{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> enableBackupLog{};
  shared_ptr<long> backupRetentionPeriod{};

  DescribeBackupPolicyResponseBody() {}

  explicit DescribeBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (logBackupRetentionPeriod) {
      res["LogBackupRetentionPeriod"] = boost::any(*logBackupRetentionPeriod);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (enableBackupLog) {
      res["EnableBackupLog"] = boost::any(*enableBackupLog);
    }
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("LogBackupRetentionPeriod") != m.end() && !m["LogBackupRetentionPeriod"].empty()) {
      logBackupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["LogBackupRetentionPeriod"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("EnableBackupLog") != m.end() && !m["EnableBackupLog"].empty()) {
      enableBackupLog = make_shared<string>(boost::any_cast<string>(m["EnableBackupLog"]));
    }
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
  }


  virtual ~DescribeBackupPolicyResponseBody() = default;
};
class DescribeBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupPolicyResponseBody> body{};

  DescribeBackupPolicyResponse() {}

  explicit DescribeBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupPolicyResponse() = default;
};
class DescribeBackupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> backupId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeBackupsRequest() {}

  explicit DescribeBackupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
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


  virtual ~DescribeBackupsRequest() = default;
};
class DescribeBackupsResponseBodyItemsBackup : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> backupType{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<long> backupSize{};
  shared_ptr<string> backupEndTime{};
  shared_ptr<string> backupId{};
  shared_ptr<string> backupMethod{};

  DescribeBackupsResponseBodyItemsBackup() {}

  explicit DescribeBackupsResponseBodyItemsBackup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (backupType) {
      res["BackupType"] = boost::any(*backupType);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupSize) {
      res["BackupSize"] = boost::any(*backupSize);
    }
    if (backupEndTime) {
      res["BackupEndTime"] = boost::any(*backupEndTime);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (backupMethod) {
      res["BackupMethod"] = boost::any(*backupMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("BackupType") != m.end() && !m["BackupType"].empty()) {
      backupType = make_shared<string>(boost::any_cast<string>(m["BackupType"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupSize") != m.end() && !m["BackupSize"].empty()) {
      backupSize = make_shared<long>(boost::any_cast<long>(m["BackupSize"]));
    }
    if (m.find("BackupEndTime") != m.end() && !m["BackupEndTime"].empty()) {
      backupEndTime = make_shared<string>(boost::any_cast<string>(m["BackupEndTime"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("BackupMethod") != m.end() && !m["BackupMethod"].empty()) {
      backupMethod = make_shared<string>(boost::any_cast<string>(m["BackupMethod"]));
    }
  }


  virtual ~DescribeBackupsResponseBodyItemsBackup() = default;
};
class DescribeBackupsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBackupsResponseBodyItemsBackup>> backup{};

  DescribeBackupsResponseBodyItems() {}

  explicit DescribeBackupsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backup) {
      vector<boost::any> temp1;
      for(auto item1:*backup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Backup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Backup") != m.end() && !m["Backup"].empty()) {
      if (typeid(vector<boost::any>) == m["Backup"].type()) {
        vector<DescribeBackupsResponseBodyItemsBackup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Backup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBackupsResponseBodyItemsBackup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backup = make_shared<vector<DescribeBackupsResponseBodyItemsBackup>>(expect1);
      }
    }
  }


  virtual ~DescribeBackupsResponseBodyItems() = default;
};
class DescribeBackupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> totalCount{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<DescribeBackupsResponseBodyItems> items{};

  DescribeBackupsResponseBody() {}

  explicit DescribeBackupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeBackupsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeBackupsResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeBackupsResponseBody() = default;
};
class DescribeBackupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBackupsResponseBody> body{};

  DescribeBackupsResponse() {}

  explicit DescribeBackupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBackupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBackupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBackupsResponse() = default;
};
class DescribeColumnsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeColumnsRequest() {}

  explicit DescribeColumnsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeColumnsRequest() = default;
};
class DescribeColumnsResponseBodyItemsColumn : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> columnName{};
  shared_ptr<string> tableName{};
  shared_ptr<bool> autoIncrementColumn{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> primaryKey{};
  shared_ptr<string> schemaName{};

  DescribeColumnsResponseBodyItemsColumn() {}

  explicit DescribeColumnsResponseBodyItemsColumn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (columnName) {
      res["ColumnName"] = boost::any(*columnName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (autoIncrementColumn) {
      res["AutoIncrementColumn"] = boost::any(*autoIncrementColumn);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (primaryKey) {
      res["PrimaryKey"] = boost::any(*primaryKey);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ColumnName") != m.end() && !m["ColumnName"].empty()) {
      columnName = make_shared<string>(boost::any_cast<string>(m["ColumnName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("AutoIncrementColumn") != m.end() && !m["AutoIncrementColumn"].empty()) {
      autoIncrementColumn = make_shared<bool>(boost::any_cast<bool>(m["AutoIncrementColumn"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PrimaryKey") != m.end() && !m["PrimaryKey"].empty()) {
      primaryKey = make_shared<bool>(boost::any_cast<bool>(m["PrimaryKey"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~DescribeColumnsResponseBodyItemsColumn() = default;
};
class DescribeColumnsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeColumnsResponseBodyItemsColumn>> column{};

  DescribeColumnsResponseBodyItems() {}

  explicit DescribeColumnsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeColumnsResponseBodyItemsColumn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Column"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeColumnsResponseBodyItemsColumn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        column = make_shared<vector<DescribeColumnsResponseBodyItemsColumn>>(expect1);
      }
    }
  }


  virtual ~DescribeColumnsResponseBodyItems() = default;
};
class DescribeColumnsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeColumnsResponseBodyItems> items{};

  DescribeColumnsResponseBody() {}

  explicit DescribeColumnsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeColumnsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeColumnsResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeColumnsResponseBody() = default;
};
class DescribeColumnsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeColumnsResponseBody> body{};

  DescribeColumnsResponse() {}

  explicit DescribeColumnsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeColumnsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeColumnsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeColumnsResponse() = default;
};
class DescribeConnectionCountRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};

  DescribeConnectionCountRecordsRequest() {}

  explicit DescribeConnectionCountRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeConnectionCountRecordsRequest() = default;
};
class DescribeConnectionCountRecordsResponseBodyAccessIpRecords : public Darabonba::Model {
public:
  shared_ptr<string> accessIp{};
  shared_ptr<long> count{};

  DescribeConnectionCountRecordsResponseBodyAccessIpRecords() {}

  explicit DescribeConnectionCountRecordsResponseBodyAccessIpRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessIp) {
      res["AccessIp"] = boost::any(*accessIp);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessIp") != m.end() && !m["AccessIp"].empty()) {
      accessIp = make_shared<string>(boost::any_cast<string>(m["AccessIp"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~DescribeConnectionCountRecordsResponseBodyAccessIpRecords() = default;
};
class DescribeConnectionCountRecordsResponseBodyUserRecords : public Darabonba::Model {
public:
  shared_ptr<string> user{};
  shared_ptr<long> count{};

  DescribeConnectionCountRecordsResponseBodyUserRecords() {}

  explicit DescribeConnectionCountRecordsResponseBodyUserRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      res["User"] = boost::any(*user);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~DescribeConnectionCountRecordsResponseBodyUserRecords() = default;
};
class DescribeConnectionCountRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<DescribeConnectionCountRecordsResponseBodyAccessIpRecords>> accessIpRecords{};
  shared_ptr<vector<DescribeConnectionCountRecordsResponseBodyUserRecords>> userRecords{};

  DescribeConnectionCountRecordsResponseBody() {}

  explicit DescribeConnectionCountRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (accessIpRecords) {
      vector<boost::any> temp1;
      for(auto item1:*accessIpRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessIpRecords"] = boost::any(temp1);
    }
    if (userRecords) {
      vector<boost::any> temp1;
      for(auto item1:*userRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserRecords"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("AccessIpRecords") != m.end() && !m["AccessIpRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessIpRecords"].type()) {
        vector<DescribeConnectionCountRecordsResponseBodyAccessIpRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessIpRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConnectionCountRecordsResponseBodyAccessIpRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessIpRecords = make_shared<vector<DescribeConnectionCountRecordsResponseBodyAccessIpRecords>>(expect1);
      }
    }
    if (m.find("UserRecords") != m.end() && !m["UserRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["UserRecords"].type()) {
        vector<DescribeConnectionCountRecordsResponseBodyUserRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeConnectionCountRecordsResponseBodyUserRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userRecords = make_shared<vector<DescribeConnectionCountRecordsResponseBodyUserRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeConnectionCountRecordsResponseBody() = default;
};
class DescribeConnectionCountRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeConnectionCountRecordsResponseBody> body{};

  DescribeConnectionCountRecordsResponse() {}

  explicit DescribeConnectionCountRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConnectionCountRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConnectionCountRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConnectionCountRecordsResponse() = default;
};
class DescribeDBClusterAccessWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};

  DescribeDBClusterAccessWhiteListRequest() {}

  explicit DescribeDBClusterAccessWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeDBClusterAccessWhiteListRequest() = default;
};
class DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterIPArrayAttribute{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> DBClusterIPArrayName{};

  DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray() {}

  explicit DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterIPArrayAttribute) {
      res["DBClusterIPArrayAttribute"] = boost::any(*DBClusterIPArrayAttribute);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (DBClusterIPArrayName) {
      res["DBClusterIPArrayName"] = boost::any(*DBClusterIPArrayName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterIPArrayAttribute") != m.end() && !m["DBClusterIPArrayAttribute"].empty()) {
      DBClusterIPArrayAttribute = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayAttribute"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("DBClusterIPArrayName") != m.end() && !m["DBClusterIPArrayName"].empty()) {
      DBClusterIPArrayName = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayName"]));
    }
  }


  virtual ~DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray() = default;
};
class DescribeDBClusterAccessWhiteListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray>> IPArray{};

  DescribeDBClusterAccessWhiteListResponseBodyItems() {}

  explicit DescribeDBClusterAccessWhiteListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (IPArray) {
      vector<boost::any> temp1;
      for(auto item1:*IPArray){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IPArray"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IPArray") != m.end() && !m["IPArray"].empty()) {
      if (typeid(vector<boost::any>) == m["IPArray"].type()) {
        vector<DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IPArray"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        IPArray = make_shared<vector<DescribeDBClusterAccessWhiteListResponseBodyItemsIPArray>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterAccessWhiteListResponseBodyItems() = default;
};
class DescribeDBClusterAccessWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDBClusterAccessWhiteListResponseBodyItems> items{};

  DescribeDBClusterAccessWhiteListResponseBody() {}

  explicit DescribeDBClusterAccessWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDBClusterAccessWhiteListResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBClusterAccessWhiteListResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterAccessWhiteListResponseBody() = default;
};
class DescribeDBClusterAccessWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterAccessWhiteListResponseBody> body{};

  DescribeDBClusterAccessWhiteListResponse() {}

  explicit DescribeDBClusterAccessWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterAccessWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterAccessWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterAccessWhiteListResponse() = default;
};
class DescribeDBClusterAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};

  DescribeDBClusterAttributeRequest() {}

  explicit DescribeDBClusterAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeDBClusterAttributeRequest() = default;
};
class DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag() {}

  explicit DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag() = default;
};
class DescribeDBClusterAttributeResponseBodyItemsDBClusterTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag>> tag{};

  DescribeDBClusterAttributeResponseBodyItemsDBClusterTags() {}

  explicit DescribeDBClusterAttributeResponseBodyItemsDBClusterTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBClusterAttributeResponseBodyItemsDBClusterTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBodyItemsDBClusterTags() = default;
};
class DescribeDBClusterAttributeResponseBodyItemsDBCluster : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<bool> enableSpark{};
  shared_ptr<string> dtsJobId{};
  shared_ptr<long> DBNodeCount{};
  shared_ptr<string> expired{};
  shared_ptr<string> maintainTime{};
  shared_ptr<string> payType{};
  shared_ptr<string> diskType{};
  shared_ptr<DescribeDBClusterAttributeResponseBodyItemsDBClusterTags> tags{};
  shared_ptr<string> mode{};
  shared_ptr<long> port{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> engineVersion{};
  shared_ptr<bool> enableAirflow{};
  shared_ptr<string> executorCount{};
  shared_ptr<string> storageResource{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> rdsInstanceId{};
  shared_ptr<string> DBClusterType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> DBNodeStorage{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> computeResource{};
  shared_ptr<string> regionId{};
  shared_ptr<long> elasticIOResource{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> VPCCloudInstanceId{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> DBClusterNetworkType{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<bool> userENIStatus{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> category{};
  shared_ptr<string> engine{};

  DescribeDBClusterAttributeResponseBodyItemsDBCluster() {}

  explicit DescribeDBClusterAttributeResponseBodyItemsDBCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (enableSpark) {
      res["EnableSpark"] = boost::any(*enableSpark);
    }
    if (dtsJobId) {
      res["DtsJobId"] = boost::any(*dtsJobId);
    }
    if (DBNodeCount) {
      res["DBNodeCount"] = boost::any(*DBNodeCount);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (maintainTime) {
      res["MaintainTime"] = boost::any(*maintainTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (enableAirflow) {
      res["EnableAirflow"] = boost::any(*enableAirflow);
    }
    if (executorCount) {
      res["ExecutorCount"] = boost::any(*executorCount);
    }
    if (storageResource) {
      res["StorageResource"] = boost::any(*storageResource);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (rdsInstanceId) {
      res["RdsInstanceId"] = boost::any(*rdsInstanceId);
    }
    if (DBClusterType) {
      res["DBClusterType"] = boost::any(*DBClusterType);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (DBNodeStorage) {
      res["DBNodeStorage"] = boost::any(*DBNodeStorage);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (computeResource) {
      res["ComputeResource"] = boost::any(*computeResource);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (elasticIOResource) {
      res["ElasticIOResource"] = boost::any(*elasticIOResource);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (VPCCloudInstanceId) {
      res["VPCCloudInstanceId"] = boost::any(*VPCCloudInstanceId);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (DBClusterNetworkType) {
      res["DBClusterNetworkType"] = boost::any(*DBClusterNetworkType);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (userENIStatus) {
      res["UserENIStatus"] = boost::any(*userENIStatus);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("EnableSpark") != m.end() && !m["EnableSpark"].empty()) {
      enableSpark = make_shared<bool>(boost::any_cast<bool>(m["EnableSpark"]));
    }
    if (m.find("DtsJobId") != m.end() && !m["DtsJobId"].empty()) {
      dtsJobId = make_shared<string>(boost::any_cast<string>(m["DtsJobId"]));
    }
    if (m.find("DBNodeCount") != m.end() && !m["DBNodeCount"].empty()) {
      DBNodeCount = make_shared<long>(boost::any_cast<long>(m["DBNodeCount"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("MaintainTime") != m.end() && !m["MaintainTime"].empty()) {
      maintainTime = make_shared<string>(boost::any_cast<string>(m["MaintainTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBClusterAttributeResponseBodyItemsDBClusterTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBClusterAttributeResponseBodyItemsDBClusterTags>(model1);
      }
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("EnableAirflow") != m.end() && !m["EnableAirflow"].empty()) {
      enableAirflow = make_shared<bool>(boost::any_cast<bool>(m["EnableAirflow"]));
    }
    if (m.find("ExecutorCount") != m.end() && !m["ExecutorCount"].empty()) {
      executorCount = make_shared<string>(boost::any_cast<string>(m["ExecutorCount"]));
    }
    if (m.find("StorageResource") != m.end() && !m["StorageResource"].empty()) {
      storageResource = make_shared<string>(boost::any_cast<string>(m["StorageResource"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("RdsInstanceId") != m.end() && !m["RdsInstanceId"].empty()) {
      rdsInstanceId = make_shared<string>(boost::any_cast<string>(m["RdsInstanceId"]));
    }
    if (m.find("DBClusterType") != m.end() && !m["DBClusterType"].empty()) {
      DBClusterType = make_shared<string>(boost::any_cast<string>(m["DBClusterType"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("DBNodeStorage") != m.end() && !m["DBNodeStorage"].empty()) {
      DBNodeStorage = make_shared<long>(boost::any_cast<long>(m["DBNodeStorage"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("ComputeResource") != m.end() && !m["ComputeResource"].empty()) {
      computeResource = make_shared<string>(boost::any_cast<string>(m["ComputeResource"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ElasticIOResource") != m.end() && !m["ElasticIOResource"].empty()) {
      elasticIOResource = make_shared<long>(boost::any_cast<long>(m["ElasticIOResource"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("VPCCloudInstanceId") != m.end() && !m["VPCCloudInstanceId"].empty()) {
      VPCCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VPCCloudInstanceId"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("DBClusterNetworkType") != m.end() && !m["DBClusterNetworkType"].empty()) {
      DBClusterNetworkType = make_shared<string>(boost::any_cast<string>(m["DBClusterNetworkType"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("UserENIStatus") != m.end() && !m["UserENIStatus"].empty()) {
      userENIStatus = make_shared<bool>(boost::any_cast<bool>(m["UserENIStatus"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBodyItemsDBCluster() = default;
};
class DescribeDBClusterAttributeResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterAttributeResponseBodyItemsDBCluster>> DBCluster{};

  DescribeDBClusterAttributeResponseBodyItems() {}

  explicit DescribeDBClusterAttributeResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBCluster) {
      vector<boost::any> temp1;
      for(auto item1:*DBCluster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBCluster"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBCluster") != m.end() && !m["DBCluster"].empty()) {
      if (typeid(vector<boost::any>) == m["DBCluster"].type()) {
        vector<DescribeDBClusterAttributeResponseBodyItemsDBCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBCluster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterAttributeResponseBodyItemsDBCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBCluster = make_shared<vector<DescribeDBClusterAttributeResponseBodyItemsDBCluster>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBodyItems() = default;
};
class DescribeDBClusterAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDBClusterAttributeResponseBodyItems> items{};

  DescribeDBClusterAttributeResponseBody() {}

  explicit DescribeDBClusterAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDBClusterAttributeResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBClusterAttributeResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterAttributeResponseBody() = default;
};
class DescribeDBClusterAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterAttributeResponseBody> body{};

  DescribeDBClusterAttributeResponse() {}

  explicit DescribeDBClusterAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterAttributeResponse() = default;
};
class DescribeDBClusterNetInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};

  DescribeDBClusterNetInfoRequest() {}

  explicit DescribeDBClusterNetInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeDBClusterNetInfoRequest() = default;
};
class DescribeDBClusterNetInfoResponseBodyItemsAddress : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> netType{};
  shared_ptr<string> port{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> connectionStringPrefix{};

  DescribeDBClusterNetInfoResponseBodyItemsAddress() {}

  explicit DescribeDBClusterNetInfoResponseBodyItemsAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
  }


  virtual ~DescribeDBClusterNetInfoResponseBodyItemsAddress() = default;
};
class DescribeDBClusterNetInfoResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClusterNetInfoResponseBodyItemsAddress>> address{};

  DescribeDBClusterNetInfoResponseBodyItems() {}

  explicit DescribeDBClusterNetInfoResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      vector<boost::any> temp1;
      for(auto item1:*address){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Address"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(vector<boost::any>) == m["Address"].type()) {
        vector<DescribeDBClusterNetInfoResponseBodyItemsAddress> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Address"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterNetInfoResponseBodyItemsAddress model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        address = make_shared<vector<DescribeDBClusterNetInfoResponseBodyItemsAddress>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterNetInfoResponseBodyItems() = default;
};
class DescribeDBClusterNetInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterNetworkType{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDBClusterNetInfoResponseBodyItems> items{};

  DescribeDBClusterNetInfoResponseBody() {}

  explicit DescribeDBClusterNetInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterNetworkType) {
      res["ClusterNetworkType"] = boost::any(*clusterNetworkType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterNetworkType") != m.end() && !m["ClusterNetworkType"].empty()) {
      clusterNetworkType = make_shared<string>(boost::any_cast<string>(m["ClusterNetworkType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDBClusterNetInfoResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBClusterNetInfoResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterNetInfoResponseBody() = default;
};
class DescribeDBClusterNetInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterNetInfoResponseBody> body{};

  DescribeDBClusterNetInfoResponse() {}

  explicit DescribeDBClusterNetInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterNetInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterNetInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterNetInfoResponse() = default;
};
class DescribeDBClusterPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> key{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeDBClusterPerformanceRequest() {}

  explicit DescribeDBClusterPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceRequest() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformancesSeries : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};
  shared_ptr<string> name{};

  DescribeDBClusterPerformanceResponseBodyPerformancesSeries() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformancesSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformancesSeries() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformances : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> unit{};
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformancesSeries>> series{};

  DescribeDBClusterPerformanceResponseBodyPerformances() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    if (series) {
      vector<boost::any> temp1;
      for(auto item1:*series){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Series"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(vector<boost::any>) == m["Series"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformancesSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Series"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformancesSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        series = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformancesSeries>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformances() = default;
};
class DescribeDBClusterPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformances>> performances{};

  DescribeDBClusterPerformanceResponseBody() {}

  explicit DescribeDBClusterPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (performances) {
      vector<boost::any> temp1;
      for(auto item1:*performances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Performances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Performances") != m.end() && !m["Performances"].empty()) {
      if (typeid(vector<boost::any>) == m["Performances"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Performances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performances = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformances>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBody() = default;
};
class DescribeDBClusterPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterPerformanceResponseBody> body{};

  DescribeDBClusterPerformanceResponse() {}

  explicit DescribeDBClusterPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponse() = default;
};
class DescribeDBClusterResourcePoolPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> key{};
  shared_ptr<string> resourcePools{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeDBClusterResourcePoolPerformanceRequest() {}

  explicit DescribeDBClusterResourcePoolPerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (resourcePools) {
      res["ResourcePools"] = boost::any(*resourcePools);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("ResourcePools") != m.end() && !m["ResourcePools"].empty()) {
      resourcePools = make_shared<string>(boost::any_cast<string>(m["ResourcePools"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeDBClusterResourcePoolPerformanceRequest() = default;
};
class DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries : public Darabonba::Model {
public:
  shared_ptr<vector<string>> values{};
  shared_ptr<string> name{};

  DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries() {}

  explicit DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries() = default;
};
class DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances : public Darabonba::Model {
public:
  shared_ptr<string> resourcePoolName{};
  shared_ptr<vector<DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries>> resourcePoolSeries{};

  DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances() {}

  explicit DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourcePoolName) {
      res["ResourcePoolName"] = boost::any(*resourcePoolName);
    }
    if (resourcePoolSeries) {
      vector<boost::any> temp1;
      for(auto item1:*resourcePoolSeries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcePoolSeries"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourcePoolName") != m.end() && !m["ResourcePoolName"].empty()) {
      resourcePoolName = make_shared<string>(boost::any_cast<string>(m["ResourcePoolName"]));
    }
    if (m.find("ResourcePoolSeries") != m.end() && !m["ResourcePoolSeries"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourcePoolSeries"].type()) {
        vector<DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourcePoolSeries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourcePoolSeries = make_shared<vector<DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformancesResourcePoolSeries>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances() = default;
};
class DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> unit{};
  shared_ptr<vector<DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances>> resourcePoolPerformances{};

  DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances() {}

  explicit DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    if (resourcePoolPerformances) {
      vector<boost::any> temp1;
      for(auto item1:*resourcePoolPerformances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourcePoolPerformances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("ResourcePoolPerformances") != m.end() && !m["ResourcePoolPerformances"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourcePoolPerformances"].type()) {
        vector<DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourcePoolPerformances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourcePoolPerformances = make_shared<vector<DescribeDBClusterResourcePoolPerformanceResponseBodyPerformancesResourcePoolPerformances>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances() = default;
};
class DescribeDBClusterResourcePoolPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances>> performances{};

  DescribeDBClusterResourcePoolPerformanceResponseBody() {}

  explicit DescribeDBClusterResourcePoolPerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (performances) {
      vector<boost::any> temp1;
      for(auto item1:*performances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Performances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Performances") != m.end() && !m["Performances"].empty()) {
      if (typeid(vector<boost::any>) == m["Performances"].type()) {
        vector<DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Performances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performances = make_shared<vector<DescribeDBClusterResourcePoolPerformanceResponseBodyPerformances>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterResourcePoolPerformanceResponseBody() = default;
};
class DescribeDBClusterResourcePoolPerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClusterResourcePoolPerformanceResponseBody> body{};

  DescribeDBClusterResourcePoolPerformanceResponse() {}

  explicit DescribeDBClusterResourcePoolPerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClusterResourcePoolPerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterResourcePoolPerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterResourcePoolPerformanceResponse() = default;
};
class DescribeDBClustersRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBClustersRequestTag() {}

  explicit DescribeDBClustersRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBClustersRequestTag() = default;
};
class DescribeDBClustersRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> DBClusterIds{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeDBClustersRequestTag>> tag{};

  DescribeDBClustersRequest() {}

  explicit DescribeDBClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (DBClusterIds) {
      res["DBClusterIds"] = boost::any(*DBClusterIds);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DBClusterIds") != m.end() && !m["DBClusterIds"].empty()) {
      DBClusterIds = make_shared<string>(boost::any_cast<string>(m["DBClusterIds"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBClustersRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBClustersRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersRequest() = default;
};
class DescribeDBClustersResponseBodyItemsDBClusterTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBClustersResponseBodyItemsDBClusterTagsTag() {}

  explicit DescribeDBClustersResponseBodyItemsDBClusterTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBClustersResponseBodyItemsDBClusterTagsTag() = default;
};
class DescribeDBClustersResponseBodyItemsDBClusterTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClustersResponseBodyItemsDBClusterTagsTag>> tag{};

  DescribeDBClustersResponseBodyItemsDBClusterTags() {}

  explicit DescribeDBClustersResponseBodyItemsDBClusterTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBClustersResponseBodyItemsDBClusterTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersResponseBodyItemsDBClusterTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBClustersResponseBodyItemsDBClusterTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersResponseBodyItemsDBClusterTags() = default;
};
class DescribeDBClustersResponseBodyItemsDBCluster : public Darabonba::Model {
public:
  shared_ptr<string> dtsJobId{};
  shared_ptr<long> DBNodeCount{};
  shared_ptr<string> expired{};
  shared_ptr<string> createTime{};
  shared_ptr<string> payType{};
  shared_ptr<string> diskType{};
  shared_ptr<DescribeDBClustersResponseBodyItemsDBClusterTags> tags{};
  shared_ptr<string> mode{};
  shared_ptr<string> port{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> storageResource{};
  shared_ptr<string> executorCount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> rdsInstanceId{};
  shared_ptr<string> DBClusterType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> expireTime{};
  shared_ptr<long> DBNodeStorage{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> computeResource{};
  shared_ptr<long> elasticIOResource{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> DBVersion{};
  shared_ptr<string> VPCCloudInstanceId{};
  shared_ptr<string> DBClusterStatus{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> DBClusterNetworkType{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> category{};
  shared_ptr<string> engine{};

  DescribeDBClustersResponseBodyItemsDBCluster() {}

  explicit DescribeDBClustersResponseBodyItemsDBCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dtsJobId) {
      res["DtsJobId"] = boost::any(*dtsJobId);
    }
    if (DBNodeCount) {
      res["DBNodeCount"] = boost::any(*DBNodeCount);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (storageResource) {
      res["StorageResource"] = boost::any(*storageResource);
    }
    if (executorCount) {
      res["ExecutorCount"] = boost::any(*executorCount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (rdsInstanceId) {
      res["RdsInstanceId"] = boost::any(*rdsInstanceId);
    }
    if (DBClusterType) {
      res["DBClusterType"] = boost::any(*DBClusterType);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (DBNodeStorage) {
      res["DBNodeStorage"] = boost::any(*DBNodeStorage);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (computeResource) {
      res["ComputeResource"] = boost::any(*computeResource);
    }
    if (elasticIOResource) {
      res["ElasticIOResource"] = boost::any(*elasticIOResource);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (VPCCloudInstanceId) {
      res["VPCCloudInstanceId"] = boost::any(*VPCCloudInstanceId);
    }
    if (DBClusterStatus) {
      res["DBClusterStatus"] = boost::any(*DBClusterStatus);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (DBClusterNetworkType) {
      res["DBClusterNetworkType"] = boost::any(*DBClusterNetworkType);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DtsJobId") != m.end() && !m["DtsJobId"].empty()) {
      dtsJobId = make_shared<string>(boost::any_cast<string>(m["DtsJobId"]));
    }
    if (m.find("DBNodeCount") != m.end() && !m["DBNodeCount"].empty()) {
      DBNodeCount = make_shared<long>(boost::any_cast<long>(m["DBNodeCount"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<string>(boost::any_cast<string>(m["Expired"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBClustersResponseBodyItemsDBClusterTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBClustersResponseBodyItemsDBClusterTags>(model1);
      }
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("StorageResource") != m.end() && !m["StorageResource"].empty()) {
      storageResource = make_shared<string>(boost::any_cast<string>(m["StorageResource"]));
    }
    if (m.find("ExecutorCount") != m.end() && !m["ExecutorCount"].empty()) {
      executorCount = make_shared<string>(boost::any_cast<string>(m["ExecutorCount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("RdsInstanceId") != m.end() && !m["RdsInstanceId"].empty()) {
      rdsInstanceId = make_shared<string>(boost::any_cast<string>(m["RdsInstanceId"]));
    }
    if (m.find("DBClusterType") != m.end() && !m["DBClusterType"].empty()) {
      DBClusterType = make_shared<string>(boost::any_cast<string>(m["DBClusterType"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("DBNodeStorage") != m.end() && !m["DBNodeStorage"].empty()) {
      DBNodeStorage = make_shared<long>(boost::any_cast<long>(m["DBNodeStorage"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ComputeResource") != m.end() && !m["ComputeResource"].empty()) {
      computeResource = make_shared<string>(boost::any_cast<string>(m["ComputeResource"]));
    }
    if (m.find("ElasticIOResource") != m.end() && !m["ElasticIOResource"].empty()) {
      elasticIOResource = make_shared<long>(boost::any_cast<long>(m["ElasticIOResource"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      DBVersion = make_shared<string>(boost::any_cast<string>(m["DBVersion"]));
    }
    if (m.find("VPCCloudInstanceId") != m.end() && !m["VPCCloudInstanceId"].empty()) {
      VPCCloudInstanceId = make_shared<string>(boost::any_cast<string>(m["VPCCloudInstanceId"]));
    }
    if (m.find("DBClusterStatus") != m.end() && !m["DBClusterStatus"].empty()) {
      DBClusterStatus = make_shared<string>(boost::any_cast<string>(m["DBClusterStatus"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("DBClusterNetworkType") != m.end() && !m["DBClusterNetworkType"].empty()) {
      DBClusterNetworkType = make_shared<string>(boost::any_cast<string>(m["DBClusterNetworkType"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
  }


  virtual ~DescribeDBClustersResponseBodyItemsDBCluster() = default;
};
class DescribeDBClustersResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBClustersResponseBodyItemsDBCluster>> DBCluster{};

  DescribeDBClustersResponseBodyItems() {}

  explicit DescribeDBClustersResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBCluster) {
      vector<boost::any> temp1;
      for(auto item1:*DBCluster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBCluster"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBCluster") != m.end() && !m["DBCluster"].empty()) {
      if (typeid(vector<boost::any>) == m["DBCluster"].type()) {
        vector<DescribeDBClustersResponseBodyItemsDBCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBCluster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClustersResponseBodyItemsDBCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBCluster = make_shared<vector<DescribeDBClustersResponseBodyItemsDBCluster>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClustersResponseBodyItems() = default;
};
class DescribeDBClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribeDBClustersResponseBodyItems> items{};

  DescribeDBClustersResponseBody() {}

  explicit DescribeDBClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeDBClustersResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBClustersResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeDBClustersResponseBody() = default;
};
class DescribeDBClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBClustersResponseBody> body{};

  DescribeDBClustersResponse() {}

  explicit DescribeDBClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClustersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClustersResponse() = default;
};
class DescribeDBResourcePoolRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> poolName{};

  DescribeDBResourcePoolRequest() {}

  explicit DescribeDBResourcePoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (poolName) {
      res["PoolName"] = boost::any(*poolName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PoolName") != m.end() && !m["PoolName"].empty()) {
      poolName = make_shared<string>(boost::any_cast<string>(m["PoolName"]));
    }
  }


  virtual ~DescribeDBResourcePoolRequest() = default;
};
class DescribeDBResourcePoolResponseBodyPoolsInfo : public Darabonba::Model {
public:
  shared_ptr<string> queryType{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> poolName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> poolUsers{};
  shared_ptr<long> nodeNum{};

  DescribeDBResourcePoolResponseBodyPoolsInfo() {}

  explicit DescribeDBResourcePoolResponseBodyPoolsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (poolName) {
      res["PoolName"] = boost::any(*poolName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (poolUsers) {
      res["PoolUsers"] = boost::any(*poolUsers);
    }
    if (nodeNum) {
      res["NodeNum"] = boost::any(*nodeNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("PoolName") != m.end() && !m["PoolName"].empty()) {
      poolName = make_shared<string>(boost::any_cast<string>(m["PoolName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("PoolUsers") != m.end() && !m["PoolUsers"].empty()) {
      poolUsers = make_shared<string>(boost::any_cast<string>(m["PoolUsers"]));
    }
    if (m.find("NodeNum") != m.end() && !m["NodeNum"].empty()) {
      nodeNum = make_shared<long>(boost::any_cast<long>(m["NodeNum"]));
    }
  }


  virtual ~DescribeDBResourcePoolResponseBodyPoolsInfo() = default;
};
class DescribeDBResourcePoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDBResourcePoolResponseBodyPoolsInfo>> poolsInfo{};

  DescribeDBResourcePoolResponseBody() {}

  explicit DescribeDBResourcePoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (poolsInfo) {
      vector<boost::any> temp1;
      for(auto item1:*poolsInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PoolsInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PoolsInfo") != m.end() && !m["PoolsInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["PoolsInfo"].type()) {
        vector<DescribeDBResourcePoolResponseBodyPoolsInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PoolsInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBResourcePoolResponseBodyPoolsInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        poolsInfo = make_shared<vector<DescribeDBResourcePoolResponseBodyPoolsInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeDBResourcePoolResponseBody() = default;
};
class DescribeDBResourcePoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBResourcePoolResponseBody> body{};

  DescribeDBResourcePoolResponse() {}

  explicit DescribeDBResourcePoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBResourcePoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBResourcePoolResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBResourcePoolResponse() = default;
};
class DescribeElasticDailyPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> elasticPlanName{};
  shared_ptr<string> resourcePoolName{};
  shared_ptr<string> elasticDailyPlanDay{};
  shared_ptr<string> elasticDailyPlanStatusList{};

  DescribeElasticDailyPlanRequest() {}

  explicit DescribeElasticDailyPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    if (resourcePoolName) {
      res["ResourcePoolName"] = boost::any(*resourcePoolName);
    }
    if (elasticDailyPlanDay) {
      res["ElasticDailyPlanDay"] = boost::any(*elasticDailyPlanDay);
    }
    if (elasticDailyPlanStatusList) {
      res["ElasticDailyPlanStatusList"] = boost::any(*elasticDailyPlanStatusList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
    if (m.find("ResourcePoolName") != m.end() && !m["ResourcePoolName"].empty()) {
      resourcePoolName = make_shared<string>(boost::any_cast<string>(m["ResourcePoolName"]));
    }
    if (m.find("ElasticDailyPlanDay") != m.end() && !m["ElasticDailyPlanDay"].empty()) {
      elasticDailyPlanDay = make_shared<string>(boost::any_cast<string>(m["ElasticDailyPlanDay"]));
    }
    if (m.find("ElasticDailyPlanStatusList") != m.end() && !m["ElasticDailyPlanStatusList"].empty()) {
      elasticDailyPlanStatusList = make_shared<string>(boost::any_cast<string>(m["ElasticDailyPlanStatusList"]));
    }
  }


  virtual ~DescribeElasticDailyPlanRequest() = default;
};
class DescribeElasticDailyPlanResponseBodyElasticDailyPlanList : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> day{};
  shared_ptr<string> resourcePoolName{};
  shared_ptr<string> startTs{};
  shared_ptr<string> planEndTs{};
  shared_ptr<string> planStartTs{};
  shared_ptr<long> elasticNodeNum{};
  shared_ptr<string> endTs{};
  shared_ptr<string> planName{};

  DescribeElasticDailyPlanResponseBodyElasticDailyPlanList() {}

  explicit DescribeElasticDailyPlanResponseBodyElasticDailyPlanList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (resourcePoolName) {
      res["ResourcePoolName"] = boost::any(*resourcePoolName);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    if (planEndTs) {
      res["PlanEndTs"] = boost::any(*planEndTs);
    }
    if (planStartTs) {
      res["PlanStartTs"] = boost::any(*planStartTs);
    }
    if (elasticNodeNum) {
      res["ElasticNodeNum"] = boost::any(*elasticNodeNum);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<string>(boost::any_cast<string>(m["Day"]));
    }
    if (m.find("ResourcePoolName") != m.end() && !m["ResourcePoolName"].empty()) {
      resourcePoolName = make_shared<string>(boost::any_cast<string>(m["ResourcePoolName"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<string>(boost::any_cast<string>(m["StartTs"]));
    }
    if (m.find("PlanEndTs") != m.end() && !m["PlanEndTs"].empty()) {
      planEndTs = make_shared<string>(boost::any_cast<string>(m["PlanEndTs"]));
    }
    if (m.find("PlanStartTs") != m.end() && !m["PlanStartTs"].empty()) {
      planStartTs = make_shared<string>(boost::any_cast<string>(m["PlanStartTs"]));
    }
    if (m.find("ElasticNodeNum") != m.end() && !m["ElasticNodeNum"].empty()) {
      elasticNodeNum = make_shared<long>(boost::any_cast<long>(m["ElasticNodeNum"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<string>(boost::any_cast<string>(m["EndTs"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
  }


  virtual ~DescribeElasticDailyPlanResponseBodyElasticDailyPlanList() = default;
};
class DescribeElasticDailyPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeElasticDailyPlanResponseBodyElasticDailyPlanList>> elasticDailyPlanList{};

  DescribeElasticDailyPlanResponseBody() {}

  explicit DescribeElasticDailyPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (elasticDailyPlanList) {
      vector<boost::any> temp1;
      for(auto item1:*elasticDailyPlanList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ElasticDailyPlanList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ElasticDailyPlanList") != m.end() && !m["ElasticDailyPlanList"].empty()) {
      if (typeid(vector<boost::any>) == m["ElasticDailyPlanList"].type()) {
        vector<DescribeElasticDailyPlanResponseBodyElasticDailyPlanList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ElasticDailyPlanList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeElasticDailyPlanResponseBodyElasticDailyPlanList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elasticDailyPlanList = make_shared<vector<DescribeElasticDailyPlanResponseBodyElasticDailyPlanList>>(expect1);
      }
    }
  }


  virtual ~DescribeElasticDailyPlanResponseBody() = default;
};
class DescribeElasticDailyPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeElasticDailyPlanResponseBody> body{};

  DescribeElasticDailyPlanResponse() {}

  explicit DescribeElasticDailyPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeElasticDailyPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeElasticDailyPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeElasticDailyPlanResponse() = default;
};
class DescribeElasticPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> elasticPlanName{};
  shared_ptr<string> resourcePoolName{};
  shared_ptr<bool> elasticPlanEnable{};

  DescribeElasticPlanRequest() {}

  explicit DescribeElasticPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    if (resourcePoolName) {
      res["ResourcePoolName"] = boost::any(*resourcePoolName);
    }
    if (elasticPlanEnable) {
      res["ElasticPlanEnable"] = boost::any(*elasticPlanEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
    if (m.find("ResourcePoolName") != m.end() && !m["ResourcePoolName"].empty()) {
      resourcePoolName = make_shared<string>(boost::any_cast<string>(m["ResourcePoolName"]));
    }
    if (m.find("ElasticPlanEnable") != m.end() && !m["ElasticPlanEnable"].empty()) {
      elasticPlanEnable = make_shared<bool>(boost::any_cast<bool>(m["ElasticPlanEnable"]));
    }
  }


  virtual ~DescribeElasticPlanRequest() = default;
};
class DescribeElasticPlanResponseBodyElasticPlanList : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> weeklyRepeat{};
  shared_ptr<string> startTime{};
  shared_ptr<string> resourcePoolName{};
  shared_ptr<string> startDay{};
  shared_ptr<long> elasticNodeNum{};
  shared_ptr<bool> enable{};
  shared_ptr<string> endDay{};
  shared_ptr<string> planName{};

  DescribeElasticPlanResponseBodyElasticPlanList() {}

  explicit DescribeElasticPlanResponseBodyElasticPlanList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (weeklyRepeat) {
      res["WeeklyRepeat"] = boost::any(*weeklyRepeat);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (resourcePoolName) {
      res["ResourcePoolName"] = boost::any(*resourcePoolName);
    }
    if (startDay) {
      res["StartDay"] = boost::any(*startDay);
    }
    if (elasticNodeNum) {
      res["ElasticNodeNum"] = boost::any(*elasticNodeNum);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (endDay) {
      res["EndDay"] = boost::any(*endDay);
    }
    if (planName) {
      res["PlanName"] = boost::any(*planName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("WeeklyRepeat") != m.end() && !m["WeeklyRepeat"].empty()) {
      weeklyRepeat = make_shared<string>(boost::any_cast<string>(m["WeeklyRepeat"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("ResourcePoolName") != m.end() && !m["ResourcePoolName"].empty()) {
      resourcePoolName = make_shared<string>(boost::any_cast<string>(m["ResourcePoolName"]));
    }
    if (m.find("StartDay") != m.end() && !m["StartDay"].empty()) {
      startDay = make_shared<string>(boost::any_cast<string>(m["StartDay"]));
    }
    if (m.find("ElasticNodeNum") != m.end() && !m["ElasticNodeNum"].empty()) {
      elasticNodeNum = make_shared<long>(boost::any_cast<long>(m["ElasticNodeNum"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("EndDay") != m.end() && !m["EndDay"].empty()) {
      endDay = make_shared<string>(boost::any_cast<string>(m["EndDay"]));
    }
    if (m.find("PlanName") != m.end() && !m["PlanName"].empty()) {
      planName = make_shared<string>(boost::any_cast<string>(m["PlanName"]));
    }
  }


  virtual ~DescribeElasticPlanResponseBodyElasticPlanList() = default;
};
class DescribeElasticPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeElasticPlanResponseBodyElasticPlanList>> elasticPlanList{};

  DescribeElasticPlanResponseBody() {}

  explicit DescribeElasticPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (elasticPlanList) {
      vector<boost::any> temp1;
      for(auto item1:*elasticPlanList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ElasticPlanList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ElasticPlanList") != m.end() && !m["ElasticPlanList"].empty()) {
      if (typeid(vector<boost::any>) == m["ElasticPlanList"].type()) {
        vector<DescribeElasticPlanResponseBodyElasticPlanList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ElasticPlanList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeElasticPlanResponseBodyElasticPlanList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elasticPlanList = make_shared<vector<DescribeElasticPlanResponseBodyElasticPlanList>>(expect1);
      }
    }
  }


  virtual ~DescribeElasticPlanResponseBody() = default;
};
class DescribeElasticPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeElasticPlanResponseBody> body{};

  DescribeElasticPlanResponse() {}

  explicit DescribeElasticPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeElasticPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeElasticPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeElasticPlanResponse() = default;
};
class DescribeInclinedTablesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> tableType{};
  shared_ptr<string> order{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeInclinedTablesRequest() {}

  explicit DescribeInclinedTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (tableType) {
      res["TableType"] = boost::any(*tableType);
    }
    if (order) {
      res["Order"] = boost::any(*order);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("TableType") != m.end() && !m["TableType"].empty()) {
      tableType = make_shared<string>(boost::any_cast<string>(m["TableType"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeInclinedTablesRequest() = default;
};
class DescribeInclinedTablesResponseBodyItemsTable : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> schema{};
  shared_ptr<long> size{};
  shared_ptr<string> name{};
  shared_ptr<bool> isIncline{};

  DescribeInclinedTablesResponseBodyItemsTable() {}

  explicit DescribeInclinedTablesResponseBodyItemsTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (isIncline) {
      res["IsIncline"] = boost::any(*isIncline);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("IsIncline") != m.end() && !m["IsIncline"].empty()) {
      isIncline = make_shared<bool>(boost::any_cast<bool>(m["IsIncline"]));
    }
  }


  virtual ~DescribeInclinedTablesResponseBodyItemsTable() = default;
};
class DescribeInclinedTablesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInclinedTablesResponseBodyItemsTable>> table{};

  DescribeInclinedTablesResponseBodyItems() {}

  explicit DescribeInclinedTablesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeInclinedTablesResponseBodyItemsTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInclinedTablesResponseBodyItemsTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<DescribeInclinedTablesResponseBodyItemsTable>>(expect1);
      }
    }
  }


  virtual ~DescribeInclinedTablesResponseBodyItems() = default;
};
class DescribeInclinedTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> totalCount{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<DescribeInclinedTablesResponseBodyItems> items{};

  DescribeInclinedTablesResponseBody() {}

  explicit DescribeInclinedTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeInclinedTablesResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeInclinedTablesResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeInclinedTablesResponseBody() = default;
};
class DescribeInclinedTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeInclinedTablesResponseBody> body{};

  DescribeInclinedTablesResponse() {}

  explicit DescribeInclinedTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInclinedTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInclinedTablesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInclinedTablesResponse() = default;
};
class DescribeLoadTasksRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> DBName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> order{};
  shared_ptr<string> range{};
  shared_ptr<string> state{};

  DescribeLoadTasksRecordsRequest() {}

  explicit DescribeLoadTasksRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (range) {
      res["Range"] = boost::any(*range);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Range") != m.end() && !m["Range"].empty()) {
      range = make_shared<string>(boost::any_cast<string>(m["Range"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DescribeLoadTasksRecordsRequest() = default;
};
class DescribeLoadTasksRecordsResponseBodyLoadTasksRecords : public Darabonba::Model {
public:
  shared_ptr<string> sql{};
  shared_ptr<string> state{};
  shared_ptr<string> createTime{};
  shared_ptr<string> DBName{};
  shared_ptr<string> processID{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> jobName{};
  shared_ptr<long> processRows{};

  DescribeLoadTasksRecordsResponseBodyLoadTasksRecords() {}

  explicit DescribeLoadTasksRecordsResponseBodyLoadTasksRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sql) {
      res["Sql"] = boost::any(*sql);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (processID) {
      res["ProcessID"] = boost::any(*processID);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (processRows) {
      res["ProcessRows"] = boost::any(*processRows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sql") != m.end() && !m["Sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["Sql"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("ProcessID") != m.end() && !m["ProcessID"].empty()) {
      processID = make_shared<string>(boost::any_cast<string>(m["ProcessID"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("ProcessRows") != m.end() && !m["ProcessRows"].empty()) {
      processRows = make_shared<long>(boost::any_cast<long>(m["ProcessRows"]));
    }
  }


  virtual ~DescribeLoadTasksRecordsResponseBodyLoadTasksRecords() = default;
};
class DescribeLoadTasksRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> totalCount{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<DescribeLoadTasksRecordsResponseBodyLoadTasksRecords>> loadTasksRecords{};

  DescribeLoadTasksRecordsResponseBody() {}

  explicit DescribeLoadTasksRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (loadTasksRecords) {
      vector<boost::any> temp1;
      for(auto item1:*loadTasksRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LoadTasksRecords"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("LoadTasksRecords") != m.end() && !m["LoadTasksRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["LoadTasksRecords"].type()) {
        vector<DescribeLoadTasksRecordsResponseBodyLoadTasksRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LoadTasksRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLoadTasksRecordsResponseBodyLoadTasksRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadTasksRecords = make_shared<vector<DescribeLoadTasksRecordsResponseBodyLoadTasksRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeLoadTasksRecordsResponseBody() = default;
};
class DescribeLoadTasksRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLoadTasksRecordsResponseBody> body{};

  DescribeLoadTasksRecordsResponse() {}

  explicit DescribeLoadTasksRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLoadTasksRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLoadTasksRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLoadTasksRecordsResponse() = default;
};
class DescribeOperatorPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};

  DescribeOperatorPermissionRequest() {}

  explicit DescribeOperatorPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeOperatorPermissionRequest() = default;
};
class DescribeOperatorPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> privileges{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> DBClusterId{};

  DescribeOperatorPermissionResponseBody() {}

  explicit DescribeOperatorPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (privileges) {
      res["Privileges"] = boost::any(*privileges);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Privileges") != m.end() && !m["Privileges"].empty()) {
      privileges = make_shared<string>(boost::any_cast<string>(m["Privileges"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeOperatorPermissionResponseBody() = default;
};
class DescribeOperatorPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeOperatorPermissionResponseBody> body{};

  DescribeOperatorPermissionResponse() {}

  explicit DescribeOperatorPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOperatorPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOperatorPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOperatorPermissionResponse() = default;
};
class DescribeProcessListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<bool> showFull{};
  shared_ptr<long> runningTime{};
  shared_ptr<string> user{};
  shared_ptr<string> keyword{};
  shared_ptr<string> order{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeProcessListRequest() {}

  explicit DescribeProcessListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (showFull) {
      res["ShowFull"] = boost::any(*showFull);
    }
    if (runningTime) {
      res["RunningTime"] = boost::any(*runningTime);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (order) {
      res["Order"] = boost::any(*order);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ShowFull") != m.end() && !m["ShowFull"].empty()) {
      showFull = make_shared<bool>(boost::any_cast<bool>(m["ShowFull"]));
    }
    if (m.find("RunningTime") != m.end() && !m["RunningTime"].empty()) {
      runningTime = make_shared<long>(boost::any_cast<long>(m["RunningTime"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeProcessListRequest() = default;
};
class DescribeProcessListResponseBodyItemsProcess : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<long> time{};
  shared_ptr<string> processId{};
  shared_ptr<string> host{};
  shared_ptr<string> DB{};
  shared_ptr<string> command{};
  shared_ptr<string> user{};
  shared_ptr<long> id{};
  shared_ptr<string> info{};

  DescribeProcessListResponseBodyItemsProcess() {}

  explicit DescribeProcessListResponseBodyItemsProcess(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (processId) {
      res["ProcessId"] = boost::any(*processId);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (DB) {
      res["DB"] = boost::any(*DB);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (info) {
      res["Info"] = boost::any(*info);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
    if (m.find("ProcessId") != m.end() && !m["ProcessId"].empty()) {
      processId = make_shared<string>(boost::any_cast<string>(m["ProcessId"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("DB") != m.end() && !m["DB"].empty()) {
      DB = make_shared<string>(boost::any_cast<string>(m["DB"]));
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Info") != m.end() && !m["Info"].empty()) {
      info = make_shared<string>(boost::any_cast<string>(m["Info"]));
    }
  }


  virtual ~DescribeProcessListResponseBodyItemsProcess() = default;
};
class DescribeProcessListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeProcessListResponseBodyItemsProcess>> process{};

  DescribeProcessListResponseBodyItems() {}

  explicit DescribeProcessListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (process) {
      vector<boost::any> temp1;
      for(auto item1:*process){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Process"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Process") != m.end() && !m["Process"].empty()) {
      if (typeid(vector<boost::any>) == m["Process"].type()) {
        vector<DescribeProcessListResponseBodyItemsProcess> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Process"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeProcessListResponseBodyItemsProcess model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        process = make_shared<vector<DescribeProcessListResponseBodyItemsProcess>>(expect1);
      }
    }
  }


  virtual ~DescribeProcessListResponseBodyItems() = default;
};
class DescribeProcessListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> totalCount{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<DescribeProcessListResponseBodyItems> items{};

  DescribeProcessListResponseBody() {}

  explicit DescribeProcessListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeProcessListResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeProcessListResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeProcessListResponseBody() = default;
};
class DescribeProcessListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeProcessListResponseBody> body{};

  DescribeProcessListResponse() {}

  explicit DescribeProcessListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeProcessListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeProcessListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeProcessListResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> acceptLanguage{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegionZonesZone : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> zoneId{};
  shared_ptr<bool> vpcEnabled{};

  DescribeRegionsResponseBodyRegionsRegionZonesZone() {}

  explicit DescribeRegionsResponseBodyRegionsRegionZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (vpcEnabled) {
      res["VpcEnabled"] = boost::any(*vpcEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("VpcEnabled") != m.end() && !m["VpcEnabled"].empty()) {
      vpcEnabled = make_shared<bool>(boost::any_cast<bool>(m["VpcEnabled"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegionZonesZone() = default;
};
class DescribeRegionsResponseBodyRegionsRegionZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegionZonesZone>> zone{};

  DescribeRegionsResponseBodyRegionsRegionZones() {}

  explicit DescribeRegionsResponseBodyRegionsRegionZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zone) {
      vector<boost::any> temp1;
      for(auto item1:*zone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      if (typeid(vector<boost::any>) == m["Zone"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegionZonesZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegionZonesZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zone = make_shared<vector<DescribeRegionsResponseBodyRegionsRegionZonesZone>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegionZones() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<DescribeRegionsResponseBodyRegionsRegionZones> zones{};
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeRegionsResponseBodyRegionsRegionZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeRegionsResponseBodyRegionsRegionZones>(model1);
      }
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegion>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeSchemasRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};

  DescribeSchemasRequest() {}

  explicit DescribeSchemasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~DescribeSchemasRequest() = default;
};
class DescribeSchemasResponseBodyItemsSchema : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};

  DescribeSchemasResponseBodyItemsSchema() {}

  explicit DescribeSchemasResponseBodyItemsSchema(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~DescribeSchemasResponseBodyItemsSchema() = default;
};
class DescribeSchemasResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSchemasResponseBodyItemsSchema>> schema{};

  DescribeSchemasResponseBodyItems() {}

  explicit DescribeSchemasResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schema) {
      vector<boost::any> temp1;
      for(auto item1:*schema){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Schema"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      if (typeid(vector<boost::any>) == m["Schema"].type()) {
        vector<DescribeSchemasResponseBodyItemsSchema> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Schema"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSchemasResponseBodyItemsSchema model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schema = make_shared<vector<DescribeSchemasResponseBodyItemsSchema>>(expect1);
      }
    }
  }


  virtual ~DescribeSchemasResponseBodyItems() = default;
};
class DescribeSchemasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSchemasResponseBodyItems> items{};

  DescribeSchemasResponseBody() {}

  explicit DescribeSchemasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeSchemasResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeSchemasResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeSchemasResponseBody() = default;
};
class DescribeSchemasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSchemasResponseBody> body{};

  DescribeSchemasResponse() {}

  explicit DescribeSchemasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSchemasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSchemasResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSchemasResponse() = default;
};
class DescribeSlowLogRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> DBName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> processID{};
  shared_ptr<string> order{};
  shared_ptr<string> range{};
  shared_ptr<string> state{};

  DescribeSlowLogRecordsRequest() {}

  explicit DescribeSlowLogRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (processID) {
      res["ProcessID"] = boost::any(*processID);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (range) {
      res["Range"] = boost::any(*range);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("ProcessID") != m.end() && !m["ProcessID"].empty()) {
      processID = make_shared<string>(boost::any_cast<string>(m["ProcessID"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Range") != m.end() && !m["Range"].empty()) {
      range = make_shared<string>(boost::any_cast<string>(m["Range"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DescribeSlowLogRecordsRequest() = default;
};
class DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord : public Darabonba::Model {
public:
  shared_ptr<string> hostAddress{};
  shared_ptr<long> scanTime{};
  shared_ptr<string> SQLText{};
  shared_ptr<string> outputSize{};
  shared_ptr<string> peakMemoryUsage{};
  shared_ptr<string> state{};
  shared_ptr<long> wallTime{};
  shared_ptr<string> scanSize{};
  shared_ptr<string> executionStartTime{};
  shared_ptr<long> queryTime{};
  shared_ptr<long> returnRowCounts{};
  shared_ptr<long> scanRows{};
  shared_ptr<long> parseRowCounts{};
  shared_ptr<string> DBName{};
  shared_ptr<long> planningTime{};
  shared_ptr<long> queueTime{};
  shared_ptr<string> userName{};
  shared_ptr<string> processID{};

  DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord() {}

  explicit DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (scanTime) {
      res["ScanTime"] = boost::any(*scanTime);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    if (outputSize) {
      res["OutputSize"] = boost::any(*outputSize);
    }
    if (peakMemoryUsage) {
      res["PeakMemoryUsage"] = boost::any(*peakMemoryUsage);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (wallTime) {
      res["WallTime"] = boost::any(*wallTime);
    }
    if (scanSize) {
      res["ScanSize"] = boost::any(*scanSize);
    }
    if (executionStartTime) {
      res["ExecutionStartTime"] = boost::any(*executionStartTime);
    }
    if (queryTime) {
      res["QueryTime"] = boost::any(*queryTime);
    }
    if (returnRowCounts) {
      res["ReturnRowCounts"] = boost::any(*returnRowCounts);
    }
    if (scanRows) {
      res["ScanRows"] = boost::any(*scanRows);
    }
    if (parseRowCounts) {
      res["ParseRowCounts"] = boost::any(*parseRowCounts);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (planningTime) {
      res["PlanningTime"] = boost::any(*planningTime);
    }
    if (queueTime) {
      res["QueueTime"] = boost::any(*queueTime);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (processID) {
      res["ProcessID"] = boost::any(*processID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("ScanTime") != m.end() && !m["ScanTime"].empty()) {
      scanTime = make_shared<long>(boost::any_cast<long>(m["ScanTime"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
    if (m.find("OutputSize") != m.end() && !m["OutputSize"].empty()) {
      outputSize = make_shared<string>(boost::any_cast<string>(m["OutputSize"]));
    }
    if (m.find("PeakMemoryUsage") != m.end() && !m["PeakMemoryUsage"].empty()) {
      peakMemoryUsage = make_shared<string>(boost::any_cast<string>(m["PeakMemoryUsage"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("WallTime") != m.end() && !m["WallTime"].empty()) {
      wallTime = make_shared<long>(boost::any_cast<long>(m["WallTime"]));
    }
    if (m.find("ScanSize") != m.end() && !m["ScanSize"].empty()) {
      scanSize = make_shared<string>(boost::any_cast<string>(m["ScanSize"]));
    }
    if (m.find("ExecutionStartTime") != m.end() && !m["ExecutionStartTime"].empty()) {
      executionStartTime = make_shared<string>(boost::any_cast<string>(m["ExecutionStartTime"]));
    }
    if (m.find("QueryTime") != m.end() && !m["QueryTime"].empty()) {
      queryTime = make_shared<long>(boost::any_cast<long>(m["QueryTime"]));
    }
    if (m.find("ReturnRowCounts") != m.end() && !m["ReturnRowCounts"].empty()) {
      returnRowCounts = make_shared<long>(boost::any_cast<long>(m["ReturnRowCounts"]));
    }
    if (m.find("ScanRows") != m.end() && !m["ScanRows"].empty()) {
      scanRows = make_shared<long>(boost::any_cast<long>(m["ScanRows"]));
    }
    if (m.find("ParseRowCounts") != m.end() && !m["ParseRowCounts"].empty()) {
      parseRowCounts = make_shared<long>(boost::any_cast<long>(m["ParseRowCounts"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("PlanningTime") != m.end() && !m["PlanningTime"].empty()) {
      planningTime = make_shared<long>(boost::any_cast<long>(m["PlanningTime"]));
    }
    if (m.find("QueueTime") != m.end() && !m["QueueTime"].empty()) {
      queueTime = make_shared<long>(boost::any_cast<long>(m["QueueTime"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("ProcessID") != m.end() && !m["ProcessID"].empty()) {
      processID = make_shared<string>(boost::any_cast<string>(m["ProcessID"]));
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord() = default;
};
class DescribeSlowLogRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord>> slowLogRecord{};

  DescribeSlowLogRecordsResponseBodyItems() {}

  explicit DescribeSlowLogRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slowLogRecord) {
      vector<boost::any> temp1;
      for(auto item1:*slowLogRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlowLogRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlowLogRecord") != m.end() && !m["SlowLogRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["SlowLogRecord"].type()) {
        vector<DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlowLogRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slowLogRecord = make_shared<vector<DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodyItems() = default;
};
class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> totalCount{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<DescribeSlowLogRecordsResponseBodyItems> items{};

  DescribeSlowLogRecordsResponseBody() {}

  explicit DescribeSlowLogRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeSlowLogRecordsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeSlowLogRecordsResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBody() = default;
};
class DescribeSlowLogRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSlowLogRecordsResponseBody> body{};

  DescribeSlowLogRecordsResponse() {}

  explicit DescribeSlowLogRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlowLogRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlowLogRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponse() = default;
};
class DescribeSlowLogTrendRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> DBName{};

  DescribeSlowLogTrendRequest() {}

  explicit DescribeSlowLogTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
  }


  virtual ~DescribeSlowLogTrendRequest() = default;
};
class DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeriesSeriesItem : public Darabonba::Model {
public:
  shared_ptr<string> values{};
  shared_ptr<string> name{};

  DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeriesSeriesItem() {}

  explicit DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeriesSeriesItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (values) {
      res["Values"] = boost::any(*values);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      values = make_shared<string>(boost::any_cast<string>(m["Values"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeriesSeriesItem() = default;
};
class DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeries : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeriesSeriesItem>> seriesItem{};

  DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeries() {}

  explicit DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (seriesItem) {
      vector<boost::any> temp1;
      for(auto item1:*seriesItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SeriesItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SeriesItem") != m.end() && !m["SeriesItem"].empty()) {
      if (typeid(vector<boost::any>) == m["SeriesItem"].type()) {
        vector<DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeriesSeriesItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SeriesItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeriesSeriesItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        seriesItem = make_shared<vector<DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeriesSeriesItem>>(expect1);
      }
    }
  }


  virtual ~DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeries() = default;
};
class DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItem : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> unit{};
  shared_ptr<DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeries> series{};

  DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItem() {}

  explicit DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    if (series) {
      res["Series"] = series ? boost::any(series->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(map<string, boost::any>) == m["Series"].type()) {
        DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeries model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Series"]));
        series = make_shared<DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItemSeries>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItem() = default;
};
class DescribeSlowLogTrendResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItem>> slowLogTrendItem{};

  DescribeSlowLogTrendResponseBodyItems() {}

  explicit DescribeSlowLogTrendResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (slowLogTrendItem) {
      vector<boost::any> temp1;
      for(auto item1:*slowLogTrendItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlowLogTrendItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SlowLogTrendItem") != m.end() && !m["SlowLogTrendItem"].empty()) {
      if (typeid(vector<boost::any>) == m["SlowLogTrendItem"].type()) {
        vector<DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlowLogTrendItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slowLogTrendItem = make_shared<vector<DescribeSlowLogTrendResponseBodyItemsSlowLogTrendItem>>(expect1);
      }
    }
  }


  virtual ~DescribeSlowLogTrendResponseBodyItems() = default;
};
class DescribeSlowLogTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<DescribeSlowLogTrendResponseBodyItems> items{};

  DescribeSlowLogTrendResponseBody() {}

  explicit DescribeSlowLogTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeSlowLogTrendResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeSlowLogTrendResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogTrendResponseBody() = default;
};
class DescribeSlowLogTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSlowLogTrendResponseBody> body{};

  DescribeSlowLogTrendResponse() {}

  explicit DescribeSlowLogTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlowLogTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlowLogTrendResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlowLogTrendResponse() = default;
};
class DescribeSQLPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> processId{};

  DescribeSQLPlanRequest() {}

  explicit DescribeSQLPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (processId) {
      res["ProcessId"] = boost::any(*processId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ProcessId") != m.end() && !m["ProcessId"].empty()) {
      processId = make_shared<string>(boost::any_cast<string>(m["ProcessId"]));
    }
  }


  virtual ~DescribeSQLPlanRequest() = default;
};
class DescribeSQLPlanResponseBodyStageList : public Darabonba::Model {
public:
  shared_ptr<string> state{};
  shared_ptr<long> CPUTimeAvg{};
  shared_ptr<long> CPUTimeMax{};
  shared_ptr<long> operatorCost{};
  shared_ptr<long> scanTimeMax{};
  shared_ptr<long> inputSizeMax{};
  shared_ptr<long> stageId{};
  shared_ptr<long> scanSizeMax{};
  shared_ptr<long> CPUTimeMin{};
  shared_ptr<long> scanTimeMin{};
  shared_ptr<long> scanSizeMin{};
  shared_ptr<long> inputSizeMin{};
  shared_ptr<long> peakMemory{};
  shared_ptr<long> scanTimeAvg{};
  shared_ptr<long> scanSizeAvg{};
  shared_ptr<long> inputSizeAvg{};

  DescribeSQLPlanResponseBodyStageList() {}

  explicit DescribeSQLPlanResponseBodyStageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (CPUTimeAvg) {
      res["CPUTimeAvg"] = boost::any(*CPUTimeAvg);
    }
    if (CPUTimeMax) {
      res["CPUTimeMax"] = boost::any(*CPUTimeMax);
    }
    if (operatorCost) {
      res["OperatorCost"] = boost::any(*operatorCost);
    }
    if (scanTimeMax) {
      res["ScanTimeMax"] = boost::any(*scanTimeMax);
    }
    if (inputSizeMax) {
      res["InputSizeMax"] = boost::any(*inputSizeMax);
    }
    if (stageId) {
      res["StageId"] = boost::any(*stageId);
    }
    if (scanSizeMax) {
      res["ScanSizeMax"] = boost::any(*scanSizeMax);
    }
    if (CPUTimeMin) {
      res["CPUTimeMin"] = boost::any(*CPUTimeMin);
    }
    if (scanTimeMin) {
      res["ScanTimeMin"] = boost::any(*scanTimeMin);
    }
    if (scanSizeMin) {
      res["ScanSizeMin"] = boost::any(*scanSizeMin);
    }
    if (inputSizeMin) {
      res["InputSizeMin"] = boost::any(*inputSizeMin);
    }
    if (peakMemory) {
      res["PeakMemory"] = boost::any(*peakMemory);
    }
    if (scanTimeAvg) {
      res["ScanTimeAvg"] = boost::any(*scanTimeAvg);
    }
    if (scanSizeAvg) {
      res["ScanSizeAvg"] = boost::any(*scanSizeAvg);
    }
    if (inputSizeAvg) {
      res["InputSizeAvg"] = boost::any(*inputSizeAvg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("CPUTimeAvg") != m.end() && !m["CPUTimeAvg"].empty()) {
      CPUTimeAvg = make_shared<long>(boost::any_cast<long>(m["CPUTimeAvg"]));
    }
    if (m.find("CPUTimeMax") != m.end() && !m["CPUTimeMax"].empty()) {
      CPUTimeMax = make_shared<long>(boost::any_cast<long>(m["CPUTimeMax"]));
    }
    if (m.find("OperatorCost") != m.end() && !m["OperatorCost"].empty()) {
      operatorCost = make_shared<long>(boost::any_cast<long>(m["OperatorCost"]));
    }
    if (m.find("ScanTimeMax") != m.end() && !m["ScanTimeMax"].empty()) {
      scanTimeMax = make_shared<long>(boost::any_cast<long>(m["ScanTimeMax"]));
    }
    if (m.find("InputSizeMax") != m.end() && !m["InputSizeMax"].empty()) {
      inputSizeMax = make_shared<long>(boost::any_cast<long>(m["InputSizeMax"]));
    }
    if (m.find("StageId") != m.end() && !m["StageId"].empty()) {
      stageId = make_shared<long>(boost::any_cast<long>(m["StageId"]));
    }
    if (m.find("ScanSizeMax") != m.end() && !m["ScanSizeMax"].empty()) {
      scanSizeMax = make_shared<long>(boost::any_cast<long>(m["ScanSizeMax"]));
    }
    if (m.find("CPUTimeMin") != m.end() && !m["CPUTimeMin"].empty()) {
      CPUTimeMin = make_shared<long>(boost::any_cast<long>(m["CPUTimeMin"]));
    }
    if (m.find("ScanTimeMin") != m.end() && !m["ScanTimeMin"].empty()) {
      scanTimeMin = make_shared<long>(boost::any_cast<long>(m["ScanTimeMin"]));
    }
    if (m.find("ScanSizeMin") != m.end() && !m["ScanSizeMin"].empty()) {
      scanSizeMin = make_shared<long>(boost::any_cast<long>(m["ScanSizeMin"]));
    }
    if (m.find("InputSizeMin") != m.end() && !m["InputSizeMin"].empty()) {
      inputSizeMin = make_shared<long>(boost::any_cast<long>(m["InputSizeMin"]));
    }
    if (m.find("PeakMemory") != m.end() && !m["PeakMemory"].empty()) {
      peakMemory = make_shared<long>(boost::any_cast<long>(m["PeakMemory"]));
    }
    if (m.find("ScanTimeAvg") != m.end() && !m["ScanTimeAvg"].empty()) {
      scanTimeAvg = make_shared<long>(boost::any_cast<long>(m["ScanTimeAvg"]));
    }
    if (m.find("ScanSizeAvg") != m.end() && !m["ScanSizeAvg"].empty()) {
      scanSizeAvg = make_shared<long>(boost::any_cast<long>(m["ScanSizeAvg"]));
    }
    if (m.find("InputSizeAvg") != m.end() && !m["InputSizeAvg"].empty()) {
      inputSizeAvg = make_shared<long>(boost::any_cast<long>(m["InputSizeAvg"]));
    }
  }


  virtual ~DescribeSQLPlanResponseBodyStageList() = default;
};
class DescribeSQLPlanResponseBodyDetail : public Darabonba::Model {
public:
  shared_ptr<string> SQL{};
  shared_ptr<long> outputSize{};
  shared_ptr<string> state{};
  shared_ptr<long> outputRows{};
  shared_ptr<string> user{};
  shared_ptr<string> startTime{};
  shared_ptr<long> totalStage{};
  shared_ptr<long> queuedTime{};
  shared_ptr<long> totalTime{};
  shared_ptr<long> totalTask{};
  shared_ptr<string> database{};
  shared_ptr<long> peakMemory{};
  shared_ptr<string> clientIP{};
  shared_ptr<long> planningTime{};
  shared_ptr<long> CPUTime{};

  DescribeSQLPlanResponseBodyDetail() {}

  explicit DescribeSQLPlanResponseBodyDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SQL) {
      res["SQL"] = boost::any(*SQL);
    }
    if (outputSize) {
      res["OutputSize"] = boost::any(*outputSize);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (outputRows) {
      res["OutputRows"] = boost::any(*outputRows);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (totalStage) {
      res["TotalStage"] = boost::any(*totalStage);
    }
    if (queuedTime) {
      res["QueuedTime"] = boost::any(*queuedTime);
    }
    if (totalTime) {
      res["TotalTime"] = boost::any(*totalTime);
    }
    if (totalTask) {
      res["TotalTask"] = boost::any(*totalTask);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (peakMemory) {
      res["PeakMemory"] = boost::any(*peakMemory);
    }
    if (clientIP) {
      res["ClientIP"] = boost::any(*clientIP);
    }
    if (planningTime) {
      res["PlanningTime"] = boost::any(*planningTime);
    }
    if (CPUTime) {
      res["CPUTime"] = boost::any(*CPUTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SQL") != m.end() && !m["SQL"].empty()) {
      SQL = make_shared<string>(boost::any_cast<string>(m["SQL"]));
    }
    if (m.find("OutputSize") != m.end() && !m["OutputSize"].empty()) {
      outputSize = make_shared<long>(boost::any_cast<long>(m["OutputSize"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("OutputRows") != m.end() && !m["OutputRows"].empty()) {
      outputRows = make_shared<long>(boost::any_cast<long>(m["OutputRows"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TotalStage") != m.end() && !m["TotalStage"].empty()) {
      totalStage = make_shared<long>(boost::any_cast<long>(m["TotalStage"]));
    }
    if (m.find("QueuedTime") != m.end() && !m["QueuedTime"].empty()) {
      queuedTime = make_shared<long>(boost::any_cast<long>(m["QueuedTime"]));
    }
    if (m.find("TotalTime") != m.end() && !m["TotalTime"].empty()) {
      totalTime = make_shared<long>(boost::any_cast<long>(m["TotalTime"]));
    }
    if (m.find("TotalTask") != m.end() && !m["TotalTask"].empty()) {
      totalTask = make_shared<long>(boost::any_cast<long>(m["TotalTask"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("PeakMemory") != m.end() && !m["PeakMemory"].empty()) {
      peakMemory = make_shared<long>(boost::any_cast<long>(m["PeakMemory"]));
    }
    if (m.find("ClientIP") != m.end() && !m["ClientIP"].empty()) {
      clientIP = make_shared<string>(boost::any_cast<string>(m["ClientIP"]));
    }
    if (m.find("PlanningTime") != m.end() && !m["PlanningTime"].empty()) {
      planningTime = make_shared<long>(boost::any_cast<long>(m["PlanningTime"]));
    }
    if (m.find("CPUTime") != m.end() && !m["CPUTime"].empty()) {
      CPUTime = make_shared<long>(boost::any_cast<long>(m["CPUTime"]));
    }
  }


  virtual ~DescribeSQLPlanResponseBodyDetail() = default;
};
class DescribeSQLPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSQLPlanResponseBodyStageList>> stageList{};
  shared_ptr<string> originInfo{};
  shared_ptr<DescribeSQLPlanResponseBodyDetail> detail{};

  DescribeSQLPlanResponseBody() {}

  explicit DescribeSQLPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stageList) {
      vector<boost::any> temp1;
      for(auto item1:*stageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StageList"] = boost::any(temp1);
    }
    if (originInfo) {
      res["OriginInfo"] = boost::any(*originInfo);
    }
    if (detail) {
      res["Detail"] = detail ? boost::any(detail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StageList") != m.end() && !m["StageList"].empty()) {
      if (typeid(vector<boost::any>) == m["StageList"].type()) {
        vector<DescribeSQLPlanResponseBodyStageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLPlanResponseBodyStageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stageList = make_shared<vector<DescribeSQLPlanResponseBodyStageList>>(expect1);
      }
    }
    if (m.find("OriginInfo") != m.end() && !m["OriginInfo"].empty()) {
      originInfo = make_shared<string>(boost::any_cast<string>(m["OriginInfo"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      if (typeid(map<string, boost::any>) == m["Detail"].type()) {
        DescribeSQLPlanResponseBodyDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Detail"]));
        detail = make_shared<DescribeSQLPlanResponseBodyDetail>(model1);
      }
    }
  }


  virtual ~DescribeSQLPlanResponseBody() = default;
};
class DescribeSQLPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSQLPlanResponseBody> body{};

  DescribeSQLPlanResponse() {}

  explicit DescribeSQLPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSQLPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSQLPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSQLPlanResponse() = default;
};
class DescribeSQLPlanTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> processId{};
  shared_ptr<string> stageId{};

  DescribeSQLPlanTaskRequest() {}

  explicit DescribeSQLPlanTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (processId) {
      res["ProcessId"] = boost::any(*processId);
    }
    if (stageId) {
      res["StageId"] = boost::any(*stageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ProcessId") != m.end() && !m["ProcessId"].empty()) {
      processId = make_shared<string>(boost::any_cast<string>(m["ProcessId"]));
    }
    if (m.find("StageId") != m.end() && !m["StageId"].empty()) {
      stageId = make_shared<string>(boost::any_cast<string>(m["StageId"]));
    }
  }


  virtual ~DescribeSQLPlanTaskRequest() = default;
};
class DescribeSQLPlanTaskResponseBodyTaskList : public Darabonba::Model {
public:
  shared_ptr<long> scanCost{};
  shared_ptr<long> outputSize{};
  shared_ptr<long> inputSize{};
  shared_ptr<string> state{};
  shared_ptr<long> operatorCost{};
  shared_ptr<long> outputRows{};
  shared_ptr<long> scanSize{};
  shared_ptr<long> elapsedTime{};
  shared_ptr<long> scanRows{};
  shared_ptr<long> peakMemory{};
  shared_ptr<long> taskId{};
  shared_ptr<long> inputRows{};

  DescribeSQLPlanTaskResponseBodyTaskList() {}

  explicit DescribeSQLPlanTaskResponseBodyTaskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scanCost) {
      res["ScanCost"] = boost::any(*scanCost);
    }
    if (outputSize) {
      res["OutputSize"] = boost::any(*outputSize);
    }
    if (inputSize) {
      res["InputSize"] = boost::any(*inputSize);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (operatorCost) {
      res["OperatorCost"] = boost::any(*operatorCost);
    }
    if (outputRows) {
      res["OutputRows"] = boost::any(*outputRows);
    }
    if (scanSize) {
      res["ScanSize"] = boost::any(*scanSize);
    }
    if (elapsedTime) {
      res["ElapsedTime"] = boost::any(*elapsedTime);
    }
    if (scanRows) {
      res["ScanRows"] = boost::any(*scanRows);
    }
    if (peakMemory) {
      res["PeakMemory"] = boost::any(*peakMemory);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (inputRows) {
      res["InputRows"] = boost::any(*inputRows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScanCost") != m.end() && !m["ScanCost"].empty()) {
      scanCost = make_shared<long>(boost::any_cast<long>(m["ScanCost"]));
    }
    if (m.find("OutputSize") != m.end() && !m["OutputSize"].empty()) {
      outputSize = make_shared<long>(boost::any_cast<long>(m["OutputSize"]));
    }
    if (m.find("InputSize") != m.end() && !m["InputSize"].empty()) {
      inputSize = make_shared<long>(boost::any_cast<long>(m["InputSize"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("OperatorCost") != m.end() && !m["OperatorCost"].empty()) {
      operatorCost = make_shared<long>(boost::any_cast<long>(m["OperatorCost"]));
    }
    if (m.find("OutputRows") != m.end() && !m["OutputRows"].empty()) {
      outputRows = make_shared<long>(boost::any_cast<long>(m["OutputRows"]));
    }
    if (m.find("ScanSize") != m.end() && !m["ScanSize"].empty()) {
      scanSize = make_shared<long>(boost::any_cast<long>(m["ScanSize"]));
    }
    if (m.find("ElapsedTime") != m.end() && !m["ElapsedTime"].empty()) {
      elapsedTime = make_shared<long>(boost::any_cast<long>(m["ElapsedTime"]));
    }
    if (m.find("ScanRows") != m.end() && !m["ScanRows"].empty()) {
      scanRows = make_shared<long>(boost::any_cast<long>(m["ScanRows"]));
    }
    if (m.find("PeakMemory") != m.end() && !m["PeakMemory"].empty()) {
      peakMemory = make_shared<long>(boost::any_cast<long>(m["PeakMemory"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("InputRows") != m.end() && !m["InputRows"].empty()) {
      inputRows = make_shared<long>(boost::any_cast<long>(m["InputRows"]));
    }
  }


  virtual ~DescribeSQLPlanTaskResponseBodyTaskList() = default;
};
class DescribeSQLPlanTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSQLPlanTaskResponseBodyTaskList>> taskList{};

  DescribeSQLPlanTaskResponseBody() {}

  explicit DescribeSQLPlanTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskList) {
      vector<boost::any> temp1;
      for(auto item1:*taskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskList") != m.end() && !m["TaskList"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskList"].type()) {
        vector<DescribeSQLPlanTaskResponseBodyTaskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLPlanTaskResponseBodyTaskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskList = make_shared<vector<DescribeSQLPlanTaskResponseBodyTaskList>>(expect1);
      }
    }
  }


  virtual ~DescribeSQLPlanTaskResponseBody() = default;
};
class DescribeSQLPlanTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSQLPlanTaskResponseBody> body{};

  DescribeSQLPlanTaskResponse() {}

  explicit DescribeSQLPlanTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSQLPlanTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSQLPlanTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSQLPlanTaskResponse() = default;
};
class DescribeTableDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};

  DescribeTableDetailRequest() {}

  explicit DescribeTableDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~DescribeTableDetailRequest() = default;
};
class DescribeTableDetailResponseBodyItemsShard : public Darabonba::Model {
public:
  shared_ptr<long> size{};
  shared_ptr<long> id{};

  DescribeTableDetailResponseBodyItemsShard() {}

  explicit DescribeTableDetailResponseBodyItemsShard(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DescribeTableDetailResponseBodyItemsShard() = default;
};
class DescribeTableDetailResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTableDetailResponseBodyItemsShard>> shard{};

  DescribeTableDetailResponseBodyItems() {}

  explicit DescribeTableDetailResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shard) {
      vector<boost::any> temp1;
      for(auto item1:*shard){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Shard"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Shard") != m.end() && !m["Shard"].empty()) {
      if (typeid(vector<boost::any>) == m["Shard"].type()) {
        vector<DescribeTableDetailResponseBodyItemsShard> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Shard"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTableDetailResponseBodyItemsShard model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        shard = make_shared<vector<DescribeTableDetailResponseBodyItemsShard>>(expect1);
      }
    }
  }


  virtual ~DescribeTableDetailResponseBodyItems() = default;
};
class DescribeTableDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> avgSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeTableDetailResponseBodyItems> items{};

  DescribeTableDetailResponseBody() {}

  explicit DescribeTableDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgSize) {
      res["AvgSize"] = boost::any(*avgSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvgSize") != m.end() && !m["AvgSize"].empty()) {
      avgSize = make_shared<long>(boost::any_cast<long>(m["AvgSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeTableDetailResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeTableDetailResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeTableDetailResponseBody() = default;
};
class DescribeTableDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTableDetailResponseBody> body{};

  DescribeTableDetailResponse() {}

  explicit DescribeTableDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTableDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTableDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTableDetailResponse() = default;
};
class DescribeTablePartitionDiagnoseRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeTablePartitionDiagnoseRequest() {}

  explicit DescribeTablePartitionDiagnoseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeTablePartitionDiagnoseRequest() = default;
};
class DescribeTablePartitionDiagnoseResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};
  shared_ptr<string> partitionDetail{};
  shared_ptr<string> schemaName{};
  shared_ptr<long> partitionNumber{};

  DescribeTablePartitionDiagnoseResponseBodyItems() {}

  explicit DescribeTablePartitionDiagnoseResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (partitionDetail) {
      res["PartitionDetail"] = boost::any(*partitionDetail);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (partitionNumber) {
      res["PartitionNumber"] = boost::any(*partitionNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("PartitionDetail") != m.end() && !m["PartitionDetail"].empty()) {
      partitionDetail = make_shared<string>(boost::any_cast<string>(m["PartitionDetail"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("PartitionNumber") != m.end() && !m["PartitionNumber"].empty()) {
      partitionNumber = make_shared<long>(boost::any_cast<long>(m["PartitionNumber"]));
    }
  }


  virtual ~DescribeTablePartitionDiagnoseResponseBodyItems() = default;
};
class DescribeTablePartitionDiagnoseResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> suggestMaxRecordsPerPartition{};
  shared_ptr<long> suggestMinRecordsPerPartition{};
  shared_ptr<vector<DescribeTablePartitionDiagnoseResponseBodyItems>> items{};

  DescribeTablePartitionDiagnoseResponseBody() {}

  explicit DescribeTablePartitionDiagnoseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (suggestMaxRecordsPerPartition) {
      res["SuggestMaxRecordsPerPartition"] = boost::any(*suggestMaxRecordsPerPartition);
    }
    if (suggestMinRecordsPerPartition) {
      res["SuggestMinRecordsPerPartition"] = boost::any(*suggestMinRecordsPerPartition);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SuggestMaxRecordsPerPartition") != m.end() && !m["SuggestMaxRecordsPerPartition"].empty()) {
      suggestMaxRecordsPerPartition = make_shared<long>(boost::any_cast<long>(m["SuggestMaxRecordsPerPartition"]));
    }
    if (m.find("SuggestMinRecordsPerPartition") != m.end() && !m["SuggestMinRecordsPerPartition"].empty()) {
      suggestMinRecordsPerPartition = make_shared<long>(boost::any_cast<long>(m["SuggestMinRecordsPerPartition"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeTablePartitionDiagnoseResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTablePartitionDiagnoseResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeTablePartitionDiagnoseResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeTablePartitionDiagnoseResponseBody() = default;
};
class DescribeTablePartitionDiagnoseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTablePartitionDiagnoseResponseBody> body{};

  DescribeTablePartitionDiagnoseResponse() {}

  explicit DescribeTablePartitionDiagnoseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTablePartitionDiagnoseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTablePartitionDiagnoseResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTablePartitionDiagnoseResponse() = default;
};
class DescribeTablesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};

  DescribeTablesRequest() {}

  explicit DescribeTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~DescribeTablesRequest() = default;
};
class DescribeTablesResponseBodyItemsTable : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> schemaName{};

  DescribeTablesResponseBodyItemsTable() {}

  explicit DescribeTablesResponseBodyItemsTable(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
  }


  virtual ~DescribeTablesResponseBodyItemsTable() = default;
};
class DescribeTablesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTablesResponseBodyItemsTable>> table{};

  DescribeTablesResponseBodyItems() {}

  explicit DescribeTablesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeTablesResponseBodyItemsTable> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Table"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTablesResponseBodyItemsTable model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        table = make_shared<vector<DescribeTablesResponseBodyItemsTable>>(expect1);
      }
    }
  }


  virtual ~DescribeTablesResponseBodyItems() = default;
};
class DescribeTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeTablesResponseBodyItems> items{};

  DescribeTablesResponseBody() {}

  explicit DescribeTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeTablesResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeTablesResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeTablesResponseBody() = default;
};
class DescribeTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTablesResponseBody> body{};

  DescribeTablesResponse() {}

  explicit DescribeTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTablesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTablesResponse() = default;
};
class DescribeTableStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> order{};

  DescribeTableStatisticsRequest() {}

  explicit DescribeTableStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
  }


  virtual ~DescribeTableStatisticsRequest() = default;
};
class DescribeTableStatisticsResponseBodyItemsTableStatisticRecords : public Darabonba::Model {
public:
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<long> rowCount{};
  shared_ptr<long> dataSize{};
  shared_ptr<long> indexSize{};
  shared_ptr<long> primaryKeyIndexSize{};
  shared_ptr<long> partitionCount{};
  shared_ptr<long> coldDataSize{};

  DescribeTableStatisticsResponseBodyItemsTableStatisticRecords() {}

  explicit DescribeTableStatisticsResponseBodyItemsTableStatisticRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (rowCount) {
      res["RowCount"] = boost::any(*rowCount);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (indexSize) {
      res["IndexSize"] = boost::any(*indexSize);
    }
    if (primaryKeyIndexSize) {
      res["PrimaryKeyIndexSize"] = boost::any(*primaryKeyIndexSize);
    }
    if (partitionCount) {
      res["PartitionCount"] = boost::any(*partitionCount);
    }
    if (coldDataSize) {
      res["ColdDataSize"] = boost::any(*coldDataSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("RowCount") != m.end() && !m["RowCount"].empty()) {
      rowCount = make_shared<long>(boost::any_cast<long>(m["RowCount"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("IndexSize") != m.end() && !m["IndexSize"].empty()) {
      indexSize = make_shared<long>(boost::any_cast<long>(m["IndexSize"]));
    }
    if (m.find("PrimaryKeyIndexSize") != m.end() && !m["PrimaryKeyIndexSize"].empty()) {
      primaryKeyIndexSize = make_shared<long>(boost::any_cast<long>(m["PrimaryKeyIndexSize"]));
    }
    if (m.find("PartitionCount") != m.end() && !m["PartitionCount"].empty()) {
      partitionCount = make_shared<long>(boost::any_cast<long>(m["PartitionCount"]));
    }
    if (m.find("ColdDataSize") != m.end() && !m["ColdDataSize"].empty()) {
      coldDataSize = make_shared<long>(boost::any_cast<long>(m["ColdDataSize"]));
    }
  }


  virtual ~DescribeTableStatisticsResponseBodyItemsTableStatisticRecords() = default;
};
class DescribeTableStatisticsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTableStatisticsResponseBodyItemsTableStatisticRecords>> tableStatisticRecords{};

  DescribeTableStatisticsResponseBodyItems() {}

  explicit DescribeTableStatisticsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableStatisticRecords) {
      vector<boost::any> temp1;
      for(auto item1:*tableStatisticRecords){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableStatisticRecords"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableStatisticRecords") != m.end() && !m["TableStatisticRecords"].empty()) {
      if (typeid(vector<boost::any>) == m["TableStatisticRecords"].type()) {
        vector<DescribeTableStatisticsResponseBodyItemsTableStatisticRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableStatisticRecords"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTableStatisticsResponseBodyItemsTableStatisticRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableStatisticRecords = make_shared<vector<DescribeTableStatisticsResponseBodyItemsTableStatisticRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeTableStatisticsResponseBodyItems() = default;
};
class DescribeTableStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> totalCount{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<DescribeTableStatisticsResponseBodyItems> items{};

  DescribeTableStatisticsResponseBody() {}

  explicit DescribeTableStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeTableStatisticsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeTableStatisticsResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeTableStatisticsResponseBody() = default;
};
class DescribeTableStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTableStatisticsResponseBody> body{};

  DescribeTableStatisticsResponse() {}

  explicit DescribeTableStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTableStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTableStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTableStatisticsResponse() = default;
};
class DescribeTaskInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<long> taskId{};

  DescribeTaskInfoRequest() {}

  explicit DescribeTaskInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~DescribeTaskInfoRequest() = default;
};
class DescribeTaskInfoResponseBodyTaskInfo : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> progress{};
  shared_ptr<string> beginTime{};
  shared_ptr<long> taskId{};

  DescribeTaskInfoResponseBodyTaskInfo() {}

  explicit DescribeTaskInfoResponseBodyTaskInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~DescribeTaskInfoResponseBodyTaskInfo() = default;
};
class DescribeTaskInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeTaskInfoResponseBodyTaskInfo> taskInfo{};
  shared_ptr<string> requestId{};

  DescribeTaskInfoResponseBody() {}

  explicit DescribeTaskInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskInfo) {
      res["TaskInfo"] = taskInfo ? boost::any(taskInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskInfo") != m.end() && !m["TaskInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskInfo"].type()) {
        DescribeTaskInfoResponseBodyTaskInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TaskInfo"]));
        taskInfo = make_shared<DescribeTaskInfoResponseBodyTaskInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeTaskInfoResponseBody() = default;
};
class DescribeTaskInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTaskInfoResponseBody> body{};

  DescribeTaskInfoResponse() {}

  explicit DescribeTaskInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTaskInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTaskInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTaskInfoResponse() = default;
};
class GrantOperatorPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> privileges{};

  GrantOperatorPermissionRequest() {}

  explicit GrantOperatorPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (privileges) {
      res["Privileges"] = boost::any(*privileges);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Privileges") != m.end() && !m["Privileges"].empty()) {
      privileges = make_shared<string>(boost::any_cast<string>(m["Privileges"]));
    }
  }


  virtual ~GrantOperatorPermissionRequest() = default;
};
class GrantOperatorPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GrantOperatorPermissionResponseBody() {}

  explicit GrantOperatorPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GrantOperatorPermissionResponseBody() = default;
};
class GrantOperatorPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GrantOperatorPermissionResponseBody> body{};

  GrantOperatorPermissionResponse() {}

  explicit GrantOperatorPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GrantOperatorPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantOperatorPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~GrantOperatorPermissionResponse() = default;
};
class KillProcessRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> processId{};

  KillProcessRequest() {}

  explicit KillProcessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (processId) {
      res["ProcessId"] = boost::any(*processId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ProcessId") != m.end() && !m["ProcessId"].empty()) {
      processId = make_shared<string>(boost::any_cast<string>(m["ProcessId"]));
    }
  }


  virtual ~KillProcessRequest() = default;
};
class KillProcessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  KillProcessResponseBody() {}

  explicit KillProcessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~KillProcessResponseBody() = default;
};
class KillProcessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<KillProcessResponseBody> body{};

  KillProcessResponse() {}

  explicit KillProcessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        KillProcessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<KillProcessResponseBody>(model1);
      }
    }
  }


  virtual ~KillProcessResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagValue{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> tagKey{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesResponseBodyTagResources>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ModifyAccountDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountDescription{};

  ModifyAccountDescriptionRequest() {}

  explicit ModifyAccountDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
  }


  virtual ~ModifyAccountDescriptionRequest() = default;
};
class ModifyAccountDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAccountDescriptionResponseBody() {}

  explicit ModifyAccountDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAccountDescriptionResponseBody() = default;
};
class ModifyAccountDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyAccountDescriptionResponseBody> body{};

  ModifyAccountDescriptionResponse() {}

  explicit ModifyAccountDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAccountDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAccountDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAccountDescriptionResponse() = default;
};
class ModifyAuditLogConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> auditLogStatus{};

  ModifyAuditLogConfigRequest() {}

  explicit ModifyAuditLogConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (auditLogStatus) {
      res["AuditLogStatus"] = boost::any(*auditLogStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("AuditLogStatus") != m.end() && !m["AuditLogStatus"].empty()) {
      auditLogStatus = make_shared<string>(boost::any_cast<string>(m["AuditLogStatus"]));
    }
  }


  virtual ~ModifyAuditLogConfigRequest() = default;
};
class ModifyAuditLogConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAuditLogConfigResponseBody() {}

  explicit ModifyAuditLogConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAuditLogConfigResponseBody() = default;
};
class ModifyAuditLogConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyAuditLogConfigResponseBody> body{};

  ModifyAuditLogConfigResponse() {}

  explicit ModifyAuditLogConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAuditLogConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAuditLogConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAuditLogConfigResponse() = default;
};
class ModifyAutoRenewAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> renewalStatus{};
  shared_ptr<string> duration{};
  shared_ptr<string> periodUnit{};

  ModifyAutoRenewAttributeRequest() {}

  explicit ModifyAutoRenewAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (renewalStatus) {
      res["RenewalStatus"] = boost::any(*renewalStatus);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RenewalStatus") != m.end() && !m["RenewalStatus"].empty()) {
      renewalStatus = make_shared<string>(boost::any_cast<string>(m["RenewalStatus"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
  }


  virtual ~ModifyAutoRenewAttributeRequest() = default;
};
class ModifyAutoRenewAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAutoRenewAttributeResponseBody() {}

  explicit ModifyAutoRenewAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyAutoRenewAttributeResponseBody() = default;
};
class ModifyAutoRenewAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyAutoRenewAttributeResponseBody> body{};

  ModifyAutoRenewAttributeResponse() {}

  explicit ModifyAutoRenewAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAutoRenewAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAutoRenewAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAutoRenewAttributeResponse() = default;
};
class ModifyBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> backupRetentionPeriod{};
  shared_ptr<string> enableBackupLog{};
  shared_ptr<long> logBackupRetentionPeriod{};

  ModifyBackupPolicyRequest() {}

  explicit ModifyBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (enableBackupLog) {
      res["EnableBackupLog"] = boost::any(*enableBackupLog);
    }
    if (logBackupRetentionPeriod) {
      res["LogBackupRetentionPeriod"] = boost::any(*logBackupRetentionPeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["BackupRetentionPeriod"]));
    }
    if (m.find("EnableBackupLog") != m.end() && !m["EnableBackupLog"].empty()) {
      enableBackupLog = make_shared<string>(boost::any_cast<string>(m["EnableBackupLog"]));
    }
    if (m.find("LogBackupRetentionPeriod") != m.end() && !m["LogBackupRetentionPeriod"].empty()) {
      logBackupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["LogBackupRetentionPeriod"]));
    }
  }


  virtual ~ModifyBackupPolicyRequest() = default;
};
class ModifyBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyBackupPolicyResponseBody() {}

  explicit ModifyBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyBackupPolicyResponseBody() = default;
};
class ModifyBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyBackupPolicyResponseBody> body{};

  ModifyBackupPolicyResponse() {}

  explicit ModifyBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBackupPolicyResponse() = default;
};
class ModifyClusterConnectionStringRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> currentConnectionString{};
  shared_ptr<long> port{};

  ModifyClusterConnectionStringRequest() {}

  explicit ModifyClusterConnectionStringRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (currentConnectionString) {
      res["CurrentConnectionString"] = boost::any(*currentConnectionString);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("CurrentConnectionString") != m.end() && !m["CurrentConnectionString"].empty()) {
      currentConnectionString = make_shared<string>(boost::any_cast<string>(m["CurrentConnectionString"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~ModifyClusterConnectionStringRequest() = default;
};
class ModifyClusterConnectionStringResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyClusterConnectionStringResponseBody() {}

  explicit ModifyClusterConnectionStringResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyClusterConnectionStringResponseBody() = default;
};
class ModifyClusterConnectionStringResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyClusterConnectionStringResponseBody> body{};

  ModifyClusterConnectionStringResponse() {}

  explicit ModifyClusterConnectionStringResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyClusterConnectionStringResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterConnectionStringResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterConnectionStringResponse() = default;
};
class ModifyDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBNodeGroupCount{};
  shared_ptr<string> DBNodeStorage{};
  shared_ptr<string> DBNodeClass{};
  shared_ptr<string> modifyType{};
  shared_ptr<string> executorCount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> storageResource{};
  shared_ptr<string> computeResource{};
  shared_ptr<long> elasticIOResource{};
  shared_ptr<string> DBClusterCategory{};
  shared_ptr<string> mode{};

  ModifyDBClusterRequest() {}

  explicit ModifyDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBNodeGroupCount) {
      res["DBNodeGroupCount"] = boost::any(*DBNodeGroupCount);
    }
    if (DBNodeStorage) {
      res["DBNodeStorage"] = boost::any(*DBNodeStorage);
    }
    if (DBNodeClass) {
      res["DBNodeClass"] = boost::any(*DBNodeClass);
    }
    if (modifyType) {
      res["ModifyType"] = boost::any(*modifyType);
    }
    if (executorCount) {
      res["ExecutorCount"] = boost::any(*executorCount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (storageResource) {
      res["StorageResource"] = boost::any(*storageResource);
    }
    if (computeResource) {
      res["ComputeResource"] = boost::any(*computeResource);
    }
    if (elasticIOResource) {
      res["ElasticIOResource"] = boost::any(*elasticIOResource);
    }
    if (DBClusterCategory) {
      res["DBClusterCategory"] = boost::any(*DBClusterCategory);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBNodeGroupCount") != m.end() && !m["DBNodeGroupCount"].empty()) {
      DBNodeGroupCount = make_shared<string>(boost::any_cast<string>(m["DBNodeGroupCount"]));
    }
    if (m.find("DBNodeStorage") != m.end() && !m["DBNodeStorage"].empty()) {
      DBNodeStorage = make_shared<string>(boost::any_cast<string>(m["DBNodeStorage"]));
    }
    if (m.find("DBNodeClass") != m.end() && !m["DBNodeClass"].empty()) {
      DBNodeClass = make_shared<string>(boost::any_cast<string>(m["DBNodeClass"]));
    }
    if (m.find("ModifyType") != m.end() && !m["ModifyType"].empty()) {
      modifyType = make_shared<string>(boost::any_cast<string>(m["ModifyType"]));
    }
    if (m.find("ExecutorCount") != m.end() && !m["ExecutorCount"].empty()) {
      executorCount = make_shared<string>(boost::any_cast<string>(m["ExecutorCount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StorageResource") != m.end() && !m["StorageResource"].empty()) {
      storageResource = make_shared<string>(boost::any_cast<string>(m["StorageResource"]));
    }
    if (m.find("ComputeResource") != m.end() && !m["ComputeResource"].empty()) {
      computeResource = make_shared<string>(boost::any_cast<string>(m["ComputeResource"]));
    }
    if (m.find("ElasticIOResource") != m.end() && !m["ElasticIOResource"].empty()) {
      elasticIOResource = make_shared<long>(boost::any_cast<long>(m["ElasticIOResource"]));
    }
    if (m.find("DBClusterCategory") != m.end() && !m["DBClusterCategory"].empty()) {
      DBClusterCategory = make_shared<string>(boost::any_cast<string>(m["DBClusterCategory"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
  }


  virtual ~ModifyDBClusterRequest() = default;
};
class ModifyDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> orderId{};

  ModifyDBClusterResponseBody() {}

  explicit ModifyDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~ModifyDBClusterResponseBody() = default;
};
class ModifyDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterResponseBody> body{};

  ModifyDBClusterResponse() {}

  explicit ModifyDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterResponse() = default;
};
class ModifyDBClusterAccessWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> securityIps{};
  shared_ptr<string> DBClusterIPArrayName{};
  shared_ptr<string> DBClusterIPArrayAttribute{};
  shared_ptr<string> modifyMode{};

  ModifyDBClusterAccessWhiteListRequest() {}

  explicit ModifyDBClusterAccessWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (securityIps) {
      res["SecurityIps"] = boost::any(*securityIps);
    }
    if (DBClusterIPArrayName) {
      res["DBClusterIPArrayName"] = boost::any(*DBClusterIPArrayName);
    }
    if (DBClusterIPArrayAttribute) {
      res["DBClusterIPArrayAttribute"] = boost::any(*DBClusterIPArrayAttribute);
    }
    if (modifyMode) {
      res["ModifyMode"] = boost::any(*modifyMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("SecurityIps") != m.end() && !m["SecurityIps"].empty()) {
      securityIps = make_shared<string>(boost::any_cast<string>(m["SecurityIps"]));
    }
    if (m.find("DBClusterIPArrayName") != m.end() && !m["DBClusterIPArrayName"].empty()) {
      DBClusterIPArrayName = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayName"]));
    }
    if (m.find("DBClusterIPArrayAttribute") != m.end() && !m["DBClusterIPArrayAttribute"].empty()) {
      DBClusterIPArrayAttribute = make_shared<string>(boost::any_cast<string>(m["DBClusterIPArrayAttribute"]));
    }
    if (m.find("ModifyMode") != m.end() && !m["ModifyMode"].empty()) {
      modifyMode = make_shared<string>(boost::any_cast<string>(m["ModifyMode"]));
    }
  }


  virtual ~ModifyDBClusterAccessWhiteListRequest() = default;
};
class ModifyDBClusterAccessWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> DBClusterId{};

  ModifyDBClusterAccessWhiteListResponseBody() {}

  explicit ModifyDBClusterAccessWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~ModifyDBClusterAccessWhiteListResponseBody() = default;
};
class ModifyDBClusterAccessWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterAccessWhiteListResponseBody> body{};

  ModifyDBClusterAccessWhiteListResponse() {}

  explicit ModifyDBClusterAccessWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBClusterAccessWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterAccessWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterAccessWhiteListResponse() = default;
};
class ModifyDBClusterDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBClusterDescription{};

  ModifyDBClusterDescriptionRequest() {}

  explicit ModifyDBClusterDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
  }


  virtual ~ModifyDBClusterDescriptionRequest() = default;
};
class ModifyDBClusterDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterDescriptionResponseBody() {}

  explicit ModifyDBClusterDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBClusterDescriptionResponseBody() = default;
};
class ModifyDBClusterDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterDescriptionResponseBody> body{};

  ModifyDBClusterDescriptionResponse() {}

  explicit ModifyDBClusterDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBClusterDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterDescriptionResponse() = default;
};
class ModifyDBClusterMaintainTimeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> maintainTime{};

  ModifyDBClusterMaintainTimeRequest() {}

  explicit ModifyDBClusterMaintainTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (maintainTime) {
      res["MaintainTime"] = boost::any(*maintainTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("MaintainTime") != m.end() && !m["MaintainTime"].empty()) {
      maintainTime = make_shared<string>(boost::any_cast<string>(m["MaintainTime"]));
    }
  }


  virtual ~ModifyDBClusterMaintainTimeRequest() = default;
};
class ModifyDBClusterMaintainTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterMaintainTimeResponseBody() {}

  explicit ModifyDBClusterMaintainTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBClusterMaintainTimeResponseBody() = default;
};
class ModifyDBClusterMaintainTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterMaintainTimeResponseBody> body{};

  ModifyDBClusterMaintainTimeResponse() {}

  explicit ModifyDBClusterMaintainTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBClusterMaintainTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterMaintainTimeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterMaintainTimeResponse() = default;
};
class ModifyDBClusterResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> newResourceGroupId{};

  ModifyDBClusterResourceGroupRequest() {}

  explicit ModifyDBClusterResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
  }


  virtual ~ModifyDBClusterResourceGroupRequest() = default;
};
class ModifyDBClusterResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBClusterResourceGroupResponseBody() {}

  explicit ModifyDBClusterResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBClusterResourceGroupResponseBody() = default;
};
class ModifyDBClusterResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBClusterResourceGroupResponseBody> body{};

  ModifyDBClusterResourceGroupResponse() {}

  explicit ModifyDBClusterResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBClusterResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterResourceGroupResponse() = default;
};
class ModifyDBResourcePoolRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> poolName{};
  shared_ptr<string> queryType{};
  shared_ptr<long> nodeNum{};

  ModifyDBResourcePoolRequest() {}

  explicit ModifyDBResourcePoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (poolName) {
      res["PoolName"] = boost::any(*poolName);
    }
    if (queryType) {
      res["QueryType"] = boost::any(*queryType);
    }
    if (nodeNum) {
      res["NodeNum"] = boost::any(*nodeNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PoolName") != m.end() && !m["PoolName"].empty()) {
      poolName = make_shared<string>(boost::any_cast<string>(m["PoolName"]));
    }
    if (m.find("QueryType") != m.end() && !m["QueryType"].empty()) {
      queryType = make_shared<string>(boost::any_cast<string>(m["QueryType"]));
    }
    if (m.find("NodeNum") != m.end() && !m["NodeNum"].empty()) {
      nodeNum = make_shared<long>(boost::any_cast<long>(m["NodeNum"]));
    }
  }


  virtual ~ModifyDBResourcePoolRequest() = default;
};
class ModifyDBResourcePoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBResourcePoolResponseBody() {}

  explicit ModifyDBResourcePoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBResourcePoolResponseBody() = default;
};
class ModifyDBResourcePoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBResourcePoolResponseBody> body{};

  ModifyDBResourcePoolResponse() {}

  explicit ModifyDBResourcePoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBResourcePoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBResourcePoolResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBResourcePoolResponse() = default;
};
class ModifyElasticPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> elasticPlanName{};
  shared_ptr<string> resourcePoolName{};
  shared_ptr<long> elasticPlanNodeNum{};
  shared_ptr<string> elasticPlanTimeStart{};
  shared_ptr<string> elasticPlanTimeEnd{};
  shared_ptr<string> elasticPlanWeeklyRepeat{};
  shared_ptr<string> elasticPlanStartDay{};
  shared_ptr<string> elasticPlanEndDay{};
  shared_ptr<bool> elasticPlanEnable{};

  ModifyElasticPlanRequest() {}

  explicit ModifyElasticPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (elasticPlanName) {
      res["ElasticPlanName"] = boost::any(*elasticPlanName);
    }
    if (resourcePoolName) {
      res["ResourcePoolName"] = boost::any(*resourcePoolName);
    }
    if (elasticPlanNodeNum) {
      res["ElasticPlanNodeNum"] = boost::any(*elasticPlanNodeNum);
    }
    if (elasticPlanTimeStart) {
      res["ElasticPlanTimeStart"] = boost::any(*elasticPlanTimeStart);
    }
    if (elasticPlanTimeEnd) {
      res["ElasticPlanTimeEnd"] = boost::any(*elasticPlanTimeEnd);
    }
    if (elasticPlanWeeklyRepeat) {
      res["ElasticPlanWeeklyRepeat"] = boost::any(*elasticPlanWeeklyRepeat);
    }
    if (elasticPlanStartDay) {
      res["ElasticPlanStartDay"] = boost::any(*elasticPlanStartDay);
    }
    if (elasticPlanEndDay) {
      res["ElasticPlanEndDay"] = boost::any(*elasticPlanEndDay);
    }
    if (elasticPlanEnable) {
      res["ElasticPlanEnable"] = boost::any(*elasticPlanEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("ElasticPlanName") != m.end() && !m["ElasticPlanName"].empty()) {
      elasticPlanName = make_shared<string>(boost::any_cast<string>(m["ElasticPlanName"]));
    }
    if (m.find("ResourcePoolName") != m.end() && !m["ResourcePoolName"].empty()) {
      resourcePoolName = make_shared<string>(boost::any_cast<string>(m["ResourcePoolName"]));
    }
    if (m.find("ElasticPlanNodeNum") != m.end() && !m["ElasticPlanNodeNum"].empty()) {
      elasticPlanNodeNum = make_shared<long>(boost::any_cast<long>(m["ElasticPlanNodeNum"]));
    }
    if (m.find("ElasticPlanTimeStart") != m.end() && !m["ElasticPlanTimeStart"].empty()) {
      elasticPlanTimeStart = make_shared<string>(boost::any_cast<string>(m["ElasticPlanTimeStart"]));
    }
    if (m.find("ElasticPlanTimeEnd") != m.end() && !m["ElasticPlanTimeEnd"].empty()) {
      elasticPlanTimeEnd = make_shared<string>(boost::any_cast<string>(m["ElasticPlanTimeEnd"]));
    }
    if (m.find("ElasticPlanWeeklyRepeat") != m.end() && !m["ElasticPlanWeeklyRepeat"].empty()) {
      elasticPlanWeeklyRepeat = make_shared<string>(boost::any_cast<string>(m["ElasticPlanWeeklyRepeat"]));
    }
    if (m.find("ElasticPlanStartDay") != m.end() && !m["ElasticPlanStartDay"].empty()) {
      elasticPlanStartDay = make_shared<string>(boost::any_cast<string>(m["ElasticPlanStartDay"]));
    }
    if (m.find("ElasticPlanEndDay") != m.end() && !m["ElasticPlanEndDay"].empty()) {
      elasticPlanEndDay = make_shared<string>(boost::any_cast<string>(m["ElasticPlanEndDay"]));
    }
    if (m.find("ElasticPlanEnable") != m.end() && !m["ElasticPlanEnable"].empty()) {
      elasticPlanEnable = make_shared<bool>(boost::any_cast<bool>(m["ElasticPlanEnable"]));
    }
  }


  virtual ~ModifyElasticPlanRequest() = default;
};
class ModifyElasticPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyElasticPlanResponseBody() {}

  explicit ModifyElasticPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyElasticPlanResponseBody() = default;
};
class ModifyElasticPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyElasticPlanResponseBody> body{};

  ModifyElasticPlanResponse() {}

  explicit ModifyElasticPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyElasticPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyElasticPlanResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyElasticPlanResponse() = default;
};
class ModifyLogBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> enableBackupLog{};
  shared_ptr<string> logBackupRetentionPeriod{};

  ModifyLogBackupPolicyRequest() {}

  explicit ModifyLogBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (enableBackupLog) {
      res["EnableBackupLog"] = boost::any(*enableBackupLog);
    }
    if (logBackupRetentionPeriod) {
      res["LogBackupRetentionPeriod"] = boost::any(*logBackupRetentionPeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("EnableBackupLog") != m.end() && !m["EnableBackupLog"].empty()) {
      enableBackupLog = make_shared<string>(boost::any_cast<string>(m["EnableBackupLog"]));
    }
    if (m.find("LogBackupRetentionPeriod") != m.end() && !m["LogBackupRetentionPeriod"].empty()) {
      logBackupRetentionPeriod = make_shared<string>(boost::any_cast<string>(m["LogBackupRetentionPeriod"]));
    }
  }


  virtual ~ModifyLogBackupPolicyRequest() = default;
};
class ModifyLogBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyLogBackupPolicyResponseBody() {}

  explicit ModifyLogBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyLogBackupPolicyResponseBody() = default;
};
class ModifyLogBackupPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyLogBackupPolicyResponseBody> body{};

  ModifyLogBackupPolicyResponse() {}

  explicit ModifyLogBackupPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyLogBackupPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyLogBackupPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyLogBackupPolicyResponse() = default;
};
class ReleaseClusterPublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};

  ReleaseClusterPublicConnectionRequest() {}

  explicit ReleaseClusterPublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~ReleaseClusterPublicConnectionRequest() = default;
};
class ReleaseClusterPublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseClusterPublicConnectionResponseBody() {}

  explicit ReleaseClusterPublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseClusterPublicConnectionResponseBody() = default;
};
class ReleaseClusterPublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReleaseClusterPublicConnectionResponseBody> body{};

  ReleaseClusterPublicConnectionResponse() {}

  explicit ReleaseClusterPublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseClusterPublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseClusterPublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseClusterPublicConnectionResponse() = default;
};
class ResetAccountPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> accountType{};

  ResetAccountPasswordRequest() {}

  explicit ResetAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
  }


  virtual ~ResetAccountPasswordRequest() = default;
};
class ResetAccountPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> taskId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> DBClusterId{};

  ResetAccountPasswordResponseBody() {}

  explicit ResetAccountPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
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
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~ResetAccountPasswordResponseBody() = default;
};
class ResetAccountPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResetAccountPasswordResponseBody> body{};

  ResetAccountPasswordResponse() {}

  explicit ResetAccountPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetAccountPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetAccountPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ResetAccountPasswordResponse() = default;
};
class RevokeOperatorPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};

  RevokeOperatorPermissionRequest() {}

  explicit RevokeOperatorPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
  }


  virtual ~RevokeOperatorPermissionRequest() = default;
};
class RevokeOperatorPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RevokeOperatorPermissionResponseBody() {}

  explicit RevokeOperatorPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RevokeOperatorPermissionResponseBody() = default;
};
class RevokeOperatorPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RevokeOperatorPermissionResponseBody> body{};

  RevokeOperatorPermissionResponse() {}

  explicit RevokeOperatorPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RevokeOperatorPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeOperatorPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeOperatorPermissionResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UnbindDBResourcePoolWithUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> poolName{};
  shared_ptr<string> poolUser{};

  UnbindDBResourcePoolWithUserRequest() {}

  explicit UnbindDBResourcePoolWithUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (poolName) {
      res["PoolName"] = boost::any(*poolName);
    }
    if (poolUser) {
      res["PoolUser"] = boost::any(*poolUser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PoolName") != m.end() && !m["PoolName"].empty()) {
      poolName = make_shared<string>(boost::any_cast<string>(m["PoolName"]));
    }
    if (m.find("PoolUser") != m.end() && !m["PoolUser"].empty()) {
      poolUser = make_shared<string>(boost::any_cast<string>(m["PoolUser"]));
    }
  }


  virtual ~UnbindDBResourcePoolWithUserRequest() = default;
};
class UnbindDBResourcePoolWithUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindDBResourcePoolWithUserResponseBody() {}

  explicit UnbindDBResourcePoolWithUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnbindDBResourcePoolWithUserResponseBody() = default;
};
class UnbindDBResourcePoolWithUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UnbindDBResourcePoolWithUserResponseBody> body{};

  UnbindDBResourcePoolWithUserResponse() {}

  explicit UnbindDBResourcePoolWithUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindDBResourcePoolWithUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindDBResourcePoolWithUserResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindDBResourcePoolWithUserResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
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
  AllocateClusterPublicConnectionResponse allocateClusterPublicConnectionWithOptions(shared_ptr<AllocateClusterPublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateClusterPublicConnectionResponse allocateClusterPublicConnection(shared_ptr<AllocateClusterPublicConnectionRequest> request);
  BindDBResourcePoolWithUserResponse bindDBResourcePoolWithUserWithOptions(shared_ptr<BindDBResourcePoolWithUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindDBResourcePoolWithUserResponse bindDBResourcePoolWithUser(shared_ptr<BindDBResourcePoolWithUserRequest> request);
  CreateAccountResponse createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccountResponse createAccount(shared_ptr<CreateAccountRequest> request);
  CreateDBClusterResponse createDBClusterWithOptions(shared_ptr<CreateDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBClusterResponse createDBCluster(shared_ptr<CreateDBClusterRequest> request);
  CreateDBResourcePoolResponse createDBResourcePoolWithOptions(shared_ptr<CreateDBResourcePoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBResourcePoolResponse createDBResourcePool(shared_ptr<CreateDBResourcePoolRequest> request);
  CreateElasticPlanResponse createElasticPlanWithOptions(shared_ptr<CreateElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateElasticPlanResponse createElasticPlan(shared_ptr<CreateElasticPlanRequest> request);
  DeleteAccountResponse deleteAccountWithOptions(shared_ptr<DeleteAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAccountResponse deleteAccount(shared_ptr<DeleteAccountRequest> request);
  DeleteDBClusterResponse deleteDBClusterWithOptions(shared_ptr<DeleteDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBClusterResponse deleteDBCluster(shared_ptr<DeleteDBClusterRequest> request);
  DeleteDBResourcePoolResponse deleteDBResourcePoolWithOptions(shared_ptr<DeleteDBResourcePoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBResourcePoolResponse deleteDBResourcePool(shared_ptr<DeleteDBResourcePoolRequest> request);
  DeleteElasticPlanResponse deleteElasticPlanWithOptions(shared_ptr<DeleteElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteElasticPlanResponse deleteElasticPlan(shared_ptr<DeleteElasticPlanRequest> request);
  DescribeAccountsResponse describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountsResponse describeAccounts(shared_ptr<DescribeAccountsRequest> request);
  DescribeAllAccountsResponse describeAllAccountsWithOptions(shared_ptr<DescribeAllAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAllAccountsResponse describeAllAccounts(shared_ptr<DescribeAllAccountsRequest> request);
  DescribeAllDataSourceResponse describeAllDataSourceWithOptions(shared_ptr<DescribeAllDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAllDataSourceResponse describeAllDataSource(shared_ptr<DescribeAllDataSourceRequest> request);
  DescribeAuditLogConfigResponse describeAuditLogConfigWithOptions(shared_ptr<DescribeAuditLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditLogConfigResponse describeAuditLogConfig(shared_ptr<DescribeAuditLogConfigRequest> request);
  DescribeAuditLogRecordsResponse describeAuditLogRecordsWithOptions(shared_ptr<DescribeAuditLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditLogRecordsResponse describeAuditLogRecords(shared_ptr<DescribeAuditLogRecordsRequest> request);
  DescribeAutoRenewAttributeResponse describeAutoRenewAttributeWithOptions(shared_ptr<DescribeAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAutoRenewAttributeResponse describeAutoRenewAttribute(shared_ptr<DescribeAutoRenewAttributeRequest> request);
  DescribeAvailableResourceResponse describeAvailableResourceWithOptions(shared_ptr<DescribeAvailableResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableResourceResponse describeAvailableResource(shared_ptr<DescribeAvailableResourceRequest> request);
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeBackupsResponse describeBackupsWithOptions(shared_ptr<DescribeBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupsResponse describeBackups(shared_ptr<DescribeBackupsRequest> request);
  DescribeColumnsResponse describeColumnsWithOptions(shared_ptr<DescribeColumnsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeColumnsResponse describeColumns(shared_ptr<DescribeColumnsRequest> request);
  DescribeConnectionCountRecordsResponse describeConnectionCountRecordsWithOptions(shared_ptr<DescribeConnectionCountRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConnectionCountRecordsResponse describeConnectionCountRecords(shared_ptr<DescribeConnectionCountRecordsRequest> request);
  DescribeDBClusterAccessWhiteListResponse describeDBClusterAccessWhiteListWithOptions(shared_ptr<DescribeDBClusterAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterAccessWhiteListResponse describeDBClusterAccessWhiteList(shared_ptr<DescribeDBClusterAccessWhiteListRequest> request);
  DescribeDBClusterAttributeResponse describeDBClusterAttributeWithOptions(shared_ptr<DescribeDBClusterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterAttributeResponse describeDBClusterAttribute(shared_ptr<DescribeDBClusterAttributeRequest> request);
  DescribeDBClusterNetInfoResponse describeDBClusterNetInfoWithOptions(shared_ptr<DescribeDBClusterNetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterNetInfoResponse describeDBClusterNetInfo(shared_ptr<DescribeDBClusterNetInfoRequest> request);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(shared_ptr<DescribeDBClusterPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformance(shared_ptr<DescribeDBClusterPerformanceRequest> request);
  DescribeDBClusterResourcePoolPerformanceResponse describeDBClusterResourcePoolPerformanceWithOptions(shared_ptr<DescribeDBClusterResourcePoolPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterResourcePoolPerformanceResponse describeDBClusterResourcePoolPerformance(shared_ptr<DescribeDBClusterResourcePoolPerformanceRequest> request);
  DescribeDBClustersResponse describeDBClustersWithOptions(shared_ptr<DescribeDBClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClustersResponse describeDBClusters(shared_ptr<DescribeDBClustersRequest> request);
  DescribeDBResourcePoolResponse describeDBResourcePoolWithOptions(shared_ptr<DescribeDBResourcePoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBResourcePoolResponse describeDBResourcePool(shared_ptr<DescribeDBResourcePoolRequest> request);
  DescribeElasticDailyPlanResponse describeElasticDailyPlanWithOptions(shared_ptr<DescribeElasticDailyPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeElasticDailyPlanResponse describeElasticDailyPlan(shared_ptr<DescribeElasticDailyPlanRequest> request);
  DescribeElasticPlanResponse describeElasticPlanWithOptions(shared_ptr<DescribeElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeElasticPlanResponse describeElasticPlan(shared_ptr<DescribeElasticPlanRequest> request);
  DescribeInclinedTablesResponse describeInclinedTablesWithOptions(shared_ptr<DescribeInclinedTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInclinedTablesResponse describeInclinedTables(shared_ptr<DescribeInclinedTablesRequest> request);
  DescribeLoadTasksRecordsResponse describeLoadTasksRecordsWithOptions(shared_ptr<DescribeLoadTasksRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLoadTasksRecordsResponse describeLoadTasksRecords(shared_ptr<DescribeLoadTasksRecordsRequest> request);
  DescribeOperatorPermissionResponse describeOperatorPermissionWithOptions(shared_ptr<DescribeOperatorPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOperatorPermissionResponse describeOperatorPermission(shared_ptr<DescribeOperatorPermissionRequest> request);
  DescribeProcessListResponse describeProcessListWithOptions(shared_ptr<DescribeProcessListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeProcessListResponse describeProcessList(shared_ptr<DescribeProcessListRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSchemasResponse describeSchemasWithOptions(shared_ptr<DescribeSchemasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSchemasResponse describeSchemas(shared_ptr<DescribeSchemasRequest> request);
  DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(shared_ptr<DescribeSlowLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowLogRecordsResponse describeSlowLogRecords(shared_ptr<DescribeSlowLogRecordsRequest> request);
  DescribeSlowLogTrendResponse describeSlowLogTrendWithOptions(shared_ptr<DescribeSlowLogTrendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowLogTrendResponse describeSlowLogTrend(shared_ptr<DescribeSlowLogTrendRequest> request);
  DescribeSQLPlanResponse describeSQLPlanWithOptions(shared_ptr<DescribeSQLPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSQLPlanResponse describeSQLPlan(shared_ptr<DescribeSQLPlanRequest> request);
  DescribeSQLPlanTaskResponse describeSQLPlanTaskWithOptions(shared_ptr<DescribeSQLPlanTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSQLPlanTaskResponse describeSQLPlanTask(shared_ptr<DescribeSQLPlanTaskRequest> request);
  DescribeTableDetailResponse describeTableDetailWithOptions(shared_ptr<DescribeTableDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTableDetailResponse describeTableDetail(shared_ptr<DescribeTableDetailRequest> request);
  DescribeTablePartitionDiagnoseResponse describeTablePartitionDiagnoseWithOptions(shared_ptr<DescribeTablePartitionDiagnoseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTablePartitionDiagnoseResponse describeTablePartitionDiagnose(shared_ptr<DescribeTablePartitionDiagnoseRequest> request);
  DescribeTablesResponse describeTablesWithOptions(shared_ptr<DescribeTablesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTablesResponse describeTables(shared_ptr<DescribeTablesRequest> request);
  DescribeTableStatisticsResponse describeTableStatisticsWithOptions(shared_ptr<DescribeTableStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTableStatisticsResponse describeTableStatistics(shared_ptr<DescribeTableStatisticsRequest> request);
  DescribeTaskInfoResponse describeTaskInfoWithOptions(shared_ptr<DescribeTaskInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTaskInfoResponse describeTaskInfo(shared_ptr<DescribeTaskInfoRequest> request);
  GrantOperatorPermissionResponse grantOperatorPermissionWithOptions(shared_ptr<GrantOperatorPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantOperatorPermissionResponse grantOperatorPermission(shared_ptr<GrantOperatorPermissionRequest> request);
  KillProcessResponse killProcessWithOptions(shared_ptr<KillProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  KillProcessResponse killProcess(shared_ptr<KillProcessRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountDescriptionResponse modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request);
  ModifyAuditLogConfigResponse modifyAuditLogConfigWithOptions(shared_ptr<ModifyAuditLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAuditLogConfigResponse modifyAuditLogConfig(shared_ptr<ModifyAuditLogConfigRequest> request);
  ModifyAutoRenewAttributeResponse modifyAutoRenewAttributeWithOptions(shared_ptr<ModifyAutoRenewAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAutoRenewAttributeResponse modifyAutoRenewAttribute(shared_ptr<ModifyAutoRenewAttributeRequest> request);
  ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupPolicyResponse modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request);
  ModifyClusterConnectionStringResponse modifyClusterConnectionStringWithOptions(shared_ptr<ModifyClusterConnectionStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterConnectionStringResponse modifyClusterConnectionString(shared_ptr<ModifyClusterConnectionStringRequest> request);
  ModifyDBClusterResponse modifyDBClusterWithOptions(shared_ptr<ModifyDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterResponse modifyDBCluster(shared_ptr<ModifyDBClusterRequest> request);
  ModifyDBClusterAccessWhiteListResponse modifyDBClusterAccessWhiteListWithOptions(shared_ptr<ModifyDBClusterAccessWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterAccessWhiteListResponse modifyDBClusterAccessWhiteList(shared_ptr<ModifyDBClusterAccessWhiteListRequest> request);
  ModifyDBClusterDescriptionResponse modifyDBClusterDescriptionWithOptions(shared_ptr<ModifyDBClusterDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterDescriptionResponse modifyDBClusterDescription(shared_ptr<ModifyDBClusterDescriptionRequest> request);
  ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTimeWithOptions(shared_ptr<ModifyDBClusterMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterMaintainTimeResponse modifyDBClusterMaintainTime(shared_ptr<ModifyDBClusterMaintainTimeRequest> request);
  ModifyDBClusterResourceGroupResponse modifyDBClusterResourceGroupWithOptions(shared_ptr<ModifyDBClusterResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterResourceGroupResponse modifyDBClusterResourceGroup(shared_ptr<ModifyDBClusterResourceGroupRequest> request);
  ModifyDBResourcePoolResponse modifyDBResourcePoolWithOptions(shared_ptr<ModifyDBResourcePoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBResourcePoolResponse modifyDBResourcePool(shared_ptr<ModifyDBResourcePoolRequest> request);
  ModifyElasticPlanResponse modifyElasticPlanWithOptions(shared_ptr<ModifyElasticPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyElasticPlanResponse modifyElasticPlan(shared_ptr<ModifyElasticPlanRequest> request);
  ModifyLogBackupPolicyResponse modifyLogBackupPolicyWithOptions(shared_ptr<ModifyLogBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyLogBackupPolicyResponse modifyLogBackupPolicy(shared_ptr<ModifyLogBackupPolicyRequest> request);
  ReleaseClusterPublicConnectionResponse releaseClusterPublicConnectionWithOptions(shared_ptr<ReleaseClusterPublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseClusterPublicConnectionResponse releaseClusterPublicConnection(shared_ptr<ReleaseClusterPublicConnectionRequest> request);
  ResetAccountPasswordResponse resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAccountPasswordResponse resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request);
  RevokeOperatorPermissionResponse revokeOperatorPermissionWithOptions(shared_ptr<RevokeOperatorPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeOperatorPermissionResponse revokeOperatorPermission(shared_ptr<RevokeOperatorPermissionRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UnbindDBResourcePoolWithUserResponse unbindDBResourcePoolWithUserWithOptions(shared_ptr<UnbindDBResourcePoolWithUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindDBResourcePoolWithUserResponse unbindDBResourcePoolWithUser(shared_ptr<UnbindDBResourcePoolWithUserRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Adb20190315

#endif
