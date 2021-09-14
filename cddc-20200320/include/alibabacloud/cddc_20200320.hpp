// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CDDC20200320_H_
#define ALIBABACLOUD_CDDC20200320_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cddc20200320 {
class ModifyDBInstanceSwitchWeightRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> switchWeight{};

  ModifyDBInstanceSwitchWeightRequest() {}

  explicit ModifyDBInstanceSwitchWeightRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
    }
    if (switchWeight) {
      res["SwitchWeight"] = boost::any(*switchWeight);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("SwitchWeight") != m.end() && !m["SwitchWeight"].empty()) {
      switchWeight = make_shared<string>(boost::any_cast<string>(m["SwitchWeight"]));
    }
  }


  virtual ~ModifyDBInstanceSwitchWeightRequest() = default;
};
class ModifyDBInstanceSwitchWeightResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDBInstanceSwitchWeightResponseBody() {}

  explicit ModifyDBInstanceSwitchWeightResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDBInstanceSwitchWeightResponseBody() = default;
};
class ModifyDBInstanceSwitchWeightResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDBInstanceSwitchWeightResponseBody> body{};

  ModifyDBInstanceSwitchWeightResponse() {}

  explicit ModifyDBInstanceSwitchWeightResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDBInstanceSwitchWeightResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDBInstanceSwitchWeightResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDBInstanceSwitchWeightResponse() = default;
};
class DescribeAvailableDedicatedHostZonesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dbType{};

  DescribeAvailableDedicatedHostZonesRequest() {}

  explicit DescribeAvailableDedicatedHostZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
  }


  virtual ~DescribeAvailableDedicatedHostZonesRequest() = default;
};
class DescribeAvailableDedicatedHostZonesResponseBodyZonesDedicatedHostZones : public Darabonba::Model {
public:
  shared_ptr<string> zoneId{};
  shared_ptr<string> description{};

  DescribeAvailableDedicatedHostZonesResponseBodyZonesDedicatedHostZones() {}

