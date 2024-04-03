// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CDDC20200320_H_
#define ALIBABACLOUD_CDDC20200320_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cddc20200320 {
class CreateDedicatedHostRequestMyBaseEcsClass : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> dataDiskCategory{};
  shared_ptr<long> dataDiskCount{};
  shared_ptr<long> dataDiskSize{};
  shared_ptr<string> depolymentSetId{};
  shared_ptr<string> ecsClassCode{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthOut{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> password{};
  shared_ptr<long> period{};
  shared_ptr<string> periodType{};
  shared_ptr<vector<string>> securityGroupIds{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<vector<string>> tags{};

  CreateDedicatedHostRequestMyBaseEcsClass() {}

  explicit CreateDedicatedHostRequestMyBaseEcsClass(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (dataDiskCategory) {
      res["DataDiskCategory"] = boost::any(*dataDiskCategory);
    }
    if (dataDiskCount) {
      res["DataDiskCount"] = boost::any(*dataDiskCount);
    }
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    if (depolymentSetId) {
      res["DepolymentSetId"] = boost::any(*depolymentSetId);
    }
    if (ecsClassCode) {
      res["EcsClassCode"] = boost::any(*ecsClassCode);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandwidthOut) {
      res["InternetMaxBandwidthOut"] = boost::any(*internetMaxBandwidthOut);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodType) {
      res["PeriodType"] = boost::any(*periodType);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("DataDiskCategory") != m.end() && !m["DataDiskCategory"].empty()) {
      dataDiskCategory = make_shared<string>(boost::any_cast<string>(m["DataDiskCategory"]));
    }
    if (m.find("DataDiskCount") != m.end() && !m["DataDiskCount"].empty()) {
      dataDiskCount = make_shared<long>(boost::any_cast<long>(m["DataDiskCount"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<long>(boost::any_cast<long>(m["DataDiskSize"]));
    }
    if (m.find("DepolymentSetId") != m.end() && !m["DepolymentSetId"].empty()) {
      depolymentSetId = make_shared<string>(boost::any_cast<string>(m["DepolymentSetId"]));
    }
    if (m.find("EcsClassCode") != m.end() && !m["EcsClassCode"].empty()) {
      ecsClassCode = make_shared<string>(boost::any_cast<string>(m["EcsClassCode"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("InternetMaxBandwidthOut") != m.end() && !m["InternetMaxBandwidthOut"].empty()) {
      internetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandwidthOut"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodType") != m.end() && !m["PeriodType"].empty()) {
      periodType = make_shared<string>(boost::any_cast<string>(m["PeriodType"]));
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateDedicatedHostRequestMyBaseEcsClass() = default;
};
class CreateDedicatedHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoRenew{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterAlias{};
  shared_ptr<vector<string>> clusterServices{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> hostClass{};
  shared_ptr<string> hostStorage{};
  shared_ptr<string> hostStorageType{};
  shared_ptr<string> imageCategory{};
  shared_ptr<CreateDedicatedHostRequestMyBaseEcsClass> myBaseEcsClass{};
  shared_ptr<string> osPassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> usedTime{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcID{};
  shared_ptr<string> zoneId{};

  CreateDedicatedHostRequest() {}

  explicit CreateDedicatedHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterAlias) {
      res["ClusterAlias"] = boost::any(*clusterAlias);
    }
    if (clusterServices) {
      res["ClusterServices"] = boost::any(*clusterServices);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (hostClass) {
      res["HostClass"] = boost::any(*hostClass);
    }
    if (hostStorage) {
      res["HostStorage"] = boost::any(*hostStorage);
    }
    if (hostStorageType) {
      res["HostStorageType"] = boost::any(*hostStorageType);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (myBaseEcsClass) {
      res["MyBaseEcsClass"] = myBaseEcsClass ? boost::any(myBaseEcsClass->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (osPassword) {
      res["OsPassword"] = boost::any(*osPassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
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
    if (vpcID) {
      res["VpcID"] = boost::any(*vpcID);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterAlias") != m.end() && !m["ClusterAlias"].empty()) {
      clusterAlias = make_shared<string>(boost::any_cast<string>(m["ClusterAlias"]));
    }
    if (m.find("ClusterServices") != m.end() && !m["ClusterServices"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClusterServices"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClusterServices"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusterServices = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("HostClass") != m.end() && !m["HostClass"].empty()) {
      hostClass = make_shared<string>(boost::any_cast<string>(m["HostClass"]));
    }
    if (m.find("HostStorage") != m.end() && !m["HostStorage"].empty()) {
      hostStorage = make_shared<string>(boost::any_cast<string>(m["HostStorage"]));
    }
    if (m.find("HostStorageType") != m.end() && !m["HostStorageType"].empty()) {
      hostStorageType = make_shared<string>(boost::any_cast<string>(m["HostStorageType"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("MyBaseEcsClass") != m.end() && !m["MyBaseEcsClass"].empty()) {
      if (typeid(map<string, boost::any>) == m["MyBaseEcsClass"].type()) {
        CreateDedicatedHostRequestMyBaseEcsClass model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MyBaseEcsClass"]));
        myBaseEcsClass = make_shared<CreateDedicatedHostRequestMyBaseEcsClass>(model1);
      }
    }
    if (m.find("OsPassword") != m.end() && !m["OsPassword"].empty()) {
      osPassword = make_shared<string>(boost::any_cast<string>(m["OsPassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
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
    if (m.find("VpcID") != m.end() && !m["VpcID"].empty()) {
      vpcID = make_shared<string>(boost::any_cast<string>(m["VpcID"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDedicatedHostRequest() = default;
};
class CreateDedicatedHostShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> autoRenew{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterAlias{};
  shared_ptr<string> clusterServicesShrink{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> hostClass{};
  shared_ptr<string> hostStorage{};
  shared_ptr<string> hostStorageType{};
  shared_ptr<string> imageCategory{};
  shared_ptr<string> myBaseEcsClassShrink{};
  shared_ptr<string> osPassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> usedTime{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcID{};
  shared_ptr<string> zoneId{};

  CreateDedicatedHostShrinkRequest() {}

  explicit CreateDedicatedHostShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterAlias) {
      res["ClusterAlias"] = boost::any(*clusterAlias);
    }
    if (clusterServicesShrink) {
      res["ClusterServices"] = boost::any(*clusterServicesShrink);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (hostClass) {
      res["HostClass"] = boost::any(*hostClass);
    }
    if (hostStorage) {
      res["HostStorage"] = boost::any(*hostStorage);
    }
    if (hostStorageType) {
      res["HostStorageType"] = boost::any(*hostStorageType);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (myBaseEcsClassShrink) {
      res["MyBaseEcsClass"] = boost::any(*myBaseEcsClassShrink);
    }
    if (osPassword) {
      res["OsPassword"] = boost::any(*osPassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
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
    if (vpcID) {
      res["VpcID"] = boost::any(*vpcID);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterAlias") != m.end() && !m["ClusterAlias"].empty()) {
      clusterAlias = make_shared<string>(boost::any_cast<string>(m["ClusterAlias"]));
    }
    if (m.find("ClusterServices") != m.end() && !m["ClusterServices"].empty()) {
      clusterServicesShrink = make_shared<string>(boost::any_cast<string>(m["ClusterServices"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("HostClass") != m.end() && !m["HostClass"].empty()) {
      hostClass = make_shared<string>(boost::any_cast<string>(m["HostClass"]));
    }
    if (m.find("HostStorage") != m.end() && !m["HostStorage"].empty()) {
      hostStorage = make_shared<string>(boost::any_cast<string>(m["HostStorage"]));
    }
    if (m.find("HostStorageType") != m.end() && !m["HostStorageType"].empty()) {
      hostStorageType = make_shared<string>(boost::any_cast<string>(m["HostStorageType"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("MyBaseEcsClass") != m.end() && !m["MyBaseEcsClass"].empty()) {
      myBaseEcsClassShrink = make_shared<string>(boost::any_cast<string>(m["MyBaseEcsClass"]));
    }
    if (m.find("OsPassword") != m.end() && !m["OsPassword"].empty()) {
      osPassword = make_shared<string>(boost::any_cast<string>(m["OsPassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
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
    if (m.find("VpcID") != m.end() && !m["VpcID"].empty()) {
      vpcID = make_shared<string>(boost::any_cast<string>(m["VpcID"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateDedicatedHostShrinkRequest() = default;
};
class CreateDedicatedHostResponseBodyDedicateHostListDedicateHostList : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};

  CreateDedicatedHostResponseBodyDedicateHostListDedicateHostList() {}

  explicit CreateDedicatedHostResponseBodyDedicateHostListDedicateHostList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
  }


  virtual ~CreateDedicatedHostResponseBodyDedicateHostListDedicateHostList() = default;
};
class CreateDedicatedHostResponseBodyDedicateHostList : public Darabonba::Model {
public:
  shared_ptr<vector<CreateDedicatedHostResponseBodyDedicateHostListDedicateHostList>> dedicateHostList{};

  CreateDedicatedHostResponseBodyDedicateHostList() {}

  explicit CreateDedicatedHostResponseBodyDedicateHostList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicateHostList) {
      vector<boost::any> temp1;
      for(auto item1:*dedicateHostList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DedicateHostList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicateHostList") != m.end() && !m["DedicateHostList"].empty()) {
      if (typeid(vector<boost::any>) == m["DedicateHostList"].type()) {
        vector<CreateDedicatedHostResponseBodyDedicateHostListDedicateHostList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DedicateHostList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDedicatedHostResponseBodyDedicateHostListDedicateHostList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dedicateHostList = make_shared<vector<CreateDedicatedHostResponseBodyDedicateHostListDedicateHostList>>(expect1);
      }
    }
  }


  virtual ~CreateDedicatedHostResponseBodyDedicateHostList() = default;
};
class CreateDedicatedHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterName{};
  shared_ptr<CreateDedicatedHostResponseBodyDedicateHostList> dedicateHostList{};
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  CreateDedicatedHostResponseBody() {}

  explicit CreateDedicatedHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (dedicateHostList) {
      res["DedicateHostList"] = dedicateHostList ? boost::any(dedicateHostList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("DedicateHostList") != m.end() && !m["DedicateHostList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DedicateHostList"].type()) {
        CreateDedicatedHostResponseBodyDedicateHostList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DedicateHostList"]));
        dedicateHostList = make_shared<CreateDedicatedHostResponseBodyDedicateHostList>(model1);
      }
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDedicatedHostResponseBody() = default;
};
class CreateDedicatedHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDedicatedHostResponseBody> body{};

  CreateDedicatedHostResponse() {}

  explicit CreateDedicatedHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDedicatedHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDedicatedHostResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDedicatedHostResponse() = default;
};
class CreateDedicatedHostAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> accountType{};
  shared_ptr<string> bastionInstanceId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  CreateDedicatedHostAccountRequest() {}

  explicit CreateDedicatedHostAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
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
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~CreateDedicatedHostAccountRequest() = default;
};
class CreateDedicatedHostAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateDedicatedHostAccountResponseBody() {}

  explicit CreateDedicatedHostAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateDedicatedHostAccountResponseBody() = default;
};
class CreateDedicatedHostAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDedicatedHostAccountResponseBody> body{};

  CreateDedicatedHostAccountResponse() {}

  explicit CreateDedicatedHostAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDedicatedHostAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDedicatedHostAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDedicatedHostAccountResponse() = default;
};
class CreateDedicatedHostGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> allocationPolicy{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> cpuAllocationRatio{};
  shared_ptr<string> dedicatedHostGroupDesc{};
  shared_ptr<long> diskAllocationRatio{};
  shared_ptr<string> engine{};
  shared_ptr<string> hostReplacePolicy{};
  shared_ptr<long> memAllocationRatio{};
  shared_ptr<long> openPermission{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> VPCId{};

  CreateDedicatedHostGroupRequest() {}

  explicit CreateDedicatedHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationPolicy) {
      res["AllocationPolicy"] = boost::any(*allocationPolicy);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (cpuAllocationRatio) {
      res["CpuAllocationRatio"] = boost::any(*cpuAllocationRatio);
    }
    if (dedicatedHostGroupDesc) {
      res["DedicatedHostGroupDesc"] = boost::any(*dedicatedHostGroupDesc);
    }
    if (diskAllocationRatio) {
      res["DiskAllocationRatio"] = boost::any(*diskAllocationRatio);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (hostReplacePolicy) {
      res["HostReplacePolicy"] = boost::any(*hostReplacePolicy);
    }
    if (memAllocationRatio) {
      res["MemAllocationRatio"] = boost::any(*memAllocationRatio);
    }
    if (openPermission) {
      res["OpenPermission"] = boost::any(*openPermission);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationPolicy") != m.end() && !m["AllocationPolicy"].empty()) {
      allocationPolicy = make_shared<string>(boost::any_cast<string>(m["AllocationPolicy"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CpuAllocationRatio") != m.end() && !m["CpuAllocationRatio"].empty()) {
      cpuAllocationRatio = make_shared<long>(boost::any_cast<long>(m["CpuAllocationRatio"]));
    }
    if (m.find("DedicatedHostGroupDesc") != m.end() && !m["DedicatedHostGroupDesc"].empty()) {
      dedicatedHostGroupDesc = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupDesc"]));
    }
    if (m.find("DiskAllocationRatio") != m.end() && !m["DiskAllocationRatio"].empty()) {
      diskAllocationRatio = make_shared<long>(boost::any_cast<long>(m["DiskAllocationRatio"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("HostReplacePolicy") != m.end() && !m["HostReplacePolicy"].empty()) {
      hostReplacePolicy = make_shared<string>(boost::any_cast<string>(m["HostReplacePolicy"]));
    }
    if (m.find("MemAllocationRatio") != m.end() && !m["MemAllocationRatio"].empty()) {
      memAllocationRatio = make_shared<long>(boost::any_cast<long>(m["MemAllocationRatio"]));
    }
    if (m.find("OpenPermission") != m.end() && !m["OpenPermission"].empty()) {
      openPermission = make_shared<long>(boost::any_cast<long>(m["OpenPermission"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
  }


  virtual ~CreateDedicatedHostGroupRequest() = default;
};
class CreateDedicatedHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> requestId{};

  CreateDedicatedHostGroupResponseBody() {}

  explicit CreateDedicatedHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDedicatedHostGroupResponseBody() = default;
};
class CreateDedicatedHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDedicatedHostGroupResponseBody> body{};

  CreateDedicatedHostGroupResponse() {}

  explicit CreateDedicatedHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDedicatedHostGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDedicatedHostGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDedicatedHostGroupResponse() = default;
};
class CreateMyBaseRequestECSClassList : public Darabonba::Model {
public:
  shared_ptr<string> dataDiskAutoSnapshotPolicyId{};
  shared_ptr<bool> dataDiskEncrypted{};
  shared_ptr<string> dataDiskKMSKeyId{};
  shared_ptr<string> dataDiskPerformanceLevel{};
  shared_ptr<long> diskCapacity{};
  shared_ptr<long> diskCount{};
  shared_ptr<string> diskType{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> nodeCount{};
  shared_ptr<string> sysDiskAutoSnapshotPolicyId{};
  shared_ptr<long> sysDiskCapacity{};
  shared_ptr<bool> sysDiskEncrypted{};
  shared_ptr<string> sysDiskKMSKeyId{};
  shared_ptr<string> sysDiskType{};
  shared_ptr<string> systemDiskPerformanceLevel{};

  CreateMyBaseRequestECSClassList() {}

  explicit CreateMyBaseRequestECSClassList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDiskAutoSnapshotPolicyId) {
      res["dataDiskAutoSnapshotPolicyId"] = boost::any(*dataDiskAutoSnapshotPolicyId);
    }
    if (dataDiskEncrypted) {
      res["dataDiskEncrypted"] = boost::any(*dataDiskEncrypted);
    }
    if (dataDiskKMSKeyId) {
      res["dataDiskKMSKeyId"] = boost::any(*dataDiskKMSKeyId);
    }
    if (dataDiskPerformanceLevel) {
      res["dataDiskPerformanceLevel"] = boost::any(*dataDiskPerformanceLevel);
    }
    if (diskCapacity) {
      res["diskCapacity"] = boost::any(*diskCapacity);
    }
    if (diskCount) {
      res["diskCount"] = boost::any(*diskCount);
    }
    if (diskType) {
      res["diskType"] = boost::any(*diskType);
    }
    if (instanceType) {
      res["instanceType"] = boost::any(*instanceType);
    }
    if (nodeCount) {
      res["nodeCount"] = boost::any(*nodeCount);
    }
    if (sysDiskAutoSnapshotPolicyId) {
      res["sysDiskAutoSnapshotPolicyId"] = boost::any(*sysDiskAutoSnapshotPolicyId);
    }
    if (sysDiskCapacity) {
      res["sysDiskCapacity"] = boost::any(*sysDiskCapacity);
    }
    if (sysDiskEncrypted) {
      res["sysDiskEncrypted"] = boost::any(*sysDiskEncrypted);
    }
    if (sysDiskKMSKeyId) {
      res["sysDiskKMSKeyId"] = boost::any(*sysDiskKMSKeyId);
    }
    if (sysDiskType) {
      res["sysDiskType"] = boost::any(*sysDiskType);
    }
    if (systemDiskPerformanceLevel) {
      res["systemDiskPerformanceLevel"] = boost::any(*systemDiskPerformanceLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataDiskAutoSnapshotPolicyId") != m.end() && !m["dataDiskAutoSnapshotPolicyId"].empty()) {
      dataDiskAutoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["dataDiskAutoSnapshotPolicyId"]));
    }
    if (m.find("dataDiskEncrypted") != m.end() && !m["dataDiskEncrypted"].empty()) {
      dataDiskEncrypted = make_shared<bool>(boost::any_cast<bool>(m["dataDiskEncrypted"]));
    }
    if (m.find("dataDiskKMSKeyId") != m.end() && !m["dataDiskKMSKeyId"].empty()) {
      dataDiskKMSKeyId = make_shared<string>(boost::any_cast<string>(m["dataDiskKMSKeyId"]));
    }
    if (m.find("dataDiskPerformanceLevel") != m.end() && !m["dataDiskPerformanceLevel"].empty()) {
      dataDiskPerformanceLevel = make_shared<string>(boost::any_cast<string>(m["dataDiskPerformanceLevel"]));
    }
    if (m.find("diskCapacity") != m.end() && !m["diskCapacity"].empty()) {
      diskCapacity = make_shared<long>(boost::any_cast<long>(m["diskCapacity"]));
    }
    if (m.find("diskCount") != m.end() && !m["diskCount"].empty()) {
      diskCount = make_shared<long>(boost::any_cast<long>(m["diskCount"]));
    }
    if (m.find("diskType") != m.end() && !m["diskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["diskType"]));
    }
    if (m.find("instanceType") != m.end() && !m["instanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["instanceType"]));
    }
    if (m.find("nodeCount") != m.end() && !m["nodeCount"].empty()) {
      nodeCount = make_shared<long>(boost::any_cast<long>(m["nodeCount"]));
    }
    if (m.find("sysDiskAutoSnapshotPolicyId") != m.end() && !m["sysDiskAutoSnapshotPolicyId"].empty()) {
      sysDiskAutoSnapshotPolicyId = make_shared<string>(boost::any_cast<string>(m["sysDiskAutoSnapshotPolicyId"]));
    }
    if (m.find("sysDiskCapacity") != m.end() && !m["sysDiskCapacity"].empty()) {
      sysDiskCapacity = make_shared<long>(boost::any_cast<long>(m["sysDiskCapacity"]));
    }
    if (m.find("sysDiskEncrypted") != m.end() && !m["sysDiskEncrypted"].empty()) {
      sysDiskEncrypted = make_shared<bool>(boost::any_cast<bool>(m["sysDiskEncrypted"]));
    }
    if (m.find("sysDiskKMSKeyId") != m.end() && !m["sysDiskKMSKeyId"].empty()) {
      sysDiskKMSKeyId = make_shared<string>(boost::any_cast<string>(m["sysDiskKMSKeyId"]));
    }
    if (m.find("sysDiskType") != m.end() && !m["sysDiskType"].empty()) {
      sysDiskType = make_shared<string>(boost::any_cast<string>(m["sysDiskType"]));
    }
    if (m.find("systemDiskPerformanceLevel") != m.end() && !m["systemDiskPerformanceLevel"].empty()) {
      systemDiskPerformanceLevel = make_shared<string>(boost::any_cast<string>(m["systemDiskPerformanceLevel"]));
    }
  }


  virtual ~CreateMyBaseRequestECSClassList() = default;
};
class CreateMyBaseRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateMyBaseRequestTags() {}

  explicit CreateMyBaseRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateMyBaseRequestTags() = default;
};
class CreateMyBaseRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<string> autoRenew{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dedicatedHostGroupDescription{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<vector<CreateMyBaseRequestECSClassList>> ECSClassList{};
  shared_ptr<string> ecsDeploymentSetId{};
  shared_ptr<string> ecsHostName{};
  shared_ptr<string> ecsInstanceName{};
  shared_ptr<string> ecsUniqueSuffix{};
  shared_ptr<string> engine{};
  shared_ptr<string> imageId{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthOut{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> osPassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> passwordInherit{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> periodType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<CreateMyBaseRequestTags>> tags{};
  shared_ptr<string> userData{};
  shared_ptr<bool> userDataInBase64{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateMyBaseRequest() {}

  explicit CreateMyBaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dedicatedHostGroupDescription) {
      res["DedicatedHostGroupDescription"] = boost::any(*dedicatedHostGroupDescription);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (ECSClassList) {
      vector<boost::any> temp1;
      for(auto item1:*ECSClassList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ECSClassList"] = boost::any(temp1);
    }
    if (ecsDeploymentSetId) {
      res["EcsDeploymentSetId"] = boost::any(*ecsDeploymentSetId);
    }
    if (ecsHostName) {
      res["EcsHostName"] = boost::any(*ecsHostName);
    }
    if (ecsInstanceName) {
      res["EcsInstanceName"] = boost::any(*ecsInstanceName);
    }
    if (ecsUniqueSuffix) {
      res["EcsUniqueSuffix"] = boost::any(*ecsUniqueSuffix);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandwidthOut) {
      res["InternetMaxBandwidthOut"] = boost::any(*internetMaxBandwidthOut);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (osPassword) {
      res["OsPassword"] = boost::any(*osPassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (passwordInherit) {
      res["PasswordInherit"] = boost::any(*passwordInherit);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodType) {
      res["PeriodType"] = boost::any(*periodType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (userDataInBase64) {
      res["UserDataInBase64"] = boost::any(*userDataInBase64);
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
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DedicatedHostGroupDescription") != m.end() && !m["DedicatedHostGroupDescription"].empty()) {
      dedicatedHostGroupDescription = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupDescription"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("ECSClassList") != m.end() && !m["ECSClassList"].empty()) {
      if (typeid(vector<boost::any>) == m["ECSClassList"].type()) {
        vector<CreateMyBaseRequestECSClassList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ECSClassList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMyBaseRequestECSClassList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ECSClassList = make_shared<vector<CreateMyBaseRequestECSClassList>>(expect1);
      }
    }
    if (m.find("EcsDeploymentSetId") != m.end() && !m["EcsDeploymentSetId"].empty()) {
      ecsDeploymentSetId = make_shared<string>(boost::any_cast<string>(m["EcsDeploymentSetId"]));
    }
    if (m.find("EcsHostName") != m.end() && !m["EcsHostName"].empty()) {
      ecsHostName = make_shared<string>(boost::any_cast<string>(m["EcsHostName"]));
    }
    if (m.find("EcsInstanceName") != m.end() && !m["EcsInstanceName"].empty()) {
      ecsInstanceName = make_shared<string>(boost::any_cast<string>(m["EcsInstanceName"]));
    }
    if (m.find("EcsUniqueSuffix") != m.end() && !m["EcsUniqueSuffix"].empty()) {
      ecsUniqueSuffix = make_shared<string>(boost::any_cast<string>(m["EcsUniqueSuffix"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("InternetMaxBandwidthOut") != m.end() && !m["InternetMaxBandwidthOut"].empty()) {
      internetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandwidthOut"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("OsPassword") != m.end() && !m["OsPassword"].empty()) {
      osPassword = make_shared<string>(boost::any_cast<string>(m["OsPassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PasswordInherit") != m.end() && !m["PasswordInherit"].empty()) {
      passwordInherit = make_shared<string>(boost::any_cast<string>(m["PasswordInherit"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("PeriodType") != m.end() && !m["PeriodType"].empty()) {
      periodType = make_shared<string>(boost::any_cast<string>(m["PeriodType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateMyBaseRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMyBaseRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateMyBaseRequestTags>>(expect1);
      }
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("UserDataInBase64") != m.end() && !m["UserDataInBase64"].empty()) {
      userDataInBase64 = make_shared<bool>(boost::any_cast<bool>(m["UserDataInBase64"]));
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


  virtual ~CreateMyBaseRequest() = default;
};
class CreateMyBaseShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoPay{};
  shared_ptr<string> autoRenew{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> dedicatedHostGroupDescription{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> ECSClassListShrink{};
  shared_ptr<string> ecsDeploymentSetId{};
  shared_ptr<string> ecsHostName{};
  shared_ptr<string> ecsInstanceName{};
  shared_ptr<string> ecsUniqueSuffix{};
  shared_ptr<string> engine{};
  shared_ptr<string> imageId{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthOut{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> osPassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> passwordInherit{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> periodType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> userData{};
  shared_ptr<bool> userDataInBase64{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateMyBaseShrinkRequest() {}

  explicit CreateMyBaseShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPay) {
      res["AutoPay"] = boost::any(*autoPay);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dedicatedHostGroupDescription) {
      res["DedicatedHostGroupDescription"] = boost::any(*dedicatedHostGroupDescription);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (ECSClassListShrink) {
      res["ECSClassList"] = boost::any(*ECSClassListShrink);
    }
    if (ecsDeploymentSetId) {
      res["EcsDeploymentSetId"] = boost::any(*ecsDeploymentSetId);
    }
    if (ecsHostName) {
      res["EcsHostName"] = boost::any(*ecsHostName);
    }
    if (ecsInstanceName) {
      res["EcsInstanceName"] = boost::any(*ecsInstanceName);
    }
    if (ecsUniqueSuffix) {
      res["EcsUniqueSuffix"] = boost::any(*ecsUniqueSuffix);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandwidthOut) {
      res["InternetMaxBandwidthOut"] = boost::any(*internetMaxBandwidthOut);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (osPassword) {
      res["OsPassword"] = boost::any(*osPassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (passwordInherit) {
      res["PasswordInherit"] = boost::any(*passwordInherit);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodType) {
      res["PeriodType"] = boost::any(*periodType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (userDataInBase64) {
      res["UserDataInBase64"] = boost::any(*userDataInBase64);
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
    if (m.find("AutoPay") != m.end() && !m["AutoPay"].empty()) {
      autoPay = make_shared<bool>(boost::any_cast<bool>(m["AutoPay"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DedicatedHostGroupDescription") != m.end() && !m["DedicatedHostGroupDescription"].empty()) {
      dedicatedHostGroupDescription = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupDescription"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("ECSClassList") != m.end() && !m["ECSClassList"].empty()) {
      ECSClassListShrink = make_shared<string>(boost::any_cast<string>(m["ECSClassList"]));
    }
    if (m.find("EcsDeploymentSetId") != m.end() && !m["EcsDeploymentSetId"].empty()) {
      ecsDeploymentSetId = make_shared<string>(boost::any_cast<string>(m["EcsDeploymentSetId"]));
    }
    if (m.find("EcsHostName") != m.end() && !m["EcsHostName"].empty()) {
      ecsHostName = make_shared<string>(boost::any_cast<string>(m["EcsHostName"]));
    }
    if (m.find("EcsInstanceName") != m.end() && !m["EcsInstanceName"].empty()) {
      ecsInstanceName = make_shared<string>(boost::any_cast<string>(m["EcsInstanceName"]));
    }
    if (m.find("EcsUniqueSuffix") != m.end() && !m["EcsUniqueSuffix"].empty()) {
      ecsUniqueSuffix = make_shared<string>(boost::any_cast<string>(m["EcsUniqueSuffix"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("InternetMaxBandwidthOut") != m.end() && !m["InternetMaxBandwidthOut"].empty()) {
      internetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandwidthOut"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("OsPassword") != m.end() && !m["OsPassword"].empty()) {
      osPassword = make_shared<string>(boost::any_cast<string>(m["OsPassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PasswordInherit") != m.end() && !m["PasswordInherit"].empty()) {
      passwordInherit = make_shared<string>(boost::any_cast<string>(m["PasswordInherit"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("PeriodType") != m.end() && !m["PeriodType"].empty()) {
      periodType = make_shared<string>(boost::any_cast<string>(m["PeriodType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("UserDataInBase64") != m.end() && !m["UserDataInBase64"].empty()) {
      userDataInBase64 = make_shared<bool>(boost::any_cast<bool>(m["UserDataInBase64"]));
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


  virtual ~CreateMyBaseShrinkRequest() = default;
};
class CreateMyBaseResponseBodyOrderListOrderList : public Darabonba::Model {
public:
  shared_ptr<long> createTimestamp{};
  shared_ptr<string> dedicatedHostGroupName{};
  shared_ptr<string> ECSInstanceIds{};
  shared_ptr<string> orderId{};

  CreateMyBaseResponseBodyOrderListOrderList() {}

  explicit CreateMyBaseResponseBodyOrderListOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimestamp) {
      res["CreateTimestamp"] = boost::any(*createTimestamp);
    }
    if (dedicatedHostGroupName) {
      res["DedicatedHostGroupName"] = boost::any(*dedicatedHostGroupName);
    }
    if (ECSInstanceIds) {
      res["ECSInstanceIds"] = boost::any(*ECSInstanceIds);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimestamp") != m.end() && !m["CreateTimestamp"].empty()) {
      createTimestamp = make_shared<long>(boost::any_cast<long>(m["CreateTimestamp"]));
    }
    if (m.find("DedicatedHostGroupName") != m.end() && !m["DedicatedHostGroupName"].empty()) {
      dedicatedHostGroupName = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupName"]));
    }
    if (m.find("ECSInstanceIds") != m.end() && !m["ECSInstanceIds"].empty()) {
      ECSInstanceIds = make_shared<string>(boost::any_cast<string>(m["ECSInstanceIds"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~CreateMyBaseResponseBodyOrderListOrderList() = default;
};
class CreateMyBaseResponseBodyOrderList : public Darabonba::Model {
public:
  shared_ptr<vector<CreateMyBaseResponseBodyOrderListOrderList>> orderList{};

  CreateMyBaseResponseBodyOrderList() {}

  explicit CreateMyBaseResponseBodyOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderList) {
      vector<boost::any> temp1;
      for(auto item1:*orderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrderList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderList") != m.end() && !m["OrderList"].empty()) {
      if (typeid(vector<boost::any>) == m["OrderList"].type()) {
        vector<CreateMyBaseResponseBodyOrderListOrderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMyBaseResponseBodyOrderListOrderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderList = make_shared<vector<CreateMyBaseResponseBodyOrderListOrderList>>(expect1);
      }
    }
  }


  virtual ~CreateMyBaseResponseBodyOrderList() = default;
};
class CreateMyBaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateMyBaseResponseBodyOrderList> orderList{};
  shared_ptr<string> requestId{};

  CreateMyBaseResponseBody() {}

  explicit CreateMyBaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderList) {
      res["OrderList"] = orderList ? boost::any(orderList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderList") != m.end() && !m["OrderList"].empty()) {
      if (typeid(map<string, boost::any>) == m["OrderList"].type()) {
        CreateMyBaseResponseBodyOrderList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OrderList"]));
        orderList = make_shared<CreateMyBaseResponseBodyOrderList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateMyBaseResponseBody() = default;
};
class CreateMyBaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMyBaseResponseBody> body{};

  CreateMyBaseResponse() {}

  explicit CreateMyBaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateMyBaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMyBaseResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMyBaseResponse() = default;
};
class DeleteDedicatedHostAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDedicatedHostAccountRequest() {}

  explicit DeleteDedicatedHostAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
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
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteDedicatedHostAccountRequest() = default;
};
class DeleteDedicatedHostAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDedicatedHostAccountResponseBody() {}

  explicit DeleteDedicatedHostAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDedicatedHostAccountResponseBody() = default;
};
class DeleteDedicatedHostAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDedicatedHostAccountResponseBody> body{};

  DeleteDedicatedHostAccountResponse() {}

  explicit DeleteDedicatedHostAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDedicatedHostAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDedicatedHostAccountResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDedicatedHostAccountResponse() = default;
};
class DeleteDedicatedHostGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteDedicatedHostGroupRequest() {}

  explicit DeleteDedicatedHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteDedicatedHostGroupRequest() = default;
};
class DeleteDedicatedHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDedicatedHostGroupResponseBody() {}

  explicit DeleteDedicatedHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDedicatedHostGroupResponseBody() = default;
};
class DeleteDedicatedHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDedicatedHostGroupResponseBody> body{};

  DeleteDedicatedHostGroupResponse() {}

  explicit DeleteDedicatedHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDedicatedHostGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDedicatedHostGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDedicatedHostGroupResponse() = default;
};
class DescribeDedicatedHostAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDedicatedHostAttributeRequest() {}

  explicit DescribeDedicatedHostAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDedicatedHostAttributeRequest() = default;
};
class DescribeDedicatedHostAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountType{};
  shared_ptr<string> allocationStatus{};
  shared_ptr<string> autoRenew{};
  shared_ptr<string> CPUAllocationRatio{};
  shared_ptr<string> cpuUsed{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> diskAllocationRatio{};
  shared_ptr<string> distributionTag{};
  shared_ptr<string> ecsClassCode{};
  shared_ptr<string> expiredTime{};
  shared_ptr<long> hostCPU{};
  shared_ptr<string> hostClass{};
  shared_ptr<long> hostMem{};
  shared_ptr<string> hostName{};
  shared_ptr<string> hostStatus{};
  shared_ptr<long> hostStorage{};
  shared_ptr<string> hostType{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> imageCategory{};
  shared_ptr<long> instanceNumber{};
  shared_ptr<long> instanceNumberMaster{};
  shared_ptr<long> instanceNumberROMaster{};
  shared_ptr<long> instanceNumberROSlave{};
  shared_ptr<long> instanceNumberSlave{};
  shared_ptr<string> memAllocationRatio{};
  shared_ptr<string> memoryUsed{};
  shared_ptr<string> openPermission{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> storageUsed{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  DescribeDedicatedHostAttributeResponseBody() {}

  explicit DescribeDedicatedHostAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (allocationStatus) {
      res["AllocationStatus"] = boost::any(*allocationStatus);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (CPUAllocationRatio) {
      res["CPUAllocationRatio"] = boost::any(*CPUAllocationRatio);
    }
    if (cpuUsed) {
      res["CpuUsed"] = boost::any(*cpuUsed);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (diskAllocationRatio) {
      res["DiskAllocationRatio"] = boost::any(*diskAllocationRatio);
    }
    if (distributionTag) {
      res["DistributionTag"] = boost::any(*distributionTag);
    }
    if (ecsClassCode) {
      res["EcsClassCode"] = boost::any(*ecsClassCode);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (hostCPU) {
      res["HostCPU"] = boost::any(*hostCPU);
    }
    if (hostClass) {
      res["HostClass"] = boost::any(*hostClass);
    }
    if (hostMem) {
      res["HostMem"] = boost::any(*hostMem);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (hostStatus) {
      res["HostStatus"] = boost::any(*hostStatus);
    }
    if (hostStorage) {
      res["HostStorage"] = boost::any(*hostStorage);
    }
    if (hostType) {
      res["HostType"] = boost::any(*hostType);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (instanceNumber) {
      res["InstanceNumber"] = boost::any(*instanceNumber);
    }
    if (instanceNumberMaster) {
      res["InstanceNumberMaster"] = boost::any(*instanceNumberMaster);
    }
    if (instanceNumberROMaster) {
      res["InstanceNumberROMaster"] = boost::any(*instanceNumberROMaster);
    }
    if (instanceNumberROSlave) {
      res["InstanceNumberROSlave"] = boost::any(*instanceNumberROSlave);
    }
    if (instanceNumberSlave) {
      res["InstanceNumberSlave"] = boost::any(*instanceNumberSlave);
    }
    if (memAllocationRatio) {
      res["MemAllocationRatio"] = boost::any(*memAllocationRatio);
    }
    if (memoryUsed) {
      res["MemoryUsed"] = boost::any(*memoryUsed);
    }
    if (openPermission) {
      res["OpenPermission"] = boost::any(*openPermission);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AllocationStatus") != m.end() && !m["AllocationStatus"].empty()) {
      allocationStatus = make_shared<string>(boost::any_cast<string>(m["AllocationStatus"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("CPUAllocationRatio") != m.end() && !m["CPUAllocationRatio"].empty()) {
      CPUAllocationRatio = make_shared<string>(boost::any_cast<string>(m["CPUAllocationRatio"]));
    }
    if (m.find("CpuUsed") != m.end() && !m["CpuUsed"].empty()) {
      cpuUsed = make_shared<string>(boost::any_cast<string>(m["CpuUsed"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("DiskAllocationRatio") != m.end() && !m["DiskAllocationRatio"].empty()) {
      diskAllocationRatio = make_shared<string>(boost::any_cast<string>(m["DiskAllocationRatio"]));
    }
    if (m.find("DistributionTag") != m.end() && !m["DistributionTag"].empty()) {
      distributionTag = make_shared<string>(boost::any_cast<string>(m["DistributionTag"]));
    }
    if (m.find("EcsClassCode") != m.end() && !m["EcsClassCode"].empty()) {
      ecsClassCode = make_shared<string>(boost::any_cast<string>(m["EcsClassCode"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("HostCPU") != m.end() && !m["HostCPU"].empty()) {
      hostCPU = make_shared<long>(boost::any_cast<long>(m["HostCPU"]));
    }
    if (m.find("HostClass") != m.end() && !m["HostClass"].empty()) {
      hostClass = make_shared<string>(boost::any_cast<string>(m["HostClass"]));
    }
    if (m.find("HostMem") != m.end() && !m["HostMem"].empty()) {
      hostMem = make_shared<long>(boost::any_cast<long>(m["HostMem"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("HostStatus") != m.end() && !m["HostStatus"].empty()) {
      hostStatus = make_shared<string>(boost::any_cast<string>(m["HostStatus"]));
    }
    if (m.find("HostStorage") != m.end() && !m["HostStorage"].empty()) {
      hostStorage = make_shared<long>(boost::any_cast<long>(m["HostStorage"]));
    }
    if (m.find("HostType") != m.end() && !m["HostType"].empty()) {
      hostType = make_shared<string>(boost::any_cast<string>(m["HostType"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("InstanceNumber") != m.end() && !m["InstanceNumber"].empty()) {
      instanceNumber = make_shared<long>(boost::any_cast<long>(m["InstanceNumber"]));
    }
    if (m.find("InstanceNumberMaster") != m.end() && !m["InstanceNumberMaster"].empty()) {
      instanceNumberMaster = make_shared<long>(boost::any_cast<long>(m["InstanceNumberMaster"]));
    }
    if (m.find("InstanceNumberROMaster") != m.end() && !m["InstanceNumberROMaster"].empty()) {
      instanceNumberROMaster = make_shared<long>(boost::any_cast<long>(m["InstanceNumberROMaster"]));
    }
    if (m.find("InstanceNumberROSlave") != m.end() && !m["InstanceNumberROSlave"].empty()) {
      instanceNumberROSlave = make_shared<long>(boost::any_cast<long>(m["InstanceNumberROSlave"]));
    }
    if (m.find("InstanceNumberSlave") != m.end() && !m["InstanceNumberSlave"].empty()) {
      instanceNumberSlave = make_shared<long>(boost::any_cast<long>(m["InstanceNumberSlave"]));
    }
    if (m.find("MemAllocationRatio") != m.end() && !m["MemAllocationRatio"].empty()) {
      memAllocationRatio = make_shared<string>(boost::any_cast<string>(m["MemAllocationRatio"]));
    }
    if (m.find("MemoryUsed") != m.end() && !m["MemoryUsed"].empty()) {
      memoryUsed = make_shared<string>(boost::any_cast<string>(m["MemoryUsed"]));
    }
    if (m.find("OpenPermission") != m.end() && !m["OpenPermission"].empty()) {
      openPermission = make_shared<string>(boost::any_cast<string>(m["OpenPermission"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<string>(boost::any_cast<string>(m["StorageUsed"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDedicatedHostAttributeResponseBody() = default;
};
class DescribeDedicatedHostAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDedicatedHostAttributeResponseBody> body{};

  DescribeDedicatedHostAttributeResponse() {}

  explicit DescribeDedicatedHostAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDedicatedHostAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedHostAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedHostAttributeResponse() = default;
};
class DescribeDedicatedHostDisksRequest : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDedicatedHostDisksRequest() {}

  explicit DescribeDedicatedHostDisksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDedicatedHostDisksRequest() = default;
};
class DescribeDedicatedHostDisksResponseBodyDisks : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> device{};
  shared_ptr<string> diskId{};
  shared_ptr<bool> hasDBInstance{};
  shared_ptr<long> maxIOPS{};
  shared_ptr<long> maxThroughput{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> size{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> zoneId{};

  DescribeDedicatedHostDisksResponseBodyDisks() {}

  explicit DescribeDedicatedHostDisksResponseBodyDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (hasDBInstance) {
      res["HasDBInstance"] = boost::any(*hasDBInstance);
    }
    if (maxIOPS) {
      res["MaxIOPS"] = boost::any(*maxIOPS);
    }
    if (maxThroughput) {
      res["MaxThroughput"] = boost::any(*maxThroughput);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("HasDBInstance") != m.end() && !m["HasDBInstance"].empty()) {
      hasDBInstance = make_shared<bool>(boost::any_cast<bool>(m["HasDBInstance"]));
    }
    if (m.find("MaxIOPS") != m.end() && !m["MaxIOPS"].empty()) {
      maxIOPS = make_shared<long>(boost::any_cast<long>(m["MaxIOPS"]));
    }
    if (m.find("MaxThroughput") != m.end() && !m["MaxThroughput"].empty()) {
      maxThroughput = make_shared<long>(boost::any_cast<long>(m["MaxThroughput"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDedicatedHostDisksResponseBodyDisks() = default;
};
class DescribeDedicatedHostDisksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<vector<DescribeDedicatedHostDisksResponseBodyDisks>> disks{};
  shared_ptr<string> requestId{};

  DescribeDedicatedHostDisksResponseBody() {}

  explicit DescribeDedicatedHostDisksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (disks) {
      vector<boost::any> temp1;
      for(auto item1:*disks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disks"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("Disks") != m.end() && !m["Disks"].empty()) {
      if (typeid(vector<boost::any>) == m["Disks"].type()) {
        vector<DescribeDedicatedHostDisksResponseBodyDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedHostDisksResponseBodyDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disks = make_shared<vector<DescribeDedicatedHostDisksResponseBodyDisks>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDedicatedHostDisksResponseBody() = default;
};
class DescribeDedicatedHostDisksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDedicatedHostDisksResponseBody> body{};

  DescribeDedicatedHostDisksResponse() {}

  explicit DescribeDedicatedHostDisksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDedicatedHostDisksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedHostDisksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedHostDisksResponse() = default;
};
class DescribeDedicatedHostGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> engine{};
  shared_ptr<string> imageCategory{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeDedicatedHostGroupsRequest() {}

  explicit DescribeDedicatedHostGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeDedicatedHostGroupsRequest() = default;
};
class DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> zoneIDList{};

  DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList() {}

  explicit DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneIDList) {
      res["ZoneIDList"] = boost::any(*zoneIDList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneIDList") != m.end() && !m["ZoneIDList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ZoneIDList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ZoneIDList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zoneIDList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList() = default;
};
class DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups : public Darabonba::Model {
public:
  shared_ptr<string> allocationPolicy{};
  shared_ptr<string> bastionInstanceId{};
  shared_ptr<string> category{};
  shared_ptr<double> cpuAllocateRation{};
  shared_ptr<double> cpuAllocatedAmount{};
  shared_ptr<long> cpuAllocationRatio{};
  shared_ptr<string> createTime{};
  shared_ptr<map<string, boost::any>> dedicatedHostCountGroupByHostType{};
  shared_ptr<string> dedicatedHostGroupDesc{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> deployType{};
  shared_ptr<double> diskAllocateRation{};
  shared_ptr<double> diskAllocatedAmount{};
  shared_ptr<long> diskAllocationRatio{};
  shared_ptr<double> diskUsedAmount{};
  shared_ptr<double> diskUtility{};
  shared_ptr<string> engine{};
  shared_ptr<long> hostNumber{};
  shared_ptr<string> hostReplacePolicy{};
  shared_ptr<long> instanceNumber{};
  shared_ptr<double> memAllocateRation{};
  shared_ptr<double> memAllocatedAmount{};
  shared_ptr<long> memAllocationRatio{};
  shared_ptr<double> memUsedAmount{};
  shared_ptr<double> memUtility{};
  shared_ptr<string> openPermission{};
  shared_ptr<string> text{};
  shared_ptr<string> VPCId{};
  shared_ptr<DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList> zoneIDList{};

  DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups() {}

  explicit DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationPolicy) {
      res["AllocationPolicy"] = boost::any(*allocationPolicy);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (cpuAllocateRation) {
      res["CpuAllocateRation"] = boost::any(*cpuAllocateRation);
    }
    if (cpuAllocatedAmount) {
      res["CpuAllocatedAmount"] = boost::any(*cpuAllocatedAmount);
    }
    if (cpuAllocationRatio) {
      res["CpuAllocationRatio"] = boost::any(*cpuAllocationRatio);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dedicatedHostCountGroupByHostType) {
      res["DedicatedHostCountGroupByHostType"] = boost::any(*dedicatedHostCountGroupByHostType);
    }
    if (dedicatedHostGroupDesc) {
      res["DedicatedHostGroupDesc"] = boost::any(*dedicatedHostGroupDesc);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (diskAllocateRation) {
      res["DiskAllocateRation"] = boost::any(*diskAllocateRation);
    }
    if (diskAllocatedAmount) {
      res["DiskAllocatedAmount"] = boost::any(*diskAllocatedAmount);
    }
    if (diskAllocationRatio) {
      res["DiskAllocationRatio"] = boost::any(*diskAllocationRatio);
    }
    if (diskUsedAmount) {
      res["DiskUsedAmount"] = boost::any(*diskUsedAmount);
    }
    if (diskUtility) {
      res["DiskUtility"] = boost::any(*diskUtility);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (hostNumber) {
      res["HostNumber"] = boost::any(*hostNumber);
    }
    if (hostReplacePolicy) {
      res["HostReplacePolicy"] = boost::any(*hostReplacePolicy);
    }
    if (instanceNumber) {
      res["InstanceNumber"] = boost::any(*instanceNumber);
    }
    if (memAllocateRation) {
      res["MemAllocateRation"] = boost::any(*memAllocateRation);
    }
    if (memAllocatedAmount) {
      res["MemAllocatedAmount"] = boost::any(*memAllocatedAmount);
    }
    if (memAllocationRatio) {
      res["MemAllocationRatio"] = boost::any(*memAllocationRatio);
    }
    if (memUsedAmount) {
      res["MemUsedAmount"] = boost::any(*memUsedAmount);
    }
    if (memUtility) {
      res["MemUtility"] = boost::any(*memUtility);
    }
    if (openPermission) {
      res["OpenPermission"] = boost::any(*openPermission);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (zoneIDList) {
      res["ZoneIDList"] = zoneIDList ? boost::any(zoneIDList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationPolicy") != m.end() && !m["AllocationPolicy"].empty()) {
      allocationPolicy = make_shared<string>(boost::any_cast<string>(m["AllocationPolicy"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CpuAllocateRation") != m.end() && !m["CpuAllocateRation"].empty()) {
      cpuAllocateRation = make_shared<double>(boost::any_cast<double>(m["CpuAllocateRation"]));
    }
    if (m.find("CpuAllocatedAmount") != m.end() && !m["CpuAllocatedAmount"].empty()) {
      cpuAllocatedAmount = make_shared<double>(boost::any_cast<double>(m["CpuAllocatedAmount"]));
    }
    if (m.find("CpuAllocationRatio") != m.end() && !m["CpuAllocationRatio"].empty()) {
      cpuAllocationRatio = make_shared<long>(boost::any_cast<long>(m["CpuAllocationRatio"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DedicatedHostCountGroupByHostType") != m.end() && !m["DedicatedHostCountGroupByHostType"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DedicatedHostCountGroupByHostType"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      dedicatedHostCountGroupByHostType = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DedicatedHostGroupDesc") != m.end() && !m["DedicatedHostGroupDesc"].empty()) {
      dedicatedHostGroupDesc = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupDesc"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("DiskAllocateRation") != m.end() && !m["DiskAllocateRation"].empty()) {
      diskAllocateRation = make_shared<double>(boost::any_cast<double>(m["DiskAllocateRation"]));
    }
    if (m.find("DiskAllocatedAmount") != m.end() && !m["DiskAllocatedAmount"].empty()) {
      diskAllocatedAmount = make_shared<double>(boost::any_cast<double>(m["DiskAllocatedAmount"]));
    }
    if (m.find("DiskAllocationRatio") != m.end() && !m["DiskAllocationRatio"].empty()) {
      diskAllocationRatio = make_shared<long>(boost::any_cast<long>(m["DiskAllocationRatio"]));
    }
    if (m.find("DiskUsedAmount") != m.end() && !m["DiskUsedAmount"].empty()) {
      diskUsedAmount = make_shared<double>(boost::any_cast<double>(m["DiskUsedAmount"]));
    }
    if (m.find("DiskUtility") != m.end() && !m["DiskUtility"].empty()) {
      diskUtility = make_shared<double>(boost::any_cast<double>(m["DiskUtility"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("HostNumber") != m.end() && !m["HostNumber"].empty()) {
      hostNumber = make_shared<long>(boost::any_cast<long>(m["HostNumber"]));
    }
    if (m.find("HostReplacePolicy") != m.end() && !m["HostReplacePolicy"].empty()) {
      hostReplacePolicy = make_shared<string>(boost::any_cast<string>(m["HostReplacePolicy"]));
    }
    if (m.find("InstanceNumber") != m.end() && !m["InstanceNumber"].empty()) {
      instanceNumber = make_shared<long>(boost::any_cast<long>(m["InstanceNumber"]));
    }
    if (m.find("MemAllocateRation") != m.end() && !m["MemAllocateRation"].empty()) {
      memAllocateRation = make_shared<double>(boost::any_cast<double>(m["MemAllocateRation"]));
    }
    if (m.find("MemAllocatedAmount") != m.end() && !m["MemAllocatedAmount"].empty()) {
      memAllocatedAmount = make_shared<double>(boost::any_cast<double>(m["MemAllocatedAmount"]));
    }
    if (m.find("MemAllocationRatio") != m.end() && !m["MemAllocationRatio"].empty()) {
      memAllocationRatio = make_shared<long>(boost::any_cast<long>(m["MemAllocationRatio"]));
    }
    if (m.find("MemUsedAmount") != m.end() && !m["MemUsedAmount"].empty()) {
      memUsedAmount = make_shared<double>(boost::any_cast<double>(m["MemUsedAmount"]));
    }
    if (m.find("MemUtility") != m.end() && !m["MemUtility"].empty()) {
      memUtility = make_shared<double>(boost::any_cast<double>(m["MemUtility"]));
    }
    if (m.find("OpenPermission") != m.end() && !m["OpenPermission"].empty()) {
      openPermission = make_shared<string>(boost::any_cast<string>(m["OpenPermission"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("ZoneIDList") != m.end() && !m["ZoneIDList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ZoneIDList"].type()) {
        DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ZoneIDList"]));
        zoneIDList = make_shared<DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups() = default;
};
class DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups>> dedicatedHostGroups{};

  DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups() {}

  explicit DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostGroups) {
      vector<boost::any> temp1;
      for(auto item1:*dedicatedHostGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DedicatedHostGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostGroups") != m.end() && !m["DedicatedHostGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["DedicatedHostGroups"].type()) {
        vector<DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DedicatedHostGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dedicatedHostGroups = make_shared<vector<DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups>>(expect1);
      }
    }
  }


  virtual ~DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups() = default;
};
class DescribeDedicatedHostGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups> dedicatedHostGroups{};
  shared_ptr<string> requestId{};

  DescribeDedicatedHostGroupsResponseBody() {}

  explicit DescribeDedicatedHostGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostGroups) {
      res["DedicatedHostGroups"] = dedicatedHostGroups ? boost::any(dedicatedHostGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostGroups") != m.end() && !m["DedicatedHostGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["DedicatedHostGroups"].type()) {
        DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DedicatedHostGroups"]));
        dedicatedHostGroups = make_shared<DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDedicatedHostGroupsResponseBody() = default;
};
class DescribeDedicatedHostGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDedicatedHostGroupsResponseBody> body{};

  DescribeDedicatedHostGroupsResponse() {}

  explicit DescribeDedicatedHostGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDedicatedHostGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedHostGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedHostGroupsResponse() = default;
};
class DescribeDedicatedHostsRequest : public Darabonba::Model {
public:
  shared_ptr<string> allocationStatus{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> hostStatus{};
  shared_ptr<string> hostType{};
  shared_ptr<long> orderId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumbers{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> tags{};
  shared_ptr<string> zoneId{};

  DescribeDedicatedHostsRequest() {}

  explicit DescribeDedicatedHostsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationStatus) {
      res["AllocationStatus"] = boost::any(*allocationStatus);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (hostStatus) {
      res["HostStatus"] = boost::any(*hostStatus);
    }
    if (hostType) {
      res["HostType"] = boost::any(*hostType);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumbers) {
      res["PageNumbers"] = boost::any(*pageNumbers);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationStatus") != m.end() && !m["AllocationStatus"].empty()) {
      allocationStatus = make_shared<string>(boost::any_cast<string>(m["AllocationStatus"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("HostStatus") != m.end() && !m["HostStatus"].empty()) {
      hostStatus = make_shared<string>(boost::any_cast<string>(m["HostStatus"]));
    }
    if (m.find("HostType") != m.end() && !m["HostType"].empty()) {
      hostType = make_shared<string>(boost::any_cast<string>(m["HostType"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumbers") != m.end() && !m["PageNumbers"].empty()) {
      pageNumbers = make_shared<long>(boost::any_cast<long>(m["PageNumbers"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDedicatedHostsRequest() = default;
};
class DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountType{};
  shared_ptr<string> allocationStatus{};
  shared_ptr<string> bastionInstanceId{};
  shared_ptr<string> CPUAllocationRatio{};
  shared_ptr<string> category{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> cpuUsed{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> diskAllocationRatio{};
  shared_ptr<string> diskInfo{};
  shared_ptr<string> distributionSymbol{};
  shared_ptr<string> distributionTag{};
  shared_ptr<string> ecsClassCode{};
  shared_ptr<string> ecsId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> engine{};
  shared_ptr<string> hostCPU{};
  shared_ptr<string> hostClass{};
  shared_ptr<string> hostMem{};
  shared_ptr<string> hostName{};
  shared_ptr<string> hostStatus{};
  shared_ptr<string> hostStorage{};
  shared_ptr<string> hostType{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> imageCategory{};
  shared_ptr<string> instanceNumber{};
  shared_ptr<string> memAllocationRatio{};
  shared_ptr<string> memoryUsed{};
  shared_ptr<string> mssqlSupportVersion{};
  shared_ptr<string> openPermission{};
  shared_ptr<string> storageUsed{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts() {}

  explicit DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (allocationStatus) {
      res["AllocationStatus"] = boost::any(*allocationStatus);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
    }
    if (CPUAllocationRatio) {
      res["CPUAllocationRatio"] = boost::any(*CPUAllocationRatio);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (cpuUsed) {
      res["CpuUsed"] = boost::any(*cpuUsed);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (diskAllocationRatio) {
      res["DiskAllocationRatio"] = boost::any(*diskAllocationRatio);
    }
    if (diskInfo) {
      res["DiskInfo"] = boost::any(*diskInfo);
    }
    if (distributionSymbol) {
      res["DistributionSymbol"] = boost::any(*distributionSymbol);
    }
    if (distributionTag) {
      res["DistributionTag"] = boost::any(*distributionTag);
    }
    if (ecsClassCode) {
      res["EcsClassCode"] = boost::any(*ecsClassCode);
    }
    if (ecsId) {
      res["EcsId"] = boost::any(*ecsId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (hostCPU) {
      res["HostCPU"] = boost::any(*hostCPU);
    }
    if (hostClass) {
      res["HostClass"] = boost::any(*hostClass);
    }
    if (hostMem) {
      res["HostMem"] = boost::any(*hostMem);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (hostStatus) {
      res["HostStatus"] = boost::any(*hostStatus);
    }
    if (hostStorage) {
      res["HostStorage"] = boost::any(*hostStorage);
    }
    if (hostType) {
      res["HostType"] = boost::any(*hostType);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (instanceNumber) {
      res["InstanceNumber"] = boost::any(*instanceNumber);
    }
    if (memAllocationRatio) {
      res["MemAllocationRatio"] = boost::any(*memAllocationRatio);
    }
    if (memoryUsed) {
      res["MemoryUsed"] = boost::any(*memoryUsed);
    }
    if (mssqlSupportVersion) {
      res["MssqlSupportVersion"] = boost::any(*mssqlSupportVersion);
    }
    if (openPermission) {
      res["OpenPermission"] = boost::any(*openPermission);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AllocationStatus") != m.end() && !m["AllocationStatus"].empty()) {
      allocationStatus = make_shared<string>(boost::any_cast<string>(m["AllocationStatus"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
    if (m.find("CPUAllocationRatio") != m.end() && !m["CPUAllocationRatio"].empty()) {
      CPUAllocationRatio = make_shared<string>(boost::any_cast<string>(m["CPUAllocationRatio"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CpuUsed") != m.end() && !m["CpuUsed"].empty()) {
      cpuUsed = make_shared<string>(boost::any_cast<string>(m["CpuUsed"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("DiskAllocationRatio") != m.end() && !m["DiskAllocationRatio"].empty()) {
      diskAllocationRatio = make_shared<string>(boost::any_cast<string>(m["DiskAllocationRatio"]));
    }
    if (m.find("DiskInfo") != m.end() && !m["DiskInfo"].empty()) {
      diskInfo = make_shared<string>(boost::any_cast<string>(m["DiskInfo"]));
    }
    if (m.find("DistributionSymbol") != m.end() && !m["DistributionSymbol"].empty()) {
      distributionSymbol = make_shared<string>(boost::any_cast<string>(m["DistributionSymbol"]));
    }
    if (m.find("DistributionTag") != m.end() && !m["DistributionTag"].empty()) {
      distributionTag = make_shared<string>(boost::any_cast<string>(m["DistributionTag"]));
    }
    if (m.find("EcsClassCode") != m.end() && !m["EcsClassCode"].empty()) {
      ecsClassCode = make_shared<string>(boost::any_cast<string>(m["EcsClassCode"]));
    }
    if (m.find("EcsId") != m.end() && !m["EcsId"].empty()) {
      ecsId = make_shared<string>(boost::any_cast<string>(m["EcsId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("HostCPU") != m.end() && !m["HostCPU"].empty()) {
      hostCPU = make_shared<string>(boost::any_cast<string>(m["HostCPU"]));
    }
    if (m.find("HostClass") != m.end() && !m["HostClass"].empty()) {
      hostClass = make_shared<string>(boost::any_cast<string>(m["HostClass"]));
    }
    if (m.find("HostMem") != m.end() && !m["HostMem"].empty()) {
      hostMem = make_shared<string>(boost::any_cast<string>(m["HostMem"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("HostStatus") != m.end() && !m["HostStatus"].empty()) {
      hostStatus = make_shared<string>(boost::any_cast<string>(m["HostStatus"]));
    }
    if (m.find("HostStorage") != m.end() && !m["HostStorage"].empty()) {
      hostStorage = make_shared<string>(boost::any_cast<string>(m["HostStorage"]));
    }
    if (m.find("HostType") != m.end() && !m["HostType"].empty()) {
      hostType = make_shared<string>(boost::any_cast<string>(m["HostType"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("InstanceNumber") != m.end() && !m["InstanceNumber"].empty()) {
      instanceNumber = make_shared<string>(boost::any_cast<string>(m["InstanceNumber"]));
    }
    if (m.find("MemAllocationRatio") != m.end() && !m["MemAllocationRatio"].empty()) {
      memAllocationRatio = make_shared<string>(boost::any_cast<string>(m["MemAllocationRatio"]));
    }
    if (m.find("MemoryUsed") != m.end() && !m["MemoryUsed"].empty()) {
      memoryUsed = make_shared<string>(boost::any_cast<string>(m["MemoryUsed"]));
    }
    if (m.find("MssqlSupportVersion") != m.end() && !m["MssqlSupportVersion"].empty()) {
      mssqlSupportVersion = make_shared<string>(boost::any_cast<string>(m["MssqlSupportVersion"]));
    }
    if (m.find("OpenPermission") != m.end() && !m["OpenPermission"].empty()) {
      openPermission = make_shared<string>(boost::any_cast<string>(m["OpenPermission"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<string>(boost::any_cast<string>(m["StorageUsed"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts() = default;
};
class DescribeDedicatedHostsResponseBodyDedicatedHosts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts>> dedicatedHosts{};

  DescribeDedicatedHostsResponseBodyDedicatedHosts() {}

  explicit DescribeDedicatedHostsResponseBodyDedicatedHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHosts) {
      vector<boost::any> temp1;
      for(auto item1:*dedicatedHosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DedicatedHosts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHosts") != m.end() && !m["DedicatedHosts"].empty()) {
      if (typeid(vector<boost::any>) == m["DedicatedHosts"].type()) {
        vector<DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DedicatedHosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dedicatedHosts = make_shared<vector<DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts>>(expect1);
      }
    }
  }


  virtual ~DescribeDedicatedHostsResponseBodyDedicatedHosts() = default;
};
class DescribeDedicatedHostsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<DescribeDedicatedHostsResponseBodyDedicatedHosts> dedicatedHosts{};
  shared_ptr<long> maxAutoScaleHostStorage{};
  shared_ptr<long> pageNumbers{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalRecords{};

  DescribeDedicatedHostsResponseBody() {}

  explicit DescribeDedicatedHostsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (dedicatedHosts) {
      res["DedicatedHosts"] = dedicatedHosts ? boost::any(dedicatedHosts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxAutoScaleHostStorage) {
      res["MaxAutoScaleHostStorage"] = boost::any(*maxAutoScaleHostStorage);
    }
    if (pageNumbers) {
      res["PageNumbers"] = boost::any(*pageNumbers);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalRecords) {
      res["TotalRecords"] = boost::any(*totalRecords);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("DedicatedHosts") != m.end() && !m["DedicatedHosts"].empty()) {
      if (typeid(map<string, boost::any>) == m["DedicatedHosts"].type()) {
        DescribeDedicatedHostsResponseBodyDedicatedHosts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DedicatedHosts"]));
        dedicatedHosts = make_shared<DescribeDedicatedHostsResponseBodyDedicatedHosts>(model1);
      }
    }
    if (m.find("MaxAutoScaleHostStorage") != m.end() && !m["MaxAutoScaleHostStorage"].empty()) {
      maxAutoScaleHostStorage = make_shared<long>(boost::any_cast<long>(m["MaxAutoScaleHostStorage"]));
    }
    if (m.find("PageNumbers") != m.end() && !m["PageNumbers"].empty()) {
      pageNumbers = make_shared<long>(boost::any_cast<long>(m["PageNumbers"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalRecords") != m.end() && !m["TotalRecords"].empty()) {
      totalRecords = make_shared<long>(boost::any_cast<long>(m["TotalRecords"]));
    }
  }


  virtual ~DescribeDedicatedHostsResponseBody() = default;
};
class DescribeDedicatedHostsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDedicatedHostsResponseBody> body{};

  DescribeDedicatedHostsResponse() {}

  explicit DescribeDedicatedHostsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDedicatedHostsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedHostsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedHostsResponse() = default;
};
class DescribeHostEcsLevelInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> dbType{};
  shared_ptr<string> imageCategory{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> storageType{};
  shared_ptr<string> zoneId{};

  DescribeHostEcsLevelInfoRequest() {}

  explicit DescribeHostEcsLevelInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeHostEcsLevelInfoRequest() = default;
};
class DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfosItems : public Darabonba::Model {
public:
  shared_ptr<double> cloudStorageBandwidth{};
  shared_ptr<long> cpu{};
  shared_ptr<string> cpuFrequency{};
  shared_ptr<string> cpuVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> ecsClass{};
  shared_ptr<string> ecsClassCode{};
  shared_ptr<long> isCloudDisk{};
  shared_ptr<string> localStorage{};
  shared_ptr<long> memory{};
  shared_ptr<double> netBandWidth{};
  shared_ptr<long> netPackage{};
  shared_ptr<string> rdsClassCode{};
  shared_ptr<long> storageIops{};

  DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfosItems() {}

  explicit DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfosItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudStorageBandwidth) {
      res["CloudStorageBandwidth"] = boost::any(*cloudStorageBandwidth);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (cpuFrequency) {
      res["CpuFrequency"] = boost::any(*cpuFrequency);
    }
    if (cpuVersion) {
      res["CpuVersion"] = boost::any(*cpuVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ecsClass) {
      res["EcsClass"] = boost::any(*ecsClass);
    }
    if (ecsClassCode) {
      res["EcsClassCode"] = boost::any(*ecsClassCode);
    }
    if (isCloudDisk) {
      res["IsCloudDisk"] = boost::any(*isCloudDisk);
    }
    if (localStorage) {
      res["LocalStorage"] = boost::any(*localStorage);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (netBandWidth) {
      res["NetBandWidth"] = boost::any(*netBandWidth);
    }
    if (netPackage) {
      res["NetPackage"] = boost::any(*netPackage);
    }
    if (rdsClassCode) {
      res["RdsClassCode"] = boost::any(*rdsClassCode);
    }
    if (storageIops) {
      res["StorageIops"] = boost::any(*storageIops);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudStorageBandwidth") != m.end() && !m["CloudStorageBandwidth"].empty()) {
      cloudStorageBandwidth = make_shared<double>(boost::any_cast<double>(m["CloudStorageBandwidth"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("CpuFrequency") != m.end() && !m["CpuFrequency"].empty()) {
      cpuFrequency = make_shared<string>(boost::any_cast<string>(m["CpuFrequency"]));
    }
    if (m.find("CpuVersion") != m.end() && !m["CpuVersion"].empty()) {
      cpuVersion = make_shared<string>(boost::any_cast<string>(m["CpuVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EcsClass") != m.end() && !m["EcsClass"].empty()) {
      ecsClass = make_shared<string>(boost::any_cast<string>(m["EcsClass"]));
    }
    if (m.find("EcsClassCode") != m.end() && !m["EcsClassCode"].empty()) {
      ecsClassCode = make_shared<string>(boost::any_cast<string>(m["EcsClassCode"]));
    }
    if (m.find("IsCloudDisk") != m.end() && !m["IsCloudDisk"].empty()) {
      isCloudDisk = make_shared<long>(boost::any_cast<long>(m["IsCloudDisk"]));
    }
    if (m.find("LocalStorage") != m.end() && !m["LocalStorage"].empty()) {
      localStorage = make_shared<string>(boost::any_cast<string>(m["LocalStorage"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("NetBandWidth") != m.end() && !m["NetBandWidth"].empty()) {
      netBandWidth = make_shared<double>(boost::any_cast<double>(m["NetBandWidth"]));
    }
    if (m.find("NetPackage") != m.end() && !m["NetPackage"].empty()) {
      netPackage = make_shared<long>(boost::any_cast<long>(m["NetPackage"]));
    }
    if (m.find("RdsClassCode") != m.end() && !m["RdsClassCode"].empty()) {
      rdsClassCode = make_shared<string>(boost::any_cast<string>(m["RdsClassCode"]));
    }
    if (m.find("StorageIops") != m.end() && !m["StorageIops"].empty()) {
      storageIops = make_shared<long>(boost::any_cast<long>(m["StorageIops"]));
    }
  }


  virtual ~DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfosItems() = default;
};
class DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfos : public Darabonba::Model {
public:
  shared_ptr<string> cddcHostType{};
  shared_ptr<vector<DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfosItems>> items{};

  DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfos() {}

  explicit DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cddcHostType) {
      res["CddcHostType"] = boost::any(*cddcHostType);
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
    if (m.find("CddcHostType") != m.end() && !m["CddcHostType"].empty()) {
      cddcHostType = make_shared<string>(boost::any_cast<string>(m["CddcHostType"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfosItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfosItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfosItems>>(expect1);
      }
    }
  }


  virtual ~DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfos() = default;
};
class DescribeHostEcsLevelInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfos>> hostEcsLevelInfos{};
  shared_ptr<string> requestId{};

  DescribeHostEcsLevelInfoResponseBody() {}

  explicit DescribeHostEcsLevelInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostEcsLevelInfos) {
      vector<boost::any> temp1;
      for(auto item1:*hostEcsLevelInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostEcsLevelInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostEcsLevelInfos") != m.end() && !m["HostEcsLevelInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["HostEcsLevelInfos"].type()) {
        vector<DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostEcsLevelInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostEcsLevelInfos = make_shared<vector<DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeHostEcsLevelInfoResponseBody() = default;
};
class DescribeHostEcsLevelInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHostEcsLevelInfoResponseBody> body{};

  DescribeHostEcsLevelInfoResponse() {}

  explicit DescribeHostEcsLevelInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeHostEcsLevelInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHostEcsLevelInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHostEcsLevelInfoResponse() = default;
};
class DescribeHostWebShellRequest : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> zoneId{};

  DescribeHostWebShellRequest() {}

  explicit DescribeHostWebShellRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeHostWebShellRequest() = default;
};
class DescribeHostWebShellResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> loginUrl{};
  shared_ptr<string> requestId{};

  DescribeHostWebShellResponseBody() {}

  explicit DescribeHostWebShellResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginUrl) {
      res["LoginUrl"] = boost::any(*loginUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginUrl") != m.end() && !m["LoginUrl"].empty()) {
      loginUrl = make_shared<string>(boost::any_cast<string>(m["LoginUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeHostWebShellResponseBody() = default;
};
class DescribeHostWebShellResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHostWebShellResponseBody> body{};

  DescribeHostWebShellResponse() {}

  explicit DescribeHostWebShellResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeHostWebShellResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHostWebShellResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHostWebShellResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> resourceOwnerId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRDSRegion : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeRegionsResponseBodyRegionsRDSRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRDSRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRDSRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRDSRegion>> RDSRegion{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (RDSRegion) {
      vector<boost::any> temp1;
      for(auto item1:*RDSRegion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RDSRegion"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RDSRegion") != m.end() && !m["RDSRegion"].empty()) {
      if (typeid(vector<boost::any>) == m["RDSRegion"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRDSRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RDSRegion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRDSRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        RDSRegion = make_shared<vector<DescribeRegionsResponseBodyRegionsRDSRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
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
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResources"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResources"].type()) {
        vector<ListTagResourcesResponseBodyTagResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<ListTagResourcesResponseBodyTagResources>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
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
class ModifyDedicatedHostAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDedicatedHostAccountRequest() {}

  explicit ModifyDedicatedHostAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
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
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDedicatedHostAccountRequest() = default;
};
class ModifyDedicatedHostAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDedicatedHostAccountResponseBody() {}

  explicit ModifyDedicatedHostAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDedicatedHostAccountResponseBody() = default;
};
class ModifyDedicatedHostAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDedicatedHostAccountResponseBody> body{};

  ModifyDedicatedHostAccountResponse() {}

  explicit ModifyDedicatedHostAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDedicatedHostAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDedicatedHostAccountResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDedicatedHostAccountResponse() = default;
};
class ModifyDedicatedHostAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> allocationStatus{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> hostName{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDedicatedHostAttributeRequest() {}

  explicit ModifyDedicatedHostAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationStatus) {
      res["AllocationStatus"] = boost::any(*allocationStatus);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationStatus") != m.end() && !m["AllocationStatus"].empty()) {
      allocationStatus = make_shared<string>(boost::any_cast<string>(m["AllocationStatus"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDedicatedHostAttributeRequest() = default;
};
class ModifyDedicatedHostAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDedicatedHostAttributeResponseBody() {}

  explicit ModifyDedicatedHostAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDedicatedHostAttributeResponseBody() = default;
};
class ModifyDedicatedHostAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDedicatedHostAttributeResponseBody> body{};

  ModifyDedicatedHostAttributeResponse() {}

  explicit ModifyDedicatedHostAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDedicatedHostAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDedicatedHostAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDedicatedHostAttributeResponse() = default;
};
class ModifyDedicatedHostClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> switchTime{};
  shared_ptr<string> switchTimeMode{};
  shared_ptr<string> targetClassCode{};

  ModifyDedicatedHostClassRequest() {}

  explicit ModifyDedicatedHostClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    if (switchTimeMode) {
      res["SwitchTimeMode"] = boost::any(*switchTimeMode);
    }
    if (targetClassCode) {
      res["TargetClassCode"] = boost::any(*targetClassCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
    if (m.find("SwitchTimeMode") != m.end() && !m["SwitchTimeMode"].empty()) {
      switchTimeMode = make_shared<string>(boost::any_cast<string>(m["SwitchTimeMode"]));
    }
    if (m.find("TargetClassCode") != m.end() && !m["TargetClassCode"].empty()) {
      targetClassCode = make_shared<string>(boost::any_cast<string>(m["TargetClassCode"]));
    }
  }


  virtual ~ModifyDedicatedHostClassRequest() = default;
};
class ModifyDedicatedHostClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  ModifyDedicatedHostClassResponseBody() {}

  explicit ModifyDedicatedHostClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
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
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ModifyDedicatedHostClassResponseBody() = default;
};
class ModifyDedicatedHostClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDedicatedHostClassResponseBody> body{};

  ModifyDedicatedHostClassResponse() {}

  explicit ModifyDedicatedHostClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDedicatedHostClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDedicatedHostClassResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDedicatedHostClassResponse() = default;
};
class ModifyDedicatedHostGroupAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> allocationPolicy{};
  shared_ptr<long> cpuAllocationRatio{};
  shared_ptr<string> dedicatedHostGroupDesc{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<long> diskAllocationRatio{};
  shared_ptr<string> hostReplacePolicy{};
  shared_ptr<long> memAllocationRatio{};
  shared_ptr<string> openPermission{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDedicatedHostGroupAttributeRequest() {}

  explicit ModifyDedicatedHostGroupAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationPolicy) {
      res["AllocationPolicy"] = boost::any(*allocationPolicy);
    }
    if (cpuAllocationRatio) {
      res["CpuAllocationRatio"] = boost::any(*cpuAllocationRatio);
    }
    if (dedicatedHostGroupDesc) {
      res["DedicatedHostGroupDesc"] = boost::any(*dedicatedHostGroupDesc);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (diskAllocationRatio) {
      res["DiskAllocationRatio"] = boost::any(*diskAllocationRatio);
    }
    if (hostReplacePolicy) {
      res["HostReplacePolicy"] = boost::any(*hostReplacePolicy);
    }
    if (memAllocationRatio) {
      res["MemAllocationRatio"] = boost::any(*memAllocationRatio);
    }
    if (openPermission) {
      res["OpenPermission"] = boost::any(*openPermission);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationPolicy") != m.end() && !m["AllocationPolicy"].empty()) {
      allocationPolicy = make_shared<string>(boost::any_cast<string>(m["AllocationPolicy"]));
    }
    if (m.find("CpuAllocationRatio") != m.end() && !m["CpuAllocationRatio"].empty()) {
      cpuAllocationRatio = make_shared<long>(boost::any_cast<long>(m["CpuAllocationRatio"]));
    }
    if (m.find("DedicatedHostGroupDesc") != m.end() && !m["DedicatedHostGroupDesc"].empty()) {
      dedicatedHostGroupDesc = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupDesc"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("DiskAllocationRatio") != m.end() && !m["DiskAllocationRatio"].empty()) {
      diskAllocationRatio = make_shared<long>(boost::any_cast<long>(m["DiskAllocationRatio"]));
    }
    if (m.find("HostReplacePolicy") != m.end() && !m["HostReplacePolicy"].empty()) {
      hostReplacePolicy = make_shared<string>(boost::any_cast<string>(m["HostReplacePolicy"]));
    }
    if (m.find("MemAllocationRatio") != m.end() && !m["MemAllocationRatio"].empty()) {
      memAllocationRatio = make_shared<long>(boost::any_cast<long>(m["MemAllocationRatio"]));
    }
    if (m.find("OpenPermission") != m.end() && !m["OpenPermission"].empty()) {
      openPermission = make_shared<string>(boost::any_cast<string>(m["OpenPermission"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDedicatedHostGroupAttributeRequest() = default;
};
class ModifyDedicatedHostGroupAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDedicatedHostGroupAttributeResponseBody() {}

  explicit ModifyDedicatedHostGroupAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDedicatedHostGroupAttributeResponseBody() = default;
};
class ModifyDedicatedHostGroupAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDedicatedHostGroupAttributeResponseBody> body{};

  ModifyDedicatedHostGroupAttributeResponse() {}

  explicit ModifyDedicatedHostGroupAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDedicatedHostGroupAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDedicatedHostGroupAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDedicatedHostGroupAttributeResponse() = default;
};
class ModifyDedicatedHostPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> newPassword{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ModifyDedicatedHostPasswordRequest() {}

  explicit ModifyDedicatedHostPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (newPassword) {
      res["NewPassword"] = boost::any(*newPassword);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("NewPassword") != m.end() && !m["NewPassword"].empty()) {
      newPassword = make_shared<string>(boost::any_cast<string>(m["NewPassword"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ModifyDedicatedHostPasswordRequest() = default;
};
class ModifyDedicatedHostPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostName{};
  shared_ptr<string> requestId{};

  ModifyDedicatedHostPasswordResponseBody() {}

  explicit ModifyDedicatedHostPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostName) {
      res["DedicatedHostName"] = boost::any(*dedicatedHostName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostName") != m.end() && !m["DedicatedHostName"].empty()) {
      dedicatedHostName = make_shared<string>(boost::any_cast<string>(m["DedicatedHostName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyDedicatedHostPasswordResponseBody() = default;
};
class ModifyDedicatedHostPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDedicatedHostPasswordResponseBody> body{};

  ModifyDedicatedHostPasswordResponse() {}

  explicit ModifyDedicatedHostPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDedicatedHostPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDedicatedHostPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDedicatedHostPasswordResponse() = default;
};
class QueryHostBaseInfoByInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryHostBaseInfoByInstanceRequest() {}

  explicit QueryHostBaseInfoByInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryHostBaseInfoByInstanceRequest() = default;
};
class QueryHostBaseInfoByInstanceResponseBodyHostInstanceConsoleInfos : public Darabonba::Model {
public:
  shared_ptr<string> clusterName{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> hostName{};
  shared_ptr<string> ip{};
  shared_ptr<string> port{};
  shared_ptr<string> role{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};

  QueryHostBaseInfoByInstanceResponseBodyHostInstanceConsoleInfos() {}

  explicit QueryHostBaseInfoByInstanceResponseBodyHostInstanceConsoleInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~QueryHostBaseInfoByInstanceResponseBodyHostInstanceConsoleInfos() = default;
};
class QueryHostBaseInfoByInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryHostBaseInfoByInstanceResponseBodyHostInstanceConsoleInfos>> hostInstanceConsoleInfos{};
  shared_ptr<string> requestId{};

  QueryHostBaseInfoByInstanceResponseBody() {}

  explicit QueryHostBaseInfoByInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostInstanceConsoleInfos) {
      vector<boost::any> temp1;
      for(auto item1:*hostInstanceConsoleInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostInstanceConsoleInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostInstanceConsoleInfos") != m.end() && !m["HostInstanceConsoleInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["HostInstanceConsoleInfos"].type()) {
        vector<QueryHostBaseInfoByInstanceResponseBodyHostInstanceConsoleInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostInstanceConsoleInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryHostBaseInfoByInstanceResponseBodyHostInstanceConsoleInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostInstanceConsoleInfos = make_shared<vector<QueryHostBaseInfoByInstanceResponseBodyHostInstanceConsoleInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryHostBaseInfoByInstanceResponseBody() = default;
};
class QueryHostBaseInfoByInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryHostBaseInfoByInstanceResponseBody> body{};

  QueryHostBaseInfoByInstanceResponse() {}

  explicit QueryHostBaseInfoByInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryHostBaseInfoByInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryHostBaseInfoByInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryHostBaseInfoByInstanceResponse() = default;
};
class QueryHostInstanceConsoleInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryHostInstanceConsoleInfoRequest() {}

  explicit QueryHostInstanceConsoleInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryHostInstanceConsoleInfoRequest() = default;
};
class QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo : public Darabonba::Model {
public:
  shared_ptr<double> cpuRatio{};
  shared_ptr<double> diskCurr{};
  shared_ptr<double> memRatio{};
  shared_ptr<double> perfIdbPio{};

  QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo() {}

  explicit QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuRatio) {
      res["CpuRatio"] = boost::any(*cpuRatio);
    }
    if (diskCurr) {
      res["DiskCurr"] = boost::any(*diskCurr);
    }
    if (memRatio) {
      res["MemRatio"] = boost::any(*memRatio);
    }
    if (perfIdbPio) {
      res["PerfIdbPio"] = boost::any(*perfIdbPio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuRatio") != m.end() && !m["CpuRatio"].empty()) {
      cpuRatio = make_shared<double>(boost::any_cast<double>(m["CpuRatio"]));
    }
    if (m.find("DiskCurr") != m.end() && !m["DiskCurr"].empty()) {
      diskCurr = make_shared<double>(boost::any_cast<double>(m["DiskCurr"]));
    }
    if (m.find("MemRatio") != m.end() && !m["MemRatio"].empty()) {
      memRatio = make_shared<double>(boost::any_cast<double>(m["MemRatio"]));
    }
    if (m.find("PerfIdbPio") != m.end() && !m["PerfIdbPio"].empty()) {
      perfIdbPio = make_shared<double>(boost::any_cast<double>(m["PerfIdbPio"]));
    }
  }


  virtual ~QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo() = default;
};
class QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfos : public Darabonba::Model {
public:
  shared_ptr<long> cpuCores{};
  shared_ptr<long> cpuIncreaseRatioValue{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> ip{};
  shared_ptr<string> levelName{};
  shared_ptr<long> maxConnIncreaseRatioValue{};
  shared_ptr<long> memSize{};
  shared_ptr<long> memoryIncreaseRatioValue{};
  shared_ptr<QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo> perfInfo{};
  shared_ptr<string> port{};
  shared_ptr<string> role{};
  shared_ptr<string> status{};

  QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfos() {}

  explicit QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuCores) {
      res["CpuCores"] = boost::any(*cpuCores);
    }
    if (cpuIncreaseRatioValue) {
      res["CpuIncreaseRatioValue"] = boost::any(*cpuIncreaseRatioValue);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (levelName) {
      res["LevelName"] = boost::any(*levelName);
    }
    if (maxConnIncreaseRatioValue) {
      res["MaxConnIncreaseRatioValue"] = boost::any(*maxConnIncreaseRatioValue);
    }
    if (memSize) {
      res["MemSize"] = boost::any(*memSize);
    }
    if (memoryIncreaseRatioValue) {
      res["MemoryIncreaseRatioValue"] = boost::any(*memoryIncreaseRatioValue);
    }
    if (perfInfo) {
      res["PerfInfo"] = perfInfo ? boost::any(perfInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuCores") != m.end() && !m["CpuCores"].empty()) {
      cpuCores = make_shared<long>(boost::any_cast<long>(m["CpuCores"]));
    }
    if (m.find("CpuIncreaseRatioValue") != m.end() && !m["CpuIncreaseRatioValue"].empty()) {
      cpuIncreaseRatioValue = make_shared<long>(boost::any_cast<long>(m["CpuIncreaseRatioValue"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("LevelName") != m.end() && !m["LevelName"].empty()) {
      levelName = make_shared<string>(boost::any_cast<string>(m["LevelName"]));
    }
    if (m.find("MaxConnIncreaseRatioValue") != m.end() && !m["MaxConnIncreaseRatioValue"].empty()) {
      maxConnIncreaseRatioValue = make_shared<long>(boost::any_cast<long>(m["MaxConnIncreaseRatioValue"]));
    }
    if (m.find("MemSize") != m.end() && !m["MemSize"].empty()) {
      memSize = make_shared<long>(boost::any_cast<long>(m["MemSize"]));
    }
    if (m.find("MemoryIncreaseRatioValue") != m.end() && !m["MemoryIncreaseRatioValue"].empty()) {
      memoryIncreaseRatioValue = make_shared<long>(boost::any_cast<long>(m["MemoryIncreaseRatioValue"]));
    }
    if (m.find("PerfInfo") != m.end() && !m["PerfInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PerfInfo"].type()) {
        QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PerfInfo"]));
        perfInfo = make_shared<QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo>(model1);
      }
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfos() = default;
};
class QueryHostInstanceConsoleInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfos>> hostInstanceConsoleInfos{};
  shared_ptr<string> requestId{};

  QueryHostInstanceConsoleInfoResponseBody() {}

  explicit QueryHostInstanceConsoleInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostInstanceConsoleInfos) {
      vector<boost::any> temp1;
      for(auto item1:*hostInstanceConsoleInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostInstanceConsoleInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostInstanceConsoleInfos") != m.end() && !m["HostInstanceConsoleInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["HostInstanceConsoleInfos"].type()) {
        vector<QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostInstanceConsoleInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostInstanceConsoleInfos = make_shared<vector<QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryHostInstanceConsoleInfoResponseBody() = default;
};
class QueryHostInstanceConsoleInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryHostInstanceConsoleInfoResponseBody> body{};

  QueryHostInstanceConsoleInfoResponse() {}

  explicit QueryHostInstanceConsoleInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryHostInstanceConsoleInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryHostInstanceConsoleInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryHostInstanceConsoleInfoResponse() = default;
};
class ReplaceDedicatedHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> failoverMode{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ReplaceDedicatedHostRequest() {}

  explicit ReplaceDedicatedHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (failoverMode) {
      res["FailoverMode"] = boost::any(*failoverMode);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("FailoverMode") != m.end() && !m["FailoverMode"].empty()) {
      failoverMode = make_shared<string>(boost::any_cast<string>(m["FailoverMode"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ReplaceDedicatedHostRequest() = default;
};
class ReplaceDedicatedHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> taskId{};

  ReplaceDedicatedHostResponseBody() {}

  explicit ReplaceDedicatedHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
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
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~ReplaceDedicatedHostResponseBody() = default;
};
class ReplaceDedicatedHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReplaceDedicatedHostResponseBody> body{};

  ReplaceDedicatedHostResponse() {}

  explicit ReplaceDedicatedHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReplaceDedicatedHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReplaceDedicatedHostResponseBody>(model1);
      }
    }
  }


  virtual ~ReplaceDedicatedHostResponse() = default;
};
class RestartDedicatedHostRequest : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> failoverMode{};
  shared_ptr<bool> forceStop{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  RestartDedicatedHostRequest() {}

  explicit RestartDedicatedHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (failoverMode) {
      res["FailoverMode"] = boost::any(*failoverMode);
    }
    if (forceStop) {
      res["ForceStop"] = boost::any(*forceStop);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("FailoverMode") != m.end() && !m["FailoverMode"].empty()) {
      failoverMode = make_shared<string>(boost::any_cast<string>(m["FailoverMode"]));
    }
    if (m.find("ForceStop") != m.end() && !m["ForceStop"].empty()) {
      forceStop = make_shared<bool>(boost::any_cast<bool>(m["ForceStop"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~RestartDedicatedHostRequest() = default;
};
class RestartDedicatedHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> taskId{};

  RestartDedicatedHostResponseBody() {}

  explicit RestartDedicatedHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
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
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~RestartDedicatedHostResponseBody() = default;
};
class RestartDedicatedHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartDedicatedHostResponseBody> body{};

  RestartDedicatedHostResponse() {}

  explicit RestartDedicatedHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestartDedicatedHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartDedicatedHostResponseBody>(model1);
      }
    }
  }


  virtual ~RestartDedicatedHostResponse() = default;
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
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
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
  shared_ptr<bool> all{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
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
  CreateDedicatedHostResponse createDedicatedHostWithOptions(shared_ptr<CreateDedicatedHostRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDedicatedHostResponse createDedicatedHost(shared_ptr<CreateDedicatedHostRequest> request);
  CreateDedicatedHostAccountResponse createDedicatedHostAccountWithOptions(shared_ptr<CreateDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDedicatedHostAccountResponse createDedicatedHostAccount(shared_ptr<CreateDedicatedHostAccountRequest> request);
  CreateDedicatedHostGroupResponse createDedicatedHostGroupWithOptions(shared_ptr<CreateDedicatedHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDedicatedHostGroupResponse createDedicatedHostGroup(shared_ptr<CreateDedicatedHostGroupRequest> request);
  CreateMyBaseResponse createMyBaseWithOptions(shared_ptr<CreateMyBaseRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMyBaseResponse createMyBase(shared_ptr<CreateMyBaseRequest> request);
  DeleteDedicatedHostAccountResponse deleteDedicatedHostAccountWithOptions(shared_ptr<DeleteDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDedicatedHostAccountResponse deleteDedicatedHostAccount(shared_ptr<DeleteDedicatedHostAccountRequest> request);
  DeleteDedicatedHostGroupResponse deleteDedicatedHostGroupWithOptions(shared_ptr<DeleteDedicatedHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDedicatedHostGroupResponse deleteDedicatedHostGroup(shared_ptr<DeleteDedicatedHostGroupRequest> request);
  DescribeDedicatedHostAttributeResponse describeDedicatedHostAttributeWithOptions(shared_ptr<DescribeDedicatedHostAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedHostAttributeResponse describeDedicatedHostAttribute(shared_ptr<DescribeDedicatedHostAttributeRequest> request);
  DescribeDedicatedHostDisksResponse describeDedicatedHostDisksWithOptions(shared_ptr<DescribeDedicatedHostDisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedHostDisksResponse describeDedicatedHostDisks(shared_ptr<DescribeDedicatedHostDisksRequest> request);
  DescribeDedicatedHostGroupsResponse describeDedicatedHostGroupsWithOptions(shared_ptr<DescribeDedicatedHostGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedHostGroupsResponse describeDedicatedHostGroups(shared_ptr<DescribeDedicatedHostGroupsRequest> request);
  DescribeDedicatedHostsResponse describeDedicatedHostsWithOptions(shared_ptr<DescribeDedicatedHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedHostsResponse describeDedicatedHosts(shared_ptr<DescribeDedicatedHostsRequest> request);
  DescribeHostEcsLevelInfoResponse describeHostEcsLevelInfoWithOptions(shared_ptr<DescribeHostEcsLevelInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHostEcsLevelInfoResponse describeHostEcsLevelInfo(shared_ptr<DescribeHostEcsLevelInfoRequest> request);
  DescribeHostWebShellResponse describeHostWebShellWithOptions(shared_ptr<DescribeHostWebShellRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHostWebShellResponse describeHostWebShell(shared_ptr<DescribeHostWebShellRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyDedicatedHostAccountResponse modifyDedicatedHostAccountWithOptions(shared_ptr<ModifyDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDedicatedHostAccountResponse modifyDedicatedHostAccount(shared_ptr<ModifyDedicatedHostAccountRequest> request);
  ModifyDedicatedHostAttributeResponse modifyDedicatedHostAttributeWithOptions(shared_ptr<ModifyDedicatedHostAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDedicatedHostAttributeResponse modifyDedicatedHostAttribute(shared_ptr<ModifyDedicatedHostAttributeRequest> request);
  ModifyDedicatedHostClassResponse modifyDedicatedHostClassWithOptions(shared_ptr<ModifyDedicatedHostClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDedicatedHostClassResponse modifyDedicatedHostClass(shared_ptr<ModifyDedicatedHostClassRequest> request);
  ModifyDedicatedHostGroupAttributeResponse modifyDedicatedHostGroupAttributeWithOptions(shared_ptr<ModifyDedicatedHostGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDedicatedHostGroupAttributeResponse modifyDedicatedHostGroupAttribute(shared_ptr<ModifyDedicatedHostGroupAttributeRequest> request);
  ModifyDedicatedHostPasswordResponse modifyDedicatedHostPasswordWithOptions(shared_ptr<ModifyDedicatedHostPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDedicatedHostPasswordResponse modifyDedicatedHostPassword(shared_ptr<ModifyDedicatedHostPasswordRequest> request);
  QueryHostBaseInfoByInstanceResponse queryHostBaseInfoByInstanceWithOptions(shared_ptr<QueryHostBaseInfoByInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHostBaseInfoByInstanceResponse queryHostBaseInfoByInstance(shared_ptr<QueryHostBaseInfoByInstanceRequest> request);
  QueryHostInstanceConsoleInfoResponse queryHostInstanceConsoleInfoWithOptions(shared_ptr<QueryHostInstanceConsoleInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHostInstanceConsoleInfoResponse queryHostInstanceConsoleInfo(shared_ptr<QueryHostInstanceConsoleInfoRequest> request);
  ReplaceDedicatedHostResponse replaceDedicatedHostWithOptions(shared_ptr<ReplaceDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplaceDedicatedHostResponse replaceDedicatedHost(shared_ptr<ReplaceDedicatedHostRequest> request);
  RestartDedicatedHostResponse restartDedicatedHostWithOptions(shared_ptr<RestartDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartDedicatedHostResponse restartDedicatedHost(shared_ptr<RestartDedicatedHostRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cddc20200320

#endif
