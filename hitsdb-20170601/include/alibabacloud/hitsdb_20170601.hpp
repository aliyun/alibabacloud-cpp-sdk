// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_HITSDB20170601_H_
#define ALIBABACLOUD_HITSDB20170601_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Hitsdb20170601 {
class CreateHiTSDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> appKey{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceAlias{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> instanceStorage{};
  shared_ptr<string> payType{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> maxTimelineLimit{};
  shared_ptr<string> instanceTps{};
  shared_ptr<string> engineType{};
  shared_ptr<string> maxSeriesPerDatabase{};
  shared_ptr<string> maxDatabaseLimit{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> duration{};
  shared_ptr<string> TSDBVersion{};
  shared_ptr<string> diskCategory{};
  shared_ptr<string> clientToken{};

  CreateHiTSDBInstanceRequest() {}

  explicit CreateHiTSDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceAlias) {
      res["InstanceAlias"] = boost::any(*instanceAlias);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (instanceStorage) {
      res["InstanceStorage"] = boost::any(*instanceStorage);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (maxTimelineLimit) {
      res["MaxTimelineLimit"] = boost::any(*maxTimelineLimit);
    }
    if (instanceTps) {
      res["InstanceTps"] = boost::any(*instanceTps);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (maxSeriesPerDatabase) {
      res["MaxSeriesPerDatabase"] = boost::any(*maxSeriesPerDatabase);
    }
    if (maxDatabaseLimit) {
      res["MaxDatabaseLimit"] = boost::any(*maxDatabaseLimit);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (TSDBVersion) {
      res["TSDBVersion"] = boost::any(*TSDBVersion);
    }
    if (diskCategory) {
      res["DiskCategory"] = boost::any(*diskCategory);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
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
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceAlias") != m.end() && !m["InstanceAlias"].empty()) {
      instanceAlias = make_shared<string>(boost::any_cast<string>(m["InstanceAlias"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("InstanceStorage") != m.end() && !m["InstanceStorage"].empty()) {
      instanceStorage = make_shared<string>(boost::any_cast<string>(m["InstanceStorage"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("MaxTimelineLimit") != m.end() && !m["MaxTimelineLimit"].empty()) {
      maxTimelineLimit = make_shared<string>(boost::any_cast<string>(m["MaxTimelineLimit"]));
    }
    if (m.find("InstanceTps") != m.end() && !m["InstanceTps"].empty()) {
      instanceTps = make_shared<string>(boost::any_cast<string>(m["InstanceTps"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("MaxSeriesPerDatabase") != m.end() && !m["MaxSeriesPerDatabase"].empty()) {
      maxSeriesPerDatabase = make_shared<string>(boost::any_cast<string>(m["MaxSeriesPerDatabase"]));
    }
    if (m.find("MaxDatabaseLimit") != m.end() && !m["MaxDatabaseLimit"].empty()) {
      maxDatabaseLimit = make_shared<string>(boost::any_cast<string>(m["MaxDatabaseLimit"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("TSDBVersion") != m.end() && !m["TSDBVersion"].empty()) {
      TSDBVersion = make_shared<string>(boost::any_cast<string>(m["TSDBVersion"]));
    }
    if (m.find("DiskCategory") != m.end() && !m["DiskCategory"].empty()) {
      diskCategory = make_shared<string>(boost::any_cast<string>(m["DiskCategory"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
  }


  virtual ~CreateHiTSDBInstanceRequest() = default;
};
class CreateHiTSDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderId{};

  CreateHiTSDBInstanceResponseBody() {}

  explicit CreateHiTSDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CreateHiTSDBInstanceResponseBody() = default;
};
class CreateHiTSDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateHiTSDBInstanceResponseBody> body{};

  CreateHiTSDBInstanceResponse() {}

  explicit CreateHiTSDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateHiTSDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHiTSDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHiTSDBInstanceResponse() = default;
};
class DeleteHiTSDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> appKey{};
  shared_ptr<string> instanceId{};

  DeleteHiTSDBInstanceRequest() {}

  explicit DeleteHiTSDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteHiTSDBInstanceRequest() = default;
};
class DeleteHiTSDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteHiTSDBInstanceResponseBody() {}

  explicit DeleteHiTSDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteHiTSDBInstanceResponseBody() = default;
};
class DeleteHiTSDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteHiTSDBInstanceResponseBody> body{};

  DeleteHiTSDBInstanceResponse() {}

  explicit DeleteHiTSDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteHiTSDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHiTSDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHiTSDBInstanceResponse() = default;
};
class DescribeHiTSDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> appKey{};
  shared_ptr<string> instanceId{};

  DescribeHiTSDBInstanceRequest() {}

  explicit DescribeHiTSDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeHiTSDBInstanceRequest() = default;
};
class DescribeHiTSDBInstanceResponseBodySecurityIpList : public Darabonba::Model {
public:
  shared_ptr<string> ip{};

  DescribeHiTSDBInstanceResponseBodySecurityIpList() {}

  explicit DescribeHiTSDBInstanceResponseBodySecurityIpList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
  }


  virtual ~DescribeHiTSDBInstanceResponseBodySecurityIpList() = default;
};
class DescribeHiTSDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> autoRenew{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> cpuNumber{};
  shared_ptr<string> memSize{};
  shared_ptr<string> networkType{};
  shared_ptr<string> gmtExpire{};
  shared_ptr<string> instanceAlias{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> maxTimelineLimit{};
  shared_ptr<string> publicConnectionString{};
  shared_ptr<string> engineType{};
  shared_ptr<string> instanceTps{};
  shared_ptr<string> status{};
  shared_ptr<string> instanceStorage{};
  shared_ptr<string> requestId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> diskCategory{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> vswitchId{};
  shared_ptr<long> series{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> chargeType{};
  shared_ptr<vector<DescribeHiTSDBInstanceResponseBodySecurityIpList>> securityIpList{};
  shared_ptr<string> instanceDescription{};
  shared_ptr<string> regionId{};
  shared_ptr<string> connectionString{};

  DescribeHiTSDBInstanceResponseBody() {}

  explicit DescribeHiTSDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (cpuNumber) {
      res["CpuNumber"] = boost::any(*cpuNumber);
    }
    if (memSize) {
      res["MemSize"] = boost::any(*memSize);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (gmtExpire) {
      res["GmtExpire"] = boost::any(*gmtExpire);
    }
    if (instanceAlias) {
      res["InstanceAlias"] = boost::any(*instanceAlias);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (maxTimelineLimit) {
      res["MaxTimelineLimit"] = boost::any(*maxTimelineLimit);
    }
    if (publicConnectionString) {
      res["PublicConnectionString"] = boost::any(*publicConnectionString);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (instanceTps) {
      res["InstanceTps"] = boost::any(*instanceTps);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (instanceStorage) {
      res["InstanceStorage"] = boost::any(*instanceStorage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (diskCategory) {
      res["DiskCategory"] = boost::any(*diskCategory);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (series) {
      res["Series"] = boost::any(*series);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (securityIpList) {
      vector<boost::any> temp1;
      for(auto item1:*securityIpList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityIpList"] = boost::any(temp1);
    }
    if (instanceDescription) {
      res["InstanceDescription"] = boost::any(*instanceDescription);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("CpuNumber") != m.end() && !m["CpuNumber"].empty()) {
      cpuNumber = make_shared<string>(boost::any_cast<string>(m["CpuNumber"]));
    }
    if (m.find("MemSize") != m.end() && !m["MemSize"].empty()) {
      memSize = make_shared<string>(boost::any_cast<string>(m["MemSize"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("GmtExpire") != m.end() && !m["GmtExpire"].empty()) {
      gmtExpire = make_shared<string>(boost::any_cast<string>(m["GmtExpire"]));
    }
    if (m.find("InstanceAlias") != m.end() && !m["InstanceAlias"].empty()) {
      instanceAlias = make_shared<string>(boost::any_cast<string>(m["InstanceAlias"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("MaxTimelineLimit") != m.end() && !m["MaxTimelineLimit"].empty()) {
      maxTimelineLimit = make_shared<string>(boost::any_cast<string>(m["MaxTimelineLimit"]));
    }
    if (m.find("PublicConnectionString") != m.end() && !m["PublicConnectionString"].empty()) {
      publicConnectionString = make_shared<string>(boost::any_cast<string>(m["PublicConnectionString"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("InstanceTps") != m.end() && !m["InstanceTps"].empty()) {
      instanceTps = make_shared<string>(boost::any_cast<string>(m["InstanceTps"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("InstanceStorage") != m.end() && !m["InstanceStorage"].empty()) {
      instanceStorage = make_shared<string>(boost::any_cast<string>(m["InstanceStorage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DiskCategory") != m.end() && !m["DiskCategory"].empty()) {
      diskCategory = make_shared<string>(boost::any_cast<string>(m["DiskCategory"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      series = make_shared<long>(boost::any_cast<long>(m["Series"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("SecurityIpList") != m.end() && !m["SecurityIpList"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityIpList"].type()) {
        vector<DescribeHiTSDBInstanceResponseBodySecurityIpList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityIpList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHiTSDBInstanceResponseBodySecurityIpList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityIpList = make_shared<vector<DescribeHiTSDBInstanceResponseBodySecurityIpList>>(expect1);
      }
    }
    if (m.find("InstanceDescription") != m.end() && !m["InstanceDescription"].empty()) {
      instanceDescription = make_shared<string>(boost::any_cast<string>(m["InstanceDescription"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
  }


  virtual ~DescribeHiTSDBInstanceResponseBody() = default;
};
class DescribeHiTSDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeHiTSDBInstanceResponseBody> body{};

  DescribeHiTSDBInstanceResponse() {}

  explicit DescribeHiTSDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHiTSDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHiTSDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHiTSDBInstanceResponse() = default;
};
class DescribeHiTSDBInstanceListRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> appKey{};
  shared_ptr<string> queryStr{};
  shared_ptr<string> statusList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> engineType{};

  DescribeHiTSDBInstanceListRequest() {}

  explicit DescribeHiTSDBInstanceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (queryStr) {
      res["QueryStr"] = boost::any(*queryStr);
    }
    if (statusList) {
      res["StatusList"] = boost::any(*statusList);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
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
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("QueryStr") != m.end() && !m["QueryStr"].empty()) {
      queryStr = make_shared<string>(boost::any_cast<string>(m["QueryStr"]));
    }
    if (m.find("StatusList") != m.end() && !m["StatusList"].empty()) {
      statusList = make_shared<string>(boost::any_cast<string>(m["StatusList"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
  }


  virtual ~DescribeHiTSDBInstanceListRequest() = default;
};
class DescribeHiTSDBInstanceListResponseBodyInstanceList : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> status{};
  shared_ptr<string> maxSeriesPerDatabase{};
  shared_ptr<string> paymentType{};
  shared_ptr<string> engineType{};
  shared_ptr<string> vswitchId{};
  shared_ptr<string> instanceClass{};
  shared_ptr<long> createTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> instanceStorage{};
  shared_ptr<string> networkType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> instanceDescription{};
  shared_ptr<string> regionId{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> instanceAlias{};
  shared_ptr<string> instanceTps{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> gmtExpire{};

  DescribeHiTSDBInstanceListResponseBodyInstanceList() {}

  explicit DescribeHiTSDBInstanceListResponseBodyInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (maxSeriesPerDatabase) {
      res["MaxSeriesPerDatabase"] = boost::any(*maxSeriesPerDatabase);
    }
    if (paymentType) {
      res["PaymentType"] = boost::any(*paymentType);
    }
    if (engineType) {
      res["EngineType"] = boost::any(*engineType);
    }
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (instanceStorage) {
      res["InstanceStorage"] = boost::any(*instanceStorage);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["LockMode"] = boost::any(*lockMode);
    }
    if (instanceDescription) {
      res["InstanceDescription"] = boost::any(*instanceDescription);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (instanceAlias) {
      res["InstanceAlias"] = boost::any(*instanceAlias);
    }
    if (instanceTps) {
      res["InstanceTps"] = boost::any(*instanceTps);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (gmtExpire) {
      res["GmtExpire"] = boost::any(*gmtExpire);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("MaxSeriesPerDatabase") != m.end() && !m["MaxSeriesPerDatabase"].empty()) {
      maxSeriesPerDatabase = make_shared<string>(boost::any_cast<string>(m["MaxSeriesPerDatabase"]));
    }
    if (m.find("PaymentType") != m.end() && !m["PaymentType"].empty()) {
      paymentType = make_shared<string>(boost::any_cast<string>(m["PaymentType"]));
    }
    if (m.find("EngineType") != m.end() && !m["EngineType"].empty()) {
      engineType = make_shared<string>(boost::any_cast<string>(m["EngineType"]));
    }
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("InstanceStorage") != m.end() && !m["InstanceStorage"].empty()) {
      instanceStorage = make_shared<string>(boost::any_cast<string>(m["InstanceStorage"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LockMode") != m.end() && !m["LockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["LockMode"]));
    }
    if (m.find("InstanceDescription") != m.end() && !m["InstanceDescription"].empty()) {
      instanceDescription = make_shared<string>(boost::any_cast<string>(m["InstanceDescription"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("InstanceAlias") != m.end() && !m["InstanceAlias"].empty()) {
      instanceAlias = make_shared<string>(boost::any_cast<string>(m["InstanceAlias"]));
    }
    if (m.find("InstanceTps") != m.end() && !m["InstanceTps"].empty()) {
      instanceTps = make_shared<string>(boost::any_cast<string>(m["InstanceTps"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("GmtExpire") != m.end() && !m["GmtExpire"].empty()) {
      gmtExpire = make_shared<string>(boost::any_cast<string>(m["GmtExpire"]));
    }
  }


  virtual ~DescribeHiTSDBInstanceListResponseBodyInstanceList() = default;
};
class DescribeHiTSDBInstanceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> total{};
  shared_ptr<vector<DescribeHiTSDBInstanceListResponseBodyInstanceList>> instanceList{};

  DescribeHiTSDBInstanceListResponseBody() {}

  explicit DescribeHiTSDBInstanceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (instanceList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceList"].type()) {
        vector<DescribeHiTSDBInstanceListResponseBodyInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHiTSDBInstanceListResponseBodyInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceList = make_shared<vector<DescribeHiTSDBInstanceListResponseBodyInstanceList>>(expect1);
      }
    }
  }


  virtual ~DescribeHiTSDBInstanceListResponseBody() = default;
};
class DescribeHiTSDBInstanceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeHiTSDBInstanceListResponseBody> body{};

  DescribeHiTSDBInstanceListResponse() {}

  explicit DescribeHiTSDBInstanceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHiTSDBInstanceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHiTSDBInstanceListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHiTSDBInstanceListResponse() = default;
};
class DescribeHiTSDBInstanceSecurityIpListRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> groupName{};

  DescribeHiTSDBInstanceSecurityIpListRequest() {}

  explicit DescribeHiTSDBInstanceSecurityIpListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~DescribeHiTSDBInstanceSecurityIpListRequest() = default;
};
class DescribeHiTSDBInstanceSecurityIpListResponseBodySecurityIpList : public Darabonba::Model {
public:
  shared_ptr<string> ip{};

  DescribeHiTSDBInstanceSecurityIpListResponseBodySecurityIpList() {}

  explicit DescribeHiTSDBInstanceSecurityIpListResponseBodySecurityIpList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
  }


  virtual ~DescribeHiTSDBInstanceSecurityIpListResponseBodySecurityIpList() = default;
};
class DescribeHiTSDBInstanceSecurityIpListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeHiTSDBInstanceSecurityIpListResponseBodySecurityIpList>> securityIpList{};

  DescribeHiTSDBInstanceSecurityIpListResponseBody() {}

  explicit DescribeHiTSDBInstanceSecurityIpListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityIpList) {
      vector<boost::any> temp1;
      for(auto item1:*securityIpList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityIpList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityIpList") != m.end() && !m["SecurityIpList"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityIpList"].type()) {
        vector<DescribeHiTSDBInstanceSecurityIpListResponseBodySecurityIpList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityIpList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHiTSDBInstanceSecurityIpListResponseBodySecurityIpList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityIpList = make_shared<vector<DescribeHiTSDBInstanceSecurityIpListResponseBodySecurityIpList>>(expect1);
      }
    }
  }


  virtual ~DescribeHiTSDBInstanceSecurityIpListResponseBody() = default;
};
class DescribeHiTSDBInstanceSecurityIpListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeHiTSDBInstanceSecurityIpListResponseBody> body{};

  DescribeHiTSDBInstanceSecurityIpListResponse() {}

  explicit DescribeHiTSDBInstanceSecurityIpListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHiTSDBInstanceSecurityIpListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHiTSDBInstanceSecurityIpListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHiTSDBInstanceSecurityIpListResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
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
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
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
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
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
class DescribeZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> language{};

  DescribeZonesRequest() {}

  explicit DescribeZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (language) {
      res["Language"] = boost::any(*language);
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
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~DescribeZonesRequest() = default;
};
class DescribeZonesResponseBodyZoneListZoneModel : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> zoneId{};

  DescribeZonesResponseBodyZoneListZoneModel() {}

  explicit DescribeZonesResponseBodyZoneListZoneModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeZonesResponseBodyZoneListZoneModel() = default;
};
class DescribeZonesResponseBodyZoneList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeZonesResponseBodyZoneListZoneModel>> zoneModel{};

  DescribeZonesResponseBodyZoneList() {}

  explicit DescribeZonesResponseBodyZoneList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneModel) {
      vector<boost::any> temp1;
      for(auto item1:*zoneModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneModel") != m.end() && !m["ZoneModel"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneModel"].type()) {
        vector<DescribeZonesResponseBodyZoneListZoneModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesResponseBodyZoneListZoneModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneModel = make_shared<vector<DescribeZonesResponseBodyZoneListZoneModel>>(expect1);
      }
    }
  }


  virtual ~DescribeZonesResponseBodyZoneList() = default;
};
class DescribeZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeZonesResponseBodyZoneList> zoneList{};

  DescribeZonesResponseBody() {}

  explicit DescribeZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zoneList) {
      res["ZoneList"] = zoneList ? boost::any(zoneList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ZoneList") != m.end() && !m["ZoneList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ZoneList"].type()) {
        DescribeZonesResponseBodyZoneList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ZoneList"]));
        zoneList = make_shared<DescribeZonesResponseBodyZoneList>(model1);
      }
    }
  }


  virtual ~DescribeZonesResponseBody() = default;
};
class DescribeZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeZonesResponseBody> body{};

  DescribeZonesResponse() {}

  explicit DescribeZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeZonesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeZonesResponse() = default;
};
class ModifyHiTSDBInstanceClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> appKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceClass{};
  shared_ptr<string> instanceStorage{};

  ModifyHiTSDBInstanceClassRequest() {}

  explicit ModifyHiTSDBInstanceClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceClass) {
      res["InstanceClass"] = boost::any(*instanceClass);
    }
    if (instanceStorage) {
      res["InstanceStorage"] = boost::any(*instanceStorage);
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
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceClass") != m.end() && !m["InstanceClass"].empty()) {
      instanceClass = make_shared<string>(boost::any_cast<string>(m["InstanceClass"]));
    }
    if (m.find("InstanceStorage") != m.end() && !m["InstanceStorage"].empty()) {
      instanceStorage = make_shared<string>(boost::any_cast<string>(m["InstanceStorage"]));
    }
  }


  virtual ~ModifyHiTSDBInstanceClassRequest() = default;
};
class ModifyHiTSDBInstanceClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyHiTSDBInstanceClassResponseBody() {}

  explicit ModifyHiTSDBInstanceClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyHiTSDBInstanceClassResponseBody() = default;
};
class ModifyHiTSDBInstanceClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyHiTSDBInstanceClassResponseBody> body{};

  ModifyHiTSDBInstanceClassResponse() {}

  explicit ModifyHiTSDBInstanceClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyHiTSDBInstanceClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyHiTSDBInstanceClassResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyHiTSDBInstanceClassResponse() = default;
};
class ModifyHiTSDBInstanceSecurityIpListRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> securityIpList{};
  shared_ptr<string> groupName{};

  ModifyHiTSDBInstanceSecurityIpListRequest() {}

  explicit ModifyHiTSDBInstanceSecurityIpListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (securityIpList) {
      res["SecurityIpList"] = boost::any(*securityIpList);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SecurityIpList") != m.end() && !m["SecurityIpList"].empty()) {
      securityIpList = make_shared<string>(boost::any_cast<string>(m["SecurityIpList"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~ModifyHiTSDBInstanceSecurityIpListRequest() = default;
};
class ModifyHiTSDBInstanceSecurityIpListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyHiTSDBInstanceSecurityIpListResponseBody() {}

  explicit ModifyHiTSDBInstanceSecurityIpListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyHiTSDBInstanceSecurityIpListResponseBody() = default;
};
class ModifyHiTSDBInstanceSecurityIpListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyHiTSDBInstanceSecurityIpListResponseBody> body{};

  ModifyHiTSDBInstanceSecurityIpListResponse() {}

  explicit ModifyHiTSDBInstanceSecurityIpListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyHiTSDBInstanceSecurityIpListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyHiTSDBInstanceSecurityIpListResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyHiTSDBInstanceSecurityIpListResponse() = default;
};
class RenameHiTSDBInstanceAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> appKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceAlias{};

  RenameHiTSDBInstanceAliasRequest() {}

  explicit RenameHiTSDBInstanceAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceAlias) {
      res["InstanceAlias"] = boost::any(*instanceAlias);
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
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceAlias") != m.end() && !m["InstanceAlias"].empty()) {
      instanceAlias = make_shared<string>(boost::any_cast<string>(m["InstanceAlias"]));
    }
  }


  virtual ~RenameHiTSDBInstanceAliasRequest() = default;
};
class RenameHiTSDBInstanceAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RenameHiTSDBInstanceAliasResponseBody() {}

  explicit RenameHiTSDBInstanceAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RenameHiTSDBInstanceAliasResponseBody() = default;
};
class RenameHiTSDBInstanceAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RenameHiTSDBInstanceAliasResponseBody> body{};

  RenameHiTSDBInstanceAliasResponse() {}

  explicit RenameHiTSDBInstanceAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenameHiTSDBInstanceAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenameHiTSDBInstanceAliasResponseBody>(model1);
      }
    }
  }


  virtual ~RenameHiTSDBInstanceAliasResponse() = default;
};
class RenewTSDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> regionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<long> duration{};

  RenewTSDBInstanceRequest() {}

  explicit RenewTSDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~RenewTSDBInstanceRequest() = default;
};
class RenewTSDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> orderId{};

  RenewTSDBInstanceResponseBody() {}

  explicit RenewTSDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~RenewTSDBInstanceResponseBody() = default;
};
class RenewTSDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RenewTSDBInstanceResponseBody> body{};

  RenewTSDBInstanceResponse() {}

  explicit RenewTSDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewTSDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewTSDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RenewTSDBInstanceResponse() = default;
};
class RestartHiTSDBInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};

  RestartHiTSDBInstanceRequest() {}

  explicit RestartHiTSDBInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~RestartHiTSDBInstanceRequest() = default;
};
class RestartHiTSDBInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RestartHiTSDBInstanceResponseBody() {}

  explicit RestartHiTSDBInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RestartHiTSDBInstanceResponseBody() = default;
};
class RestartHiTSDBInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RestartHiTSDBInstanceResponseBody> body{};

  RestartHiTSDBInstanceResponse() {}

  explicit RestartHiTSDBInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartHiTSDBInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartHiTSDBInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RestartHiTSDBInstanceResponse() = default;
};
class SwitchHiTSDBInstancePublicNetRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> switchAction{};

  SwitchHiTSDBInstancePublicNetRequest() {}

  explicit SwitchHiTSDBInstancePublicNetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (switchAction) {
      res["SwitchAction"] = boost::any(*switchAction);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SwitchAction") != m.end() && !m["SwitchAction"].empty()) {
      switchAction = make_shared<long>(boost::any_cast<long>(m["SwitchAction"]));
    }
  }


  virtual ~SwitchHiTSDBInstancePublicNetRequest() = default;
};
class SwitchHiTSDBInstancePublicNetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SwitchHiTSDBInstancePublicNetResponseBody() {}

  explicit SwitchHiTSDBInstancePublicNetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SwitchHiTSDBInstancePublicNetResponseBody() = default;
};
class SwitchHiTSDBInstancePublicNetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SwitchHiTSDBInstancePublicNetResponseBody> body{};

  SwitchHiTSDBInstancePublicNetResponse() {}

  explicit SwitchHiTSDBInstancePublicNetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwitchHiTSDBInstancePublicNetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchHiTSDBInstancePublicNetResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchHiTSDBInstancePublicNetResponse() = default;
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
  CreateHiTSDBInstanceResponse createHiTSDBInstanceWithOptions(shared_ptr<CreateHiTSDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHiTSDBInstanceResponse createHiTSDBInstance(shared_ptr<CreateHiTSDBInstanceRequest> request);
  DeleteHiTSDBInstanceResponse deleteHiTSDBInstanceWithOptions(shared_ptr<DeleteHiTSDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHiTSDBInstanceResponse deleteHiTSDBInstance(shared_ptr<DeleteHiTSDBInstanceRequest> request);
  DescribeHiTSDBInstanceResponse describeHiTSDBInstanceWithOptions(shared_ptr<DescribeHiTSDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHiTSDBInstanceResponse describeHiTSDBInstance(shared_ptr<DescribeHiTSDBInstanceRequest> request);
  DescribeHiTSDBInstanceListResponse describeHiTSDBInstanceListWithOptions(shared_ptr<DescribeHiTSDBInstanceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHiTSDBInstanceListResponse describeHiTSDBInstanceList(shared_ptr<DescribeHiTSDBInstanceListRequest> request);
  DescribeHiTSDBInstanceSecurityIpListResponse describeHiTSDBInstanceSecurityIpListWithOptions(shared_ptr<DescribeHiTSDBInstanceSecurityIpListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHiTSDBInstanceSecurityIpListResponse describeHiTSDBInstanceSecurityIpList(shared_ptr<DescribeHiTSDBInstanceSecurityIpListRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  ModifyHiTSDBInstanceClassResponse modifyHiTSDBInstanceClassWithOptions(shared_ptr<ModifyHiTSDBInstanceClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyHiTSDBInstanceClassResponse modifyHiTSDBInstanceClass(shared_ptr<ModifyHiTSDBInstanceClassRequest> request);
  ModifyHiTSDBInstanceSecurityIpListResponse modifyHiTSDBInstanceSecurityIpListWithOptions(shared_ptr<ModifyHiTSDBInstanceSecurityIpListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyHiTSDBInstanceSecurityIpListResponse modifyHiTSDBInstanceSecurityIpList(shared_ptr<ModifyHiTSDBInstanceSecurityIpListRequest> request);
  RenameHiTSDBInstanceAliasResponse renameHiTSDBInstanceAliasWithOptions(shared_ptr<RenameHiTSDBInstanceAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenameHiTSDBInstanceAliasResponse renameHiTSDBInstanceAlias(shared_ptr<RenameHiTSDBInstanceAliasRequest> request);
  RenewTSDBInstanceResponse renewTSDBInstanceWithOptions(shared_ptr<RenewTSDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewTSDBInstanceResponse renewTSDBInstance(shared_ptr<RenewTSDBInstanceRequest> request);
  RestartHiTSDBInstanceResponse restartHiTSDBInstanceWithOptions(shared_ptr<RestartHiTSDBInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartHiTSDBInstanceResponse restartHiTSDBInstance(shared_ptr<RestartHiTSDBInstanceRequest> request);
  SwitchHiTSDBInstancePublicNetResponse switchHiTSDBInstancePublicNetWithOptions(shared_ptr<SwitchHiTSDBInstancePublicNetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchHiTSDBInstancePublicNetResponse switchHiTSDBInstancePublicNet(shared_ptr<SwitchHiTSDBInstancePublicNetRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Hitsdb20170601

#endif
