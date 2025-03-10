// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SELECTDB20230522_H_
#define ALIBABACLOUD_SELECTDB20230522_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Selectdb20230522 {
class AllocateInstancePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> netType{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  AllocateInstancePublicConnectionRequest() {}

  explicit AllocateInstancePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~AllocateInstancePublicConnectionRequest() = default;
};
class AllocateInstancePublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<string> requestId{};
  shared_ptr<long> taskId{};

  AllocateInstancePublicConnectionResponseBody() {}

  explicit AllocateInstancePublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~AllocateInstancePublicConnectionResponseBody() = default;
};
class AllocateInstancePublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AllocateInstancePublicConnectionResponseBody> body{};

  AllocateInstancePublicConnectionResponse() {}

  explicit AllocateInstancePublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AllocateInstancePublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateInstancePublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateInstancePublicConnectionResponse() = default;
};
class CheckCreateDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> cacheSize{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityIPList{};
  shared_ptr<long> usedTime{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CheckCreateDBInstanceRequest() {}

  explicit CheckCreateDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheSize) {
      res["CacheSize"] = boost::any(*cacheSize);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheSize") != m.end() && !m["CacheSize"].empty()) {
      cacheSize = make_shared<long>(boost::any_cast<long>(m["CacheSize"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CheckCreateDBInstanceRequest() = default;
};
class CheckCreateDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CheckCreateDBInstanceResponseBody() {}

  explicit CheckCreateDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CheckCreateDBInstanceResponseBody() = default;
};
class CheckCreateDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckCreateDBInstanceResponseBody> body{};

  CheckCreateDBInstanceResponse() {}

  explicit CheckCreateDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckCreateDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckCreateDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CheckCreateDBInstanceResponse() = default;
};
class CheckServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CheckServiceLinkedRoleRequest() {}

  explicit CheckServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CheckServiceLinkedRoleRequest() = default;
};
class CheckServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> hasServiceLinkedRole{};
  shared_ptr<string> requestId{};

  CheckServiceLinkedRoleResponseBody() {}

