// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GPDB20160503_H_
#define ALIBABACLOUD_GPDB20160503_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Gpdb20160503 {
class AddBuDBInstanceRelationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> businessUnit{};

  AddBuDBInstanceRelationRequest() {}

  explicit AddBuDBInstanceRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (businessUnit) {
      res["BusinessUnit"] = boost::any(*businessUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("BusinessUnit") != m.end() && !m["BusinessUnit"].empty()) {
      businessUnit = make_shared<string>(boost::any_cast<string>(m["BusinessUnit"]));
    }
  }


  virtual ~AddBuDBInstanceRelationRequest() = default;
};
class AddBuDBInstanceRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> businessUnit{};

  AddBuDBInstanceRelationResponseBody() {}

  explicit AddBuDBInstanceRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (businessUnit) {
      res["BusinessUnit"] = boost::any(*businessUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BusinessUnit") != m.end() && !m["BusinessUnit"].empty()) {
      businessUnit = make_shared<string>(boost::any_cast<string>(m["BusinessUnit"]));
    }
  }


  virtual ~AddBuDBInstanceRelationResponseBody() = default;
};
class AddBuDBInstanceRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddBuDBInstanceRelationResponseBody> body{};

  AddBuDBInstanceRelationResponse() {}

  explicit AddBuDBInstanceRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddBuDBInstanceRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddBuDBInstanceRelationResponseBody>(model1);
      }
    }
  }


  virtual ~AddBuDBInstanceRelationResponse() = default;
};
class AllocateInstancePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> port{};
  shared_ptr<string> addressType{};

  AllocateInstancePublicConnectionRequest() {}

  explicit AllocateInstancePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
  }


  virtual ~AllocateInstancePublicConnectionRequest() = default;
};
class AllocateInstancePublicConnectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AllocateInstancePublicConnectionResponseBody() {}

  explicit AllocateInstancePublicConnectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AllocateInstancePublicConnectionResponseBody() = default;
};
class AllocateInstancePublicConnectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AllocateInstancePublicConnectionResponseBody> body{};

  AllocateInstancePublicConnectionResponse() {}

  explicit AllocateInstancePublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllocateInstancePublicConnectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateInstancePublicConnectionResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateInstancePublicConnectionResponse() = default;
};
class CheckServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  CheckServiceLinkedRoleRequest() {}

  explicit CheckServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CheckServiceLinkedRoleRequest() = default;
};
class CheckServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> hasServiceLinkedRole{};
  shared_ptr<string> regionId{};

  CheckServiceLinkedRoleResponseBody() {}

  explicit CheckServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hasServiceLinkedRole) {
      res["HasServiceLinkedRole"] = boost::any(*hasServiceLinkedRole);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HasServiceLinkedRole") != m.end() && !m["HasServiceLinkedRole"].empty()) {
      hasServiceLinkedRole = make_shared<string>(boost::any_cast<string>(m["HasServiceLinkedRole"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CheckServiceLinkedRoleResponseBody() = default;
};
class CheckServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckServiceLinkedRoleResponseBody> body{};

  CheckServiceLinkedRoleResponse() {}

  explicit CheckServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CheckServiceLinkedRoleResponse() = default;
};
class CreateAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> accountDescription{};

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
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
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
  }


  virtual ~CreateAccountRequest() = default;
};
class CreateAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateAccountResponseBody() {}

  explicit CreateAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class CreateDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> engine{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceGroupCount{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> usedTime{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> privateIpAddress{};

  CreateDBInstanceRequest() {}

  explicit CreateDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceGroupCount) {
      res["DBInstanceGroupCount"] = boost::any(*DBInstanceGroupCount);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
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
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceGroupCount") != m.end() && !m["DBInstanceGroupCount"].empty()) {
      DBInstanceGroupCount = make_shared<string>(boost::any_cast<string>(m["DBInstanceGroupCount"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
  }


  virtual ~CreateDBInstanceRequest() = default;
};
class CreateDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> port{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> orderId{};

  CreateDBInstanceResponseBody() {}

  explicit CreateDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~CreateDBInstanceResponseBody() = default;
};
class CreateDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDBInstanceResponseBody> body{};

  CreateDBInstanceResponse() {}

  explicit CreateDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBInstanceResponse() = default;
};
class CreateECSDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> engine{};
  shared_ptr<string> instanceSpec{};
  shared_ptr<long> segNodeNum{};
  shared_ptr<string> segStorageType{};
  shared_ptr<long> storageSize{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> usedTime{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> encryptionType{};
  shared_ptr<long> masterNodeNum{};
  shared_ptr<string> srcDbInstanceName{};
  shared_ptr<string> backupId{};
  shared_ptr<string> DBInstanceCategory{};

  CreateECSDBInstanceRequest() {}

  explicit CreateECSDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = boost::any(*instanceSpec);
    }
    if (segNodeNum) {
      res["SegNodeNum"] = boost::any(*segNodeNum);
    }
    if (segStorageType) {
      res["SegStorageType"] = boost::any(*segStorageType);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
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
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (encryptionType) {
      res["EncryptionType"] = boost::any(*encryptionType);
    }
    if (masterNodeNum) {
      res["MasterNodeNum"] = boost::any(*masterNodeNum);
    }
    if (srcDbInstanceName) {
      res["SrcDbInstanceName"] = boost::any(*srcDbInstanceName);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (DBInstanceCategory) {
      res["DBInstanceCategory"] = boost::any(*DBInstanceCategory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      instanceSpec = make_shared<string>(boost::any_cast<string>(m["InstanceSpec"]));
    }
    if (m.find("SegNodeNum") != m.end() && !m["SegNodeNum"].empty()) {
      segNodeNum = make_shared<long>(boost::any_cast<long>(m["SegNodeNum"]));
    }
    if (m.find("SegStorageType") != m.end() && !m["SegStorageType"].empty()) {
      segStorageType = make_shared<string>(boost::any_cast<string>(m["SegStorageType"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("EncryptionType") != m.end() && !m["EncryptionType"].empty()) {
      encryptionType = make_shared<string>(boost::any_cast<string>(m["EncryptionType"]));
    }
    if (m.find("MasterNodeNum") != m.end() && !m["MasterNodeNum"].empty()) {
      masterNodeNum = make_shared<long>(boost::any_cast<long>(m["MasterNodeNum"]));
    }
    if (m.find("SrcDbInstanceName") != m.end() && !m["SrcDbInstanceName"].empty()) {
      srcDbInstanceName = make_shared<string>(boost::any_cast<string>(m["SrcDbInstanceName"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("DBInstanceCategory") != m.end() && !m["DBInstanceCategory"].empty()) {
      DBInstanceCategory = make_shared<string>(boost::any_cast<string>(m["DBInstanceCategory"]));
    }
  }


  virtual ~CreateECSDBInstanceRequest() = default;
};
class CreateECSDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> port{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> orderId{};

  CreateECSDBInstanceResponseBody() {}

  explicit CreateECSDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~CreateECSDBInstanceResponseBody() = default;
};
class CreateECSDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateECSDBInstanceResponseBody> body{};

  CreateECSDBInstanceResponse() {}

  explicit CreateECSDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateECSDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateECSDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateECSDBInstanceResponse() = default;
};
class CreateServiceLinkedRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<long> ownerId{};

  CreateServiceLinkedRoleRequest() {}

  explicit CreateServiceLinkedRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~CreateServiceLinkedRoleRequest() = default;
};
class CreateServiceLinkedRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateServiceLinkedRoleResponseBody() {}

  explicit CreateServiceLinkedRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServiceLinkedRoleResponseBody() = default;
};
class CreateServiceLinkedRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServiceLinkedRoleResponseBody> body{};

  CreateServiceLinkedRoleResponse() {}

  explicit CreateServiceLinkedRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceLinkedRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceLinkedRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceLinkedRoleResponse() = default;
};
class DeleteDatabaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBName{};

  DeleteDatabaseRequest() {}

  explicit DeleteDatabaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
  }


  virtual ~DeleteDatabaseRequest() = default;
};
class DeleteDatabaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatabaseResponseBody() {}

  explicit DeleteDatabaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDatabaseResponseBody() = default;
};
class DeleteDatabaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDatabaseResponseBody> body{};

  DeleteDatabaseResponse() {}

  explicit DeleteDatabaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDatabaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatabaseResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatabaseResponse() = default;
};
class DeleteDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBInstanceId{};

  DeleteDBInstanceRequest() {}

  explicit DeleteDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
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
  shared_ptr<DeleteDBInstanceResponseBody> body{};

  DeleteDBInstanceResponse() {}

  explicit DeleteDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBInstanceResponse() = default;
};
class DescribeAccountsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> accountName{};

  DescribeAccountsRequest() {}

  explicit DescribeAccountsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DescribeAccountsRequest() = default;
};
class DescribeAccountsResponseBodyAccountsDBInstanceAccount : public Darabonba::Model {
public:
  shared_ptr<string> accountDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> accountStatus{};
  shared_ptr<string> accountName{};

  DescribeAccountsResponseBodyAccountsDBInstanceAccount() {}

  explicit DescribeAccountsResponseBodyAccountsDBInstanceAccount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDescription) {
      res["AccountDescription"] = boost::any(*accountDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (accountStatus) {
      res["AccountStatus"] = boost::any(*accountStatus);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDescription") != m.end() && !m["AccountDescription"].empty()) {
      accountDescription = make_shared<string>(boost::any_cast<string>(m["AccountDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("AccountStatus") != m.end() && !m["AccountStatus"].empty()) {
      accountStatus = make_shared<string>(boost::any_cast<string>(m["AccountStatus"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DescribeAccountsResponseBodyAccountsDBInstanceAccount() = default;
};
class DescribeAccountsResponseBodyAccounts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAccountsResponseBodyAccountsDBInstanceAccount>> DBInstanceAccount{};

  DescribeAccountsResponseBodyAccounts() {}

  explicit DescribeAccountsResponseBodyAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceAccount) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceAccount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceAccount"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceAccount") != m.end() && !m["DBInstanceAccount"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceAccount"].type()) {
        vector<DescribeAccountsResponseBodyAccountsDBInstanceAccount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceAccount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAccountsResponseBodyAccountsDBInstanceAccount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceAccount = make_shared<vector<DescribeAccountsResponseBodyAccountsDBInstanceAccount>>(expect1);
      }
    }
  }


  virtual ~DescribeAccountsResponseBodyAccounts() = default;
};
class DescribeAccountsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAccountsResponseBodyAccounts> accounts{};

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
    if (accounts) {
      res["Accounts"] = accounts ? boost::any(accounts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(map<string, boost::any>) == m["Accounts"].type()) {
        DescribeAccountsResponseBodyAccounts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Accounts"]));
        accounts = make_shared<DescribeAccountsResponseBodyAccounts>(model1);
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
class DescribeAvailableResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> chargeType{};

  DescribeAvailableResourcesRequest() {}

  explicit DescribeAvailableResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
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
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
  }


  virtual ~DescribeAvailableResourcesRequest() = default;
};
class DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount : public Darabonba::Model {
public:
  shared_ptr<string> step{};
  shared_ptr<string> minCount{};
  shared_ptr<string> maxCount{};

  DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount() {}

  explicit DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount() = default;
};
class DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize : public Darabonba::Model {
public:
  shared_ptr<string> step{};
  shared_ptr<string> minCount{};
  shared_ptr<string> maxCount{};

  DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize() {}

  explicit DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize() = default;
};
class DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses : public Darabonba::Model {
public:
  shared_ptr<string> storageType{};
  shared_ptr<string> description{};
  shared_ptr<string> displayClass{};
  shared_ptr<string> instanceClass{};
  shared_ptr<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount> nodeCount{};
  shared_ptr<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize> storageSize{};

  DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses() {}

  explicit DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (displayClass) {
      res["DisplayClass"] = boost::any(*displayClass);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (nodeCount) {
      res["NodeCount"] = nodeCount ? boost::any(nodeCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storageSize) {
      res["StorageSize"] = storageSize ? boost::any(storageSize->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DisplayClass") != m.end() && !m["DisplayClass"].empty()) {
      displayClass = make_shared<string>(boost::any_cast<string>(m["DisplayClass"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("NodeCount") != m.end() && !m["NodeCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["NodeCount"].type()) {
        DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["NodeCount"]));
        nodeCount = make_shared<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesNodeCount>(model1);
      }
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      if (typeid(map<string, boost::any>) == m["StorageSize"].type()) {
        DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StorageSize"]));
        storageSize = make_shared<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClassesStorageSize>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses() = default;
};
class DescribeAvailableResourcesResponseBodyResourcesSupportedEngines : public Darabonba::Model {
public:
  shared_ptr<string> supportedEngineVersion{};
  shared_ptr<string> mode{};
  shared_ptr<vector<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses>> supportedInstanceClasses{};

  DescribeAvailableResourcesResponseBodyResourcesSupportedEngines() {}

  explicit DescribeAvailableResourcesResponseBodyResourcesSupportedEngines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportedEngineVersion) {
      res["SupportedEngineVersion"] = boost::any(*supportedEngineVersion);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (supportedInstanceClasses) {
      vector<boost::any> temp1;
      for(auto item1:*supportedInstanceClasses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedInstanceClasses"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportedEngineVersion") != m.end() && !m["SupportedEngineVersion"].empty()) {
      supportedEngineVersion = make_shared<string>(boost::any_cast<string>(m["SupportedEngineVersion"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("SupportedInstanceClasses") != m.end() && !m["SupportedInstanceClasses"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedInstanceClasses"].type()) {
        vector<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedInstanceClasses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedInstanceClasses = make_shared<vector<DescribeAvailableResourcesResponseBodyResourcesSupportedEnginesSupportedInstanceClasses>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourcesResponseBodyResourcesSupportedEngines() = default;
};
class DescribeAvailableResourcesResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> zoneId{};
  shared_ptr<vector<DescribeAvailableResourcesResponseBodyResourcesSupportedEngines>> supportedEngines{};

  DescribeAvailableResourcesResponseBodyResources() {}

  explicit DescribeAvailableResourcesResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (supportedEngines) {
      vector<boost::any> temp1;
      for(auto item1:*supportedEngines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportedEngines"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("SupportedEngines") != m.end() && !m["SupportedEngines"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportedEngines"].type()) {
        vector<DescribeAvailableResourcesResponseBodyResourcesSupportedEngines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportedEngines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourcesResponseBodyResourcesSupportedEngines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportedEngines = make_shared<vector<DescribeAvailableResourcesResponseBodyResourcesSupportedEngines>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourcesResponseBodyResources() = default;
};
class DescribeAvailableResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeAvailableResourcesResponseBodyResources>> resources{};

  DescribeAvailableResourcesResponseBody() {}

  explicit DescribeAvailableResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<DescribeAvailableResourcesResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableResourcesResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<DescribeAvailableResourcesResponseBodyResources>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableResourcesResponseBody() = default;
};
class DescribeAvailableResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAvailableResourcesResponseBody> body{};

  DescribeAvailableResourcesResponse() {}

  explicit DescribeAvailableResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAvailableResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAvailableResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAvailableResourcesResponse() = default;
};
class DescribeBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};

  DescribeBackupPolicyRequest() {}

  explicit DescribeBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeBackupPolicyRequest() = default;
};
class DescribeBackupPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> backupRetentionPeriod{};
  shared_ptr<string> requestId{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> recoveryPointPeriod{};
  shared_ptr<bool> enableRecoveryPoint{};

  DescribeBackupPolicyResponseBody() {}

  explicit DescribeBackupPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupRetentionPeriod) {
      res["BackupRetentionPeriod"] = boost::any(*backupRetentionPeriod);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (preferredBackupPeriod) {
      res["PreferredBackupPeriod"] = boost::any(*preferredBackupPeriod);
    }
    if (preferredBackupTime) {
      res["PreferredBackupTime"] = boost::any(*preferredBackupTime);
    }
    if (recoveryPointPeriod) {
      res["RecoveryPointPeriod"] = boost::any(*recoveryPointPeriod);
    }
    if (enableRecoveryPoint) {
      res["EnableRecoveryPoint"] = boost::any(*enableRecoveryPoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("RecoveryPointPeriod") != m.end() && !m["RecoveryPointPeriod"].empty()) {
      recoveryPointPeriod = make_shared<string>(boost::any_cast<string>(m["RecoveryPointPeriod"]));
    }
    if (m.find("EnableRecoveryPoint") != m.end() && !m["EnableRecoveryPoint"].empty()) {
      enableRecoveryPoint = make_shared<bool>(boost::any_cast<bool>(m["EnableRecoveryPoint"]));
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
class DescribeDataBackupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> backupId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> dataType{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupStatus{};

  DescribeDataBackupsRequest() {}

  explicit DescribeDataBackupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
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
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
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
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
  }


  virtual ~DescribeDataBackupsRequest() = default;
};
class DescribeDataBackupsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> dataType{};
  shared_ptr<long> consistentTime{};
  shared_ptr<string> backupStatus{};
  shared_ptr<string> backupStartTime{};
  shared_ptr<string> backupEndTime{};
  shared_ptr<string> backupEndTimeLocal{};
  shared_ptr<string> backupSetId{};
  shared_ptr<string> baksetName{};
  shared_ptr<long> backupSize{};
  shared_ptr<string> backupMode{};
  shared_ptr<string> backupStartTimeLocal{};
  shared_ptr<string> DBInstanceId{};

  DescribeDataBackupsResponseBodyItems() {}

  explicit DescribeDataBackupsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (consistentTime) {
      res["ConsistentTime"] = boost::any(*consistentTime);
    }
    if (backupStatus) {
      res["BackupStatus"] = boost::any(*backupStatus);
    }
    if (backupStartTime) {
      res["BackupStartTime"] = boost::any(*backupStartTime);
    }
    if (backupEndTime) {
      res["BackupEndTime"] = boost::any(*backupEndTime);
    }
    if (backupEndTimeLocal) {
      res["BackupEndTimeLocal"] = boost::any(*backupEndTimeLocal);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (baksetName) {
      res["BaksetName"] = boost::any(*baksetName);
    }
    if (backupSize) {
      res["BackupSize"] = boost::any(*backupSize);
    }
    if (backupMode) {
      res["BackupMode"] = boost::any(*backupMode);
    }
    if (backupStartTimeLocal) {
      res["BackupStartTimeLocal"] = boost::any(*backupStartTimeLocal);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("ConsistentTime") != m.end() && !m["ConsistentTime"].empty()) {
      consistentTime = make_shared<long>(boost::any_cast<long>(m["ConsistentTime"]));
    }
    if (m.find("BackupStatus") != m.end() && !m["BackupStatus"].empty()) {
      backupStatus = make_shared<string>(boost::any_cast<string>(m["BackupStatus"]));
    }
    if (m.find("BackupStartTime") != m.end() && !m["BackupStartTime"].empty()) {
      backupStartTime = make_shared<string>(boost::any_cast<string>(m["BackupStartTime"]));
    }
    if (m.find("BackupEndTime") != m.end() && !m["BackupEndTime"].empty()) {
      backupEndTime = make_shared<string>(boost::any_cast<string>(m["BackupEndTime"]));
    }
    if (m.find("BackupEndTimeLocal") != m.end() && !m["BackupEndTimeLocal"].empty()) {
      backupEndTimeLocal = make_shared<string>(boost::any_cast<string>(m["BackupEndTimeLocal"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("BaksetName") != m.end() && !m["BaksetName"].empty()) {
      baksetName = make_shared<string>(boost::any_cast<string>(m["BaksetName"]));
    }
    if (m.find("BackupSize") != m.end() && !m["BackupSize"].empty()) {
      backupSize = make_shared<long>(boost::any_cast<long>(m["BackupSize"]));
    }
    if (m.find("BackupMode") != m.end() && !m["BackupMode"].empty()) {
      backupMode = make_shared<string>(boost::any_cast<string>(m["BackupMode"]));
    }
    if (m.find("BackupStartTimeLocal") != m.end() && !m["BackupStartTimeLocal"].empty()) {
      backupStartTimeLocal = make_shared<string>(boost::any_cast<string>(m["BackupStartTimeLocal"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeDataBackupsResponseBodyItems() = default;
};
class DescribeDataBackupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeDataBackupsResponseBodyItems>> items{};

  DescribeDataBackupsResponseBody() {}

  explicit DescribeDataBackupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeDataBackupsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDataBackupsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeDataBackupsResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeDataBackupsResponseBody() = default;
};
class DescribeDataBackupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDataBackupsResponseBody> body{};

  DescribeDataBackupsResponse() {}

  explicit DescribeDataBackupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDataBackupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDataBackupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDataBackupsResponse() = default;
};
class DescribeDBClusterPerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
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
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
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
class DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues : public Darabonba::Model {
public:
  shared_ptr<vector<string>> point{};

  DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (point) {
      res["Point"] = boost::any(*point);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Point") != m.end() && !m["Point"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Point"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Point"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      point = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries : public Darabonba::Model {
public:
  shared_ptr<string> role{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues>> values{};

  DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeriesValues>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries() = default;
};
class DescribeDBClusterPerformanceResponseBodyPerformanceKeys : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> unit{};
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries>> series{};

  DescribeDBClusterPerformanceResponseBodyPerformanceKeys() {}

  explicit DescribeDBClusterPerformanceResponseBodyPerformanceKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(vector<boost::any>) == m["Series"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Series"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        series = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeysSeries>>(expect1);
      }
    }
  }


  virtual ~DescribeDBClusterPerformanceResponseBodyPerformanceKeys() = default;
};
class DescribeDBClusterPerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeys>> performanceKeys{};

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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (DBClusterId) {
      res["DBClusterId"] = boost::any(*DBClusterId);
    }
    if (performanceKeys) {
      vector<boost::any> temp1;
      for(auto item1:*performanceKeys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PerformanceKeys"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DBClusterId") != m.end() && !m["DBClusterId"].empty()) {
      DBClusterId = make_shared<string>(boost::any_cast<string>(m["DBClusterId"]));
    }
    if (m.find("PerformanceKeys") != m.end() && !m["PerformanceKeys"].empty()) {
      if (typeid(vector<boost::any>) == m["PerformanceKeys"].type()) {
        vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PerformanceKeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBClusterPerformanceResponseBodyPerformanceKeys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        performanceKeys = make_shared<vector<DescribeDBClusterPerformanceResponseBodyPerformanceKeys>>(expect1);
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
class DescribeDBInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> DBInstanceId{};

  DescribeDBInstanceAttributeRequest() {}

  explicit DescribeDBInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeRequest() = default;
};
class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag() {}

  explicit DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag() = default;
};
class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag>> tag{};

  DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags() {}

  explicit DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags() = default;
};
class DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> creationTime{};
  shared_ptr<long> DBInstanceCpuCores{};
  shared_ptr<long> segmentCounts{};
  shared_ptr<long> storagePerNode{};
  shared_ptr<long> DBInstanceMemory{};
  shared_ptr<string> hostType{};
  shared_ptr<string> payType{};
  shared_ptr<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags> tags{};
  shared_ptr<string> storageType{};
  shared_ptr<string> availabilityValue{};
  shared_ptr<string> readDelayTime{};
  shared_ptr<long> cpuCoresPerNode{};
  shared_ptr<string> port{};
  shared_ptr<string> connectionMode{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> storageUnit{};
  shared_ptr<long> memoryPerNode{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> memoryUnit{};
  shared_ptr<string> DBInstanceClassType{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceGroupCount{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> DBInstanceNetType{};
  shared_ptr<string> maintainStartTime{};
  shared_ptr<string> maintainEndTime{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<long> DBInstanceDiskMBPS{};
  shared_ptr<long> DBInstanceStorage{};
  shared_ptr<string> zoneId{};
  shared_ptr<long> maxConnections{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> engine{};
  shared_ptr<string> DBInstanceCategory{};

  DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute() {}

  explicit DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (DBInstanceCpuCores) {
      res["DBInstanceCpuCores"] = boost::any(*DBInstanceCpuCores);
    }
    if (segmentCounts) {
      res["SegmentCounts"] = boost::any(*segmentCounts);
    }
    if (storagePerNode) {
      res["StoragePerNode"] = boost::any(*storagePerNode);
    }
    if (DBInstanceMemory) {
      res["DBInstanceMemory"] = boost::any(*DBInstanceMemory);
    }
    if (hostType) {
      res["HostType"] = boost::any(*hostType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (availabilityValue) {
      res["AvailabilityValue"] = boost::any(*availabilityValue);
    }
    if (readDelayTime) {
      res["ReadDelayTime"] = boost::any(*readDelayTime);
    }
    if (cpuCoresPerNode) {
      res["CpuCoresPerNode"] = boost::any(*cpuCoresPerNode);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (connectionMode) {
      res["ConnectionMode"] = boost::any(*connectionMode);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (storageUnit) {
      res["StorageUnit"] = boost::any(*storageUnit);
    }
    if (memoryPerNode) {
      res["MemoryPerNode"] = boost::any(*memoryPerNode);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (memoryUnit) {
      res["MemoryUnit"] = boost::any(*memoryUnit);
    }
    if (DBInstanceClassType) {
      res["DBInstanceClassType"] = boost::any(*DBInstanceClassType);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceGroupCount) {
      res["DBInstanceGroupCount"] = boost::any(*DBInstanceGroupCount);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (DBInstanceNetType) {
      res["DBInstanceNetType"] = boost::any(*DBInstanceNetType);
    }
    if (maintainStartTime) {
      res["MaintainStartTime"] = boost::any(*maintainStartTime);
    }
    if (maintainEndTime) {
      res["MaintainEndTime"] = boost::any(*maintainEndTime);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (DBInstanceDiskMBPS) {
      res["DBInstanceDiskMBPS"] = boost::any(*DBInstanceDiskMBPS);
    }
    if (DBInstanceStorage) {
      res["DBInstanceStorage"] = boost::any(*DBInstanceStorage);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (maxConnections) {
      res["MaxConnections"] = boost::any(*maxConnections);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (DBInstanceCategory) {
      res["DBInstanceCategory"] = boost::any(*DBInstanceCategory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DBInstanceCpuCores") != m.end() && !m["DBInstanceCpuCores"].empty()) {
      DBInstanceCpuCores = make_shared<long>(boost::any_cast<long>(m["DBInstanceCpuCores"]));
    }
    if (m.find("SegmentCounts") != m.end() && !m["SegmentCounts"].empty()) {
      segmentCounts = make_shared<long>(boost::any_cast<long>(m["SegmentCounts"]));
    }
    if (m.find("StoragePerNode") != m.end() && !m["StoragePerNode"].empty()) {
      storagePerNode = make_shared<long>(boost::any_cast<long>(m["StoragePerNode"]));
    }
    if (m.find("DBInstanceMemory") != m.end() && !m["DBInstanceMemory"].empty()) {
      DBInstanceMemory = make_shared<long>(boost::any_cast<long>(m["DBInstanceMemory"]));
    }
    if (m.find("HostType") != m.end() && !m["HostType"].empty()) {
      hostType = make_shared<string>(boost::any_cast<string>(m["HostType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttributeTags>(model1);
      }
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("AvailabilityValue") != m.end() && !m["AvailabilityValue"].empty()) {
      availabilityValue = make_shared<string>(boost::any_cast<string>(m["AvailabilityValue"]));
    }
    if (m.find("ReadDelayTime") != m.end() && !m["ReadDelayTime"].empty()) {
      readDelayTime = make_shared<string>(boost::any_cast<string>(m["ReadDelayTime"]));
    }
    if (m.find("CpuCoresPerNode") != m.end() && !m["CpuCoresPerNode"].empty()) {
      cpuCoresPerNode = make_shared<long>(boost::any_cast<long>(m["CpuCoresPerNode"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("ConnectionMode") != m.end() && !m["ConnectionMode"].empty()) {
      connectionMode = make_shared<string>(boost::any_cast<string>(m["ConnectionMode"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("StorageUnit") != m.end() && !m["StorageUnit"].empty()) {
      storageUnit = make_shared<string>(boost::any_cast<string>(m["StorageUnit"]));
    }
    if (m.find("MemoryPerNode") != m.end() && !m["MemoryPerNode"].empty()) {
      memoryPerNode = make_shared<long>(boost::any_cast<long>(m["MemoryPerNode"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("MemoryUnit") != m.end() && !m["MemoryUnit"].empty()) {
      memoryUnit = make_shared<string>(boost::any_cast<string>(m["MemoryUnit"]));
    }
    if (m.find("DBInstanceClassType") != m.end() && !m["DBInstanceClassType"].empty()) {
      DBInstanceClassType = make_shared<string>(boost::any_cast<string>(m["DBInstanceClassType"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceGroupCount") != m.end() && !m["DBInstanceGroupCount"].empty()) {
      DBInstanceGroupCount = make_shared<string>(boost::any_cast<string>(m["DBInstanceGroupCount"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("DBInstanceNetType") != m.end() && !m["DBInstanceNetType"].empty()) {
      DBInstanceNetType = make_shared<string>(boost::any_cast<string>(m["DBInstanceNetType"]));
    }
    if (m.find("MaintainStartTime") != m.end() && !m["MaintainStartTime"].empty()) {
      maintainStartTime = make_shared<string>(boost::any_cast<string>(m["MaintainStartTime"]));
    }
    if (m.find("MaintainEndTime") != m.end() && !m["MaintainEndTime"].empty()) {
      maintainEndTime = make_shared<string>(boost::any_cast<string>(m["MaintainEndTime"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DBInstanceDiskMBPS") != m.end() && !m["DBInstanceDiskMBPS"].empty()) {
      DBInstanceDiskMBPS = make_shared<long>(boost::any_cast<long>(m["DBInstanceDiskMBPS"]));
    }
    if (m.find("DBInstanceStorage") != m.end() && !m["DBInstanceStorage"].empty()) {
      DBInstanceStorage = make_shared<long>(boost::any_cast<long>(m["DBInstanceStorage"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("MaxConnections") != m.end() && !m["MaxConnections"].empty()) {
      maxConnections = make_shared<long>(boost::any_cast<long>(m["MaxConnections"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("DBInstanceCategory") != m.end() && !m["DBInstanceCategory"].empty()) {
      DBInstanceCategory = make_shared<string>(boost::any_cast<string>(m["DBInstanceCategory"]));
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute() = default;
};
class DescribeDBInstanceAttributeResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute>> DBInstanceAttribute{};

  DescribeDBInstanceAttributeResponseBodyItems() {}

  explicit DescribeDBInstanceAttributeResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceAttribute") != m.end() && !m["DBInstanceAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceAttribute"].type()) {
        vector<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceAttribute = make_shared<vector<DescribeDBInstanceAttributeResponseBodyItemsDBInstanceAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBodyItems() = default;
};
class DescribeDBInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDBInstanceAttributeResponseBodyItems> items{};

  DescribeDBInstanceAttributeResponseBody() {}

  explicit DescribeDBInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceAttributeResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBInstanceAttributeResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponseBody() = default;
};
class DescribeDBInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceAttributeResponseBody> body{};

  DescribeDBInstanceAttributeResponse() {}

  explicit DescribeDBInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceAttributeResponse() = default;
};
class DescribeDBInstanceIPArrayListRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};

  DescribeDBInstanceIPArrayListRequest() {}

  explicit DescribeDBInstanceIPArrayListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeDBInstanceIPArrayListRequest() = default;
};
class DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceIPArrayAttribute{};
  shared_ptr<string> DBInstanceIPArrayName{};
  shared_ptr<string> securityIPList{};

  DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray() {}

  explicit DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceIPArrayAttribute) {
      res["DBInstanceIPArrayAttribute"] = boost::any(*DBInstanceIPArrayAttribute);
    }
    if (DBInstanceIPArrayName) {
      res["DBInstanceIPArrayName"] = boost::any(*DBInstanceIPArrayName);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceIPArrayAttribute") != m.end() && !m["DBInstanceIPArrayAttribute"].empty()) {
      DBInstanceIPArrayAttribute = make_shared<string>(boost::any_cast<string>(m["DBInstanceIPArrayAttribute"]));
    }
    if (m.find("DBInstanceIPArrayName") != m.end() && !m["DBInstanceIPArrayName"].empty()) {
      DBInstanceIPArrayName = make_shared<string>(boost::any_cast<string>(m["DBInstanceIPArrayName"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
  }


  virtual ~DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray() = default;
};
class DescribeDBInstanceIPArrayListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray>> DBInstanceIPArray{};

  DescribeDBInstanceIPArrayListResponseBodyItems() {}

  explicit DescribeDBInstanceIPArrayListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceIPArray) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceIPArray){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceIPArray"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceIPArray") != m.end() && !m["DBInstanceIPArray"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceIPArray"].type()) {
        vector<DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceIPArray"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceIPArray = make_shared<vector<DescribeDBInstanceIPArrayListResponseBodyItemsDBInstanceIPArray>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceIPArrayListResponseBodyItems() = default;
};
class DescribeDBInstanceIPArrayListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDBInstanceIPArrayListResponseBodyItems> items{};

  DescribeDBInstanceIPArrayListResponseBody() {}

  explicit DescribeDBInstanceIPArrayListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceIPArrayListResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBInstanceIPArrayListResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceIPArrayListResponseBody() = default;
};
class DescribeDBInstanceIPArrayListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceIPArrayListResponseBody> body{};

  DescribeDBInstanceIPArrayListResponse() {}

  explicit DescribeDBInstanceIPArrayListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceIPArrayListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceIPArrayListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceIPArrayListResponse() = default;
};
class DescribeDBInstanceNetInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoRequest() = default;
};
class DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> IPType{};
  shared_ptr<string> port{};
  shared_ptr<string> vpcInstanceId{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> addressType{};

  DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo() {}

  explicit DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (IPType) {
      res["IPType"] = boost::any(*IPType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (vpcInstanceId) {
      res["VpcInstanceId"] = boost::any(*vpcInstanceId);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
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
    if (m.find("IPType") != m.end() && !m["IPType"].empty()) {
      IPType = make_shared<string>(boost::any_cast<string>(m["IPType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("VpcInstanceId") != m.end() && !m["VpcInstanceId"].empty()) {
      vpcInstanceId = make_shared<string>(boost::any_cast<string>(m["VpcInstanceId"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo() = default;
};
class DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo>> DBInstanceNetInfo{};

  DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos() {}

  explicit DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceNetInfo) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceNetInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceNetInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceNetInfo") != m.end() && !m["DBInstanceNetInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceNetInfo"].type()) {
        vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceNetInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceNetInfo = make_shared<vector<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfosDBInstanceNetInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos() = default;
};
class DescribeDBInstanceNetInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos> DBInstanceNetInfos{};
  shared_ptr<string> instanceNetworkType{};

  DescribeDBInstanceNetInfoResponseBody() {}

  explicit DescribeDBInstanceNetInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (DBInstanceNetInfos) {
      res["DBInstanceNetInfos"] = DBInstanceNetInfos ? boost::any(DBInstanceNetInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DBInstanceNetInfos") != m.end() && !m["DBInstanceNetInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBInstanceNetInfos"].type()) {
        DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBInstanceNetInfos"]));
        DBInstanceNetInfos = make_shared<DescribeDBInstanceNetInfoResponseBodyDBInstanceNetInfos>(model1);
      }
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponseBody() = default;
};
class DescribeDBInstanceNetInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceNetInfoResponseBody> body{};

  DescribeDBInstanceNetInfoResponse() {}

  explicit DescribeDBInstanceNetInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceNetInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceNetInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceNetInfoResponse() = default;
};
class DescribeDBInstanceOnECSAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> DBInstanceId{};

  DescribeDBInstanceOnECSAttributeRequest() {}

  explicit DescribeDBInstanceOnECSAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeDBInstanceOnECSAttributeRequest() = default;
};
class DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTagsTag() {}

  explicit DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTagsTag() = default;
};
class DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTagsTag>> tag{};

  DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTags() {}

  explicit DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTags() = default;
};
class DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttribute : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> encryptionType{};
  shared_ptr<string> instanceDeployType{};
  shared_ptr<string> payType{};
  shared_ptr<DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTags> tags{};
  shared_ptr<string> storageType{};
  shared_ptr<string> connectionMode{};
  shared_ptr<string> port{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> engineVersion{};
  shared_ptr<long> memorySize{};
  shared_ptr<long> segNodeNum{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> encryptionKey{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<long> cpuCores{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<long> storageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engine{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<bool> supportRestore{};
  shared_ptr<string> minorVersion{};
  shared_ptr<long> masterNodeNum{};
  shared_ptr<string> DBInstanceCategory{};

  DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttribute() {}

  explicit DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (encryptionType) {
      res["EncryptionType"] = boost::any(*encryptionType);
    }
    if (instanceDeployType) {
      res["InstanceDeployType"] = boost::any(*instanceDeployType);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (connectionMode) {
      res["ConnectionMode"] = boost::any(*connectionMode);
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
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    if (segNodeNum) {
      res["SegNodeNum"] = boost::any(*segNodeNum);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (encryptionKey) {
      res["EncryptionKey"] = boost::any(*encryptionKey);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (cpuCores) {
      res["CpuCores"] = boost::any(*cpuCores);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (supportRestore) {
      res["SupportRestore"] = boost::any(*supportRestore);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (masterNodeNum) {
      res["MasterNodeNum"] = boost::any(*masterNodeNum);
    }
    if (DBInstanceCategory) {
      res["DBInstanceCategory"] = boost::any(*DBInstanceCategory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("EncryptionType") != m.end() && !m["EncryptionType"].empty()) {
      encryptionType = make_shared<string>(boost::any_cast<string>(m["EncryptionType"]));
    }
    if (m.find("InstanceDeployType") != m.end() && !m["InstanceDeployType"].empty()) {
      instanceDeployType = make_shared<string>(boost::any_cast<string>(m["InstanceDeployType"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttributeTags>(model1);
      }
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("ConnectionMode") != m.end() && !m["ConnectionMode"].empty()) {
      connectionMode = make_shared<string>(boost::any_cast<string>(m["ConnectionMode"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["MemorySize"]));
    }
    if (m.find("SegNodeNum") != m.end() && !m["SegNodeNum"].empty()) {
      segNodeNum = make_shared<long>(boost::any_cast<long>(m["SegNodeNum"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("EncryptionKey") != m.end() && !m["EncryptionKey"].empty()) {
      encryptionKey = make_shared<string>(boost::any_cast<string>(m["EncryptionKey"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("CpuCores") != m.end() && !m["CpuCores"].empty()) {
      cpuCores = make_shared<long>(boost::any_cast<long>(m["CpuCores"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("SupportRestore") != m.end() && !m["SupportRestore"].empty()) {
      supportRestore = make_shared<bool>(boost::any_cast<bool>(m["SupportRestore"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("MasterNodeNum") != m.end() && !m["MasterNodeNum"].empty()) {
      masterNodeNum = make_shared<long>(boost::any_cast<long>(m["MasterNodeNum"]));
    }
    if (m.find("DBInstanceCategory") != m.end() && !m["DBInstanceCategory"].empty()) {
      DBInstanceCategory = make_shared<string>(boost::any_cast<string>(m["DBInstanceCategory"]));
    }
  }


  virtual ~DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttribute() = default;
};
class DescribeDBInstanceOnECSAttributeResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttribute>> DBInstanceAttribute{};

  DescribeDBInstanceOnECSAttributeResponseBodyItems() {}

  explicit DescribeDBInstanceOnECSAttributeResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceAttribute") != m.end() && !m["DBInstanceAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceAttribute"].type()) {
        vector<DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceAttribute = make_shared<vector<DescribeDBInstanceOnECSAttributeResponseBodyItemsDBInstanceAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceOnECSAttributeResponseBodyItems() = default;
};
class DescribeDBInstanceOnECSAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDBInstanceOnECSAttributeResponseBodyItems> items{};

  DescribeDBInstanceOnECSAttributeResponseBody() {}

  explicit DescribeDBInstanceOnECSAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceOnECSAttributeResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBInstanceOnECSAttributeResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceOnECSAttributeResponseBody() = default;
};
class DescribeDBInstanceOnECSAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceOnECSAttributeResponseBody> body{};

  DescribeDBInstanceOnECSAttributeResponse() {}

  explicit DescribeDBInstanceOnECSAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceOnECSAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceOnECSAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceOnECSAttributeResponse() = default;
};
class DescribeDBInstancePerformanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> key{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeDBInstancePerformanceRequest() {}

  explicit DescribeDBInstancePerformanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
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


  virtual ~DescribeDBInstancePerformanceRequest() = default;
};
class DescribeDBInstancePerformanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engine{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> performanceKeys{};

  DescribeDBInstancePerformanceResponseBody() {}

  explicit DescribeDBInstancePerformanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (performanceKeys) {
      res["PerformanceKeys"] = boost::any(*performanceKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PerformanceKeys") != m.end() && !m["PerformanceKeys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PerformanceKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PerformanceKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      performanceKeys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDBInstancePerformanceResponseBody() = default;
};
class DescribeDBInstancePerformanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstancePerformanceResponseBody> body{};

  DescribeDBInstancePerformanceResponse() {}

  explicit DescribeDBInstancePerformanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstancePerformanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstancePerformanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstancePerformanceResponse() = default;
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> DBInstanceIds{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<DescribeDBInstancesRequestTag>> tag{};
  shared_ptr<vector<string>> instanceDeployTypes{};
  shared_ptr<vector<string>> DBInstanceStatuses{};
  shared_ptr<vector<string>> DBInstanceCategories{};

  DescribeDBInstancesRequest() {}

  explicit DescribeDBInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (DBInstanceIds) {
      res["DBInstanceIds"] = boost::any(*DBInstanceIds);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (instanceDeployTypes) {
      res["InstanceDeployTypes"] = boost::any(*instanceDeployTypes);
    }
    if (DBInstanceStatuses) {
      res["DBInstanceStatuses"] = boost::any(*DBInstanceStatuses);
    }
    if (DBInstanceCategories) {
      res["DBInstanceCategories"] = boost::any(*DBInstanceCategories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("DBInstanceIds") != m.end() && !m["DBInstanceIds"].empty()) {
      DBInstanceIds = make_shared<string>(boost::any_cast<string>(m["DBInstanceIds"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("InstanceDeployTypes") != m.end() && !m["InstanceDeployTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceDeployTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceDeployTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceDeployTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DBInstanceStatuses") != m.end() && !m["DBInstanceStatuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DBInstanceStatuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DBInstanceStatuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      DBInstanceStatuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DBInstanceCategories") != m.end() && !m["DBInstanceCategories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DBInstanceCategories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DBInstanceCategories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      DBInstanceCategories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDBInstancesRequest() = default;
};
class DescribeDBInstancesShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstancesShrinkRequestTag() {}

  explicit DescribeDBInstancesShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBInstancesShrinkRequestTag() = default;
};
class DescribeDBInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> DBInstanceIds{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<DescribeDBInstancesShrinkRequestTag>> tag{};
  shared_ptr<string> instanceDeployTypesShrink{};
  shared_ptr<string> DBInstanceStatusesShrink{};
  shared_ptr<string> DBInstanceCategoriesShrink{};

  DescribeDBInstancesShrinkRequest() {}

  explicit DescribeDBInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (DBInstanceIds) {
      res["DBInstanceIds"] = boost::any(*DBInstanceIds);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (instanceDeployTypesShrink) {
      res["InstanceDeployTypes"] = boost::any(*instanceDeployTypesShrink);
    }
    if (DBInstanceStatusesShrink) {
      res["DBInstanceStatuses"] = boost::any(*DBInstanceStatusesShrink);
    }
    if (DBInstanceCategoriesShrink) {
      res["DBInstanceCategories"] = boost::any(*DBInstanceCategoriesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("DBInstanceIds") != m.end() && !m["DBInstanceIds"].empty()) {
      DBInstanceIds = make_shared<string>(boost::any_cast<string>(m["DBInstanceIds"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeDBInstancesShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBInstancesShrinkRequestTag>>(expect1);
      }
    }
    if (m.find("InstanceDeployTypes") != m.end() && !m["InstanceDeployTypes"].empty()) {
      instanceDeployTypesShrink = make_shared<string>(boost::any_cast<string>(m["InstanceDeployTypes"]));
    }
    if (m.find("DBInstanceStatuses") != m.end() && !m["DBInstanceStatuses"].empty()) {
      DBInstanceStatusesShrink = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatuses"]));
    }
    if (m.find("DBInstanceCategories") != m.end() && !m["DBInstanceCategories"].empty()) {
      DBInstanceCategoriesShrink = make_shared<string>(boost::any_cast<string>(m["DBInstanceCategories"]));
    }
  }


  virtual ~DescribeDBInstancesShrinkRequest() = default;
};
class DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag() {}

  explicit DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag() = default;
};
class DescribeDBInstancesResponseBodyItemsDBInstanceTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag>> tag{};

  DescribeDBInstancesResponseBodyItemsDBInstanceTags() {}

  explicit DescribeDBInstancesResponseBodyItemsDBInstanceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeDBInstancesResponseBodyItemsDBInstanceTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponseBodyItemsDBInstanceTags() = default;
};
class DescribeDBInstancesResponseBodyItemsDBInstance : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> DBInstanceNetType{};
  shared_ptr<string> instanceDeployType{};
  shared_ptr<string> storageType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> payType{};
  shared_ptr<DescribeDBInstancesResponseBodyItemsDBInstanceTags> tags{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<string> connectionMode{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engine{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> segNodeNum{};
  shared_ptr<string> storageSize{};
  shared_ptr<long> masterNodeNum{};
  shared_ptr<string> DBInstanceCategory{};

  DescribeDBInstancesResponseBodyItemsDBInstance() {}

  explicit DescribeDBInstancesResponseBodyItemsDBInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (DBInstanceNetType) {
      res["DBInstanceNetType"] = boost::any(*DBInstanceNetType);
    }
    if (instanceDeployType) {
      res["InstanceDeployType"] = boost::any(*instanceDeployType);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (connectionMode) {
      res["ConnectionMode"] = boost::any(*connectionMode);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (segNodeNum) {
      res["SegNodeNum"] = boost::any(*segNodeNum);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (masterNodeNum) {
      res["MasterNodeNum"] = boost::any(*masterNodeNum);
    }
    if (DBInstanceCategory) {
      res["DBInstanceCategory"] = boost::any(*DBInstanceCategory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("DBInstanceNetType") != m.end() && !m["DBInstanceNetType"].empty()) {
      DBInstanceNetType = make_shared<string>(boost::any_cast<string>(m["DBInstanceNetType"]));
    }
    if (m.find("InstanceDeployType") != m.end() && !m["InstanceDeployType"].empty()) {
      instanceDeployType = make_shared<string>(boost::any_cast<string>(m["InstanceDeployType"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeDBInstancesResponseBodyItemsDBInstanceTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeDBInstancesResponseBodyItemsDBInstanceTags>(model1);
      }
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("ConnectionMode") != m.end() && !m["ConnectionMode"].empty()) {
      connectionMode = make_shared<string>(boost::any_cast<string>(m["ConnectionMode"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("SegNodeNum") != m.end() && !m["SegNodeNum"].empty()) {
      segNodeNum = make_shared<string>(boost::any_cast<string>(m["SegNodeNum"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<string>(boost::any_cast<string>(m["StorageSize"]));
    }
    if (m.find("MasterNodeNum") != m.end() && !m["MasterNodeNum"].empty()) {
      masterNodeNum = make_shared<long>(boost::any_cast<long>(m["MasterNodeNum"]));
    }
    if (m.find("DBInstanceCategory") != m.end() && !m["DBInstanceCategory"].empty()) {
      DBInstanceCategory = make_shared<string>(boost::any_cast<string>(m["DBInstanceCategory"]));
    }
  }


  virtual ~DescribeDBInstancesResponseBodyItemsDBInstance() = default;
};
class DescribeDBInstancesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDBInstancesResponseBodyItemsDBInstance>> DBInstance{};

  DescribeDBInstancesResponseBodyItems() {}

  explicit DescribeDBInstancesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstance) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstance") != m.end() && !m["DBInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstance"].type()) {
        vector<DescribeDBInstancesResponseBodyItemsDBInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstancesResponseBodyItemsDBInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstance = make_shared<vector<DescribeDBInstancesResponseBodyItemsDBInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponseBodyItems() = default;
};
class DescribeDBInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalRecordCount{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<DescribeDBInstancesResponseBodyItems> items{};

  DescribeDBInstancesResponseBody() {}

  explicit DescribeDBInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstancesResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeDBInstancesResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponseBody() = default;
};
class DescribeDBInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstancesResponseBody> body{};

  DescribeDBInstancesResponse() {}

  explicit DescribeDBInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstancesResponse() = default;
};
class DescribeDBInstanceSQLPatternsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> queryKeywords{};
  shared_ptr<string> startTime{};
  shared_ptr<string> database{};
  shared_ptr<string> user{};
  shared_ptr<string> endTime{};
  shared_ptr<string> sourceIP{};

  DescribeDBInstanceSQLPatternsRequest() {}

  explicit DescribeDBInstanceSQLPatternsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (queryKeywords) {
      res["QueryKeywords"] = boost::any(*queryKeywords);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (sourceIP) {
      res["SourceIP"] = boost::any(*sourceIP);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("QueryKeywords") != m.end() && !m["QueryKeywords"].empty()) {
      queryKeywords = make_shared<string>(boost::any_cast<string>(m["QueryKeywords"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("SourceIP") != m.end() && !m["SourceIP"].empty()) {
      sourceIP = make_shared<string>(boost::any_cast<string>(m["SourceIP"]));
    }
  }


  virtual ~DescribeDBInstanceSQLPatternsRequest() = default;
};
class DescribeDBInstanceSQLPatternsResponseBodyPatterns : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<map<string, boost::any>> values{};

  DescribeDBInstanceSQLPatternsResponseBodyPatterns() {}

  explicit DescribeDBInstanceSQLPatternsResponseBodyPatterns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Values"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      values = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeDBInstanceSQLPatternsResponseBodyPatterns() = default;
};
class DescribeDBInstanceSQLPatternsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<DescribeDBInstanceSQLPatternsResponseBodyPatterns>> patterns{};

  DescribeDBInstanceSQLPatternsResponseBody() {}

  explicit DescribeDBInstanceSQLPatternsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (patterns) {
      vector<boost::any> temp1;
      for(auto item1:*patterns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Patterns"] = boost::any(temp1);
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
    if (m.find("Patterns") != m.end() && !m["Patterns"].empty()) {
      if (typeid(vector<boost::any>) == m["Patterns"].type()) {
        vector<DescribeDBInstanceSQLPatternsResponseBodyPatterns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Patterns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDBInstanceSQLPatternsResponseBodyPatterns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        patterns = make_shared<vector<DescribeDBInstanceSQLPatternsResponseBodyPatterns>>(expect1);
      }
    }
  }


  virtual ~DescribeDBInstanceSQLPatternsResponseBody() = default;
};
class DescribeDBInstanceSQLPatternsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceSQLPatternsResponseBody> body{};

  DescribeDBInstanceSQLPatternsResponse() {}

  explicit DescribeDBInstanceSQLPatternsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceSQLPatternsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceSQLPatternsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceSQLPatternsResponse() = default;
};
class DescribeDBInstanceSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};

  DescribeDBInstanceSSLRequest() {}

  explicit DescribeDBInstanceSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeDBInstanceSSLRequest() = default;
};
class DescribeDBInstanceSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> SSLEnabled{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> certCommonName{};
  shared_ptr<string> SSLExpiredTime{};

  DescribeDBInstanceSSLResponseBody() {}

  explicit DescribeDBInstanceSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SSLEnabled) {
      res["SSLEnabled"] = boost::any(*SSLEnabled);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (certCommonName) {
      res["CertCommonName"] = boost::any(*certCommonName);
    }
    if (SSLExpiredTime) {
      res["SSLExpiredTime"] = boost::any(*SSLExpiredTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SSLEnabled") != m.end() && !m["SSLEnabled"].empty()) {
      SSLEnabled = make_shared<bool>(boost::any_cast<bool>(m["SSLEnabled"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("CertCommonName") != m.end() && !m["CertCommonName"].empty()) {
      certCommonName = make_shared<string>(boost::any_cast<string>(m["CertCommonName"]));
    }
    if (m.find("SSLExpiredTime") != m.end() && !m["SSLExpiredTime"].empty()) {
      SSLExpiredTime = make_shared<string>(boost::any_cast<string>(m["SSLExpiredTime"]));
    }
  }


  virtual ~DescribeDBInstanceSSLResponseBody() = default;
};
class DescribeDBInstanceSSLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDBInstanceSSLResponseBody> body{};

  DescribeDBInstanceSSLResponse() {}

  explicit DescribeDBInstanceSSLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDBInstanceSSLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDBInstanceSSLResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDBInstanceSSLResponse() = default;
};
class DescribeLogBackupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeLogBackupsRequest() {}

  explicit DescribeLogBackupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
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


  virtual ~DescribeLogBackupsRequest() = default;
};
class DescribeLogBackupsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> logFileSize{};
  shared_ptr<string> logTime{};
  shared_ptr<string> segmentName{};
  shared_ptr<string> logFileName{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> backupId{};

  DescribeLogBackupsResponseBodyItems() {}

  explicit DescribeLogBackupsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logFileSize) {
      res["LogFileSize"] = boost::any(*logFileSize);
    }
    if (logTime) {
      res["LogTime"] = boost::any(*logTime);
    }
    if (segmentName) {
      res["SegmentName"] = boost::any(*segmentName);
    }
    if (logFileName) {
      res["LogFileName"] = boost::any(*logFileName);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogFileSize") != m.end() && !m["LogFileSize"].empty()) {
      logFileSize = make_shared<long>(boost::any_cast<long>(m["LogFileSize"]));
    }
    if (m.find("LogTime") != m.end() && !m["LogTime"].empty()) {
      logTime = make_shared<string>(boost::any_cast<string>(m["LogTime"]));
    }
    if (m.find("SegmentName") != m.end() && !m["SegmentName"].empty()) {
      segmentName = make_shared<string>(boost::any_cast<string>(m["SegmentName"]));
    }
    if (m.find("LogFileName") != m.end() && !m["LogFileName"].empty()) {
      logFileName = make_shared<string>(boost::any_cast<string>(m["LogFileName"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
  }


  virtual ~DescribeLogBackupsResponseBodyItems() = default;
};
class DescribeLogBackupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalLogSize{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeLogBackupsResponseBodyItems>> items{};

  DescribeLogBackupsResponseBody() {}

  explicit DescribeLogBackupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalLogSize) {
      res["TotalLogSize"] = boost::any(*totalLogSize);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("TotalLogSize") != m.end() && !m["TotalLogSize"].empty()) {
      totalLogSize = make_shared<long>(boost::any_cast<long>(m["TotalLogSize"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeLogBackupsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLogBackupsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeLogBackupsResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeLogBackupsResponseBody() = default;
};
class DescribeLogBackupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeLogBackupsResponseBody> body{};

  DescribeLogBackupsResponse() {}

  explicit DescribeLogBackupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLogBackupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogBackupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogBackupsResponse() = default;
};
class DescribeModifyParameterLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeModifyParameterLogRequest() {}

  explicit DescribeModifyParameterLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~DescribeModifyParameterLogRequest() = default;
};
class DescribeModifyParameterLogResponseBodyChangelogs : public Darabonba::Model {
public:
  shared_ptr<string> parameterValueAfter{};
  shared_ptr<string> parameterValueBefore{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValid{};
  shared_ptr<string> effectTime{};

  DescribeModifyParameterLogResponseBodyChangelogs() {}

  explicit DescribeModifyParameterLogResponseBodyChangelogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameterValueAfter) {
      res["ParameterValueAfter"] = boost::any(*parameterValueAfter);
    }
    if (parameterValueBefore) {
      res["ParameterValueBefore"] = boost::any(*parameterValueBefore);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValid) {
      res["ParameterValid"] = boost::any(*parameterValid);
    }
    if (effectTime) {
      res["EffectTime"] = boost::any(*effectTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParameterValueAfter") != m.end() && !m["ParameterValueAfter"].empty()) {
      parameterValueAfter = make_shared<string>(boost::any_cast<string>(m["ParameterValueAfter"]));
    }
    if (m.find("ParameterValueBefore") != m.end() && !m["ParameterValueBefore"].empty()) {
      parameterValueBefore = make_shared<string>(boost::any_cast<string>(m["ParameterValueBefore"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValid") != m.end() && !m["ParameterValid"].empty()) {
      parameterValid = make_shared<string>(boost::any_cast<string>(m["ParameterValid"]));
    }
    if (m.find("EffectTime") != m.end() && !m["EffectTime"].empty()) {
      effectTime = make_shared<string>(boost::any_cast<string>(m["EffectTime"]));
    }
  }


  virtual ~DescribeModifyParameterLogResponseBodyChangelogs() = default;
};
class DescribeModifyParameterLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeModifyParameterLogResponseBodyChangelogs>> changelogs{};

  DescribeModifyParameterLogResponseBody() {}

  explicit DescribeModifyParameterLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (changelogs) {
      vector<boost::any> temp1;
      for(auto item1:*changelogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Changelogs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Changelogs") != m.end() && !m["Changelogs"].empty()) {
      if (typeid(vector<boost::any>) == m["Changelogs"].type()) {
        vector<DescribeModifyParameterLogResponseBodyChangelogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Changelogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeModifyParameterLogResponseBodyChangelogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changelogs = make_shared<vector<DescribeModifyParameterLogResponseBodyChangelogs>>(expect1);
      }
    }
  }


  virtual ~DescribeModifyParameterLogResponseBody() = default;
};
class DescribeModifyParameterLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeModifyParameterLogResponseBody> body{};

  DescribeModifyParameterLogResponse() {}

  explicit DescribeModifyParameterLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeModifyParameterLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeModifyParameterLogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeModifyParameterLogResponse() = default;
};
class DescribeParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};

  DescribeParametersRequest() {}

  explicit DescribeParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeParametersRequest() = default;
};
class DescribeParametersResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> isChangeableConfig{};
  shared_ptr<string> forceRestartInstance{};
  shared_ptr<string> optionalRange{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> parameterValue{};
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> currentValue{};

  DescribeParametersResponseBodyParameters() {}

  explicit DescribeParametersResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isChangeableConfig) {
      res["IsChangeableConfig"] = boost::any(*isChangeableConfig);
    }
    if (forceRestartInstance) {
      res["ForceRestartInstance"] = boost::any(*forceRestartInstance);
    }
    if (optionalRange) {
      res["OptionalRange"] = boost::any(*optionalRange);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (parameterValue) {
      res["ParameterValue"] = boost::any(*parameterValue);
    }
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    if (currentValue) {
      res["CurrentValue"] = boost::any(*currentValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsChangeableConfig") != m.end() && !m["IsChangeableConfig"].empty()) {
      isChangeableConfig = make_shared<string>(boost::any_cast<string>(m["IsChangeableConfig"]));
    }
    if (m.find("ForceRestartInstance") != m.end() && !m["ForceRestartInstance"].empty()) {
      forceRestartInstance = make_shared<string>(boost::any_cast<string>(m["ForceRestartInstance"]));
    }
    if (m.find("OptionalRange") != m.end() && !m["OptionalRange"].empty()) {
      optionalRange = make_shared<string>(boost::any_cast<string>(m["OptionalRange"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ParameterValue") != m.end() && !m["ParameterValue"].empty()) {
      parameterValue = make_shared<string>(boost::any_cast<string>(m["ParameterValue"]));
    }
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
    if (m.find("CurrentValue") != m.end() && !m["CurrentValue"].empty()) {
      currentValue = make_shared<string>(boost::any_cast<string>(m["CurrentValue"]));
    }
  }


  virtual ~DescribeParametersResponseBodyParameters() = default;
};
class DescribeParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeParametersResponseBodyParameters>> parameters{};

  DescribeParametersResponseBody() {}

  explicit DescribeParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<DescribeParametersResponseBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeParametersResponseBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<DescribeParametersResponseBodyParameters>>(expect1);
      }
    }
  }


  virtual ~DescribeParametersResponseBody() = default;
};
class DescribeParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeParametersResponseBody> body{};

  DescribeParametersResponse() {}

  explicit DescribeParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeParametersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeParametersResponse() = default;
};
class DescribeRdsVpcsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeRdsVpcsRequest() {}

  explicit DescribeRdsVpcsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRdsVpcsRequest() = default;
};
class DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> izNo{};
  shared_ptr<string> vSwitchName{};

  DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs() {}

  explicit DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (izNo) {
      res["IzNo"] = boost::any(*izNo);
    }
    if (vSwitchName) {
      res["VSwitchName"] = boost::any(*vSwitchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("IzNo") != m.end() && !m["IzNo"].empty()) {
      izNo = make_shared<string>(boost::any_cast<string>(m["IzNo"]));
    }
    if (m.find("VSwitchName") != m.end() && !m["VSwitchName"].empty()) {
      vSwitchName = make_shared<string>(boost::any_cast<string>(m["VSwitchName"]));
    }
  }


  virtual ~DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs() = default;
};
class DescribeRdsVpcsResponseBodyVpcsVpc : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> vpcName{};
  shared_ptr<string> vpcId{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> aliUid{};
  shared_ptr<vector<DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs>> vSwitchs{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> bid{};

  DescribeRdsVpcsResponseBodyVpcsVpc() {}

  explicit DescribeRdsVpcsResponseBodyVpcsVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (vSwitchs) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitchs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitchs"] = boost::any(temp1);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("VSwitchs") != m.end() && !m["VSwitchs"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitchs"].type()) {
        vector<DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitchs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitchs = make_shared<vector<DescribeRdsVpcsResponseBodyVpcsVpcVSwitchs>>(expect1);
      }
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
  }


  virtual ~DescribeRdsVpcsResponseBodyVpcsVpc() = default;
};
class DescribeRdsVpcsResponseBodyVpcs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRdsVpcsResponseBodyVpcsVpc>> vpc{};

  DescribeRdsVpcsResponseBodyVpcs() {}

  explicit DescribeRdsVpcsResponseBodyVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpc) {
      vector<boost::any> temp1;
      for(auto item1:*vpc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vpc"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vpc") != m.end() && !m["Vpc"].empty()) {
      if (typeid(vector<boost::any>) == m["Vpc"].type()) {
        vector<DescribeRdsVpcsResponseBodyVpcsVpc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vpc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRdsVpcsResponseBodyVpcsVpc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpc = make_shared<vector<DescribeRdsVpcsResponseBodyVpcsVpc>>(expect1);
      }
    }
  }


  virtual ~DescribeRdsVpcsResponseBodyVpcs() = default;
};
class DescribeRdsVpcsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRdsVpcsResponseBodyVpcs> vpcs{};
  shared_ptr<string> requestId{};

  DescribeRdsVpcsResponseBody() {}

  explicit DescribeRdsVpcsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcs) {
      res["Vpcs"] = vpcs ? boost::any(vpcs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vpcs") != m.end() && !m["Vpcs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vpcs"].type()) {
        DescribeRdsVpcsResponseBodyVpcs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vpcs"]));
        vpcs = make_shared<DescribeRdsVpcsResponseBodyVpcs>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRdsVpcsResponseBody() = default;
};
class DescribeRdsVpcsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRdsVpcsResponseBody> body{};

  DescribeRdsVpcsResponse() {}

  explicit DescribeRdsVpcsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRdsVpcsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRdsVpcsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRdsVpcsResponse() = default;
};
class DescribeRdsVSwitchsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  DescribeRdsVSwitchsRequest() {}

  explicit DescribeRdsVSwitchsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRdsVSwitchsRequest() = default;
};
class DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> aliUid{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> bid{};
  shared_ptr<string> izNo{};
  shared_ptr<string> vSwitchName{};

  DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch() {}

  explicit DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (izNo) {
      res["IzNo"] = boost::any(*izNo);
    }
    if (vSwitchName) {
      res["VSwitchName"] = boost::any(*vSwitchName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("IzNo") != m.end() && !m["IzNo"].empty()) {
      izNo = make_shared<string>(boost::any_cast<string>(m["IzNo"]));
    }
    if (m.find("VSwitchName") != m.end() && !m["VSwitchName"].empty()) {
      vSwitchName = make_shared<string>(boost::any_cast<string>(m["VSwitchName"]));
    }
  }


  virtual ~DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch() = default;
};
class DescribeRdsVSwitchsResponseBodyVSwitches : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch>> vSwitch{};

  DescribeRdsVSwitchsResponseBodyVSwitches() {}

  explicit DescribeRdsVSwitchsResponseBodyVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitch) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitch){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitch"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitch") != m.end() && !m["VSwitch"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitch"].type()) {
        vector<DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitch"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitch = make_shared<vector<DescribeRdsVSwitchsResponseBodyVSwitchesVSwitch>>(expect1);
      }
    }
  }


  virtual ~DescribeRdsVSwitchsResponseBodyVSwitches() = default;
};
class DescribeRdsVSwitchsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRdsVSwitchsResponseBodyVSwitches> vSwitches{};

  DescribeRdsVSwitchsResponseBody() {}

  explicit DescribeRdsVSwitchsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vSwitches) {
      res["VSwitches"] = vSwitches ? boost::any(vSwitches->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(map<string, boost::any>) == m["VSwitches"].type()) {
        DescribeRdsVSwitchsResponseBodyVSwitches model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VSwitches"]));
        vSwitches = make_shared<DescribeRdsVSwitchsResponseBodyVSwitches>(model1);
      }
    }
  }


  virtual ~DescribeRdsVSwitchsResponseBody() = default;
};
class DescribeRdsVSwitchsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRdsVSwitchsResponseBody> body{};

  DescribeRdsVSwitchsResponse() {}

  explicit DescribeRdsVSwitchsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRdsVSwitchsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRdsVSwitchsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRdsVSwitchsResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> region{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegionZonesZone : public Darabonba::Model {
public:
  shared_ptr<string> zoneId{};
  shared_ptr<bool> vpcEnabled{};

  DescribeRegionsResponseBodyRegionsRegionZonesZone() {}

  explicit DescribeRegionsResponseBodyRegionsRegionZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (vpcEnabled) {
      res["VpcEnabled"] = boost::any(*vpcEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<string> regionId{};
  shared_ptr<DescribeRegionsResponseBodyRegionsRegionZones> zones{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeRegionsResponseBodyRegionsRegionZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeRegionsResponseBodyRegionsRegionZones>(model1);
      }
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
class DescribeResourceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};

  DescribeResourceUsageRequest() {}

  explicit DescribeResourceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeResourceUsageRequest() = default;
};
class DescribeResourceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> diskUsed{};
  shared_ptr<long> dataSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> backupSize{};
  shared_ptr<long> logSize{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engine{};

  DescribeResourceUsageResponseBody() {}

  explicit DescribeResourceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskUsed) {
      res["DiskUsed"] = boost::any(*diskUsed);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (backupSize) {
      res["BackupSize"] = boost::any(*backupSize);
    }
    if (logSize) {
      res["LogSize"] = boost::any(*logSize);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskUsed") != m.end() && !m["DiskUsed"].empty()) {
      diskUsed = make_shared<long>(boost::any_cast<long>(m["DiskUsed"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BackupSize") != m.end() && !m["BackupSize"].empty()) {
      backupSize = make_shared<long>(boost::any_cast<long>(m["BackupSize"]));
    }
    if (m.find("LogSize") != m.end() && !m["LogSize"].empty()) {
      logSize = make_shared<long>(boost::any_cast<long>(m["LogSize"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
  }


  virtual ~DescribeResourceUsageResponseBody() = default;
};
class DescribeResourceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeResourceUsageResponseBody> body{};

  DescribeResourceUsageResponse() {}

  explicit DescribeResourceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResourceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourceUsageResponse() = default;
};
class DescribeSlowLogRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> SQLId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> DBName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeSlowLogRecordsRequest() {}

  explicit DescribeSlowLogRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (SQLId) {
      res["SQLId"] = boost::any(*SQLId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("SQLId") != m.end() && !m["SQLId"].empty()) {
      SQLId = make_shared<long>(boost::any_cast<long>(m["SQLId"]));
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
  }


  virtual ~DescribeSlowLogRecordsRequest() = default;
};
class DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord : public Darabonba::Model {
public:
  shared_ptr<string> executionStartTime{};
  shared_ptr<string> hostAddress{};
  shared_ptr<long> queryTimes{};
  shared_ptr<string> SQLText{};
  shared_ptr<long> returnRowCounts{};
  shared_ptr<long> parseRowCounts{};
  shared_ptr<string> DBName{};
  shared_ptr<long> lockTimes{};

  DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord() {}

  explicit DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionStartTime) {
      res["ExecutionStartTime"] = boost::any(*executionStartTime);
    }
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (queryTimes) {
      res["QueryTimes"] = boost::any(*queryTimes);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    if (returnRowCounts) {
      res["ReturnRowCounts"] = boost::any(*returnRowCounts);
    }
    if (parseRowCounts) {
      res["ParseRowCounts"] = boost::any(*parseRowCounts);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (lockTimes) {
      res["LockTimes"] = boost::any(*lockTimes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionStartTime") != m.end() && !m["ExecutionStartTime"].empty()) {
      executionStartTime = make_shared<string>(boost::any_cast<string>(m["ExecutionStartTime"]));
    }
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("QueryTimes") != m.end() && !m["QueryTimes"].empty()) {
      queryTimes = make_shared<long>(boost::any_cast<long>(m["QueryTimes"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
    if (m.find("ReturnRowCounts") != m.end() && !m["ReturnRowCounts"].empty()) {
      returnRowCounts = make_shared<long>(boost::any_cast<long>(m["ReturnRowCounts"]));
    }
    if (m.find("ParseRowCounts") != m.end() && !m["ParseRowCounts"].empty()) {
      parseRowCounts = make_shared<long>(boost::any_cast<long>(m["ParseRowCounts"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("LockTimes") != m.end() && !m["LockTimes"].empty()) {
      lockTimes = make_shared<long>(boost::any_cast<long>(m["LockTimes"]));
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord() = default;
};
class DescribeSlowLogRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord>> SQLSlowRecord{};

  DescribeSlowLogRecordsResponseBodyItems() {}

  explicit DescribeSlowLogRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SQLSlowRecord) {
      vector<boost::any> temp1;
      for(auto item1:*SQLSlowRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SQLSlowRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SQLSlowRecord") != m.end() && !m["SQLSlowRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["SQLSlowRecord"].type()) {
        vector<DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SQLSlowRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        SQLSlowRecord = make_shared<vector<DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeSlowLogRecordsResponseBodyItems() = default;
};
class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<string> engine{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<long> totalRecordCount{};
  shared_ptr<DescribeSlowLogRecordsResponseBodyItems> items{};

  DescribeSlowLogRecordsResponseBody() {}

  explicit DescribeSlowLogRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
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
class DescribeSlowSQLLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> queryKeywords{};
  shared_ptr<string> startTime{};
  shared_ptr<string> database{};
  shared_ptr<string> user{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> sourceIP{};
  shared_ptr<string> executeState{};
  shared_ptr<string> operationClass{};
  shared_ptr<string> operationType{};
  shared_ptr<string> minExecuteCost{};
  shared_ptr<string> maxExecuteCost{};

  DescribeSlowSQLLogsRequest() {}

  explicit DescribeSlowSQLLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (queryKeywords) {
      res["QueryKeywords"] = boost::any(*queryKeywords);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (user) {
      res["User"] = boost::any(*user);
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
    if (sourceIP) {
      res["SourceIP"] = boost::any(*sourceIP);
    }
    if (executeState) {
      res["ExecuteState"] = boost::any(*executeState);
    }
    if (operationClass) {
      res["OperationClass"] = boost::any(*operationClass);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (minExecuteCost) {
      res["MinExecuteCost"] = boost::any(*minExecuteCost);
    }
    if (maxExecuteCost) {
      res["MaxExecuteCost"] = boost::any(*maxExecuteCost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("QueryKeywords") != m.end() && !m["QueryKeywords"].empty()) {
      queryKeywords = make_shared<string>(boost::any_cast<string>(m["QueryKeywords"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
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
    if (m.find("SourceIP") != m.end() && !m["SourceIP"].empty()) {
      sourceIP = make_shared<string>(boost::any_cast<string>(m["SourceIP"]));
    }
    if (m.find("ExecuteState") != m.end() && !m["ExecuteState"].empty()) {
      executeState = make_shared<string>(boost::any_cast<string>(m["ExecuteState"]));
    }
    if (m.find("OperationClass") != m.end() && !m["OperationClass"].empty()) {
      operationClass = make_shared<string>(boost::any_cast<string>(m["OperationClass"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("MinExecuteCost") != m.end() && !m["MinExecuteCost"].empty()) {
      minExecuteCost = make_shared<string>(boost::any_cast<string>(m["MinExecuteCost"]));
    }
    if (m.find("MaxExecuteCost") != m.end() && !m["MaxExecuteCost"].empty()) {
      maxExecuteCost = make_shared<string>(boost::any_cast<string>(m["MaxExecuteCost"]));
    }
  }


  virtual ~DescribeSlowSQLLogsRequest() = default;
};
class DescribeSlowSQLLogsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> operationClass{};
  shared_ptr<string> executeState{};
  shared_ptr<double> executeCost{};
  shared_ptr<string> SQLText{};
  shared_ptr<long> sourcePort{};
  shared_ptr<string> DBRole{};
  shared_ptr<string> operationType{};
  shared_ptr<string> sourceIP{};
  shared_ptr<string> SQLPlan{};
  shared_ptr<long> returnRowCounts{};
  shared_ptr<string> DBName{};
  shared_ptr<string> operationExecuteTime{};
  shared_ptr<long> scanRowCounts{};
  shared_ptr<string> accountName{};
  shared_ptr<string> queryId{};

  DescribeSlowSQLLogsResponseBodyItems() {}

  explicit DescribeSlowSQLLogsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationClass) {
      res["OperationClass"] = boost::any(*operationClass);
    }
    if (executeState) {
      res["ExecuteState"] = boost::any(*executeState);
    }
    if (executeCost) {
      res["ExecuteCost"] = boost::any(*executeCost);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    if (sourcePort) {
      res["SourcePort"] = boost::any(*sourcePort);
    }
    if (DBRole) {
      res["DBRole"] = boost::any(*DBRole);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (sourceIP) {
      res["SourceIP"] = boost::any(*sourceIP);
    }
    if (SQLPlan) {
      res["SQLPlan"] = boost::any(*SQLPlan);
    }
    if (returnRowCounts) {
      res["ReturnRowCounts"] = boost::any(*returnRowCounts);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (operationExecuteTime) {
      res["OperationExecuteTime"] = boost::any(*operationExecuteTime);
    }
    if (scanRowCounts) {
      res["ScanRowCounts"] = boost::any(*scanRowCounts);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationClass") != m.end() && !m["OperationClass"].empty()) {
      operationClass = make_shared<string>(boost::any_cast<string>(m["OperationClass"]));
    }
    if (m.find("ExecuteState") != m.end() && !m["ExecuteState"].empty()) {
      executeState = make_shared<string>(boost::any_cast<string>(m["ExecuteState"]));
    }
    if (m.find("ExecuteCost") != m.end() && !m["ExecuteCost"].empty()) {
      executeCost = make_shared<double>(boost::any_cast<double>(m["ExecuteCost"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
    if (m.find("SourcePort") != m.end() && !m["SourcePort"].empty()) {
      sourcePort = make_shared<long>(boost::any_cast<long>(m["SourcePort"]));
    }
    if (m.find("DBRole") != m.end() && !m["DBRole"].empty()) {
      DBRole = make_shared<string>(boost::any_cast<string>(m["DBRole"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("SourceIP") != m.end() && !m["SourceIP"].empty()) {
      sourceIP = make_shared<string>(boost::any_cast<string>(m["SourceIP"]));
    }
    if (m.find("SQLPlan") != m.end() && !m["SQLPlan"].empty()) {
      SQLPlan = make_shared<string>(boost::any_cast<string>(m["SQLPlan"]));
    }
    if (m.find("ReturnRowCounts") != m.end() && !m["ReturnRowCounts"].empty()) {
      returnRowCounts = make_shared<long>(boost::any_cast<long>(m["ReturnRowCounts"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("OperationExecuteTime") != m.end() && !m["OperationExecuteTime"].empty()) {
      operationExecuteTime = make_shared<string>(boost::any_cast<string>(m["OperationExecuteTime"]));
    }
    if (m.find("ScanRowCounts") != m.end() && !m["ScanRowCounts"].empty()) {
      scanRowCounts = make_shared<long>(boost::any_cast<long>(m["ScanRowCounts"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
  }


  virtual ~DescribeSlowSQLLogsResponseBodyItems() = default;
};
class DescribeSlowSQLLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<DescribeSlowSQLLogsResponseBodyItems>> items{};

  DescribeSlowSQLLogsResponseBody() {}

  explicit DescribeSlowSQLLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeSlowSQLLogsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSlowSQLLogsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeSlowSQLLogsResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeSlowSQLLogsResponseBody() = default;
};
class DescribeSlowSQLLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSlowSQLLogsResponseBody> body{};

  DescribeSlowSQLLogsResponse() {}

  explicit DescribeSlowSQLLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSlowSQLLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSlowSQLLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSlowSQLLogsResponse() = default;
};
class DescribeSpecificationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> storageType{};
  shared_ptr<long> cpuCores{};
  shared_ptr<long> totalNodeNum{};

  DescribeSpecificationRequest() {}

  explicit DescribeSpecificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (cpuCores) {
      res["CpuCores"] = boost::any(*cpuCores);
    }
    if (totalNodeNum) {
      res["TotalNodeNum"] = boost::any(*totalNodeNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("CpuCores") != m.end() && !m["CpuCores"].empty()) {
      cpuCores = make_shared<long>(boost::any_cast<long>(m["CpuCores"]));
    }
    if (m.find("TotalNodeNum") != m.end() && !m["TotalNodeNum"].empty()) {
      totalNodeNum = make_shared<long>(boost::any_cast<long>(m["TotalNodeNum"]));
    }
  }


  virtual ~DescribeSpecificationRequest() = default;
};
class DescribeSpecificationResponseBodyDBInstanceClass : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> text{};

  DescribeSpecificationResponseBodyDBInstanceClass() {}

  explicit DescribeSpecificationResponseBodyDBInstanceClass(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~DescribeSpecificationResponseBodyDBInstanceClass() = default;
};
class DescribeSpecificationResponseBodyDBInstanceGroupCount : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> text{};

  DescribeSpecificationResponseBodyDBInstanceGroupCount() {}

  explicit DescribeSpecificationResponseBodyDBInstanceGroupCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~DescribeSpecificationResponseBodyDBInstanceGroupCount() = default;
};
class DescribeSpecificationResponseBodyStorageNotice : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> text{};

  DescribeSpecificationResponseBodyStorageNotice() {}

  explicit DescribeSpecificationResponseBodyStorageNotice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~DescribeSpecificationResponseBodyStorageNotice() = default;
};
class DescribeSpecificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSpecificationResponseBodyDBInstanceClass>> DBInstanceClass{};
  shared_ptr<vector<DescribeSpecificationResponseBodyDBInstanceGroupCount>> DBInstanceGroupCount{};
  shared_ptr<vector<DescribeSpecificationResponseBodyStorageNotice>> storageNotice{};

  DescribeSpecificationResponseBody() {}

  explicit DescribeSpecificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (DBInstanceClass) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceClass){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceClass"] = boost::any(temp1);
    }
    if (DBInstanceGroupCount) {
      vector<boost::any> temp1;
      for(auto item1:*DBInstanceGroupCount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DBInstanceGroupCount"] = boost::any(temp1);
    }
    if (storageNotice) {
      vector<boost::any> temp1;
      for(auto item1:*storageNotice){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StorageNotice"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceClass"].type()) {
        vector<DescribeSpecificationResponseBodyDBInstanceClass> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceClass"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSpecificationResponseBodyDBInstanceClass model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceClass = make_shared<vector<DescribeSpecificationResponseBodyDBInstanceClass>>(expect1);
      }
    }
    if (m.find("DBInstanceGroupCount") != m.end() && !m["DBInstanceGroupCount"].empty()) {
      if (typeid(vector<boost::any>) == m["DBInstanceGroupCount"].type()) {
        vector<DescribeSpecificationResponseBodyDBInstanceGroupCount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DBInstanceGroupCount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSpecificationResponseBodyDBInstanceGroupCount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DBInstanceGroupCount = make_shared<vector<DescribeSpecificationResponseBodyDBInstanceGroupCount>>(expect1);
      }
    }
    if (m.find("StorageNotice") != m.end() && !m["StorageNotice"].empty()) {
      if (typeid(vector<boost::any>) == m["StorageNotice"].type()) {
        vector<DescribeSpecificationResponseBodyStorageNotice> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StorageNotice"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSpecificationResponseBodyStorageNotice model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        storageNotice = make_shared<vector<DescribeSpecificationResponseBodyStorageNotice>>(expect1);
      }
    }
  }


  virtual ~DescribeSpecificationResponseBody() = default;
};
class DescribeSpecificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSpecificationResponseBody> body{};

  DescribeSpecificationResponse() {}

  explicit DescribeSpecificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSpecificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSpecificationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSpecificationResponse() = default;
};
class DescribeSQLCollectorPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};

  DescribeSQLCollectorPolicyRequest() {}

  explicit DescribeSQLCollectorPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeSQLCollectorPolicyRequest() = default;
};
class DescribeSQLCollectorPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> SQLCollectorStatus{};
  shared_ptr<string> requestId{};

  DescribeSQLCollectorPolicyResponseBody() {}

  explicit DescribeSQLCollectorPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SQLCollectorStatus) {
      res["SQLCollectorStatus"] = boost::any(*SQLCollectorStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SQLCollectorStatus") != m.end() && !m["SQLCollectorStatus"].empty()) {
      SQLCollectorStatus = make_shared<string>(boost::any_cast<string>(m["SQLCollectorStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSQLCollectorPolicyResponseBody() = default;
};
class DescribeSQLCollectorPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSQLCollectorPolicyResponseBody> body{};

  DescribeSQLCollectorPolicyResponse() {}

  explicit DescribeSQLCollectorPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSQLCollectorPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSQLCollectorPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSQLCollectorPolicyResponse() = default;
};
class DescribeSQLLogByQueryIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> queryId{};

  DescribeSQLLogByQueryIdRequest() {}

  explicit DescribeSQLLogByQueryIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
  }


  virtual ~DescribeSQLLogByQueryIdRequest() = default;
};
class DescribeSQLLogByQueryIdResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> operationClass{};
  shared_ptr<string> executeState{};
  shared_ptr<double> executeCost{};
  shared_ptr<string> SQLText{};
  shared_ptr<long> sourcePort{};
  shared_ptr<string> DBRole{};
  shared_ptr<string> operationType{};
  shared_ptr<string> sourceIP{};
  shared_ptr<string> SQLPlan{};
  shared_ptr<long> returnRowCounts{};
  shared_ptr<string> DBName{};
  shared_ptr<string> operationExecuteTime{};
  shared_ptr<long> scanRowCounts{};
  shared_ptr<string> accountName{};
  shared_ptr<string> queryId{};
  shared_ptr<vector<string>> sliceIds{};

  DescribeSQLLogByQueryIdResponseBodyItems() {}

  explicit DescribeSQLLogByQueryIdResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationClass) {
      res["OperationClass"] = boost::any(*operationClass);
    }
    if (executeState) {
      res["ExecuteState"] = boost::any(*executeState);
    }
    if (executeCost) {
      res["ExecuteCost"] = boost::any(*executeCost);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    if (sourcePort) {
      res["SourcePort"] = boost::any(*sourcePort);
    }
    if (DBRole) {
      res["DBRole"] = boost::any(*DBRole);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (sourceIP) {
      res["SourceIP"] = boost::any(*sourceIP);
    }
    if (SQLPlan) {
      res["SQLPlan"] = boost::any(*SQLPlan);
    }
    if (returnRowCounts) {
      res["ReturnRowCounts"] = boost::any(*returnRowCounts);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (operationExecuteTime) {
      res["OperationExecuteTime"] = boost::any(*operationExecuteTime);
    }
    if (scanRowCounts) {
      res["ScanRowCounts"] = boost::any(*scanRowCounts);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (sliceIds) {
      res["SliceIds"] = boost::any(*sliceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationClass") != m.end() && !m["OperationClass"].empty()) {
      operationClass = make_shared<string>(boost::any_cast<string>(m["OperationClass"]));
    }
    if (m.find("ExecuteState") != m.end() && !m["ExecuteState"].empty()) {
      executeState = make_shared<string>(boost::any_cast<string>(m["ExecuteState"]));
    }
    if (m.find("ExecuteCost") != m.end() && !m["ExecuteCost"].empty()) {
      executeCost = make_shared<double>(boost::any_cast<double>(m["ExecuteCost"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
    if (m.find("SourcePort") != m.end() && !m["SourcePort"].empty()) {
      sourcePort = make_shared<long>(boost::any_cast<long>(m["SourcePort"]));
    }
    if (m.find("DBRole") != m.end() && !m["DBRole"].empty()) {
      DBRole = make_shared<string>(boost::any_cast<string>(m["DBRole"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("SourceIP") != m.end() && !m["SourceIP"].empty()) {
      sourceIP = make_shared<string>(boost::any_cast<string>(m["SourceIP"]));
    }
    if (m.find("SQLPlan") != m.end() && !m["SQLPlan"].empty()) {
      SQLPlan = make_shared<string>(boost::any_cast<string>(m["SQLPlan"]));
    }
    if (m.find("ReturnRowCounts") != m.end() && !m["ReturnRowCounts"].empty()) {
      returnRowCounts = make_shared<long>(boost::any_cast<long>(m["ReturnRowCounts"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("OperationExecuteTime") != m.end() && !m["OperationExecuteTime"].empty()) {
      operationExecuteTime = make_shared<string>(boost::any_cast<string>(m["OperationExecuteTime"]));
    }
    if (m.find("ScanRowCounts") != m.end() && !m["ScanRowCounts"].empty()) {
      scanRowCounts = make_shared<long>(boost::any_cast<long>(m["ScanRowCounts"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("SliceIds") != m.end() && !m["SliceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SliceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SliceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sliceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeSQLLogByQueryIdResponseBodyItems() = default;
};
class DescribeSQLLogByQueryIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSQLLogByQueryIdResponseBodyItems>> items{};

  DescribeSQLLogByQueryIdResponseBody() {}

  explicit DescribeSQLLogByQueryIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeSQLLogByQueryIdResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLLogByQueryIdResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeSQLLogByQueryIdResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeSQLLogByQueryIdResponseBody() = default;
};
class DescribeSQLLogByQueryIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSQLLogByQueryIdResponseBody> body{};

  DescribeSQLLogByQueryIdResponse() {}

  explicit DescribeSQLLogByQueryIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSQLLogByQueryIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSQLLogByQueryIdResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSQLLogByQueryIdResponse() = default;
};
class DescribeSQLLogCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> queryKeywords{};
  shared_ptr<string> startTime{};
  shared_ptr<string> database{};
  shared_ptr<string> user{};
  shared_ptr<string> endTime{};
  shared_ptr<string> executeCost{};
  shared_ptr<string> sourceIP{};
  shared_ptr<string> executeState{};
  shared_ptr<string> operationClass{};
  shared_ptr<string> operationType{};
  shared_ptr<string> maxExecuteCost{};
  shared_ptr<string> minExecuteCost{};

  DescribeSQLLogCountRequest() {}

  explicit DescribeSQLLogCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (queryKeywords) {
      res["QueryKeywords"] = boost::any(*queryKeywords);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executeCost) {
      res["ExecuteCost"] = boost::any(*executeCost);
    }
    if (sourceIP) {
      res["SourceIP"] = boost::any(*sourceIP);
    }
    if (executeState) {
      res["ExecuteState"] = boost::any(*executeState);
    }
    if (operationClass) {
      res["OperationClass"] = boost::any(*operationClass);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (maxExecuteCost) {
      res["MaxExecuteCost"] = boost::any(*maxExecuteCost);
    }
    if (minExecuteCost) {
      res["MinExecuteCost"] = boost::any(*minExecuteCost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("QueryKeywords") != m.end() && !m["QueryKeywords"].empty()) {
      queryKeywords = make_shared<string>(boost::any_cast<string>(m["QueryKeywords"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExecuteCost") != m.end() && !m["ExecuteCost"].empty()) {
      executeCost = make_shared<string>(boost::any_cast<string>(m["ExecuteCost"]));
    }
    if (m.find("SourceIP") != m.end() && !m["SourceIP"].empty()) {
      sourceIP = make_shared<string>(boost::any_cast<string>(m["SourceIP"]));
    }
    if (m.find("ExecuteState") != m.end() && !m["ExecuteState"].empty()) {
      executeState = make_shared<string>(boost::any_cast<string>(m["ExecuteState"]));
    }
    if (m.find("OperationClass") != m.end() && !m["OperationClass"].empty()) {
      operationClass = make_shared<string>(boost::any_cast<string>(m["OperationClass"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("MaxExecuteCost") != m.end() && !m["MaxExecuteCost"].empty()) {
      maxExecuteCost = make_shared<string>(boost::any_cast<string>(m["MaxExecuteCost"]));
    }
    if (m.find("MinExecuteCost") != m.end() && !m["MinExecuteCost"].empty()) {
      minExecuteCost = make_shared<string>(boost::any_cast<string>(m["MinExecuteCost"]));
    }
  }


  virtual ~DescribeSQLLogCountRequest() = default;
};
class DescribeSQLLogCountResponseBodyItemsSeriesValues : public Darabonba::Model {
public:
  shared_ptr<vector<string>> point{};

  DescribeSQLLogCountResponseBodyItemsSeriesValues() {}

  explicit DescribeSQLLogCountResponseBodyItemsSeriesValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (point) {
      res["Point"] = boost::any(*point);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Point") != m.end() && !m["Point"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Point"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Point"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      point = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeSQLLogCountResponseBodyItemsSeriesValues() = default;
};
class DescribeSQLLogCountResponseBodyItemsSeries : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSQLLogCountResponseBodyItemsSeriesValues>> values{};

  DescribeSQLLogCountResponseBodyItemsSeries() {}

  explicit DescribeSQLLogCountResponseBodyItemsSeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<DescribeSQLLogCountResponseBodyItemsSeriesValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Values"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLLogCountResponseBodyItemsSeriesValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        values = make_shared<vector<DescribeSQLLogCountResponseBodyItemsSeriesValues>>(expect1);
      }
    }
  }


  virtual ~DescribeSQLLogCountResponseBodyItemsSeries() = default;
};
class DescribeSQLLogCountResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSQLLogCountResponseBodyItemsSeries>> series{};
  shared_ptr<string> name{};

  DescribeSQLLogCountResponseBodyItems() {}

  explicit DescribeSQLLogCountResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (series) {
      vector<boost::any> temp1;
      for(auto item1:*series){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Series"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(vector<boost::any>) == m["Series"].type()) {
        vector<DescribeSQLLogCountResponseBodyItemsSeries> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Series"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLLogCountResponseBodyItemsSeries model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        series = make_shared<vector<DescribeSQLLogCountResponseBodyItemsSeries>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeSQLLogCountResponseBodyItems() = default;
};
class DescribeSQLLogCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> DBClusterId{};
  shared_ptr<vector<DescribeSQLLogCountResponseBodyItems>> items{};

  DescribeSQLLogCountResponseBody() {}

  explicit DescribeSQLLogCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeSQLLogCountResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLLogCountResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeSQLLogCountResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeSQLLogCountResponseBody() = default;
};
class DescribeSQLLogCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSQLLogCountResponseBody> body{};

  DescribeSQLLogCountResponse() {}

  explicit DescribeSQLLogCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSQLLogCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSQLLogCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSQLLogCountResponse() = default;
};
class DescribeSQLLogFilesRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeSQLLogFilesRequest() {}

  explicit DescribeSQLLogFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~DescribeSQLLogFilesRequest() = default;
};
class DescribeSQLLogFilesResponseBodyItemsLogFile : public Darabonba::Model {
public:
  shared_ptr<string> fileID{};
  shared_ptr<string> logStartTime{};
  shared_ptr<string> logSize{};
  shared_ptr<string> logDownloadURL{};
  shared_ptr<string> logEndTime{};
  shared_ptr<string> logStatus{};

  DescribeSQLLogFilesResponseBodyItemsLogFile() {}

  explicit DescribeSQLLogFilesResponseBodyItemsLogFile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileID) {
      res["FileID"] = boost::any(*fileID);
    }
    if (logStartTime) {
      res["LogStartTime"] = boost::any(*logStartTime);
    }
    if (logSize) {
      res["LogSize"] = boost::any(*logSize);
    }
    if (logDownloadURL) {
      res["LogDownloadURL"] = boost::any(*logDownloadURL);
    }
    if (logEndTime) {
      res["LogEndTime"] = boost::any(*logEndTime);
    }
    if (logStatus) {
      res["LogStatus"] = boost::any(*logStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileID") != m.end() && !m["FileID"].empty()) {
      fileID = make_shared<string>(boost::any_cast<string>(m["FileID"]));
    }
    if (m.find("LogStartTime") != m.end() && !m["LogStartTime"].empty()) {
      logStartTime = make_shared<string>(boost::any_cast<string>(m["LogStartTime"]));
    }
    if (m.find("LogSize") != m.end() && !m["LogSize"].empty()) {
      logSize = make_shared<string>(boost::any_cast<string>(m["LogSize"]));
    }
    if (m.find("LogDownloadURL") != m.end() && !m["LogDownloadURL"].empty()) {
      logDownloadURL = make_shared<string>(boost::any_cast<string>(m["LogDownloadURL"]));
    }
    if (m.find("LogEndTime") != m.end() && !m["LogEndTime"].empty()) {
      logEndTime = make_shared<string>(boost::any_cast<string>(m["LogEndTime"]));
    }
    if (m.find("LogStatus") != m.end() && !m["LogStatus"].empty()) {
      logStatus = make_shared<string>(boost::any_cast<string>(m["LogStatus"]));
    }
  }


  virtual ~DescribeSQLLogFilesResponseBodyItemsLogFile() = default;
};
class DescribeSQLLogFilesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSQLLogFilesResponseBodyItemsLogFile>> logFile{};

  DescribeSQLLogFilesResponseBodyItems() {}

  explicit DescribeSQLLogFilesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logFile) {
      vector<boost::any> temp1;
      for(auto item1:*logFile){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogFile"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogFile") != m.end() && !m["LogFile"].empty()) {
      if (typeid(vector<boost::any>) == m["LogFile"].type()) {
        vector<DescribeSQLLogFilesResponseBodyItemsLogFile> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogFile"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLLogFilesResponseBodyItemsLogFile model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logFile = make_shared<vector<DescribeSQLLogFilesResponseBodyItemsLogFile>>(expect1);
      }
    }
  }


  virtual ~DescribeSQLLogFilesResponseBodyItems() = default;
};
class DescribeSQLLogFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<long> totalRecordCount{};
  shared_ptr<DescribeSQLLogFilesResponseBodyItems> items{};

  DescribeSQLLogFilesResponseBody() {}

  explicit DescribeSQLLogFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeSQLLogFilesResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeSQLLogFilesResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeSQLLogFilesResponseBody() = default;
};
class DescribeSQLLogFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSQLLogFilesResponseBody> body{};

  DescribeSQLLogFilesResponse() {}

  explicit DescribeSQLLogFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSQLLogFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSQLLogFilesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSQLLogFilesResponse() = default;
};
class DescribeSQLLogRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> queryKeywords{};
  shared_ptr<string> startTime{};
  shared_ptr<string> database{};
  shared_ptr<string> user{};
  shared_ptr<string> form{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  DescribeSQLLogRecordsRequest() {}

  explicit DescribeSQLLogRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (queryKeywords) {
      res["QueryKeywords"] = boost::any(*queryKeywords);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    if (form) {
      res["Form"] = boost::any(*form);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("QueryKeywords") != m.end() && !m["QueryKeywords"].empty()) {
      queryKeywords = make_shared<string>(boost::any_cast<string>(m["QueryKeywords"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("Form") != m.end() && !m["Form"].empty()) {
      form = make_shared<string>(boost::any_cast<string>(m["Form"]));
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


  virtual ~DescribeSQLLogRecordsRequest() = default;
};
class DescribeSQLLogRecordsResponseBodyItemsSQLRecord : public Darabonba::Model {
public:
  shared_ptr<string> hostAddress{};
  shared_ptr<string> SQLText{};
  shared_ptr<long> returnRowCounts{};
  shared_ptr<string> DBName{};
  shared_ptr<string> executeTime{};
  shared_ptr<string> threadID{};
  shared_ptr<long> totalExecutionTimes{};
  shared_ptr<string> accountName{};

  DescribeSQLLogRecordsResponseBodyItemsSQLRecord() {}

  explicit DescribeSQLLogRecordsResponseBodyItemsSQLRecord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostAddress) {
      res["HostAddress"] = boost::any(*hostAddress);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    if (returnRowCounts) {
      res["ReturnRowCounts"] = boost::any(*returnRowCounts);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (executeTime) {
      res["ExecuteTime"] = boost::any(*executeTime);
    }
    if (threadID) {
      res["ThreadID"] = boost::any(*threadID);
    }
    if (totalExecutionTimes) {
      res["TotalExecutionTimes"] = boost::any(*totalExecutionTimes);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostAddress") != m.end() && !m["HostAddress"].empty()) {
      hostAddress = make_shared<string>(boost::any_cast<string>(m["HostAddress"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
    if (m.find("ReturnRowCounts") != m.end() && !m["ReturnRowCounts"].empty()) {
      returnRowCounts = make_shared<long>(boost::any_cast<long>(m["ReturnRowCounts"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("ExecuteTime") != m.end() && !m["ExecuteTime"].empty()) {
      executeTime = make_shared<string>(boost::any_cast<string>(m["ExecuteTime"]));
    }
    if (m.find("ThreadID") != m.end() && !m["ThreadID"].empty()) {
      threadID = make_shared<string>(boost::any_cast<string>(m["ThreadID"]));
    }
    if (m.find("TotalExecutionTimes") != m.end() && !m["TotalExecutionTimes"].empty()) {
      totalExecutionTimes = make_shared<long>(boost::any_cast<long>(m["TotalExecutionTimes"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DescribeSQLLogRecordsResponseBodyItemsSQLRecord() = default;
};
class DescribeSQLLogRecordsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSQLLogRecordsResponseBodyItemsSQLRecord>> SQLRecord{};

  DescribeSQLLogRecordsResponseBodyItems() {}

  explicit DescribeSQLLogRecordsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SQLRecord) {
      vector<boost::any> temp1;
      for(auto item1:*SQLRecord){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SQLRecord"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SQLRecord") != m.end() && !m["SQLRecord"].empty()) {
      if (typeid(vector<boost::any>) == m["SQLRecord"].type()) {
        vector<DescribeSQLLogRecordsResponseBodyItemsSQLRecord> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SQLRecord"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLLogRecordsResponseBodyItemsSQLRecord model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        SQLRecord = make_shared<vector<DescribeSQLLogRecordsResponseBodyItemsSQLRecord>>(expect1);
      }
    }
  }


  virtual ~DescribeSQLLogRecordsResponseBodyItems() = default;
};
class DescribeSQLLogRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<long> totalRecordCount{};
  shared_ptr<DescribeSQLLogRecordsResponseBodyItems> items{};

  DescribeSQLLogRecordsResponseBody() {}

  explicit DescribeSQLLogRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (totalRecordCount) {
      res["TotalRecordCount"] = boost::any(*totalRecordCount);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("TotalRecordCount") != m.end() && !m["TotalRecordCount"].empty()) {
      totalRecordCount = make_shared<long>(boost::any_cast<long>(m["TotalRecordCount"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeSQLLogRecordsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeSQLLogRecordsResponseBodyItems>(model1);
      }
    }
  }


  virtual ~DescribeSQLLogRecordsResponseBody() = default;
};
class DescribeSQLLogRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSQLLogRecordsResponseBody> body{};

  DescribeSQLLogRecordsResponse() {}

  explicit DescribeSQLLogRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSQLLogRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSQLLogRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSQLLogRecordsResponse() = default;
};
class DescribeSQLLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> queryKeywords{};
  shared_ptr<string> startTime{};
  shared_ptr<string> database{};
  shared_ptr<string> user{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> executeCost{};
  shared_ptr<string> sourceIP{};
  shared_ptr<string> executeState{};
  shared_ptr<string> operationClass{};
  shared_ptr<string> operationType{};
  shared_ptr<string> maxExecuteCost{};
  shared_ptr<string> minExecuteCost{};

  DescribeSQLLogsRequest() {}

  explicit DescribeSQLLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (queryKeywords) {
      res["QueryKeywords"] = boost::any(*queryKeywords);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (user) {
      res["User"] = boost::any(*user);
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
    if (executeCost) {
      res["ExecuteCost"] = boost::any(*executeCost);
    }
    if (sourceIP) {
      res["SourceIP"] = boost::any(*sourceIP);
    }
    if (executeState) {
      res["ExecuteState"] = boost::any(*executeState);
    }
    if (operationClass) {
      res["OperationClass"] = boost::any(*operationClass);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (maxExecuteCost) {
      res["MaxExecuteCost"] = boost::any(*maxExecuteCost);
    }
    if (minExecuteCost) {
      res["MinExecuteCost"] = boost::any(*minExecuteCost);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("QueryKeywords") != m.end() && !m["QueryKeywords"].empty()) {
      queryKeywords = make_shared<string>(boost::any_cast<string>(m["QueryKeywords"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
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
    if (m.find("ExecuteCost") != m.end() && !m["ExecuteCost"].empty()) {
      executeCost = make_shared<string>(boost::any_cast<string>(m["ExecuteCost"]));
    }
    if (m.find("SourceIP") != m.end() && !m["SourceIP"].empty()) {
      sourceIP = make_shared<string>(boost::any_cast<string>(m["SourceIP"]));
    }
    if (m.find("ExecuteState") != m.end() && !m["ExecuteState"].empty()) {
      executeState = make_shared<string>(boost::any_cast<string>(m["ExecuteState"]));
    }
    if (m.find("OperationClass") != m.end() && !m["OperationClass"].empty()) {
      operationClass = make_shared<string>(boost::any_cast<string>(m["OperationClass"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("MaxExecuteCost") != m.end() && !m["MaxExecuteCost"].empty()) {
      maxExecuteCost = make_shared<string>(boost::any_cast<string>(m["MaxExecuteCost"]));
    }
    if (m.find("MinExecuteCost") != m.end() && !m["MinExecuteCost"].empty()) {
      minExecuteCost = make_shared<string>(boost::any_cast<string>(m["MinExecuteCost"]));
    }
  }


  virtual ~DescribeSQLLogsRequest() = default;
};
class DescribeSQLLogsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> operationClass{};
  shared_ptr<string> executeState{};
  shared_ptr<double> executeCost{};
  shared_ptr<string> SQLText{};
  shared_ptr<long> sourcePort{};
  shared_ptr<string> DBRole{};
  shared_ptr<string> operationType{};
  shared_ptr<string> sourceIP{};
  shared_ptr<string> SQLPlan{};
  shared_ptr<long> returnRowCounts{};
  shared_ptr<string> DBName{};
  shared_ptr<string> operationExecuteTime{};
  shared_ptr<long> scanRowCounts{};
  shared_ptr<string> accountName{};

  DescribeSQLLogsResponseBodyItems() {}

  explicit DescribeSQLLogsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operationClass) {
      res["OperationClass"] = boost::any(*operationClass);
    }
    if (executeState) {
      res["ExecuteState"] = boost::any(*executeState);
    }
    if (executeCost) {
      res["ExecuteCost"] = boost::any(*executeCost);
    }
    if (SQLText) {
      res["SQLText"] = boost::any(*SQLText);
    }
    if (sourcePort) {
      res["SourcePort"] = boost::any(*sourcePort);
    }
    if (DBRole) {
      res["DBRole"] = boost::any(*DBRole);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (sourceIP) {
      res["SourceIP"] = boost::any(*sourceIP);
    }
    if (SQLPlan) {
      res["SQLPlan"] = boost::any(*SQLPlan);
    }
    if (returnRowCounts) {
      res["ReturnRowCounts"] = boost::any(*returnRowCounts);
    }
    if (DBName) {
      res["DBName"] = boost::any(*DBName);
    }
    if (operationExecuteTime) {
      res["OperationExecuteTime"] = boost::any(*operationExecuteTime);
    }
    if (scanRowCounts) {
      res["ScanRowCounts"] = boost::any(*scanRowCounts);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OperationClass") != m.end() && !m["OperationClass"].empty()) {
      operationClass = make_shared<string>(boost::any_cast<string>(m["OperationClass"]));
    }
    if (m.find("ExecuteState") != m.end() && !m["ExecuteState"].empty()) {
      executeState = make_shared<string>(boost::any_cast<string>(m["ExecuteState"]));
    }
    if (m.find("ExecuteCost") != m.end() && !m["ExecuteCost"].empty()) {
      executeCost = make_shared<double>(boost::any_cast<double>(m["ExecuteCost"]));
    }
    if (m.find("SQLText") != m.end() && !m["SQLText"].empty()) {
      SQLText = make_shared<string>(boost::any_cast<string>(m["SQLText"]));
    }
    if (m.find("SourcePort") != m.end() && !m["SourcePort"].empty()) {
      sourcePort = make_shared<long>(boost::any_cast<long>(m["SourcePort"]));
    }
    if (m.find("DBRole") != m.end() && !m["DBRole"].empty()) {
      DBRole = make_shared<string>(boost::any_cast<string>(m["DBRole"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("SourceIP") != m.end() && !m["SourceIP"].empty()) {
      sourceIP = make_shared<string>(boost::any_cast<string>(m["SourceIP"]));
    }
    if (m.find("SQLPlan") != m.end() && !m["SQLPlan"].empty()) {
      SQLPlan = make_shared<string>(boost::any_cast<string>(m["SQLPlan"]));
    }
    if (m.find("ReturnRowCounts") != m.end() && !m["ReturnRowCounts"].empty()) {
      returnRowCounts = make_shared<long>(boost::any_cast<long>(m["ReturnRowCounts"]));
    }
    if (m.find("DBName") != m.end() && !m["DBName"].empty()) {
      DBName = make_shared<string>(boost::any_cast<string>(m["DBName"]));
    }
    if (m.find("OperationExecuteTime") != m.end() && !m["OperationExecuteTime"].empty()) {
      operationExecuteTime = make_shared<string>(boost::any_cast<string>(m["OperationExecuteTime"]));
    }
    if (m.find("ScanRowCounts") != m.end() && !m["ScanRowCounts"].empty()) {
      scanRowCounts = make_shared<long>(boost::any_cast<long>(m["ScanRowCounts"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DescribeSQLLogsResponseBodyItems() = default;
};
class DescribeSQLLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageRecordCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<DescribeSQLLogsResponseBodyItems>> items{};

  DescribeSQLLogsResponseBody() {}

  explicit DescribeSQLLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeSQLLogsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLLogsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeSQLLogsResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeSQLLogsResponseBody() = default;
};
class DescribeSQLLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSQLLogsResponseBody> body{};

  DescribeSQLLogsResponse() {}

  explicit DescribeSQLLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSQLLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSQLLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSQLLogsResponse() = default;
};
class DescribeSQLLogsOnSliceRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<string> maxExecuteCost{};
  shared_ptr<string> minExecuteCost{};
  shared_ptr<string> executeState{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> queryId{};
  shared_ptr<string> sliceId{};

  DescribeSQLLogsOnSliceRequest() {}

  explicit DescribeSQLLogsOnSliceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (maxExecuteCost) {
      res["MaxExecuteCost"] = boost::any(*maxExecuteCost);
    }
    if (minExecuteCost) {
      res["MinExecuteCost"] = boost::any(*minExecuteCost);
    }
    if (executeState) {
      res["ExecuteState"] = boost::any(*executeState);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (sliceId) {
      res["SliceId"] = boost::any(*sliceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("MaxExecuteCost") != m.end() && !m["MaxExecuteCost"].empty()) {
      maxExecuteCost = make_shared<string>(boost::any_cast<string>(m["MaxExecuteCost"]));
    }
    if (m.find("MinExecuteCost") != m.end() && !m["MinExecuteCost"].empty()) {
      minExecuteCost = make_shared<string>(boost::any_cast<string>(m["MinExecuteCost"]));
    }
    if (m.find("ExecuteState") != m.end() && !m["ExecuteState"].empty()) {
      executeState = make_shared<string>(boost::any_cast<string>(m["ExecuteState"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("SliceId") != m.end() && !m["SliceId"].empty()) {
      sliceId = make_shared<string>(boost::any_cast<string>(m["SliceId"]));
    }
  }


  virtual ~DescribeSQLLogsOnSliceRequest() = default;
};
class DescribeSQLLogsOnSliceResponseBodySliceLogItems : public Darabonba::Model {
public:
  shared_ptr<string> executeStatus{};
  shared_ptr<double> executeCost{};
  shared_ptr<long> returnRowCounts{};
  shared_ptr<string> operationExecuteTime{};
  shared_ptr<string> segmentId{};
  shared_ptr<double> peakMemory{};
  shared_ptr<string> operationExecuteEndTime{};
  shared_ptr<string> segmentName{};

  DescribeSQLLogsOnSliceResponseBodySliceLogItems() {}

  explicit DescribeSQLLogsOnSliceResponseBodySliceLogItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executeStatus) {
      res["ExecuteStatus"] = boost::any(*executeStatus);
    }
    if (executeCost) {
      res["ExecuteCost"] = boost::any(*executeCost);
    }
    if (returnRowCounts) {
      res["ReturnRowCounts"] = boost::any(*returnRowCounts);
    }
    if (operationExecuteTime) {
      res["OperationExecuteTime"] = boost::any(*operationExecuteTime);
    }
    if (segmentId) {
      res["SegmentId"] = boost::any(*segmentId);
    }
    if (peakMemory) {
      res["PeakMemory"] = boost::any(*peakMemory);
    }
    if (operationExecuteEndTime) {
      res["OperationExecuteEndTime"] = boost::any(*operationExecuteEndTime);
    }
    if (segmentName) {
      res["SegmentName"] = boost::any(*segmentName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecuteStatus") != m.end() && !m["ExecuteStatus"].empty()) {
      executeStatus = make_shared<string>(boost::any_cast<string>(m["ExecuteStatus"]));
    }
    if (m.find("ExecuteCost") != m.end() && !m["ExecuteCost"].empty()) {
      executeCost = make_shared<double>(boost::any_cast<double>(m["ExecuteCost"]));
    }
    if (m.find("ReturnRowCounts") != m.end() && !m["ReturnRowCounts"].empty()) {
      returnRowCounts = make_shared<long>(boost::any_cast<long>(m["ReturnRowCounts"]));
    }
    if (m.find("OperationExecuteTime") != m.end() && !m["OperationExecuteTime"].empty()) {
      operationExecuteTime = make_shared<string>(boost::any_cast<string>(m["OperationExecuteTime"]));
    }
    if (m.find("SegmentId") != m.end() && !m["SegmentId"].empty()) {
      segmentId = make_shared<string>(boost::any_cast<string>(m["SegmentId"]));
    }
    if (m.find("PeakMemory") != m.end() && !m["PeakMemory"].empty()) {
      peakMemory = make_shared<double>(boost::any_cast<double>(m["PeakMemory"]));
    }
    if (m.find("OperationExecuteEndTime") != m.end() && !m["OperationExecuteEndTime"].empty()) {
      operationExecuteEndTime = make_shared<string>(boost::any_cast<string>(m["OperationExecuteEndTime"]));
    }
    if (m.find("SegmentName") != m.end() && !m["SegmentName"].empty()) {
      segmentName = make_shared<string>(boost::any_cast<string>(m["SegmentName"]));
    }
  }


  virtual ~DescribeSQLLogsOnSliceResponseBodySliceLogItems() = default;
};
class DescribeSQLLogsOnSliceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageRecordCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<DescribeSQLLogsOnSliceResponseBodySliceLogItems>> sliceLogItems{};

  DescribeSQLLogsOnSliceResponseBody() {}

  explicit DescribeSQLLogsOnSliceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageRecordCount) {
      res["PageRecordCount"] = boost::any(*pageRecordCount);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (sliceLogItems) {
      vector<boost::any> temp1;
      for(auto item1:*sliceLogItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SliceLogItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageRecordCount") != m.end() && !m["PageRecordCount"].empty()) {
      pageRecordCount = make_shared<long>(boost::any_cast<long>(m["PageRecordCount"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("SliceLogItems") != m.end() && !m["SliceLogItems"].empty()) {
      if (typeid(vector<boost::any>) == m["SliceLogItems"].type()) {
        vector<DescribeSQLLogsOnSliceResponseBodySliceLogItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SliceLogItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSQLLogsOnSliceResponseBodySliceLogItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sliceLogItems = make_shared<vector<DescribeSQLLogsOnSliceResponseBodySliceLogItems>>(expect1);
      }
    }
  }


  virtual ~DescribeSQLLogsOnSliceResponseBody() = default;
};
class DescribeSQLLogsOnSliceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSQLLogsOnSliceResponseBody> body{};

  DescribeSQLLogsOnSliceResponse() {}

  explicit DescribeSQLLogsOnSliceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSQLLogsOnSliceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSQLLogsOnSliceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSQLLogsOnSliceResponse() = default;
};
class DescribeTagsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceType{};

  DescribeTagsRequest() {}

  explicit DescribeTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DescribeTagsRequest() = default;
};
class DescribeTagsResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> tagValue{};
  shared_ptr<string> tagKey{};

  DescribeTagsResponseBodyTags() {}

  explicit DescribeTagsResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
  }


  virtual ~DescribeTagsResponseBodyTags() = default;
};
class DescribeTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeTagsResponseBodyTags>> tags{};

  DescribeTagsResponseBody() {}

  explicit DescribeTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeTagsResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTagsResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeTagsResponseBodyTags>>(expect1);
      }
    }
  }


  virtual ~DescribeTagsResponseBody() = default;
};
class DescribeTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeTagsResponseBody> body{};

  DescribeTagsResponse() {}

  explicit DescribeTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTagsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTagsResponse() = default;
};
class DescribeUserEncryptionKeyListRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  DescribeUserEncryptionKeyListRequest() {}

  explicit DescribeUserEncryptionKeyListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~DescribeUserEncryptionKeyListRequest() = default;
};
class DescribeUserEncryptionKeyListResponseBodyKmsKeys : public Darabonba::Model {
public:
  shared_ptr<string> keyId{};

  DescribeUserEncryptionKeyListResponseBodyKmsKeys() {}

  explicit DescribeUserEncryptionKeyListResponseBodyKmsKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyId) {
      res["KeyId"] = boost::any(*keyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyId") != m.end() && !m["KeyId"].empty()) {
      keyId = make_shared<string>(boost::any_cast<string>(m["KeyId"]));
    }
  }


  virtual ~DescribeUserEncryptionKeyListResponseBodyKmsKeys() = default;
};
class DescribeUserEncryptionKeyListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUserEncryptionKeyListResponseBodyKmsKeys>> kmsKeys{};

  DescribeUserEncryptionKeyListResponseBody() {}

  explicit DescribeUserEncryptionKeyListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (kmsKeys) {
      vector<boost::any> temp1;
      for(auto item1:*kmsKeys){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KmsKeys"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("KmsKeys") != m.end() && !m["KmsKeys"].empty()) {
      if (typeid(vector<boost::any>) == m["KmsKeys"].type()) {
        vector<DescribeUserEncryptionKeyListResponseBodyKmsKeys> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KmsKeys"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserEncryptionKeyListResponseBodyKmsKeys model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        kmsKeys = make_shared<vector<DescribeUserEncryptionKeyListResponseBodyKmsKeys>>(expect1);
      }
    }
  }


  virtual ~DescribeUserEncryptionKeyListResponseBody() = default;
};
class DescribeUserEncryptionKeyListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeUserEncryptionKeyListResponseBody> body{};

  DescribeUserEncryptionKeyListResponse() {}

  explicit DescribeUserEncryptionKeyListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserEncryptionKeyListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserEncryptionKeyListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserEncryptionKeyListResponse() = default;
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
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountDescription{};

  ModifyAccountDescriptionRequest() {}

  explicit ModifyAccountDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
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
class ModifyBackupPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> preferredBackupTime{};
  shared_ptr<string> preferredBackupPeriod{};
  shared_ptr<long> backupRetentionPeriod{};
  shared_ptr<bool> enableRecoveryPoint{};
  shared_ptr<string> recoveryPointPeriod{};

  ModifyBackupPolicyRequest() {}

  explicit ModifyBackupPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
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
    if (enableRecoveryPoint) {
      res["EnableRecoveryPoint"] = boost::any(*enableRecoveryPoint);
    }
    if (recoveryPointPeriod) {
      res["RecoveryPointPeriod"] = boost::any(*recoveryPointPeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("PreferredBackupTime") != m.end() && !m["PreferredBackupTime"].empty()) {
      preferredBackupTime = make_shared<string>(boost::any_cast<string>(m["PreferredBackupTime"]));
    }
    if (m.find("PreferredBackupPeriod") != m.end() && !m["PreferredBackupPeriod"].empty()) {
      preferredBackupPeriod = make_shared<string>(boost::any_cast<string>(m["PreferredBackupPeriod"]));
    }
    if (m.find("BackupRetentionPeriod") != m.end() && !m["BackupRetentionPeriod"].empty()) {
      backupRetentionPeriod = make_shared<long>(boost::any_cast<long>(m["BackupRetentionPeriod"]));
    }
    if (m.find("EnableRecoveryPoint") != m.end() && !m["EnableRecoveryPoint"].empty()) {
      enableRecoveryPoint = make_shared<bool>(boost::any_cast<bool>(m["EnableRecoveryPoint"]));
    }
    if (m.find("RecoveryPointPeriod") != m.end() && !m["RecoveryPointPeriod"].empty()) {
      recoveryPointPeriod = make_shared<string>(boost::any_cast<string>(m["RecoveryPointPeriod"]));
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
class ModifyDBInstanceConnectionModeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> connectionMode{};

  ModifyDBInstanceConnectionModeRequest() {}

  explicit ModifyDBInstanceConnectionModeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (connectionMode) {
      res["ConnectionMode"] = boost::any(*connectionMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ConnectionMode") != m.end() && !m["ConnectionMode"].empty()) {
      connectionMode = make_shared<string>(boost::any_cast<string>(m["ConnectionMode"]));
    }
  }


  virtual ~ModifyDBInstanceConnectionModeRequest() = default;
};
class ModifyDBInstanceConnectionModeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceConnectionModeResponseBody() {}

  explicit ModifyDBInstanceConnectionModeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceConnectionModeResponseBody() = default;
};
class ModifyDBInstanceConnectionModeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBInstanceConnectionModeResponseBody> body{};

  ModifyDBInstanceConnectionModeResponse() {}

  explicit ModifyDBInstanceConnectionModeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceConnectionModeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceConnectionModeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceConnectionModeResponse() = default;
};
class ModifyDBInstanceConnectionStringRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> port{};
  shared_ptr<string> currentConnectionString{};

  ModifyDBInstanceConnectionStringRequest() {}

  explicit ModifyDBInstanceConnectionStringRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (currentConnectionString) {
      res["CurrentConnectionString"] = boost::any(*currentConnectionString);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("CurrentConnectionString") != m.end() && !m["CurrentConnectionString"].empty()) {
      currentConnectionString = make_shared<string>(boost::any_cast<string>(m["CurrentConnectionString"]));
    }
  }


  virtual ~ModifyDBInstanceConnectionStringRequest() = default;
};
class ModifyDBInstanceConnectionStringResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceConnectionStringResponseBody() {}

  explicit ModifyDBInstanceConnectionStringResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceConnectionStringResponseBody() = default;
};
class ModifyDBInstanceConnectionStringResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBInstanceConnectionStringResponseBody> body{};

  ModifyDBInstanceConnectionStringResponse() {}

  explicit ModifyDBInstanceConnectionStringResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceConnectionStringResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceConnectionStringResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceConnectionStringResponse() = default;
};
class ModifyDBInstanceDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceDescription{};

  ModifyDBInstanceDescriptionRequest() {}

  explicit ModifyDBInstanceDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
  }


  virtual ~ModifyDBInstanceDescriptionRequest() = default;
};
class ModifyDBInstanceDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceDescriptionResponseBody() {}

  explicit ModifyDBInstanceDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceDescriptionResponseBody() = default;
};
class ModifyDBInstanceDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBInstanceDescriptionResponseBody> body{};

  ModifyDBInstanceDescriptionResponse() {}

  explicit ModifyDBInstanceDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceDescriptionResponse() = default;
};
class ModifyDBInstanceMaintainTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  ModifyDBInstanceMaintainTimeRequest() {}

  explicit ModifyDBInstanceMaintainTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
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
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
  }


  virtual ~ModifyDBInstanceMaintainTimeRequest() = default;
};
class ModifyDBInstanceMaintainTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceMaintainTimeResponseBody() {}

  explicit ModifyDBInstanceMaintainTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceMaintainTimeResponseBody() = default;
};
class ModifyDBInstanceMaintainTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBInstanceMaintainTimeResponseBody> body{};

  ModifyDBInstanceMaintainTimeResponse() {}

  explicit ModifyDBInstanceMaintainTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceMaintainTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceMaintainTimeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceMaintainTimeResponse() = default;
};
class ModifyDBInstanceNetworkTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> instanceNetworkType{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> privateIpAddress{};

  ModifyDBInstanceNetworkTypeRequest() {}

  explicit ModifyDBInstanceNetworkTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (instanceNetworkType) {
      res["InstanceNetworkType"] = boost::any(*instanceNetworkType);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("InstanceNetworkType") != m.end() && !m["InstanceNetworkType"].empty()) {
      instanceNetworkType = make_shared<string>(boost::any_cast<string>(m["InstanceNetworkType"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
  }


  virtual ~ModifyDBInstanceNetworkTypeRequest() = default;
};
class ModifyDBInstanceNetworkTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceNetworkTypeResponseBody() {}

  explicit ModifyDBInstanceNetworkTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceNetworkTypeResponseBody() = default;
};
class ModifyDBInstanceNetworkTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBInstanceNetworkTypeResponseBody> body{};

  ModifyDBInstanceNetworkTypeResponse() {}

  explicit ModifyDBInstanceNetworkTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceNetworkTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceNetworkTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceNetworkTypeResponse() = default;
};
class ModifyDBInstanceSSLRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> connectionString{};
  shared_ptr<long> SSLEnabled{};

  ModifyDBInstanceSSLRequest() {}

  explicit ModifyDBInstanceSSLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (SSLEnabled) {
      res["SSLEnabled"] = boost::any(*SSLEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("SSLEnabled") != m.end() && !m["SSLEnabled"].empty()) {
      SSLEnabled = make_shared<long>(boost::any_cast<long>(m["SSLEnabled"]));
    }
  }


  virtual ~ModifyDBInstanceSSLRequest() = default;
};
class ModifyDBInstanceSSLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceSSLResponseBody() {}

  explicit ModifyDBInstanceSSLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceSSLResponseBody() = default;
};
class ModifyDBInstanceSSLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBInstanceSSLResponseBody> body{};

  ModifyDBInstanceSSLResponse() {}

  explicit ModifyDBInstanceSSLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDBInstanceSSLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceSSLResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceSSLResponse() = default;
};
class ModifyParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> parameters{};
  shared_ptr<bool> forceRestartInstance{};

  ModifyParametersRequest() {}

  explicit ModifyParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (forceRestartInstance) {
      res["ForceRestartInstance"] = boost::any(*forceRestartInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("ForceRestartInstance") != m.end() && !m["ForceRestartInstance"].empty()) {
      forceRestartInstance = make_shared<bool>(boost::any_cast<bool>(m["ForceRestartInstance"]));
    }
  }


  virtual ~ModifyParametersRequest() = default;
};
class ModifyParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyParametersResponseBody() {}

  explicit ModifyParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyParametersResponseBody() = default;
};
class ModifyParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyParametersResponseBody> body{};

  ModifyParametersResponse() {}

  explicit ModifyParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyParametersResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyParametersResponse() = default;
};
class ModifySecurityIpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> securityIPList{};
  shared_ptr<string> DBInstanceIPArrayName{};
  shared_ptr<string> DBInstanceIPArrayAttribute{};

  ModifySecurityIpsRequest() {}

  explicit ModifySecurityIpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (securityIPList) {
      res["SecurityIPList"] = boost::any(*securityIPList);
    }
    if (DBInstanceIPArrayName) {
      res["DBInstanceIPArrayName"] = boost::any(*DBInstanceIPArrayName);
    }
    if (DBInstanceIPArrayAttribute) {
      res["DBInstanceIPArrayAttribute"] = boost::any(*DBInstanceIPArrayAttribute);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("SecurityIPList") != m.end() && !m["SecurityIPList"].empty()) {
      securityIPList = make_shared<string>(boost::any_cast<string>(m["SecurityIPList"]));
    }
    if (m.find("DBInstanceIPArrayName") != m.end() && !m["DBInstanceIPArrayName"].empty()) {
      DBInstanceIPArrayName = make_shared<string>(boost::any_cast<string>(m["DBInstanceIPArrayName"]));
    }
    if (m.find("DBInstanceIPArrayAttribute") != m.end() && !m["DBInstanceIPArrayAttribute"].empty()) {
      DBInstanceIPArrayAttribute = make_shared<string>(boost::any_cast<string>(m["DBInstanceIPArrayAttribute"]));
    }
  }


  virtual ~ModifySecurityIpsRequest() = default;
};
class ModifySecurityIpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySecurityIpsResponseBody() {}

  explicit ModifySecurityIpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifySecurityIpsResponseBody() = default;
};
class ModifySecurityIpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifySecurityIpsResponseBody> body{};

  ModifySecurityIpsResponse() {}

  explicit ModifySecurityIpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySecurityIpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySecurityIpsResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySecurityIpsResponse() = default;
};
class ModifySQLCollectorPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> SQLCollectorStatus{};

  ModifySQLCollectorPolicyRequest() {}

  explicit ModifySQLCollectorPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (SQLCollectorStatus) {
      res["SQLCollectorStatus"] = boost::any(*SQLCollectorStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("SQLCollectorStatus") != m.end() && !m["SQLCollectorStatus"].empty()) {
      SQLCollectorStatus = make_shared<string>(boost::any_cast<string>(m["SQLCollectorStatus"]));
    }
  }


  virtual ~ModifySQLCollectorPolicyRequest() = default;
};
class ModifySQLCollectorPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySQLCollectorPolicyResponseBody() {}

  explicit ModifySQLCollectorPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifySQLCollectorPolicyResponseBody() = default;
};
class ModifySQLCollectorPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifySQLCollectorPolicyResponseBody> body{};

  ModifySQLCollectorPolicyResponse() {}

  explicit ModifySQLCollectorPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySQLCollectorPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySQLCollectorPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySQLCollectorPolicyResponse() = default;
};
class ReleaseInstancePublicConnectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> currentConnectionString{};
  shared_ptr<string> addressType{};

  ReleaseInstancePublicConnectionRequest() {}

  explicit ReleaseInstancePublicConnectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (currentConnectionString) {
      res["CurrentConnectionString"] = boost::any(*currentConnectionString);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("CurrentConnectionString") != m.end() && !m["CurrentConnectionString"].empty()) {
      currentConnectionString = make_shared<string>(boost::any_cast<string>(m["CurrentConnectionString"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
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
  shared_ptr<ReleaseInstancePublicConnectionResponseBody> body{};

  ReleaseInstancePublicConnectionResponse() {}

  explicit ReleaseInstancePublicConnectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};

  ResetAccountPasswordRequest() {}

  explicit ResetAccountPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
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
class RestartDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> DBInstanceId{};

  RestartDBInstanceRequest() {}

  explicit RestartDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~RestartDBInstanceRequest() = default;
};
class RestartDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestartDBInstanceResponseBody() {}

  explicit RestartDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RestartDBInstanceResponseBody() = default;
};
class RestartDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestartDBInstanceResponseBody> body{};

  RestartDBInstanceResponse() {}

  explicit RestartDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RestartDBInstanceResponse() = default;
};
class SwitchDBInstanceNetTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> connectionStringPrefix{};
  shared_ptr<string> port{};

  SwitchDBInstanceNetTypeRequest() {}

  explicit SwitchDBInstanceNetTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (connectionStringPrefix) {
      res["ConnectionStringPrefix"] = boost::any(*connectionStringPrefix);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ConnectionStringPrefix") != m.end() && !m["ConnectionStringPrefix"].empty()) {
      connectionStringPrefix = make_shared<string>(boost::any_cast<string>(m["ConnectionStringPrefix"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~SwitchDBInstanceNetTypeRequest() = default;
};
class SwitchDBInstanceNetTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SwitchDBInstanceNetTypeResponseBody() {}

  explicit SwitchDBInstanceNetTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SwitchDBInstanceNetTypeResponseBody() = default;
};
class SwitchDBInstanceNetTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SwitchDBInstanceNetTypeResponseBody> body{};

  SwitchDBInstanceNetTypeResponse() {}

  explicit SwitchDBInstanceNetTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwitchDBInstanceNetTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchDBInstanceNetTypeResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchDBInstanceNetTypeResponse() = default;
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
class UpgradeDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> DBInstanceClass{};
  shared_ptr<string> DBInstanceGroupCount{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> payType{};

  UpgradeDBInstanceRequest() {}

  explicit UpgradeDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (DBInstanceClass) {
      res["DBInstanceClass"] = boost::any(*DBInstanceClass);
    }
    if (DBInstanceGroupCount) {
      res["DBInstanceGroupCount"] = boost::any(*DBInstanceGroupCount);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DBInstanceClass") != m.end() && !m["DBInstanceClass"].empty()) {
      DBInstanceClass = make_shared<string>(boost::any_cast<string>(m["DBInstanceClass"]));
    }
    if (m.find("DBInstanceGroupCount") != m.end() && !m["DBInstanceGroupCount"].empty()) {
      DBInstanceGroupCount = make_shared<string>(boost::any_cast<string>(m["DBInstanceGroupCount"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
  }


  virtual ~UpgradeDBInstanceRequest() = default;
};
class UpgradeDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> orderId{};

  UpgradeDBInstanceResponseBody() {}

  explicit UpgradeDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~UpgradeDBInstanceResponseBody() = default;
};
class UpgradeDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeDBInstanceResponseBody> body{};

  UpgradeDBInstanceResponse() {}

  explicit UpgradeDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeDBInstanceResponse() = default;
};
class UpgradeDBVersionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> minorVersion{};
  shared_ptr<string> majorVersion{};
  shared_ptr<string> switchTimeMode{};
  shared_ptr<string> switchTime{};

  UpgradeDBVersionRequest() {}

  explicit UpgradeDBVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (minorVersion) {
      res["MinorVersion"] = boost::any(*minorVersion);
    }
    if (majorVersion) {
      res["MajorVersion"] = boost::any(*majorVersion);
    }
    if (switchTimeMode) {
      res["SwitchTimeMode"] = boost::any(*switchTimeMode);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("MinorVersion") != m.end() && !m["MinorVersion"].empty()) {
      minorVersion = make_shared<string>(boost::any_cast<string>(m["MinorVersion"]));
    }
    if (m.find("MajorVersion") != m.end() && !m["MajorVersion"].empty()) {
      majorVersion = make_shared<string>(boost::any_cast<string>(m["MajorVersion"]));
    }
    if (m.find("SwitchTimeMode") != m.end() && !m["SwitchTimeMode"].empty()) {
      switchTimeMode = make_shared<string>(boost::any_cast<string>(m["SwitchTimeMode"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
  }


  virtual ~UpgradeDBVersionRequest() = default;
};
class UpgradeDBVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  UpgradeDBVersionResponseBody() {}

  explicit UpgradeDBVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
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
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpgradeDBVersionResponseBody() = default;
};
class UpgradeDBVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeDBVersionResponseBody> body{};

  UpgradeDBVersionResponse() {}

  explicit UpgradeDBVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeDBVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeDBVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeDBVersionResponse() = default;
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
  AddBuDBInstanceRelationResponse addBuDBInstanceRelationWithOptions(shared_ptr<AddBuDBInstanceRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddBuDBInstanceRelationResponse addBuDBInstanceRelation(shared_ptr<AddBuDBInstanceRelationRequest> request);
  AllocateInstancePublicConnectionResponse allocateInstancePublicConnectionWithOptions(shared_ptr<AllocateInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateInstancePublicConnectionResponse allocateInstancePublicConnection(shared_ptr<AllocateInstancePublicConnectionRequest> request);
  CheckServiceLinkedRoleResponse checkServiceLinkedRoleWithOptions(shared_ptr<CheckServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckServiceLinkedRoleResponse checkServiceLinkedRole(shared_ptr<CheckServiceLinkedRoleRequest> request);
  CreateAccountResponse createAccountWithOptions(shared_ptr<CreateAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccountResponse createAccount(shared_ptr<CreateAccountRequest> request);
  CreateDBInstanceResponse createDBInstanceWithOptions(shared_ptr<CreateDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBInstanceResponse createDBInstance(shared_ptr<CreateDBInstanceRequest> request);
  CreateECSDBInstanceResponse createECSDBInstanceWithOptions(shared_ptr<CreateECSDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateECSDBInstanceResponse createECSDBInstance(shared_ptr<CreateECSDBInstanceRequest> request);
  CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(shared_ptr<CreateServiceLinkedRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceLinkedRoleResponse createServiceLinkedRole(shared_ptr<CreateServiceLinkedRoleRequest> request);
  DeleteDatabaseResponse deleteDatabaseWithOptions(shared_ptr<DeleteDatabaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatabaseResponse deleteDatabase(shared_ptr<DeleteDatabaseRequest> request);
  DeleteDBInstanceResponse deleteDBInstanceWithOptions(shared_ptr<DeleteDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBInstanceResponse deleteDBInstance(shared_ptr<DeleteDBInstanceRequest> request);
  DescribeAccountsResponse describeAccountsWithOptions(shared_ptr<DescribeAccountsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountsResponse describeAccounts(shared_ptr<DescribeAccountsRequest> request);
  DescribeAvailableResourcesResponse describeAvailableResourcesWithOptions(shared_ptr<DescribeAvailableResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableResourcesResponse describeAvailableResources(shared_ptr<DescribeAvailableResourcesRequest> request);
  DescribeBackupPolicyResponse describeBackupPolicyWithOptions(shared_ptr<DescribeBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBackupPolicyResponse describeBackupPolicy(shared_ptr<DescribeBackupPolicyRequest> request);
  DescribeDataBackupsResponse describeDataBackupsWithOptions(shared_ptr<DescribeDataBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDataBackupsResponse describeDataBackups(shared_ptr<DescribeDataBackupsRequest> request);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformanceWithOptions(shared_ptr<DescribeDBClusterPerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBClusterPerformanceResponse describeDBClusterPerformance(shared_ptr<DescribeDBClusterPerformanceRequest> request);
  DescribeDBInstanceAttributeResponse describeDBInstanceAttributeWithOptions(shared_ptr<DescribeDBInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceAttributeResponse describeDBInstanceAttribute(shared_ptr<DescribeDBInstanceAttributeRequest> request);
  DescribeDBInstanceIPArrayListResponse describeDBInstanceIPArrayListWithOptions(shared_ptr<DescribeDBInstanceIPArrayListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceIPArrayListResponse describeDBInstanceIPArrayList(shared_ptr<DescribeDBInstanceIPArrayListRequest> request);
  DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfoWithOptions(shared_ptr<DescribeDBInstanceNetInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceNetInfoResponse describeDBInstanceNetInfo(shared_ptr<DescribeDBInstanceNetInfoRequest> request);
  DescribeDBInstanceOnECSAttributeResponse describeDBInstanceOnECSAttributeWithOptions(shared_ptr<DescribeDBInstanceOnECSAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceOnECSAttributeResponse describeDBInstanceOnECSAttribute(shared_ptr<DescribeDBInstanceOnECSAttributeRequest> request);
  DescribeDBInstancePerformanceResponse describeDBInstancePerformanceWithOptions(shared_ptr<DescribeDBInstancePerformanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstancePerformanceResponse describeDBInstancePerformance(shared_ptr<DescribeDBInstancePerformanceRequest> request);
  DescribeDBInstancesResponse describeDBInstancesWithOptions(shared_ptr<DescribeDBInstancesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstancesResponse describeDBInstances(shared_ptr<DescribeDBInstancesRequest> request);
  DescribeDBInstanceSQLPatternsResponse describeDBInstanceSQLPatternsWithOptions(shared_ptr<DescribeDBInstanceSQLPatternsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceSQLPatternsResponse describeDBInstanceSQLPatterns(shared_ptr<DescribeDBInstanceSQLPatternsRequest> request);
  DescribeDBInstanceSSLResponse describeDBInstanceSSLWithOptions(shared_ptr<DescribeDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDBInstanceSSLResponse describeDBInstanceSSL(shared_ptr<DescribeDBInstanceSSLRequest> request);
  DescribeLogBackupsResponse describeLogBackupsWithOptions(shared_ptr<DescribeLogBackupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogBackupsResponse describeLogBackups(shared_ptr<DescribeLogBackupsRequest> request);
  DescribeModifyParameterLogResponse describeModifyParameterLogWithOptions(shared_ptr<DescribeModifyParameterLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeModifyParameterLogResponse describeModifyParameterLog(shared_ptr<DescribeModifyParameterLogRequest> request);
  DescribeParametersResponse describeParametersWithOptions(shared_ptr<DescribeParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeParametersResponse describeParameters(shared_ptr<DescribeParametersRequest> request);
  DescribeRdsVpcsResponse describeRdsVpcsWithOptions(shared_ptr<DescribeRdsVpcsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRdsVpcsResponse describeRdsVpcs(shared_ptr<DescribeRdsVpcsRequest> request);
  DescribeRdsVSwitchsResponse describeRdsVSwitchsWithOptions(shared_ptr<DescribeRdsVSwitchsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRdsVSwitchsResponse describeRdsVSwitchs(shared_ptr<DescribeRdsVSwitchsRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeResourceUsageResponse describeResourceUsageWithOptions(shared_ptr<DescribeResourceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourceUsageResponse describeResourceUsage(shared_ptr<DescribeResourceUsageRequest> request);
  DescribeSlowLogRecordsResponse describeSlowLogRecordsWithOptions(shared_ptr<DescribeSlowLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowLogRecordsResponse describeSlowLogRecords(shared_ptr<DescribeSlowLogRecordsRequest> request);
  DescribeSlowSQLLogsResponse describeSlowSQLLogsWithOptions(shared_ptr<DescribeSlowSQLLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSlowSQLLogsResponse describeSlowSQLLogs(shared_ptr<DescribeSlowSQLLogsRequest> request);
  DescribeSpecificationResponse describeSpecificationWithOptions(shared_ptr<DescribeSpecificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSpecificationResponse describeSpecification(shared_ptr<DescribeSpecificationRequest> request);
  DescribeSQLCollectorPolicyResponse describeSQLCollectorPolicyWithOptions(shared_ptr<DescribeSQLCollectorPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSQLCollectorPolicyResponse describeSQLCollectorPolicy(shared_ptr<DescribeSQLCollectorPolicyRequest> request);
  DescribeSQLLogByQueryIdResponse describeSQLLogByQueryIdWithOptions(shared_ptr<DescribeSQLLogByQueryIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSQLLogByQueryIdResponse describeSQLLogByQueryId(shared_ptr<DescribeSQLLogByQueryIdRequest> request);
  DescribeSQLLogCountResponse describeSQLLogCountWithOptions(shared_ptr<DescribeSQLLogCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSQLLogCountResponse describeSQLLogCount(shared_ptr<DescribeSQLLogCountRequest> request);
  DescribeSQLLogFilesResponse describeSQLLogFilesWithOptions(shared_ptr<DescribeSQLLogFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSQLLogFilesResponse describeSQLLogFiles(shared_ptr<DescribeSQLLogFilesRequest> request);
  DescribeSQLLogRecordsResponse describeSQLLogRecordsWithOptions(shared_ptr<DescribeSQLLogRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSQLLogRecordsResponse describeSQLLogRecords(shared_ptr<DescribeSQLLogRecordsRequest> request);
  DescribeSQLLogsResponse describeSQLLogsWithOptions(shared_ptr<DescribeSQLLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSQLLogsResponse describeSQLLogs(shared_ptr<DescribeSQLLogsRequest> request);
  DescribeSQLLogsOnSliceResponse describeSQLLogsOnSliceWithOptions(shared_ptr<DescribeSQLLogsOnSliceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSQLLogsOnSliceResponse describeSQLLogsOnSlice(shared_ptr<DescribeSQLLogsOnSliceRequest> request);
  DescribeTagsResponse describeTagsWithOptions(shared_ptr<DescribeTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTagsResponse describeTags(shared_ptr<DescribeTagsRequest> request);
  DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyListWithOptions(shared_ptr<DescribeUserEncryptionKeyListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserEncryptionKeyListResponse describeUserEncryptionKeyList(shared_ptr<DescribeUserEncryptionKeyListRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyAccountDescriptionResponse modifyAccountDescriptionWithOptions(shared_ptr<ModifyAccountDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAccountDescriptionResponse modifyAccountDescription(shared_ptr<ModifyAccountDescriptionRequest> request);
  ModifyBackupPolicyResponse modifyBackupPolicyWithOptions(shared_ptr<ModifyBackupPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBackupPolicyResponse modifyBackupPolicy(shared_ptr<ModifyBackupPolicyRequest> request);
  ModifyDBInstanceConnectionModeResponse modifyDBInstanceConnectionModeWithOptions(shared_ptr<ModifyDBInstanceConnectionModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceConnectionModeResponse modifyDBInstanceConnectionMode(shared_ptr<ModifyDBInstanceConnectionModeRequest> request);
  ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionStringWithOptions(shared_ptr<ModifyDBInstanceConnectionStringRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceConnectionStringResponse modifyDBInstanceConnectionString(shared_ptr<ModifyDBInstanceConnectionStringRequest> request);
  ModifyDBInstanceDescriptionResponse modifyDBInstanceDescriptionWithOptions(shared_ptr<ModifyDBInstanceDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceDescriptionResponse modifyDBInstanceDescription(shared_ptr<ModifyDBInstanceDescriptionRequest> request);
  ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTimeWithOptions(shared_ptr<ModifyDBInstanceMaintainTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceMaintainTimeResponse modifyDBInstanceMaintainTime(shared_ptr<ModifyDBInstanceMaintainTimeRequest> request);
  ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkTypeWithOptions(shared_ptr<ModifyDBInstanceNetworkTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceNetworkTypeResponse modifyDBInstanceNetworkType(shared_ptr<ModifyDBInstanceNetworkTypeRequest> request);
  ModifyDBInstanceSSLResponse modifyDBInstanceSSLWithOptions(shared_ptr<ModifyDBInstanceSSLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceSSLResponse modifyDBInstanceSSL(shared_ptr<ModifyDBInstanceSSLRequest> request);
  ModifyParametersResponse modifyParametersWithOptions(shared_ptr<ModifyParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyParametersResponse modifyParameters(shared_ptr<ModifyParametersRequest> request);
  ModifySecurityIpsResponse modifySecurityIpsWithOptions(shared_ptr<ModifySecurityIpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySecurityIpsResponse modifySecurityIps(shared_ptr<ModifySecurityIpsRequest> request);
  ModifySQLCollectorPolicyResponse modifySQLCollectorPolicyWithOptions(shared_ptr<ModifySQLCollectorPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySQLCollectorPolicyResponse modifySQLCollectorPolicy(shared_ptr<ModifySQLCollectorPolicyRequest> request);
  ReleaseInstancePublicConnectionResponse releaseInstancePublicConnectionWithOptions(shared_ptr<ReleaseInstancePublicConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstancePublicConnectionResponse releaseInstancePublicConnection(shared_ptr<ReleaseInstancePublicConnectionRequest> request);
  ResetAccountPasswordResponse resetAccountPasswordWithOptions(shared_ptr<ResetAccountPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAccountPasswordResponse resetAccountPassword(shared_ptr<ResetAccountPasswordRequest> request);
  RestartDBInstanceResponse restartDBInstanceWithOptions(shared_ptr<RestartDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartDBInstanceResponse restartDBInstance(shared_ptr<RestartDBInstanceRequest> request);
  SwitchDBInstanceNetTypeResponse switchDBInstanceNetTypeWithOptions(shared_ptr<SwitchDBInstanceNetTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchDBInstanceNetTypeResponse switchDBInstanceNetType(shared_ptr<SwitchDBInstanceNetTypeRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpgradeDBInstanceResponse upgradeDBInstanceWithOptions(shared_ptr<UpgradeDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeDBInstanceResponse upgradeDBInstance(shared_ptr<UpgradeDBInstanceRequest> request);
  UpgradeDBVersionResponse upgradeDBVersionWithOptions(shared_ptr<UpgradeDBVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeDBVersionResponse upgradeDBVersion(shared_ptr<UpgradeDBVersionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Gpdb20160503

#endif