  explicit DescribeAvailableDedicatedHostZonesResponseBodyZonesDedicatedHostZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~DescribeAvailableDedicatedHostZonesResponseBodyZonesDedicatedHostZones() = default;
};
class DescribeAvailableDedicatedHostZonesResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableDedicatedHostZonesResponseBodyZonesDedicatedHostZones>> dedicatedHostZones{};

  DescribeAvailableDedicatedHostZonesResponseBodyZones() {}

  explicit DescribeAvailableDedicatedHostZonesResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostZones) {
      vector<boost::any> temp1;
      for(auto item1:*dedicatedHostZones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DedicatedHostZones"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostZones") != m.end() && !m["DedicatedHostZones"].empty()) {
      if (typeid(vector<boost::any>) == m["DedicatedHostZones"].type()) {
        vector<DescribeAvailableDedicatedHostZonesResponseBodyZonesDedicatedHostZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DedicatedHostZones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableDedicatedHostZonesResponseBodyZonesDedicatedHostZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dedicatedHostZones = make_shared<vector<DescribeAvailableDedicatedHostZonesResponseBodyZonesDedicatedHostZones>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableDedicatedHostZonesResponseBodyZones() = default;
};
class DescribeAvailableDedicatedHostZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAvailableDedicatedHostZonesResponseBodyZones> zones{};

  DescribeAvailableDedicatedHostZonesResponseBody() {}

  explicit DescribeAvailableDedicatedHostZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeAvailableDedicatedHostZonesResponseBodyZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeAvailableDedicatedHostZonesResponseBodyZones>(model1);
      }
    }
  }


  virtual ~DescribeAvailableDedicatedHostZonesResponseBody() = default;
};
class DescribeAvailableDedicatedHostZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAvailableDedicatedHostZonesResponseBody> body{};

  DescribeAvailableDedicatedHostZonesResponse() {}

  explicit DescribeAvailableDedicatedHostZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAvailableDedicatedHostZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAvailableDedicatedHostZonesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAvailableDedicatedHostZonesResponse() = default;
};
class DescribeDedicatedHostGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> imageCategory{};
  shared_ptr<string> engine{};

  DescribeDedicatedHostGroupsRequest() {}

  explicit DescribeDedicatedHostGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
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
  shared_ptr<double> diskAllocateRation{};
  shared_ptr<string> deployType{};
  shared_ptr<string> createTime{};
  shared_ptr<map<string, boost::any>> dedicatedHostCountGroupByHostType{};
  shared_ptr<string> text{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<double> diskUtility{};
  shared_ptr<double> memUsedAmount{};
  shared_ptr<double> memAllocatedAmount{};
  shared_ptr<long> cpuAllocationRatio{};
  shared_ptr<long> memAllocationRatio{};
  shared_ptr<double> memAllocateRation{};
  shared_ptr<double> memUtility{};
  shared_ptr<double> cpuAllocatedAmount{};
  shared_ptr<string> dedicatedHostGroupDesc{};
  shared_ptr<double> cpuAllocateRation{};
  shared_ptr<long> instanceNumber{};
  shared_ptr<string> openPermission{};
  shared_ptr<string> VPCId{};
  shared_ptr<double> diskAllocatedAmount{};
  shared_ptr<long> hostNumber{};
  shared_ptr<double> diskUsedAmount{};
  shared_ptr<string> allocationPolicy{};
  shared_ptr<string> engine{};
  shared_ptr<long> diskAllocationRatio{};
  shared_ptr<string> bastionInstanceId{};
  shared_ptr<string> hostReplacePolicy{};
  shared_ptr<DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroupsZoneIDList> zoneIDList{};

  DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups() {}

  explicit DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroupsDedicatedHostGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskAllocateRation) {
      res["DiskAllocateRation"] = boost::any(*diskAllocateRation);
    }
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dedicatedHostCountGroupByHostType) {
      res["DedicatedHostCountGroupByHostType"] = boost::any(*dedicatedHostCountGroupByHostType);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (diskUtility) {
      res["DiskUtility"] = boost::any(*diskUtility);
    }
    if (memUsedAmount) {
      res["MemUsedAmount"] = boost::any(*memUsedAmount);
    }
    if (memAllocatedAmount) {
      res["MemAllocatedAmount"] = boost::any(*memAllocatedAmount);
    }
    if (cpuAllocationRatio) {
      res["CpuAllocationRatio"] = boost::any(*cpuAllocationRatio);
    }
    if (memAllocationRatio) {
      res["MemAllocationRatio"] = boost::any(*memAllocationRatio);
    }
    if (memAllocateRation) {
      res["MemAllocateRation"] = boost::any(*memAllocateRation);
    }
    if (memUtility) {
      res["MemUtility"] = boost::any(*memUtility);
    }
    if (cpuAllocatedAmount) {
      res["CpuAllocatedAmount"] = boost::any(*cpuAllocatedAmount);
    }
    if (dedicatedHostGroupDesc) {
      res["DedicatedHostGroupDesc"] = boost::any(*dedicatedHostGroupDesc);
    }
    if (cpuAllocateRation) {
      res["CpuAllocateRation"] = boost::any(*cpuAllocateRation);
    }
    if (instanceNumber) {
      res["InstanceNumber"] = boost::any(*instanceNumber);
    }
    if (openPermission) {
      res["OpenPermission"] = boost::any(*openPermission);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (diskAllocatedAmount) {
      res["DiskAllocatedAmount"] = boost::any(*diskAllocatedAmount);
    }
    if (hostNumber) {
      res["HostNumber"] = boost::any(*hostNumber);
    }
    if (diskUsedAmount) {
      res["DiskUsedAmount"] = boost::any(*diskUsedAmount);
    }
    if (allocationPolicy) {
      res["AllocationPolicy"] = boost::any(*allocationPolicy);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (diskAllocationRatio) {
      res["DiskAllocationRatio"] = boost::any(*diskAllocationRatio);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
    }
    if (hostReplacePolicy) {
      res["HostReplacePolicy"] = boost::any(*hostReplacePolicy);
    }
    if (zoneIDList) {
      res["ZoneIDList"] = zoneIDList ? boost::any(zoneIDList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskAllocateRation") != m.end() && !m["DiskAllocateRation"].empty()) {
      diskAllocateRation = make_shared<double>(boost::any_cast<double>(m["DiskAllocateRation"]));
    }
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
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
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("DiskUtility") != m.end() && !m["DiskUtility"].empty()) {
      diskUtility = make_shared<double>(boost::any_cast<double>(m["DiskUtility"]));
    }
    if (m.find("MemUsedAmount") != m.end() && !m["MemUsedAmount"].empty()) {
      memUsedAmount = make_shared<double>(boost::any_cast<double>(m["MemUsedAmount"]));
    }
    if (m.find("MemAllocatedAmount") != m.end() && !m["MemAllocatedAmount"].empty()) {
      memAllocatedAmount = make_shared<double>(boost::any_cast<double>(m["MemAllocatedAmount"]));
    }
    if (m.find("CpuAllocationRatio") != m.end() && !m["CpuAllocationRatio"].empty()) {
      cpuAllocationRatio = make_shared<long>(boost::any_cast<long>(m["CpuAllocationRatio"]));
    }
    if (m.find("MemAllocationRatio") != m.end() && !m["MemAllocationRatio"].empty()) {
      memAllocationRatio = make_shared<long>(boost::any_cast<long>(m["MemAllocationRatio"]));
    }
    if (m.find("MemAllocateRation") != m.end() && !m["MemAllocateRation"].empty()) {
      memAllocateRation = make_shared<double>(boost::any_cast<double>(m["MemAllocateRation"]));
    }
    if (m.find("MemUtility") != m.end() && !m["MemUtility"].empty()) {
      memUtility = make_shared<double>(boost::any_cast<double>(m["MemUtility"]));
    }
    if (m.find("CpuAllocatedAmount") != m.end() && !m["CpuAllocatedAmount"].empty()) {
      cpuAllocatedAmount = make_shared<double>(boost::any_cast<double>(m["CpuAllocatedAmount"]));
    }
    if (m.find("DedicatedHostGroupDesc") != m.end() && !m["DedicatedHostGroupDesc"].empty()) {
      dedicatedHostGroupDesc = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupDesc"]));
    }
    if (m.find("CpuAllocateRation") != m.end() && !m["CpuAllocateRation"].empty()) {
      cpuAllocateRation = make_shared<double>(boost::any_cast<double>(m["CpuAllocateRation"]));
    }
    if (m.find("InstanceNumber") != m.end() && !m["InstanceNumber"].empty()) {
      instanceNumber = make_shared<long>(boost::any_cast<long>(m["InstanceNumber"]));
    }
    if (m.find("OpenPermission") != m.end() && !m["OpenPermission"].empty()) {
      openPermission = make_shared<string>(boost::any_cast<string>(m["OpenPermission"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("DiskAllocatedAmount") != m.end() && !m["DiskAllocatedAmount"].empty()) {
      diskAllocatedAmount = make_shared<double>(boost::any_cast<double>(m["DiskAllocatedAmount"]));
    }
    if (m.find("HostNumber") != m.end() && !m["HostNumber"].empty()) {
      hostNumber = make_shared<long>(boost::any_cast<long>(m["HostNumber"]));
    }
    if (m.find("DiskUsedAmount") != m.end() && !m["DiskUsedAmount"].empty()) {
      diskUsedAmount = make_shared<double>(boost::any_cast<double>(m["DiskUsedAmount"]));
    }
    if (m.find("AllocationPolicy") != m.end() && !m["AllocationPolicy"].empty()) {
      allocationPolicy = make_shared<string>(boost::any_cast<string>(m["AllocationPolicy"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("DiskAllocationRatio") != m.end() && !m["DiskAllocationRatio"].empty()) {
      diskAllocationRatio = make_shared<long>(boost::any_cast<long>(m["DiskAllocationRatio"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
    if (m.find("HostReplacePolicy") != m.end() && !m["HostReplacePolicy"].empty()) {
      hostReplacePolicy = make_shared<string>(boost::any_cast<string>(m["HostReplacePolicy"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups> dedicatedHostGroups{};

  DescribeDedicatedHostGroupsResponseBody() {}

  explicit DescribeDedicatedHostGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dedicatedHostGroups) {
      res["DedicatedHostGroups"] = dedicatedHostGroups ? boost::any(dedicatedHostGroups->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DedicatedHostGroups") != m.end() && !m["DedicatedHostGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["DedicatedHostGroups"].type()) {
        DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DedicatedHostGroups"]));
        dedicatedHostGroups = make_shared<DescribeDedicatedHostGroupsResponseBodyDedicatedHostGroups>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedHostGroupsResponseBody() = default;
};
class DescribeDedicatedHostGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDedicatedHostGroupsResponseBody> body{};

  DescribeDedicatedHostGroupsResponse() {}

  explicit DescribeDedicatedHostGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeMyBaseHostOverViewRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> region{};

  DescribeMyBaseHostOverViewRequest() {}

  explicit DescribeMyBaseHostOverViewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DescribeMyBaseHostOverViewRequest() = default;
};
class DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel : public Darabonba::Model {
public:
  shared_ptr<string> hostEngineCount{};
  shared_ptr<string> hostDateType{};
  shared_ptr<long> count{};

  DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel() {}

  explicit DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostEngineCount) {
      res["HostEngineCount"] = boost::any(*hostEngineCount);
    }
    if (hostDateType) {
      res["HostDateType"] = boost::any(*hostDateType);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostEngineCount") != m.end() && !m["HostEngineCount"].empty()) {
      hostEngineCount = make_shared<string>(boost::any_cast<string>(m["HostEngineCount"]));
    }
    if (m.find("HostDateType") != m.end() && !m["HostDateType"].empty()) {
      hostDateType = make_shared<string>(boost::any_cast<string>(m["HostDateType"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel() = default;
};
class DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModels : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel>> typeModel{};

  DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModels() {}

  explicit DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (typeModel) {
      vector<boost::any> temp1;
      for(auto item1:*typeModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TypeModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TypeModel") != m.end() && !m["TypeModel"].empty()) {
      if (typeid(vector<boost::any>) == m["TypeModel"].type()) {
        vector<DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TypeModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        typeModel = make_shared<vector<DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel>>(expect1);
      }
    }
  }


  virtual ~DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModels() = default;
};
class DescribeMyBaseHostOverViewResponseBodyRegionsRegionModel : public Darabonba::Model {
public:
  shared_ptr<string> engineCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> hostGroupCount{};
  shared_ptr<string> region{};
  shared_ptr<DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModels> typeModels{};

  DescribeMyBaseHostOverViewResponseBodyRegionsRegionModel() {}

  explicit DescribeMyBaseHostOverViewResponseBodyRegionsRegionModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engineCount) {
      res["EngineCount"] = boost::any(*engineCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (hostGroupCount) {
      res["HostGroupCount"] = boost::any(*hostGroupCount);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (typeModels) {
      res["TypeModels"] = typeModels ? boost::any(typeModels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EngineCount") != m.end() && !m["EngineCount"].empty()) {
      engineCount = make_shared<string>(boost::any_cast<string>(m["EngineCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("HostGroupCount") != m.end() && !m["HostGroupCount"].empty()) {
      hostGroupCount = make_shared<long>(boost::any_cast<long>(m["HostGroupCount"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("TypeModels") != m.end() && !m["TypeModels"].empty()) {
      if (typeid(map<string, boost::any>) == m["TypeModels"].type()) {
        DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TypeModels"]));
        typeModels = make_shared<DescribeMyBaseHostOverViewResponseBodyRegionsRegionModelTypeModels>(model1);
      }
    }
  }


  virtual ~DescribeMyBaseHostOverViewResponseBodyRegionsRegionModel() = default;
};
class DescribeMyBaseHostOverViewResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMyBaseHostOverViewResponseBodyRegionsRegionModel>> regionModel{};

  DescribeMyBaseHostOverViewResponseBodyRegions() {}

  explicit DescribeMyBaseHostOverViewResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionModel) {
      vector<boost::any> temp1;
      for(auto item1:*regionModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionModel") != m.end() && !m["RegionModel"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionModel"].type()) {
        vector<DescribeMyBaseHostOverViewResponseBodyRegionsRegionModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMyBaseHostOverViewResponseBodyRegionsRegionModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionModel = make_shared<vector<DescribeMyBaseHostOverViewResponseBodyRegionsRegionModel>>(expect1);
      }
    }
  }


  virtual ~DescribeMyBaseHostOverViewResponseBodyRegions() = default;
};
class DescribeMyBaseHostOverViewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeMyBaseHostOverViewResponseBodyRegions> regions{};

  DescribeMyBaseHostOverViewResponseBody() {}

  explicit DescribeMyBaseHostOverViewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMyBaseHostOverViewResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeMyBaseHostOverViewResponseBodyRegions>(model1);
      }
    }
  }


  virtual ~DescribeMyBaseHostOverViewResponseBody() = default;
};
class DescribeMyBaseHostOverViewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeMyBaseHostOverViewResponseBody> body{};

  DescribeMyBaseHostOverViewResponse() {}

  explicit DescribeMyBaseHostOverViewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeMyBaseHostOverViewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMyBaseHostOverViewResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMyBaseHostOverViewResponse() = default;
};
class DescribeBriefDedicatedHostsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> zoneId{};
  shared_ptr<long> pageNumbers{};
  shared_ptr<long> pageSize{};

  DescribeBriefDedicatedHostsRequest() {}

  explicit DescribeBriefDedicatedHostsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (pageNumbers) {
      res["PageNumbers"] = boost::any(*pageNumbers);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("PageNumbers") != m.end() && !m["PageNumbers"].empty()) {
      pageNumbers = make_shared<long>(boost::any_cast<long>(m["PageNumbers"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeBriefDedicatedHostsRequest() = default;
};
class DescribeBriefDedicatedHostsResponseBodyDedicatedHosts : public Darabonba::Model {
public:
  shared_ptr<string> allocationStatus{};
  shared_ptr<string> region{};
  shared_ptr<string> hostStatus{};
  shared_ptr<string> zoneId{};
  shared_ptr<long> hostCPU{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> engine{};
  shared_ptr<long> hostMem{};
  shared_ptr<string> createdTime{};

  DescribeBriefDedicatedHostsResponseBodyDedicatedHosts() {}

  explicit DescribeBriefDedicatedHostsResponseBodyDedicatedHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationStatus) {
      res["AllocationStatus"] = boost::any(*allocationStatus);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (hostStatus) {
      res["HostStatus"] = boost::any(*hostStatus);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (hostCPU) {
      res["HostCPU"] = boost::any(*hostCPU);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (hostMem) {
      res["HostMem"] = boost::any(*hostMem);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationStatus") != m.end() && !m["AllocationStatus"].empty()) {
      allocationStatus = make_shared<string>(boost::any_cast<string>(m["AllocationStatus"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("HostStatus") != m.end() && !m["HostStatus"].empty()) {
      hostStatus = make_shared<string>(boost::any_cast<string>(m["HostStatus"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("HostCPU") != m.end() && !m["HostCPU"].empty()) {
      hostCPU = make_shared<long>(boost::any_cast<long>(m["HostCPU"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("HostMem") != m.end() && !m["HostMem"].empty()) {
      hostMem = make_shared<long>(boost::any_cast<long>(m["HostMem"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
  }


  virtual ~DescribeBriefDedicatedHostsResponseBodyDedicatedHosts() = default;
};
class DescribeBriefDedicatedHostsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalRecords{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumbers{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<vector<DescribeBriefDedicatedHostsResponseBodyDedicatedHosts>> dedicatedHosts{};

  DescribeBriefDedicatedHostsResponseBody() {}

  explicit DescribeBriefDedicatedHostsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalRecords) {
      res["TotalRecords"] = boost::any(*totalRecords);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumbers) {
      res["PageNumbers"] = boost::any(*pageNumbers);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
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
    if (m.find("TotalRecords") != m.end() && !m["TotalRecords"].empty()) {
      totalRecords = make_shared<long>(boost::any_cast<long>(m["TotalRecords"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumbers") != m.end() && !m["PageNumbers"].empty()) {
      pageNumbers = make_shared<long>(boost::any_cast<long>(m["PageNumbers"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("DedicatedHosts") != m.end() && !m["DedicatedHosts"].empty()) {
      if (typeid(vector<boost::any>) == m["DedicatedHosts"].type()) {
        vector<DescribeBriefDedicatedHostsResponseBodyDedicatedHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DedicatedHosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBriefDedicatedHostsResponseBodyDedicatedHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dedicatedHosts = make_shared<vector<DescribeBriefDedicatedHostsResponseBodyDedicatedHosts>>(expect1);
      }
    }
  }


  virtual ~DescribeBriefDedicatedHostsResponseBody() = default;
};
class DescribeBriefDedicatedHostsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBriefDedicatedHostsResponseBody> body{};

  DescribeBriefDedicatedHostsResponse() {}

  explicit DescribeBriefDedicatedHostsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBriefDedicatedHostsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBriefDedicatedHostsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBriefDedicatedHostsResponse() = default;
};
class DescribeDedicatedResourceAdvisorRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> regionId{};

  DescribeDedicatedResourceAdvisorRequest() {}

  explicit DescribeDedicatedResourceAdvisorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
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
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDedicatedResourceAdvisorRequest() = default;
};
class DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisorsResourceAdvisors : public Darabonba::Model {
public:
  shared_ptr<double> cpuUsageAfterAction{};
  shared_ptr<string> action{};
  shared_ptr<string> destinationDedicatedHostId{};
  shared_ptr<string> sourceDedicatedInstanceId{};
  shared_ptr<string> actionDescription{};
  shared_ptr<string> sourceDedicatedInstanceRole{};
  shared_ptr<string> sourceDedicatedHostId{};
  shared_ptr<double> cpuUsageBeforeAction{};

  DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisorsResourceAdvisors() {}

  explicit DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisorsResourceAdvisors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuUsageAfterAction) {
      res["CpuUsageAfterAction"] = boost::any(*cpuUsageAfterAction);
    }
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (destinationDedicatedHostId) {
      res["DestinationDedicatedHostId"] = boost::any(*destinationDedicatedHostId);
    }
    if (sourceDedicatedInstanceId) {
      res["SourceDedicatedInstanceId"] = boost::any(*sourceDedicatedInstanceId);
    }
    if (actionDescription) {
      res["ActionDescription"] = boost::any(*actionDescription);
    }
    if (sourceDedicatedInstanceRole) {
      res["SourceDedicatedInstanceRole"] = boost::any(*sourceDedicatedInstanceRole);
    }
    if (sourceDedicatedHostId) {
      res["SourceDedicatedHostId"] = boost::any(*sourceDedicatedHostId);
    }
    if (cpuUsageBeforeAction) {
      res["CpuUsageBeforeAction"] = boost::any(*cpuUsageBeforeAction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuUsageAfterAction") != m.end() && !m["CpuUsageAfterAction"].empty()) {
      cpuUsageAfterAction = make_shared<double>(boost::any_cast<double>(m["CpuUsageAfterAction"]));
    }
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("DestinationDedicatedHostId") != m.end() && !m["DestinationDedicatedHostId"].empty()) {
      destinationDedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DestinationDedicatedHostId"]));
    }
    if (m.find("SourceDedicatedInstanceId") != m.end() && !m["SourceDedicatedInstanceId"].empty()) {
      sourceDedicatedInstanceId = make_shared<string>(boost::any_cast<string>(m["SourceDedicatedInstanceId"]));
    }
    if (m.find("ActionDescription") != m.end() && !m["ActionDescription"].empty()) {
      actionDescription = make_shared<string>(boost::any_cast<string>(m["ActionDescription"]));
    }
    if (m.find("SourceDedicatedInstanceRole") != m.end() && !m["SourceDedicatedInstanceRole"].empty()) {
      sourceDedicatedInstanceRole = make_shared<string>(boost::any_cast<string>(m["SourceDedicatedInstanceRole"]));
    }
    if (m.find("SourceDedicatedHostId") != m.end() && !m["SourceDedicatedHostId"].empty()) {
      sourceDedicatedHostId = make_shared<string>(boost::any_cast<string>(m["SourceDedicatedHostId"]));
    }
    if (m.find("CpuUsageBeforeAction") != m.end() && !m["CpuUsageBeforeAction"].empty()) {
      cpuUsageBeforeAction = make_shared<double>(boost::any_cast<double>(m["CpuUsageBeforeAction"]));
    }
  }


  virtual ~DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisorsResourceAdvisors() = default;
};
class DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisors : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisorsResourceAdvisors>> resourceAdvisors{};

  DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisors() {}

  explicit DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceAdvisors) {
      vector<boost::any> temp1;
      for(auto item1:*resourceAdvisors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceAdvisors"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceAdvisors") != m.end() && !m["ResourceAdvisors"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceAdvisors"].type()) {
        vector<DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisorsResourceAdvisors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceAdvisors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisorsResourceAdvisors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceAdvisors = make_shared<vector<DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisorsResourceAdvisors>>(expect1);
      }
    }
  }


  virtual ~DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisors() = default;
};
class DescribeDedicatedResourceAdvisorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisors> resourceAdvisors{};

  DescribeDedicatedResourceAdvisorResponseBody() {}

  explicit DescribeDedicatedResourceAdvisorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceAdvisors) {
      res["ResourceAdvisors"] = resourceAdvisors ? boost::any(resourceAdvisors->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ResourceAdvisors") != m.end() && !m["ResourceAdvisors"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceAdvisors"].type()) {
        DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisors model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceAdvisors"]));
        resourceAdvisors = make_shared<DescribeDedicatedResourceAdvisorResponseBodyResourceAdvisors>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedResourceAdvisorResponseBody() = default;
};
class DescribeDedicatedResourceAdvisorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDedicatedResourceAdvisorResponseBody> body{};

  DescribeDedicatedResourceAdvisorResponse() {}

  explicit DescribeDedicatedResourceAdvisorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDedicatedResourceAdvisorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedResourceAdvisorResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedResourceAdvisorResponse() = default;
};
class DescribeListUserBackupFileRecordRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> status{};
  shared_ptr<string> engine{};
  shared_ptr<string> opsServiceVersion{};
  shared_ptr<string> regionId{};

  DescribeListUserBackupFileRecordRequest() {}

  explicit DescribeListUserBackupFileRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (opsServiceVersion) {
      res["OpsServiceVersion"] = boost::any(*opsServiceVersion);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("OpsServiceVersion") != m.end() && !m["OpsServiceVersion"].empty()) {
      opsServiceVersion = make_shared<string>(boost::any_cast<string>(m["OpsServiceVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeListUserBackupFileRecordRequest() = default;
};
class DescribeListUserBackupFileRecordResponseBodyRecords : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> ossFilePath{};
  shared_ptr<string> ossBucket{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> bid{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> ossFileName{};
  shared_ptr<long> ossFileSize{};
  shared_ptr<string> gmtCreated{};
  shared_ptr<string> backupSetId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> dbInstanceName{};
  shared_ptr<string> engine{};
  shared_ptr<string> binlogInfo{};
  shared_ptr<string> custinsId{};
  shared_ptr<string> ossFileMetaData{};
  shared_ptr<string> ossUrl{};
  shared_ptr<string> taskId{};
  shared_ptr<long> id{};
  shared_ptr<string> reason{};
  shared_ptr<string> uid{};

  DescribeListUserBackupFileRecordResponseBodyRecords() {}

  explicit DescribeListUserBackupFileRecordResponseBodyRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (ossFilePath) {
      res["OssFilePath"] = boost::any(*ossFilePath);
    }
    if (ossBucket) {
      res["OssBucket"] = boost::any(*ossBucket);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (ossFileName) {
      res["OssFileName"] = boost::any(*ossFileName);
    }
    if (ossFileSize) {
      res["OssFileSize"] = boost::any(*ossFileSize);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (backupSetId) {
      res["BackupSetId"] = boost::any(*backupSetId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (dbInstanceName) {
      res["DbInstanceName"] = boost::any(*dbInstanceName);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (binlogInfo) {
      res["BinlogInfo"] = boost::any(*binlogInfo);
    }
    if (custinsId) {
      res["CustinsId"] = boost::any(*custinsId);
    }
    if (ossFileMetaData) {
      res["OssFileMetaData"] = boost::any(*ossFileMetaData);
    }
    if (ossUrl) {
      res["OssUrl"] = boost::any(*ossUrl);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("OssFilePath") != m.end() && !m["OssFilePath"].empty()) {
      ossFilePath = make_shared<string>(boost::any_cast<string>(m["OssFilePath"]));
    }
    if (m.find("OssBucket") != m.end() && !m["OssBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["OssBucket"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("OssFileName") != m.end() && !m["OssFileName"].empty()) {
      ossFileName = make_shared<string>(boost::any_cast<string>(m["OssFileName"]));
    }
    if (m.find("OssFileSize") != m.end() && !m["OssFileSize"].empty()) {
      ossFileSize = make_shared<long>(boost::any_cast<long>(m["OssFileSize"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<string>(boost::any_cast<string>(m["GmtCreated"]));
    }
    if (m.find("BackupSetId") != m.end() && !m["BackupSetId"].empty()) {
      backupSetId = make_shared<string>(boost::any_cast<string>(m["BackupSetId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("DbInstanceName") != m.end() && !m["DbInstanceName"].empty()) {
      dbInstanceName = make_shared<string>(boost::any_cast<string>(m["DbInstanceName"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("BinlogInfo") != m.end() && !m["BinlogInfo"].empty()) {
      binlogInfo = make_shared<string>(boost::any_cast<string>(m["BinlogInfo"]));
    }
    if (m.find("CustinsId") != m.end() && !m["CustinsId"].empty()) {
      custinsId = make_shared<string>(boost::any_cast<string>(m["CustinsId"]));
    }
    if (m.find("OssFileMetaData") != m.end() && !m["OssFileMetaData"].empty()) {
      ossFileMetaData = make_shared<string>(boost::any_cast<string>(m["OssFileMetaData"]));
    }
    if (m.find("OssUrl") != m.end() && !m["OssUrl"].empty()) {
      ossUrl = make_shared<string>(boost::any_cast<string>(m["OssUrl"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~DescribeListUserBackupFileRecordResponseBodyRecords() = default;
};
class DescribeListUserBackupFileRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeListUserBackupFileRecordResponseBodyRecords>> records{};

  DescribeListUserBackupFileRecordResponseBody() {}

  explicit DescribeListUserBackupFileRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<DescribeListUserBackupFileRecordResponseBodyRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeListUserBackupFileRecordResponseBodyRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<DescribeListUserBackupFileRecordResponseBodyRecords>>(expect1);
      }
    }
  }


  virtual ~DescribeListUserBackupFileRecordResponseBody() = default;
};
class DescribeListUserBackupFileRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeListUserBackupFileRecordResponseBody> body{};

  DescribeListUserBackupFileRecordResponse() {}

  explicit DescribeListUserBackupFileRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeListUserBackupFileRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeListUserBackupFileRecordResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeListUserBackupFileRecordResponse() = default;
};
class CreateDedicatedHostAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> regionId{};
  shared_ptr<string> bastionInstanceId{};
  shared_ptr<string> accountType{};
  shared_ptr<string> clientToken{};

  CreateDedicatedHostAccountRequest() {}

  explicit CreateDedicatedHostAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
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
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
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
  shared_ptr<CreateDedicatedHostAccountResponseBody> body{};

  CreateDedicatedHostAccountResponse() {}

  explicit CreateDedicatedHostAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DeleteDedicatedHostAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> regionId{};

  DeleteDedicatedHostAccountRequest() {}

  explicit DeleteDedicatedHostAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
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
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<DeleteDedicatedHostAccountResponseBody> body{};

  DeleteDedicatedHostAccountResponse() {}

  explicit DeleteDedicatedHostAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> regionId{};

  DeleteDedicatedHostGroupRequest() {}

  explicit DeleteDedicatedHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
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
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<DeleteDedicatedHostGroupResponseBody> body{};

  DeleteDedicatedHostGroupResponse() {}

  explicit DeleteDedicatedHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CheckUserIfAuthoriseMyBaseSystemRoleRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> region{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> ramRoleName{};

  CheckUserIfAuthoriseMyBaseSystemRoleRequest() {}

  explicit CheckUserIfAuthoriseMyBaseSystemRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
  }


  virtual ~CheckUserIfAuthoriseMyBaseSystemRoleRequest() = default;
};
class CheckUserIfAuthoriseMyBaseSystemRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleName{};

  CheckUserIfAuthoriseMyBaseSystemRoleResponseBody() {}

  explicit CheckUserIfAuthoriseMyBaseSystemRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~CheckUserIfAuthoriseMyBaseSystemRoleResponseBody() = default;
};
class CheckUserIfAuthoriseMyBaseSystemRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CheckUserIfAuthoriseMyBaseSystemRoleResponseBody> body{};

  CheckUserIfAuthoriseMyBaseSystemRoleResponse() {}

  explicit CheckUserIfAuthoriseMyBaseSystemRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckUserIfAuthoriseMyBaseSystemRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckUserIfAuthoriseMyBaseSystemRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CheckUserIfAuthoriseMyBaseSystemRoleResponse() = default;
};
class DescribeScheduleInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> scheduleId{};

  DescribeScheduleInstanceRequest() {}

  explicit DescribeScheduleInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["ScheduleId"]));
    }
  }


  virtual ~DescribeScheduleInstanceRequest() = default;
};
class DescribeScheduleInstanceResponseBodyInstanceScheduleStatusList : public Darabonba::Model {
public:
  shared_ptr<string> scheduleStatus{};
  shared_ptr<string> instanceNodeTargetHostId{};
  shared_ptr<string> instanceNodeRole{};
  shared_ptr<string> engine{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceNodeSourceHostId{};

  DescribeScheduleInstanceResponseBodyInstanceScheduleStatusList() {}

  explicit DescribeScheduleInstanceResponseBodyInstanceScheduleStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduleStatus) {
      res["ScheduleStatus"] = boost::any(*scheduleStatus);
    }
    if (instanceNodeTargetHostId) {
      res["InstanceNodeTargetHostId"] = boost::any(*instanceNodeTargetHostId);
    }
    if (instanceNodeRole) {
      res["InstanceNodeRole"] = boost::any(*instanceNodeRole);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceNodeSourceHostId) {
      res["InstanceNodeSourceHostId"] = boost::any(*instanceNodeSourceHostId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduleStatus") != m.end() && !m["ScheduleStatus"].empty()) {
      scheduleStatus = make_shared<string>(boost::any_cast<string>(m["ScheduleStatus"]));
    }
    if (m.find("InstanceNodeTargetHostId") != m.end() && !m["InstanceNodeTargetHostId"].empty()) {
      instanceNodeTargetHostId = make_shared<string>(boost::any_cast<string>(m["InstanceNodeTargetHostId"]));
    }
    if (m.find("InstanceNodeRole") != m.end() && !m["InstanceNodeRole"].empty()) {
      instanceNodeRole = make_shared<string>(boost::any_cast<string>(m["InstanceNodeRole"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceNodeSourceHostId") != m.end() && !m["InstanceNodeSourceHostId"].empty()) {
      instanceNodeSourceHostId = make_shared<string>(boost::any_cast<string>(m["InstanceNodeSourceHostId"]));
    }
  }


  virtual ~DescribeScheduleInstanceResponseBodyInstanceScheduleStatusList() = default;
};
class DescribeScheduleInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> scheduleId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeScheduleInstanceResponseBodyInstanceScheduleStatusList>> instanceScheduleStatusList{};

  DescribeScheduleInstanceResponseBody() {}

  explicit DescribeScheduleInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceScheduleStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceScheduleStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceScheduleStatusList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["ScheduleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceScheduleStatusList") != m.end() && !m["InstanceScheduleStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceScheduleStatusList"].type()) {
        vector<DescribeScheduleInstanceResponseBodyInstanceScheduleStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceScheduleStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScheduleInstanceResponseBodyInstanceScheduleStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceScheduleStatusList = make_shared<vector<DescribeScheduleInstanceResponseBodyInstanceScheduleStatusList>>(expect1);
      }
    }
  }


  virtual ~DescribeScheduleInstanceResponseBody() = default;
};
class DescribeScheduleInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScheduleInstanceResponseBody> body{};

  DescribeScheduleInstanceResponse() {}

  explicit DescribeScheduleInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeScheduleInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScheduleInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScheduleInstanceResponse() = default;
};
class ExcuteScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> actionType{};

  ExcuteScheduleRequest() {}

  explicit ExcuteScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
  }


  virtual ~ExcuteScheduleRequest() = default;
};
class ExcuteScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> scheduleId{};
  shared_ptr<string> requestId{};

  ExcuteScheduleResponseBody() {}

  explicit ExcuteScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["ScheduleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExcuteScheduleResponseBody() = default;
};
class ExcuteScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExcuteScheduleResponseBody> body{};

  ExcuteScheduleResponse() {}

  explicit ExcuteScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExcuteScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExcuteScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~ExcuteScheduleResponse() = default;
};
class ReplaceDedicatedHostRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> failoverMode{};

  ReplaceDedicatedHostRequest() {}

  explicit ReplaceDedicatedHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (failoverMode) {
      res["FailoverMode"] = boost::any(*failoverMode);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("FailoverMode") != m.end() && !m["FailoverMode"].empty()) {
      failoverMode = make_shared<string>(boost::any_cast<string>(m["FailoverMode"]));
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
  shared_ptr<ReplaceDedicatedHostResponseBody> body{};

  ReplaceDedicatedHostResponse() {}

  explicit ReplaceDedicatedHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ModifyDedicatedHostAccountRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> accountName{};
  shared_ptr<string> accountPassword{};
  shared_ptr<string> regionId{};

  ModifyDedicatedHostAccountRequest() {}

  explicit ModifyDedicatedHostAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    if (accountPassword) {
      res["AccountPassword"] = boost::any(*accountPassword);
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
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
    if (m.find("AccountPassword") != m.end() && !m["AccountPassword"].empty()) {
      accountPassword = make_shared<string>(boost::any_cast<string>(m["AccountPassword"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<ModifyDedicatedHostAccountResponseBody> body{};

  ModifyDedicatedHostAccountResponse() {}

  explicit ModifyDedicatedHostAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeHostEcsLevelInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dbType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> storageType{};

  DescribeHostEcsLevelInfoRequest() {}

  explicit DescribeHostEcsLevelInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
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
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~DescribeHostEcsLevelInfoRequest() = default;
};
class DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfosItems : public Darabonba::Model {
public:
  shared_ptr<double> netBandWidth{};
  shared_ptr<string> ecsClass{};
  shared_ptr<string> rdsClassCode{};
  shared_ptr<long> cpu{};
  shared_ptr<string> cpuFrequency{};
  shared_ptr<long> storageIops{};
  shared_ptr<double> cloudStorageBandwidth{};
  shared_ptr<string> ecsClassCode{};
  shared_ptr<long> isCloudDisk{};
  shared_ptr<long> memory{};
  shared_ptr<long> netPackage{};
  shared_ptr<string> cpuVersion{};
  shared_ptr<string> localStorage{};
  shared_ptr<string> description{};

  DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfosItems() {}

  explicit DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfosItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (netBandWidth) {
      res["NetBandWidth"] = boost::any(*netBandWidth);
    }
    if (ecsClass) {
      res["EcsClass"] = boost::any(*ecsClass);
    }
    if (rdsClassCode) {
      res["RdsClassCode"] = boost::any(*rdsClassCode);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (cpuFrequency) {
      res["CpuFrequency"] = boost::any(*cpuFrequency);
    }
    if (storageIops) {
      res["StorageIops"] = boost::any(*storageIops);
    }
    if (cloudStorageBandwidth) {
      res["CloudStorageBandwidth"] = boost::any(*cloudStorageBandwidth);
    }
    if (ecsClassCode) {
      res["EcsClassCode"] = boost::any(*ecsClassCode);
    }
    if (isCloudDisk) {
      res["IsCloudDisk"] = boost::any(*isCloudDisk);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (netPackage) {
      res["NetPackage"] = boost::any(*netPackage);
    }
    if (cpuVersion) {
      res["CpuVersion"] = boost::any(*cpuVersion);
    }
    if (localStorage) {
      res["LocalStorage"] = boost::any(*localStorage);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NetBandWidth") != m.end() && !m["NetBandWidth"].empty()) {
      netBandWidth = make_shared<double>(boost::any_cast<double>(m["NetBandWidth"]));
    }
    if (m.find("EcsClass") != m.end() && !m["EcsClass"].empty()) {
      ecsClass = make_shared<string>(boost::any_cast<string>(m["EcsClass"]));
    }
    if (m.find("RdsClassCode") != m.end() && !m["RdsClassCode"].empty()) {
      rdsClassCode = make_shared<string>(boost::any_cast<string>(m["RdsClassCode"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("CpuFrequency") != m.end() && !m["CpuFrequency"].empty()) {
      cpuFrequency = make_shared<string>(boost::any_cast<string>(m["CpuFrequency"]));
    }
    if (m.find("StorageIops") != m.end() && !m["StorageIops"].empty()) {
      storageIops = make_shared<long>(boost::any_cast<long>(m["StorageIops"]));
    }
    if (m.find("CloudStorageBandwidth") != m.end() && !m["CloudStorageBandwidth"].empty()) {
      cloudStorageBandwidth = make_shared<double>(boost::any_cast<double>(m["CloudStorageBandwidth"]));
    }
    if (m.find("EcsClassCode") != m.end() && !m["EcsClassCode"].empty()) {
      ecsClassCode = make_shared<string>(boost::any_cast<string>(m["EcsClassCode"]));
    }
    if (m.find("IsCloudDisk") != m.end() && !m["IsCloudDisk"].empty()) {
      isCloudDisk = make_shared<long>(boost::any_cast<long>(m["IsCloudDisk"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("NetPackage") != m.end() && !m["NetPackage"].empty()) {
      netPackage = make_shared<long>(boost::any_cast<long>(m["NetPackage"]));
    }
    if (m.find("CpuVersion") != m.end() && !m["CpuVersion"].empty()) {
      cpuVersion = make_shared<string>(boost::any_cast<string>(m["CpuVersion"]));
    }
    if (m.find("LocalStorage") != m.end() && !m["LocalStorage"].empty()) {
      localStorage = make_shared<string>(boost::any_cast<string>(m["LocalStorage"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeHostEcsLevelInfoResponseBodyHostEcsLevelInfos>> hostEcsLevelInfos{};

  DescribeHostEcsLevelInfoResponseBody() {}

  explicit DescribeHostEcsLevelInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostEcsLevelInfos) {
      vector<boost::any> temp1;
      for(auto item1:*hostEcsLevelInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostEcsLevelInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
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
  }


  virtual ~DescribeHostEcsLevelInfoResponseBody() = default;
};
class DescribeHostEcsLevelInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeHostEcsLevelInfoResponseBody> body{};

  DescribeHostEcsLevelInfoResponse() {}

  explicit DescribeHostEcsLevelInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class AllocateHostInstanceCrossVpcVipRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> connectionString{};
  shared_ptr<string> port{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> bindVpcId{};
  shared_ptr<string> bindVSwitchId{};
  shared_ptr<string> regionId{};

  AllocateHostInstanceCrossVpcVipRequest() {}

  explicit AllocateHostInstanceCrossVpcVipRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (bindVpcId) {
      res["BindVpcId"] = boost::any(*bindVpcId);
    }
    if (bindVSwitchId) {
      res["BindVSwitchId"] = boost::any(*bindVSwitchId);
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
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("BindVpcId") != m.end() && !m["BindVpcId"].empty()) {
      bindVpcId = make_shared<string>(boost::any_cast<string>(m["BindVpcId"]));
    }
    if (m.find("BindVSwitchId") != m.end() && !m["BindVSwitchId"].empty()) {
      bindVSwitchId = make_shared<string>(boost::any_cast<string>(m["BindVSwitchId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AllocateHostInstanceCrossVpcVipRequest() = default;
};
class AllocateHostInstanceCrossVpcVipResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> requestId{};

  AllocateHostInstanceCrossVpcVipResponseBody() {}

  explicit AllocateHostInstanceCrossVpcVipResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AllocateHostInstanceCrossVpcVipResponseBody() = default;
};
class AllocateHostInstanceCrossVpcVipResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AllocateHostInstanceCrossVpcVipResponseBody> body{};

  AllocateHostInstanceCrossVpcVipResponse() {}

  explicit AllocateHostInstanceCrossVpcVipResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AllocateHostInstanceCrossVpcVipResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllocateHostInstanceCrossVpcVipResponseBody>(model1);
      }
    }
  }


  virtual ~AllocateHostInstanceCrossVpcVipResponse() = default;
};
class DescribeDedicatedHostsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> hostType{};
  shared_ptr<string> hostStatus{};
  shared_ptr<string> allocationStatus{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<long> pageNumbers{};
  shared_ptr<long> pageSize{};

  DescribeDedicatedHostsRequest() {}

  explicit DescribeDedicatedHostsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (hostType) {
      res["HostType"] = boost::any(*hostType);
    }
    if (hostStatus) {
      res["HostStatus"] = boost::any(*hostStatus);
    }
    if (allocationStatus) {
      res["AllocationStatus"] = boost::any(*allocationStatus);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (pageNumbers) {
      res["PageNumbers"] = boost::any(*pageNumbers);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("HostType") != m.end() && !m["HostType"].empty()) {
      hostType = make_shared<string>(boost::any_cast<string>(m["HostType"]));
    }
    if (m.find("HostStatus") != m.end() && !m["HostStatus"].empty()) {
      hostStatus = make_shared<string>(boost::any_cast<string>(m["HostStatus"]));
    }
    if (m.find("AllocationStatus") != m.end() && !m["AllocationStatus"].empty()) {
      allocationStatus = make_shared<string>(boost::any_cast<string>(m["AllocationStatus"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("PageNumbers") != m.end() && !m["PageNumbers"].empty()) {
      pageNumbers = make_shared<long>(boost::any_cast<long>(m["PageNumbers"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeDedicatedHostsRequest() = default;
};
class DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts : public Darabonba::Model {
public:
  shared_ptr<string> deployType{};
  shared_ptr<string> hostType{};
  shared_ptr<string> hostStorage{};
  shared_ptr<string> memoryUsed{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> allocationStatus{};
  shared_ptr<string> storageUsed{};
  shared_ptr<string> ecsClassCode{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> memAllocationRatio{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> hostStatus{};
  shared_ptr<string> hostName{};
  shared_ptr<string> hostCPU{};
  shared_ptr<string> cpuUsed{};
  shared_ptr<string> instanceNumber{};
  shared_ptr<string> openPermission{};
  shared_ptr<string> distributionSymbol{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> hostClass{};
  shared_ptr<string> endTime{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> CPUAllocationRatio{};
  shared_ptr<string> imageCategory{};
  shared_ptr<string> engine{};
  shared_ptr<string> diskAllocationRatio{};
  shared_ptr<string> hostMem{};
  shared_ptr<string> bastionInstanceId{};
  shared_ptr<string> accountName{};

  DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts() {}

  explicit DescribeDedicatedHostsResponseBodyDedicatedHostsDedicatedHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployType) {
      res["DeployType"] = boost::any(*deployType);
    }
    if (hostType) {
      res["HostType"] = boost::any(*hostType);
    }
    if (hostStorage) {
      res["HostStorage"] = boost::any(*hostStorage);
    }
    if (memoryUsed) {
      res["MemoryUsed"] = boost::any(*memoryUsed);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (allocationStatus) {
      res["AllocationStatus"] = boost::any(*allocationStatus);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (ecsClassCode) {
      res["EcsClassCode"] = boost::any(*ecsClassCode);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (memAllocationRatio) {
      res["MemAllocationRatio"] = boost::any(*memAllocationRatio);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (hostStatus) {
      res["HostStatus"] = boost::any(*hostStatus);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (hostCPU) {
      res["HostCPU"] = boost::any(*hostCPU);
    }
    if (cpuUsed) {
      res["CpuUsed"] = boost::any(*cpuUsed);
    }
    if (instanceNumber) {
      res["InstanceNumber"] = boost::any(*instanceNumber);
    }
    if (openPermission) {
      res["OpenPermission"] = boost::any(*openPermission);
    }
    if (distributionSymbol) {
      res["DistributionSymbol"] = boost::any(*distributionSymbol);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (hostClass) {
      res["HostClass"] = boost::any(*hostClass);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (CPUAllocationRatio) {
      res["CPUAllocationRatio"] = boost::any(*CPUAllocationRatio);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (diskAllocationRatio) {
      res["DiskAllocationRatio"] = boost::any(*diskAllocationRatio);
    }
    if (hostMem) {
      res["HostMem"] = boost::any(*hostMem);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployType") != m.end() && !m["DeployType"].empty()) {
      deployType = make_shared<string>(boost::any_cast<string>(m["DeployType"]));
    }
    if (m.find("HostType") != m.end() && !m["HostType"].empty()) {
      hostType = make_shared<string>(boost::any_cast<string>(m["HostType"]));
    }
    if (m.find("HostStorage") != m.end() && !m["HostStorage"].empty()) {
      hostStorage = make_shared<string>(boost::any_cast<string>(m["HostStorage"]));
    }
    if (m.find("MemoryUsed") != m.end() && !m["MemoryUsed"].empty()) {
      memoryUsed = make_shared<string>(boost::any_cast<string>(m["MemoryUsed"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("AllocationStatus") != m.end() && !m["AllocationStatus"].empty()) {
      allocationStatus = make_shared<string>(boost::any_cast<string>(m["AllocationStatus"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<string>(boost::any_cast<string>(m["StorageUsed"]));
    }
    if (m.find("EcsClassCode") != m.end() && !m["EcsClassCode"].empty()) {
      ecsClassCode = make_shared<string>(boost::any_cast<string>(m["EcsClassCode"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("MemAllocationRatio") != m.end() && !m["MemAllocationRatio"].empty()) {
      memAllocationRatio = make_shared<string>(boost::any_cast<string>(m["MemAllocationRatio"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("HostStatus") != m.end() && !m["HostStatus"].empty()) {
      hostStatus = make_shared<string>(boost::any_cast<string>(m["HostStatus"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("HostCPU") != m.end() && !m["HostCPU"].empty()) {
      hostCPU = make_shared<string>(boost::any_cast<string>(m["HostCPU"]));
    }
    if (m.find("CpuUsed") != m.end() && !m["CpuUsed"].empty()) {
      cpuUsed = make_shared<string>(boost::any_cast<string>(m["CpuUsed"]));
    }
    if (m.find("InstanceNumber") != m.end() && !m["InstanceNumber"].empty()) {
      instanceNumber = make_shared<string>(boost::any_cast<string>(m["InstanceNumber"]));
    }
    if (m.find("OpenPermission") != m.end() && !m["OpenPermission"].empty()) {
      openPermission = make_shared<string>(boost::any_cast<string>(m["OpenPermission"]));
    }
    if (m.find("DistributionSymbol") != m.end() && !m["DistributionSymbol"].empty()) {
      distributionSymbol = make_shared<string>(boost::any_cast<string>(m["DistributionSymbol"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("HostClass") != m.end() && !m["HostClass"].empty()) {
      hostClass = make_shared<string>(boost::any_cast<string>(m["HostClass"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("CPUAllocationRatio") != m.end() && !m["CPUAllocationRatio"].empty()) {
      CPUAllocationRatio = make_shared<string>(boost::any_cast<string>(m["CPUAllocationRatio"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("DiskAllocationRatio") != m.end() && !m["DiskAllocationRatio"].empty()) {
      diskAllocationRatio = make_shared<string>(boost::any_cast<string>(m["DiskAllocationRatio"]));
    }
    if (m.find("HostMem") != m.end() && !m["HostMem"].empty()) {
      hostMem = make_shared<string>(boost::any_cast<string>(m["HostMem"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
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
  shared_ptr<long> totalRecords{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageNumbers{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<DescribeDedicatedHostsResponseBodyDedicatedHosts> dedicatedHosts{};

  DescribeDedicatedHostsResponseBody() {}

  explicit DescribeDedicatedHostsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalRecords) {
      res["TotalRecords"] = boost::any(*totalRecords);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageNumbers) {
      res["PageNumbers"] = boost::any(*pageNumbers);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (dedicatedHosts) {
      res["DedicatedHosts"] = dedicatedHosts ? boost::any(dedicatedHosts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalRecords") != m.end() && !m["TotalRecords"].empty()) {
      totalRecords = make_shared<long>(boost::any_cast<long>(m["TotalRecords"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageNumbers") != m.end() && !m["PageNumbers"].empty()) {
      pageNumbers = make_shared<long>(boost::any_cast<long>(m["PageNumbers"]));
    }
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
  }


  virtual ~DescribeDedicatedHostsResponseBody() = default;
};
class DescribeDedicatedHostsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDedicatedHostsResponseBody> body{};

  DescribeDedicatedHostsResponse() {}

  explicit DescribeDedicatedHostsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeDedicatedHostDisksRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> regionId{};

  DescribeDedicatedHostDisksRequest() {}

  explicit DescribeDedicatedHostDisksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
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
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDedicatedHostDisksRequest() = default;
};
class DescribeDedicatedHostDisksResponseBodyDisks : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> status{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<string> diskId{};
  shared_ptr<long> maxThroughput{};
  shared_ptr<long> maxIOPS{};
  shared_ptr<bool> hasDBInstance{};
  shared_ptr<string> device{};
  shared_ptr<long> size{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> category{};
  shared_ptr<string> DBInstanceId{};

  DescribeDedicatedHostDisksResponseBodyDisks() {}

  explicit DescribeDedicatedHostDisksResponseBodyDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (maxThroughput) {
      res["MaxThroughput"] = boost::any(*maxThroughput);
    }
    if (maxIOPS) {
      res["MaxIOPS"] = boost::any(*maxIOPS);
    }
    if (hasDBInstance) {
      res["HasDBInstance"] = boost::any(*hasDBInstance);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("MaxThroughput") != m.end() && !m["MaxThroughput"].empty()) {
      maxThroughput = make_shared<long>(boost::any_cast<long>(m["MaxThroughput"]));
    }
    if (m.find("MaxIOPS") != m.end() && !m["MaxIOPS"].empty()) {
      maxIOPS = make_shared<long>(boost::any_cast<long>(m["MaxIOPS"]));
    }
    if (m.find("HasDBInstance") != m.end() && !m["HasDBInstance"].empty()) {
      hasDBInstance = make_shared<bool>(boost::any_cast<bool>(m["HasDBInstance"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeDedicatedHostDisksResponseBodyDisks() = default;
};
class DescribeDedicatedHostDisksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeDedicatedHostDisksResponseBodyDisks>> disks{};

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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (disks) {
      vector<boost::any> temp1;
      for(auto item1:*disks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disks"] = boost::any(temp1);
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
  }


  virtual ~DescribeDedicatedHostDisksResponseBody() = default;
};
class DescribeDedicatedHostDisksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDedicatedHostDisksResponseBody> body{};

  DescribeDedicatedHostDisksResponse() {}

  explicit DescribeDedicatedHostDisksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeMyBaseInstanceOverViewRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> region{};

  DescribeMyBaseInstanceOverViewRequest() {}

  explicit DescribeMyBaseInstanceOverViewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DescribeMyBaseInstanceOverViewRequest() = default;
};
class DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel : public Darabonba::Model {
public:
  shared_ptr<string> expireTime{};
  shared_ptr<string> payType{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> DBInstanceStatus{};
  shared_ptr<string> createdTime{};

  DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel() {}

  explicit DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (DBInstanceStatus) {
      res["DBInstanceStatus"] = boost::any(*DBInstanceStatus);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("DBInstanceStatus") != m.end() && !m["DBInstanceStatus"].empty()) {
      DBInstanceStatus = make_shared<string>(boost::any_cast<string>(m["DBInstanceStatus"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
  }


  virtual ~DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel() = default;
};
class DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModels : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel>> instanceModel{};

  DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModels() {}

  explicit DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceModel) {
      vector<boost::any> temp1;
      for(auto item1:*instanceModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceModel") != m.end() && !m["InstanceModel"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceModel"].type()) {
        vector<DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceModel = make_shared<vector<DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel>>(expect1);
      }
    }
  }


  virtual ~DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModels() = default;
};
class DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceDateType{};
  shared_ptr<string> instanceEngineCount{};
  shared_ptr<DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModels> instanceModels{};

  DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel() {}

  explicit DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceDateType) {
      res["InstanceDateType"] = boost::any(*instanceDateType);
    }
    if (instanceEngineCount) {
      res["InstanceEngineCount"] = boost::any(*instanceEngineCount);
    }
    if (instanceModels) {
      res["InstanceModels"] = instanceModels ? boost::any(instanceModels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceDateType") != m.end() && !m["InstanceDateType"].empty()) {
      instanceDateType = make_shared<string>(boost::any_cast<string>(m["InstanceDateType"]));
    }
    if (m.find("InstanceEngineCount") != m.end() && !m["InstanceEngineCount"].empty()) {
      instanceEngineCount = make_shared<string>(boost::any_cast<string>(m["InstanceEngineCount"]));
    }
    if (m.find("InstanceModels") != m.end() && !m["InstanceModels"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceModels"].type()) {
        DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceModels"]));
        instanceModels = make_shared<DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModelInstanceModels>(model1);
      }
    }
  }


  virtual ~DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel() = default;
};
class DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModels : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel>> typeModel{};

  DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModels() {}

  explicit DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (typeModel) {
      vector<boost::any> temp1;
      for(auto item1:*typeModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TypeModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TypeModel") != m.end() && !m["TypeModel"].empty()) {
      if (typeid(vector<boost::any>) == m["TypeModel"].type()) {
        vector<DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TypeModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        typeModel = make_shared<vector<DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModelsTypeModel>>(expect1);
      }
    }
  }


  virtual ~DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModels() = default;
};
class DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModel : public Darabonba::Model {
public:
  shared_ptr<string> engineCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> region{};
  shared_ptr<DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModels> typeModels{};

  DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModel() {}

  explicit DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (engineCount) {
      res["EngineCount"] = boost::any(*engineCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (typeModels) {
      res["TypeModels"] = typeModels ? boost::any(typeModels->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EngineCount") != m.end() && !m["EngineCount"].empty()) {
      engineCount = make_shared<string>(boost::any_cast<string>(m["EngineCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("TypeModels") != m.end() && !m["TypeModels"].empty()) {
      if (typeid(map<string, boost::any>) == m["TypeModels"].type()) {
        DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModels model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TypeModels"]));
        typeModels = make_shared<DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModelTypeModels>(model1);
      }
    }
  }


  virtual ~DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModel() = default;
};
class DescribeMyBaseInstanceOverViewResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModel>> regionModel{};

  DescribeMyBaseInstanceOverViewResponseBodyRegions() {}

  explicit DescribeMyBaseInstanceOverViewResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionModel) {
      vector<boost::any> temp1;
      for(auto item1:*regionModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionModel") != m.end() && !m["RegionModel"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionModel"].type()) {
        vector<DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionModel = make_shared<vector<DescribeMyBaseInstanceOverViewResponseBodyRegionsRegionModel>>(expect1);
      }
    }
  }


  virtual ~DescribeMyBaseInstanceOverViewResponseBodyRegions() = default;
};
class DescribeMyBaseInstanceOverViewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeMyBaseInstanceOverViewResponseBodyRegions> regions{};

  DescribeMyBaseInstanceOverViewResponseBody() {}

  explicit DescribeMyBaseInstanceOverViewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMyBaseInstanceOverViewResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeMyBaseInstanceOverViewResponseBodyRegions>(model1);
      }
    }
  }


  virtual ~DescribeMyBaseInstanceOverViewResponseBody() = default;
};
class DescribeMyBaseInstanceOverViewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeMyBaseInstanceOverViewResponseBody> body{};

  DescribeMyBaseInstanceOverViewResponse() {}

  explicit DescribeMyBaseInstanceOverViewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeMyBaseInstanceOverViewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMyBaseInstanceOverViewResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMyBaseInstanceOverViewResponse() = default;
};
class ModifyScheduleMethodRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> engine{};
  shared_ptr<string> instanceDistribution{};
  shared_ptr<string> zoneDistribution{};
  shared_ptr<string> cpuUtilityThreshold{};
  shared_ptr<string> memoryUtilityThreshold{};
  shared_ptr<string> localDiskUtilityThreshold{};
  shared_ptr<string> zonesOrder{};
  shared_ptr<string> regionId{};

  ModifyScheduleMethodRequest() {}

  explicit ModifyScheduleMethodRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (instanceDistribution) {
      res["InstanceDistribution"] = boost::any(*instanceDistribution);
    }
    if (zoneDistribution) {
      res["ZoneDistribution"] = boost::any(*zoneDistribution);
    }
    if (cpuUtilityThreshold) {
      res["CpuUtilityThreshold"] = boost::any(*cpuUtilityThreshold);
    }
    if (memoryUtilityThreshold) {
      res["MemoryUtilityThreshold"] = boost::any(*memoryUtilityThreshold);
    }
    if (localDiskUtilityThreshold) {
      res["LocalDiskUtilityThreshold"] = boost::any(*localDiskUtilityThreshold);
    }
    if (zonesOrder) {
      res["ZonesOrder"] = boost::any(*zonesOrder);
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
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("InstanceDistribution") != m.end() && !m["InstanceDistribution"].empty()) {
      instanceDistribution = make_shared<string>(boost::any_cast<string>(m["InstanceDistribution"]));
    }
    if (m.find("ZoneDistribution") != m.end() && !m["ZoneDistribution"].empty()) {
      zoneDistribution = make_shared<string>(boost::any_cast<string>(m["ZoneDistribution"]));
    }
    if (m.find("CpuUtilityThreshold") != m.end() && !m["CpuUtilityThreshold"].empty()) {
      cpuUtilityThreshold = make_shared<string>(boost::any_cast<string>(m["CpuUtilityThreshold"]));
    }
    if (m.find("MemoryUtilityThreshold") != m.end() && !m["MemoryUtilityThreshold"].empty()) {
      memoryUtilityThreshold = make_shared<string>(boost::any_cast<string>(m["MemoryUtilityThreshold"]));
    }
    if (m.find("LocalDiskUtilityThreshold") != m.end() && !m["LocalDiskUtilityThreshold"].empty()) {
      localDiskUtilityThreshold = make_shared<string>(boost::any_cast<string>(m["LocalDiskUtilityThreshold"]));
    }
    if (m.find("ZonesOrder") != m.end() && !m["ZonesOrder"].empty()) {
      zonesOrder = make_shared<string>(boost::any_cast<string>(m["ZonesOrder"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyScheduleMethodRequest() = default;
};
class ModifyScheduleMethodResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyScheduleMethodResponseBody() {}

  explicit ModifyScheduleMethodResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyScheduleMethodResponseBody() = default;
};
class ModifyScheduleMethodResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyScheduleMethodResponseBody> body{};

  ModifyScheduleMethodResponse() {}

  explicit ModifyScheduleMethodResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyScheduleMethodResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyScheduleMethodResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyScheduleMethodResponse() = default;
};
class DescribeAvailableDedicatedHostClassesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> storageType{};
  shared_ptr<string> dbType{};

  DescribeAvailableDedicatedHostClassesRequest() {}

  explicit DescribeAvailableDedicatedHostClassesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (dbType) {
      res["DbType"] = boost::any(*dbType);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("DbType") != m.end() && !m["DbType"].empty()) {
      dbType = make_shared<string>(boost::any_cast<string>(m["DbType"]));
    }
  }


  virtual ~DescribeAvailableDedicatedHostClassesRequest() = default;
};
class DescribeAvailableDedicatedHostClassesResponseBodyHostClassesHostClasses : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> hostClassName{};

  DescribeAvailableDedicatedHostClassesResponseBodyHostClassesHostClasses() {}

  explicit DescribeAvailableDedicatedHostClassesResponseBodyHostClassesHostClasses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hostClassName) {
      res["HostClassName"] = boost::any(*hostClassName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HostClassName") != m.end() && !m["HostClassName"].empty()) {
      hostClassName = make_shared<string>(boost::any_cast<string>(m["HostClassName"]));
    }
  }


  virtual ~DescribeAvailableDedicatedHostClassesResponseBodyHostClassesHostClasses() = default;
};
class DescribeAvailableDedicatedHostClassesResponseBodyHostClasses : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAvailableDedicatedHostClassesResponseBodyHostClassesHostClasses>> hostClasses{};

  DescribeAvailableDedicatedHostClassesResponseBodyHostClasses() {}

  explicit DescribeAvailableDedicatedHostClassesResponseBodyHostClasses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostClasses) {
      vector<boost::any> temp1;
      for(auto item1:*hostClasses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostClasses"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostClasses") != m.end() && !m["HostClasses"].empty()) {
      if (typeid(vector<boost::any>) == m["HostClasses"].type()) {
        vector<DescribeAvailableDedicatedHostClassesResponseBodyHostClassesHostClasses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostClasses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableDedicatedHostClassesResponseBodyHostClassesHostClasses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostClasses = make_shared<vector<DescribeAvailableDedicatedHostClassesResponseBodyHostClassesHostClasses>>(expect1);
      }
    }
  }


  virtual ~DescribeAvailableDedicatedHostClassesResponseBodyHostClasses() = default;
};
class DescribeAvailableDedicatedHostClassesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAvailableDedicatedHostClassesResponseBodyHostClasses> hostClasses{};

  DescribeAvailableDedicatedHostClassesResponseBody() {}

  explicit DescribeAvailableDedicatedHostClassesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostClasses) {
      res["HostClasses"] = hostClasses ? boost::any(hostClasses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HostClasses") != m.end() && !m["HostClasses"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostClasses"].type()) {
        DescribeAvailableDedicatedHostClassesResponseBodyHostClasses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostClasses"]));
        hostClasses = make_shared<DescribeAvailableDedicatedHostClassesResponseBodyHostClasses>(model1);
      }
    }
  }


  virtual ~DescribeAvailableDedicatedHostClassesResponseBody() = default;
};
class DescribeAvailableDedicatedHostClassesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAvailableDedicatedHostClassesResponseBody> body{};

  DescribeAvailableDedicatedHostClassesResponse() {}

  explicit DescribeAvailableDedicatedHostClassesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAvailableDedicatedHostClassesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAvailableDedicatedHostClassesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAvailableDedicatedHostClassesResponse() = default;
};
class DescribeCheckUserBackupFileRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> bucketRegion{};
  shared_ptr<string> backupFile{};

  DescribeCheckUserBackupFileRequest() {}

  explicit DescribeCheckUserBackupFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (bucketRegion) {
      res["BucketRegion"] = boost::any(*bucketRegion);
    }
    if (backupFile) {
      res["BackupFile"] = boost::any(*backupFile);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("BucketRegion") != m.end() && !m["BucketRegion"].empty()) {
      bucketRegion = make_shared<string>(boost::any_cast<string>(m["BucketRegion"]));
    }
    if (m.find("BackupFile") != m.end() && !m["BackupFile"].empty()) {
      backupFile = make_shared<string>(boost::any_cast<string>(m["BackupFile"]));
    }
  }


  virtual ~DescribeCheckUserBackupFileRequest() = default;
};
class DescribeCheckUserBackupFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> status{};
  shared_ptr<string> DBInstanceName{};
  shared_ptr<string> requestId{};
  shared_ptr<long> taskId{};

  DescribeCheckUserBackupFileResponseBody() {}

  explicit DescribeCheckUserBackupFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (DBInstanceName) {
      res["DBInstanceName"] = boost::any(*DBInstanceName);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("DBInstanceName") != m.end() && !m["DBInstanceName"].empty()) {
      DBInstanceName = make_shared<string>(boost::any_cast<string>(m["DBInstanceName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
  }


  virtual ~DescribeCheckUserBackupFileResponseBody() = default;
};
class DescribeCheckUserBackupFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCheckUserBackupFileResponseBody> body{};

  DescribeCheckUserBackupFileResponse() {}

  explicit DescribeCheckUserBackupFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCheckUserBackupFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCheckUserBackupFileResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCheckUserBackupFileResponse() = default;
};
class ModifyDedicatedHostPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> newPassword{};
  shared_ptr<string> dedicatedHostId{};

  ModifyDedicatedHostPasswordRequest() {}

  explicit ModifyDedicatedHostPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (newPassword) {
      res["NewPassword"] = boost::any(*newPassword);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("NewPassword") != m.end() && !m["NewPassword"].empty()) {
      newPassword = make_shared<string>(boost::any_cast<string>(m["NewPassword"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
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
  shared_ptr<ModifyDedicatedHostPasswordResponseBody> body{};

  ModifyDedicatedHostPasswordResponse() {}

  explicit ModifyDedicatedHostPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeScheduleMethodsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};

  DescribeScheduleMethodsRequest() {}

  explicit DescribeScheduleMethodsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
  }


  virtual ~DescribeScheduleMethodsRequest() = default;
};
class DescribeScheduleMethodsResponseBodyScheduleMethodList : public Darabonba::Model {
public:
  shared_ptr<string> zonesOrder{};
  shared_ptr<string> zoneDistribution{};
  shared_ptr<long> CPUUtilityThreshold{};
  shared_ptr<string> dedicatedHostGroupDesc{};
  shared_ptr<long> memoryUtilityThreshold{};
  shared_ptr<string> engine{};
  shared_ptr<string> instanceDistribution{};
  shared_ptr<long> localDiskUtilityThreshold{};
  shared_ptr<string> dedicatedHostGroupId{};

  DescribeScheduleMethodsResponseBodyScheduleMethodList() {}

  explicit DescribeScheduleMethodsResponseBodyScheduleMethodList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zonesOrder) {
      res["ZonesOrder"] = boost::any(*zonesOrder);
    }
    if (zoneDistribution) {
      res["ZoneDistribution"] = boost::any(*zoneDistribution);
    }
    if (CPUUtilityThreshold) {
      res["CPUUtilityThreshold"] = boost::any(*CPUUtilityThreshold);
    }
    if (dedicatedHostGroupDesc) {
      res["DedicatedHostGroupDesc"] = boost::any(*dedicatedHostGroupDesc);
    }
    if (memoryUtilityThreshold) {
      res["MemoryUtilityThreshold"] = boost::any(*memoryUtilityThreshold);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (instanceDistribution) {
      res["InstanceDistribution"] = boost::any(*instanceDistribution);
    }
    if (localDiskUtilityThreshold) {
      res["LocalDiskUtilityThreshold"] = boost::any(*localDiskUtilityThreshold);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZonesOrder") != m.end() && !m["ZonesOrder"].empty()) {
      zonesOrder = make_shared<string>(boost::any_cast<string>(m["ZonesOrder"]));
    }
    if (m.find("ZoneDistribution") != m.end() && !m["ZoneDistribution"].empty()) {
      zoneDistribution = make_shared<string>(boost::any_cast<string>(m["ZoneDistribution"]));
    }
    if (m.find("CPUUtilityThreshold") != m.end() && !m["CPUUtilityThreshold"].empty()) {
      CPUUtilityThreshold = make_shared<long>(boost::any_cast<long>(m["CPUUtilityThreshold"]));
    }
    if (m.find("DedicatedHostGroupDesc") != m.end() && !m["DedicatedHostGroupDesc"].empty()) {
      dedicatedHostGroupDesc = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupDesc"]));
    }
    if (m.find("MemoryUtilityThreshold") != m.end() && !m["MemoryUtilityThreshold"].empty()) {
      memoryUtilityThreshold = make_shared<long>(boost::any_cast<long>(m["MemoryUtilityThreshold"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("InstanceDistribution") != m.end() && !m["InstanceDistribution"].empty()) {
      instanceDistribution = make_shared<string>(boost::any_cast<string>(m["InstanceDistribution"]));
    }
    if (m.find("LocalDiskUtilityThreshold") != m.end() && !m["LocalDiskUtilityThreshold"].empty()) {
      localDiskUtilityThreshold = make_shared<long>(boost::any_cast<long>(m["LocalDiskUtilityThreshold"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
  }


  virtual ~DescribeScheduleMethodsResponseBodyScheduleMethodList() = default;
};
class DescribeScheduleMethodsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeScheduleMethodsResponseBodyScheduleMethodList>> scheduleMethodList{};

  DescribeScheduleMethodsResponseBody() {}

  explicit DescribeScheduleMethodsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scheduleMethodList) {
      vector<boost::any> temp1;
      for(auto item1:*scheduleMethodList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScheduleMethodList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScheduleMethodList") != m.end() && !m["ScheduleMethodList"].empty()) {
      if (typeid(vector<boost::any>) == m["ScheduleMethodList"].type()) {
        vector<DescribeScheduleMethodsResponseBodyScheduleMethodList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScheduleMethodList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScheduleMethodsResponseBodyScheduleMethodList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduleMethodList = make_shared<vector<DescribeScheduleMethodsResponseBodyScheduleMethodList>>(expect1);
      }
    }
  }


  virtual ~DescribeScheduleMethodsResponseBody() = default;
};
class DescribeScheduleMethodsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScheduleMethodsResponseBody> body{};

  DescribeScheduleMethodsResponse() {}

  explicit DescribeScheduleMethodsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeScheduleMethodsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScheduleMethodsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScheduleMethodsResponse() = default;
};
class ClearDedicatedHostRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> failoverMode{};

  ClearDedicatedHostRequest() {}

  explicit ClearDedicatedHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (failoverMode) {
      res["FailoverMode"] = boost::any(*failoverMode);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("FailoverMode") != m.end() && !m["FailoverMode"].empty()) {
      failoverMode = make_shared<string>(boost::any_cast<string>(m["FailoverMode"]));
    }
  }


  virtual ~ClearDedicatedHostRequest() = default;
};
class ClearDedicatedHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  ClearDedicatedHostResponseBody() {}

  explicit ClearDedicatedHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ClearDedicatedHostResponseBody() = default;
};
class ClearDedicatedHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ClearDedicatedHostResponseBody> body{};

  ClearDedicatedHostResponse() {}

  explicit ClearDedicatedHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ClearDedicatedHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClearDedicatedHostResponseBody>(model1);
      }
    }
  }


  virtual ~ClearDedicatedHostResponse() = default;
};
class DeleteUserBackupFileRecordRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> engine{};
  shared_ptr<string> opsServiceVersion{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> regionId{};

  DeleteUserBackupFileRecordRequest() {}

  explicit DeleteUserBackupFileRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (opsServiceVersion) {
      res["OpsServiceVersion"] = boost::any(*opsServiceVersion);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
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
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("OpsServiceVersion") != m.end() && !m["OpsServiceVersion"].empty()) {
      opsServiceVersion = make_shared<string>(boost::any_cast<string>(m["OpsServiceVersion"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteUserBackupFileRecordRequest() = default;
};
class DeleteUserBackupFileRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<string> id{};
  shared_ptr<string> instanceName{};

  DeleteUserBackupFileRecordResponseBody() {}

  explicit DeleteUserBackupFileRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~DeleteUserBackupFileRecordResponseBody() = default;
};
class DeleteUserBackupFileRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteUserBackupFileRecordResponseBody> body{};

  DeleteUserBackupFileRecordResponse() {}

  explicit DeleteUserBackupFileRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteUserBackupFileRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserBackupFileRecordResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserBackupFileRecordResponse() = default;
};
class DescribeEvaluateDedicatedHostsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> classCode{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineVersion{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> storageType{};
  shared_ptr<long> storageSize{};
  shared_ptr<string> nodeType{};

  DescribeEvaluateDedicatedHostsRequest() {}

  explicit DescribeEvaluateDedicatedHostsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (classCode) {
      res["ClassCode"] = boost::any(*classCode);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("ClassCode") != m.end() && !m["ClassCode"].empty()) {
      classCode = make_shared<string>(boost::any_cast<string>(m["ClassCode"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
  }


  virtual ~DescribeEvaluateDedicatedHostsRequest() = default;
};
class DescribeEvaluateDedicatedHostsResponseBodyDedicatedHosts : public Darabonba::Model {
public:
  shared_ptr<bool> hostAllocationStatus{};
  shared_ptr<string> comment{};
  shared_ptr<long> hostFreeMem{};
  shared_ptr<string> hostStatus{};
  shared_ptr<long> hostFreeCPU{};
  shared_ptr<long> hostStorage{};
  shared_ptr<long> hostCPU{};
  shared_ptr<string> regionId{};
  shared_ptr<long> hostFreeStorage{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> dedicatedHostName{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> imageCategory{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> engine{};
  shared_ptr<bool> isCouldSSD{};
  shared_ptr<bool> isAvailableForInstance{};
  shared_ptr<long> hostMem{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> IPAddress{};

  DescribeEvaluateDedicatedHostsResponseBodyDedicatedHosts() {}

  explicit DescribeEvaluateDedicatedHostsResponseBodyDedicatedHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostAllocationStatus) {
      res["HostAllocationStatus"] = boost::any(*hostAllocationStatus);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (hostFreeMem) {
      res["HostFreeMem"] = boost::any(*hostFreeMem);
    }
    if (hostStatus) {
      res["HostStatus"] = boost::any(*hostStatus);
    }
    if (hostFreeCPU) {
      res["HostFreeCPU"] = boost::any(*hostFreeCPU);
    }
    if (hostStorage) {
      res["HostStorage"] = boost::any(*hostStorage);
    }
    if (hostCPU) {
      res["HostCPU"] = boost::any(*hostCPU);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostFreeStorage) {
      res["HostFreeStorage"] = boost::any(*hostFreeStorage);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (dedicatedHostName) {
      res["DedicatedHostName"] = boost::any(*dedicatedHostName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (isCouldSSD) {
      res["IsCouldSSD"] = boost::any(*isCouldSSD);
    }
    if (isAvailableForInstance) {
      res["IsAvailableForInstance"] = boost::any(*isAvailableForInstance);
    }
    if (hostMem) {
      res["HostMem"] = boost::any(*hostMem);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostAllocationStatus") != m.end() && !m["HostAllocationStatus"].empty()) {
      hostAllocationStatus = make_shared<bool>(boost::any_cast<bool>(m["HostAllocationStatus"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("HostFreeMem") != m.end() && !m["HostFreeMem"].empty()) {
      hostFreeMem = make_shared<long>(boost::any_cast<long>(m["HostFreeMem"]));
    }
    if (m.find("HostStatus") != m.end() && !m["HostStatus"].empty()) {
      hostStatus = make_shared<string>(boost::any_cast<string>(m["HostStatus"]));
    }
    if (m.find("HostFreeCPU") != m.end() && !m["HostFreeCPU"].empty()) {
      hostFreeCPU = make_shared<long>(boost::any_cast<long>(m["HostFreeCPU"]));
    }
    if (m.find("HostStorage") != m.end() && !m["HostStorage"].empty()) {
      hostStorage = make_shared<long>(boost::any_cast<long>(m["HostStorage"]));
    }
    if (m.find("HostCPU") != m.end() && !m["HostCPU"].empty()) {
      hostCPU = make_shared<long>(boost::any_cast<long>(m["HostCPU"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostFreeStorage") != m.end() && !m["HostFreeStorage"].empty()) {
      hostFreeStorage = make_shared<long>(boost::any_cast<long>(m["HostFreeStorage"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("DedicatedHostName") != m.end() && !m["DedicatedHostName"].empty()) {
      dedicatedHostName = make_shared<string>(boost::any_cast<string>(m["DedicatedHostName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("IsCouldSSD") != m.end() && !m["IsCouldSSD"].empty()) {
      isCouldSSD = make_shared<bool>(boost::any_cast<bool>(m["IsCouldSSD"]));
    }
    if (m.find("IsAvailableForInstance") != m.end() && !m["IsAvailableForInstance"].empty()) {
      isAvailableForInstance = make_shared<bool>(boost::any_cast<bool>(m["IsAvailableForInstance"]));
    }
    if (m.find("HostMem") != m.end() && !m["HostMem"].empty()) {
      hostMem = make_shared<long>(boost::any_cast<long>(m["HostMem"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
  }


  virtual ~DescribeEvaluateDedicatedHostsResponseBodyDedicatedHosts() = default;
};
class DescribeEvaluateDedicatedHostsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> instanceRequiredCPU{};
  shared_ptr<long> cpuOverAllocationRatio{};
  shared_ptr<long> memoryOverAllocationRatio{};
  shared_ptr<long> instanceRequiredMemory{};
  shared_ptr<string> instanceClassCode{};
  shared_ptr<long> instanceRequiredStorage{};
  shared_ptr<long> diskOverAllocationRatio{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<vector<DescribeEvaluateDedicatedHostsResponseBodyDedicatedHosts>> dedicatedHosts{};

  DescribeEvaluateDedicatedHostsResponseBody() {}

  explicit DescribeEvaluateDedicatedHostsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceRequiredCPU) {
      res["InstanceRequiredCPU"] = boost::any(*instanceRequiredCPU);
    }
    if (cpuOverAllocationRatio) {
      res["CpuOverAllocationRatio"] = boost::any(*cpuOverAllocationRatio);
    }
    if (memoryOverAllocationRatio) {
      res["MemoryOverAllocationRatio"] = boost::any(*memoryOverAllocationRatio);
    }
    if (instanceRequiredMemory) {
      res["InstanceRequiredMemory"] = boost::any(*instanceRequiredMemory);
    }
    if (instanceClassCode) {
      res["InstanceClassCode"] = boost::any(*instanceClassCode);
    }
    if (instanceRequiredStorage) {
      res["InstanceRequiredStorage"] = boost::any(*instanceRequiredStorage);
    }
    if (diskOverAllocationRatio) {
      res["DiskOverAllocationRatio"] = boost::any(*diskOverAllocationRatio);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceRequiredCPU") != m.end() && !m["InstanceRequiredCPU"].empty()) {
      instanceRequiredCPU = make_shared<long>(boost::any_cast<long>(m["InstanceRequiredCPU"]));
    }
    if (m.find("CpuOverAllocationRatio") != m.end() && !m["CpuOverAllocationRatio"].empty()) {
      cpuOverAllocationRatio = make_shared<long>(boost::any_cast<long>(m["CpuOverAllocationRatio"]));
    }
    if (m.find("MemoryOverAllocationRatio") != m.end() && !m["MemoryOverAllocationRatio"].empty()) {
      memoryOverAllocationRatio = make_shared<long>(boost::any_cast<long>(m["MemoryOverAllocationRatio"]));
    }
    if (m.find("InstanceRequiredMemory") != m.end() && !m["InstanceRequiredMemory"].empty()) {
      instanceRequiredMemory = make_shared<long>(boost::any_cast<long>(m["InstanceRequiredMemory"]));
    }
    if (m.find("InstanceClassCode") != m.end() && !m["InstanceClassCode"].empty()) {
      instanceClassCode = make_shared<string>(boost::any_cast<string>(m["InstanceClassCode"]));
    }
    if (m.find("InstanceRequiredStorage") != m.end() && !m["InstanceRequiredStorage"].empty()) {
      instanceRequiredStorage = make_shared<long>(boost::any_cast<long>(m["InstanceRequiredStorage"]));
    }
    if (m.find("DiskOverAllocationRatio") != m.end() && !m["DiskOverAllocationRatio"].empty()) {
      diskOverAllocationRatio = make_shared<long>(boost::any_cast<long>(m["DiskOverAllocationRatio"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("DedicatedHosts") != m.end() && !m["DedicatedHosts"].empty()) {
      if (typeid(vector<boost::any>) == m["DedicatedHosts"].type()) {
        vector<DescribeEvaluateDedicatedHostsResponseBodyDedicatedHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DedicatedHosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEvaluateDedicatedHostsResponseBodyDedicatedHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dedicatedHosts = make_shared<vector<DescribeEvaluateDedicatedHostsResponseBodyDedicatedHosts>>(expect1);
      }
    }
  }


  virtual ~DescribeEvaluateDedicatedHostsResponseBody() = default;
};
class DescribeEvaluateDedicatedHostsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeEvaluateDedicatedHostsResponseBody> body{};

  DescribeEvaluateDedicatedHostsResponse() {}

  explicit DescribeEvaluateDedicatedHostsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeEvaluateDedicatedHostsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEvaluateDedicatedHostsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEvaluateDedicatedHostsResponse() = default;
};
class DescribeHostInstanceMonitorInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};

  DescribeHostInstanceMonitorInfoRequest() {}

  explicit DescribeHostInstanceMonitorInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
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
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
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
  }


  virtual ~DescribeHostInstanceMonitorInfoRequest() = default;
};
class DescribeHostInstanceMonitorInfoResponseBodyItemsAuroraSwitchInstanceLog : public Darabonba::Model {
public:
  shared_ptr<double> switchFrom{};
  shared_ptr<double> switchType{};
  shared_ptr<long> switchTime{};

  DescribeHostInstanceMonitorInfoResponseBodyItemsAuroraSwitchInstanceLog() {}

  explicit DescribeHostInstanceMonitorInfoResponseBodyItemsAuroraSwitchInstanceLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (switchFrom) {
      res["SwitchFrom"] = boost::any(*switchFrom);
    }
    if (switchType) {
      res["SwitchType"] = boost::any(*switchType);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SwitchFrom") != m.end() && !m["SwitchFrom"].empty()) {
      switchFrom = make_shared<double>(boost::any_cast<double>(m["SwitchFrom"]));
    }
    if (m.find("SwitchType") != m.end() && !m["SwitchType"].empty()) {
      switchType = make_shared<double>(boost::any_cast<double>(m["SwitchType"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<long>(boost::any_cast<long>(m["SwitchTime"]));
    }
  }


  virtual ~DescribeHostInstanceMonitorInfoResponseBodyItemsAuroraSwitchInstanceLog() = default;
};
class DescribeHostInstanceMonitorInfoResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> memSize{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> ip{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> levelName{};
  shared_ptr<string> engine{};
  shared_ptr<string> role{};
  shared_ptr<string> port{};
  shared_ptr<long> cpuCores{};
  shared_ptr<string> engineVersion{};
  shared_ptr<DescribeHostInstanceMonitorInfoResponseBodyItemsAuroraSwitchInstanceLog> auroraSwitchInstanceLog{};

  DescribeHostInstanceMonitorInfoResponseBodyItems() {}

  explicit DescribeHostInstanceMonitorInfoResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (memSize) {
      res["MemSize"] = boost::any(*memSize);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (levelName) {
      res["LevelName"] = boost::any(*levelName);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (cpuCores) {
      res["CpuCores"] = boost::any(*cpuCores);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (auroraSwitchInstanceLog) {
      res["AuroraSwitchInstanceLog"] = auroraSwitchInstanceLog ? boost::any(auroraSwitchInstanceLog->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("MemSize") != m.end() && !m["MemSize"].empty()) {
      memSize = make_shared<long>(boost::any_cast<long>(m["MemSize"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("LevelName") != m.end() && !m["LevelName"].empty()) {
      levelName = make_shared<string>(boost::any_cast<string>(m["LevelName"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("CpuCores") != m.end() && !m["CpuCores"].empty()) {
      cpuCores = make_shared<long>(boost::any_cast<long>(m["CpuCores"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("AuroraSwitchInstanceLog") != m.end() && !m["AuroraSwitchInstanceLog"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuroraSwitchInstanceLog"].type()) {
        DescribeHostInstanceMonitorInfoResponseBodyItemsAuroraSwitchInstanceLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuroraSwitchInstanceLog"]));
        auroraSwitchInstanceLog = make_shared<DescribeHostInstanceMonitorInfoResponseBodyItemsAuroraSwitchInstanceLog>(model1);
      }
    }
  }


  virtual ~DescribeHostInstanceMonitorInfoResponseBodyItems() = default;
};
class DescribeHostInstanceMonitorInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeHostInstanceMonitorInfoResponseBodyItems>> items{};

  DescribeHostInstanceMonitorInfoResponseBody() {}

  explicit DescribeHostInstanceMonitorInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeHostInstanceMonitorInfoResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHostInstanceMonitorInfoResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeHostInstanceMonitorInfoResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeHostInstanceMonitorInfoResponseBody() = default;
};
class DescribeHostInstanceMonitorInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeHostInstanceMonitorInfoResponseBody> body{};

  DescribeHostInstanceMonitorInfoResponse() {}

  explicit DescribeHostInstanceMonitorInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeHostInstanceMonitorInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHostInstanceMonitorInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHostInstanceMonitorInfoResponse() = default;
};
class DescribeDedicatedHostMetricRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> regionId{};

  DescribeDedicatedHostMetricRequest() {}

  explicit DescribeDedicatedHostMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
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
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDedicatedHostMetricRequest() = default;
};
class DescribeDedicatedHostMetricResponseBodyMetricsMetricsRisks : public Darabonba::Model {
public:
  shared_ptr<vector<string>> risks{};

  DescribeDedicatedHostMetricResponseBodyMetricsMetricsRisks() {}

  explicit DescribeDedicatedHostMetricResponseBodyMetricsMetricsRisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (risks) {
      res["Risks"] = boost::any(*risks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Risks") != m.end() && !m["Risks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Risks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Risks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      risks = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDedicatedHostMetricResponseBodyMetricsMetricsRisks() = default;
};
class DescribeDedicatedHostMetricResponseBodyMetricsMetrics : public Darabonba::Model {
public:
  shared_ptr<double> avgMemUsage{};
  shared_ptr<string> endDate{};
  shared_ptr<long> avgIops{};
  shared_ptr<double> maxMemUsage{};
  shared_ptr<string> startDate{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<long> maxIops{};
  shared_ptr<double> avgCpuUsage{};
  shared_ptr<double> diskUsage{};
  shared_ptr<double> maxCpuUsage{};
  shared_ptr<DescribeDedicatedHostMetricResponseBodyMetricsMetricsRisks> risks{};

  DescribeDedicatedHostMetricResponseBodyMetricsMetrics() {}

  explicit DescribeDedicatedHostMetricResponseBodyMetricsMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avgMemUsage) {
      res["AvgMemUsage"] = boost::any(*avgMemUsage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (avgIops) {
      res["AvgIops"] = boost::any(*avgIops);
    }
    if (maxMemUsage) {
      res["MaxMemUsage"] = boost::any(*maxMemUsage);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (maxIops) {
      res["MaxIops"] = boost::any(*maxIops);
    }
    if (avgCpuUsage) {
      res["AvgCpuUsage"] = boost::any(*avgCpuUsage);
    }
    if (diskUsage) {
      res["DiskUsage"] = boost::any(*diskUsage);
    }
    if (maxCpuUsage) {
      res["MaxCpuUsage"] = boost::any(*maxCpuUsage);
    }
    if (risks) {
      res["Risks"] = risks ? boost::any(risks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvgMemUsage") != m.end() && !m["AvgMemUsage"].empty()) {
      avgMemUsage = make_shared<double>(boost::any_cast<double>(m["AvgMemUsage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("AvgIops") != m.end() && !m["AvgIops"].empty()) {
      avgIops = make_shared<long>(boost::any_cast<long>(m["AvgIops"]));
    }
    if (m.find("MaxMemUsage") != m.end() && !m["MaxMemUsage"].empty()) {
      maxMemUsage = make_shared<double>(boost::any_cast<double>(m["MaxMemUsage"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("MaxIops") != m.end() && !m["MaxIops"].empty()) {
      maxIops = make_shared<long>(boost::any_cast<long>(m["MaxIops"]));
    }
    if (m.find("AvgCpuUsage") != m.end() && !m["AvgCpuUsage"].empty()) {
      avgCpuUsage = make_shared<double>(boost::any_cast<double>(m["AvgCpuUsage"]));
    }
    if (m.find("DiskUsage") != m.end() && !m["DiskUsage"].empty()) {
      diskUsage = make_shared<double>(boost::any_cast<double>(m["DiskUsage"]));
    }
    if (m.find("MaxCpuUsage") != m.end() && !m["MaxCpuUsage"].empty()) {
      maxCpuUsage = make_shared<double>(boost::any_cast<double>(m["MaxCpuUsage"]));
    }
    if (m.find("Risks") != m.end() && !m["Risks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Risks"].type()) {
        DescribeDedicatedHostMetricResponseBodyMetricsMetricsRisks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Risks"]));
        risks = make_shared<DescribeDedicatedHostMetricResponseBodyMetricsMetricsRisks>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedHostMetricResponseBodyMetricsMetrics() = default;
};
class DescribeDedicatedHostMetricResponseBodyMetrics : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDedicatedHostMetricResponseBodyMetricsMetrics>> metrics{};

  DescribeDedicatedHostMetricResponseBodyMetrics() {}

  explicit DescribeDedicatedHostMetricResponseBodyMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<DescribeDedicatedHostMetricResponseBodyMetricsMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedHostMetricResponseBodyMetricsMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<DescribeDedicatedHostMetricResponseBodyMetricsMetrics>>(expect1);
      }
    }
  }


  virtual ~DescribeDedicatedHostMetricResponseBodyMetrics() = default;
};
class DescribeDedicatedHostMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDedicatedHostMetricResponseBodyMetrics> metrics{};

  DescribeDedicatedHostMetricResponseBody() {}

  explicit DescribeDedicatedHostMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (metrics) {
      res["Metrics"] = metrics ? boost::any(metrics->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(map<string, boost::any>) == m["Metrics"].type()) {
        DescribeDedicatedHostMetricResponseBodyMetrics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Metrics"]));
        metrics = make_shared<DescribeDedicatedHostMetricResponseBodyMetrics>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedHostMetricResponseBody() = default;
};
class DescribeDedicatedHostMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDedicatedHostMetricResponseBody> body{};

  DescribeDedicatedHostMetricResponse() {}

  explicit DescribeDedicatedHostMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDedicatedHostMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedHostMetricResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedHostMetricResponse() = default;
};
class CreateDedicatedHostRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> hostName{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> hostClass{};
  shared_ptr<string> payType{};
  shared_ptr<string> period{};
  shared_ptr<string> usedTime{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> autoRenew{};
  shared_ptr<string> imageCategory{};

  CreateDedicatedHostRequest() {}

  explicit CreateDedicatedHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (hostClass) {
      res["HostClass"] = boost::any(*hostClass);
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
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("HostClass") != m.end() && !m["HostClass"].empty()) {
      hostClass = make_shared<string>(boost::any_cast<string>(m["HostClass"]));
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
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
  }


  virtual ~CreateDedicatedHostRequest() = default;
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
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateDedicatedHostResponseBodyDedicateHostList> dedicateHostList{};

  CreateDedicatedHostResponseBody() {}

  explicit CreateDedicatedHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dedicateHostList) {
      res["DedicateHostList"] = dedicateHostList ? boost::any(dedicateHostList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DedicateHostList") != m.end() && !m["DedicateHostList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DedicateHostList"].type()) {
        CreateDedicatedHostResponseBodyDedicateHostList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DedicateHostList"]));
        dedicateHostList = make_shared<CreateDedicatedHostResponseBodyDedicateHostList>(model1);
      }
    }
  }


  virtual ~CreateDedicatedHostResponseBody() = default;
};
class CreateDedicatedHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDedicatedHostResponseBody> body{};

  CreateDedicatedHostResponse() {}

  explicit CreateDedicatedHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeDedicatedInstanceMetricRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> regionId{};

  DescribeDedicatedInstanceMetricRequest() {}

  explicit DescribeDedicatedInstanceMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
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
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDedicatedInstanceMetricRequest() = default;
};
class DescribeDedicatedInstanceMetricResponseBodyMetricsMetricsRisks : public Darabonba::Model {
public:
  shared_ptr<vector<string>> risks{};

  DescribeDedicatedInstanceMetricResponseBodyMetricsMetricsRisks() {}

  explicit DescribeDedicatedInstanceMetricResponseBodyMetricsMetricsRisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (risks) {
      res["Risks"] = boost::any(*risks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Risks") != m.end() && !m["Risks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Risks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Risks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      risks = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeDedicatedInstanceMetricResponseBodyMetricsMetricsRisks() = default;
};
class DescribeDedicatedInstanceMetricResponseBodyMetricsMetrics : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<double> maxMemUsage{};
  shared_ptr<string> dedicatedInstanceId{};
  shared_ptr<string> startDate{};
  shared_ptr<double> diskUsage{};
  shared_ptr<double> avgMemUsage{};
  shared_ptr<long> maxIOPS{};
  shared_ptr<double> memory{};
  shared_ptr<double> avgCpuUsage{};
  shared_ptr<long> avgIOPS{};
  shared_ptr<string> role{};
  shared_ptr<double> maxCpuUsage{};
  shared_ptr<DescribeDedicatedInstanceMetricResponseBodyMetricsMetricsRisks> risks{};

  DescribeDedicatedInstanceMetricResponseBodyMetricsMetrics() {}

  explicit DescribeDedicatedInstanceMetricResponseBodyMetricsMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (maxMemUsage) {
      res["MaxMemUsage"] = boost::any(*maxMemUsage);
    }
    if (dedicatedInstanceId) {
      res["DedicatedInstanceId"] = boost::any(*dedicatedInstanceId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (diskUsage) {
      res["DiskUsage"] = boost::any(*diskUsage);
    }
    if (avgMemUsage) {
      res["AvgMemUsage"] = boost::any(*avgMemUsage);
    }
    if (maxIOPS) {
      res["MaxIOPS"] = boost::any(*maxIOPS);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (avgCpuUsage) {
      res["AvgCpuUsage"] = boost::any(*avgCpuUsage);
    }
    if (avgIOPS) {
      res["AvgIOPS"] = boost::any(*avgIOPS);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (maxCpuUsage) {
      res["MaxCpuUsage"] = boost::any(*maxCpuUsage);
    }
    if (risks) {
      res["Risks"] = risks ? boost::any(risks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("MaxMemUsage") != m.end() && !m["MaxMemUsage"].empty()) {
      maxMemUsage = make_shared<double>(boost::any_cast<double>(m["MaxMemUsage"]));
    }
    if (m.find("DedicatedInstanceId") != m.end() && !m["DedicatedInstanceId"].empty()) {
      dedicatedInstanceId = make_shared<string>(boost::any_cast<string>(m["DedicatedInstanceId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("DiskUsage") != m.end() && !m["DiskUsage"].empty()) {
      diskUsage = make_shared<double>(boost::any_cast<double>(m["DiskUsage"]));
    }
    if (m.find("AvgMemUsage") != m.end() && !m["AvgMemUsage"].empty()) {
      avgMemUsage = make_shared<double>(boost::any_cast<double>(m["AvgMemUsage"]));
    }
    if (m.find("MaxIOPS") != m.end() && !m["MaxIOPS"].empty()) {
      maxIOPS = make_shared<long>(boost::any_cast<long>(m["MaxIOPS"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
    if (m.find("AvgCpuUsage") != m.end() && !m["AvgCpuUsage"].empty()) {
      avgCpuUsage = make_shared<double>(boost::any_cast<double>(m["AvgCpuUsage"]));
    }
    if (m.find("AvgIOPS") != m.end() && !m["AvgIOPS"].empty()) {
      avgIOPS = make_shared<long>(boost::any_cast<long>(m["AvgIOPS"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("MaxCpuUsage") != m.end() && !m["MaxCpuUsage"].empty()) {
      maxCpuUsage = make_shared<double>(boost::any_cast<double>(m["MaxCpuUsage"]));
    }
    if (m.find("Risks") != m.end() && !m["Risks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Risks"].type()) {
        DescribeDedicatedInstanceMetricResponseBodyMetricsMetricsRisks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Risks"]));
        risks = make_shared<DescribeDedicatedInstanceMetricResponseBodyMetricsMetricsRisks>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedInstanceMetricResponseBodyMetricsMetrics() = default;
};
class DescribeDedicatedInstanceMetricResponseBodyMetrics : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDedicatedInstanceMetricResponseBodyMetricsMetrics>> metrics{};

  DescribeDedicatedInstanceMetricResponseBodyMetrics() {}

  explicit DescribeDedicatedInstanceMetricResponseBodyMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metrics) {
      vector<boost::any> temp1;
      for(auto item1:*metrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Metrics"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(vector<boost::any>) == m["Metrics"].type()) {
        vector<DescribeDedicatedInstanceMetricResponseBodyMetricsMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Metrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedInstanceMetricResponseBodyMetricsMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metrics = make_shared<vector<DescribeDedicatedInstanceMetricResponseBodyMetricsMetrics>>(expect1);
      }
    }
  }


  virtual ~DescribeDedicatedInstanceMetricResponseBodyMetrics() = default;
};
class DescribeDedicatedInstanceMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDedicatedInstanceMetricResponseBodyMetrics> metrics{};

  DescribeDedicatedInstanceMetricResponseBody() {}

  explicit DescribeDedicatedInstanceMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (metrics) {
      res["Metrics"] = metrics ? boost::any(metrics->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      if (typeid(map<string, boost::any>) == m["Metrics"].type()) {
        DescribeDedicatedInstanceMetricResponseBodyMetrics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Metrics"]));
        metrics = make_shared<DescribeDedicatedInstanceMetricResponseBodyMetrics>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedInstanceMetricResponseBody() = default;
};
class DescribeDedicatedInstanceMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDedicatedInstanceMetricResponseBody> body{};

  DescribeDedicatedInstanceMetricResponse() {}

  explicit DescribeDedicatedInstanceMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDedicatedInstanceMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedInstanceMetricResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedInstanceMetricResponse() = default;
};
class DescribeCrossVpcInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> DBInstanceId{};

  DescribeCrossVpcInstanceRequest() {}

  explicit DescribeCrossVpcInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~DescribeCrossVpcInstanceRequest() = default;
};
class DescribeCrossVpcInstanceResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> connectionString{};

  DescribeCrossVpcInstanceResponseBodyItems() {}

  explicit DescribeCrossVpcInstanceResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionString) {
      res["ConnectionString"] = boost::any(*connectionString);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionString") != m.end() && !m["ConnectionString"].empty()) {
      connectionString = make_shared<string>(boost::any_cast<string>(m["ConnectionString"]));
    }
  }


  virtual ~DescribeCrossVpcInstanceResponseBodyItems() = default;
};
class DescribeCrossVpcInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> hasDelInProcessTask{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> hasCreateInProcessTask{};
  shared_ptr<vector<DescribeCrossVpcInstanceResponseBodyItems>> items{};

  DescribeCrossVpcInstanceResponseBody() {}

  explicit DescribeCrossVpcInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasDelInProcessTask) {
      res["HasDelInProcessTask"] = boost::any(*hasDelInProcessTask);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hasCreateInProcessTask) {
      res["HasCreateInProcessTask"] = boost::any(*hasCreateInProcessTask);
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
    if (m.find("HasDelInProcessTask") != m.end() && !m["HasDelInProcessTask"].empty()) {
      hasDelInProcessTask = make_shared<bool>(boost::any_cast<bool>(m["HasDelInProcessTask"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HasCreateInProcessTask") != m.end() && !m["HasCreateInProcessTask"].empty()) {
      hasCreateInProcessTask = make_shared<bool>(boost::any_cast<bool>(m["HasCreateInProcessTask"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeCrossVpcInstanceResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCrossVpcInstanceResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeCrossVpcInstanceResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeCrossVpcInstanceResponseBody() = default;
};
class DescribeCrossVpcInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCrossVpcInstanceResponseBody> body{};

  DescribeCrossVpcInstanceResponse() {}

  explicit DescribeCrossVpcInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCrossVpcInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCrossVpcInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCrossVpcInstanceResponse() = default;
};
class ModifyDedicatedHostClassRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> targetClassCode{};
  shared_ptr<string> switchTime{};
  shared_ptr<string> switchTimeMode{};

  ModifyDedicatedHostClassRequest() {}

  explicit ModifyDedicatedHostClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (targetClassCode) {
      res["TargetClassCode"] = boost::any(*targetClassCode);
    }
    if (switchTime) {
      res["SwitchTime"] = boost::any(*switchTime);
    }
    if (switchTimeMode) {
      res["SwitchTimeMode"] = boost::any(*switchTimeMode);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("TargetClassCode") != m.end() && !m["TargetClassCode"].empty()) {
      targetClassCode = make_shared<string>(boost::any_cast<string>(m["TargetClassCode"]));
    }
    if (m.find("SwitchTime") != m.end() && !m["SwitchTime"].empty()) {
      switchTime = make_shared<string>(boost::any_cast<string>(m["SwitchTime"]));
    }
    if (m.find("SwitchTimeMode") != m.end() && !m["SwitchTimeMode"].empty()) {
      switchTimeMode = make_shared<string>(boost::any_cast<string>(m["SwitchTimeMode"]));
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
  shared_ptr<ModifyDedicatedHostClassResponseBody> body{};

  ModifyDedicatedHostClassResponse() {}

  explicit ModifyDedicatedHostClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeDedicatedHostsCheckInBastionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> bastionInstanceId{};

  DescribeDedicatedHostsCheckInBastionRequest() {}

  explicit DescribeDedicatedHostsCheckInBastionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
  }


  virtual ~DescribeDedicatedHostsCheckInBastionRequest() = default;
};
class DescribeDedicatedHostsCheckInBastionResponseBodyHosts : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> dedicatedHostName{};
  shared_ptr<bool> allocationStatus{};
  shared_ptr<bool> inBastion{};
  shared_ptr<string> hostName{};
  shared_ptr<string> ip{};

  DescribeDedicatedHostsCheckInBastionResponseBodyHosts() {}

  explicit DescribeDedicatedHostsCheckInBastionResponseBodyHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (dedicatedHostName) {
      res["DedicatedHostName"] = boost::any(*dedicatedHostName);
    }
    if (allocationStatus) {
      res["AllocationStatus"] = boost::any(*allocationStatus);
    }
    if (inBastion) {
      res["InBastion"] = boost::any(*inBastion);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("DedicatedHostName") != m.end() && !m["DedicatedHostName"].empty()) {
      dedicatedHostName = make_shared<string>(boost::any_cast<string>(m["DedicatedHostName"]));
    }
    if (m.find("AllocationStatus") != m.end() && !m["AllocationStatus"].empty()) {
      allocationStatus = make_shared<bool>(boost::any_cast<bool>(m["AllocationStatus"]));
    }
    if (m.find("InBastion") != m.end() && !m["InBastion"].empty()) {
      inBastion = make_shared<bool>(boost::any_cast<bool>(m["InBastion"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
  }


  virtual ~DescribeDedicatedHostsCheckInBastionResponseBodyHosts() = default;
};
class DescribeDedicatedHostsCheckInBastionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> bastionInstanceId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<vector<DescribeDedicatedHostsCheckInBastionResponseBodyHosts>> hosts{};

  DescribeDedicatedHostsCheckInBastionResponseBody() {}

  explicit DescribeDedicatedHostsCheckInBastionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (hosts) {
      vector<boost::any> temp1;
      for(auto item1:*hosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hosts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      if (typeid(vector<boost::any>) == m["Hosts"].type()) {
        vector<DescribeDedicatedHostsCheckInBastionResponseBodyHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedHostsCheckInBastionResponseBodyHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hosts = make_shared<vector<DescribeDedicatedHostsCheckInBastionResponseBodyHosts>>(expect1);
      }
    }
  }


  virtual ~DescribeDedicatedHostsCheckInBastionResponseBody() = default;
};
class DescribeDedicatedHostsCheckInBastionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDedicatedHostsCheckInBastionResponseBody> body{};

  DescribeDedicatedHostsCheckInBastionResponse() {}

  explicit DescribeDedicatedHostsCheckInBastionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDedicatedHostsCheckInBastionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedHostsCheckInBastionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedHostsCheckInBastionResponse() = default;
};
class DropDedicatedHostUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostName{};
  shared_ptr<string> userName{};
  shared_ptr<string> regionId{};

  DropDedicatedHostUserRequest() {}

  explicit DropDedicatedHostUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostName) {
      res["DedicatedHostName"] = boost::any(*dedicatedHostName);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
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
    if (m.find("DedicatedHostName") != m.end() && !m["DedicatedHostName"].empty()) {
      dedicatedHostName = make_shared<string>(boost::any_cast<string>(m["DedicatedHostName"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DropDedicatedHostUserRequest() = default;
};
class DropDedicatedHostUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DropDedicatedHostUserResponseBody() {}

  explicit DropDedicatedHostUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DropDedicatedHostUserResponseBody() = default;
};
class DropDedicatedHostUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DropDedicatedHostUserResponseBody> body{};

  DropDedicatedHostUserResponse() {}

  explicit DropDedicatedHostUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DropDedicatedHostUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DropDedicatedHostUserResponseBody>(model1);
      }
    }
  }


  virtual ~DropDedicatedHostUserResponse() = default;
};
class DescribeDedicatedHostsInBastionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> bastionInstanceId{};

  DescribeDedicatedHostsInBastionRequest() {}

  explicit DescribeDedicatedHostsInBastionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
  }


  virtual ~DescribeDedicatedHostsInBastionRequest() = default;
};
class DescribeDedicatedHostsInBastionResponseBodyHosts : public Darabonba::Model {
public:
  shared_ptr<string> hostDescription{};
  shared_ptr<string> comment{};
  shared_ptr<string> bastionHostId{};
  shared_ptr<string> osName{};
  shared_ptr<string> hostAccountCount{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> hostPrivateIp{};
  shared_ptr<bool> accountCreating{};
  shared_ptr<string> accountName{};

  DescribeDedicatedHostsInBastionResponseBodyHosts() {}

  explicit DescribeDedicatedHostsInBastionResponseBodyHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostDescription) {
      res["HostDescription"] = boost::any(*hostDescription);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (bastionHostId) {
      res["BastionHostId"] = boost::any(*bastionHostId);
    }
    if (osName) {
      res["OsName"] = boost::any(*osName);
    }
    if (hostAccountCount) {
      res["HostAccountCount"] = boost::any(*hostAccountCount);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (hostPrivateIp) {
      res["HostPrivateIp"] = boost::any(*hostPrivateIp);
    }
    if (accountCreating) {
      res["AccountCreating"] = boost::any(*accountCreating);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostDescription") != m.end() && !m["HostDescription"].empty()) {
      hostDescription = make_shared<string>(boost::any_cast<string>(m["HostDescription"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("BastionHostId") != m.end() && !m["BastionHostId"].empty()) {
      bastionHostId = make_shared<string>(boost::any_cast<string>(m["BastionHostId"]));
    }
    if (m.find("OsName") != m.end() && !m["OsName"].empty()) {
      osName = make_shared<string>(boost::any_cast<string>(m["OsName"]));
    }
    if (m.find("HostAccountCount") != m.end() && !m["HostAccountCount"].empty()) {
      hostAccountCount = make_shared<string>(boost::any_cast<string>(m["HostAccountCount"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("HostPrivateIp") != m.end() && !m["HostPrivateIp"].empty()) {
      hostPrivateIp = make_shared<string>(boost::any_cast<string>(m["HostPrivateIp"]));
    }
    if (m.find("AccountCreating") != m.end() && !m["AccountCreating"].empty()) {
      accountCreating = make_shared<bool>(boost::any_cast<bool>(m["AccountCreating"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DescribeDedicatedHostsInBastionResponseBodyHosts() = default;
};
class DescribeDedicatedHostsInBastionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> bastionInstanceId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<vector<DescribeDedicatedHostsInBastionResponseBodyHosts>> hosts{};

  DescribeDedicatedHostsInBastionResponseBody() {}

  explicit DescribeDedicatedHostsInBastionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (hosts) {
      vector<boost::any> temp1;
      for(auto item1:*hosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hosts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      if (typeid(vector<boost::any>) == m["Hosts"].type()) {
        vector<DescribeDedicatedHostsInBastionResponseBodyHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedHostsInBastionResponseBodyHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hosts = make_shared<vector<DescribeDedicatedHostsInBastionResponseBodyHosts>>(expect1);
      }
    }
  }


  virtual ~DescribeDedicatedHostsInBastionResponseBody() = default;
};
class DescribeDedicatedHostsInBastionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDedicatedHostsInBastionResponseBody> body{};

  DescribeDedicatedHostsInBastionResponse() {}

  explicit DescribeDedicatedHostsInBastionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDedicatedHostsInBastionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedHostsInBastionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedHostsInBastionResponse() = default;
};
class ModifyDedicatedHostGroupAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> dedicatedHostGroupDesc{};
  shared_ptr<long> cpuAllocationRatio{};
  shared_ptr<long> memAllocationRatio{};
  shared_ptr<long> diskAllocationRatio{};
  shared_ptr<string> allocationPolicy{};
  shared_ptr<string> hostReplacePolicy{};
  shared_ptr<string> openPermission{};

  ModifyDedicatedHostGroupAttributeRequest() {}

  explicit ModifyDedicatedHostGroupAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (dedicatedHostGroupDesc) {
      res["DedicatedHostGroupDesc"] = boost::any(*dedicatedHostGroupDesc);
    }
    if (cpuAllocationRatio) {
      res["CpuAllocationRatio"] = boost::any(*cpuAllocationRatio);
    }
    if (memAllocationRatio) {
      res["MemAllocationRatio"] = boost::any(*memAllocationRatio);
    }
    if (diskAllocationRatio) {
      res["DiskAllocationRatio"] = boost::any(*diskAllocationRatio);
    }
    if (allocationPolicy) {
      res["AllocationPolicy"] = boost::any(*allocationPolicy);
    }
    if (hostReplacePolicy) {
      res["HostReplacePolicy"] = boost::any(*hostReplacePolicy);
    }
    if (openPermission) {
      res["OpenPermission"] = boost::any(*openPermission);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("DedicatedHostGroupDesc") != m.end() && !m["DedicatedHostGroupDesc"].empty()) {
      dedicatedHostGroupDesc = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupDesc"]));
    }
    if (m.find("CpuAllocationRatio") != m.end() && !m["CpuAllocationRatio"].empty()) {
      cpuAllocationRatio = make_shared<long>(boost::any_cast<long>(m["CpuAllocationRatio"]));
    }
    if (m.find("MemAllocationRatio") != m.end() && !m["MemAllocationRatio"].empty()) {
      memAllocationRatio = make_shared<long>(boost::any_cast<long>(m["MemAllocationRatio"]));
    }
    if (m.find("DiskAllocationRatio") != m.end() && !m["DiskAllocationRatio"].empty()) {
      diskAllocationRatio = make_shared<long>(boost::any_cast<long>(m["DiskAllocationRatio"]));
    }
    if (m.find("AllocationPolicy") != m.end() && !m["AllocationPolicy"].empty()) {
      allocationPolicy = make_shared<string>(boost::any_cast<string>(m["AllocationPolicy"]));
    }
    if (m.find("HostReplacePolicy") != m.end() && !m["HostReplacePolicy"].empty()) {
      hostReplacePolicy = make_shared<string>(boost::any_cast<string>(m["HostReplacePolicy"]));
    }
    if (m.find("OpenPermission") != m.end() && !m["OpenPermission"].empty()) {
      openPermission = make_shared<string>(boost::any_cast<string>(m["OpenPermission"]));
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
  shared_ptr<ModifyDedicatedHostGroupAttributeResponseBody> body{};

  ModifyDedicatedHostGroupAttributeResponse() {}

  explicit ModifyDedicatedHostGroupAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class QueryHostInstanceConsoleInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostId{};

  QueryHostInstanceConsoleInfoRequest() {}

  explicit QueryHostInstanceConsoleInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
  }


  virtual ~QueryHostInstanceConsoleInfoRequest() = default;
};
class QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo : public Darabonba::Model {
public:
  shared_ptr<double> perfIdbPio{};
  shared_ptr<double> diskCurr{};
  shared_ptr<double> memRatio{};
  shared_ptr<double> cpuRatio{};

  QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo() {}

  explicit QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (perfIdbPio) {
      res["PerfIdbPio"] = boost::any(*perfIdbPio);
    }
    if (diskCurr) {
      res["DiskCurr"] = boost::any(*diskCurr);
    }
    if (memRatio) {
      res["MemRatio"] = boost::any(*memRatio);
    }
    if (cpuRatio) {
      res["CpuRatio"] = boost::any(*cpuRatio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerfIdbPio") != m.end() && !m["PerfIdbPio"].empty()) {
      perfIdbPio = make_shared<double>(boost::any_cast<double>(m["PerfIdbPio"]));
    }
    if (m.find("DiskCurr") != m.end() && !m["DiskCurr"].empty()) {
      diskCurr = make_shared<double>(boost::any_cast<double>(m["DiskCurr"]));
    }
    if (m.find("MemRatio") != m.end() && !m["MemRatio"].empty()) {
      memRatio = make_shared<double>(boost::any_cast<double>(m["MemRatio"]));
    }
    if (m.find("CpuRatio") != m.end() && !m["CpuRatio"].empty()) {
      cpuRatio = make_shared<double>(boost::any_cast<double>(m["CpuRatio"]));
    }
  }


  virtual ~QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo() = default;
};
class QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfos : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<long> maxConnIncreaseRatioValue{};
  shared_ptr<long> memSize{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> ip{};
  shared_ptr<string> port{};
  shared_ptr<string> engineVersion{};
  shared_ptr<long> memoryIncreaseRatioValue{};
  shared_ptr<long> cpuIncreaseRatioValue{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> engine{};
  shared_ptr<string> levelName{};
  shared_ptr<string> role{};
  shared_ptr<string> DBInstanceDescription{};
  shared_ptr<long> cpuCores{};
  shared_ptr<QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo> perfInfo{};

  QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfos() {}

  explicit QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (maxConnIncreaseRatioValue) {
      res["MaxConnIncreaseRatioValue"] = boost::any(*maxConnIncreaseRatioValue);
    }
    if (memSize) {
      res["MemSize"] = boost::any(*memSize);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
    }
    if (memoryIncreaseRatioValue) {
      res["MemoryIncreaseRatioValue"] = boost::any(*memoryIncreaseRatioValue);
    }
    if (cpuIncreaseRatioValue) {
      res["CpuIncreaseRatioValue"] = boost::any(*cpuIncreaseRatioValue);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (levelName) {
      res["LevelName"] = boost::any(*levelName);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (DBInstanceDescription) {
      res["DBInstanceDescription"] = boost::any(*DBInstanceDescription);
    }
    if (cpuCores) {
      res["CpuCores"] = boost::any(*cpuCores);
    }
    if (perfInfo) {
      res["PerfInfo"] = perfInfo ? boost::any(perfInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("MaxConnIncreaseRatioValue") != m.end() && !m["MaxConnIncreaseRatioValue"].empty()) {
      maxConnIncreaseRatioValue = make_shared<long>(boost::any_cast<long>(m["MaxConnIncreaseRatioValue"]));
    }
    if (m.find("MemSize") != m.end() && !m["MemSize"].empty()) {
      memSize = make_shared<long>(boost::any_cast<long>(m["MemSize"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
    if (m.find("MemoryIncreaseRatioValue") != m.end() && !m["MemoryIncreaseRatioValue"].empty()) {
      memoryIncreaseRatioValue = make_shared<long>(boost::any_cast<long>(m["MemoryIncreaseRatioValue"]));
    }
    if (m.find("CpuIncreaseRatioValue") != m.end() && !m["CpuIncreaseRatioValue"].empty()) {
      cpuIncreaseRatioValue = make_shared<long>(boost::any_cast<long>(m["CpuIncreaseRatioValue"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("LevelName") != m.end() && !m["LevelName"].empty()) {
      levelName = make_shared<string>(boost::any_cast<string>(m["LevelName"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("DBInstanceDescription") != m.end() && !m["DBInstanceDescription"].empty()) {
      DBInstanceDescription = make_shared<string>(boost::any_cast<string>(m["DBInstanceDescription"]));
    }
    if (m.find("CpuCores") != m.end() && !m["CpuCores"].empty()) {
      cpuCores = make_shared<long>(boost::any_cast<long>(m["CpuCores"]));
    }
    if (m.find("PerfInfo") != m.end() && !m["PerfInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PerfInfo"].type()) {
        QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PerfInfo"]));
        perfInfo = make_shared<QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfosPerfInfo>(model1);
      }
    }
  }


  virtual ~QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfos() = default;
};
class QueryHostInstanceConsoleInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryHostInstanceConsoleInfoResponseBodyHostInstanceConsoleInfos>> hostInstanceConsoleInfos{};

  QueryHostInstanceConsoleInfoResponseBody() {}

  explicit QueryHostInstanceConsoleInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostInstanceConsoleInfos) {
      vector<boost::any> temp1;
      for(auto item1:*hostInstanceConsoleInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostInstanceConsoleInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
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
  }


  virtual ~QueryHostInstanceConsoleInfoResponseBody() = default;
};
class QueryHostInstanceConsoleInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryHostInstanceConsoleInfoResponseBody> body{};

  QueryHostInstanceConsoleInfoResponse() {}

  explicit QueryHostInstanceConsoleInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> zoneId{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegionsRDSRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRDSRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
class QueryHostBaseInfoByInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> DBInstanceId{};

  QueryHostBaseInfoByInstanceRequest() {}

  explicit QueryHostBaseInfoByInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
  }


  virtual ~QueryHostBaseInfoByInstanceRequest() = default;
};
class QueryHostBaseInfoByInstanceResponseBodyHostInstanceConsoleInfos : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> status{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> ip{};
  shared_ptr<string> hostName{};
  shared_ptr<string> engine{};
  shared_ptr<string> role{};
  shared_ptr<string> port{};
  shared_ptr<string> engineVersion{};

  QueryHostBaseInfoByInstanceResponseBodyHostInstanceConsoleInfos() {}

  explicit QueryHostBaseInfoByInstanceResponseBodyHostInstanceConsoleInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (engineVersion) {
      res["EngineVersion"] = boost::any(*engineVersion);
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
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("EngineVersion") != m.end() && !m["EngineVersion"].empty()) {
      engineVersion = make_shared<string>(boost::any_cast<string>(m["EngineVersion"]));
    }
  }


  virtual ~QueryHostBaseInfoByInstanceResponseBodyHostInstanceConsoleInfos() = default;
};
class QueryHostBaseInfoByInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryHostBaseInfoByInstanceResponseBodyHostInstanceConsoleInfos>> hostInstanceConsoleInfos{};

  QueryHostBaseInfoByInstanceResponseBody() {}

  explicit QueryHostBaseInfoByInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostInstanceConsoleInfos) {
      vector<boost::any> temp1;
      for(auto item1:*hostInstanceConsoleInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostInstanceConsoleInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
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
  }


  virtual ~QueryHostBaseInfoByInstanceResponseBody() = default;
};
class QueryHostBaseInfoByInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryHostBaseInfoByInstanceResponseBody> body{};

  QueryHostBaseInfoByInstanceResponse() {}

  explicit QueryHostBaseInfoByInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeDedicatedInstanceDistributionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> regionId{};

  DescribeDedicatedInstanceDistributionRequest() {}

  explicit DescribeDedicatedInstanceDistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
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
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDedicatedInstanceDistributionRequest() = default;
};
class DescribeDedicatedInstanceDistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> DBClass{};
  shared_ptr<map<string, boost::any>> DBVersion{};
  shared_ptr<string> requestId{};
  shared_ptr<long> instanceCount{};
  shared_ptr<map<string, boost::any>> DBType{};
  shared_ptr<string> dedicatedHostGroupId{};

  DescribeDedicatedInstanceDistributionResponseBody() {}

  explicit DescribeDedicatedInstanceDistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBClass) {
      res["DBClass"] = boost::any(*DBClass);
    }
    if (DBVersion) {
      res["DBVersion"] = boost::any(*DBVersion);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DBClass") != m.end() && !m["DBClass"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DBClass"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      DBClass = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DBVersion") != m.end() && !m["DBVersion"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DBVersion"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      DBVersion = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["DBType"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      DBType = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
  }


  virtual ~DescribeDedicatedInstanceDistributionResponseBody() = default;
};
class DescribeDedicatedInstanceDistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDedicatedInstanceDistributionResponseBody> body{};

  DescribeDedicatedInstanceDistributionResponse() {}

  explicit DescribeDedicatedInstanceDistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDedicatedInstanceDistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedInstanceDistributionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedInstanceDistributionResponse() = default;
};
class DescribeScheduleHostRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> scheduleId{};

  DescribeScheduleHostRequest() {}

  explicit DescribeScheduleHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["ScheduleId"]));
    }
  }


  virtual ~DescribeScheduleHostRequest() = default;
};
class DescribeScheduleHostResponseBodyHostScheduleStatusList : public Darabonba::Model {
public:
  shared_ptr<string> scheduleStatus{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> instanceOutId{};
  shared_ptr<string> instanceInId{};

  DescribeScheduleHostResponseBodyHostScheduleStatusList() {}

  explicit DescribeScheduleHostResponseBodyHostScheduleStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduleStatus) {
      res["ScheduleStatus"] = boost::any(*scheduleStatus);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (instanceOutId) {
      res["InstanceOutId"] = boost::any(*instanceOutId);
    }
    if (instanceInId) {
      res["InstanceInId"] = boost::any(*instanceInId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduleStatus") != m.end() && !m["ScheduleStatus"].empty()) {
      scheduleStatus = make_shared<string>(boost::any_cast<string>(m["ScheduleStatus"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("InstanceOutId") != m.end() && !m["InstanceOutId"].empty()) {
      instanceOutId = make_shared<string>(boost::any_cast<string>(m["InstanceOutId"]));
    }
    if (m.find("InstanceInId") != m.end() && !m["InstanceInId"].empty()) {
      instanceInId = make_shared<string>(boost::any_cast<string>(m["InstanceInId"]));
    }
  }


  virtual ~DescribeScheduleHostResponseBodyHostScheduleStatusList() = default;
};
class DescribeScheduleHostResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> scheduleId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeScheduleHostResponseBodyHostScheduleStatusList>> hostScheduleStatusList{};

  DescribeScheduleHostResponseBody() {}

  explicit DescribeScheduleHostResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduleId) {
      res["ScheduleId"] = boost::any(*scheduleId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (hostScheduleStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*hostScheduleStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostScheduleStatusList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduleId") != m.end() && !m["ScheduleId"].empty()) {
      scheduleId = make_shared<string>(boost::any_cast<string>(m["ScheduleId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HostScheduleStatusList") != m.end() && !m["HostScheduleStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["HostScheduleStatusList"].type()) {
        vector<DescribeScheduleHostResponseBodyHostScheduleStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostScheduleStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScheduleHostResponseBodyHostScheduleStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostScheduleStatusList = make_shared<vector<DescribeScheduleHostResponseBodyHostScheduleStatusList>>(expect1);
      }
    }
  }


  virtual ~DescribeScheduleHostResponseBody() = default;
};
class DescribeScheduleHostResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeScheduleHostResponseBody> body{};

  DescribeScheduleHostResponse() {}

  explicit DescribeScheduleHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeScheduleHostResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScheduleHostResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScheduleHostResponse() = default;
};
class ModifyDedicatedHostAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> hostName{};
  shared_ptr<string> allocationStatus{};

  ModifyDedicatedHostAttributeRequest() {}

  explicit ModifyDedicatedHostAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (allocationStatus) {
      res["AllocationStatus"] = boost::any(*allocationStatus);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("AllocationStatus") != m.end() && !m["AllocationStatus"].empty()) {
      allocationStatus = make_shared<string>(boost::any_cast<string>(m["AllocationStatus"]));
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
  shared_ptr<ModifyDedicatedHostAttributeResponseBody> body{};

  ModifyDedicatedHostAttributeResponse() {}

  explicit ModifyDedicatedHostAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreateDedicatedHostGroupRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> engine{};
  shared_ptr<long> cpuAllocationRatio{};
  shared_ptr<long> memAllocationRatio{};
  shared_ptr<long> diskAllocationRatio{};
  shared_ptr<string> allocationPolicy{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> hostReplacePolicy{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> openPermission{};
  shared_ptr<string> dedicatedHostGroupDesc{};

  CreateDedicatedHostGroupRequest() {}

  explicit CreateDedicatedHostGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (cpuAllocationRatio) {
      res["CpuAllocationRatio"] = boost::any(*cpuAllocationRatio);
    }
    if (memAllocationRatio) {
      res["MemAllocationRatio"] = boost::any(*memAllocationRatio);
    }
    if (diskAllocationRatio) {
      res["DiskAllocationRatio"] = boost::any(*diskAllocationRatio);
    }
    if (allocationPolicy) {
      res["AllocationPolicy"] = boost::any(*allocationPolicy);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (hostReplacePolicy) {
      res["HostReplacePolicy"] = boost::any(*hostReplacePolicy);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (openPermission) {
      res["OpenPermission"] = boost::any(*openPermission);
    }
    if (dedicatedHostGroupDesc) {
      res["DedicatedHostGroupDesc"] = boost::any(*dedicatedHostGroupDesc);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("CpuAllocationRatio") != m.end() && !m["CpuAllocationRatio"].empty()) {
      cpuAllocationRatio = make_shared<long>(boost::any_cast<long>(m["CpuAllocationRatio"]));
    }
    if (m.find("MemAllocationRatio") != m.end() && !m["MemAllocationRatio"].empty()) {
      memAllocationRatio = make_shared<long>(boost::any_cast<long>(m["MemAllocationRatio"]));
    }
    if (m.find("DiskAllocationRatio") != m.end() && !m["DiskAllocationRatio"].empty()) {
      diskAllocationRatio = make_shared<long>(boost::any_cast<long>(m["DiskAllocationRatio"]));
    }
    if (m.find("AllocationPolicy") != m.end() && !m["AllocationPolicy"].empty()) {
      allocationPolicy = make_shared<string>(boost::any_cast<string>(m["AllocationPolicy"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("HostReplacePolicy") != m.end() && !m["HostReplacePolicy"].empty()) {
      hostReplacePolicy = make_shared<string>(boost::any_cast<string>(m["HostReplacePolicy"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OpenPermission") != m.end() && !m["OpenPermission"].empty()) {
      openPermission = make_shared<long>(boost::any_cast<long>(m["OpenPermission"]));
    }
    if (m.find("DedicatedHostGroupDesc") != m.end() && !m["DedicatedHostGroupDesc"].empty()) {
      dedicatedHostGroupDesc = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupDesc"]));
    }
  }


  virtual ~CreateDedicatedHostGroupRequest() = default;
};
class CreateDedicatedHostGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> dedicatedHostGroupId{};

  CreateDedicatedHostGroupResponseBody() {}

  explicit CreateDedicatedHostGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
  }


  virtual ~CreateDedicatedHostGroupResponseBody() = default;
};
class CreateDedicatedHostGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDedicatedHostGroupResponseBody> body{};

  CreateDedicatedHostGroupResponse() {}

  explicit CreateDedicatedHostGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class AddHostsToBastionRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> bastionInstanceId{};
  shared_ptr<string> hosts{};

  AddHostsToBastionRequest() {}

  explicit AddHostsToBastionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
    }
    if (hosts) {
      res["Hosts"] = boost::any(*hosts);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      hosts = make_shared<string>(boost::any_cast<string>(m["Hosts"]));
    }
  }


  virtual ~AddHostsToBastionRequest() = default;
};
class AddHostsToBastionResponseBodyHosts : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> hostName{};
  shared_ptr<string> message{};
  shared_ptr<string> hostPrivateIp{};

  AddHostsToBastionResponseBodyHosts() {}

  explicit AddHostsToBastionResponseBodyHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (hostPrivateIp) {
      res["HostPrivateIp"] = boost::any(*hostPrivateIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("HostPrivateIp") != m.end() && !m["HostPrivateIp"].empty()) {
      hostPrivateIp = make_shared<string>(boost::any_cast<string>(m["HostPrivateIp"]));
    }
  }


  virtual ~AddHostsToBastionResponseBodyHosts() = default;
};
class AddHostsToBastionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> bastionInstanceId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<vector<AddHostsToBastionResponseBodyHosts>> hosts{};

  AddHostsToBastionResponseBody() {}

  explicit AddHostsToBastionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (hosts) {
      vector<boost::any> temp1;
      for(auto item1:*hosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hosts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      if (typeid(vector<boost::any>) == m["Hosts"].type()) {
        vector<AddHostsToBastionResponseBodyHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddHostsToBastionResponseBodyHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hosts = make_shared<vector<AddHostsToBastionResponseBodyHosts>>(expect1);
      }
    }
  }


  virtual ~AddHostsToBastionResponseBody() = default;
};
class AddHostsToBastionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddHostsToBastionResponseBody> body{};

  AddHostsToBastionResponse() {}

  explicit AddHostsToBastionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddHostsToBastionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddHostsToBastionResponseBody>(model1);
      }
    }
  }


  virtual ~AddHostsToBastionResponse() = default;
};
class AttachHostsToBastionUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> bastionUser{};
  shared_ptr<string> bastionInstanceId{};
  shared_ptr<string> hosts{};
  shared_ptr<string> dedicatedHostGroupId{};

  AttachHostsToBastionUserRequest() {}

  explicit AttachHostsToBastionUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (bastionUser) {
      res["BastionUser"] = boost::any(*bastionUser);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
    }
    if (hosts) {
      res["Hosts"] = boost::any(*hosts);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("BastionUser") != m.end() && !m["BastionUser"].empty()) {
      bastionUser = make_shared<string>(boost::any_cast<string>(m["BastionUser"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      hosts = make_shared<string>(boost::any_cast<string>(m["Hosts"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
  }


  virtual ~AttachHostsToBastionUserRequest() = default;
};
class AttachHostsToBastionUserResponseBodyHosts : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> hostName{};
  shared_ptr<string> message{};

  AttachHostsToBastionUserResponseBodyHosts() {}

  explicit AttachHostsToBastionUserResponseBodyHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~AttachHostsToBastionUserResponseBodyHosts() = default;
};
class AttachHostsToBastionUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> bastionInstanceId{};
  shared_ptr<string> bastionUser{};
  shared_ptr<vector<AttachHostsToBastionUserResponseBodyHosts>> hosts{};

  AttachHostsToBastionUserResponseBody() {}

  explicit AttachHostsToBastionUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bastionInstanceId) {
      res["BastionInstanceId"] = boost::any(*bastionInstanceId);
    }
    if (bastionUser) {
      res["BastionUser"] = boost::any(*bastionUser);
    }
    if (hosts) {
      vector<boost::any> temp1;
      for(auto item1:*hosts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Hosts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BastionInstanceId") != m.end() && !m["BastionInstanceId"].empty()) {
      bastionInstanceId = make_shared<string>(boost::any_cast<string>(m["BastionInstanceId"]));
    }
    if (m.find("BastionUser") != m.end() && !m["BastionUser"].empty()) {
      bastionUser = make_shared<string>(boost::any_cast<string>(m["BastionUser"]));
    }
    if (m.find("Hosts") != m.end() && !m["Hosts"].empty()) {
      if (typeid(vector<boost::any>) == m["Hosts"].type()) {
        vector<AttachHostsToBastionUserResponseBodyHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Hosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachHostsToBastionUserResponseBodyHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hosts = make_shared<vector<AttachHostsToBastionUserResponseBodyHosts>>(expect1);
      }
    }
  }


  virtual ~AttachHostsToBastionUserResponseBody() = default;
};
class AttachHostsToBastionUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachHostsToBastionUserResponseBody> body{};

  AttachHostsToBastionUserResponse() {}

  explicit AttachHostsToBastionUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachHostsToBastionUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachHostsToBastionUserResponseBody>(model1);
      }
    }
  }


  virtual ~AttachHostsToBastionUserResponse() = default;
};
class DescribeEvaluateDedicatedHostsForInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> DBInstanceId{};
  shared_ptr<string> excludeType{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> dedicatedHostId{};

  DescribeEvaluateDedicatedHostsForInstanceRequest() {}

  explicit DescribeEvaluateDedicatedHostsForInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (DBInstanceId) {
      res["DBInstanceId"] = boost::any(*DBInstanceId);
    }
    if (excludeType) {
      res["ExcludeType"] = boost::any(*excludeType);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("DBInstanceId") != m.end() && !m["DBInstanceId"].empty()) {
      DBInstanceId = make_shared<string>(boost::any_cast<string>(m["DBInstanceId"]));
    }
    if (m.find("ExcludeType") != m.end() && !m["ExcludeType"].empty()) {
      excludeType = make_shared<string>(boost::any_cast<string>(m["ExcludeType"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
  }


  virtual ~DescribeEvaluateDedicatedHostsForInstanceRequest() = default;
};
class DescribeEvaluateDedicatedHostsForInstanceResponseBodyDedicatedHosts : public Darabonba::Model {
public:
  shared_ptr<bool> isContainReadOnlyInstance{};
  shared_ptr<bool> hostAllocationStatus{};
  shared_ptr<string> comment{};
  shared_ptr<long> hostFreeMem{};
  shared_ptr<string> hostStatus{};
  shared_ptr<long> hostFreeCPU{};
  shared_ptr<long> hostStorage{};
  shared_ptr<long> hostCPU{};
  shared_ptr<string> regionId{};
  shared_ptr<long> hostFreeStorage{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> dedicatedHostName{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> engine{};
  shared_ptr<bool> isCouldSSD{};
  shared_ptr<bool> isAvailableForInstance{};
  shared_ptr<long> hostMem{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> IPAddress{};

  DescribeEvaluateDedicatedHostsForInstanceResponseBodyDedicatedHosts() {}

  explicit DescribeEvaluateDedicatedHostsForInstanceResponseBodyDedicatedHosts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isContainReadOnlyInstance) {
      res["IsContainReadOnlyInstance"] = boost::any(*isContainReadOnlyInstance);
    }
    if (hostAllocationStatus) {
      res["HostAllocationStatus"] = boost::any(*hostAllocationStatus);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (hostFreeMem) {
      res["HostFreeMem"] = boost::any(*hostFreeMem);
    }
    if (hostStatus) {
      res["HostStatus"] = boost::any(*hostStatus);
    }
    if (hostFreeCPU) {
      res["HostFreeCPU"] = boost::any(*hostFreeCPU);
    }
    if (hostStorage) {
      res["HostStorage"] = boost::any(*hostStorage);
    }
    if (hostCPU) {
      res["HostCPU"] = boost::any(*hostCPU);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (hostFreeStorage) {
      res["HostFreeStorage"] = boost::any(*hostFreeStorage);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (dedicatedHostName) {
      res["DedicatedHostName"] = boost::any(*dedicatedHostName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (isCouldSSD) {
      res["IsCouldSSD"] = boost::any(*isCouldSSD);
    }
    if (isAvailableForInstance) {
      res["IsAvailableForInstance"] = boost::any(*isAvailableForInstance);
    }
    if (hostMem) {
      res["HostMem"] = boost::any(*hostMem);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsContainReadOnlyInstance") != m.end() && !m["IsContainReadOnlyInstance"].empty()) {
      isContainReadOnlyInstance = make_shared<bool>(boost::any_cast<bool>(m["IsContainReadOnlyInstance"]));
    }
    if (m.find("HostAllocationStatus") != m.end() && !m["HostAllocationStatus"].empty()) {
      hostAllocationStatus = make_shared<bool>(boost::any_cast<bool>(m["HostAllocationStatus"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("HostFreeMem") != m.end() && !m["HostFreeMem"].empty()) {
      hostFreeMem = make_shared<long>(boost::any_cast<long>(m["HostFreeMem"]));
    }
    if (m.find("HostStatus") != m.end() && !m["HostStatus"].empty()) {
      hostStatus = make_shared<string>(boost::any_cast<string>(m["HostStatus"]));
    }
    if (m.find("HostFreeCPU") != m.end() && !m["HostFreeCPU"].empty()) {
      hostFreeCPU = make_shared<long>(boost::any_cast<long>(m["HostFreeCPU"]));
    }
    if (m.find("HostStorage") != m.end() && !m["HostStorage"].empty()) {
      hostStorage = make_shared<long>(boost::any_cast<long>(m["HostStorage"]));
    }
    if (m.find("HostCPU") != m.end() && !m["HostCPU"].empty()) {
      hostCPU = make_shared<long>(boost::any_cast<long>(m["HostCPU"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("HostFreeStorage") != m.end() && !m["HostFreeStorage"].empty()) {
      hostFreeStorage = make_shared<long>(boost::any_cast<long>(m["HostFreeStorage"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("DedicatedHostName") != m.end() && !m["DedicatedHostName"].empty()) {
      dedicatedHostName = make_shared<string>(boost::any_cast<string>(m["DedicatedHostName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("IsCouldSSD") != m.end() && !m["IsCouldSSD"].empty()) {
      isCouldSSD = make_shared<bool>(boost::any_cast<bool>(m["IsCouldSSD"]));
    }
    if (m.find("IsAvailableForInstance") != m.end() && !m["IsAvailableForInstance"].empty()) {
      isAvailableForInstance = make_shared<bool>(boost::any_cast<bool>(m["IsAvailableForInstance"]));
    }
    if (m.find("HostMem") != m.end() && !m["HostMem"].empty()) {
      hostMem = make_shared<long>(boost::any_cast<long>(m["HostMem"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
  }


  virtual ~DescribeEvaluateDedicatedHostsForInstanceResponseBodyDedicatedHosts() = default;
};
class DescribeEvaluateDedicatedHostsForInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> instanceRequiredCPU{};
  shared_ptr<long> cpuOverAllocationRatio{};
  shared_ptr<long> memoryOverAllocationRatio{};
  shared_ptr<long> instanceRequiredMemory{};
  shared_ptr<string> instanceClassCode{};
  shared_ptr<long> availableHostNum{};
  shared_ptr<long> instanceRequiredStorage{};
  shared_ptr<long> diskOverAllocationRatio{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<vector<DescribeEvaluateDedicatedHostsForInstanceResponseBodyDedicatedHosts>> dedicatedHosts{};

  DescribeEvaluateDedicatedHostsForInstanceResponseBody() {}

  explicit DescribeEvaluateDedicatedHostsForInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceRequiredCPU) {
      res["InstanceRequiredCPU"] = boost::any(*instanceRequiredCPU);
    }
    if (cpuOverAllocationRatio) {
      res["CpuOverAllocationRatio"] = boost::any(*cpuOverAllocationRatio);
    }
    if (memoryOverAllocationRatio) {
      res["MemoryOverAllocationRatio"] = boost::any(*memoryOverAllocationRatio);
    }
    if (instanceRequiredMemory) {
      res["InstanceRequiredMemory"] = boost::any(*instanceRequiredMemory);
    }
    if (instanceClassCode) {
      res["InstanceClassCode"] = boost::any(*instanceClassCode);
    }
    if (availableHostNum) {
      res["AvailableHostNum"] = boost::any(*availableHostNum);
    }
    if (instanceRequiredStorage) {
      res["InstanceRequiredStorage"] = boost::any(*instanceRequiredStorage);
    }
    if (diskOverAllocationRatio) {
      res["DiskOverAllocationRatio"] = boost::any(*diskOverAllocationRatio);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceRequiredCPU") != m.end() && !m["InstanceRequiredCPU"].empty()) {
      instanceRequiredCPU = make_shared<long>(boost::any_cast<long>(m["InstanceRequiredCPU"]));
    }
    if (m.find("CpuOverAllocationRatio") != m.end() && !m["CpuOverAllocationRatio"].empty()) {
      cpuOverAllocationRatio = make_shared<long>(boost::any_cast<long>(m["CpuOverAllocationRatio"]));
    }
    if (m.find("MemoryOverAllocationRatio") != m.end() && !m["MemoryOverAllocationRatio"].empty()) {
      memoryOverAllocationRatio = make_shared<long>(boost::any_cast<long>(m["MemoryOverAllocationRatio"]));
    }
    if (m.find("InstanceRequiredMemory") != m.end() && !m["InstanceRequiredMemory"].empty()) {
      instanceRequiredMemory = make_shared<long>(boost::any_cast<long>(m["InstanceRequiredMemory"]));
    }
    if (m.find("InstanceClassCode") != m.end() && !m["InstanceClassCode"].empty()) {
      instanceClassCode = make_shared<string>(boost::any_cast<string>(m["InstanceClassCode"]));
    }
    if (m.find("AvailableHostNum") != m.end() && !m["AvailableHostNum"].empty()) {
      availableHostNum = make_shared<long>(boost::any_cast<long>(m["AvailableHostNum"]));
    }
    if (m.find("InstanceRequiredStorage") != m.end() && !m["InstanceRequiredStorage"].empty()) {
      instanceRequiredStorage = make_shared<long>(boost::any_cast<long>(m["InstanceRequiredStorage"]));
    }
    if (m.find("DiskOverAllocationRatio") != m.end() && !m["DiskOverAllocationRatio"].empty()) {
      diskOverAllocationRatio = make_shared<long>(boost::any_cast<long>(m["DiskOverAllocationRatio"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("DedicatedHosts") != m.end() && !m["DedicatedHosts"].empty()) {
      if (typeid(vector<boost::any>) == m["DedicatedHosts"].type()) {
        vector<DescribeEvaluateDedicatedHostsForInstanceResponseBodyDedicatedHosts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DedicatedHosts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEvaluateDedicatedHostsForInstanceResponseBodyDedicatedHosts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dedicatedHosts = make_shared<vector<DescribeEvaluateDedicatedHostsForInstanceResponseBodyDedicatedHosts>>(expect1);
      }
    }
  }


  virtual ~DescribeEvaluateDedicatedHostsForInstanceResponseBody() = default;
};
class DescribeEvaluateDedicatedHostsForInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeEvaluateDedicatedHostsForInstanceResponseBody> body{};

  DescribeEvaluateDedicatedHostsForInstanceResponse() {}

  explicit DescribeEvaluateDedicatedHostsForInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeEvaluateDedicatedHostsForInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEvaluateDedicatedHostsForInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEvaluateDedicatedHostsForInstanceResponse() = default;
};
class RestartDedicatedHostRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> failoverMode{};
  shared_ptr<bool> forceStop{};

  RestartDedicatedHostRequest() {}

  explicit RestartDedicatedHostRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (failoverMode) {
      res["FailoverMode"] = boost::any(*failoverMode);
    }
    if (forceStop) {
      res["ForceStop"] = boost::any(*forceStop);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("FailoverMode") != m.end() && !m["FailoverMode"].empty()) {
      failoverMode = make_shared<string>(boost::any_cast<string>(m["FailoverMode"]));
    }
    if (m.find("ForceStop") != m.end() && !m["ForceStop"].empty()) {
      forceStop = make_shared<bool>(boost::any_cast<bool>(m["ForceStop"]));
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
  shared_ptr<RestartDedicatedHostResponseBody> body{};

  RestartDedicatedHostResponse() {}

  explicit RestartDedicatedHostResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeDedicatedHostHealthRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> regionId{};

  DescribeDedicatedHostHealthRequest() {}

  explicit DescribeDedicatedHostHealthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
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
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDedicatedHostHealthRequest() = default;
};
class DescribeDedicatedHostHealthResponseBodyHostEventsHostEvents : public Darabonba::Model {
public:
  shared_ptr<string> eventName{};
  shared_ptr<string> eventTime{};
  shared_ptr<string> eventType{};
  shared_ptr<string> eventDescription{};

  DescribeDedicatedHostHealthResponseBodyHostEventsHostEvents() {}

  explicit DescribeDedicatedHostHealthResponseBodyHostEventsHostEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (eventDescription) {
      res["EventDescription"] = boost::any(*eventDescription);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<string>(boost::any_cast<string>(m["EventTime"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("EventDescription") != m.end() && !m["EventDescription"].empty()) {
      eventDescription = make_shared<string>(boost::any_cast<string>(m["EventDescription"]));
    }
  }


  virtual ~DescribeDedicatedHostHealthResponseBodyHostEventsHostEvents() = default;
};
class DescribeDedicatedHostHealthResponseBodyHostEvents : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDedicatedHostHealthResponseBodyHostEventsHostEvents>> hostEvents{};

  DescribeDedicatedHostHealthResponseBodyHostEvents() {}

  explicit DescribeDedicatedHostHealthResponseBodyHostEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostEvents) {
      vector<boost::any> temp1;
      for(auto item1:*hostEvents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HostEvents"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostEvents") != m.end() && !m["HostEvents"].empty()) {
      if (typeid(vector<boost::any>) == m["HostEvents"].type()) {
        vector<DescribeDedicatedHostHealthResponseBodyHostEventsHostEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HostEvents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDedicatedHostHealthResponseBodyHostEventsHostEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hostEvents = make_shared<vector<DescribeDedicatedHostHealthResponseBodyHostEventsHostEvents>>(expect1);
      }
    }
  }


  virtual ~DescribeDedicatedHostHealthResponseBodyHostEvents() = default;
};
class DescribeDedicatedHostHealthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<map<string, boost::any>> resourceEvent{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> healthStatus{};
  shared_ptr<DescribeDedicatedHostHealthResponseBodyHostEvents> hostEvents{};

  DescribeDedicatedHostHealthResponseBody() {}

  explicit DescribeDedicatedHostHealthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (resourceEvent) {
      res["ResourceEvent"] = boost::any(*resourceEvent);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (healthStatus) {
      res["HealthStatus"] = boost::any(*healthStatus);
    }
    if (hostEvents) {
      res["HostEvents"] = hostEvents ? boost::any(hostEvents->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("ResourceEvent") != m.end() && !m["ResourceEvent"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ResourceEvent"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceEvent = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("HealthStatus") != m.end() && !m["HealthStatus"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["HealthStatus"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      healthStatus = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("HostEvents") != m.end() && !m["HostEvents"].empty()) {
      if (typeid(map<string, boost::any>) == m["HostEvents"].type()) {
        DescribeDedicatedHostHealthResponseBodyHostEvents model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HostEvents"]));
        hostEvents = make_shared<DescribeDedicatedHostHealthResponseBodyHostEvents>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedHostHealthResponseBody() = default;
};
class DescribeDedicatedHostHealthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDedicatedHostHealthResponseBody> body{};

  DescribeDedicatedHostHealthResponse() {}

  explicit DescribeDedicatedHostHealthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDedicatedHostHealthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDedicatedHostHealthResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDedicatedHostHealthResponse() = default;
};
class DescribeHostWebShellRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeHostWebShellRequest() {}

  explicit DescribeHostWebShellRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  shared_ptr<DescribeHostWebShellResponseBody> body{};

  DescribeHostWebShellResponse() {}

  explicit DescribeHostWebShellResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeDedicatedHostAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> dedicatedHostGroupId{};

  DescribeDedicatedHostAttributeRequest() {}

  explicit DescribeDedicatedHostAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
  }


  virtual ~DescribeDedicatedHostAttributeRequest() = default;
};
class DescribeDedicatedHostAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> hostType{};
  shared_ptr<long> hostStorage{};
  shared_ptr<long> instanceNumberROSlave{};
  shared_ptr<string> accountType{};
  shared_ptr<string> memoryUsed{};
  shared_ptr<string> dedicatedHostGroupId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> instanceNumberROMaster{};
  shared_ptr<string> allocationStatus{};
  shared_ptr<string> storageUsed{};
  shared_ptr<string> ecsClassCode{};
  shared_ptr<string> dedicatedHostId{};
  shared_ptr<string> memAllocationRatio{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> IPAddress{};
  shared_ptr<string> autoRenew{};
  shared_ptr<string> hostStatus{};
  shared_ptr<string> hostName{};
  shared_ptr<long> hostCPU{};
  shared_ptr<string> openPermission{};
  shared_ptr<long> instanceNumber{};
  shared_ptr<string> cpuUsed{};
  shared_ptr<string> VPCId{};
  shared_ptr<string> hostClass{};
  shared_ptr<string> regionId{};
  shared_ptr<long> instanceNumberMaster{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<long> instanceNumberSlave{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> zoneId{};
  shared_ptr<string> CPUAllocationRatio{};
  shared_ptr<string> imageCategory{};
  shared_ptr<string> diskAllocationRatio{};
  shared_ptr<long> hostMem{};
  shared_ptr<string> accountName{};

  DescribeDedicatedHostAttributeResponseBody() {}

  explicit DescribeDedicatedHostAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostType) {
      res["HostType"] = boost::any(*hostType);
    }
    if (hostStorage) {
      res["HostStorage"] = boost::any(*hostStorage);
    }
    if (instanceNumberROSlave) {
      res["InstanceNumberROSlave"] = boost::any(*instanceNumberROSlave);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (memoryUsed) {
      res["MemoryUsed"] = boost::any(*memoryUsed);
    }
    if (dedicatedHostGroupId) {
      res["DedicatedHostGroupId"] = boost::any(*dedicatedHostGroupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceNumberROMaster) {
      res["InstanceNumberROMaster"] = boost::any(*instanceNumberROMaster);
    }
    if (allocationStatus) {
      res["AllocationStatus"] = boost::any(*allocationStatus);
    }
    if (storageUsed) {
      res["StorageUsed"] = boost::any(*storageUsed);
    }
    if (ecsClassCode) {
      res["EcsClassCode"] = boost::any(*ecsClassCode);
    }
    if (dedicatedHostId) {
      res["DedicatedHostId"] = boost::any(*dedicatedHostId);
    }
    if (memAllocationRatio) {
      res["MemAllocationRatio"] = boost::any(*memAllocationRatio);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (IPAddress) {
      res["IPAddress"] = boost::any(*IPAddress);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (hostStatus) {
      res["HostStatus"] = boost::any(*hostStatus);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (hostCPU) {
      res["HostCPU"] = boost::any(*hostCPU);
    }
    if (openPermission) {
      res["OpenPermission"] = boost::any(*openPermission);
    }
    if (instanceNumber) {
      res["InstanceNumber"] = boost::any(*instanceNumber);
    }
    if (cpuUsed) {
      res["CpuUsed"] = boost::any(*cpuUsed);
    }
    if (VPCId) {
      res["VPCId"] = boost::any(*VPCId);
    }
    if (hostClass) {
      res["HostClass"] = boost::any(*hostClass);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (instanceNumberMaster) {
      res["InstanceNumberMaster"] = boost::any(*instanceNumberMaster);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (instanceNumberSlave) {
      res["InstanceNumberSlave"] = boost::any(*instanceNumberSlave);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    if (CPUAllocationRatio) {
      res["CPUAllocationRatio"] = boost::any(*CPUAllocationRatio);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (diskAllocationRatio) {
      res["DiskAllocationRatio"] = boost::any(*diskAllocationRatio);
    }
    if (hostMem) {
      res["HostMem"] = boost::any(*hostMem);
    }
    if (accountName) {
      res["AccountName"] = boost::any(*accountName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostType") != m.end() && !m["HostType"].empty()) {
      hostType = make_shared<string>(boost::any_cast<string>(m["HostType"]));
    }
    if (m.find("HostStorage") != m.end() && !m["HostStorage"].empty()) {
      hostStorage = make_shared<long>(boost::any_cast<long>(m["HostStorage"]));
    }
    if (m.find("InstanceNumberROSlave") != m.end() && !m["InstanceNumberROSlave"].empty()) {
      instanceNumberROSlave = make_shared<long>(boost::any_cast<long>(m["InstanceNumberROSlave"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("MemoryUsed") != m.end() && !m["MemoryUsed"].empty()) {
      memoryUsed = make_shared<string>(boost::any_cast<string>(m["MemoryUsed"]));
    }
    if (m.find("DedicatedHostGroupId") != m.end() && !m["DedicatedHostGroupId"].empty()) {
      dedicatedHostGroupId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostGroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceNumberROMaster") != m.end() && !m["InstanceNumberROMaster"].empty()) {
      instanceNumberROMaster = make_shared<long>(boost::any_cast<long>(m["InstanceNumberROMaster"]));
    }
    if (m.find("AllocationStatus") != m.end() && !m["AllocationStatus"].empty()) {
      allocationStatus = make_shared<string>(boost::any_cast<string>(m["AllocationStatus"]));
    }
    if (m.find("StorageUsed") != m.end() && !m["StorageUsed"].empty()) {
      storageUsed = make_shared<string>(boost::any_cast<string>(m["StorageUsed"]));
    }
    if (m.find("EcsClassCode") != m.end() && !m["EcsClassCode"].empty()) {
      ecsClassCode = make_shared<string>(boost::any_cast<string>(m["EcsClassCode"]));
    }
    if (m.find("DedicatedHostId") != m.end() && !m["DedicatedHostId"].empty()) {
      dedicatedHostId = make_shared<string>(boost::any_cast<string>(m["DedicatedHostId"]));
    }
    if (m.find("MemAllocationRatio") != m.end() && !m["MemAllocationRatio"].empty()) {
      memAllocationRatio = make_shared<string>(boost::any_cast<string>(m["MemAllocationRatio"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("IPAddress") != m.end() && !m["IPAddress"].empty()) {
      IPAddress = make_shared<string>(boost::any_cast<string>(m["IPAddress"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("HostStatus") != m.end() && !m["HostStatus"].empty()) {
      hostStatus = make_shared<string>(boost::any_cast<string>(m["HostStatus"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("HostCPU") != m.end() && !m["HostCPU"].empty()) {
      hostCPU = make_shared<long>(boost::any_cast<long>(m["HostCPU"]));
    }
    if (m.find("OpenPermission") != m.end() && !m["OpenPermission"].empty()) {
      openPermission = make_shared<string>(boost::any_cast<string>(m["OpenPermission"]));
    }
    if (m.find("InstanceNumber") != m.end() && !m["InstanceNumber"].empty()) {
      instanceNumber = make_shared<long>(boost::any_cast<long>(m["InstanceNumber"]));
    }
    if (m.find("CpuUsed") != m.end() && !m["CpuUsed"].empty()) {
      cpuUsed = make_shared<string>(boost::any_cast<string>(m["CpuUsed"]));
    }
    if (m.find("VPCId") != m.end() && !m["VPCId"].empty()) {
      VPCId = make_shared<string>(boost::any_cast<string>(m["VPCId"]));
    }
    if (m.find("HostClass") != m.end() && !m["HostClass"].empty()) {
      hostClass = make_shared<string>(boost::any_cast<string>(m["HostClass"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("InstanceNumberMaster") != m.end() && !m["InstanceNumberMaster"].empty()) {
      instanceNumberMaster = make_shared<long>(boost::any_cast<long>(m["InstanceNumberMaster"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("InstanceNumberSlave") != m.end() && !m["InstanceNumberSlave"].empty()) {
      instanceNumberSlave = make_shared<long>(boost::any_cast<long>(m["InstanceNumberSlave"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
    if (m.find("CPUAllocationRatio") != m.end() && !m["CPUAllocationRatio"].empty()) {
      CPUAllocationRatio = make_shared<string>(boost::any_cast<string>(m["CPUAllocationRatio"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("DiskAllocationRatio") != m.end() && !m["DiskAllocationRatio"].empty()) {
      diskAllocationRatio = make_shared<string>(boost::any_cast<string>(m["DiskAllocationRatio"]));
    }
    if (m.find("HostMem") != m.end() && !m["HostMem"].empty()) {
      hostMem = make_shared<long>(boost::any_cast<long>(m["HostMem"]));
    }
    if (m.find("AccountName") != m.end() && !m["AccountName"].empty()) {
      accountName = make_shared<string>(boost::any_cast<string>(m["AccountName"]));
    }
  }


  virtual ~DescribeDedicatedHostAttributeResponseBody() = default;
};
class DescribeDedicatedHostAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDedicatedHostAttributeResponseBody> body{};

  DescribeDedicatedHostAttributeResponse() {}

  explicit DescribeDedicatedHostAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  ModifyDBInstanceSwitchWeightResponse modifyDBInstanceSwitchWeightWithOptions(shared_ptr<ModifyDBInstanceSwitchWeightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDBInstanceSwitchWeightResponse modifyDBInstanceSwitchWeight(shared_ptr<ModifyDBInstanceSwitchWeightRequest> request);
  DescribeAvailableDedicatedHostZonesResponse describeAvailableDedicatedHostZonesWithOptions(shared_ptr<DescribeAvailableDedicatedHostZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableDedicatedHostZonesResponse describeAvailableDedicatedHostZones(shared_ptr<DescribeAvailableDedicatedHostZonesRequest> request);
  DescribeDedicatedHostGroupsResponse describeDedicatedHostGroupsWithOptions(shared_ptr<DescribeDedicatedHostGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedHostGroupsResponse describeDedicatedHostGroups(shared_ptr<DescribeDedicatedHostGroupsRequest> request);
  DescribeMyBaseHostOverViewResponse describeMyBaseHostOverViewWithOptions(shared_ptr<DescribeMyBaseHostOverViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMyBaseHostOverViewResponse describeMyBaseHostOverView(shared_ptr<DescribeMyBaseHostOverViewRequest> request);
  DescribeBriefDedicatedHostsResponse describeBriefDedicatedHostsWithOptions(shared_ptr<DescribeBriefDedicatedHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBriefDedicatedHostsResponse describeBriefDedicatedHosts(shared_ptr<DescribeBriefDedicatedHostsRequest> request);
  DescribeDedicatedResourceAdvisorResponse describeDedicatedResourceAdvisorWithOptions(shared_ptr<DescribeDedicatedResourceAdvisorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedResourceAdvisorResponse describeDedicatedResourceAdvisor(shared_ptr<DescribeDedicatedResourceAdvisorRequest> request);
  DescribeListUserBackupFileRecordResponse describeListUserBackupFileRecordWithOptions(shared_ptr<DescribeListUserBackupFileRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeListUserBackupFileRecordResponse describeListUserBackupFileRecord(shared_ptr<DescribeListUserBackupFileRecordRequest> request);
  CreateDedicatedHostAccountResponse createDedicatedHostAccountWithOptions(shared_ptr<CreateDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDedicatedHostAccountResponse createDedicatedHostAccount(shared_ptr<CreateDedicatedHostAccountRequest> request);
  DeleteDedicatedHostAccountResponse deleteDedicatedHostAccountWithOptions(shared_ptr<DeleteDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDedicatedHostAccountResponse deleteDedicatedHostAccount(shared_ptr<DeleteDedicatedHostAccountRequest> request);
  DeleteDedicatedHostGroupResponse deleteDedicatedHostGroupWithOptions(shared_ptr<DeleteDedicatedHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDedicatedHostGroupResponse deleteDedicatedHostGroup(shared_ptr<DeleteDedicatedHostGroupRequest> request);
  CheckUserIfAuthoriseMyBaseSystemRoleResponse checkUserIfAuthoriseMyBaseSystemRoleWithOptions(shared_ptr<CheckUserIfAuthoriseMyBaseSystemRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckUserIfAuthoriseMyBaseSystemRoleResponse checkUserIfAuthoriseMyBaseSystemRole(shared_ptr<CheckUserIfAuthoriseMyBaseSystemRoleRequest> request);
  DescribeScheduleInstanceResponse describeScheduleInstanceWithOptions(shared_ptr<DescribeScheduleInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScheduleInstanceResponse describeScheduleInstance(shared_ptr<DescribeScheduleInstanceRequest> request);
  ExcuteScheduleResponse excuteScheduleWithOptions(shared_ptr<ExcuteScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExcuteScheduleResponse excuteSchedule(shared_ptr<ExcuteScheduleRequest> request);
  ReplaceDedicatedHostResponse replaceDedicatedHostWithOptions(shared_ptr<ReplaceDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReplaceDedicatedHostResponse replaceDedicatedHost(shared_ptr<ReplaceDedicatedHostRequest> request);
  ModifyDedicatedHostAccountResponse modifyDedicatedHostAccountWithOptions(shared_ptr<ModifyDedicatedHostAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDedicatedHostAccountResponse modifyDedicatedHostAccount(shared_ptr<ModifyDedicatedHostAccountRequest> request);
  DescribeHostEcsLevelInfoResponse describeHostEcsLevelInfoWithOptions(shared_ptr<DescribeHostEcsLevelInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHostEcsLevelInfoResponse describeHostEcsLevelInfo(shared_ptr<DescribeHostEcsLevelInfoRequest> request);
  AllocateHostInstanceCrossVpcVipResponse allocateHostInstanceCrossVpcVipWithOptions(shared_ptr<AllocateHostInstanceCrossVpcVipRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllocateHostInstanceCrossVpcVipResponse allocateHostInstanceCrossVpcVip(shared_ptr<AllocateHostInstanceCrossVpcVipRequest> request);
  DescribeDedicatedHostsResponse describeDedicatedHostsWithOptions(shared_ptr<DescribeDedicatedHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedHostsResponse describeDedicatedHosts(shared_ptr<DescribeDedicatedHostsRequest> request);
  DescribeDedicatedHostDisksResponse describeDedicatedHostDisksWithOptions(shared_ptr<DescribeDedicatedHostDisksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedHostDisksResponse describeDedicatedHostDisks(shared_ptr<DescribeDedicatedHostDisksRequest> request);
  DescribeMyBaseInstanceOverViewResponse describeMyBaseInstanceOverViewWithOptions(shared_ptr<DescribeMyBaseInstanceOverViewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMyBaseInstanceOverViewResponse describeMyBaseInstanceOverView(shared_ptr<DescribeMyBaseInstanceOverViewRequest> request);
  ModifyScheduleMethodResponse modifyScheduleMethodWithOptions(shared_ptr<ModifyScheduleMethodRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyScheduleMethodResponse modifyScheduleMethod(shared_ptr<ModifyScheduleMethodRequest> request);
  DescribeAvailableDedicatedHostClassesResponse describeAvailableDedicatedHostClassesWithOptions(shared_ptr<DescribeAvailableDedicatedHostClassesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableDedicatedHostClassesResponse describeAvailableDedicatedHostClasses(shared_ptr<DescribeAvailableDedicatedHostClassesRequest> request);
  DescribeCheckUserBackupFileResponse describeCheckUserBackupFileWithOptions(shared_ptr<DescribeCheckUserBackupFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCheckUserBackupFileResponse describeCheckUserBackupFile(shared_ptr<DescribeCheckUserBackupFileRequest> request);
  ModifyDedicatedHostPasswordResponse modifyDedicatedHostPasswordWithOptions(shared_ptr<ModifyDedicatedHostPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDedicatedHostPasswordResponse modifyDedicatedHostPassword(shared_ptr<ModifyDedicatedHostPasswordRequest> request);
  DescribeScheduleMethodsResponse describeScheduleMethodsWithOptions(shared_ptr<DescribeScheduleMethodsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScheduleMethodsResponse describeScheduleMethods(shared_ptr<DescribeScheduleMethodsRequest> request);
  ClearDedicatedHostResponse clearDedicatedHostWithOptions(shared_ptr<ClearDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClearDedicatedHostResponse clearDedicatedHost(shared_ptr<ClearDedicatedHostRequest> request);
  DeleteUserBackupFileRecordResponse deleteUserBackupFileRecordWithOptions(shared_ptr<DeleteUserBackupFileRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserBackupFileRecordResponse deleteUserBackupFileRecord(shared_ptr<DeleteUserBackupFileRecordRequest> request);
  DescribeEvaluateDedicatedHostsResponse describeEvaluateDedicatedHostsWithOptions(shared_ptr<DescribeEvaluateDedicatedHostsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEvaluateDedicatedHostsResponse describeEvaluateDedicatedHosts(shared_ptr<DescribeEvaluateDedicatedHostsRequest> request);
  DescribeHostInstanceMonitorInfoResponse describeHostInstanceMonitorInfoWithOptions(shared_ptr<DescribeHostInstanceMonitorInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHostInstanceMonitorInfoResponse describeHostInstanceMonitorInfo(shared_ptr<DescribeHostInstanceMonitorInfoRequest> request);
  DescribeDedicatedHostMetricResponse describeDedicatedHostMetricWithOptions(shared_ptr<DescribeDedicatedHostMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedHostMetricResponse describeDedicatedHostMetric(shared_ptr<DescribeDedicatedHostMetricRequest> request);
  CreateDedicatedHostResponse createDedicatedHostWithOptions(shared_ptr<CreateDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDedicatedHostResponse createDedicatedHost(shared_ptr<CreateDedicatedHostRequest> request);
  DescribeDedicatedInstanceMetricResponse describeDedicatedInstanceMetricWithOptions(shared_ptr<DescribeDedicatedInstanceMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedInstanceMetricResponse describeDedicatedInstanceMetric(shared_ptr<DescribeDedicatedInstanceMetricRequest> request);
  DescribeCrossVpcInstanceResponse describeCrossVpcInstanceWithOptions(shared_ptr<DescribeCrossVpcInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCrossVpcInstanceResponse describeCrossVpcInstance(shared_ptr<DescribeCrossVpcInstanceRequest> request);
  ModifyDedicatedHostClassResponse modifyDedicatedHostClassWithOptions(shared_ptr<ModifyDedicatedHostClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDedicatedHostClassResponse modifyDedicatedHostClass(shared_ptr<ModifyDedicatedHostClassRequest> request);
  DescribeDedicatedHostsCheckInBastionResponse describeDedicatedHostsCheckInBastionWithOptions(shared_ptr<DescribeDedicatedHostsCheckInBastionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedHostsCheckInBastionResponse describeDedicatedHostsCheckInBastion(shared_ptr<DescribeDedicatedHostsCheckInBastionRequest> request);
  DropDedicatedHostUserResponse dropDedicatedHostUserWithOptions(shared_ptr<DropDedicatedHostUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DropDedicatedHostUserResponse dropDedicatedHostUser(shared_ptr<DropDedicatedHostUserRequest> request);
  DescribeDedicatedHostsInBastionResponse describeDedicatedHostsInBastionWithOptions(shared_ptr<DescribeDedicatedHostsInBastionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedHostsInBastionResponse describeDedicatedHostsInBastion(shared_ptr<DescribeDedicatedHostsInBastionRequest> request);
  ModifyDedicatedHostGroupAttributeResponse modifyDedicatedHostGroupAttributeWithOptions(shared_ptr<ModifyDedicatedHostGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDedicatedHostGroupAttributeResponse modifyDedicatedHostGroupAttribute(shared_ptr<ModifyDedicatedHostGroupAttributeRequest> request);
  QueryHostInstanceConsoleInfoResponse queryHostInstanceConsoleInfoWithOptions(shared_ptr<QueryHostInstanceConsoleInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHostInstanceConsoleInfoResponse queryHostInstanceConsoleInfo(shared_ptr<QueryHostInstanceConsoleInfoRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  QueryHostBaseInfoByInstanceResponse queryHostBaseInfoByInstanceWithOptions(shared_ptr<QueryHostBaseInfoByInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHostBaseInfoByInstanceResponse queryHostBaseInfoByInstance(shared_ptr<QueryHostBaseInfoByInstanceRequest> request);
  DescribeDedicatedInstanceDistributionResponse describeDedicatedInstanceDistributionWithOptions(shared_ptr<DescribeDedicatedInstanceDistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedInstanceDistributionResponse describeDedicatedInstanceDistribution(shared_ptr<DescribeDedicatedInstanceDistributionRequest> request);
  DescribeScheduleHostResponse describeScheduleHostWithOptions(shared_ptr<DescribeScheduleHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScheduleHostResponse describeScheduleHost(shared_ptr<DescribeScheduleHostRequest> request);
  ModifyDedicatedHostAttributeResponse modifyDedicatedHostAttributeWithOptions(shared_ptr<ModifyDedicatedHostAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDedicatedHostAttributeResponse modifyDedicatedHostAttribute(shared_ptr<ModifyDedicatedHostAttributeRequest> request);
  CreateDedicatedHostGroupResponse createDedicatedHostGroupWithOptions(shared_ptr<CreateDedicatedHostGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDedicatedHostGroupResponse createDedicatedHostGroup(shared_ptr<CreateDedicatedHostGroupRequest> request);
  AddHostsToBastionResponse addHostsToBastionWithOptions(shared_ptr<AddHostsToBastionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddHostsToBastionResponse addHostsToBastion(shared_ptr<AddHostsToBastionRequest> request);
  AttachHostsToBastionUserResponse attachHostsToBastionUserWithOptions(shared_ptr<AttachHostsToBastionUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachHostsToBastionUserResponse attachHostsToBastionUser(shared_ptr<AttachHostsToBastionUserRequest> request);
  DescribeEvaluateDedicatedHostsForInstanceResponse describeEvaluateDedicatedHostsForInstanceWithOptions(shared_ptr<DescribeEvaluateDedicatedHostsForInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEvaluateDedicatedHostsForInstanceResponse describeEvaluateDedicatedHostsForInstance(shared_ptr<DescribeEvaluateDedicatedHostsForInstanceRequest> request);
  RestartDedicatedHostResponse restartDedicatedHostWithOptions(shared_ptr<RestartDedicatedHostRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartDedicatedHostResponse restartDedicatedHost(shared_ptr<RestartDedicatedHostRequest> request);
  DescribeDedicatedHostHealthResponse describeDedicatedHostHealthWithOptions(shared_ptr<DescribeDedicatedHostHealthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedHostHealthResponse describeDedicatedHostHealth(shared_ptr<DescribeDedicatedHostHealthRequest> request);
  DescribeHostWebShellResponse describeHostWebShellWithOptions(shared_ptr<DescribeHostWebShellRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHostWebShellResponse describeHostWebShell(shared_ptr<DescribeHostWebShellRequest> request);
  DescribeDedicatedHostAttributeResponse describeDedicatedHostAttributeWithOptions(shared_ptr<DescribeDedicatedHostAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDedicatedHostAttributeResponse describeDedicatedHostAttribute(shared_ptr<DescribeDedicatedHostAttributeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cddc20200320

#endif