  explicit CheckServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasServiceLinkedRole) {
      res["HasServiceLinkedRole"] = boost::any(*hasServiceLinkedRole);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasServiceLinkedRole") != m.end() && !m["HasServiceLinkedRole"].empty()) {
      hasServiceLinkedRole = make_shared<bool>(boost::any_cast<bool>(m["HasServiceLinkedRole"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckServiceLinkedRoleResponseBody() = default;
};
class CheckServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckServiceLinkedRoleResponseBody> body{};

  CheckServiceLinkedRoleResponse() {}

  explicit CheckServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CheckServiceLinkedRoleResponse() = default;
};
class CreateDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> cacheSize{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> DBClusterClass{};
  shared_ptr<string> DBClusterDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> usedTime{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateDBClusterRequest() {}

  explicit CreateDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheSize) {
      res["CacheSize"] = boost::any(*cacheSize);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (DBClusterClass) {
      res["DBClusterClass"] = boost::any(*DBClusterClass);
    }
    if (DBClusterDescription) {
      res["DBClusterDescription"] = boost::any(*DBClusterDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheSize") != m.end() && !m["CacheSize"].empty()) {
      cacheSize = make_shared<string>(boost::any_cast<string>(m["CacheSize"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("DBClusterClass") != m.end() && !m["DBClusterClass"].empty()) {
      DBClusterClass = make_shared<string>(boost::any_cast<string>(m["DBClusterClass"]));
    }
    if (m.find("DBClusterDescription") != m.end() && !m["DBClusterDescription"].empty()) {
      DBClusterDescription = make_shared<string>(boost::any_cast<string>(m["DBClusterDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<string>(boost::any_cast<string>(m["UsedTime"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDBClusterRequest() = default;
};
class CreateDBClusterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> orderId{};

  CreateDBClusterResponseBodyData() {}

  explicit CreateDBClusterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CreateDBClusterResponseBodyData() = default;
};
class CreateDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateDBClusterResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateDBClusterResponseBody() {}

  explicit CreateDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateDBClusterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateDBClusterResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDBClusterResponseBody() = default;
};
class CreateDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDBClusterResponseBody> body{};

  CreateDBClusterResponse() {}

  explicit CreateDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
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
class CreateDBInstanceRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateDBInstanceRequestTag() {}

  explicit CreateDBInstanceRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDBInstanceRequestTag() = default;
};
class CreateDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> cacheSize{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityIPList{};
  shared_ptr<vector<CreateDBInstanceRequestTag>> tag{};
  shared_ptr<long> usedTime{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateDBInstanceRequest() {}

  explicit CreateDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheSize) {
      res["CacheSize"] = boost::any(*cacheSize);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheSize") != m.end() && !m["CacheSize"].empty()) {
      cacheSize = make_shared<long>(boost::any_cast<long>(m["CacheSize"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateDBInstanceRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDBInstanceRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateDBInstanceRequestTag>>(expect1);
      }
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDBInstanceRequest() = default;
};
class CreateDBInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> cacheSize{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> tagShrink{};
  shared_ptr<long> usedTime{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateDBInstanceShrinkRequest() {}

  explicit CreateDBInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheSize) {
      res["CacheSize"] = boost::any(*cacheSize);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
    }
    if (usedTime) {
      res["UsedTime"] = boost::any(*usedTime);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheSize") != m.end() && !m["CacheSize"].empty()) {
      cacheSize = make_shared<long>(boost::any_cast<long>(m["CacheSize"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("UsedTime") != m.end() && !m["UsedTime"].empty()) {
      usedTime = make_shared<long>(boost::any_cast<long>(m["UsedTime"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDBInstanceShrinkRequest() = default;
};
class CreateDBInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> orderId{};

  CreateDBInstanceResponseBodyData() {}

  explicit CreateDBInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CreateDBInstanceResponseBodyData() = default;
};
class CreateDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateDBInstanceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateDBInstanceResponseBody() {}

  explicit CreateDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateDBInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateDBInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDBInstanceResponseBody() = default;
};
class CreateDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDBInstanceResponseBody> body{};

  CreateDBInstanceResponse() {}

  explicit CreateDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBInstanceResponse() = default;
};
class CreateElasticRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterClass{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> elasticRuleStartTime{};
  shared_ptr<string> executionPeriod{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  CreateElasticRuleRequest() {}

  explicit CreateElasticRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterClass) {
      res["ClusterClass"] = boost::any(*clusterClass);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (elasticRuleStartTime) {
      res["ElasticRuleStartTime"] = boost::any(*elasticRuleStartTime);
    }
    if (executionPeriod) {
      res["ExecutionPeriod"] = boost::any(*executionPeriod);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterClass") != m.end() && !m["ClusterClass"].empty()) {
      clusterClass = make_shared<string>(boost::any_cast<string>(m["ClusterClass"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("ElasticRuleStartTime") != m.end() && !m["ElasticRuleStartTime"].empty()) {
      elasticRuleStartTime = make_shared<string>(boost::any_cast<string>(m["ElasticRuleStartTime"]));
    }
    if (m.find("ExecutionPeriod") != m.end() && !m["ExecutionPeriod"].empty()) {
      executionPeriod = make_shared<string>(boost::any_cast<string>(m["ExecutionPeriod"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateElasticRuleRequest() = default;
};
class CreateElasticRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterClass{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> elasticRuleStartTime{};
  shared_ptr<string> executionPeriod{};
  shared_ptr<long> ruleId{};

  CreateElasticRuleResponseBodyData() {}

  explicit CreateElasticRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterClass) {
      res["ClusterClass"] = boost::any(*clusterClass);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (elasticRuleStartTime) {
      res["ElasticRuleStartTime"] = boost::any(*elasticRuleStartTime);
    }
    if (executionPeriod) {
      res["ExecutionPeriod"] = boost::any(*executionPeriod);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterClass") != m.end() && !m["ClusterClass"].empty()) {
      clusterClass = make_shared<string>(boost::any_cast<string>(m["ClusterClass"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("ElasticRuleStartTime") != m.end() && !m["ElasticRuleStartTime"].empty()) {
      elasticRuleStartTime = make_shared<string>(boost::any_cast<string>(m["ElasticRuleStartTime"]));
    }
    if (m.find("ExecutionPeriod") != m.end() && !m["ExecutionPeriod"].empty()) {
      executionPeriod = make_shared<string>(boost::any_cast<string>(m["ExecutionPeriod"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~CreateElasticRuleResponseBodyData() = default;
};
class CreateElasticRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateElasticRuleResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateElasticRuleResponseBody() {}

  explicit CreateElasticRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateElasticRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateElasticRuleResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateElasticRuleResponseBody() = default;
};
class CreateElasticRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateElasticRuleResponseBody> body{};

  CreateElasticRuleResponse() {}

  explicit CreateElasticRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateElasticRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateElasticRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateElasticRuleResponse() = default;
};
class CreateServiceLinkedRoleForSelectDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateServiceLinkedRoleForSelectDBRequest() {}

  explicit CreateServiceLinkedRoleForSelectDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateServiceLinkedRoleForSelectDBRequest() = default;
};
class CreateServiceLinkedRoleForSelectDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateServiceLinkedRoleForSelectDBResponseBody() {}

  explicit CreateServiceLinkedRoleForSelectDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceLinkedRoleForSelectDBResponseBody() = default;
};
class CreateServiceLinkedRoleForSelectDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceLinkedRoleForSelectDBResponseBody> body{};

  CreateServiceLinkedRoleForSelectDBResponse() {}

  explicit CreateServiceLinkedRoleForSelectDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceLinkedRoleForSelectDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceLinkedRoleForSelectDBResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceLinkedRoleForSelectDBResponse() = default;
};
class DeleteDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDBClusterRequest() {}

  explicit DeleteDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteDBClusterRequest() = default;
};
class DeleteDBClusterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> orderId{};

  DeleteDBClusterResponseBodyData() {}

  explicit DeleteDBClusterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~DeleteDBClusterResponseBodyData() = default;
};
class DeleteDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteDBClusterResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteDBClusterResponseBody() {}

  explicit DeleteDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteDBClusterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteDBClusterResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDBClusterResponseBody() = default;
};
class DeleteDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDBClusterResponseBody> body{};

  DeleteDBClusterResponse() {}

  explicit DeleteDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
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
class DeleteDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDBInstanceRequest() {}

  explicit DeleteDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteDBInstanceRequest() = default;
};
class DeleteDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDBInstanceResponseBody() {}

  explicit DeleteDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDBInstanceResponseBody() = default;
};
class DeleteDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDBInstanceResponseBody> body{};

  DeleteDBInstanceResponse() {}

  explicit DeleteDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBInstanceResponse() = default;
};
class DeleteElasticRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> product{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> ruleId{};

  DeleteElasticRuleRequest() {}

  explicit DeleteElasticRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DeleteElasticRuleRequest() = default;
};
class DeleteElasticRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteElasticRuleResponseBody() {}

  explicit DeleteElasticRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteElasticRuleResponseBody() = default;
};
class DeleteElasticRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteElasticRuleResponseBody> body{};

  DeleteElasticRuleResponse() {}

  explicit DeleteElasticRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteElasticRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteElasticRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteElasticRuleResponse() = default;
};
class DescribeAllDBInstanceClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  DescribeAllDBInstanceClassRequest() {}

  explicit DescribeAllDBInstanceClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeAllDBInstanceClassRequest() = default;
};
class DescribeAllDBInstanceClassResponseBodyClassCodeList : public Darabonba::Model {
public:
  shared_ptr<string> classCode{};
  shared_ptr<long> cpuCores{};
  shared_ptr<long> defaultStorageInGB{};
  shared_ptr<long> maxStorageInGB{};
  shared_ptr<long> memoryInGB{};
  shared_ptr<long> minStorageInGB{};
  shared_ptr<long> stepStorageInGB{};

  DescribeAllDBInstanceClassResponseBodyClassCodeList() {}

  explicit DescribeAllDBInstanceClassResponseBodyClassCodeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classCode) {
      res["ClassCode"] = boost::any(*classCode);
    }
    if (cpuCores) {
      res["CpuCores"] = boost::any(*cpuCores);
    }
    if (defaultStorageInGB) {
      res["DefaultStorageInGB"] = boost::any(*defaultStorageInGB);
    }
    if (maxStorageInGB) {
      res["MaxStorageInGB"] = boost::any(*maxStorageInGB);
    }
    if (memoryInGB) {
      res["MemoryInGB"] = boost::any(*memoryInGB);
    }
    if (minStorageInGB) {
      res["MinStorageInGB"] = boost::any(*minStorageInGB);
    }
    if (stepStorageInGB) {
      res["StepStorageInGB"] = boost::any(*stepStorageInGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassCode") != m.end() && !m["ClassCode"].empty()) {
      classCode = make_shared<string>(boost::any_cast<string>(m["ClassCode"]));
    }
    if (m.find("CpuCores") != m.end() && !m["CpuCores"].empty()) {
      cpuCores = make_shared<long>(boost::any_cast<long>(m["CpuCores"]));
    }
    if (m.find("DefaultStorageInGB") != m.end() && !m["DefaultStorageInGB"].empty()) {
      defaultStorageInGB = make_shared<long>(boost::any_cast<long>(m["DefaultStorageInGB"]));
    }
    if (m.find("MaxStorageInGB") != m.end() && !m["MaxStorageInGB"].empty()) {
      maxStorageInGB = make_shared<long>(boost::any_cast<long>(m["MaxStorageInGB"]));
    }
    if (m.find("MemoryInGB") != m.end() && !m["MemoryInGB"].empty()) {
      memoryInGB = make_shared<long>(boost::any_cast<long>(m["MemoryInGB"]));
    }
    if (m.find("MinStorageInGB") != m.end() && !m["MinStorageInGB"].empty()) {
      minStorageInGB = make_shared<long>(boost::any_cast<long>(m["MinStorageInGB"]));
    }
    if (m.find("StepStorageInGB") != m.end() && !m["StepStorageInGB"].empty()) {
      stepStorageInGB = make_shared<long>(boost::any_cast<long>(m["StepStorageInGB"]));
    }
  }


  virtual ~DescribeAllDBInstanceClassResponseBodyClassCodeList() = default;
};
class DescribeAllDBInstanceClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAllDBInstanceClassResponseBodyClassCodeList>> classCodeList{};
  shared_ptr<string> requestId{};

  DescribeAllDBInstanceClassResponseBody() {}

  explicit DescribeAllDBInstanceClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classCodeList) {
      vector<boost::any> temp1;
      for(auto item1:*classCodeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClassCodeList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassCodeList") != m.end() && !m["ClassCodeList"].empty()) {
      if (typeid(vector<boost::any>) == m["ClassCodeList"].type()) {
        vector<DescribeAllDBInstanceClassResponseBodyClassCodeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClassCodeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAllDBInstanceClassResponseBodyClassCodeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        classCodeList = make_shared<vector<DescribeAllDBInstanceClassResponseBodyClassCodeList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAllDBInstanceClassResponseBody() = default;
};
class DescribeAllDBInstanceClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAllDBInstanceClassResponseBody> body{};

  DescribeAllDBInstanceClassResponse() {}

  explicit DescribeAllDBInstanceClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAllDBInstanceClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAllDBInstanceClassResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAllDBInstanceClassResponse() = default;
};
class DescribeDBClusterConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configKey{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> regionId{};

  DescribeDBClusterConfigRequest() {}

  explicit DescribeDBClusterConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configKey) {
      res["ConfigKey"] = boost::any(*configKey);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigKey") != m.end() && !m["ConfigKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["ConfigKey"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDBClusterConfigRequest() = default;
};
class DescribeDBClusterConfigResponseBodyDataParams : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> defaultValue{};
  shared_ptr<long> isDynamic{};
  shared_ptr<long> isUserModifiable{};
  shared_ptr<string> name{};
  shared_ptr<string> optional{};
  shared_ptr<string> paramCategory{};
  shared_ptr<string> value{};

  DescribeDBClusterConfigResponseBodyDataParams() {}

  explicit DescribeDBClusterConfigResponseBodyDataParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (isDynamic) {
      res["IsDynamic"] = boost::any(*isDynamic);
    }
    if (isUserModifiable) {
      res["IsUserModifiable"] = boost::any(*isUserModifiable);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (optional) {
      res["Optional"] = boost::any(*optional);
    }
    if (paramCategory) {
      res["ParamCategory"] = boost::any(*paramCategory);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("IsDynamic") != m.end() && !m["IsDynamic"].empty()) {
      isDynamic = make_shared<long>(boost::any_cast<long>(m["IsDynamic"]));
    }
    if (m.find("IsUserModifiable") != m.end() && !m["IsUserModifiable"].empty()) {
      isUserModifiable = make_shared<long>(boost::any_cast<long>(m["IsUserModifiable"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Optional") != m.end() && !m["Optional"].empty()) {
      optional = make_shared<string>(boost::any_cast<string>(m["Optional"]));
    }
    if (m.find("ParamCategory") != m.end() && !m["ParamCategory"].empty()) {
      paramCategory = make_shared<string>(boost::any_cast<string>(m["ParamCategory"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeDBClusterConfigResponseBodyDataParams() = default;
};
class DescribeDBClusterConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> dbInstanceName{};
  shared_ptr<vector<DescribeDBClusterConfigResponseBodyDataParams>> params{};
  shared_ptr<long> taskId{};

  DescribeDBClusterConfigResponseBodyData() {}

  explicit DescribeDBClusterConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (dbInstanceName) {
      res["DbInstanceName"] = boost::any(*dbInstanceName);
    }
    if (params) {
      vector<boost::any> temp1;
      for(auto item1:*params){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Params"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("DbInstanceName") != m.end() && !m["DbInstanceName"].empty()) {
      dbInstanceName = make_shared<string>(boost::any_cast<string>(m["DbInstanceName"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      if (typeid(vector<boost::any>) == m["Params"].type()) {
        vector<DescribeDBClusterConfigResponseBodyDataParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Params"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterConfigResponseBodyDataParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        params = make_shared<vector<DescribeDBClusterConfigResponseBodyDataParams>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~DescribeDBClusterConfigResponseBodyData() = default;
};
class DescribeDBClusterConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<DescribeDBClusterConfigResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> requestId{};

  DescribeDBClusterConfigResponseBody() {}

  explicit DescribeDBClusterConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDBClusterConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDBClusterConfigResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterConfigResponseBody() = default;
};
class DescribeDBClusterConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterConfigResponseBody> body{};

  DescribeDBClusterConfigResponse() {}

  explicit DescribeDBClusterConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterConfigResponse() = default;
};
class DescribeDBClusterConfigChangeLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> configKey{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};

  DescribeDBClusterConfigChangeLogsRequest() {}

  explicit DescribeDBClusterConfigChangeLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configKey) {
      res["ConfigKey"] = boost::any(*configKey);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigKey") != m.end() && !m["ConfigKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["ConfigKey"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeDBClusterConfigChangeLogsRequest() = default;
};
class DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<bool> isApplied{};
  shared_ptr<string> name{};
  shared_ptr<string> newValue{};
  shared_ptr<string> oldValue{};

  DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs() {}

  explicit DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isApplied) {
      res["IsApplied"] = boost::any(*isApplied);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (newValue) {
      res["NewValue"] = boost::any(*newValue);
    }
    if (oldValue) {
      res["OldValue"] = boost::any(*oldValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("IsApplied") != m.end() && !m["IsApplied"].empty()) {
      isApplied = make_shared<bool>(boost::any_cast<bool>(m["IsApplied"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NewValue") != m.end() && !m["NewValue"].empty()) {
      newValue = make_shared<string>(boost::any_cast<string>(m["NewValue"]));
    }
    if (m.find("OldValue") != m.end() && !m["OldValue"].empty()) {
      oldValue = make_shared<string>(boost::any_cast<string>(m["OldValue"]));
    }
  }


  virtual ~DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs() = default;
};
class DescribeDBClusterConfigChangeLogsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> dbInstanceName{};
  shared_ptr<vector<DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs>> paramChangeLogs{};
  shared_ptr<long> taskId{};

  DescribeDBClusterConfigChangeLogsResponseBodyData() {}

  explicit DescribeDBClusterConfigChangeLogsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (dbInstanceName) {
      res["DbInstanceName"] = boost::any(*dbInstanceName);
    }
    if (paramChangeLogs) {
      vector<boost::any> temp1;
      for(auto item1:*paramChangeLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ParamChangeLogs"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("DbInstanceName") != m.end() && !m["DbInstanceName"].empty()) {
      dbInstanceName = make_shared<string>(boost::any_cast<string>(m["DbInstanceName"]));
    }
    if (m.find("ParamChangeLogs") != m.end() && !m["ParamChangeLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["ParamChangeLogs"].type()) {
        vector<DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParamChangeLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        paramChangeLogs = make_shared<vector<DescribeDBClusterConfigChangeLogsResponseBodyDataParamChangeLogs>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~DescribeDBClusterConfigChangeLogsResponseBodyData() = default;
};
class DescribeDBClusterConfigChangeLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<DescribeDBClusterConfigChangeLogsResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> requestId{};

  DescribeDBClusterConfigChangeLogsResponseBody() {}

  explicit DescribeDBClusterConfigChangeLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeDBClusterConfigChangeLogsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeDBClusterConfigChangeLogsResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBClusterConfigChangeLogsResponseBody() = default;
};
class DescribeDBClusterConfigChangeLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBClusterConfigChangeLogsResponseBody> body{};

  DescribeDBClusterConfigChangeLogsResponse() {}

  explicit DescribeDBClusterConfigChangeLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBClusterConfigChangeLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBClusterConfigChangeLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBClusterConfigChangeLogsResponse() = default;
};
class DescribeDBInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBInstanceAttributeRequest() {}

  explicit DescribeDBInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeRequest() = default;
};
class DescribeDBInstanceAttributeResponseBodyDBClusterList : public Darabonba::Model {
public:
  shared_ptr<string> cacheStorageSizeGB{};
  shared_ptr<string> cacheStorageType{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> cpuCores{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> dbClusterClass{};
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> dbClusterName{};
  shared_ptr<string> dbInstanceName{};
  shared_ptr<long> memory{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<bool> scalingRulesEnable{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  DescribeDBInstanceAttributeResponseBodyDBClusterList() {}

  explicit DescribeDBInstanceAttributeResponseBodyDBClusterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheStorageSizeGB) {
      res["CacheStorageSizeGB"] = boost::any(*cacheStorageSizeGB);
    }
    if (cacheStorageType) {
      res["CacheStorageType"] = boost::any(*cacheStorageType);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (cpuCores) {
      res["CpuCores"] = boost::any(*cpuCores);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (dbClusterClass) {
      res["DbClusterClass"] = boost::any(*dbClusterClass);
    }
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
    }
    if (dbClusterName) {
      res["DbClusterName"] = boost::any(*dbClusterName);
    }
    if (dbInstanceName) {
      res["DbInstanceName"] = boost::any(*dbInstanceName);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (scalingRulesEnable) {
      res["ScalingRulesEnable"] = boost::any(*scalingRulesEnable);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheStorageSizeGB") != m.end() && !m["CacheStorageSizeGB"].empty()) {
      cacheStorageSizeGB = make_shared<string>(boost::any_cast<string>(m["CacheStorageSizeGB"]));
    }
    if (m.find("CacheStorageType") != m.end() && !m["CacheStorageType"].empty()) {
      cacheStorageType = make_shared<string>(boost::any_cast<string>(m["CacheStorageType"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CpuCores") != m.end() && !m["CpuCores"].empty()) {
      cpuCores = make_shared<long>(boost::any_cast<long>(m["CpuCores"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DbClusterClass") != m.end() && !m["DbClusterClass"].empty()) {
      dbClusterClass = make_shared<string>(boost::any_cast<string>(m["DbClusterClass"]));
    }
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
    }
    if (m.find("DbClusterName") != m.end() && !m["DbClusterName"].empty()) {
      dbClusterName = make_shared<string>(boost::any_cast<string>(m["DbClusterName"]));
    }
    if (m.find("DbInstanceName") != m.end() && !m["DbInstanceName"].empty()) {
      dbInstanceName = make_shared<string>(boost::any_cast<string>(m["DbInstanceName"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("ScalingRulesEnable") != m.end() && !m["ScalingRulesEnable"].empty()) {
      scalingRulesEnable = make_shared<bool>(boost::any_cast<bool>(m["ScalingRulesEnable"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyDBClusterList() = default;
};
class DescribeDBInstanceAttributeResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeDBInstanceAttributeResponseBodyTags() {}

  explicit DescribeDBInstanceAttributeResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyTags() = default;
};
class DescribeDBInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> canUpgradeVersions{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyDBClusterList>> DBClusterList{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> description{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineMinorVersion{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> maintainEndtime{};
  shared_ptr<string> maintainStarttime{};
  shared_ptr<long> objectStoreSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> resourceCpu{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<long> storageSize{};
  shared_ptr<string> subDomain{};
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyTags>> tags{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeDBInstanceAttributeResponseBody() {}

  explicit DescribeDBInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (canUpgradeVersions) {
      res["CanUpgradeVersions"] = boost::any(*canUpgradeVersions);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (DBClusterList) {
      vector<boost::any> temp1;
      for(auto item1:*DBClusterList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBClusterList"] = boost::any(temp1);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineMinorVersion) {
      res["EngineMinorVersion"] = boost::any(*engineMinorVersion);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (maintainEndtime) {
      res["MaintainEndtime"] = boost::any(*maintainEndtime);
    }
    if (maintainStarttime) {
      res["MaintainStarttime"] = boost::any(*maintainStarttime);
    }
    if (objectStoreSize) {
      res["ObjectStoreSize"] = boost::any(*objectStoreSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceCpu) {
      res["ResourceCpu"] = boost::any(*resourceCpu);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (subDomain) {
      res["SubDomain"] = boost::any(*subDomain);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CanUpgradeVersions") != m.end() && !m["CanUpgradeVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CanUpgradeVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CanUpgradeVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      canUpgradeVersions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DBClusterList") != m.end() && !m["DBClusterList"].empty()) {
      if (typeid(vector<boost::any>) == m["DBClusterList"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyDBClusterList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBClusterList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyDBClusterList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBClusterList = make_shared<vector<DescribeDBInstanceAttributeResponseBodyDBClusterList>>(expect1);
      }
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineMinorVersion") != m.end() && !m["EngineMinorVersion"].empty()) {
      engineMinorVersion = make_shared<string>(boost::any_cast<string>(m["EngineMinorVersion"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<long>(boost::any_cast<long>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("MaintainEndtime") != m.end() && !m["MaintainEndtime"].empty()) {
      maintainEndtime = make_shared<string>(boost::any_cast<string>(m["MaintainEndtime"]));
    }
    if (m.find("MaintainStarttime") != m.end() && !m["MaintainStarttime"].empty()) {
      maintainStarttime = make_shared<string>(boost::any_cast<string>(m["MaintainStarttime"]));
    }
    if (m.find("ObjectStoreSize") != m.end() && !m["ObjectStoreSize"].empty()) {
      objectStoreSize = make_shared<long>(boost::any_cast<long>(m["ObjectStoreSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceCpu") != m.end() && !m["ResourceCpu"].empty()) {
      resourceCpu = make_shared<long>(boost::any_cast<long>(m["ResourceCpu"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("SubDomain") != m.end() && !m["SubDomain"].empty()) {
      subDomain = make_shared<string>(boost::any_cast<string>(m["SubDomain"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeDBInstanceAttributeResponseBodyTags>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBody() = default;
};
class DescribeDBInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceAttributeResponseBody> body{};

  DescribeDBInstanceAttributeResponse() {}

  explicit DescribeDBInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponse() = default;
};
class DescribeDBInstanceNetInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDBInstanceNetInfoRequest() {}

  explicit DescribeDBInstanceNetInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoRequest() = default;
};
class DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList() {}

  explicit DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList() = default;
};
class DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> ip{};
  shared_ptr<string> netType{};
  shared_ptr<vector<DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList>> portList{};
  shared_ptr<bool> userVisible{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcInstanceId{};
  shared_ptr<string> vswitchId{};

  DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos() {}

  explicit DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (portList) {
      vector<boost::any> temp1;
      for(auto item1:*portList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortList"] = boost::any(temp1);
    }
    if (userVisible) {
      res["UserVisible"] = boost::any(*userVisible);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcInstanceId) {
      res["VpcInstanceId"] = boost::any(*vpcInstanceId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("PortList") != m.end() && !m["PortList"].empty()) {
      if (typeid(vector<boost::any>) == m["PortList"].type()) {
        vector<DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portList = make_shared<vector<DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfosPortList>>(expect1);
      }
    }
    if (m.find("UserVisible") != m.end() && !m["UserVisible"].empty()) {
      userVisible = make_shared<bool>(boost::any_cast<bool>(m["UserVisible"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcInstanceId") != m.end() && !m["VpcInstanceId"].empty()) {
      vpcInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcInstanceId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos() = default;
};
class DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};

  DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList() {}

  explicit DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList() = default;
};
class DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> ip{};
  shared_ptr<string> netType{};
  shared_ptr<vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList>> portList{};
  shared_ptr<bool> userVisible{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcInstanceId{};
  shared_ptr<string> vswitchId{};

  DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos() {}

  explicit DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (netType) {
      res["NetType"] = boost::any(*netType);
    }
    if (portList) {
      vector<boost::any> temp1;
      for(auto item1:*portList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortList"] = boost::any(temp1);
    }
    if (userVisible) {
      res["UserVisible"] = boost::any(*userVisible);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcInstanceId) {
      res["VpcInstanceId"] = boost::any(*vpcInstanceId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("NetType") != m.end() && !m["NetType"].empty()) {
      netType = make_shared<string>(boost::any_cast<string>(m["NetType"]));
    }
    if (m.find("PortList") != m.end() && !m["PortList"].empty()) {
      if (typeid(vector<boost::any>) == m["PortList"].type()) {
        vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portList = make_shared<vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosPortList>>(expect1);
      }
    }
    if (m.find("UserVisible") != m.end() && !m["UserVisible"].empty()) {
      userVisible = make_shared<bool>(boost::any_cast<bool>(m["UserVisible"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcInstanceId") != m.end() && !m["VpcInstanceId"].empty()) {
      vpcInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcInstanceId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos() = default;
};
class DescribeDBInstanceNetInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos>> DBClustersNetInfos{};
  shared_ptr<vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos>> DBInstanceNetInfos{};
  shared_ptr<string> requestId{};

  DescribeDBInstanceNetInfoResponseBody() {}

  explicit DescribeDBInstanceNetInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClustersNetInfos) {
      vector<boost::any> temp1;
      for(auto item1:*DBClustersNetInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBClustersNetInfos"] = boost::any(temp1);
    }
    if (DBInstanceNetInfos) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceNetInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceNetInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClustersNetInfos") != m.end() && !m["DBClustersNetInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["DBClustersNetInfos"].type()) {
        vector<DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBClustersNetInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBClustersNetInfos = make_shared<vector<DescribeDBInstanceNetInfoResponseBodyDBClustersNetInfos>>(expect1);
      }
    }
    if (m.find("DBInstanceNetInfos") != m.end() && !m["DBInstanceNetInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceNetInfos"].type()) {
        vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceNetInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceNetInfos = make_shared<vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBody() = default;
};
class DescribeDBInstanceNetInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstanceNetInfoResponseBody> body{};

  DescribeDBInstanceNetInfoResponse() {}

  explicit DescribeDBInstanceNetInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstanceNetInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceNetInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponse() = default;
};
class DescribeDBInstancesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstancesRequestTag() {}

  explicit DescribeDBInstancesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBInstancesRequestTag() = default;
};
class DescribeDBInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceIds{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<DescribeDBInstancesRequestTag>> tag{};

  DescribeDBInstancesRequest() {}

  explicit DescribeDBInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceIds) {
      res["DBInstanceIds"] = boost::any(*DBInstanceIds);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
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
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceIds") != m.end() && !m["DBInstanceIds"].empty()) {
      DBInstanceIds = make_shared<string>(boost::any_cast<string>(m["DBInstanceIds"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBInstancesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBInstancesRequestTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstancesRequest() = default;
};
class DescribeDBInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceIds{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> tagShrink{};

  DescribeDBInstancesShrinkRequest() {}

  explicit DescribeDBInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceIds) {
      res["DBInstanceIds"] = boost::any(*DBInstanceIds);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceIds") != m.end() && !m["DBInstanceIds"].empty()) {
      DBInstanceIds = make_shared<string>(boost::any_cast<string>(m["DBInstanceIds"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~DescribeDBInstancesShrinkRequest() = default;
};
class DescribeDBInstancesResponseBodyItemsTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeDBInstancesResponseBodyItemsTags() {}

  explicit DescribeDBInstancesResponseBodyItemsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBodyItemsTags() = default;
};
class DescribeDBInstancesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> clusterCount{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> description{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> instanceUsedType{};
  shared_ptr<bool> isDeleted{};
  shared_ptr<long> lockMode{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> maintainEndTimeStr{};
  shared_ptr<string> maintainEndtime{};
  shared_ptr<string> maintainStartTimeStr{};
  shared_ptr<string> maintainStarttime{};
  shared_ptr<long> objectStoreSize{};
  shared_ptr<string> parentInstance{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceCpu{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceMemory{};
  shared_ptr<long> scaleMax{};
  shared_ptr<long> scaleMin{};
  shared_ptr<long> scaleReplica{};
  shared_ptr<string> status{};
  shared_ptr<long> storageSize{};
  shared_ptr<string> storageType{};
  shared_ptr<vector<DescribeDBInstancesResponseBodyItemsTags>> tags{};
  shared_ptr<string> tenantClusterId{};
  shared_ptr<string> tenantToken{};
  shared_ptr<string> tenantUserId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> connectionString{};

  DescribeDBInstancesResponseBodyItems() {}

  explicit DescribeDBInstancesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clusterCount) {
      res["ClusterCount"] = boost::any(*clusterCount);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (instanceUsedType) {
      res["InstanceUsedType"] = boost::any(*instanceUsedType);
    }
    if (isDeleted) {
      res["IsDeleted"] = boost::any(*isDeleted);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (maintainEndTimeStr) {
      res["MaintainEndTimeStr"] = boost::any(*maintainEndTimeStr);
    }
    if (maintainEndtime) {
      res["MaintainEndtime"] = boost::any(*maintainEndtime);
    }
    if (maintainStartTimeStr) {
      res["MaintainStartTimeStr"] = boost::any(*maintainStartTimeStr);
    }
    if (maintainStarttime) {
      res["MaintainStarttime"] = boost::any(*maintainStarttime);
    }
    if (objectStoreSize) {
      res["ObjectStoreSize"] = boost::any(*objectStoreSize);
    }
    if (parentInstance) {
      res["ParentInstance"] = boost::any(*parentInstance);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceCpu) {
      res["ResourceCpu"] = boost::any(*resourceCpu);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceMemory) {
      res["ResourceMemory"] = boost::any(*resourceMemory);
    }
    if (scaleMax) {
      res["ScaleMax"] = boost::any(*scaleMax);
    }
    if (scaleMin) {
      res["ScaleMin"] = boost::any(*scaleMin);
    }
    if (scaleReplica) {
      res["ScaleReplica"] = boost::any(*scaleReplica);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tenantClusterId) {
      res["TenantClusterId"] = boost::any(*tenantClusterId);
    }
    if (tenantToken) {
      res["TenantToken"] = boost::any(*tenantToken);
    }
    if (tenantUserId) {
      res["TenantUserId"] = boost::any(*tenantUserId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (connectionString) {
      res["connectionString"] = boost::any(*connectionString);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClusterCount") != m.end() && !m["ClusterCount"].empty()) {
      clusterCount = make_shared<long>(boost::any_cast<long>(m["ClusterCount"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InstanceUsedType") != m.end() && !m["InstanceUsedType"].empty()) {
      instanceUsedType = make_shared<string>(boost::any_cast<string>(m["InstanceUsedType"]));
    }
    if (m.find("IsDeleted") != m.end() && !m["IsDeleted"].empty()) {
      isDeleted = make_shared<bool>(boost::any_cast<bool>(m["IsDeleted"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<long>(boost::any_cast<long>(m["LockMode"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("MaintainEndTimeStr") != m.end() && !m["MaintainEndTimeStr"].empty()) {
      maintainEndTimeStr = make_shared<string>(boost::any_cast<string>(m["MaintainEndTimeStr"]));
    }
    if (m.find("MaintainEndtime") != m.end() && !m["MaintainEndtime"].empty()) {
      maintainEndtime = make_shared<string>(boost::any_cast<string>(m["MaintainEndtime"]));
    }
    if (m.find("MaintainStartTimeStr") != m.end() && !m["MaintainStartTimeStr"].empty()) {
      maintainStartTimeStr = make_shared<string>(boost::any_cast<string>(m["MaintainStartTimeStr"]));
    }
    if (m.find("MaintainStarttime") != m.end() && !m["MaintainStarttime"].empty()) {
      maintainStarttime = make_shared<string>(boost::any_cast<string>(m["MaintainStarttime"]));
    }
    if (m.find("ObjectStoreSize") != m.end() && !m["ObjectStoreSize"].empty()) {
      objectStoreSize = make_shared<long>(boost::any_cast<long>(m["ObjectStoreSize"]));
    }
    if (m.find("ParentInstance") != m.end() && !m["ParentInstance"].empty()) {
      parentInstance = make_shared<string>(boost::any_cast<string>(m["ParentInstance"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceCpu") != m.end() && !m["ResourceCpu"].empty()) {
      resourceCpu = make_shared<long>(boost::any_cast<long>(m["ResourceCpu"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceMemory") != m.end() && !m["ResourceMemory"].empty()) {
      resourceMemory = make_shared<long>(boost::any_cast<long>(m["ResourceMemory"]));
    }
    if (m.find("ScaleMax") != m.end() && !m["ScaleMax"].empty()) {
      scaleMax = make_shared<long>(boost::any_cast<long>(m["ScaleMax"]));
    }
    if (m.find("ScaleMin") != m.end() && !m["ScaleMin"].empty()) {
      scaleMin = make_shared<long>(boost::any_cast<long>(m["ScaleMin"]));
    }
    if (m.find("ScaleReplica") != m.end() && !m["ScaleReplica"].empty()) {
      scaleReplica = make_shared<long>(boost::any_cast<long>(m["ScaleReplica"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeDBInstancesResponseBodyItemsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyItemsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeDBInstancesResponseBodyItemsTags>>(expect1);
      }
    }
    if (m.find("TenantClusterId") != m.end() && !m["TenantClusterId"].empty()) {
      tenantClusterId = make_shared<string>(boost::any_cast<string>(m["TenantClusterId"]));
    }
    if (m.find("TenantToken") != m.end() && !m["TenantToken"].empty()) {
      tenantToken = make_shared<string>(boost::any_cast<string>(m["TenantToken"]));
    }
    if (m.find("TenantUserId") != m.end() && !m["TenantUserId"].empty()) {
      tenantUserId = make_shared<string>(boost::any_cast<string>(m["TenantUserId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("connectionString") != m.end() && !m["connectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["connectionString"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBodyItems() = default;
};
class DescribeDBInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancesResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecordCount{};

  DescribeDBInstancesResponseBody() {}

  explicit DescribeDBInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDBInstancesResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDBInstancesResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBody() = default;
};
class DescribeDBInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDBInstancesResponseBody> body{};

  DescribeDBInstancesResponse() {}

  explicit DescribeDBInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDBInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponse() = default;
};
class DescribeElasticRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> product{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  DescribeElasticRulesRequest() {}

  explicit DescribeElasticRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeElasticRulesRequest() = default;
};
class DescribeElasticRulesResponseBodyDataRules : public Darabonba::Model {
public:
  shared_ptr<string> clusterClass{};
  shared_ptr<string> elasticRuleStartTime{};
  shared_ptr<string> executionPeriod{};
  shared_ptr<long> ruleId{};

  DescribeElasticRulesResponseBodyDataRules() {}

  explicit DescribeElasticRulesResponseBodyDataRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterClass) {
      res["ClusterClass"] = boost::any(*clusterClass);
    }
    if (elasticRuleStartTime) {
      res["ElasticRuleStartTime"] = boost::any(*elasticRuleStartTime);
    }
    if (executionPeriod) {
      res["ExecutionPeriod"] = boost::any(*executionPeriod);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterClass") != m.end() && !m["ClusterClass"].empty()) {
      clusterClass = make_shared<string>(boost::any_cast<string>(m["ClusterClass"]));
    }
    if (m.find("ElasticRuleStartTime") != m.end() && !m["ElasticRuleStartTime"].empty()) {
      elasticRuleStartTime = make_shared<string>(boost::any_cast<string>(m["ElasticRuleStartTime"]));
    }
    if (m.find("ExecutionPeriod") != m.end() && !m["ExecutionPeriod"].empty()) {
      executionPeriod = make_shared<string>(boost::any_cast<string>(m["ExecutionPeriod"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~DescribeElasticRulesResponseBodyDataRules() = default;
};
class DescribeElasticRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<vector<DescribeElasticRulesResponseBodyDataRules>> rules{};

  DescribeElasticRulesResponseBodyData() {}

  explicit DescribeElasticRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(vector<boost::any>) == m["Rules"].type()) {
        vector<DescribeElasticRulesResponseBodyDataRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeElasticRulesResponseBodyDataRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<DescribeElasticRulesResponseBodyDataRules>>(expect1);
      }
    }
  }


  virtual ~DescribeElasticRulesResponseBodyData() = default;
};
class DescribeElasticRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeElasticRulesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeElasticRulesResponseBody() {}

  explicit DescribeElasticRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DescribeElasticRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeElasticRulesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeElasticRulesResponseBody() = default;
};
class DescribeElasticRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeElasticRulesResponseBody> body{};

  DescribeElasticRulesResponse() {}

  explicit DescribeElasticRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeElasticRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeElasticRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeElasticRulesResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> zoneId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionModelListZones : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<bool> disabled{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> subDomain{};
  shared_ptr<bool> vpcEnabled{};
  shared_ptr<string> zoneId{};

  DescribeRegionsResponseBodyRegionModelListZones() {}

  explicit DescribeRegionsResponseBodyRegionModelListZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (disabled) {
      res["Disabled"] = boost::any(*disabled);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subDomain) {
      res["SubDomain"] = boost::any(*subDomain);
    }
    if (vpcEnabled) {
      res["VpcEnabled"] = boost::any(*vpcEnabled);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Disabled") != m.end() && !m["Disabled"].empty()) {
      disabled = make_shared<bool>(boost::any_cast<bool>(m["Disabled"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubDomain") != m.end() && !m["SubDomain"].empty()) {
      subDomain = make_shared<string>(boost::any_cast<string>(m["SubDomain"]));
    }
    if (m.find("VpcEnabled") != m.end() && !m["VpcEnabled"].empty()) {
      vpcEnabled = make_shared<bool>(boost::any_cast<bool>(m["VpcEnabled"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionModelListZones() = default;
};
class DescribeRegionsResponseBodyRegionModelList : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<DescribeRegionsResponseBodyRegionModelListZones>> zones{};

  DescribeRegionsResponseBodyRegionModelList() {}

  explicit DescribeRegionsResponseBodyRegionModelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zones) {
      vector<boost::any> temp1;
      for(auto item1:*zones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zones"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<DescribeRegionsResponseBodyRegionModelListZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionModelListZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<DescribeRegionsResponseBodyRegionModelListZones>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionModelList() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionModelList>> regionModelList{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionModelList) {
      vector<boost::any> temp1;
      for(auto item1:*regionModelList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionModelList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionModelList") != m.end() && !m["RegionModelList"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionModelList"].type()) {
        vector<DescribeRegionsResponseBodyRegionModelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionModelList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionModelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionModelList = make_shared<vector<DescribeRegionsResponseBodyRegionModelList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
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
class DescribeSecurityIPListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  DescribeSecurityIPListRequest() {}

  explicit DescribeSecurityIPListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeSecurityIPListRequest() = default;
};
class DescribeSecurityIPListResponseBodyGroupItems : public Darabonba::Model {
public:
  shared_ptr<string> aecurityIPType{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupTag{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> whitelistNetType{};

  DescribeSecurityIPListResponseBodyGroupItems() {}

  explicit DescribeSecurityIPListResponseBodyGroupItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aecurityIPType) {
      res["AecurityIPType"] = boost::any(*aecurityIPType);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupTag) {
      res["GroupTag"] = boost::any(*groupTag);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (whitelistNetType) {
      res["WhitelistNetType"] = boost::any(*whitelistNetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AecurityIPType") != m.end() && !m["AecurityIPType"].empty()) {
      aecurityIPType = make_shared<string>(boost::any_cast<string>(m["AecurityIPType"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupTag") != m.end() && !m["GroupTag"].empty()) {
      groupTag = make_shared<string>(boost::any_cast<string>(m["GroupTag"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("WhitelistNetType") != m.end() && !m["WhitelistNetType"].empty()) {
      whitelistNetType = make_shared<string>(boost::any_cast<string>(m["WhitelistNetType"]));
    }
  }


  virtual ~DescribeSecurityIPListResponseBodyGroupItems() = default;
};
class DescribeSecurityIPListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<vector<DescribeSecurityIPListResponseBodyGroupItems>> groupItems{};
  shared_ptr<string> requestId{};

  DescribeSecurityIPListResponseBody() {}

  explicit DescribeSecurityIPListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (groupItems) {
      vector<boost::any> temp1;
      for(auto item1:*groupItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GroupItems"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("GroupItems") != m.end() && !m["GroupItems"].empty()) {
      if (typeid(vector<boost::any>) == m["GroupItems"].type()) {
        vector<DescribeSecurityIPListResponseBodyGroupItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GroupItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSecurityIPListResponseBodyGroupItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groupItems = make_shared<vector<DescribeSecurityIPListResponseBodyGroupItems>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSecurityIPListResponseBody() = default;
};
class DescribeSecurityIPListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSecurityIPListResponseBody> body{};

  DescribeSecurityIPListResponse() {}

  explicit DescribeSecurityIPListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSecurityIPListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSecurityIPListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSecurityIPListResponse() = default;
};
class EnDisableScalingRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> product{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<bool> scalingRulesEnable{};

  EnDisableScalingRulesRequest() {}

  explicit EnDisableScalingRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingRulesEnable) {
      res["ScalingRulesEnable"] = boost::any(*scalingRulesEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingRulesEnable") != m.end() && !m["ScalingRulesEnable"].empty()) {
      scalingRulesEnable = make_shared<bool>(boost::any_cast<bool>(m["ScalingRulesEnable"]));
    }
  }


  virtual ~EnDisableScalingRulesRequest() = default;
};
class EnDisableScalingRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<bool> scalingRulesEnable{};

  EnDisableScalingRulesResponseBodyData() {}

  explicit EnDisableScalingRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (scalingRulesEnable) {
      res["ScalingRulesEnable"] = boost::any(*scalingRulesEnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("ScalingRulesEnable") != m.end() && !m["ScalingRulesEnable"].empty()) {
      scalingRulesEnable = make_shared<bool>(boost::any_cast<bool>(m["ScalingRulesEnable"]));
    }
  }


  virtual ~EnDisableScalingRulesResponseBodyData() = default;
};
class EnDisableScalingRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<EnDisableScalingRulesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  EnDisableScalingRulesResponseBody() {}

  explicit EnDisableScalingRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        EnDisableScalingRulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EnDisableScalingRulesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnDisableScalingRulesResponseBody() = default;
};
class EnDisableScalingRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnDisableScalingRulesResponseBody> body{};

  EnDisableScalingRulesResponse() {}

  explicit EnDisableScalingRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnDisableScalingRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnDisableScalingRulesResponseBody>(model1);
      }
    }
  }


  virtual ~EnDisableScalingRulesResponse() = default;
};
class GetCreateBEClusterInquiryRequest : public Darabonba::Model {
public:
  shared_ptr<long> cacheSize{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> computeSize{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<long> preCacheSize{};
  shared_ptr<long> preComputeSize{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<long> quantity{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  GetCreateBEClusterInquiryRequest() {}

  explicit GetCreateBEClusterInquiryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheSize) {
      res["CacheSize"] = boost::any(*cacheSize);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (computeSize) {
      res["ComputeSize"] = boost::any(*computeSize);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (preCacheSize) {
      res["PreCacheSize"] = boost::any(*preCacheSize);
    }
    if (preComputeSize) {
      res["PreComputeSize"] = boost::any(*preComputeSize);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheSize") != m.end() && !m["CacheSize"].empty()) {
      cacheSize = make_shared<long>(boost::any_cast<long>(m["CacheSize"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ComputeSize") != m.end() && !m["ComputeSize"].empty()) {
      computeSize = make_shared<long>(boost::any_cast<long>(m["ComputeSize"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("PreCacheSize") != m.end() && !m["PreCacheSize"].empty()) {
      preCacheSize = make_shared<long>(boost::any_cast<long>(m["PreCacheSize"]));
    }
    if (m.find("PreComputeSize") != m.end() && !m["PreComputeSize"].empty()) {
      preComputeSize = make_shared<long>(boost::any_cast<long>(m["PreComputeSize"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetCreateBEClusterInquiryRequest() = default;
};
class GetCreateBEClusterInquiryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> tradeAmount{};

  GetCreateBEClusterInquiryResponseBodyData() {}

  explicit GetCreateBEClusterInquiryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<string>(boost::any_cast<string>(m["TradeAmount"]));
    }
  }


  virtual ~GetCreateBEClusterInquiryResponseBodyData() = default;
};
class GetCreateBEClusterInquiryResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetCreateBEClusterInquiryResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetCreateBEClusterInquiryResponseBody() {}

  explicit GetCreateBEClusterInquiryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCreateBEClusterInquiryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCreateBEClusterInquiryResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCreateBEClusterInquiryResponseBody() = default;
};
class GetCreateBEClusterInquiryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCreateBEClusterInquiryResponseBody> body{};

  GetCreateBEClusterInquiryResponse() {}

  explicit GetCreateBEClusterInquiryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCreateBEClusterInquiryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCreateBEClusterInquiryResponseBody>(model1);
      }
    }
  }


  virtual ~GetCreateBEClusterInquiryResponse() = default;
};
class GetModifyBEClusterInquiryRequest : public Darabonba::Model {
public:
  shared_ptr<long> cacheSize{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> computeSize{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<long> preCacheSize{};
  shared_ptr<long> preComputeSize{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<long> quantity{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  GetModifyBEClusterInquiryRequest() {}

  explicit GetModifyBEClusterInquiryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheSize) {
      res["CacheSize"] = boost::any(*cacheSize);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (computeSize) {
      res["ComputeSize"] = boost::any(*computeSize);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (preCacheSize) {
      res["PreCacheSize"] = boost::any(*preCacheSize);
    }
    if (preComputeSize) {
      res["PreComputeSize"] = boost::any(*preComputeSize);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheSize") != m.end() && !m["CacheSize"].empty()) {
      cacheSize = make_shared<long>(boost::any_cast<long>(m["CacheSize"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("ComputeSize") != m.end() && !m["ComputeSize"].empty()) {
      computeSize = make_shared<long>(boost::any_cast<long>(m["ComputeSize"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("PreCacheSize") != m.end() && !m["PreCacheSize"].empty()) {
      preCacheSize = make_shared<long>(boost::any_cast<long>(m["PreCacheSize"]));
    }
    if (m.find("PreComputeSize") != m.end() && !m["PreComputeSize"].empty()) {
      preComputeSize = make_shared<long>(boost::any_cast<long>(m["PreComputeSize"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetModifyBEClusterInquiryRequest() = default;
};
class GetModifyBEClusterInquiryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> tradeAmount{};

  GetModifyBEClusterInquiryResponseBodyData() {}

  explicit GetModifyBEClusterInquiryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (tradeAmount) {
      res["TradeAmount"] = boost::any(*tradeAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("TradeAmount") != m.end() && !m["TradeAmount"].empty()) {
      tradeAmount = make_shared<string>(boost::any_cast<string>(m["TradeAmount"]));
    }
  }


  virtual ~GetModifyBEClusterInquiryResponseBodyData() = default;
};
class GetModifyBEClusterInquiryResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetModifyBEClusterInquiryResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetModifyBEClusterInquiryResponseBody() {}

  explicit GetModifyBEClusterInquiryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetModifyBEClusterInquiryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetModifyBEClusterInquiryResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetModifyBEClusterInquiryResponseBody() = default;
};
class GetModifyBEClusterInquiryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModifyBEClusterInquiryResponseBody> body{};

  GetModifyBEClusterInquiryResponse() {}

  explicit GetModifyBEClusterInquiryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetModifyBEClusterInquiryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModifyBEClusterInquiryResponseBody>(model1);
      }
    }
  }


  virtual ~GetModifyBEClusterInquiryResponse() = default;
};
class ModifyBEClusterAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> instanceAttributeType{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> value{};

  ModifyBEClusterAttributeRequest() {}

  explicit ModifyBEClusterAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (instanceAttributeType) {
      res["InstanceAttributeType"] = boost::any(*instanceAttributeType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("InstanceAttributeType") != m.end() && !m["InstanceAttributeType"].empty()) {
      instanceAttributeType = make_shared<string>(boost::any_cast<string>(m["InstanceAttributeType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ModifyBEClusterAttributeRequest() = default;
};
class ModifyBEClusterAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyBEClusterAttributeResponseBody() {}

  explicit ModifyBEClusterAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyBEClusterAttributeResponseBody() = default;
};
class ModifyBEClusterAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyBEClusterAttributeResponseBody> body{};

  ModifyBEClusterAttributeResponse() {}

  explicit ModifyBEClusterAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyBEClusterAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBEClusterAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBEClusterAttributeResponse() = default;
};
class ModifyDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> cacheSize{};
  shared_ptr<string> DBClusterClass{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engine{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDBClusterRequest() {}

  explicit ModifyDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheSize) {
      res["CacheSize"] = boost::any(*cacheSize);
    }
    if (DBClusterClass) {
      res["DBClusterClass"] = boost::any(*DBClusterClass);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheSize") != m.end() && !m["CacheSize"].empty()) {
      cacheSize = make_shared<string>(boost::any_cast<string>(m["CacheSize"]));
    }
    if (m.find("DBClusterClass") != m.end() && !m["DBClusterClass"].empty()) {
      DBClusterClass = make_shared<string>(boost::any_cast<string>(m["DBClusterClass"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDBClusterRequest() = default;
};
class ModifyDBClusterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> orderId{};

  ModifyDBClusterResponseBodyData() {}

  explicit ModifyDBClusterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~ModifyDBClusterResponseBodyData() = default;
};
class ModifyDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<ModifyDBClusterResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ModifyDBClusterResponseBody() {}

  explicit ModifyDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyDBClusterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyDBClusterResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterResponseBody() = default;
};
class ModifyDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBClusterResponseBody> body{};

  ModifyDBClusterResponse() {}

  explicit ModifyDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
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
class ModifyDBClusterConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> configKey{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<bool> parallelOperation{};
  shared_ptr<string> parameters{};
  shared_ptr<string> regionId{};
  shared_ptr<string> switchTimeMode{};

  ModifyDBClusterConfigRequest() {}

  explicit ModifyDBClusterConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configKey) {
      res["ConfigKey"] = boost::any(*configKey);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (parallelOperation) {
      res["ParallelOperation"] = boost::any(*parallelOperation);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (switchTimeMode) {
      res["SwitchTimeMode"] = boost::any(*switchTimeMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigKey") != m.end() && !m["ConfigKey"].empty()) {
      configKey = make_shared<string>(boost::any_cast<string>(m["ConfigKey"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ParallelOperation") != m.end() && !m["ParallelOperation"].empty()) {
      parallelOperation = make_shared<bool>(boost::any_cast<bool>(m["ParallelOperation"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SwitchTimeMode") != m.end() && !m["SwitchTimeMode"].empty()) {
      switchTimeMode = make_shared<string>(boost::any_cast<string>(m["SwitchTimeMode"]));
    }
  }


  virtual ~ModifyDBClusterConfigRequest() = default;
};
class ModifyDBClusterConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dbClusterId{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> dbInstanceName{};
  shared_ptr<long> taskId{};

  ModifyDBClusterConfigResponseBodyData() {}

  explicit ModifyDBClusterConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbClusterId) {
      res["DbClusterId"] = boost::any(*dbClusterId);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (dbInstanceName) {
      res["DbInstanceName"] = boost::any(*dbInstanceName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbClusterId") != m.end() && !m["DbClusterId"].empty()) {
      dbClusterId = make_shared<string>(boost::any_cast<string>(m["DbClusterId"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("DbInstanceName") != m.end() && !m["DbInstanceName"].empty()) {
      dbInstanceName = make_shared<string>(boost::any_cast<string>(m["DbInstanceName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~ModifyDBClusterConfigResponseBodyData() = default;
};
class ModifyDBClusterConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<ModifyDBClusterConfigResponseBodyData> data{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> requestId{};

  ModifyDBClusterConfigResponseBody() {}

  explicit ModifyDBClusterConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyDBClusterConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyDBClusterConfigResponseBodyData>(model1);
      }
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDBClusterConfigResponseBody() = default;
};
class ModifyDBClusterConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBClusterConfigResponseBody> body{};

  ModifyDBClusterConfigResponse() {}

  explicit ModifyDBClusterConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBClusterConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBClusterConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBClusterConfigResponse() = default;
};
class ModifyDBInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> instanceAttributeType{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> value{};

  ModifyDBInstanceAttributeRequest() {}

  explicit ModifyDBInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (instanceAttributeType) {
      res["InstanceAttributeType"] = boost::any(*instanceAttributeType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("InstanceAttributeType") != m.end() && !m["InstanceAttributeType"].empty()) {
      instanceAttributeType = make_shared<string>(boost::any_cast<string>(m["InstanceAttributeType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ModifyDBInstanceAttributeRequest() = default;
};
class ModifyDBInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceAttributeResponseBody() {}

  explicit ModifyDBInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceAttributeResponseBody() = default;
};
class ModifyDBInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDBInstanceAttributeResponseBody> body{};

  ModifyDBInstanceAttributeResponse() {}

  explicit ModifyDBInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceAttributeResponse() = default;
};
class ModifyElasticRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterClass{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> elasticRuleStartTime{};
  shared_ptr<string> executionPeriod{};
  shared_ptr<string> product{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> ruleId{};

  ModifyElasticRuleRequest() {}

  explicit ModifyElasticRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterClass) {
      res["ClusterClass"] = boost::any(*clusterClass);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (elasticRuleStartTime) {
      res["ElasticRuleStartTime"] = boost::any(*elasticRuleStartTime);
    }
    if (executionPeriod) {
      res["ExecutionPeriod"] = boost::any(*executionPeriod);
    }
    if (product) {
      res["Product"] = boost::any(*product);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterClass") != m.end() && !m["ClusterClass"].empty()) {
      clusterClass = make_shared<string>(boost::any_cast<string>(m["ClusterClass"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("ElasticRuleStartTime") != m.end() && !m["ElasticRuleStartTime"].empty()) {
      elasticRuleStartTime = make_shared<string>(boost::any_cast<string>(m["ElasticRuleStartTime"]));
    }
    if (m.find("ExecutionPeriod") != m.end() && !m["ExecutionPeriod"].empty()) {
      executionPeriod = make_shared<string>(boost::any_cast<string>(m["ExecutionPeriod"]));
    }
    if (m.find("Product") != m.end() && !m["Product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["Product"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~ModifyElasticRuleRequest() = default;
};
class ModifyElasticRuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> clusterClass{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> dbInstanceId{};
  shared_ptr<string> elasticRuleStartTime{};
  shared_ptr<string> executionPeriod{};
  shared_ptr<long> ruleId{};

  ModifyElasticRuleResponseBodyData() {}

  explicit ModifyElasticRuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterClass) {
      res["ClusterClass"] = boost::any(*clusterClass);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dbInstanceId) {
      res["DbInstanceId"] = boost::any(*dbInstanceId);
    }
    if (elasticRuleStartTime) {
      res["ElasticRuleStartTime"] = boost::any(*elasticRuleStartTime);
    }
    if (executionPeriod) {
      res["ExecutionPeriod"] = boost::any(*executionPeriod);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterClass") != m.end() && !m["ClusterClass"].empty()) {
      clusterClass = make_shared<string>(boost::any_cast<string>(m["ClusterClass"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DbInstanceId") != m.end() && !m["DbInstanceId"].empty()) {
      dbInstanceId = make_shared<string>(boost::any_cast<string>(m["DbInstanceId"]));
    }
    if (m.find("ElasticRuleStartTime") != m.end() && !m["ElasticRuleStartTime"].empty()) {
      elasticRuleStartTime = make_shared<string>(boost::any_cast<string>(m["ElasticRuleStartTime"]));
    }
    if (m.find("ExecutionPeriod") != m.end() && !m["ExecutionPeriod"].empty()) {
      executionPeriod = make_shared<string>(boost::any_cast<string>(m["ExecutionPeriod"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<long>(boost::any_cast<long>(m["RuleId"]));
    }
  }


  virtual ~ModifyElasticRuleResponseBodyData() = default;
};
class ModifyElasticRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<ModifyElasticRuleResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ModifyElasticRuleResponseBody() {}

  explicit ModifyElasticRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyElasticRuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyElasticRuleResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyElasticRuleResponseBody() = default;
};
class ModifyElasticRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyElasticRuleResponseBody> body{};

  ModifyElasticRuleResponse() {}

  explicit ModifyElasticRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyElasticRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyElasticRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyElasticRuleResponse() = default;
};
class ModifySecurityIPListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> modifyMode{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityIPList{};

  ModifySecurityIPListRequest() {}

  explicit ModifySecurityIPListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (modifyMode) {
      res["ModifyMode"] = boost::any(*modifyMode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ModifyMode") != m.end() && !m["ModifyMode"].empty()) {
      modifyMode = make_shared<string>(boost::any_cast<string>(m["ModifyMode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
  }


  virtual ~ModifySecurityIPListRequest() = default;
};
class ModifySecurityIPListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> groupName{};
  shared_ptr<string> groupTag{};
  shared_ptr<string> requestId{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> securityIPType{};
  shared_ptr<long> taskId{};
  shared_ptr<string> whitelistNetType{};

  ModifySecurityIPListResponseBody() {}

  explicit ModifySecurityIPListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (groupTag) {
      res["GroupTag"] = boost::any(*groupTag);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (securityIPType) {
      res["SecurityIPType"] = boost::any(*securityIPType);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (whitelistNetType) {
      res["WhitelistNetType"] = boost::any(*whitelistNetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("GroupTag") != m.end() && !m["GroupTag"].empty()) {
      groupTag = make_shared<string>(boost::any_cast<string>(m["GroupTag"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("SecurityIPType") != m.end() && !m["SecurityIPType"].empty()) {
      securityIPType = make_shared<string>(boost::any_cast<string>(m["SecurityIPType"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("WhitelistNetType") != m.end() && !m["WhitelistNetType"].empty()) {
      whitelistNetType = make_shared<string>(boost::any_cast<string>(m["WhitelistNetType"]));
    }
  }


  virtual ~ModifySecurityIPListResponseBody() = default;
};
class ModifySecurityIPListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySecurityIPListResponseBody> body{};

  ModifySecurityIPListResponse() {}

  explicit ModifySecurityIPListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifySecurityIPListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySecurityIPListResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySecurityIPListResponse() = default;
};
class ReleaseInstancePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  ReleaseInstancePublicConnectionRequest() {}

  explicit ReleaseInstancePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ReleaseInstancePublicConnectionRequest() = default;
};
class ReleaseInstancePublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseInstancePublicConnectionResponseBody() {}

  explicit ReleaseInstancePublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReleaseInstancePublicConnectionResponseBody() = default;
};
class ReleaseInstancePublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseInstancePublicConnectionResponseBody> body{};

  ReleaseInstancePublicConnectionResponse() {}

  explicit ReleaseInstancePublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReleaseInstancePublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseInstancePublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseInstancePublicConnectionResponse() = default;
};
class ResetAccountPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  ResetAccountPasswordRequest() {}

  explicit ResetAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ResetAccountPasswordRequest() = default;
};
class ResetAccountPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetAccountPasswordResponseBody() {}

  explicit ResetAccountPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetAccountPasswordResponseBody() = default;
};
class ResetAccountPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetAccountPasswordResponseBody> body{};

  ResetAccountPasswordResponse() {}

  explicit ResetAccountPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
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
class RestartDBClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<bool> parallelOperation{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> resourceOwnerId{};

  RestartDBClusterRequest() {}

  explicit RestartDBClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (parallelOperation) {
      res["ParallelOperation"] = boost::any(*parallelOperation);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ParallelOperation") != m.end() && !m["ParallelOperation"].empty()) {
      parallelOperation = make_shared<bool>(boost::any_cast<bool>(m["ParallelOperation"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~RestartDBClusterRequest() = default;
};
class RestartDBClusterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBInstanceId{};

  RestartDBClusterResponseBodyData() {}

  explicit RestartDBClusterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~RestartDBClusterResponseBodyData() = default;
};
class RestartDBClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<RestartDBClusterResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RestartDBClusterResponseBody() {}

  explicit RestartDBClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RestartDBClusterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RestartDBClusterResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RestartDBClusterResponseBody() = default;
};
class RestartDBClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartDBClusterResponseBody> body{};

  RestartDBClusterResponse() {}

  explicit RestartDBClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestartDBClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartDBClusterResponseBody>(model1);
      }
    }
  }


  virtual ~RestartDBClusterResponse() = default;
};
class StartBEClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  StartBEClusterRequest() {}

  explicit StartBEClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~StartBEClusterRequest() = default;
};
class StartBEClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartBEClusterResponseBody() {}

  explicit StartBEClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartBEClusterResponseBody() = default;
};
class StartBEClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartBEClusterResponseBody> body{};

  StartBEClusterResponse() {}

  explicit StartBEClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartBEClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartBEClusterResponseBody>(model1);
      }
    }
  }


  virtual ~StartBEClusterResponse() = default;
};
class StopBEClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBClusterId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};

  StopBEClusterRequest() {}

  explicit StopBEClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~StopBEClusterRequest() = default;
};
class StopBEClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopBEClusterResponseBody() {}

  explicit StopBEClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopBEClusterResponseBody() = default;
};
class StopBEClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopBEClusterResponseBody> body{};

  StopBEClusterResponse() {}

  explicit StopBEClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopBEClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopBEClusterResponseBody>(model1);
      }
    }
  }


  virtual ~StopBEClusterResponse() = default;
};
class UpgradeDBInstanceEngineVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engineVersion{};
  shared_ptr<bool> parallelOperation{};
  shared_ptr<string> regionId{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> switchTimeMode{};

  UpgradeDBInstanceEngineVersionRequest() {}

  explicit UpgradeDBInstanceEngineVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (parallelOperation) {
      res["ParallelOperation"] = boost::any(*parallelOperation);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (switchTimeMode) {
      res["SwitchTimeMode"] = boost::any(*switchTimeMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ParallelOperation") != m.end() && !m["ParallelOperation"].empty()) {
      parallelOperation = make_shared<bool>(boost::any_cast<bool>(m["ParallelOperation"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SwitchTimeMode") != m.end() && !m["SwitchTimeMode"].empty()) {
      switchTimeMode = make_shared<string>(boost::any_cast<string>(m["SwitchTimeMode"]));
    }
  }


  virtual ~UpgradeDBInstanceEngineVersionRequest() = default;
};
class UpgradeDBInstanceEngineVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeDBInstanceEngineVersionResponseBody() {}

  explicit UpgradeDBInstanceEngineVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeDBInstanceEngineVersionResponseBody() = default;
};
class UpgradeDBInstanceEngineVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeDBInstanceEngineVersionResponseBody> body{};

  UpgradeDBInstanceEngineVersionResponse() {}

  explicit UpgradeDBInstanceEngineVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeDBInstanceEngineVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeDBInstanceEngineVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeDBInstanceEngineVersionResponse() = default;
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
  AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(shared_ptr<AllocateInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(shared_ptr<AllocateInstancePublicConnectionRequest> request);
  CheckCreateDBInstanceResponse checkCreateDBInstanceWithOptions(shared_ptr<CheckCreateDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckCreateDBInstanceResponse checkCreateDBInstance(shared_ptr<CheckCreateDBInstanceRequest> request);
  CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(shared_ptr<CheckServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckServiceLinkedRoleResponse checkServiceLinkedRole(shared_ptr<CheckServiceLinkedRoleRequest> request);
  CreateDBClusterResponse createDBClusterWithOptions(shared_ptr<CreateDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBClusterResponse createDBCluster(shared_ptr<CreateDBClusterRequest> request);
  CreateDBInstanceResponse createDBInstanceWithOptions(shared_ptr<CreateDBInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBInstanceResponse createDBInstance(shared_ptr<CreateDBInstanceRequest> request);
  CreateElasticRuleResponse createElasticRuleWithOptions(shared_ptr<CreateElasticRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateElasticRuleResponse createElasticRule(shared_ptr<CreateElasticRuleRequest> request);
  CreateServiceLinkedRoleForSelectDBResponse createServiceLinkedRoleForSelectDBWithOptions(shared_ptr<CreateServiceLinkedRoleForSelectDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceLinkedRoleForSelectDBResponse createServiceLinkedRoleForSelectDB(shared_ptr<CreateServiceLinkedRoleForSelectDBRequest> request);
  DeleteDBClusterResponse deleteDBClusterWithOptions(shared_ptr<DeleteDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBClusterResponse deleteDBCluster(shared_ptr<DeleteDBClusterRequest> request);
  DeleteDBInstanceResponse deleteDBInstanceWithOptions(shared_ptr<DeleteDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBInstanceResponse deleteDBInstance(shared_ptr<DeleteDBInstanceRequest> request);
  DeleteElasticRuleResponse deleteElasticRuleWithOptions(shared_ptr<DeleteElasticRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteElasticRuleResponse deleteElasticRule(shared_ptr<DeleteElasticRuleRequest> request);
  DescribeAllDBInstanceClassResponse describeAllDBInstanceClassWithOptions(shared_ptr<DescribeAllDBInstanceClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAllDBInstanceClassResponse describeAllDBInstanceClass(shared_ptr<DescribeAllDBInstanceClassRequest> request);
  DescribeDBClusterConfigResponse describeDBClusterConfigWithOptions(shared_ptr<DescribeDBClusterConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterConfigResponse describeDBClusterConfig(shared_ptr<DescribeDBClusterConfigRequest> request);
  DescribeDBClusterConfigChangeLogsResponse describeDBClusterConfigChangeLogsWithOptions(shared_ptr<DescribeDBClusterConfigChangeLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterConfigChangeLogsResponse describeDBClusterConfigChangeLogs(shared_ptr<DescribeDBClusterConfigChangeLogsRequest> request);
  DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(shared_ptr<DescribeDBInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(shared_ptr<DescribeDBInstanceAttributeRequest> request);
  DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfoWithOptions(shared_ptr<DescribeDBInstanceNetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfo(shared_ptr<DescribeDBInstanceNetInfoRequest> request);
  DescribeDBInstancesResponse describeDBInstancesWithOptions(shared_ptr<DescribeDBInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstancesResponse describeDBInstances(shared_ptr<DescribeDBInstancesRequest> request);
  DescribeElasticRulesResponse describeElasticRulesWithOptions(shared_ptr<DescribeElasticRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeElasticRulesResponse describeElasticRules(shared_ptr<DescribeElasticRulesRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSecurityIPListResponse describeSecurityIPListWithOptions(shared_ptr<DescribeSecurityIPListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecurityIPListResponse describeSecurityIPList(shared_ptr<DescribeSecurityIPListRequest> request);
  EnDisableScalingRulesResponse enDisableScalingRulesWithOptions(shared_ptr<EnDisableScalingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnDisableScalingRulesResponse enDisableScalingRules(shared_ptr<EnDisableScalingRulesRequest> request);
  GetCreateBEClusterInquiryResponse getCreateBEClusterInquiryWithOptions(shared_ptr<GetCreateBEClusterInquiryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCreateBEClusterInquiryResponse getCreateBEClusterInquiry(shared_ptr<GetCreateBEClusterInquiryRequest> request);
  GetModifyBEClusterInquiryResponse getModifyBEClusterInquiryWithOptions(shared_ptr<GetModifyBEClusterInquiryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModifyBEClusterInquiryResponse getModifyBEClusterInquiry(shared_ptr<GetModifyBEClusterInquiryRequest> request);
  ModifyBEClusterAttributeResponse modifyBEClusterAttributeWithOptions(shared_ptr<ModifyBEClusterAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBEClusterAttributeResponse modifyBEClusterAttribute(shared_ptr<ModifyBEClusterAttributeRequest> request);
  ModifyDBClusterResponse modifyDBClusterWithOptions(shared_ptr<ModifyDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterResponse modifyDBCluster(shared_ptr<ModifyDBClusterRequest> request);
  ModifyDBClusterConfigResponse modifyDBClusterConfigWithOptions(shared_ptr<ModifyDBClusterConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBClusterConfigResponse modifyDBClusterConfig(shared_ptr<ModifyDBClusterConfigRequest> request);
  ModifyDBInstanceAttributeResponse modifyDBInstanceAttributeWithOptions(shared_ptr<ModifyDBInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceAttributeResponse modifyDBInstanceAttribute(shared_ptr<ModifyDBInstanceAttributeRequest> request);
  ModifyElasticRuleResponse modifyElasticRuleWithOptions(shared_ptr<ModifyElasticRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyElasticRuleResponse modifyElasticRule(shared_ptr<ModifyElasticRuleRequest> request);
  ModifySecurityIPListResponse modifySecurityIPListWithOptions(shared_ptr<ModifySecurityIPListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySecurityIPListResponse modifySecurityIPList(shared_ptr<ModifySecurityIPListRequest> request);
  ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(shared_ptr<ReleaseInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(shared_ptr<ReleaseInstancePublicConnectionRequest> request);
  ResetAccountPasswordResponse resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAccountPasswordResponse resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request);
  RestartDBClusterResponse restartDBClusterWithOptions(shared_ptr<RestartDBClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartDBClusterResponse restartDBCluster(shared_ptr<RestartDBClusterRequest> request);
  StartBEClusterResponse startBEClusterWithOptions(shared_ptr<StartBEClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartBEClusterResponse startBECluster(shared_ptr<StartBEClusterRequest> request);
  StopBEClusterResponse stopBEClusterWithOptions(shared_ptr<StopBEClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopBEClusterResponse stopBECluster(shared_ptr<StopBEClusterRequest> request);
  UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersionWithOptions(shared_ptr<UpgradeDBInstanceEngineVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeDBInstanceEngineVersionResponse upgradeDBInstanceEngineVersion(shared_ptr<UpgradeDBInstanceEngineVersionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Selectdb20230522

#endif
