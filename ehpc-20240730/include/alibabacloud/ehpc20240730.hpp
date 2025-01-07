// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EHPC20240730_H_
#define ALIBABACLOUD_EHPC20240730_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_EHPC20240730 {
class AddonNodeTemplateDataDisks : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<bool> deleteWithInstance{};
  shared_ptr<string> level{};
  shared_ptr<long> size{};

  AddonNodeTemplateDataDisks() {}

  explicit AddonNodeTemplateDataDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (deleteWithInstance) {
      res["DeleteWithInstance"] = boost::any(*deleteWithInstance);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("DeleteWithInstance") != m.end() && !m["DeleteWithInstance"].empty()) {
      deleteWithInstance = make_shared<bool>(boost::any_cast<bool>(m["DeleteWithInstance"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~AddonNodeTemplateDataDisks() = default;
};
class AddonNodeTemplateSystemDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> level{};
  shared_ptr<long> size{};

  AddonNodeTemplateSystemDisk() {}

  explicit AddonNodeTemplateSystemDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~AddonNodeTemplateSystemDisk() = default;
};
class AddonNodeTemplate : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<vector<AddonNodeTemplateDataDisks>> dataDisks{};
  shared_ptr<long> duration{};
  shared_ptr<bool> enableHT{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> osName{};
  shared_ptr<string> osNameEN{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<double> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<AddonNodeTemplateSystemDisk> systemDisk{};

  AddonNodeTemplate() {}

  explicit AddonNodeTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewPeriod) {
      res["AutoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (dataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisks"] = boost::any(temp1);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (enableHT) {
      res["EnableHT"] = boost::any(*enableHT);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (osName) {
      res["OsName"] = boost::any(*osName);
    }
    if (osNameEN) {
      res["OsNameEN"] = boost::any(*osNameEN);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (systemDisk) {
      res["SystemDisk"] = systemDisk ? boost::any(systemDisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewPeriod") != m.end() && !m["AutoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["AutoRenewPeriod"]));
    }
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisks"].type()) {
        vector<AddonNodeTemplateDataDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddonNodeTemplateDataDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisks = make_shared<vector<AddonNodeTemplateDataDisks>>(expect1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EnableHT") != m.end() && !m["EnableHT"].empty()) {
      enableHT = make_shared<bool>(boost::any_cast<bool>(m["EnableHT"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OsName") != m.end() && !m["OsName"].empty()) {
      osName = make_shared<string>(boost::any_cast<string>(m["OsName"]));
    }
    if (m.find("OsNameEN") != m.end() && !m["OsNameEN"].empty()) {
      osNameEN = make_shared<string>(boost::any_cast<string>(m["OsNameEN"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDisk"].type()) {
        AddonNodeTemplateSystemDisk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDisk"]));
        systemDisk = make_shared<AddonNodeTemplateSystemDisk>(model1);
      }
    }
  }


  virtual ~AddonNodeTemplate() = default;
};
class NodeTemplateDataDisks : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<bool> deleteWithInstance{};
  shared_ptr<string> device{};
  shared_ptr<string> level{};
  shared_ptr<string> mountDir{};
  shared_ptr<long> size{};
  shared_ptr<string> snapshotId{};

  NodeTemplateDataDisks() {}

  explicit NodeTemplateDataDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (deleteWithInstance) {
      res["DeleteWithInstance"] = boost::any(*deleteWithInstance);
    }
    if (device) {
      res["Device"] = boost::any(*device);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (mountDir) {
      res["MountDir"] = boost::any(*mountDir);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("DeleteWithInstance") != m.end() && !m["DeleteWithInstance"].empty()) {
      deleteWithInstance = make_shared<bool>(boost::any_cast<bool>(m["DeleteWithInstance"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("MountDir") != m.end() && !m["MountDir"].empty()) {
      mountDir = make_shared<string>(boost::any_cast<string>(m["MountDir"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~NodeTemplateDataDisks() = default;
};
class NodeTemplateSystemDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> level{};
  shared_ptr<long> size{};

  NodeTemplateSystemDisk() {}

  explicit NodeTemplateSystemDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~NodeTemplateSystemDisk() = default;
};
class NodeTemplate : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<vector<NodeTemplateDataDisks>> dataDisks{};
  shared_ptr<long> duration{};
  shared_ptr<bool> enableHT{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<double> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<NodeTemplateSystemDisk> systemDisk{};

  NodeTemplate() {}

  explicit NodeTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewPeriod) {
      res["AutoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (dataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisks"] = boost::any(temp1);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (enableHT) {
      res["EnableHT"] = boost::any(*enableHT);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (systemDisk) {
      res["SystemDisk"] = systemDisk ? boost::any(systemDisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewPeriod") != m.end() && !m["AutoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["AutoRenewPeriod"]));
    }
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisks"].type()) {
        vector<NodeTemplateDataDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NodeTemplateDataDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisks = make_shared<vector<NodeTemplateDataDisks>>(expect1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EnableHT") != m.end() && !m["EnableHT"].empty()) {
      enableHT = make_shared<bool>(boost::any_cast<bool>(m["EnableHT"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDisk"].type()) {
        NodeTemplateSystemDisk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDisk"]));
        systemDisk = make_shared<NodeTemplateSystemDisk>(model1);
      }
    }
  }


  virtual ~NodeTemplate() = default;
};
class QueueTemplate : public Darabonba::Model {
public:
  shared_ptr<string> allocationStrategy{};
  shared_ptr<vector<NodeTemplate>> computeNodes{};
  shared_ptr<bool> enableScaleIn{};
  shared_ptr<bool> enableScaleOut{};
  shared_ptr<string> hostnamePrefix{};
  shared_ptr<string> hostnameSuffix{};
  shared_ptr<long> initialCount{};
  shared_ptr<string> interConnect{};
  shared_ptr<vector<string>> keepAliveNodes{};
  shared_ptr<long> maxCount{};
  shared_ptr<long> maxCountPerCycle{};
  shared_ptr<long> minCount{};
  shared_ptr<string> queueName{};
  shared_ptr<string> ramRole{};
  shared_ptr<vector<string>> vSwitchIds{};

  QueueTemplate() {}

  explicit QueueTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationStrategy) {
      res["AllocationStrategy"] = boost::any(*allocationStrategy);
    }
    if (computeNodes) {
      vector<boost::any> temp1;
      for(auto item1:*computeNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComputeNodes"] = boost::any(temp1);
    }
    if (enableScaleIn) {
      res["EnableScaleIn"] = boost::any(*enableScaleIn);
    }
    if (enableScaleOut) {
      res["EnableScaleOut"] = boost::any(*enableScaleOut);
    }
    if (hostnamePrefix) {
      res["HostnamePrefix"] = boost::any(*hostnamePrefix);
    }
    if (hostnameSuffix) {
      res["HostnameSuffix"] = boost::any(*hostnameSuffix);
    }
    if (initialCount) {
      res["InitialCount"] = boost::any(*initialCount);
    }
    if (interConnect) {
      res["InterConnect"] = boost::any(*interConnect);
    }
    if (keepAliveNodes) {
      res["KeepAliveNodes"] = boost::any(*keepAliveNodes);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (maxCountPerCycle) {
      res["MaxCountPerCycle"] = boost::any(*maxCountPerCycle);
    }
    if (minCount) {
      res["MinCount"] = boost::any(*minCount);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (ramRole) {
      res["RamRole"] = boost::any(*ramRole);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationStrategy") != m.end() && !m["AllocationStrategy"].empty()) {
      allocationStrategy = make_shared<string>(boost::any_cast<string>(m["AllocationStrategy"]));
    }
    if (m.find("ComputeNodes") != m.end() && !m["ComputeNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ComputeNodes"].type()) {
        vector<NodeTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComputeNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NodeTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        computeNodes = make_shared<vector<NodeTemplate>>(expect1);
      }
    }
    if (m.find("EnableScaleIn") != m.end() && !m["EnableScaleIn"].empty()) {
      enableScaleIn = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleIn"]));
    }
    if (m.find("EnableScaleOut") != m.end() && !m["EnableScaleOut"].empty()) {
      enableScaleOut = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleOut"]));
    }
    if (m.find("HostnamePrefix") != m.end() && !m["HostnamePrefix"].empty()) {
      hostnamePrefix = make_shared<string>(boost::any_cast<string>(m["HostnamePrefix"]));
    }
    if (m.find("HostnameSuffix") != m.end() && !m["HostnameSuffix"].empty()) {
      hostnameSuffix = make_shared<string>(boost::any_cast<string>(m["HostnameSuffix"]));
    }
    if (m.find("InitialCount") != m.end() && !m["InitialCount"].empty()) {
      initialCount = make_shared<long>(boost::any_cast<long>(m["InitialCount"]));
    }
    if (m.find("InterConnect") != m.end() && !m["InterConnect"].empty()) {
      interConnect = make_shared<string>(boost::any_cast<string>(m["InterConnect"]));
    }
    if (m.find("KeepAliveNodes") != m.end() && !m["KeepAliveNodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeepAliveNodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeepAliveNodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keepAliveNodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<long>(boost::any_cast<long>(m["MaxCount"]));
    }
    if (m.find("MaxCountPerCycle") != m.end() && !m["MaxCountPerCycle"].empty()) {
      maxCountPerCycle = make_shared<long>(boost::any_cast<long>(m["MaxCountPerCycle"]));
    }
    if (m.find("MinCount") != m.end() && !m["MinCount"].empty()) {
      minCount = make_shared<long>(boost::any_cast<long>(m["MinCount"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RamRole") != m.end() && !m["RamRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["RamRole"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueueTemplate() = default;
};
class SharedStorageTemplate : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> mountDirectory{};
  shared_ptr<string> mountOptions{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<string> NASDirectory{};
  shared_ptr<string> protocolType{};

  SharedStorageTemplate() {}

  explicit SharedStorageTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (mountDirectory) {
      res["MountDirectory"] = boost::any(*mountDirectory);
    }
    if (mountOptions) {
      res["MountOptions"] = boost::any(*mountOptions);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    if (NASDirectory) {
      res["NASDirectory"] = boost::any(*NASDirectory);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MountDirectory") != m.end() && !m["MountDirectory"].empty()) {
      mountDirectory = make_shared<string>(boost::any_cast<string>(m["MountDirectory"]));
    }
    if (m.find("MountOptions") != m.end() && !m["MountOptions"].empty()) {
      mountOptions = make_shared<string>(boost::any_cast<string>(m["MountOptions"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
    if (m.find("NASDirectory") != m.end() && !m["NASDirectory"].empty()) {
      NASDirectory = make_shared<string>(boost::any_cast<string>(m["NASDirectory"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
  }


  virtual ~SharedStorageTemplate() = default;
};
class AttachSharedStoragesRequestSharedStorages : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> location{};
  shared_ptr<string> mountDirectory{};
  shared_ptr<string> mountOptions{};
  shared_ptr<string> mountTarget{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> storageDirectory{};
  shared_ptr<string> volumeType{};

  AttachSharedStoragesRequestSharedStorages() {}

  explicit AttachSharedStoragesRequestSharedStorages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (mountDirectory) {
      res["MountDirectory"] = boost::any(*mountDirectory);
    }
    if (mountOptions) {
      res["MountOptions"] = boost::any(*mountOptions);
    }
    if (mountTarget) {
      res["MountTarget"] = boost::any(*mountTarget);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (storageDirectory) {
      res["StorageDirectory"] = boost::any(*storageDirectory);
    }
    if (volumeType) {
      res["VolumeType"] = boost::any(*volumeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("MountDirectory") != m.end() && !m["MountDirectory"].empty()) {
      mountDirectory = make_shared<string>(boost::any_cast<string>(m["MountDirectory"]));
    }
    if (m.find("MountOptions") != m.end() && !m["MountOptions"].empty()) {
      mountOptions = make_shared<string>(boost::any_cast<string>(m["MountOptions"]));
    }
    if (m.find("MountTarget") != m.end() && !m["MountTarget"].empty()) {
      mountTarget = make_shared<string>(boost::any_cast<string>(m["MountTarget"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("StorageDirectory") != m.end() && !m["StorageDirectory"].empty()) {
      storageDirectory = make_shared<string>(boost::any_cast<string>(m["StorageDirectory"]));
    }
    if (m.find("VolumeType") != m.end() && !m["VolumeType"].empty()) {
      volumeType = make_shared<string>(boost::any_cast<string>(m["VolumeType"]));
    }
  }


  virtual ~AttachSharedStoragesRequestSharedStorages() = default;
};
class AttachSharedStoragesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<AttachSharedStoragesRequestSharedStorages>> sharedStorages{};

  AttachSharedStoragesRequest() {}

  explicit AttachSharedStoragesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (sharedStorages) {
      vector<boost::any> temp1;
      for(auto item1:*sharedStorages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SharedStorages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("SharedStorages") != m.end() && !m["SharedStorages"].empty()) {
      if (typeid(vector<boost::any>) == m["SharedStorages"].type()) {
        vector<AttachSharedStoragesRequestSharedStorages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SharedStorages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AttachSharedStoragesRequestSharedStorages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sharedStorages = make_shared<vector<AttachSharedStoragesRequestSharedStorages>>(expect1);
      }
    }
  }


  virtual ~AttachSharedStoragesRequest() = default;
};
class AttachSharedStoragesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> sharedStoragesShrink{};

  AttachSharedStoragesShrinkRequest() {}

  explicit AttachSharedStoragesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (sharedStoragesShrink) {
      res["SharedStorages"] = boost::any(*sharedStoragesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("SharedStorages") != m.end() && !m["SharedStorages"].empty()) {
      sharedStoragesShrink = make_shared<string>(boost::any_cast<string>(m["SharedStorages"]));
    }
  }


  virtual ~AttachSharedStoragesShrinkRequest() = default;
};
class AttachSharedStoragesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  AttachSharedStoragesResponseBody() {}

  explicit AttachSharedStoragesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~AttachSharedStoragesResponseBody() = default;
};
class AttachSharedStoragesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachSharedStoragesResponseBody> body{};

  AttachSharedStoragesResponse() {}

  explicit AttachSharedStoragesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachSharedStoragesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachSharedStoragesResponseBody>(model1);
      }
    }
  }


  virtual ~AttachSharedStoragesResponse() = default;
};
class CreateClusterRequestAdditionalPackages : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  CreateClusterRequestAdditionalPackages() {}

  explicit CreateClusterRequestAdditionalPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~CreateClusterRequestAdditionalPackages() = default;
};
class CreateClusterRequestAddons : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> resourcesSpec{};
  shared_ptr<string> servicesSpec{};
  shared_ptr<string> version{};

  CreateClusterRequestAddons() {}

  explicit CreateClusterRequestAddons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourcesSpec) {
      res["ResourcesSpec"] = boost::any(*resourcesSpec);
    }
    if (servicesSpec) {
      res["ServicesSpec"] = boost::any(*servicesSpec);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourcesSpec") != m.end() && !m["ResourcesSpec"].empty()) {
      resourcesSpec = make_shared<string>(boost::any_cast<string>(m["ResourcesSpec"]));
    }
    if (m.find("ServicesSpec") != m.end() && !m["ServicesSpec"].empty()) {
      servicesSpec = make_shared<string>(boost::any_cast<string>(m["ServicesSpec"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~CreateClusterRequestAddons() = default;
};
class CreateClusterRequestClusterCredentials : public Darabonba::Model {
public:
  shared_ptr<string> keyPairName{};
  shared_ptr<string> password{};

  CreateClusterRequestClusterCredentials() {}

  explicit CreateClusterRequestClusterCredentials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
  }


  virtual ~CreateClusterRequestClusterCredentials() = default;
};
class CreateClusterRequestClusterCustomConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> args{};
  shared_ptr<string> script{};

  CreateClusterRequestClusterCustomConfiguration() {}

  explicit CreateClusterRequestClusterCustomConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (script) {
      res["Script"] = boost::any(*script);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      args = make_shared<string>(boost::any_cast<string>(m["Args"]));
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      script = make_shared<string>(boost::any_cast<string>(m["Script"]));
    }
  }


  virtual ~CreateClusterRequestClusterCustomConfiguration() = default;
};
class CreateClusterRequestManagerDNS : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  CreateClusterRequestManagerDNS() {}

  explicit CreateClusterRequestManagerDNS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~CreateClusterRequestManagerDNS() = default;
};
class CreateClusterRequestManagerDirectoryService : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  CreateClusterRequestManagerDirectoryService() {}

  explicit CreateClusterRequestManagerDirectoryService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~CreateClusterRequestManagerDirectoryService() = default;
};
class CreateClusterRequestManagerScheduler : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  CreateClusterRequestManagerScheduler() {}

  explicit CreateClusterRequestManagerScheduler(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~CreateClusterRequestManagerScheduler() = default;
};
class CreateClusterRequestManager : public Darabonba::Model {
public:
  shared_ptr<CreateClusterRequestManagerDNS> DNS{};
  shared_ptr<CreateClusterRequestManagerDirectoryService> directoryService{};
  shared_ptr<NodeTemplate> managerNode{};
  shared_ptr<CreateClusterRequestManagerScheduler> scheduler{};

  CreateClusterRequestManager() {}

  explicit CreateClusterRequestManager(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DNS) {
      res["DNS"] = DNS ? boost::any(DNS->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (directoryService) {
      res["DirectoryService"] = directoryService ? boost::any(directoryService->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (managerNode) {
      res["ManagerNode"] = managerNode ? boost::any(managerNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduler) {
      res["Scheduler"] = scheduler ? boost::any(scheduler->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DNS") != m.end() && !m["DNS"].empty()) {
      if (typeid(map<string, boost::any>) == m["DNS"].type()) {
        CreateClusterRequestManagerDNS model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DNS"]));
        DNS = make_shared<CreateClusterRequestManagerDNS>(model1);
      }
    }
    if (m.find("DirectoryService") != m.end() && !m["DirectoryService"].empty()) {
      if (typeid(map<string, boost::any>) == m["DirectoryService"].type()) {
        CreateClusterRequestManagerDirectoryService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DirectoryService"]));
        directoryService = make_shared<CreateClusterRequestManagerDirectoryService>(model1);
      }
    }
    if (m.find("ManagerNode") != m.end() && !m["ManagerNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["ManagerNode"].type()) {
        NodeTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ManagerNode"]));
        managerNode = make_shared<NodeTemplate>(model1);
      }
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      if (typeid(map<string, boost::any>) == m["Scheduler"].type()) {
        CreateClusterRequestManagerScheduler model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Scheduler"]));
        scheduler = make_shared<CreateClusterRequestManagerScheduler>(model1);
      }
    }
  }


  virtual ~CreateClusterRequestManager() = default;
};
class CreateClusterRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateClusterRequestTags() {}

  explicit CreateClusterRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateClusterRequestTags() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateClusterRequestAdditionalPackages>> additionalPackages{};
  shared_ptr<vector<CreateClusterRequestAddons>> addons{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> clusterCategory{};
  shared_ptr<CreateClusterRequestClusterCredentials> clusterCredentials{};
  shared_ptr<CreateClusterRequestClusterCustomConfiguration> clusterCustomConfiguration{};
  shared_ptr<string> clusterDescription{};
  shared_ptr<string> clusterMode{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterVSwitchId{};
  shared_ptr<string> clusterVpcId{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<bool> isEnterpriseSecurityGroup{};
  shared_ptr<CreateClusterRequestManager> manager{};
  shared_ptr<long> maxCoreCount{};
  shared_ptr<long> maxCount{};
  shared_ptr<vector<QueueTemplate>> queues{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<SharedStorageTemplate>> sharedStorages{};
  shared_ptr<vector<CreateClusterRequestTags>> tags{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalPackages) {
      vector<boost::any> temp1;
      for(auto item1:*additionalPackages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdditionalPackages"] = boost::any(temp1);
    }
    if (addons) {
      vector<boost::any> temp1;
      for(auto item1:*addons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Addons"] = boost::any(temp1);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (clusterCategory) {
      res["ClusterCategory"] = boost::any(*clusterCategory);
    }
    if (clusterCredentials) {
      res["ClusterCredentials"] = clusterCredentials ? boost::any(clusterCredentials->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterCustomConfiguration) {
      res["ClusterCustomConfiguration"] = clusterCustomConfiguration ? boost::any(clusterCustomConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterDescription) {
      res["ClusterDescription"] = boost::any(*clusterDescription);
    }
    if (clusterMode) {
      res["ClusterMode"] = boost::any(*clusterMode);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterVSwitchId) {
      res["ClusterVSwitchId"] = boost::any(*clusterVSwitchId);
    }
    if (clusterVpcId) {
      res["ClusterVpcId"] = boost::any(*clusterVpcId);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (isEnterpriseSecurityGroup) {
      res["IsEnterpriseSecurityGroup"] = boost::any(*isEnterpriseSecurityGroup);
    }
    if (manager) {
      res["Manager"] = manager ? boost::any(manager->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxCoreCount) {
      res["MaxCoreCount"] = boost::any(*maxCoreCount);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (queues) {
      vector<boost::any> temp1;
      for(auto item1:*queues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Queues"] = boost::any(temp1);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (sharedStorages) {
      vector<boost::any> temp1;
      for(auto item1:*sharedStorages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SharedStorages"] = boost::any(temp1);
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
    if (m.find("AdditionalPackages") != m.end() && !m["AdditionalPackages"].empty()) {
      if (typeid(vector<boost::any>) == m["AdditionalPackages"].type()) {
        vector<CreateClusterRequestAdditionalPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdditionalPackages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestAdditionalPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        additionalPackages = make_shared<vector<CreateClusterRequestAdditionalPackages>>(expect1);
      }
    }
    if (m.find("Addons") != m.end() && !m["Addons"].empty()) {
      if (typeid(vector<boost::any>) == m["Addons"].type()) {
        vector<CreateClusterRequestAddons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Addons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestAddons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addons = make_shared<vector<CreateClusterRequestAddons>>(expect1);
      }
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ClusterCategory") != m.end() && !m["ClusterCategory"].empty()) {
      clusterCategory = make_shared<string>(boost::any_cast<string>(m["ClusterCategory"]));
    }
    if (m.find("ClusterCredentials") != m.end() && !m["ClusterCredentials"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterCredentials"].type()) {
        CreateClusterRequestClusterCredentials model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterCredentials"]));
        clusterCredentials = make_shared<CreateClusterRequestClusterCredentials>(model1);
      }
    }
    if (m.find("ClusterCustomConfiguration") != m.end() && !m["ClusterCustomConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterCustomConfiguration"].type()) {
        CreateClusterRequestClusterCustomConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterCustomConfiguration"]));
        clusterCustomConfiguration = make_shared<CreateClusterRequestClusterCustomConfiguration>(model1);
      }
    }
    if (m.find("ClusterDescription") != m.end() && !m["ClusterDescription"].empty()) {
      clusterDescription = make_shared<string>(boost::any_cast<string>(m["ClusterDescription"]));
    }
    if (m.find("ClusterMode") != m.end() && !m["ClusterMode"].empty()) {
      clusterMode = make_shared<string>(boost::any_cast<string>(m["ClusterMode"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterVSwitchId") != m.end() && !m["ClusterVSwitchId"].empty()) {
      clusterVSwitchId = make_shared<string>(boost::any_cast<string>(m["ClusterVSwitchId"]));
    }
    if (m.find("ClusterVpcId") != m.end() && !m["ClusterVpcId"].empty()) {
      clusterVpcId = make_shared<string>(boost::any_cast<string>(m["ClusterVpcId"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["DeletionProtection"]));
    }
    if (m.find("IsEnterpriseSecurityGroup") != m.end() && !m["IsEnterpriseSecurityGroup"].empty()) {
      isEnterpriseSecurityGroup = make_shared<bool>(boost::any_cast<bool>(m["IsEnterpriseSecurityGroup"]));
    }
    if (m.find("Manager") != m.end() && !m["Manager"].empty()) {
      if (typeid(map<string, boost::any>) == m["Manager"].type()) {
        CreateClusterRequestManager model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Manager"]));
        manager = make_shared<CreateClusterRequestManager>(model1);
      }
    }
    if (m.find("MaxCoreCount") != m.end() && !m["MaxCoreCount"].empty()) {
      maxCoreCount = make_shared<long>(boost::any_cast<long>(m["MaxCoreCount"]));
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<long>(boost::any_cast<long>(m["MaxCount"]));
    }
    if (m.find("Queues") != m.end() && !m["Queues"].empty()) {
      if (typeid(vector<boost::any>) == m["Queues"].type()) {
        vector<QueueTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Queues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueueTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queues = make_shared<vector<QueueTemplate>>(expect1);
      }
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SharedStorages") != m.end() && !m["SharedStorages"].empty()) {
      if (typeid(vector<boost::any>) == m["SharedStorages"].type()) {
        vector<SharedStorageTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SharedStorages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SharedStorageTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sharedStorages = make_shared<vector<SharedStorageTemplate>>(expect1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateClusterRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateClusterRequestTags>>(expect1);
      }
    }
  }


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> additionalPackagesShrink{};
  shared_ptr<string> addonsShrink{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> clusterCategory{};
  shared_ptr<string> clusterCredentialsShrink{};
  shared_ptr<string> clusterCustomConfigurationShrink{};
  shared_ptr<string> clusterDescription{};
  shared_ptr<string> clusterMode{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterVSwitchId{};
  shared_ptr<string> clusterVpcId{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<bool> isEnterpriseSecurityGroup{};
  shared_ptr<string> managerShrink{};
  shared_ptr<long> maxCoreCount{};
  shared_ptr<long> maxCount{};
  shared_ptr<string> queuesShrink{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> sharedStoragesShrink{};
  shared_ptr<string> tagsShrink{};

  CreateClusterShrinkRequest() {}

  explicit CreateClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalPackagesShrink) {
      res["AdditionalPackages"] = boost::any(*additionalPackagesShrink);
    }
    if (addonsShrink) {
      res["Addons"] = boost::any(*addonsShrink);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (clusterCategory) {
      res["ClusterCategory"] = boost::any(*clusterCategory);
    }
    if (clusterCredentialsShrink) {
      res["ClusterCredentials"] = boost::any(*clusterCredentialsShrink);
    }
    if (clusterCustomConfigurationShrink) {
      res["ClusterCustomConfiguration"] = boost::any(*clusterCustomConfigurationShrink);
    }
    if (clusterDescription) {
      res["ClusterDescription"] = boost::any(*clusterDescription);
    }
    if (clusterMode) {
      res["ClusterMode"] = boost::any(*clusterMode);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterVSwitchId) {
      res["ClusterVSwitchId"] = boost::any(*clusterVSwitchId);
    }
    if (clusterVpcId) {
      res["ClusterVpcId"] = boost::any(*clusterVpcId);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (isEnterpriseSecurityGroup) {
      res["IsEnterpriseSecurityGroup"] = boost::any(*isEnterpriseSecurityGroup);
    }
    if (managerShrink) {
      res["Manager"] = boost::any(*managerShrink);
    }
    if (maxCoreCount) {
      res["MaxCoreCount"] = boost::any(*maxCoreCount);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (queuesShrink) {
      res["Queues"] = boost::any(*queuesShrink);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (sharedStoragesShrink) {
      res["SharedStorages"] = boost::any(*sharedStoragesShrink);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalPackages") != m.end() && !m["AdditionalPackages"].empty()) {
      additionalPackagesShrink = make_shared<string>(boost::any_cast<string>(m["AdditionalPackages"]));
    }
    if (m.find("Addons") != m.end() && !m["Addons"].empty()) {
      addonsShrink = make_shared<string>(boost::any_cast<string>(m["Addons"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ClusterCategory") != m.end() && !m["ClusterCategory"].empty()) {
      clusterCategory = make_shared<string>(boost::any_cast<string>(m["ClusterCategory"]));
    }
    if (m.find("ClusterCredentials") != m.end() && !m["ClusterCredentials"].empty()) {
      clusterCredentialsShrink = make_shared<string>(boost::any_cast<string>(m["ClusterCredentials"]));
    }
    if (m.find("ClusterCustomConfiguration") != m.end() && !m["ClusterCustomConfiguration"].empty()) {
      clusterCustomConfigurationShrink = make_shared<string>(boost::any_cast<string>(m["ClusterCustomConfiguration"]));
    }
    if (m.find("ClusterDescription") != m.end() && !m["ClusterDescription"].empty()) {
      clusterDescription = make_shared<string>(boost::any_cast<string>(m["ClusterDescription"]));
    }
    if (m.find("ClusterMode") != m.end() && !m["ClusterMode"].empty()) {
      clusterMode = make_shared<string>(boost::any_cast<string>(m["ClusterMode"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterVSwitchId") != m.end() && !m["ClusterVSwitchId"].empty()) {
      clusterVSwitchId = make_shared<string>(boost::any_cast<string>(m["ClusterVSwitchId"]));
    }
    if (m.find("ClusterVpcId") != m.end() && !m["ClusterVpcId"].empty()) {
      clusterVpcId = make_shared<string>(boost::any_cast<string>(m["ClusterVpcId"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["DeletionProtection"]));
    }
    if (m.find("IsEnterpriseSecurityGroup") != m.end() && !m["IsEnterpriseSecurityGroup"].empty()) {
      isEnterpriseSecurityGroup = make_shared<bool>(boost::any_cast<bool>(m["IsEnterpriseSecurityGroup"]));
    }
    if (m.find("Manager") != m.end() && !m["Manager"].empty()) {
      managerShrink = make_shared<string>(boost::any_cast<string>(m["Manager"]));
    }
    if (m.find("MaxCoreCount") != m.end() && !m["MaxCoreCount"].empty()) {
      maxCoreCount = make_shared<long>(boost::any_cast<long>(m["MaxCoreCount"]));
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<long>(boost::any_cast<long>(m["MaxCount"]));
    }
    if (m.find("Queues") != m.end() && !m["Queues"].empty()) {
      queuesShrink = make_shared<string>(boost::any_cast<string>(m["Queues"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SharedStorages") != m.end() && !m["SharedStorages"].empty()) {
      sharedStoragesShrink = make_shared<string>(boost::any_cast<string>(m["SharedStorages"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~CreateClusterShrinkRequest() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  CreateClusterResponseBody() {}

  explicit CreateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateClusterResponseBody() = default;
};
class CreateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateClusterResponseBody> body{};

  CreateClusterResponse() {}

  explicit CreateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClusterResponse() = default;
};
class CreateJobRequestJobSpecResources : public Darabonba::Model {
public:
  shared_ptr<long> cores{};
  shared_ptr<long> gpus{};
  shared_ptr<string> memory{};
  shared_ptr<long> nodes{};

  CreateJobRequestJobSpecResources() {}

  explicit CreateJobRequestJobSpecResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cores) {
      res["Cores"] = boost::any(*cores);
    }
    if (gpus) {
      res["Gpus"] = boost::any(*gpus);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cores") != m.end() && !m["Cores"].empty()) {
      cores = make_shared<long>(boost::any_cast<long>(m["Cores"]));
    }
    if (m.find("Gpus") != m.end() && !m["Gpus"].empty()) {
      gpus = make_shared<long>(boost::any_cast<long>(m["Gpus"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodes = make_shared<long>(boost::any_cast<long>(m["Nodes"]));
    }
  }


  virtual ~CreateJobRequestJobSpecResources() = default;
};
class CreateJobRequestJobSpec : public Darabonba::Model {
public:
  shared_ptr<string> arrayRequest{};
  shared_ptr<string> commandLine{};
  shared_ptr<string> jobQueue{};
  shared_ptr<string> postCmdLine{};
  shared_ptr<string> priority{};
  shared_ptr<CreateJobRequestJobSpecResources> resources{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> runasUserPassword{};
  shared_ptr<string> stderrPath{};
  shared_ptr<string> stdoutPath{};
  shared_ptr<string> variables{};
  shared_ptr<string> wallTime{};

  CreateJobRequestJobSpec() {}

  explicit CreateJobRequestJobSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayRequest) {
      res["ArrayRequest"] = boost::any(*arrayRequest);
    }
    if (commandLine) {
      res["CommandLine"] = boost::any(*commandLine);
    }
    if (jobQueue) {
      res["JobQueue"] = boost::any(*jobQueue);
    }
    if (postCmdLine) {
      res["PostCmdLine"] = boost::any(*postCmdLine);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resources) {
      res["Resources"] = resources ? boost::any(resources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (runasUserPassword) {
      res["RunasUserPassword"] = boost::any(*runasUserPassword);
    }
    if (stderrPath) {
      res["StderrPath"] = boost::any(*stderrPath);
    }
    if (stdoutPath) {
      res["StdoutPath"] = boost::any(*stdoutPath);
    }
    if (variables) {
      res["Variables"] = boost::any(*variables);
    }
    if (wallTime) {
      res["WallTime"] = boost::any(*wallTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayRequest") != m.end() && !m["ArrayRequest"].empty()) {
      arrayRequest = make_shared<string>(boost::any_cast<string>(m["ArrayRequest"]));
    }
    if (m.find("CommandLine") != m.end() && !m["CommandLine"].empty()) {
      commandLine = make_shared<string>(boost::any_cast<string>(m["CommandLine"]));
    }
    if (m.find("JobQueue") != m.end() && !m["JobQueue"].empty()) {
      jobQueue = make_shared<string>(boost::any_cast<string>(m["JobQueue"]));
    }
    if (m.find("PostCmdLine") != m.end() && !m["PostCmdLine"].empty()) {
      postCmdLine = make_shared<string>(boost::any_cast<string>(m["PostCmdLine"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resources"].type()) {
        CreateJobRequestJobSpecResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resources"]));
        resources = make_shared<CreateJobRequestJobSpecResources>(model1);
      }
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("RunasUserPassword") != m.end() && !m["RunasUserPassword"].empty()) {
      runasUserPassword = make_shared<string>(boost::any_cast<string>(m["RunasUserPassword"]));
    }
    if (m.find("StderrPath") != m.end() && !m["StderrPath"].empty()) {
      stderrPath = make_shared<string>(boost::any_cast<string>(m["StderrPath"]));
    }
    if (m.find("StdoutPath") != m.end() && !m["StdoutPath"].empty()) {
      stdoutPath = make_shared<string>(boost::any_cast<string>(m["StdoutPath"]));
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["Variables"]));
    }
    if (m.find("WallTime") != m.end() && !m["WallTime"].empty()) {
      wallTime = make_shared<string>(boost::any_cast<string>(m["WallTime"]));
    }
  }


  virtual ~CreateJobRequestJobSpec() = default;
};
class CreateJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobName{};
  shared_ptr<CreateJobRequestJobSpec> jobSpec{};

  CreateJobRequest() {}

  explicit CreateJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (jobSpec) {
      res["JobSpec"] = jobSpec ? boost::any(jobSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("JobSpec") != m.end() && !m["JobSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobSpec"].type()) {
        CreateJobRequestJobSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobSpec"]));
        jobSpec = make_shared<CreateJobRequestJobSpec>(model1);
      }
    }
  }


  virtual ~CreateJobRequest() = default;
};
class CreateJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> jobSpecShrink{};

  CreateJobShrinkRequest() {}

  explicit CreateJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (jobSpecShrink) {
      res["JobSpec"] = boost::any(*jobSpecShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("JobSpec") != m.end() && !m["JobSpec"].empty()) {
      jobSpecShrink = make_shared<string>(boost::any_cast<string>(m["JobSpec"]));
    }
  }


  virtual ~CreateJobShrinkRequest() = default;
};
class CreateJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreateJobResponseBody() {}

  explicit CreateJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
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
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~CreateJobResponseBody() = default;
};
class CreateJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateJobResponseBody> body{};

  CreateJobResponse() {}

  explicit CreateJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateJobResponse() = default;
};
class CreateNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<NodeTemplate> computeNode{};
  shared_ptr<long> count{};
  shared_ptr<string> deploymentSetId{};
  shared_ptr<string> HPCInterConnect{};
  shared_ptr<string> hostnamePrefix{};
  shared_ptr<string> hostnameSuffix{};
  shared_ptr<string> keepAlive{};
  shared_ptr<string> queueName{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> vSwitchId{};

  CreateNodesRequest() {}

  explicit CreateNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (computeNode) {
      res["ComputeNode"] = computeNode ? boost::any(computeNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (deploymentSetId) {
      res["DeploymentSetId"] = boost::any(*deploymentSetId);
    }
    if (HPCInterConnect) {
      res["HPCInterConnect"] = boost::any(*HPCInterConnect);
    }
    if (hostnamePrefix) {
      res["HostnamePrefix"] = boost::any(*hostnamePrefix);
    }
    if (hostnameSuffix) {
      res["HostnameSuffix"] = boost::any(*hostnameSuffix);
    }
    if (keepAlive) {
      res["KeepAlive"] = boost::any(*keepAlive);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (ramRole) {
      res["RamRole"] = boost::any(*ramRole);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ComputeNode") != m.end() && !m["ComputeNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComputeNode"].type()) {
        NodeTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComputeNode"]));
        computeNode = make_shared<NodeTemplate>(model1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DeploymentSetId") != m.end() && !m["DeploymentSetId"].empty()) {
      deploymentSetId = make_shared<string>(boost::any_cast<string>(m["DeploymentSetId"]));
    }
    if (m.find("HPCInterConnect") != m.end() && !m["HPCInterConnect"].empty()) {
      HPCInterConnect = make_shared<string>(boost::any_cast<string>(m["HPCInterConnect"]));
    }
    if (m.find("HostnamePrefix") != m.end() && !m["HostnamePrefix"].empty()) {
      hostnamePrefix = make_shared<string>(boost::any_cast<string>(m["HostnamePrefix"]));
    }
    if (m.find("HostnameSuffix") != m.end() && !m["HostnameSuffix"].empty()) {
      hostnameSuffix = make_shared<string>(boost::any_cast<string>(m["HostnameSuffix"]));
    }
    if (m.find("KeepAlive") != m.end() && !m["KeepAlive"].empty()) {
      keepAlive = make_shared<string>(boost::any_cast<string>(m["KeepAlive"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RamRole") != m.end() && !m["RamRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["RamRole"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateNodesRequest() = default;
};
class CreateNodesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> computeNodeShrink{};
  shared_ptr<long> count{};
  shared_ptr<string> deploymentSetId{};
  shared_ptr<string> HPCInterConnect{};
  shared_ptr<string> hostnamePrefix{};
  shared_ptr<string> hostnameSuffix{};
  shared_ptr<string> keepAlive{};
  shared_ptr<string> queueName{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> vSwitchId{};

  CreateNodesShrinkRequest() {}

  explicit CreateNodesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (computeNodeShrink) {
      res["ComputeNode"] = boost::any(*computeNodeShrink);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (deploymentSetId) {
      res["DeploymentSetId"] = boost::any(*deploymentSetId);
    }
    if (HPCInterConnect) {
      res["HPCInterConnect"] = boost::any(*HPCInterConnect);
    }
    if (hostnamePrefix) {
      res["HostnamePrefix"] = boost::any(*hostnamePrefix);
    }
    if (hostnameSuffix) {
      res["HostnameSuffix"] = boost::any(*hostnameSuffix);
    }
    if (keepAlive) {
      res["KeepAlive"] = boost::any(*keepAlive);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (ramRole) {
      res["RamRole"] = boost::any(*ramRole);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ComputeNode") != m.end() && !m["ComputeNode"].empty()) {
      computeNodeShrink = make_shared<string>(boost::any_cast<string>(m["ComputeNode"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DeploymentSetId") != m.end() && !m["DeploymentSetId"].empty()) {
      deploymentSetId = make_shared<string>(boost::any_cast<string>(m["DeploymentSetId"]));
    }
    if (m.find("HPCInterConnect") != m.end() && !m["HPCInterConnect"].empty()) {
      HPCInterConnect = make_shared<string>(boost::any_cast<string>(m["HPCInterConnect"]));
    }
    if (m.find("HostnamePrefix") != m.end() && !m["HostnamePrefix"].empty()) {
      hostnamePrefix = make_shared<string>(boost::any_cast<string>(m["HostnamePrefix"]));
    }
    if (m.find("HostnameSuffix") != m.end() && !m["HostnameSuffix"].empty()) {
      hostnameSuffix = make_shared<string>(boost::any_cast<string>(m["HostnameSuffix"]));
    }
    if (m.find("KeepAlive") != m.end() && !m["KeepAlive"].empty()) {
      keepAlive = make_shared<string>(boost::any_cast<string>(m["KeepAlive"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RamRole") != m.end() && !m["RamRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["RamRole"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateNodesShrinkRequest() = default;
};
class CreateNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateNodesResponseBody() {}

  explicit CreateNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
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
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateNodesResponseBody() = default;
};
class CreateNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNodesResponseBody> body{};

  CreateNodesResponse() {}

  explicit CreateNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNodesResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNodesResponse() = default;
};
class CreateQueueRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<QueueTemplate> queue{};

  CreateQueueRequest() {}

  explicit CreateQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (queue) {
      res["Queue"] = queue ? boost::any(queue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      if (typeid(map<string, boost::any>) == m["Queue"].type()) {
        QueueTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Queue"]));
        queue = make_shared<QueueTemplate>(model1);
      }
    }
  }


  virtual ~CreateQueueRequest() = default;
};
class CreateQueueShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> queueShrink{};

  CreateQueueShrinkRequest() {}

  explicit CreateQueueShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (queueShrink) {
      res["Queue"] = boost::any(*queueShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      queueShrink = make_shared<string>(boost::any_cast<string>(m["Queue"]));
    }
  }


  virtual ~CreateQueueShrinkRequest() = default;
};
class CreateQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};

  CreateQueueResponseBody() {}

  explicit CreateQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateQueueResponseBody() = default;
};
class CreateQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateQueueResponseBody> body{};

  CreateQueueResponse() {}

  explicit CreateQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateQueueResponseBody>(model1);
      }
    }
  }


  virtual ~CreateQueueResponse() = default;
};
class CreateUsersRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> group{};
  shared_ptr<string> password{};
  shared_ptr<string> userName{};

  CreateUsersRequestUser() {}

  explicit CreateUsersRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~CreateUsersRequestUser() = default;
};
class CreateUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<CreateUsersRequestUser>> user{};

  CreateUsersRequest() {}

  explicit CreateUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<CreateUsersRequestUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateUsersRequestUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<CreateUsersRequestUser>>(expect1);
      }
    }
  }


  virtual ~CreateUsersRequest() = default;
};
class CreateUsersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> userShrink{};

  CreateUsersShrinkRequest() {}

  explicit CreateUsersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (userShrink) {
      res["User"] = boost::any(*userShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      userShrink = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~CreateUsersShrinkRequest() = default;
};
class CreateUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateUsersResponseBody() {}

  explicit CreateUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateUsersResponseBody() = default;
};
class CreateUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUsersResponseBody> body{};

  CreateUsersResponse() {}

  explicit CreateUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUsersResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUsersResponse() = default;
};
class DeleteClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DeleteClusterRequest() {}

  explicit DeleteClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DeleteClusterRequest() = default;
};
class DeleteClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DeleteClusterResponseBody() {}

  explicit DeleteClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteClusterResponseBody() = default;
};
class DeleteClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteClusterResponseBody> body{};

  DeleteClusterResponse() {}

  explicit DeleteClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClusterResponse() = default;
};
class DeleteNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<string>> instanceIds{};

  DeleteNodesRequest() {}

  explicit DeleteNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteNodesRequest() = default;
};
class DeleteNodesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceIdsShrink{};

  DeleteNodesShrinkRequest() {}

  explicit DeleteNodesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instanceIdsShrink) {
      res["InstanceIds"] = boost::any(*instanceIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
  }


  virtual ~DeleteNodesShrinkRequest() = default;
};
class DeleteNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DeleteNodesResponseBody() {}

  explicit DeleteNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteNodesResponseBody() = default;
};
class DeleteNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNodesResponseBody> body{};

  DeleteNodesResponse() {}

  explicit DeleteNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNodesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNodesResponse() = default;
};
class DeleteQueuesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<string>> queueNames{};

  DeleteQueuesRequest() {}

  explicit DeleteQueuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (queueNames) {
      res["QueueNames"] = boost::any(*queueNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("QueueNames") != m.end() && !m["QueueNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["QueueNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QueueNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      queueNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteQueuesRequest() = default;
};
class DeleteQueuesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> queueNamesShrink{};

  DeleteQueuesShrinkRequest() {}

  explicit DeleteQueuesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (queueNamesShrink) {
      res["QueueNames"] = boost::any(*queueNamesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("QueueNames") != m.end() && !m["QueueNames"].empty()) {
      queueNamesShrink = make_shared<string>(boost::any_cast<string>(m["QueueNames"]));
    }
  }


  virtual ~DeleteQueuesShrinkRequest() = default;
};
class DeleteQueuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteQueuesResponseBody() {}

  explicit DeleteQueuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteQueuesResponseBody() = default;
};
class DeleteQueuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteQueuesResponseBody> body{};

  DeleteQueuesResponse() {}

  explicit DeleteQueuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteQueuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteQueuesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteQueuesResponse() = default;
};
class DeleteUsersRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> userName{};

  DeleteUsersRequestUser() {}

  explicit DeleteUsersRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~DeleteUsersRequestUser() = default;
};
class DeleteUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<DeleteUsersRequestUser>> user{};

  DeleteUsersRequest() {}

  explicit DeleteUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<DeleteUsersRequestUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteUsersRequestUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<DeleteUsersRequestUser>>(expect1);
      }
    }
  }


  virtual ~DeleteUsersRequest() = default;
};
class DeleteUsersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> userShrink{};

  DeleteUsersShrinkRequest() {}

  explicit DeleteUsersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (userShrink) {
      res["User"] = boost::any(*userShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      userShrink = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~DeleteUsersShrinkRequest() = default;
};
class DeleteUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUsersResponseBody() {}

  explicit DeleteUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUsersResponseBody() = default;
};
class DeleteUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUsersResponseBody> body{};

  DeleteUsersResponse() {}

  explicit DeleteUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUsersResponse() = default;
};
class DescribeAddonTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> addonName{};
  shared_ptr<string> addonVersion{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  DescribeAddonTemplateRequest() {}

  explicit DescribeAddonTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addonName) {
      res["AddonName"] = boost::any(*addonName);
    }
    if (addonVersion) {
      res["AddonVersion"] = boost::any(*addonVersion);
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
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddonName") != m.end() && !m["AddonName"].empty()) {
      addonName = make_shared<string>(boost::any_cast<string>(m["AddonName"]));
    }
    if (m.find("AddonVersion") != m.end() && !m["AddonVersion"].empty()) {
      addonVersion = make_shared<string>(boost::any_cast<string>(m["AddonVersion"]));
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
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeAddonTemplateRequest() = default;
};
class DescribeAddonTemplateResponseBodyAddonResourcesSpecEipResource : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreate{};
  shared_ptr<string> bandwidth{};
  shared_ptr<string> eipInstanceId{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> internetChargeType{};

  DescribeAddonTemplateResponseBodyAddonResourcesSpecEipResource() {}

  explicit DescribeAddonTemplateResponseBodyAddonResourcesSpecEipResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreate) {
      res["AutoCreate"] = boost::any(*autoCreate);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (eipInstanceId) {
      res["EipInstanceId"] = boost::any(*eipInstanceId);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreate") != m.end() && !m["AutoCreate"].empty()) {
      autoCreate = make_shared<bool>(boost::any_cast<bool>(m["AutoCreate"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<string>(boost::any_cast<string>(m["Bandwidth"]));
    }
    if (m.find("EipInstanceId") != m.end() && !m["EipInstanceId"].empty()) {
      eipInstanceId = make_shared<string>(boost::any_cast<string>(m["EipInstanceId"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
  }


  virtual ~DescribeAddonTemplateResponseBodyAddonResourcesSpecEipResource() = default;
};
class DescribeAddonTemplateResponseBodyAddonResourcesSpec : public Darabonba::Model {
public:
  shared_ptr<vector<AddonNodeTemplate>> ecsResources{};
  shared_ptr<DescribeAddonTemplateResponseBodyAddonResourcesSpecEipResource> eipResource{};

  DescribeAddonTemplateResponseBodyAddonResourcesSpec() {}

  explicit DescribeAddonTemplateResponseBodyAddonResourcesSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsResources) {
      vector<boost::any> temp1;
      for(auto item1:*ecsResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsResources"] = boost::any(temp1);
    }
    if (eipResource) {
      res["EipResource"] = eipResource ? boost::any(eipResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsResources") != m.end() && !m["EcsResources"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsResources"].type()) {
        vector<AddonNodeTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddonNodeTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsResources = make_shared<vector<AddonNodeTemplate>>(expect1);
      }
    }
    if (m.find("EipResource") != m.end() && !m["EipResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["EipResource"].type()) {
        DescribeAddonTemplateResponseBodyAddonResourcesSpecEipResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EipResource"]));
        eipResource = make_shared<DescribeAddonTemplateResponseBodyAddonResourcesSpecEipResource>(model1);
      }
    }
  }


  virtual ~DescribeAddonTemplateResponseBodyAddonResourcesSpec() = default;
};
class DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams : public Darabonba::Model {
public:
  shared_ptr<string> helpText{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams() {}

  explicit DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (helpText) {
      res["HelpText"] = boost::any(*helpText);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HelpText") != m.end() && !m["HelpText"].empty()) {
      helpText = make_shared<string>(boost::any_cast<string>(m["HelpText"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams() = default;
};
class DescribeAddonTemplateResponseBodyAddonServicesSpecNetworkACL : public Darabonba::Model {
public:
  shared_ptr<string> ipProtocol{};
  shared_ptr<double> port{};
  shared_ptr<string> sourceCidrIp{};

  DescribeAddonTemplateResponseBodyAddonServicesSpecNetworkACL() {}

  explicit DescribeAddonTemplateResponseBodyAddonServicesSpecNetworkACL(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipProtocol) {
      res["IpProtocol"] = boost::any(*ipProtocol);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (sourceCidrIp) {
      res["SourceCidrIp"] = boost::any(*sourceCidrIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpProtocol") != m.end() && !m["IpProtocol"].empty()) {
      ipProtocol = make_shared<string>(boost::any_cast<string>(m["IpProtocol"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<double>(boost::any_cast<double>(m["Port"]));
    }
    if (m.find("SourceCidrIp") != m.end() && !m["SourceCidrIp"].empty()) {
      sourceCidrIp = make_shared<string>(boost::any_cast<string>(m["SourceCidrIp"]));
    }
  }


  virtual ~DescribeAddonTemplateResponseBodyAddonServicesSpecNetworkACL() = default;
};
class DescribeAddonTemplateResponseBodyAddonServicesSpec : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams>> inputParams{};
  shared_ptr<vector<DescribeAddonTemplateResponseBodyAddonServicesSpecNetworkACL>> networkACL{};
  shared_ptr<string> serviceAccessType{};
  shared_ptr<string> serviceAccessUrl{};
  shared_ptr<string> serviceName{};

  DescribeAddonTemplateResponseBodyAddonServicesSpec() {}

  explicit DescribeAddonTemplateResponseBodyAddonServicesSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputParams) {
      vector<boost::any> temp1;
      for(auto item1:*inputParams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InputParams"] = boost::any(temp1);
    }
    if (networkACL) {
      vector<boost::any> temp1;
      for(auto item1:*networkACL){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetworkACL"] = boost::any(temp1);
    }
    if (serviceAccessType) {
      res["ServiceAccessType"] = boost::any(*serviceAccessType);
    }
    if (serviceAccessUrl) {
      res["ServiceAccessUrl"] = boost::any(*serviceAccessUrl);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputParams") != m.end() && !m["InputParams"].empty()) {
      if (typeid(vector<boost::any>) == m["InputParams"].type()) {
        vector<DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InputParams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputParams = make_shared<vector<DescribeAddonTemplateResponseBodyAddonServicesSpecInputParams>>(expect1);
      }
    }
    if (m.find("NetworkACL") != m.end() && !m["NetworkACL"].empty()) {
      if (typeid(vector<boost::any>) == m["NetworkACL"].type()) {
        vector<DescribeAddonTemplateResponseBodyAddonServicesSpecNetworkACL> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetworkACL"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAddonTemplateResponseBodyAddonServicesSpecNetworkACL model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networkACL = make_shared<vector<DescribeAddonTemplateResponseBodyAddonServicesSpecNetworkACL>>(expect1);
      }
    }
    if (m.find("ServiceAccessType") != m.end() && !m["ServiceAccessType"].empty()) {
      serviceAccessType = make_shared<string>(boost::any_cast<string>(m["ServiceAccessType"]));
    }
    if (m.find("ServiceAccessUrl") != m.end() && !m["ServiceAccessUrl"].empty()) {
      serviceAccessUrl = make_shared<string>(boost::any_cast<string>(m["ServiceAccessUrl"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~DescribeAddonTemplateResponseBodyAddonServicesSpec() = default;
};
class DescribeAddonTemplateResponseBodyAddon : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> label{};
  shared_ptr<string> lastUpdate{};
  shared_ptr<string> name{};
  shared_ptr<DescribeAddonTemplateResponseBodyAddonResourcesSpec> resourcesSpec{};
  shared_ptr<vector<DescribeAddonTemplateResponseBodyAddonServicesSpec>> servicesSpec{};
  shared_ptr<string> version{};

  DescribeAddonTemplateResponseBodyAddon() {}

  explicit DescribeAddonTemplateResponseBodyAddon(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (lastUpdate) {
      res["LastUpdate"] = boost::any(*lastUpdate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourcesSpec) {
      res["ResourcesSpec"] = resourcesSpec ? boost::any(resourcesSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (servicesSpec) {
      vector<boost::any> temp1;
      for(auto item1:*servicesSpec){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServicesSpec"] = boost::any(temp1);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("LastUpdate") != m.end() && !m["LastUpdate"].empty()) {
      lastUpdate = make_shared<string>(boost::any_cast<string>(m["LastUpdate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourcesSpec") != m.end() && !m["ResourcesSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourcesSpec"].type()) {
        DescribeAddonTemplateResponseBodyAddonResourcesSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourcesSpec"]));
        resourcesSpec = make_shared<DescribeAddonTemplateResponseBodyAddonResourcesSpec>(model1);
      }
    }
    if (m.find("ServicesSpec") != m.end() && !m["ServicesSpec"].empty()) {
      if (typeid(vector<boost::any>) == m["ServicesSpec"].type()) {
        vector<DescribeAddonTemplateResponseBodyAddonServicesSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServicesSpec"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAddonTemplateResponseBodyAddonServicesSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servicesSpec = make_shared<vector<DescribeAddonTemplateResponseBodyAddonServicesSpec>>(expect1);
      }
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeAddonTemplateResponseBodyAddon() = default;
};
class DescribeAddonTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAddonTemplateResponseBodyAddon> addon{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAddonTemplateResponseBody() {}

  explicit DescribeAddonTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addon) {
      res["Addon"] = addon ? boost::any(addon->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addon") != m.end() && !m["Addon"].empty()) {
      if (typeid(map<string, boost::any>) == m["Addon"].type()) {
        DescribeAddonTemplateResponseBodyAddon model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Addon"]));
        addon = make_shared<DescribeAddonTemplateResponseBodyAddon>(model1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAddonTemplateResponseBody() = default;
};
class DescribeAddonTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAddonTemplateResponseBody> body{};

  DescribeAddonTemplateResponse() {}

  explicit DescribeAddonTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAddonTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAddonTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAddonTemplateResponse() = default;
};
class DetachSharedStoragesRequestSharedStorages : public Darabonba::Model {
public:
  shared_ptr<string> mountDirectory{};

  DetachSharedStoragesRequestSharedStorages() {}

  explicit DetachSharedStoragesRequestSharedStorages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountDirectory) {
      res["MountDirectory"] = boost::any(*mountDirectory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountDirectory") != m.end() && !m["MountDirectory"].empty()) {
      mountDirectory = make_shared<string>(boost::any_cast<string>(m["MountDirectory"]));
    }
  }


  virtual ~DetachSharedStoragesRequestSharedStorages() = default;
};
class DetachSharedStoragesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<DetachSharedStoragesRequestSharedStorages>> sharedStorages{};

  DetachSharedStoragesRequest() {}

  explicit DetachSharedStoragesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (sharedStorages) {
      vector<boost::any> temp1;
      for(auto item1:*sharedStorages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SharedStorages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("SharedStorages") != m.end() && !m["SharedStorages"].empty()) {
      if (typeid(vector<boost::any>) == m["SharedStorages"].type()) {
        vector<DetachSharedStoragesRequestSharedStorages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SharedStorages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetachSharedStoragesRequestSharedStorages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sharedStorages = make_shared<vector<DetachSharedStoragesRequestSharedStorages>>(expect1);
      }
    }
  }


  virtual ~DetachSharedStoragesRequest() = default;
};
class DetachSharedStoragesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> sharedStoragesShrink{};

  DetachSharedStoragesShrinkRequest() {}

  explicit DetachSharedStoragesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (sharedStoragesShrink) {
      res["SharedStorages"] = boost::any(*sharedStoragesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("SharedStorages") != m.end() && !m["SharedStorages"].empty()) {
      sharedStoragesShrink = make_shared<string>(boost::any_cast<string>(m["SharedStorages"]));
    }
  }


  virtual ~DetachSharedStoragesShrinkRequest() = default;
};
class DetachSharedStoragesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DetachSharedStoragesResponseBody() {}

  explicit DetachSharedStoragesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~DetachSharedStoragesResponseBody() = default;
};
class DetachSharedStoragesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachSharedStoragesResponseBody> body{};

  DetachSharedStoragesResponse() {}

  explicit DetachSharedStoragesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachSharedStoragesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachSharedStoragesResponseBody>(model1);
      }
    }
  }


  virtual ~DetachSharedStoragesResponse() = default;
};
class GetAddonRequest : public Darabonba::Model {
public:
  shared_ptr<string> addonId{};
  shared_ptr<string> clusterId{};

  GetAddonRequest() {}

  explicit GetAddonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addonId) {
      res["AddonId"] = boost::any(*addonId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddonId") != m.end() && !m["AddonId"].empty()) {
      addonId = make_shared<string>(boost::any_cast<string>(m["AddonId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~GetAddonRequest() = default;
};
class GetAddonResponseBodyAddonResourcesSpecEipResource : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreate{};
  shared_ptr<string> bandwidth{};
  shared_ptr<string> eipAddress{};
  shared_ptr<string> eipInstanceId{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> internetChargeType{};

  GetAddonResponseBodyAddonResourcesSpecEipResource() {}

  explicit GetAddonResponseBodyAddonResourcesSpecEipResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreate) {
      res["AutoCreate"] = boost::any(*autoCreate);
    }
    if (bandwidth) {
      res["Bandwidth"] = boost::any(*bandwidth);
    }
    if (eipAddress) {
      res["EipAddress"] = boost::any(*eipAddress);
    }
    if (eipInstanceId) {
      res["EipInstanceId"] = boost::any(*eipInstanceId);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoCreate") != m.end() && !m["AutoCreate"].empty()) {
      autoCreate = make_shared<bool>(boost::any_cast<bool>(m["AutoCreate"]));
    }
    if (m.find("Bandwidth") != m.end() && !m["Bandwidth"].empty()) {
      bandwidth = make_shared<string>(boost::any_cast<string>(m["Bandwidth"]));
    }
    if (m.find("EipAddress") != m.end() && !m["EipAddress"].empty()) {
      eipAddress = make_shared<string>(boost::any_cast<string>(m["EipAddress"]));
    }
    if (m.find("EipInstanceId") != m.end() && !m["EipInstanceId"].empty()) {
      eipInstanceId = make_shared<string>(boost::any_cast<string>(m["EipInstanceId"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
  }


  virtual ~GetAddonResponseBodyAddonResourcesSpecEipResource() = default;
};
class GetAddonResponseBodyAddonResourcesSpec : public Darabonba::Model {
public:
  shared_ptr<vector<AddonNodeTemplate>> ecsResources{};
  shared_ptr<GetAddonResponseBodyAddonResourcesSpecEipResource> eipResource{};

  GetAddonResponseBodyAddonResourcesSpec() {}

  explicit GetAddonResponseBodyAddonResourcesSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsResources) {
      vector<boost::any> temp1;
      for(auto item1:*ecsResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsResources"] = boost::any(temp1);
    }
    if (eipResource) {
      res["EipResource"] = eipResource ? boost::any(eipResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsResources") != m.end() && !m["EcsResources"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsResources"].type()) {
        vector<AddonNodeTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddonNodeTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsResources = make_shared<vector<AddonNodeTemplate>>(expect1);
      }
    }
    if (m.find("EipResource") != m.end() && !m["EipResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["EipResource"].type()) {
        GetAddonResponseBodyAddonResourcesSpecEipResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EipResource"]));
        eipResource = make_shared<GetAddonResponseBodyAddonResourcesSpecEipResource>(model1);
      }
    }
  }


  virtual ~GetAddonResponseBodyAddonResourcesSpec() = default;
};
class GetAddonResponseBodyAddonServicesSpecInputParams : public Darabonba::Model {
public:
  shared_ptr<string> helpText{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  GetAddonResponseBodyAddonServicesSpecInputParams() {}

  explicit GetAddonResponseBodyAddonServicesSpecInputParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (helpText) {
      res["HelpText"] = boost::any(*helpText);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HelpText") != m.end() && !m["HelpText"].empty()) {
      helpText = make_shared<string>(boost::any_cast<string>(m["HelpText"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetAddonResponseBodyAddonServicesSpecInputParams() = default;
};
class GetAddonResponseBodyAddonServicesSpecNetworkACL : public Darabonba::Model {
public:
  shared_ptr<string> ipProtocol{};
  shared_ptr<double> port{};
  shared_ptr<string> sourceCidrIp{};

  GetAddonResponseBodyAddonServicesSpecNetworkACL() {}

  explicit GetAddonResponseBodyAddonServicesSpecNetworkACL(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipProtocol) {
      res["IpProtocol"] = boost::any(*ipProtocol);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (sourceCidrIp) {
      res["SourceCidrIp"] = boost::any(*sourceCidrIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpProtocol") != m.end() && !m["IpProtocol"].empty()) {
      ipProtocol = make_shared<string>(boost::any_cast<string>(m["IpProtocol"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<double>(boost::any_cast<double>(m["Port"]));
    }
    if (m.find("SourceCidrIp") != m.end() && !m["SourceCidrIp"].empty()) {
      sourceCidrIp = make_shared<string>(boost::any_cast<string>(m["SourceCidrIp"]));
    }
  }


  virtual ~GetAddonResponseBodyAddonServicesSpecNetworkACL() = default;
};
class GetAddonResponseBodyAddonServicesSpec : public Darabonba::Model {
public:
  shared_ptr<vector<GetAddonResponseBodyAddonServicesSpecInputParams>> inputParams{};
  shared_ptr<vector<GetAddonResponseBodyAddonServicesSpecNetworkACL>> networkACL{};
  shared_ptr<string> serviceAccessType{};
  shared_ptr<string> serviceAccessUrl{};
  shared_ptr<string> serviceName{};

  GetAddonResponseBodyAddonServicesSpec() {}

  explicit GetAddonResponseBodyAddonServicesSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputParams) {
      vector<boost::any> temp1;
      for(auto item1:*inputParams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InputParams"] = boost::any(temp1);
    }
    if (networkACL) {
      vector<boost::any> temp1;
      for(auto item1:*networkACL){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NetworkACL"] = boost::any(temp1);
    }
    if (serviceAccessType) {
      res["ServiceAccessType"] = boost::any(*serviceAccessType);
    }
    if (serviceAccessUrl) {
      res["ServiceAccessUrl"] = boost::any(*serviceAccessUrl);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputParams") != m.end() && !m["InputParams"].empty()) {
      if (typeid(vector<boost::any>) == m["InputParams"].type()) {
        vector<GetAddonResponseBodyAddonServicesSpecInputParams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InputParams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAddonResponseBodyAddonServicesSpecInputParams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inputParams = make_shared<vector<GetAddonResponseBodyAddonServicesSpecInputParams>>(expect1);
      }
    }
    if (m.find("NetworkACL") != m.end() && !m["NetworkACL"].empty()) {
      if (typeid(vector<boost::any>) == m["NetworkACL"].type()) {
        vector<GetAddonResponseBodyAddonServicesSpecNetworkACL> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NetworkACL"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAddonResponseBodyAddonServicesSpecNetworkACL model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        networkACL = make_shared<vector<GetAddonResponseBodyAddonServicesSpecNetworkACL>>(expect1);
      }
    }
    if (m.find("ServiceAccessType") != m.end() && !m["ServiceAccessType"].empty()) {
      serviceAccessType = make_shared<string>(boost::any_cast<string>(m["ServiceAccessType"]));
    }
    if (m.find("ServiceAccessUrl") != m.end() && !m["ServiceAccessUrl"].empty()) {
      serviceAccessUrl = make_shared<string>(boost::any_cast<string>(m["ServiceAccessUrl"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~GetAddonResponseBodyAddonServicesSpec() = default;
};
class GetAddonResponseBodyAddon : public Darabonba::Model {
public:
  shared_ptr<string> addonId{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> installTime{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<GetAddonResponseBodyAddonResourcesSpec> resourcesSpec{};
  shared_ptr<vector<GetAddonResponseBodyAddonServicesSpec>> servicesSpec{};
  shared_ptr<string> status{};
  shared_ptr<string> version{};

  GetAddonResponseBodyAddon() {}

  explicit GetAddonResponseBodyAddon(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addonId) {
      res["AddonId"] = boost::any(*addonId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (installTime) {
      res["InstallTime"] = boost::any(*installTime);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourcesSpec) {
      res["ResourcesSpec"] = resourcesSpec ? boost::any(resourcesSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (servicesSpec) {
      vector<boost::any> temp1;
      for(auto item1:*servicesSpec){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServicesSpec"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddonId") != m.end() && !m["AddonId"].empty()) {
      addonId = make_shared<string>(boost::any_cast<string>(m["AddonId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("InstallTime") != m.end() && !m["InstallTime"].empty()) {
      installTime = make_shared<string>(boost::any_cast<string>(m["InstallTime"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourcesSpec") != m.end() && !m["ResourcesSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourcesSpec"].type()) {
        GetAddonResponseBodyAddonResourcesSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourcesSpec"]));
        resourcesSpec = make_shared<GetAddonResponseBodyAddonResourcesSpec>(model1);
      }
    }
    if (m.find("ServicesSpec") != m.end() && !m["ServicesSpec"].empty()) {
      if (typeid(vector<boost::any>) == m["ServicesSpec"].type()) {
        vector<GetAddonResponseBodyAddonServicesSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServicesSpec"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAddonResponseBodyAddonServicesSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servicesSpec = make_shared<vector<GetAddonResponseBodyAddonServicesSpec>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetAddonResponseBodyAddon() = default;
};
class GetAddonResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAddonResponseBodyAddon> addon{};
  shared_ptr<string> requestId{};

  GetAddonResponseBody() {}

  explicit GetAddonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addon) {
      res["Addon"] = addon ? boost::any(addon->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addon") != m.end() && !m["Addon"].empty()) {
      if (typeid(map<string, boost::any>) == m["Addon"].type()) {
        GetAddonResponseBodyAddon model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Addon"]));
        addon = make_shared<GetAddonResponseBodyAddon>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAddonResponseBody() = default;
};
class GetAddonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAddonResponseBody> body{};

  GetAddonResponse() {}

  explicit GetAddonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAddonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAddonResponseBody>(model1);
      }
    }
  }


  virtual ~GetAddonResponse() = default;
};
class GetClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  GetClusterRequest() {}

  explicit GetClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~GetClusterRequest() = default;
};
class GetClusterResponseBodyClusterCustomConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> args{};
  shared_ptr<string> script{};

  GetClusterResponseBodyClusterCustomConfiguration() {}

  explicit GetClusterResponseBodyClusterCustomConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (script) {
      res["Script"] = boost::any(*script);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      args = make_shared<string>(boost::any_cast<string>(m["Args"]));
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      script = make_shared<string>(boost::any_cast<string>(m["Script"]));
    }
  }


  virtual ~GetClusterResponseBodyClusterCustomConfiguration() = default;
};
class GetClusterResponseBodyManagerDNS : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetClusterResponseBodyManagerDNS() {}

  explicit GetClusterResponseBodyManagerDNS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetClusterResponseBodyManagerDNS() = default;
};
class GetClusterResponseBodyManagerDirectoryService : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetClusterResponseBodyManagerDirectoryService() {}

  explicit GetClusterResponseBodyManagerDirectoryService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetClusterResponseBodyManagerDirectoryService() = default;
};
class GetClusterResponseBodyManagerManagerNode : public Darabonba::Model {
public:
  shared_ptr<string> expiredTime{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};

  GetClusterResponseBodyManagerManagerNode() {}

  explicit GetClusterResponseBodyManagerManagerNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~GetClusterResponseBodyManagerManagerNode() = default;
};
class GetClusterResponseBodyManagerScheduler : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  GetClusterResponseBodyManagerScheduler() {}

  explicit GetClusterResponseBodyManagerScheduler(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~GetClusterResponseBodyManagerScheduler() = default;
};
class GetClusterResponseBodyManager : public Darabonba::Model {
public:
  shared_ptr<GetClusterResponseBodyManagerDNS> DNS{};
  shared_ptr<GetClusterResponseBodyManagerDirectoryService> directoryService{};
  shared_ptr<GetClusterResponseBodyManagerManagerNode> managerNode{};
  shared_ptr<GetClusterResponseBodyManagerScheduler> scheduler{};

  GetClusterResponseBodyManager() {}

  explicit GetClusterResponseBodyManager(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DNS) {
      res["DNS"] = DNS ? boost::any(DNS->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (directoryService) {
      res["DirectoryService"] = directoryService ? boost::any(directoryService->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (managerNode) {
      res["ManagerNode"] = managerNode ? boost::any(managerNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduler) {
      res["Scheduler"] = scheduler ? boost::any(scheduler->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DNS") != m.end() && !m["DNS"].empty()) {
      if (typeid(map<string, boost::any>) == m["DNS"].type()) {
        GetClusterResponseBodyManagerDNS model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DNS"]));
        DNS = make_shared<GetClusterResponseBodyManagerDNS>(model1);
      }
    }
    if (m.find("DirectoryService") != m.end() && !m["DirectoryService"].empty()) {
      if (typeid(map<string, boost::any>) == m["DirectoryService"].type()) {
        GetClusterResponseBodyManagerDirectoryService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DirectoryService"]));
        directoryService = make_shared<GetClusterResponseBodyManagerDirectoryService>(model1);
      }
    }
    if (m.find("ManagerNode") != m.end() && !m["ManagerNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["ManagerNode"].type()) {
        GetClusterResponseBodyManagerManagerNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ManagerNode"]));
        managerNode = make_shared<GetClusterResponseBodyManagerManagerNode>(model1);
      }
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      if (typeid(map<string, boost::any>) == m["Scheduler"].type()) {
        GetClusterResponseBodyManagerScheduler model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Scheduler"]));
        scheduler = make_shared<GetClusterResponseBodyManagerScheduler>(model1);
      }
    }
  }


  virtual ~GetClusterResponseBodyManager() = default;
};
class GetClusterResponseBodyMonitorSpec : public Darabonba::Model {
public:
  shared_ptr<bool> enableComputeLoadMonitor{};

  GetClusterResponseBodyMonitorSpec() {}

  explicit GetClusterResponseBodyMonitorSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableComputeLoadMonitor) {
      res["EnableComputeLoadMonitor"] = boost::any(*enableComputeLoadMonitor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableComputeLoadMonitor") != m.end() && !m["EnableComputeLoadMonitor"].empty()) {
      enableComputeLoadMonitor = make_shared<bool>(boost::any_cast<bool>(m["EnableComputeLoadMonitor"]));
    }
  }


  virtual ~GetClusterResponseBodyMonitorSpec() = default;
};
class GetClusterResponseBodySchedulerSpec : public Darabonba::Model {
public:
  shared_ptr<bool> enableTopologyAwareness{};

  GetClusterResponseBodySchedulerSpec() {}

  explicit GetClusterResponseBodySchedulerSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableTopologyAwareness) {
      res["EnableTopologyAwareness"] = boost::any(*enableTopologyAwareness);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableTopologyAwareness") != m.end() && !m["EnableTopologyAwareness"].empty()) {
      enableTopologyAwareness = make_shared<bool>(boost::any_cast<bool>(m["EnableTopologyAwareness"]));
    }
  }


  virtual ~GetClusterResponseBodySchedulerSpec() = default;
};
class GetClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clientVersion{};
  shared_ptr<string> clusterCategory{};
  shared_ptr<string> clusterCreateTime{};
  shared_ptr<GetClusterResponseBodyClusterCustomConfiguration> clusterCustomConfiguration{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterMode{};
  shared_ptr<string> clusterModifyTime{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterStatus{};
  shared_ptr<string> clusterVSwitchId{};
  shared_ptr<string> clusterVpcId{};
  shared_ptr<string> deleteProtection{};
  shared_ptr<string> ehpcVersion{};
  shared_ptr<bool> enableScaleIn{};
  shared_ptr<bool> enableScaleOut{};
  shared_ptr<long> growInterval{};
  shared_ptr<long> idleInterval{};
  shared_ptr<GetClusterResponseBodyManager> manager{};
  shared_ptr<string> maxCoreCount{};
  shared_ptr<string> maxCount{};
  shared_ptr<GetClusterResponseBodyMonitorSpec> monitorSpec{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<GetClusterResponseBodySchedulerSpec> schedulerSpec{};
  shared_ptr<string> securityGroupId{};

  GetClusterResponseBody() {}

  explicit GetClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (clusterCategory) {
      res["ClusterCategory"] = boost::any(*clusterCategory);
    }
    if (clusterCreateTime) {
      res["ClusterCreateTime"] = boost::any(*clusterCreateTime);
    }
    if (clusterCustomConfiguration) {
      res["ClusterCustomConfiguration"] = clusterCustomConfiguration ? boost::any(clusterCustomConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterMode) {
      res["ClusterMode"] = boost::any(*clusterMode);
    }
    if (clusterModifyTime) {
      res["ClusterModifyTime"] = boost::any(*clusterModifyTime);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterStatus) {
      res["ClusterStatus"] = boost::any(*clusterStatus);
    }
    if (clusterVSwitchId) {
      res["ClusterVSwitchId"] = boost::any(*clusterVSwitchId);
    }
    if (clusterVpcId) {
      res["ClusterVpcId"] = boost::any(*clusterVpcId);
    }
    if (deleteProtection) {
      res["DeleteProtection"] = boost::any(*deleteProtection);
    }
    if (ehpcVersion) {
      res["EhpcVersion"] = boost::any(*ehpcVersion);
    }
    if (enableScaleIn) {
      res["EnableScaleIn"] = boost::any(*enableScaleIn);
    }
    if (enableScaleOut) {
      res["EnableScaleOut"] = boost::any(*enableScaleOut);
    }
    if (growInterval) {
      res["GrowInterval"] = boost::any(*growInterval);
    }
    if (idleInterval) {
      res["IdleInterval"] = boost::any(*idleInterval);
    }
    if (manager) {
      res["Manager"] = manager ? boost::any(manager->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxCoreCount) {
      res["MaxCoreCount"] = boost::any(*maxCoreCount);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (monitorSpec) {
      res["MonitorSpec"] = monitorSpec ? boost::any(monitorSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (schedulerSpec) {
      res["SchedulerSpec"] = schedulerSpec ? boost::any(schedulerSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ClusterCategory") != m.end() && !m["ClusterCategory"].empty()) {
      clusterCategory = make_shared<string>(boost::any_cast<string>(m["ClusterCategory"]));
    }
    if (m.find("ClusterCreateTime") != m.end() && !m["ClusterCreateTime"].empty()) {
      clusterCreateTime = make_shared<string>(boost::any_cast<string>(m["ClusterCreateTime"]));
    }
    if (m.find("ClusterCustomConfiguration") != m.end() && !m["ClusterCustomConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterCustomConfiguration"].type()) {
        GetClusterResponseBodyClusterCustomConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterCustomConfiguration"]));
        clusterCustomConfiguration = make_shared<GetClusterResponseBodyClusterCustomConfiguration>(model1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterMode") != m.end() && !m["ClusterMode"].empty()) {
      clusterMode = make_shared<string>(boost::any_cast<string>(m["ClusterMode"]));
    }
    if (m.find("ClusterModifyTime") != m.end() && !m["ClusterModifyTime"].empty()) {
      clusterModifyTime = make_shared<string>(boost::any_cast<string>(m["ClusterModifyTime"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterStatus") != m.end() && !m["ClusterStatus"].empty()) {
      clusterStatus = make_shared<string>(boost::any_cast<string>(m["ClusterStatus"]));
    }
    if (m.find("ClusterVSwitchId") != m.end() && !m["ClusterVSwitchId"].empty()) {
      clusterVSwitchId = make_shared<string>(boost::any_cast<string>(m["ClusterVSwitchId"]));
    }
    if (m.find("ClusterVpcId") != m.end() && !m["ClusterVpcId"].empty()) {
      clusterVpcId = make_shared<string>(boost::any_cast<string>(m["ClusterVpcId"]));
    }
    if (m.find("DeleteProtection") != m.end() && !m["DeleteProtection"].empty()) {
      deleteProtection = make_shared<string>(boost::any_cast<string>(m["DeleteProtection"]));
    }
    if (m.find("EhpcVersion") != m.end() && !m["EhpcVersion"].empty()) {
      ehpcVersion = make_shared<string>(boost::any_cast<string>(m["EhpcVersion"]));
    }
    if (m.find("EnableScaleIn") != m.end() && !m["EnableScaleIn"].empty()) {
      enableScaleIn = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleIn"]));
    }
    if (m.find("EnableScaleOut") != m.end() && !m["EnableScaleOut"].empty()) {
      enableScaleOut = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleOut"]));
    }
    if (m.find("GrowInterval") != m.end() && !m["GrowInterval"].empty()) {
      growInterval = make_shared<long>(boost::any_cast<long>(m["GrowInterval"]));
    }
    if (m.find("IdleInterval") != m.end() && !m["IdleInterval"].empty()) {
      idleInterval = make_shared<long>(boost::any_cast<long>(m["IdleInterval"]));
    }
    if (m.find("Manager") != m.end() && !m["Manager"].empty()) {
      if (typeid(map<string, boost::any>) == m["Manager"].type()) {
        GetClusterResponseBodyManager model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Manager"]));
        manager = make_shared<GetClusterResponseBodyManager>(model1);
      }
    }
    if (m.find("MaxCoreCount") != m.end() && !m["MaxCoreCount"].empty()) {
      maxCoreCount = make_shared<string>(boost::any_cast<string>(m["MaxCoreCount"]));
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<string>(boost::any_cast<string>(m["MaxCount"]));
    }
    if (m.find("MonitorSpec") != m.end() && !m["MonitorSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["MonitorSpec"].type()) {
        GetClusterResponseBodyMonitorSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MonitorSpec"]));
        monitorSpec = make_shared<GetClusterResponseBodyMonitorSpec>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SchedulerSpec") != m.end() && !m["SchedulerSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["SchedulerSpec"].type()) {
        GetClusterResponseBodySchedulerSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SchedulerSpec"]));
        schedulerSpec = make_shared<GetClusterResponseBodySchedulerSpec>(model1);
      }
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
  }


  virtual ~GetClusterResponseBody() = default;
};
class GetClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetClusterResponseBody> body{};

  GetClusterResponse() {}

  explicit GetClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClusterResponseBody>(model1);
      }
    }
  }


  virtual ~GetClusterResponse() = default;
};
class GetCommonLogDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> from{};
  shared_ptr<bool> hiddenProcess{};
  shared_ptr<string> logRequestId{};
  shared_ptr<long> to{};

  GetCommonLogDetailRequest() {}

  explicit GetCommonLogDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (hiddenProcess) {
      res["HiddenProcess"] = boost::any(*hiddenProcess);
    }
    if (logRequestId) {
      res["LogRequestId"] = boost::any(*logRequestId);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("HiddenProcess") != m.end() && !m["HiddenProcess"].empty()) {
      hiddenProcess = make_shared<bool>(boost::any_cast<bool>(m["HiddenProcess"]));
    }
    if (m.find("LogRequestId") != m.end() && !m["LogRequestId"].empty()) {
      logRequestId = make_shared<string>(boost::any_cast<string>(m["LogRequestId"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~GetCommonLogDetailRequest() = default;
};
class GetCommonLogDetailResponseBodyLogDetailStages : public Darabonba::Model {
public:
  shared_ptr<string> logLevel{};
  shared_ptr<string> message{};
  shared_ptr<string> method{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> target{};
  shared_ptr<string> time{};

  GetCommonLogDetailResponseBodyLogDetailStages() {}

  explicit GetCommonLogDetailResponseBodyLogDetailStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logLevel) {
      res["LogLevel"] = boost::any(*logLevel);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogLevel") != m.end() && !m["LogLevel"].empty()) {
      logLevel = make_shared<string>(boost::any_cast<string>(m["LogLevel"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~GetCommonLogDetailResponseBodyLogDetailStages() = default;
};
class GetCommonLogDetailResponseBodyLogDetail : public Darabonba::Model {
public:
  shared_ptr<string> stageName{};
  shared_ptr<vector<GetCommonLogDetailResponseBodyLogDetailStages>> stages{};

  GetCommonLogDetailResponseBodyLogDetail() {}

  explicit GetCommonLogDetailResponseBodyLogDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    if (stages) {
      vector<boost::any> temp1;
      for(auto item1:*stages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
    if (m.find("Stages") != m.end() && !m["Stages"].empty()) {
      if (typeid(vector<boost::any>) == m["Stages"].type()) {
        vector<GetCommonLogDetailResponseBodyLogDetailStages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCommonLogDetailResponseBodyLogDetailStages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stages = make_shared<vector<GetCommonLogDetailResponseBodyLogDetailStages>>(expect1);
      }
    }
  }


  virtual ~GetCommonLogDetailResponseBodyLogDetail() = default;
};
class GetCommonLogDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> clusterId{};
  shared_ptr<vector<GetCommonLogDetailResponseBodyLogDetail>> logDetail{};
  shared_ptr<string> logType{};
  shared_ptr<string> operatorUid{};
  shared_ptr<string> requestId{};
  shared_ptr<string> uid{};

  GetCommonLogDetailResponseBody() {}

  explicit GetCommonLogDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (logDetail) {
      vector<boost::any> temp1;
      for(auto item1:*logDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogDetail"] = boost::any(temp1);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (operatorUid) {
      res["OperatorUid"] = boost::any(*operatorUid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("LogDetail") != m.end() && !m["LogDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["LogDetail"].type()) {
        vector<GetCommonLogDetailResponseBodyLogDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCommonLogDetailResponseBodyLogDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logDetail = make_shared<vector<GetCommonLogDetailResponseBodyLogDetail>>(expect1);
      }
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("OperatorUid") != m.end() && !m["OperatorUid"].empty()) {
      operatorUid = make_shared<string>(boost::any_cast<string>(m["OperatorUid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~GetCommonLogDetailResponseBody() = default;
};
class GetCommonLogDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCommonLogDetailResponseBody> body{};

  GetCommonLogDetailResponse() {}

  explicit GetCommonLogDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCommonLogDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCommonLogDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetCommonLogDetailResponse() = default;
};
class GetJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobId{};

  GetJobRequest() {}

  explicit GetJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetJobRequest() = default;
};
class GetJobResponseBodyJobInfoResources : public Darabonba::Model {
public:
  shared_ptr<string> cores{};
  shared_ptr<string> gpus{};
  shared_ptr<string> memory{};
  shared_ptr<string> nodes{};

  GetJobResponseBodyJobInfoResources() {}

  explicit GetJobResponseBodyJobInfoResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cores) {
      res["Cores"] = boost::any(*cores);
    }
    if (gpus) {
      res["Gpus"] = boost::any(*gpus);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cores") != m.end() && !m["Cores"].empty()) {
      cores = make_shared<string>(boost::any_cast<string>(m["Cores"]));
    }
    if (m.find("Gpus") != m.end() && !m["Gpus"].empty()) {
      gpus = make_shared<string>(boost::any_cast<string>(m["Gpus"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodes = make_shared<string>(boost::any_cast<string>(m["Nodes"]));
    }
  }


  virtual ~GetJobResponseBodyJobInfoResources() = default;
};
class GetJobResponseBodyJobInfoResourcesUsed : public Darabonba::Model {
public:
  shared_ptr<string> cores{};
  shared_ptr<string> memory{};
  shared_ptr<string> nodes{};

  GetJobResponseBodyJobInfoResourcesUsed() {}

  explicit GetJobResponseBodyJobInfoResourcesUsed(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cores) {
      res["Cores"] = boost::any(*cores);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cores") != m.end() && !m["Cores"].empty()) {
      cores = make_shared<string>(boost::any_cast<string>(m["Cores"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodes = make_shared<string>(boost::any_cast<string>(m["Nodes"]));
    }
  }


  virtual ~GetJobResponseBodyJobInfoResourcesUsed() = default;
};
class GetJobResponseBodyJobInfoVariables : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetJobResponseBodyJobInfoVariables() {}

  explicit GetJobResponseBodyJobInfoVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetJobResponseBodyJobInfoVariables() = default;
};
class GetJobResponseBodyJobInfo : public Darabonba::Model {
public:
  shared_ptr<string> arrayJobId{};
  shared_ptr<string> arrayJobSubId{};
  shared_ptr<string> arrayRequest{};
  shared_ptr<string> commandLine{};
  shared_ptr<string> createTime{};
  shared_ptr<string> errorLog{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobName{};
  shared_ptr<string> jobQueue{};
  shared_ptr<string> lastModifyTime{};
  shared_ptr<string> nodeList{};
  shared_ptr<string> outputLog{};
  shared_ptr<string> priority{};
  shared_ptr<GetJobResponseBodyJobInfoResources> resources{};
  shared_ptr<GetJobResponseBodyJobInfoResourcesUsed> resourcesUsed{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};
  shared_ptr<vector<GetJobResponseBodyJobInfoVariables>> variables{};

  GetJobResponseBodyJobInfo() {}

  explicit GetJobResponseBodyJobInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayJobId) {
      res["ArrayJobId"] = boost::any(*arrayJobId);
    }
    if (arrayJobSubId) {
      res["ArrayJobSubId"] = boost::any(*arrayJobSubId);
    }
    if (arrayRequest) {
      res["ArrayRequest"] = boost::any(*arrayRequest);
    }
    if (commandLine) {
      res["CommandLine"] = boost::any(*commandLine);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (errorLog) {
      res["ErrorLog"] = boost::any(*errorLog);
    }
    if (extraInfo) {
      res["ExtraInfo"] = boost::any(*extraInfo);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (jobQueue) {
      res["JobQueue"] = boost::any(*jobQueue);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (nodeList) {
      res["NodeList"] = boost::any(*nodeList);
    }
    if (outputLog) {
      res["OutputLog"] = boost::any(*outputLog);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resources) {
      res["Resources"] = resources ? boost::any(resources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourcesUsed) {
      res["ResourcesUsed"] = resourcesUsed ? boost::any(resourcesUsed->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayJobId") != m.end() && !m["ArrayJobId"].empty()) {
      arrayJobId = make_shared<string>(boost::any_cast<string>(m["ArrayJobId"]));
    }
    if (m.find("ArrayJobSubId") != m.end() && !m["ArrayJobSubId"].empty()) {
      arrayJobSubId = make_shared<string>(boost::any_cast<string>(m["ArrayJobSubId"]));
    }
    if (m.find("ArrayRequest") != m.end() && !m["ArrayRequest"].empty()) {
      arrayRequest = make_shared<string>(boost::any_cast<string>(m["ArrayRequest"]));
    }
    if (m.find("CommandLine") != m.end() && !m["CommandLine"].empty()) {
      commandLine = make_shared<string>(boost::any_cast<string>(m["CommandLine"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ErrorLog") != m.end() && !m["ErrorLog"].empty()) {
      errorLog = make_shared<string>(boost::any_cast<string>(m["ErrorLog"]));
    }
    if (m.find("ExtraInfo") != m.end() && !m["ExtraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["ExtraInfo"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("JobQueue") != m.end() && !m["JobQueue"].empty()) {
      jobQueue = make_shared<string>(boost::any_cast<string>(m["JobQueue"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<string>(boost::any_cast<string>(m["LastModifyTime"]));
    }
    if (m.find("NodeList") != m.end() && !m["NodeList"].empty()) {
      nodeList = make_shared<string>(boost::any_cast<string>(m["NodeList"]));
    }
    if (m.find("OutputLog") != m.end() && !m["OutputLog"].empty()) {
      outputLog = make_shared<string>(boost::any_cast<string>(m["OutputLog"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resources"].type()) {
        GetJobResponseBodyJobInfoResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resources"]));
        resources = make_shared<GetJobResponseBodyJobInfoResources>(model1);
      }
    }
    if (m.find("ResourcesUsed") != m.end() && !m["ResourcesUsed"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourcesUsed"].type()) {
        GetJobResponseBodyJobInfoResourcesUsed model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourcesUsed"]));
        resourcesUsed = make_shared<GetJobResponseBodyJobInfoResourcesUsed>(model1);
      }
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      if (typeid(vector<boost::any>) == m["Variables"].type()) {
        vector<GetJobResponseBodyJobInfoVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetJobResponseBodyJobInfoVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<GetJobResponseBodyJobInfoVariables>>(expect1);
      }
    }
  }


  virtual ~GetJobResponseBodyJobInfo() = default;
};
class GetJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetJobResponseBodyJobInfo> jobInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  GetJobResponseBody() {}

  explicit GetJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobInfo) {
      res["JobInfo"] = jobInfo ? boost::any(jobInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("JobInfo") != m.end() && !m["JobInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobInfo"].type()) {
        GetJobResponseBodyJobInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobInfo"]));
        jobInfo = make_shared<GetJobResponseBodyJobInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetJobResponseBody() = default;
};
class GetJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobResponseBody> body{};

  GetJobResponse() {}

  explicit GetJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobResponse() = default;
};
class GetJobLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobId{};
  shared_ptr<string> logType{};
  shared_ptr<string> offset{};
  shared_ptr<string> size{};

  GetJobLogRequest() {}

  explicit GetJobLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<string>(boost::any_cast<string>(m["Offset"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
  }


  virtual ~GetJobLogRequest() = default;
};
class GetJobLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> stderrLog{};
  shared_ptr<string> stderrLogSize{};
  shared_ptr<string> stdoutLog{};
  shared_ptr<string> stdoutLogSize{};
  shared_ptr<string> success{};

  GetJobLogResponseBody() {}

  explicit GetJobLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stderrLog) {
      res["StderrLog"] = boost::any(*stderrLog);
    }
    if (stderrLogSize) {
      res["StderrLogSize"] = boost::any(*stderrLogSize);
    }
    if (stdoutLog) {
      res["StdoutLog"] = boost::any(*stdoutLog);
    }
    if (stdoutLogSize) {
      res["StdoutLogSize"] = boost::any(*stdoutLogSize);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StderrLog") != m.end() && !m["StderrLog"].empty()) {
      stderrLog = make_shared<string>(boost::any_cast<string>(m["StderrLog"]));
    }
    if (m.find("StderrLogSize") != m.end() && !m["StderrLogSize"].empty()) {
      stderrLogSize = make_shared<string>(boost::any_cast<string>(m["StderrLogSize"]));
    }
    if (m.find("StdoutLog") != m.end() && !m["StdoutLog"].empty()) {
      stdoutLog = make_shared<string>(boost::any_cast<string>(m["StdoutLog"]));
    }
    if (m.find("StdoutLogSize") != m.end() && !m["StdoutLogSize"].empty()) {
      stdoutLogSize = make_shared<string>(boost::any_cast<string>(m["StdoutLogSize"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~GetJobLogResponseBody() = default;
};
class GetJobLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobLogResponseBody> body{};

  GetJobLogResponse() {}

  explicit GetJobLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobLogResponse() = default;
};
class GetQueueRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> queueName{};

  GetQueueRequest() {}

  explicit GetQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
  }


  virtual ~GetQueueRequest() = default;
};
class GetQueueResponseBodyQueue : public Darabonba::Model {
public:
  shared_ptr<string> allocationStrategy{};
  shared_ptr<vector<NodeTemplate>> computeNodes{};
  shared_ptr<bool> enableScaleIn{};
  shared_ptr<bool> enableScaleOut{};
  shared_ptr<string> hostnamePrefix{};
  shared_ptr<string> hostnameSuffix{};
  shared_ptr<long> initialCount{};
  shared_ptr<string> interConnect{};
  shared_ptr<vector<string>> keepAliveNodes{};
  shared_ptr<long> maxCount{};
  shared_ptr<long> maxCountPerCycle{};
  shared_ptr<long> minCount{};
  shared_ptr<string> queueName{};
  shared_ptr<string> ramRole{};
  shared_ptr<vector<string>> vSwitchIds{};

  GetQueueResponseBodyQueue() {}

  explicit GetQueueResponseBodyQueue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationStrategy) {
      res["AllocationStrategy"] = boost::any(*allocationStrategy);
    }
    if (computeNodes) {
      vector<boost::any> temp1;
      for(auto item1:*computeNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComputeNodes"] = boost::any(temp1);
    }
    if (enableScaleIn) {
      res["EnableScaleIn"] = boost::any(*enableScaleIn);
    }
    if (enableScaleOut) {
      res["EnableScaleOut"] = boost::any(*enableScaleOut);
    }
    if (hostnamePrefix) {
      res["HostnamePrefix"] = boost::any(*hostnamePrefix);
    }
    if (hostnameSuffix) {
      res["HostnameSuffix"] = boost::any(*hostnameSuffix);
    }
    if (initialCount) {
      res["InitialCount"] = boost::any(*initialCount);
    }
    if (interConnect) {
      res["InterConnect"] = boost::any(*interConnect);
    }
    if (keepAliveNodes) {
      res["KeepAliveNodes"] = boost::any(*keepAliveNodes);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (maxCountPerCycle) {
      res["MaxCountPerCycle"] = boost::any(*maxCountPerCycle);
    }
    if (minCount) {
      res["MinCount"] = boost::any(*minCount);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (ramRole) {
      res["RamRole"] = boost::any(*ramRole);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationStrategy") != m.end() && !m["AllocationStrategy"].empty()) {
      allocationStrategy = make_shared<string>(boost::any_cast<string>(m["AllocationStrategy"]));
    }
    if (m.find("ComputeNodes") != m.end() && !m["ComputeNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ComputeNodes"].type()) {
        vector<NodeTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComputeNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NodeTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        computeNodes = make_shared<vector<NodeTemplate>>(expect1);
      }
    }
    if (m.find("EnableScaleIn") != m.end() && !m["EnableScaleIn"].empty()) {
      enableScaleIn = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleIn"]));
    }
    if (m.find("EnableScaleOut") != m.end() && !m["EnableScaleOut"].empty()) {
      enableScaleOut = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleOut"]));
    }
    if (m.find("HostnamePrefix") != m.end() && !m["HostnamePrefix"].empty()) {
      hostnamePrefix = make_shared<string>(boost::any_cast<string>(m["HostnamePrefix"]));
    }
    if (m.find("HostnameSuffix") != m.end() && !m["HostnameSuffix"].empty()) {
      hostnameSuffix = make_shared<string>(boost::any_cast<string>(m["HostnameSuffix"]));
    }
    if (m.find("InitialCount") != m.end() && !m["InitialCount"].empty()) {
      initialCount = make_shared<long>(boost::any_cast<long>(m["InitialCount"]));
    }
    if (m.find("InterConnect") != m.end() && !m["InterConnect"].empty()) {
      interConnect = make_shared<string>(boost::any_cast<string>(m["InterConnect"]));
    }
    if (m.find("KeepAliveNodes") != m.end() && !m["KeepAliveNodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeepAliveNodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeepAliveNodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keepAliveNodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<long>(boost::any_cast<long>(m["MaxCount"]));
    }
    if (m.find("MaxCountPerCycle") != m.end() && !m["MaxCountPerCycle"].empty()) {
      maxCountPerCycle = make_shared<long>(boost::any_cast<long>(m["MaxCountPerCycle"]));
    }
    if (m.find("MinCount") != m.end() && !m["MinCount"].empty()) {
      minCount = make_shared<long>(boost::any_cast<long>(m["MinCount"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RamRole") != m.end() && !m["RamRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["RamRole"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetQueueResponseBodyQueue() = default;
};
class GetQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetQueueResponseBodyQueue> queue{};
  shared_ptr<string> requestId{};

  GetQueueResponseBody() {}

  explicit GetQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queue) {
      res["Queue"] = queue ? boost::any(queue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      if (typeid(map<string, boost::any>) == m["Queue"].type()) {
        GetQueueResponseBodyQueue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Queue"]));
        queue = make_shared<GetQueueResponseBodyQueue>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetQueueResponseBody() = default;
};
class GetQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQueueResponseBody> body{};

  GetQueueResponse() {}

  explicit GetQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQueueResponseBody>(model1);
      }
    }
  }


  virtual ~GetQueueResponse() = default;
};
class InstallAddonRequest : public Darabonba::Model {
public:
  shared_ptr<string> addonName{};
  shared_ptr<string> addonVersion{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> resourcesSpec{};
  shared_ptr<string> servicesSpec{};

  InstallAddonRequest() {}

  explicit InstallAddonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addonName) {
      res["AddonName"] = boost::any(*addonName);
    }
    if (addonVersion) {
      res["AddonVersion"] = boost::any(*addonVersion);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (resourcesSpec) {
      res["ResourcesSpec"] = boost::any(*resourcesSpec);
    }
    if (servicesSpec) {
      res["ServicesSpec"] = boost::any(*servicesSpec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddonName") != m.end() && !m["AddonName"].empty()) {
      addonName = make_shared<string>(boost::any_cast<string>(m["AddonName"]));
    }
    if (m.find("AddonVersion") != m.end() && !m["AddonVersion"].empty()) {
      addonVersion = make_shared<string>(boost::any_cast<string>(m["AddonVersion"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ResourcesSpec") != m.end() && !m["ResourcesSpec"].empty()) {
      resourcesSpec = make_shared<string>(boost::any_cast<string>(m["ResourcesSpec"]));
    }
    if (m.find("ServicesSpec") != m.end() && !m["ServicesSpec"].empty()) {
      servicesSpec = make_shared<string>(boost::any_cast<string>(m["ServicesSpec"]));
    }
  }


  virtual ~InstallAddonRequest() = default;
};
class InstallAddonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> addonId{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};

  InstallAddonResponseBody() {}

  explicit InstallAddonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addonId) {
      res["AddonId"] = boost::any(*addonId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddonId") != m.end() && !m["AddonId"].empty()) {
      addonId = make_shared<string>(boost::any_cast<string>(m["AddonId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~InstallAddonResponseBody() = default;
};
class InstallAddonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InstallAddonResponseBody> body{};

  InstallAddonResponse() {}

  explicit InstallAddonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InstallAddonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InstallAddonResponseBody>(model1);
      }
    }
  }


  virtual ~InstallAddonResponse() = default;
};
class InstallSoftwaresRequestAdditionalPackages : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  InstallSoftwaresRequestAdditionalPackages() {}

  explicit InstallSoftwaresRequestAdditionalPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~InstallSoftwaresRequestAdditionalPackages() = default;
};
class InstallSoftwaresRequest : public Darabonba::Model {
public:
  shared_ptr<vector<InstallSoftwaresRequestAdditionalPackages>> additionalPackages{};
  shared_ptr<string> clusterId{};

  InstallSoftwaresRequest() {}

  explicit InstallSoftwaresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalPackages) {
      vector<boost::any> temp1;
      for(auto item1:*additionalPackages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdditionalPackages"] = boost::any(temp1);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalPackages") != m.end() && !m["AdditionalPackages"].empty()) {
      if (typeid(vector<boost::any>) == m["AdditionalPackages"].type()) {
        vector<InstallSoftwaresRequestAdditionalPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdditionalPackages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstallSoftwaresRequestAdditionalPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        additionalPackages = make_shared<vector<InstallSoftwaresRequestAdditionalPackages>>(expect1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~InstallSoftwaresRequest() = default;
};
class InstallSoftwaresShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> additionalPackagesShrink{};
  shared_ptr<string> clusterId{};

  InstallSoftwaresShrinkRequest() {}

  explicit InstallSoftwaresShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalPackagesShrink) {
      res["AdditionalPackages"] = boost::any(*additionalPackagesShrink);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalPackages") != m.end() && !m["AdditionalPackages"].empty()) {
      additionalPackagesShrink = make_shared<string>(boost::any_cast<string>(m["AdditionalPackages"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~InstallSoftwaresShrinkRequest() = default;
};
class InstallSoftwaresResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  InstallSoftwaresResponseBody() {}

  explicit InstallSoftwaresResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InstallSoftwaresResponseBody() = default;
};
class InstallSoftwaresResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InstallSoftwaresResponseBody> body{};

  InstallSoftwaresResponse() {}

  explicit InstallSoftwaresResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InstallSoftwaresResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InstallSoftwaresResponseBody>(model1);
      }
    }
  }


  virtual ~InstallSoftwaresResponse() = default;
};
class ListAddonTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addonNames{};
  shared_ptr<string> clusterCategory{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  ListAddonTemplatesRequest() {}

  explicit ListAddonTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addonNames) {
      res["AddonNames"] = boost::any(*addonNames);
    }
    if (clusterCategory) {
      res["ClusterCategory"] = boost::any(*clusterCategory);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddonNames") != m.end() && !m["AddonNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AddonNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AddonNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addonNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClusterCategory") != m.end() && !m["ClusterCategory"].empty()) {
      clusterCategory = make_shared<string>(boost::any_cast<string>(m["ClusterCategory"]));
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
  }


  virtual ~ListAddonTemplatesRequest() = default;
};
class ListAddonTemplatesResponseBodyAddons : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  ListAddonTemplatesResponseBodyAddons() {}

  explicit ListAddonTemplatesResponseBodyAddons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListAddonTemplatesResponseBodyAddons() = default;
};
class ListAddonTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAddonTemplatesResponseBodyAddons>> addons{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAddonTemplatesResponseBody() {}

  explicit ListAddonTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addons) {
      vector<boost::any> temp1;
      for(auto item1:*addons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Addons"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addons") != m.end() && !m["Addons"].empty()) {
      if (typeid(vector<boost::any>) == m["Addons"].type()) {
        vector<ListAddonTemplatesResponseBodyAddons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Addons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAddonTemplatesResponseBodyAddons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addons = make_shared<vector<ListAddonTemplatesResponseBodyAddons>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAddonTemplatesResponseBody() = default;
};
class ListAddonTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAddonTemplatesResponseBody> body{};

  ListAddonTemplatesResponse() {}

  explicit ListAddonTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAddonTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAddonTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAddonTemplatesResponse() = default;
};
class ListAddonsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addonIds{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAddonsRequest() {}

  explicit ListAddonsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addonIds) {
      res["AddonIds"] = boost::any(*addonIds);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("AddonIds") != m.end() && !m["AddonIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AddonIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AddonIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addonIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAddonsRequest() = default;
};
class ListAddonsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> addonIdsShrink{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAddonsShrinkRequest() {}

  explicit ListAddonsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addonIdsShrink) {
      res["AddonIds"] = boost::any(*addonIdsShrink);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("AddonIds") != m.end() && !m["AddonIds"].empty()) {
      addonIdsShrink = make_shared<string>(boost::any_cast<string>(m["AddonIds"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAddonsShrinkRequest() = default;
};
class ListAddonsResponseBodyAddons : public Darabonba::Model {
public:
  shared_ptr<string> addonId{};
  shared_ptr<string> description{};
  shared_ptr<string> installTime{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> version{};

  ListAddonsResponseBodyAddons() {}

  explicit ListAddonsResponseBodyAddons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addonId) {
      res["AddonId"] = boost::any(*addonId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (installTime) {
      res["InstallTime"] = boost::any(*installTime);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddonId") != m.end() && !m["AddonId"].empty()) {
      addonId = make_shared<string>(boost::any_cast<string>(m["AddonId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstallTime") != m.end() && !m["InstallTime"].empty()) {
      installTime = make_shared<string>(boost::any_cast<string>(m["InstallTime"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListAddonsResponseBodyAddons() = default;
};
class ListAddonsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAddonsResponseBodyAddons>> addons{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAddonsResponseBody() {}

  explicit ListAddonsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addons) {
      vector<boost::any> temp1;
      for(auto item1:*addons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Addons"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addons") != m.end() && !m["Addons"].empty()) {
      if (typeid(vector<boost::any>) == m["Addons"].type()) {
        vector<ListAddonsResponseBodyAddons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Addons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAddonsResponseBodyAddons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addons = make_shared<vector<ListAddonsResponseBodyAddons>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAddonsResponseBody() = default;
};
class ListAddonsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAddonsResponseBody> body{};

  ListAddonsResponse() {}

  explicit ListAddonsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAddonsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAddonsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAddonsResponse() = default;
};
class ListAvailableFileSystemsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAvailableFileSystemsRequest() {}

  explicit ListAvailableFileSystemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAvailableFileSystemsRequest() = default;
};
class ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList : public Darabonba::Model {
public:
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<string> networkType{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList() {}

  explicit ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList() = default;
};
class ListAvailableFileSystemsResponseBodyFileSystemList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<vector<ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList>> mountTargetList{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> status{};
  shared_ptr<string> storageType{};
  shared_ptr<string> vpcId{};

  ListAvailableFileSystemsResponseBodyFileSystemList() {}

  explicit ListAvailableFileSystemsResponseBodyFileSystemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (mountTargetList) {
      vector<boost::any> temp1;
      for(auto item1:*mountTargetList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MountTargetList"] = boost::any(temp1);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("MountTargetList") != m.end() && !m["MountTargetList"].empty()) {
      if (typeid(vector<boost::any>) == m["MountTargetList"].type()) {
        vector<ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MountTargetList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountTargetList = make_shared<vector<ListAvailableFileSystemsResponseBodyFileSystemListMountTargetList>>(expect1);
      }
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListAvailableFileSystemsResponseBodyFileSystemList() = default;
};
class ListAvailableFileSystemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAvailableFileSystemsResponseBodyFileSystemList>> fileSystemList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAvailableFileSystemsResponseBody() {}

  explicit ListAvailableFileSystemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemList) {
      vector<boost::any> temp1;
      for(auto item1:*fileSystemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileSystemList"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemList") != m.end() && !m["FileSystemList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileSystemList"].type()) {
        vector<ListAvailableFileSystemsResponseBodyFileSystemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileSystemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAvailableFileSystemsResponseBodyFileSystemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileSystemList = make_shared<vector<ListAvailableFileSystemsResponseBodyFileSystemList>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAvailableFileSystemsResponseBody() = default;
};
class ListAvailableFileSystemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAvailableFileSystemsResponseBody> body{};

  ListAvailableFileSystemsResponse() {}

  explicit ListAvailableFileSystemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAvailableFileSystemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAvailableFileSystemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAvailableFileSystemsResponse() = default;
};
class ListAvailableImagesRequestDirectoryService : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListAvailableImagesRequestDirectoryService() {}

  explicit ListAvailableImagesRequestDirectoryService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListAvailableImagesRequestDirectoryService() = default;
};
class ListAvailableImagesRequestScheduler : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListAvailableImagesRequestScheduler() {}

  explicit ListAvailableImagesRequestScheduler(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListAvailableImagesRequestScheduler() = default;
};
class ListAvailableImagesRequest : public Darabonba::Model {
public:
  shared_ptr<ListAvailableImagesRequestDirectoryService> directoryService{};
  shared_ptr<bool> enableHT{};
  shared_ptr<string> HPCInterConnect{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> isPublic{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<ListAvailableImagesRequestScheduler> scheduler{};

  ListAvailableImagesRequest() {}

  explicit ListAvailableImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryService) {
      res["DirectoryService"] = directoryService ? boost::any(directoryService->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (enableHT) {
      res["EnableHT"] = boost::any(*enableHT);
    }
    if (HPCInterConnect) {
      res["HPCInterConnect"] = boost::any(*HPCInterConnect);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (isPublic) {
      res["IsPublic"] = boost::any(*isPublic);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (scheduler) {
      res["Scheduler"] = scheduler ? boost::any(scheduler->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryService") != m.end() && !m["DirectoryService"].empty()) {
      if (typeid(map<string, boost::any>) == m["DirectoryService"].type()) {
        ListAvailableImagesRequestDirectoryService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DirectoryService"]));
        directoryService = make_shared<ListAvailableImagesRequestDirectoryService>(model1);
      }
    }
    if (m.find("EnableHT") != m.end() && !m["EnableHT"].empty()) {
      enableHT = make_shared<bool>(boost::any_cast<bool>(m["EnableHT"]));
    }
    if (m.find("HPCInterConnect") != m.end() && !m["HPCInterConnect"].empty()) {
      HPCInterConnect = make_shared<string>(boost::any_cast<string>(m["HPCInterConnect"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IsPublic") != m.end() && !m["IsPublic"].empty()) {
      isPublic = make_shared<bool>(boost::any_cast<bool>(m["IsPublic"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      if (typeid(map<string, boost::any>) == m["Scheduler"].type()) {
        ListAvailableImagesRequestScheduler model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Scheduler"]));
        scheduler = make_shared<ListAvailableImagesRequestScheduler>(model1);
      }
    }
  }


  virtual ~ListAvailableImagesRequest() = default;
};
class ListAvailableImagesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> directoryServiceShrink{};
  shared_ptr<bool> enableHT{};
  shared_ptr<string> HPCInterConnect{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> isPublic{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> schedulerShrink{};

  ListAvailableImagesShrinkRequest() {}

  explicit ListAvailableImagesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryServiceShrink) {
      res["DirectoryService"] = boost::any(*directoryServiceShrink);
    }
    if (enableHT) {
      res["EnableHT"] = boost::any(*enableHT);
    }
    if (HPCInterConnect) {
      res["HPCInterConnect"] = boost::any(*HPCInterConnect);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (isPublic) {
      res["IsPublic"] = boost::any(*isPublic);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (schedulerShrink) {
      res["Scheduler"] = boost::any(*schedulerShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DirectoryService") != m.end() && !m["DirectoryService"].empty()) {
      directoryServiceShrink = make_shared<string>(boost::any_cast<string>(m["DirectoryService"]));
    }
    if (m.find("EnableHT") != m.end() && !m["EnableHT"].empty()) {
      enableHT = make_shared<bool>(boost::any_cast<bool>(m["EnableHT"]));
    }
    if (m.find("HPCInterConnect") != m.end() && !m["HPCInterConnect"].empty()) {
      HPCInterConnect = make_shared<string>(boost::any_cast<string>(m["HPCInterConnect"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IsPublic") != m.end() && !m["IsPublic"].empty()) {
      isPublic = make_shared<bool>(boost::any_cast<bool>(m["IsPublic"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      schedulerShrink = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
  }


  virtual ~ListAvailableImagesShrinkRequest() = default;
};
class ListAvailableImagesResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> bootMode{};
  shared_ptr<string> description{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> OSName{};
  shared_ptr<string> OSNameEn{};
  shared_ptr<string> platform{};
  shared_ptr<string> size{};

  ListAvailableImagesResponseBodyImages() {}

  explicit ListAvailableImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["Architecture"] = boost::any(*architecture);
    }
    if (bootMode) {
      res["BootMode"] = boost::any(*bootMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageName) {
      res["ImageName"] = boost::any(*imageName);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (OSName) {
      res["OSName"] = boost::any(*OSName);
    }
    if (OSNameEn) {
      res["OSNameEn"] = boost::any(*OSNameEn);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Architecture") != m.end() && !m["Architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["Architecture"]));
    }
    if (m.find("BootMode") != m.end() && !m["BootMode"].empty()) {
      bootMode = make_shared<string>(boost::any_cast<string>(m["BootMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageName") != m.end() && !m["ImageName"].empty()) {
      imageName = make_shared<string>(boost::any_cast<string>(m["ImageName"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("OSName") != m.end() && !m["OSName"].empty()) {
      OSName = make_shared<string>(boost::any_cast<string>(m["OSName"]));
    }
    if (m.find("OSNameEn") != m.end() && !m["OSNameEn"].empty()) {
      OSNameEn = make_shared<string>(boost::any_cast<string>(m["OSNameEn"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
  }


  virtual ~ListAvailableImagesResponseBodyImages() = default;
};
class ListAvailableImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAvailableImagesResponseBodyImages>> images{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> totalCount{};

  ListAvailableImagesResponseBody() {}

  explicit ListAvailableImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<ListAvailableImagesResponseBodyImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAvailableImagesResponseBodyImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<ListAvailableImagesResponseBodyImages>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListAvailableImagesResponseBody() = default;
};
class ListAvailableImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAvailableImagesResponseBody> body{};

  ListAvailableImagesResponse() {}

  explicit ListAvailableImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAvailableImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAvailableImagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAvailableImagesResponse() = default;
};
class ListClustersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clusterIds{};
  shared_ptr<vector<string>> clusterNames{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListClustersRequest() {}

  explicit ListClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterIds) {
      res["ClusterIds"] = boost::any(*clusterIds);
    }
    if (clusterNames) {
      res["ClusterNames"] = boost::any(*clusterNames);
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
    if (m.find("ClusterIds") != m.end() && !m["ClusterIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClusterIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClusterIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusterIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClusterNames") != m.end() && !m["ClusterNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClusterNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClusterNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusterNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListClustersRequest() = default;
};
class ListClustersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterIdsShrink{};
  shared_ptr<string> clusterNamesShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListClustersShrinkRequest() {}

  explicit ListClustersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterIdsShrink) {
      res["ClusterIds"] = boost::any(*clusterIdsShrink);
    }
    if (clusterNamesShrink) {
      res["ClusterNames"] = boost::any(*clusterNamesShrink);
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
    if (m.find("ClusterIds") != m.end() && !m["ClusterIds"].empty()) {
      clusterIdsShrink = make_shared<string>(boost::any_cast<string>(m["ClusterIds"]));
    }
    if (m.find("ClusterNames") != m.end() && !m["ClusterNames"].empty()) {
      clusterNamesShrink = make_shared<string>(boost::any_cast<string>(m["ClusterNames"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListClustersShrinkRequest() = default;
};
class ListClustersResponseBodyClustersAdditionalPackages : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  ListClustersResponseBodyClustersAdditionalPackages() {}

  explicit ListClustersResponseBodyClustersAdditionalPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersAdditionalPackages() = default;
};
class ListClustersResponseBodyClustersAddonsResourcesSpec : public Darabonba::Model {
public:
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<string> eipInstanceId{};

  ListClustersResponseBodyClustersAddonsResourcesSpec() {}

  explicit ListClustersResponseBodyClustersAddonsResourcesSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (eipInstanceId) {
      res["EipInstanceId"] = boost::any(*eipInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("EipInstanceId") != m.end() && !m["EipInstanceId"].empty()) {
      eipInstanceId = make_shared<string>(boost::any_cast<string>(m["EipInstanceId"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersAddonsResourcesSpec() = default;
};
class ListClustersResponseBodyClustersAddonsServicesSpec : public Darabonba::Model {
public:
  shared_ptr<string> serviceAccessType{};
  shared_ptr<string> serviceAccessUrl{};
  shared_ptr<string> serviceName{};

  ListClustersResponseBodyClustersAddonsServicesSpec() {}

  explicit ListClustersResponseBodyClustersAddonsServicesSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceAccessType) {
      res["ServiceAccessType"] = boost::any(*serviceAccessType);
    }
    if (serviceAccessUrl) {
      res["ServiceAccessUrl"] = boost::any(*serviceAccessUrl);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceAccessType") != m.end() && !m["ServiceAccessType"].empty()) {
      serviceAccessType = make_shared<string>(boost::any_cast<string>(m["ServiceAccessType"]));
    }
    if (m.find("ServiceAccessUrl") != m.end() && !m["ServiceAccessUrl"].empty()) {
      serviceAccessUrl = make_shared<string>(boost::any_cast<string>(m["ServiceAccessUrl"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersAddonsServicesSpec() = default;
};
class ListClustersResponseBodyClustersAddons : public Darabonba::Model {
public:
  shared_ptr<string> addonId{};
  shared_ptr<string> description{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<ListClustersResponseBodyClustersAddonsResourcesSpec> resourcesSpec{};
  shared_ptr<vector<ListClustersResponseBodyClustersAddonsServicesSpec>> servicesSpec{};
  shared_ptr<string> status{};
  shared_ptr<string> version{};

  ListClustersResponseBodyClustersAddons() {}

  explicit ListClustersResponseBodyClustersAddons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addonId) {
      res["AddonId"] = boost::any(*addonId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourcesSpec) {
      res["ResourcesSpec"] = resourcesSpec ? boost::any(resourcesSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (servicesSpec) {
      vector<boost::any> temp1;
      for(auto item1:*servicesSpec){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServicesSpec"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddonId") != m.end() && !m["AddonId"].empty()) {
      addonId = make_shared<string>(boost::any_cast<string>(m["AddonId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourcesSpec") != m.end() && !m["ResourcesSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourcesSpec"].type()) {
        ListClustersResponseBodyClustersAddonsResourcesSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourcesSpec"]));
        resourcesSpec = make_shared<ListClustersResponseBodyClustersAddonsResourcesSpec>(model1);
      }
    }
    if (m.find("ServicesSpec") != m.end() && !m["ServicesSpec"].empty()) {
      if (typeid(vector<boost::any>) == m["ServicesSpec"].type()) {
        vector<ListClustersResponseBodyClustersAddonsServicesSpec> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServicesSpec"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyClustersAddonsServicesSpec model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servicesSpec = make_shared<vector<ListClustersResponseBodyClustersAddonsServicesSpec>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersAddons() = default;
};
class ListClustersResponseBodyClustersClusterCustomConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> args{};
  shared_ptr<string> script{};

  ListClustersResponseBodyClustersClusterCustomConfiguration() {}

  explicit ListClustersResponseBodyClustersClusterCustomConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (script) {
      res["Script"] = boost::any(*script);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      args = make_shared<string>(boost::any_cast<string>(m["Args"]));
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      script = make_shared<string>(boost::any_cast<string>(m["Script"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersClusterCustomConfiguration() = default;
};
class ListClustersResponseBodyClustersManagerDNS : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListClustersResponseBodyClustersManagerDNS() {}

  explicit ListClustersResponseBodyClustersManagerDNS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersManagerDNS() = default;
};
class ListClustersResponseBodyClustersManagerDirectoryService : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListClustersResponseBodyClustersManagerDirectoryService() {}

  explicit ListClustersResponseBodyClustersManagerDirectoryService(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersManagerDirectoryService() = default;
};
class ListClustersResponseBodyClustersManagerScheduler : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  ListClustersResponseBodyClustersManagerScheduler() {}

  explicit ListClustersResponseBodyClustersManagerScheduler(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersManagerScheduler() = default;
};
class ListClustersResponseBodyClustersManager : public Darabonba::Model {
public:
  shared_ptr<ListClustersResponseBodyClustersManagerDNS> DNS{};
  shared_ptr<ListClustersResponseBodyClustersManagerDirectoryService> directoryService{};
  shared_ptr<ListClustersResponseBodyClustersManagerScheduler> scheduler{};

  ListClustersResponseBodyClustersManager() {}

  explicit ListClustersResponseBodyClustersManager(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DNS) {
      res["DNS"] = DNS ? boost::any(DNS->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (directoryService) {
      res["DirectoryService"] = directoryService ? boost::any(directoryService->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduler) {
      res["Scheduler"] = scheduler ? boost::any(scheduler->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DNS") != m.end() && !m["DNS"].empty()) {
      if (typeid(map<string, boost::any>) == m["DNS"].type()) {
        ListClustersResponseBodyClustersManagerDNS model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DNS"]));
        DNS = make_shared<ListClustersResponseBodyClustersManagerDNS>(model1);
      }
    }
    if (m.find("DirectoryService") != m.end() && !m["DirectoryService"].empty()) {
      if (typeid(map<string, boost::any>) == m["DirectoryService"].type()) {
        ListClustersResponseBodyClustersManagerDirectoryService model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DirectoryService"]));
        directoryService = make_shared<ListClustersResponseBodyClustersManagerDirectoryService>(model1);
      }
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      if (typeid(map<string, boost::any>) == m["Scheduler"].type()) {
        ListClustersResponseBodyClustersManagerScheduler model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Scheduler"]));
        scheduler = make_shared<ListClustersResponseBodyClustersManagerScheduler>(model1);
      }
    }
  }


  virtual ~ListClustersResponseBodyClustersManager() = default;
};
class ListClustersResponseBodyClustersNodes : public Darabonba::Model {
public:
  shared_ptr<long> abnormalCounts{};
  shared_ptr<long> creatingCounts{};
  shared_ptr<long> runningCounts{};

  ListClustersResponseBodyClustersNodes() {}

  explicit ListClustersResponseBodyClustersNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abnormalCounts) {
      res["AbnormalCounts"] = boost::any(*abnormalCounts);
    }
    if (creatingCounts) {
      res["CreatingCounts"] = boost::any(*creatingCounts);
    }
    if (runningCounts) {
      res["RunningCounts"] = boost::any(*runningCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbnormalCounts") != m.end() && !m["AbnormalCounts"].empty()) {
      abnormalCounts = make_shared<long>(boost::any_cast<long>(m["AbnormalCounts"]));
    }
    if (m.find("CreatingCounts") != m.end() && !m["CreatingCounts"].empty()) {
      creatingCounts = make_shared<long>(boost::any_cast<long>(m["CreatingCounts"]));
    }
    if (m.find("RunningCounts") != m.end() && !m["RunningCounts"].empty()) {
      runningCounts = make_shared<long>(boost::any_cast<long>(m["RunningCounts"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersNodes() = default;
};
class ListClustersResponseBodyClustersUsers : public Darabonba::Model {
public:
  shared_ptr<long> normalCounts{};
  shared_ptr<long> sudoCounts{};

  ListClustersResponseBodyClustersUsers() {}

  explicit ListClustersResponseBodyClustersUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (normalCounts) {
      res["NormalCounts"] = boost::any(*normalCounts);
    }
    if (sudoCounts) {
      res["SudoCounts"] = boost::any(*sudoCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NormalCounts") != m.end() && !m["NormalCounts"].empty()) {
      normalCounts = make_shared<long>(boost::any_cast<long>(m["NormalCounts"]));
    }
    if (m.find("SudoCounts") != m.end() && !m["SudoCounts"].empty()) {
      sudoCounts = make_shared<long>(boost::any_cast<long>(m["SudoCounts"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersUsers() = default;
};
class ListClustersResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<vector<ListClustersResponseBodyClustersAdditionalPackages>> additionalPackages{};
  shared_ptr<vector<ListClustersResponseBodyClustersAddons>> addons{};
  shared_ptr<string> clusterCategory{};
  shared_ptr<string> clusterCreateTime{};
  shared_ptr<vector<string>> clusterCredentials{};
  shared_ptr<ListClustersResponseBodyClustersClusterCustomConfiguration> clusterCustomConfiguration{};
  shared_ptr<string> clusterDescription{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterMode{};
  shared_ptr<string> clusterModifyTime{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> clusterStatus{};
  shared_ptr<double> clusterUsedCoreTime{};
  shared_ptr<string> clusterVSwitchId{};
  shared_ptr<string> clusterVpcId{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<string> ehpcVersion{};
  shared_ptr<ListClustersResponseBodyClustersManager> manager{};
  shared_ptr<long> maxCoreCount{};
  shared_ptr<long> maxCount{};
  shared_ptr<ListClustersResponseBodyClustersNodes> nodes{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<ListClustersResponseBodyClustersUsers> users{};

  ListClustersResponseBodyClusters() {}

  explicit ListClustersResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalPackages) {
      vector<boost::any> temp1;
      for(auto item1:*additionalPackages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdditionalPackages"] = boost::any(temp1);
    }
    if (addons) {
      vector<boost::any> temp1;
      for(auto item1:*addons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Addons"] = boost::any(temp1);
    }
    if (clusterCategory) {
      res["ClusterCategory"] = boost::any(*clusterCategory);
    }
    if (clusterCreateTime) {
      res["ClusterCreateTime"] = boost::any(*clusterCreateTime);
    }
    if (clusterCredentials) {
      res["ClusterCredentials"] = boost::any(*clusterCredentials);
    }
    if (clusterCustomConfiguration) {
      res["ClusterCustomConfiguration"] = clusterCustomConfiguration ? boost::any(clusterCustomConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterDescription) {
      res["ClusterDescription"] = boost::any(*clusterDescription);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterMode) {
      res["ClusterMode"] = boost::any(*clusterMode);
    }
    if (clusterModifyTime) {
      res["ClusterModifyTime"] = boost::any(*clusterModifyTime);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (clusterStatus) {
      res["ClusterStatus"] = boost::any(*clusterStatus);
    }
    if (clusterUsedCoreTime) {
      res["ClusterUsedCoreTime"] = boost::any(*clusterUsedCoreTime);
    }
    if (clusterVSwitchId) {
      res["ClusterVSwitchId"] = boost::any(*clusterVSwitchId);
    }
    if (clusterVpcId) {
      res["ClusterVpcId"] = boost::any(*clusterVpcId);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (ehpcVersion) {
      res["EhpcVersion"] = boost::any(*ehpcVersion);
    }
    if (manager) {
      res["Manager"] = manager ? boost::any(manager->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxCoreCount) {
      res["MaxCoreCount"] = boost::any(*maxCoreCount);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (nodes) {
      res["Nodes"] = nodes ? boost::any(nodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (users) {
      res["Users"] = users ? boost::any(users->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalPackages") != m.end() && !m["AdditionalPackages"].empty()) {
      if (typeid(vector<boost::any>) == m["AdditionalPackages"].type()) {
        vector<ListClustersResponseBodyClustersAdditionalPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdditionalPackages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyClustersAdditionalPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        additionalPackages = make_shared<vector<ListClustersResponseBodyClustersAdditionalPackages>>(expect1);
      }
    }
    if (m.find("Addons") != m.end() && !m["Addons"].empty()) {
      if (typeid(vector<boost::any>) == m["Addons"].type()) {
        vector<ListClustersResponseBodyClustersAddons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Addons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyClustersAddons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addons = make_shared<vector<ListClustersResponseBodyClustersAddons>>(expect1);
      }
    }
    if (m.find("ClusterCategory") != m.end() && !m["ClusterCategory"].empty()) {
      clusterCategory = make_shared<string>(boost::any_cast<string>(m["ClusterCategory"]));
    }
    if (m.find("ClusterCreateTime") != m.end() && !m["ClusterCreateTime"].empty()) {
      clusterCreateTime = make_shared<string>(boost::any_cast<string>(m["ClusterCreateTime"]));
    }
    if (m.find("ClusterCredentials") != m.end() && !m["ClusterCredentials"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClusterCredentials"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClusterCredentials"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusterCredentials = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClusterCustomConfiguration") != m.end() && !m["ClusterCustomConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterCustomConfiguration"].type()) {
        ListClustersResponseBodyClustersClusterCustomConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterCustomConfiguration"]));
        clusterCustomConfiguration = make_shared<ListClustersResponseBodyClustersClusterCustomConfiguration>(model1);
      }
    }
    if (m.find("ClusterDescription") != m.end() && !m["ClusterDescription"].empty()) {
      clusterDescription = make_shared<string>(boost::any_cast<string>(m["ClusterDescription"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterMode") != m.end() && !m["ClusterMode"].empty()) {
      clusterMode = make_shared<string>(boost::any_cast<string>(m["ClusterMode"]));
    }
    if (m.find("ClusterModifyTime") != m.end() && !m["ClusterModifyTime"].empty()) {
      clusterModifyTime = make_shared<string>(boost::any_cast<string>(m["ClusterModifyTime"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("ClusterStatus") != m.end() && !m["ClusterStatus"].empty()) {
      clusterStatus = make_shared<string>(boost::any_cast<string>(m["ClusterStatus"]));
    }
    if (m.find("ClusterUsedCoreTime") != m.end() && !m["ClusterUsedCoreTime"].empty()) {
      clusterUsedCoreTime = make_shared<double>(boost::any_cast<double>(m["ClusterUsedCoreTime"]));
    }
    if (m.find("ClusterVSwitchId") != m.end() && !m["ClusterVSwitchId"].empty()) {
      clusterVSwitchId = make_shared<string>(boost::any_cast<string>(m["ClusterVSwitchId"]));
    }
    if (m.find("ClusterVpcId") != m.end() && !m["ClusterVpcId"].empty()) {
      clusterVpcId = make_shared<string>(boost::any_cast<string>(m["ClusterVpcId"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["DeletionProtection"]));
    }
    if (m.find("EhpcVersion") != m.end() && !m["EhpcVersion"].empty()) {
      ehpcVersion = make_shared<string>(boost::any_cast<string>(m["EhpcVersion"]));
    }
    if (m.find("Manager") != m.end() && !m["Manager"].empty()) {
      if (typeid(map<string, boost::any>) == m["Manager"].type()) {
        ListClustersResponseBodyClustersManager model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Manager"]));
        manager = make_shared<ListClustersResponseBodyClustersManager>(model1);
      }
    }
    if (m.find("MaxCoreCount") != m.end() && !m["MaxCoreCount"].empty()) {
      maxCoreCount = make_shared<long>(boost::any_cast<long>(m["MaxCoreCount"]));
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<long>(boost::any_cast<long>(m["MaxCount"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Nodes"].type()) {
        ListClustersResponseBodyClustersNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Nodes"]));
        nodes = make_shared<ListClustersResponseBodyClustersNodes>(model1);
      }
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(map<string, boost::any>) == m["Users"].type()) {
        ListClustersResponseBodyClustersUsers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Users"]));
        users = make_shared<ListClustersResponseBodyClustersUsers>(model1);
      }
    }
  }


  virtual ~ListClustersResponseBodyClusters() = default;
};
class ListClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListClustersResponseBodyClusters>> clusters{};
  shared_ptr<string> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListClustersResponseBody() {}

  explicit ListClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      vector<boost::any> temp1;
      for(auto item1:*clusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clusters"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<ListClustersResponseBodyClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<ListClustersResponseBodyClusters>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListClustersResponseBody() = default;
};
class ListClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClustersResponseBody> body{};

  ListClustersResponse() {}

  explicit ListClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListClustersResponse() = default;
};
class ListCommonLogsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> actionName{};
  shared_ptr<string> actionStatus{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> from{};
  shared_ptr<bool> isReverse{};
  shared_ptr<string> logRequestId{};
  shared_ptr<string> logType{};
  shared_ptr<string> operatorUid{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resource{};
  shared_ptr<long> to{};

  ListCommonLogsRequest() {}

  explicit ListCommonLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (actionStatus) {
      res["ActionStatus"] = boost::any(*actionStatus);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (isReverse) {
      res["IsReverse"] = boost::any(*isReverse);
    }
    if (logRequestId) {
      res["LogRequestId"] = boost::any(*logRequestId);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (operatorUid) {
      res["OperatorUid"] = boost::any(*operatorUid);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ActionName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ActionName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      actionName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ActionStatus") != m.end() && !m["ActionStatus"].empty()) {
      actionStatus = make_shared<string>(boost::any_cast<string>(m["ActionStatus"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("IsReverse") != m.end() && !m["IsReverse"].empty()) {
      isReverse = make_shared<bool>(boost::any_cast<bool>(m["IsReverse"]));
    }
    if (m.find("LogRequestId") != m.end() && !m["LogRequestId"].empty()) {
      logRequestId = make_shared<string>(boost::any_cast<string>(m["LogRequestId"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("OperatorUid") != m.end() && !m["OperatorUid"].empty()) {
      operatorUid = make_shared<string>(boost::any_cast<string>(m["OperatorUid"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~ListCommonLogsRequest() = default;
};
class ListCommonLogsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionNameShrink{};
  shared_ptr<string> actionStatus{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> from{};
  shared_ptr<bool> isReverse{};
  shared_ptr<string> logRequestId{};
  shared_ptr<string> logType{};
  shared_ptr<string> operatorUid{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resource{};
  shared_ptr<long> to{};

  ListCommonLogsShrinkRequest() {}

  explicit ListCommonLogsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionNameShrink) {
      res["ActionName"] = boost::any(*actionNameShrink);
    }
    if (actionStatus) {
      res["ActionStatus"] = boost::any(*actionStatus);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (isReverse) {
      res["IsReverse"] = boost::any(*isReverse);
    }
    if (logRequestId) {
      res["LogRequestId"] = boost::any(*logRequestId);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (operatorUid) {
      res["OperatorUid"] = boost::any(*operatorUid);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionNameShrink = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("ActionStatus") != m.end() && !m["ActionStatus"].empty()) {
      actionStatus = make_shared<string>(boost::any_cast<string>(m["ActionStatus"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("IsReverse") != m.end() && !m["IsReverse"].empty()) {
      isReverse = make_shared<bool>(boost::any_cast<bool>(m["IsReverse"]));
    }
    if (m.find("LogRequestId") != m.end() && !m["LogRequestId"].empty()) {
      logRequestId = make_shared<string>(boost::any_cast<string>(m["LogRequestId"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("OperatorUid") != m.end() && !m["OperatorUid"].empty()) {
      operatorUid = make_shared<string>(boost::any_cast<string>(m["OperatorUid"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~ListCommonLogsShrinkRequest() = default;
};
class ListCommonLogsResponseBodyLogs : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> logType{};
  shared_ptr<string> message{};
  shared_ptr<string> operatorUid{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> target{};
  shared_ptr<string> time{};

  ListCommonLogsResponseBodyLogs() {}

  explicit ListCommonLogsResponseBodyLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (operatorUid) {
      res["OperatorUid"] = boost::any(*operatorUid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OperatorUid") != m.end() && !m["OperatorUid"].empty()) {
      operatorUid = make_shared<string>(boost::any_cast<string>(m["OperatorUid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~ListCommonLogsResponseBodyLogs() = default;
};
class ListCommonLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCommonLogsResponseBodyLogs>> logs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> uid{};

  ListCommonLogsResponseBody() {}

  explicit ListCommonLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logs) {
      vector<boost::any> temp1;
      for(auto item1:*logs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Logs"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<ListCommonLogsResponseBodyLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Logs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCommonLogsResponseBodyLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logs = make_shared<vector<ListCommonLogsResponseBodyLogs>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~ListCommonLogsResponseBody() = default;
};
class ListCommonLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCommonLogsResponseBody> body{};

  ListCommonLogsResponse() {}

  explicit ListCommonLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCommonLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCommonLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCommonLogsResponse() = default;
};
class ListInstalledSoftwaresRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListInstalledSoftwaresRequest() {}

  explicit ListInstalledSoftwaresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListInstalledSoftwaresRequest() = default;
};
class ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> version{};

  ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos() {}

  explicit ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos() = default;
};
class ListInstalledSoftwaresResponseBodyAdditionalPackages : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos>> additionalPackageInfos{};

  ListInstalledSoftwaresResponseBodyAdditionalPackages() {}

  explicit ListInstalledSoftwaresResponseBodyAdditionalPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalPackageInfos) {
      vector<boost::any> temp1;
      for(auto item1:*additionalPackageInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdditionalPackageInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalPackageInfos") != m.end() && !m["AdditionalPackageInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["AdditionalPackageInfos"].type()) {
        vector<ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdditionalPackageInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        additionalPackageInfos = make_shared<vector<ListInstalledSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos>>(expect1);
      }
    }
  }


  virtual ~ListInstalledSoftwaresResponseBodyAdditionalPackages() = default;
};
class ListInstalledSoftwaresResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListInstalledSoftwaresResponseBodyAdditionalPackages> additionalPackages{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListInstalledSoftwaresResponseBody() {}

  explicit ListInstalledSoftwaresResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalPackages) {
      res["AdditionalPackages"] = additionalPackages ? boost::any(additionalPackages->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalPackages") != m.end() && !m["AdditionalPackages"].empty()) {
      if (typeid(map<string, boost::any>) == m["AdditionalPackages"].type()) {
        ListInstalledSoftwaresResponseBodyAdditionalPackages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AdditionalPackages"]));
        additionalPackages = make_shared<ListInstalledSoftwaresResponseBodyAdditionalPackages>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListInstalledSoftwaresResponseBody() = default;
};
class ListInstalledSoftwaresResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstalledSoftwaresResponseBody> body{};

  ListInstalledSoftwaresResponse() {}

  explicit ListInstalledSoftwaresResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstalledSoftwaresResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstalledSoftwaresResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstalledSoftwaresResponse() = default;
};
class ListJobsRequestJobFilterDiagnosis : public Darabonba::Model {
public:
  shared_ptr<string> operator_{};
  shared_ptr<string> option{};
  shared_ptr<string> threshold{};

  ListJobsRequestJobFilterDiagnosis() {}

  explicit ListJobsRequestJobFilterDiagnosis(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<string>(boost::any_cast<string>(m["Threshold"]));
    }
  }


  virtual ~ListJobsRequestJobFilterDiagnosis() = default;
};
class ListJobsRequestJobFilterSortBy : public Darabonba::Model {
public:
  shared_ptr<string> executeOrder{};
  shared_ptr<string> pendOrder{};
  shared_ptr<string> submitOrder{};

  ListJobsRequestJobFilterSortBy() {}

  explicit ListJobsRequestJobFilterSortBy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executeOrder) {
      res["ExecuteOrder"] = boost::any(*executeOrder);
    }
    if (pendOrder) {
      res["PendOrder"] = boost::any(*pendOrder);
    }
    if (submitOrder) {
      res["SubmitOrder"] = boost::any(*submitOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecuteOrder") != m.end() && !m["ExecuteOrder"].empty()) {
      executeOrder = make_shared<string>(boost::any_cast<string>(m["ExecuteOrder"]));
    }
    if (m.find("PendOrder") != m.end() && !m["PendOrder"].empty()) {
      pendOrder = make_shared<string>(boost::any_cast<string>(m["PendOrder"]));
    }
    if (m.find("SubmitOrder") != m.end() && !m["SubmitOrder"].empty()) {
      submitOrder = make_shared<string>(boost::any_cast<string>(m["SubmitOrder"]));
    }
  }


  virtual ~ListJobsRequestJobFilterSortBy() = default;
};
class ListJobsRequestJobFilter : public Darabonba::Model {
public:
  shared_ptr<string> createTimeEnd{};
  shared_ptr<string> createTimeStart{};
  shared_ptr<vector<ListJobsRequestJobFilterDiagnosis>> diagnosis{};
  shared_ptr<string> jobName{};
  shared_ptr<string> jobStatus{};
  shared_ptr<vector<string>> nodes{};
  shared_ptr<vector<string>> queues{};
  shared_ptr<ListJobsRequestJobFilterSortBy> sortBy{};
  shared_ptr<vector<string>> users{};

  ListJobsRequestJobFilter() {}

  explicit ListJobsRequestJobFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (diagnosis) {
      vector<boost::any> temp1;
      for(auto item1:*diagnosis){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Diagnosis"] = boost::any(temp1);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    if (queues) {
      res["Queues"] = boost::any(*queues);
    }
    if (sortBy) {
      res["SortBy"] = sortBy ? boost::any(sortBy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (users) {
      res["Users"] = boost::any(*users);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<string>(boost::any_cast<string>(m["CreateTimeEnd"]));
    }
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<string>(boost::any_cast<string>(m["CreateTimeStart"]));
    }
    if (m.find("Diagnosis") != m.end() && !m["Diagnosis"].empty()) {
      if (typeid(vector<boost::any>) == m["Diagnosis"].type()) {
        vector<ListJobsRequestJobFilterDiagnosis> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Diagnosis"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobsRequestJobFilterDiagnosis model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        diagnosis = make_shared<vector<ListJobsRequestJobFilterDiagnosis>>(expect1);
      }
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["JobStatus"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Nodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Queues") != m.end() && !m["Queues"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Queues"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Queues"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      queues = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      if (typeid(map<string, boost::any>) == m["SortBy"].type()) {
        ListJobsRequestJobFilterSortBy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SortBy"]));
        sortBy = make_shared<ListJobsRequestJobFilterSortBy>(model1);
      }
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


  virtual ~ListJobsRequestJobFilter() = default;
};
class ListJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<ListJobsRequestJobFilter> jobFilter{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListJobsRequest() {}

  explicit ListJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobFilter) {
      res["JobFilter"] = jobFilter ? boost::any(jobFilter->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobFilter") != m.end() && !m["JobFilter"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobFilter"].type()) {
        ListJobsRequestJobFilter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobFilter"]));
        jobFilter = make_shared<ListJobsRequestJobFilter>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListJobsRequest() = default;
};
class ListJobsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobFilterShrink{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListJobsShrinkRequest() {}

  explicit ListJobsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobFilterShrink) {
      res["JobFilter"] = boost::any(*jobFilterShrink);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobFilter") != m.end() && !m["JobFilter"].empty()) {
      jobFilterShrink = make_shared<string>(boost::any_cast<string>(m["JobFilter"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListJobsShrinkRequest() = default;
};
class ListJobsResponseBodyJobsJobSpecResources : public Darabonba::Model {
public:
  shared_ptr<string> cores{};
  shared_ptr<string> gpus{};
  shared_ptr<string> memory{};
  shared_ptr<string> nodes{};

  ListJobsResponseBodyJobsJobSpecResources() {}

  explicit ListJobsResponseBodyJobsJobSpecResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cores) {
      res["Cores"] = boost::any(*cores);
    }
    if (gpus) {
      res["Gpus"] = boost::any(*gpus);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cores") != m.end() && !m["Cores"].empty()) {
      cores = make_shared<string>(boost::any_cast<string>(m["Cores"]));
    }
    if (m.find("Gpus") != m.end() && !m["Gpus"].empty()) {
      gpus = make_shared<string>(boost::any_cast<string>(m["Gpus"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodes = make_shared<string>(boost::any_cast<string>(m["Nodes"]));
    }
  }


  virtual ~ListJobsResponseBodyJobsJobSpecResources() = default;
};
class ListJobsResponseBodyJobsJobSpecResourcesActualOccupied : public Darabonba::Model {
public:
  shared_ptr<string> cores{};
  shared_ptr<string> gpus{};
  shared_ptr<string> memory{};
  shared_ptr<string> nodes{};

  ListJobsResponseBodyJobsJobSpecResourcesActualOccupied() {}

  explicit ListJobsResponseBodyJobsJobSpecResourcesActualOccupied(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cores) {
      res["Cores"] = boost::any(*cores);
    }
    if (gpus) {
      res["Gpus"] = boost::any(*gpus);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cores") != m.end() && !m["Cores"].empty()) {
      cores = make_shared<string>(boost::any_cast<string>(m["Cores"]));
    }
    if (m.find("Gpus") != m.end() && !m["Gpus"].empty()) {
      gpus = make_shared<string>(boost::any_cast<string>(m["Gpus"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodes = make_shared<string>(boost::any_cast<string>(m["Nodes"]));
    }
  }


  virtual ~ListJobsResponseBodyJobsJobSpecResourcesActualOccupied() = default;
};
class ListJobsResponseBodyJobsJobSpec : public Darabonba::Model {
public:
  shared_ptr<string> arrayJobId{};
  shared_ptr<string> arrayJobSubId{};
  shared_ptr<string> arrayRequest{};
  shared_ptr<string> comment{};
  shared_ptr<string> id{};
  shared_ptr<string> jobQueue{};
  shared_ptr<string> lastModifyTime{};
  shared_ptr<string> nodeList{};
  shared_ptr<string> priority{};
  shared_ptr<ListJobsResponseBodyJobsJobSpecResources> resources{};
  shared_ptr<ListJobsResponseBodyJobsJobSpecResourcesActualOccupied> resourcesActualOccupied{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};
  shared_ptr<string> stderrPath{};
  shared_ptr<string> stdoutPath{};
  shared_ptr<string> submitTime{};
  shared_ptr<string> variables{};

  ListJobsResponseBodyJobsJobSpec() {}

  explicit ListJobsResponseBodyJobsJobSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayJobId) {
      res["ArrayJobId"] = boost::any(*arrayJobId);
    }
    if (arrayJobSubId) {
      res["ArrayJobSubId"] = boost::any(*arrayJobSubId);
    }
    if (arrayRequest) {
      res["ArrayRequest"] = boost::any(*arrayRequest);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (jobQueue) {
      res["JobQueue"] = boost::any(*jobQueue);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (nodeList) {
      res["NodeList"] = boost::any(*nodeList);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resources) {
      res["Resources"] = resources ? boost::any(resources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourcesActualOccupied) {
      res["ResourcesActualOccupied"] = resourcesActualOccupied ? boost::any(resourcesActualOccupied->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (stderrPath) {
      res["StderrPath"] = boost::any(*stderrPath);
    }
    if (stdoutPath) {
      res["StdoutPath"] = boost::any(*stdoutPath);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    if (variables) {
      res["Variables"] = boost::any(*variables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayJobId") != m.end() && !m["ArrayJobId"].empty()) {
      arrayJobId = make_shared<string>(boost::any_cast<string>(m["ArrayJobId"]));
    }
    if (m.find("ArrayJobSubId") != m.end() && !m["ArrayJobSubId"].empty()) {
      arrayJobSubId = make_shared<string>(boost::any_cast<string>(m["ArrayJobSubId"]));
    }
    if (m.find("ArrayRequest") != m.end() && !m["ArrayRequest"].empty()) {
      arrayRequest = make_shared<string>(boost::any_cast<string>(m["ArrayRequest"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("JobQueue") != m.end() && !m["JobQueue"].empty()) {
      jobQueue = make_shared<string>(boost::any_cast<string>(m["JobQueue"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<string>(boost::any_cast<string>(m["LastModifyTime"]));
    }
    if (m.find("NodeList") != m.end() && !m["NodeList"].empty()) {
      nodeList = make_shared<string>(boost::any_cast<string>(m["NodeList"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resources"].type()) {
        ListJobsResponseBodyJobsJobSpecResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resources"]));
        resources = make_shared<ListJobsResponseBodyJobsJobSpecResources>(model1);
      }
    }
    if (m.find("ResourcesActualOccupied") != m.end() && !m["ResourcesActualOccupied"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourcesActualOccupied"].type()) {
        ListJobsResponseBodyJobsJobSpecResourcesActualOccupied model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourcesActualOccupied"]));
        resourcesActualOccupied = make_shared<ListJobsResponseBodyJobsJobSpecResourcesActualOccupied>(model1);
      }
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("StderrPath") != m.end() && !m["StderrPath"].empty()) {
      stderrPath = make_shared<string>(boost::any_cast<string>(m["StderrPath"]));
    }
    if (m.find("StdoutPath") != m.end() && !m["StdoutPath"].empty()) {
      stdoutPath = make_shared<string>(boost::any_cast<string>(m["StdoutPath"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["Variables"]));
    }
  }


  virtual ~ListJobsResponseBodyJobsJobSpec() = default;
};
class ListJobsResponseBodyJobs : public Darabonba::Model {
public:
  shared_ptr<string> jobName{};
  shared_ptr<ListJobsResponseBodyJobsJobSpec> jobSpec{};

  ListJobsResponseBodyJobs() {}

  explicit ListJobsResponseBodyJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (jobSpec) {
      res["JobSpec"] = jobSpec ? boost::any(jobSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("JobSpec") != m.end() && !m["JobSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobSpec"].type()) {
        ListJobsResponseBodyJobsJobSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobSpec"]));
        jobSpec = make_shared<ListJobsResponseBodyJobsJobSpec>(model1);
      }
    }
  }


  virtual ~ListJobsResponseBodyJobs() = default;
};
class ListJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListJobsResponseBodyJobs>> jobs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  ListJobsResponseBody() {}

  explicit ListJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Jobs"] = boost::any(temp1);
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["Jobs"].type()) {
        vector<ListJobsResponseBodyJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobsResponseBodyJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<ListJobsResponseBodyJobs>>(expect1);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListJobsResponseBody() = default;
};
class ListJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListJobsResponseBody> body{};

  ListJobsResponse() {}

  explicit ListJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListJobsResponse() = default;
};
class ListNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<string>> hostnames{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> privateIpAddress{};
  shared_ptr<vector<string>> queueNames{};
  shared_ptr<string> sequence{};
  shared_ptr<string> sortBy{};
  shared_ptr<vector<string>> status{};

  ListNodesRequest() {}

  explicit ListNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hostnames) {
      res["Hostnames"] = boost::any(*hostnames);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (queueNames) {
      res["QueueNames"] = boost::any(*queueNames);
    }
    if (sequence) {
      res["Sequence"] = boost::any(*sequence);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Hostnames") != m.end() && !m["Hostnames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Hostnames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Hostnames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hostnames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PrivateIpAddress"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PrivateIpAddress"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      privateIpAddress = make_shared<vector<string>>(toVec1);
    }
    if (m.find("QueueNames") != m.end() && !m["QueueNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["QueueNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QueueNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      queueNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Sequence") != m.end() && !m["Sequence"].empty()) {
      sequence = make_shared<string>(boost::any_cast<string>(m["Sequence"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Status"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Status"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      status = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListNodesRequest() = default;
};
class ListNodesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> hostnamesShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> privateIpAddressShrink{};
  shared_ptr<string> queueNamesShrink{};
  shared_ptr<string> sequence{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> statusShrink{};

  ListNodesShrinkRequest() {}

  explicit ListNodesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hostnamesShrink) {
      res["Hostnames"] = boost::any(*hostnamesShrink);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (privateIpAddressShrink) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddressShrink);
    }
    if (queueNamesShrink) {
      res["QueueNames"] = boost::any(*queueNamesShrink);
    }
    if (sequence) {
      res["Sequence"] = boost::any(*sequence);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (statusShrink) {
      res["Status"] = boost::any(*statusShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Hostnames") != m.end() && !m["Hostnames"].empty()) {
      hostnamesShrink = make_shared<string>(boost::any_cast<string>(m["Hostnames"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddressShrink = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("QueueNames") != m.end() && !m["QueueNames"].empty()) {
      queueNamesShrink = make_shared<string>(boost::any_cast<string>(m["QueueNames"]));
    }
    if (m.find("Sequence") != m.end() && !m["Sequence"].empty()) {
      sequence = make_shared<string>(boost::any_cast<string>(m["Sequence"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      statusShrink = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListNodesShrinkRequest() = default;
};
class ListNodesResponseBodyNodesTotalResources : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memory{};

  ListNodesResponseBodyNodesTotalResources() {}

  explicit ListNodesResponseBodyNodesTotalResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
  }


  virtual ~ListNodesResponseBodyNodesTotalResources() = default;
};
class ListNodesResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<string> addTime{};
  shared_ptr<string> deploymentSetId{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> hostname{};
  shared_ptr<bool> htEnabled{};
  shared_ptr<string> id{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> ipAddress{};
  shared_ptr<bool> keepAlive{};
  shared_ptr<string> publicIpAddress{};
  shared_ptr<string> queueName{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> stateInSched{};
  shared_ptr<string> status{};
  shared_ptr<ListNodesResponseBodyNodesTotalResources> totalResources{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ListNodesResponseBodyNodes() {}

  explicit ListNodesResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addTime) {
      res["AddTime"] = boost::any(*addTime);
    }
    if (deploymentSetId) {
      res["DeploymentSetId"] = boost::any(*deploymentSetId);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (htEnabled) {
      res["HtEnabled"] = boost::any(*htEnabled);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (keepAlive) {
      res["KeepAlive"] = boost::any(*keepAlive);
    }
    if (publicIpAddress) {
      res["PublicIpAddress"] = boost::any(*publicIpAddress);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (stateInSched) {
      res["StateInSched"] = boost::any(*stateInSched);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalResources) {
      res["TotalResources"] = totalResources ? boost::any(totalResources->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AddTime") != m.end() && !m["AddTime"].empty()) {
      addTime = make_shared<string>(boost::any_cast<string>(m["AddTime"]));
    }
    if (m.find("DeploymentSetId") != m.end() && !m["DeploymentSetId"].empty()) {
      deploymentSetId = make_shared<string>(boost::any_cast<string>(m["DeploymentSetId"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("HtEnabled") != m.end() && !m["HtEnabled"].empty()) {
      htEnabled = make_shared<bool>(boost::any_cast<bool>(m["HtEnabled"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("KeepAlive") != m.end() && !m["KeepAlive"].empty()) {
      keepAlive = make_shared<bool>(boost::any_cast<bool>(m["KeepAlive"]));
    }
    if (m.find("PublicIpAddress") != m.end() && !m["PublicIpAddress"].empty()) {
      publicIpAddress = make_shared<string>(boost::any_cast<string>(m["PublicIpAddress"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("StateInSched") != m.end() && !m["StateInSched"].empty()) {
      stateInSched = make_shared<string>(boost::any_cast<string>(m["StateInSched"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalResources") != m.end() && !m["TotalResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TotalResources"].type()) {
        ListNodesResponseBodyNodesTotalResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TotalResources"]));
        totalResources = make_shared<ListNodesResponseBodyNodesTotalResources>(model1);
      }
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


  virtual ~ListNodesResponseBodyNodes() = default;
};
class ListNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesResponseBodyNodes>> nodes{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListNodesResponseBody() {}

  explicit ListNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<ListNodesResponseBodyNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ListNodesResponseBodyNodes>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
class ListQueuesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<string>> queueNames{};

  ListQueuesRequest() {}

  explicit ListQueuesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (queueNames) {
      res["QueueNames"] = boost::any(*queueNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("QueueNames") != m.end() && !m["QueueNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["QueueNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QueueNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      queueNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListQueuesRequest() = default;
};
class ListQueuesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> queueNamesShrink{};

  ListQueuesShrinkRequest() {}

  explicit ListQueuesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (queueNamesShrink) {
      res["QueueNames"] = boost::any(*queueNamesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("QueueNames") != m.end() && !m["QueueNames"].empty()) {
      queueNamesShrink = make_shared<string>(boost::any_cast<string>(m["QueueNames"]));
    }
  }


  virtual ~ListQueuesShrinkRequest() = default;
};
class ListQueuesResponseBodyQueuesNodes : public Darabonba::Model {
public:
  shared_ptr<long> creatingCounts{};
  shared_ptr<long> exceptionCounts{};
  shared_ptr<long> runningCounts{};

  ListQueuesResponseBodyQueuesNodes() {}

  explicit ListQueuesResponseBodyQueuesNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatingCounts) {
      res["CreatingCounts"] = boost::any(*creatingCounts);
    }
    if (exceptionCounts) {
      res["ExceptionCounts"] = boost::any(*exceptionCounts);
    }
    if (runningCounts) {
      res["RunningCounts"] = boost::any(*runningCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatingCounts") != m.end() && !m["CreatingCounts"].empty()) {
      creatingCounts = make_shared<long>(boost::any_cast<long>(m["CreatingCounts"]));
    }
    if (m.find("ExceptionCounts") != m.end() && !m["ExceptionCounts"].empty()) {
      exceptionCounts = make_shared<long>(boost::any_cast<long>(m["ExceptionCounts"]));
    }
    if (m.find("RunningCounts") != m.end() && !m["RunningCounts"].empty()) {
      runningCounts = make_shared<long>(boost::any_cast<long>(m["RunningCounts"]));
    }
  }


  virtual ~ListQueuesResponseBodyQueuesNodes() = default;
};
class ListQueuesResponseBodyQueues : public Darabonba::Model {
public:
  shared_ptr<vector<NodeTemplate>> computeNodes{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> enableScaleIn{};
  shared_ptr<bool> enableScaleOut{};
  shared_ptr<long> maxCount{};
  shared_ptr<long> maxCountPerCycle{};
  shared_ptr<long> minCount{};
  shared_ptr<ListQueuesResponseBodyQueuesNodes> nodes{};
  shared_ptr<string> queueName{};
  shared_ptr<long> totalCores{};
  shared_ptr<string> updateTime{};
  shared_ptr<vector<string>> vSwitchIds{};

  ListQueuesResponseBodyQueues() {}

  explicit ListQueuesResponseBodyQueues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeNodes) {
      vector<boost::any> temp1;
      for(auto item1:*computeNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComputeNodes"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (enableScaleIn) {
      res["EnableScaleIn"] = boost::any(*enableScaleIn);
    }
    if (enableScaleOut) {
      res["EnableScaleOut"] = boost::any(*enableScaleOut);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (maxCountPerCycle) {
      res["MaxCountPerCycle"] = boost::any(*maxCountPerCycle);
    }
    if (minCount) {
      res["MinCount"] = boost::any(*minCount);
    }
    if (nodes) {
      res["Nodes"] = nodes ? boost::any(nodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (totalCores) {
      res["TotalCores"] = boost::any(*totalCores);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComputeNodes") != m.end() && !m["ComputeNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ComputeNodes"].type()) {
        vector<NodeTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComputeNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NodeTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        computeNodes = make_shared<vector<NodeTemplate>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EnableScaleIn") != m.end() && !m["EnableScaleIn"].empty()) {
      enableScaleIn = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleIn"]));
    }
    if (m.find("EnableScaleOut") != m.end() && !m["EnableScaleOut"].empty()) {
      enableScaleOut = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleOut"]));
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<long>(boost::any_cast<long>(m["MaxCount"]));
    }
    if (m.find("MaxCountPerCycle") != m.end() && !m["MaxCountPerCycle"].empty()) {
      maxCountPerCycle = make_shared<long>(boost::any_cast<long>(m["MaxCountPerCycle"]));
    }
    if (m.find("MinCount") != m.end() && !m["MinCount"].empty()) {
      minCount = make_shared<long>(boost::any_cast<long>(m["MinCount"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Nodes"].type()) {
        ListQueuesResponseBodyQueuesNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Nodes"]));
        nodes = make_shared<ListQueuesResponseBodyQueuesNodes>(model1);
      }
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("TotalCores") != m.end() && !m["TotalCores"].empty()) {
      totalCores = make_shared<long>(boost::any_cast<long>(m["TotalCores"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListQueuesResponseBodyQueues() = default;
};
class ListQueuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListQueuesResponseBodyQueues>> queues{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListQueuesResponseBody() {}

  explicit ListQueuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queues) {
      vector<boost::any> temp1;
      for(auto item1:*queues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Queues"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Queues") != m.end() && !m["Queues"].empty()) {
      if (typeid(vector<boost::any>) == m["Queues"].type()) {
        vector<ListQueuesResponseBodyQueues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Queues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQueuesResponseBodyQueues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queues = make_shared<vector<ListQueuesResponseBodyQueues>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListQueuesResponseBody() = default;
};
class ListQueuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQueuesResponseBody> body{};

  ListQueuesResponse() {}

  explicit ListQueuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListQueuesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQueuesResponseBody>(model1);
      }
    }
  }


  virtual ~ListQueuesResponse() = default;
};
class ListSharedStoragesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemType{};

  ListSharedStoragesRequest() {}

  explicit ListSharedStoragesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
  }


  virtual ~ListSharedStoragesRequest() = default;
};
class ListSharedStoragesResponseBodySharedStoragesMountInfo : public Darabonba::Model {
public:
  shared_ptr<string> mountDirectory{};
  shared_ptr<string> mountOptions{};
  shared_ptr<string> mountTarget{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> storageDirectory{};

  ListSharedStoragesResponseBodySharedStoragesMountInfo() {}

  explicit ListSharedStoragesResponseBodySharedStoragesMountInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountDirectory) {
      res["MountDirectory"] = boost::any(*mountDirectory);
    }
    if (mountOptions) {
      res["MountOptions"] = boost::any(*mountOptions);
    }
    if (mountTarget) {
      res["MountTarget"] = boost::any(*mountTarget);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (storageDirectory) {
      res["StorageDirectory"] = boost::any(*storageDirectory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountDirectory") != m.end() && !m["MountDirectory"].empty()) {
      mountDirectory = make_shared<string>(boost::any_cast<string>(m["MountDirectory"]));
    }
    if (m.find("MountOptions") != m.end() && !m["MountOptions"].empty()) {
      mountOptions = make_shared<string>(boost::any_cast<string>(m["MountOptions"]));
    }
    if (m.find("MountTarget") != m.end() && !m["MountTarget"].empty()) {
      mountTarget = make_shared<string>(boost::any_cast<string>(m["MountTarget"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("StorageDirectory") != m.end() && !m["StorageDirectory"].empty()) {
      storageDirectory = make_shared<string>(boost::any_cast<string>(m["StorageDirectory"]));
    }
  }


  virtual ~ListSharedStoragesResponseBodySharedStoragesMountInfo() = default;
};
class ListSharedStoragesResponseBodySharedStorages : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemProtocol{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<vector<ListSharedStoragesResponseBodySharedStoragesMountInfo>> mountInfo{};

  ListSharedStoragesResponseBodySharedStorages() {}

  explicit ListSharedStoragesResponseBodySharedStorages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemProtocol) {
      res["FileSystemProtocol"] = boost::any(*fileSystemProtocol);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (mountInfo) {
      vector<boost::any> temp1;
      for(auto item1:*mountInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MountInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemProtocol") != m.end() && !m["FileSystemProtocol"].empty()) {
      fileSystemProtocol = make_shared<string>(boost::any_cast<string>(m["FileSystemProtocol"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("MountInfo") != m.end() && !m["MountInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["MountInfo"].type()) {
        vector<ListSharedStoragesResponseBodySharedStoragesMountInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MountInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSharedStoragesResponseBodySharedStoragesMountInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountInfo = make_shared<vector<ListSharedStoragesResponseBodySharedStoragesMountInfo>>(expect1);
      }
    }
  }


  virtual ~ListSharedStoragesResponseBodySharedStorages() = default;
};
class ListSharedStoragesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSharedStoragesResponseBodySharedStorages>> sharedStorages{};
  shared_ptr<string> success{};

  ListSharedStoragesResponseBody() {}

  explicit ListSharedStoragesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sharedStorages) {
      vector<boost::any> temp1;
      for(auto item1:*sharedStorages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SharedStorages"] = boost::any(temp1);
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
    if (m.find("SharedStorages") != m.end() && !m["SharedStorages"].empty()) {
      if (typeid(vector<boost::any>) == m["SharedStorages"].type()) {
        vector<ListSharedStoragesResponseBodySharedStorages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SharedStorages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSharedStoragesResponseBodySharedStorages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sharedStorages = make_shared<vector<ListSharedStoragesResponseBodySharedStorages>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~ListSharedStoragesResponseBody() = default;
};
class ListSharedStoragesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSharedStoragesResponseBody> body{};

  ListSharedStoragesResponse() {}

  explicit ListSharedStoragesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSharedStoragesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSharedStoragesResponseBody>(model1);
      }
    }
  }


  virtual ~ListSharedStoragesResponse() = default;
};
class ListSoftwaresRequestOsInfos : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> osTag{};

  ListSoftwaresRequestOsInfos() {}

  explicit ListSoftwaresRequestOsInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["Architecture"] = boost::any(*architecture);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Architecture") != m.end() && !m["Architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["Architecture"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
  }


  virtual ~ListSoftwaresRequestOsInfos() = default;
};
class ListSoftwaresRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> name{};
  shared_ptr<vector<ListSoftwaresRequestOsInfos>> osInfos{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListSoftwaresRequest() {}

  explicit ListSoftwaresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (osInfos) {
      vector<boost::any> temp1;
      for(auto item1:*osInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OsInfos"] = boost::any(temp1);
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
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OsInfos") != m.end() && !m["OsInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["OsInfos"].type()) {
        vector<ListSoftwaresRequestOsInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OsInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSoftwaresRequestOsInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        osInfos = make_shared<vector<ListSoftwaresRequestOsInfos>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListSoftwaresRequest() = default;
};
class ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> osTag{};

  ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos() {}

  explicit ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["Architecture"] = boost::any(*architecture);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Architecture") != m.end() && !m["Architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["Architecture"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
  }


  virtual ~ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos() = default;
};
class ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs : public Darabonba::Model {
public:
  shared_ptr<vector<ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos>> supportOsInfos{};

  ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs() {}

  explicit ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (supportOsInfos) {
      vector<boost::any> temp1;
      for(auto item1:*supportOsInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SupportOsInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SupportOsInfos") != m.end() && !m["SupportOsInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["SupportOsInfos"].type()) {
        vector<ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SupportOsInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        supportOsInfos = make_shared<vector<ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOsSupportOsInfos>>(expect1);
      }
    }
  }


  virtual ~ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs() = default;
};
class ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos : public Darabonba::Model {
public:
  shared_ptr<string> latest{};
  shared_ptr<ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs> supportOs{};
  shared_ptr<string> version{};

  ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos() {}

  explicit ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (latest) {
      res["Latest"] = boost::any(*latest);
    }
    if (supportOs) {
      res["SupportOs"] = supportOs ? boost::any(supportOs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Latest") != m.end() && !m["Latest"].empty()) {
      latest = make_shared<string>(boost::any_cast<string>(m["Latest"]));
    }
    if (m.find("SupportOs") != m.end() && !m["SupportOs"].empty()) {
      if (typeid(map<string, boost::any>) == m["SupportOs"].type()) {
        ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SupportOs"]));
        supportOs = make_shared<ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfosSupportOs>(model1);
      }
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos() = default;
};
class ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions : public Darabonba::Model {
public:
  shared_ptr<vector<ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos>> versionInfos{};

  ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions() {}

  explicit ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionInfos) {
      vector<boost::any> temp1;
      for(auto item1:*versionInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VersionInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionInfos") != m.end() && !m["VersionInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["VersionInfos"].type()) {
        vector<ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VersionInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versionInfos = make_shared<vector<ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersionsVersionInfos>>(expect1);
      }
    }
  }


  virtual ~ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions() = default;
};
class ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> name{};
  shared_ptr<ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions> versions{};

  ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos() {}

  explicit ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (versions) {
      res["Versions"] = versions ? boost::any(versions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Versions"].type()) {
        ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Versions"]));
        versions = make_shared<ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfosVersions>(model1);
      }
    }
  }


  virtual ~ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos() = default;
};
class ListSoftwaresResponseBodyAdditionalPackages : public Darabonba::Model {
public:
  shared_ptr<vector<ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos>> additionalPackageInfos{};

  ListSoftwaresResponseBodyAdditionalPackages() {}

  explicit ListSoftwaresResponseBodyAdditionalPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalPackageInfos) {
      vector<boost::any> temp1;
      for(auto item1:*additionalPackageInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdditionalPackageInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalPackageInfos") != m.end() && !m["AdditionalPackageInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["AdditionalPackageInfos"].type()) {
        vector<ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdditionalPackageInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        additionalPackageInfos = make_shared<vector<ListSoftwaresResponseBodyAdditionalPackagesAdditionalPackageInfos>>(expect1);
      }
    }
  }


  virtual ~ListSoftwaresResponseBodyAdditionalPackages() = default;
};
class ListSoftwaresResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListSoftwaresResponseBodyAdditionalPackages> additionalPackages{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalCount{};

  ListSoftwaresResponseBody() {}

  explicit ListSoftwaresResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalPackages) {
      res["AdditionalPackages"] = additionalPackages ? boost::any(additionalPackages->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalPackages") != m.end() && !m["AdditionalPackages"].empty()) {
      if (typeid(map<string, boost::any>) == m["AdditionalPackages"].type()) {
        ListSoftwaresResponseBodyAdditionalPackages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AdditionalPackages"]));
        additionalPackages = make_shared<ListSoftwaresResponseBodyAdditionalPackages>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListSoftwaresResponseBody() = default;
};
class ListSoftwaresResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSoftwaresResponseBody> body{};

  ListSoftwaresResponse() {}

  explicit ListSoftwaresResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSoftwaresResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSoftwaresResponseBody>(model1);
      }
    }
  }


  virtual ~ListSoftwaresResponse() = default;
};
class ListUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListUsersRequest() {}

  explicit ListUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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
class ListUsersResponseBodyUsersUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> addTime{};
  shared_ptr<string> group{};
  shared_ptr<string> groupId{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};

  ListUsersResponseBodyUsersUserInfo() {}

  explicit ListUsersResponseBodyUsersUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addTime) {
      res["AddTime"] = boost::any(*addTime);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddTime") != m.end() && !m["AddTime"].empty()) {
      addTime = make_shared<string>(boost::any_cast<string>(m["AddTime"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ListUsersResponseBodyUsersUserInfo() = default;
};
class ListUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<vector<ListUsersResponseBodyUsersUserInfo>> userInfo{};

  ListUsersResponseBodyUsers() {}

  explicit ListUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfo) {
      vector<boost::any> temp1;
      for(auto item1:*userInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["UserInfo"].type()) {
        vector<ListUsersResponseBodyUsersUserInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUsersResponseBodyUsersUserInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userInfo = make_shared<vector<ListUsersResponseBodyUsersUserInfo>>(expect1);
      }
    }
  }


  virtual ~ListUsersResponseBodyUsers() = default;
};
class ListUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<ListUsersResponseBodyUsers> users{};

  ListUsersResponseBody() {}

  explicit ListUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (users) {
      res["Users"] = users ? boost::any(users->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(map<string, boost::any>) == m["Users"].type()) {
        ListUsersResponseBodyUsers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Users"]));
        users = make_shared<ListUsersResponseBodyUsers>(model1);
      }
    }
  }


  virtual ~ListUsersResponseBody() = default;
};
class ListUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUsersResponseBody> body{};

  ListUsersResponse() {}

  explicit ListUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUsersResponseBody>(model1);
      }
    }
  }


  virtual ~ListUsersResponse() = default;
};
class StopJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<string>> jobIds{};

  StopJobsRequest() {}

  explicit StopJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobIds) {
      res["JobIds"] = boost::any(*jobIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobIds") != m.end() && !m["JobIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["JobIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JobIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      jobIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~StopJobsRequest() = default;
};
class StopJobsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobIdsShrink{};

  StopJobsShrinkRequest() {}

  explicit StopJobsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobIdsShrink) {
      res["JobIds"] = boost::any(*jobIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("JobIds") != m.end() && !m["JobIds"].empty()) {
      jobIdsShrink = make_shared<string>(boost::any_cast<string>(m["JobIds"]));
    }
  }


  virtual ~StopJobsShrinkRequest() = default;
};
class StopJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  StopJobsResponseBody() {}

  explicit StopJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~StopJobsResponseBody() = default;
};
class StopJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopJobsResponseBody> body{};

  StopJobsResponse() {}

  explicit StopJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopJobsResponseBody>(model1);
      }
    }
  }


  virtual ~StopJobsResponse() = default;
};
class UnInstallAddonRequest : public Darabonba::Model {
public:
  shared_ptr<string> addonId{};
  shared_ptr<string> clusterId{};

  UnInstallAddonRequest() {}

  explicit UnInstallAddonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addonId) {
      res["AddonId"] = boost::any(*addonId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddonId") != m.end() && !m["AddonId"].empty()) {
      addonId = make_shared<string>(boost::any_cast<string>(m["AddonId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~UnInstallAddonRequest() = default;
};
class UnInstallAddonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnInstallAddonResponseBody() {}

  explicit UnInstallAddonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnInstallAddonResponseBody() = default;
};
class UnInstallAddonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnInstallAddonResponseBody> body{};

  UnInstallAddonResponse() {}

  explicit UnInstallAddonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnInstallAddonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnInstallAddonResponseBody>(model1);
      }
    }
  }


  virtual ~UnInstallAddonResponse() = default;
};
class UninstallSoftwaresRequestAdditionalPackages : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  UninstallSoftwaresRequestAdditionalPackages() {}

  explicit UninstallSoftwaresRequestAdditionalPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~UninstallSoftwaresRequestAdditionalPackages() = default;
};
class UninstallSoftwaresRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UninstallSoftwaresRequestAdditionalPackages>> additionalPackages{};
  shared_ptr<string> clusterId{};

  UninstallSoftwaresRequest() {}

  explicit UninstallSoftwaresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalPackages) {
      vector<boost::any> temp1;
      for(auto item1:*additionalPackages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdditionalPackages"] = boost::any(temp1);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalPackages") != m.end() && !m["AdditionalPackages"].empty()) {
      if (typeid(vector<boost::any>) == m["AdditionalPackages"].type()) {
        vector<UninstallSoftwaresRequestAdditionalPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdditionalPackages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UninstallSoftwaresRequestAdditionalPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        additionalPackages = make_shared<vector<UninstallSoftwaresRequestAdditionalPackages>>(expect1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~UninstallSoftwaresRequest() = default;
};
class UninstallSoftwaresShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> additionalPackagesShrink{};
  shared_ptr<string> clusterId{};

  UninstallSoftwaresShrinkRequest() {}

  explicit UninstallSoftwaresShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalPackagesShrink) {
      res["AdditionalPackages"] = boost::any(*additionalPackagesShrink);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalPackages") != m.end() && !m["AdditionalPackages"].empty()) {
      additionalPackagesShrink = make_shared<string>(boost::any_cast<string>(m["AdditionalPackages"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~UninstallSoftwaresShrinkRequest() = default;
};
class UninstallSoftwaresResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UninstallSoftwaresResponseBody() {}

  explicit UninstallSoftwaresResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UninstallSoftwaresResponseBody() = default;
};
class UninstallSoftwaresResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UninstallSoftwaresResponseBody> body{};

  UninstallSoftwaresResponse() {}

  explicit UninstallSoftwaresResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UninstallSoftwaresResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UninstallSoftwaresResponseBody>(model1);
      }
    }
  }


  virtual ~UninstallSoftwaresResponse() = default;
};
class UpdateClusterRequestClusterCustomConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> args{};
  shared_ptr<string> script{};

  UpdateClusterRequestClusterCustomConfiguration() {}

  explicit UpdateClusterRequestClusterCustomConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (script) {
      res["Script"] = boost::any(*script);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      args = make_shared<string>(boost::any_cast<string>(m["Args"]));
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      script = make_shared<string>(boost::any_cast<string>(m["Script"]));
    }
  }


  virtual ~UpdateClusterRequestClusterCustomConfiguration() = default;
};
class UpdateClusterRequestMonitorSpec : public Darabonba::Model {
public:
  shared_ptr<bool> enableComputeLoadMonitor{};

  UpdateClusterRequestMonitorSpec() {}

  explicit UpdateClusterRequestMonitorSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableComputeLoadMonitor) {
      res["EnableComputeLoadMonitor"] = boost::any(*enableComputeLoadMonitor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableComputeLoadMonitor") != m.end() && !m["EnableComputeLoadMonitor"].empty()) {
      enableComputeLoadMonitor = make_shared<bool>(boost::any_cast<bool>(m["EnableComputeLoadMonitor"]));
    }
  }


  virtual ~UpdateClusterRequestMonitorSpec() = default;
};
class UpdateClusterRequestSchedulerSpec : public Darabonba::Model {
public:
  shared_ptr<bool> enableTopologyAwareness{};

  UpdateClusterRequestSchedulerSpec() {}

  explicit UpdateClusterRequestSchedulerSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableTopologyAwareness) {
      res["EnableTopologyAwareness"] = boost::any(*enableTopologyAwareness);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableTopologyAwareness") != m.end() && !m["EnableTopologyAwareness"].empty()) {
      enableTopologyAwareness = make_shared<bool>(boost::any_cast<bool>(m["EnableTopologyAwareness"]));
    }
  }


  virtual ~UpdateClusterRequestSchedulerSpec() = default;
};
class UpdateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientVersion{};
  shared_ptr<UpdateClusterRequestClusterCustomConfiguration> clusterCustomConfiguration{};
  shared_ptr<string> clusterDescription{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<bool> enableScaleIn{};
  shared_ptr<bool> enableScaleOut{};
  shared_ptr<long> growInterval{};
  shared_ptr<long> idleInterval{};
  shared_ptr<long> maxCoreCount{};
  shared_ptr<long> maxCount{};
  shared_ptr<UpdateClusterRequestMonitorSpec> monitorSpec{};
  shared_ptr<UpdateClusterRequestSchedulerSpec> schedulerSpec{};

  UpdateClusterRequest() {}

  explicit UpdateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (clusterCustomConfiguration) {
      res["ClusterCustomConfiguration"] = clusterCustomConfiguration ? boost::any(clusterCustomConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterDescription) {
      res["ClusterDescription"] = boost::any(*clusterDescription);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (enableScaleIn) {
      res["EnableScaleIn"] = boost::any(*enableScaleIn);
    }
    if (enableScaleOut) {
      res["EnableScaleOut"] = boost::any(*enableScaleOut);
    }
    if (growInterval) {
      res["GrowInterval"] = boost::any(*growInterval);
    }
    if (idleInterval) {
      res["IdleInterval"] = boost::any(*idleInterval);
    }
    if (maxCoreCount) {
      res["MaxCoreCount"] = boost::any(*maxCoreCount);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (monitorSpec) {
      res["MonitorSpec"] = monitorSpec ? boost::any(monitorSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (schedulerSpec) {
      res["SchedulerSpec"] = schedulerSpec ? boost::any(schedulerSpec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ClusterCustomConfiguration") != m.end() && !m["ClusterCustomConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterCustomConfiguration"].type()) {
        UpdateClusterRequestClusterCustomConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterCustomConfiguration"]));
        clusterCustomConfiguration = make_shared<UpdateClusterRequestClusterCustomConfiguration>(model1);
      }
    }
    if (m.find("ClusterDescription") != m.end() && !m["ClusterDescription"].empty()) {
      clusterDescription = make_shared<string>(boost::any_cast<string>(m["ClusterDescription"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["DeletionProtection"]));
    }
    if (m.find("EnableScaleIn") != m.end() && !m["EnableScaleIn"].empty()) {
      enableScaleIn = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleIn"]));
    }
    if (m.find("EnableScaleOut") != m.end() && !m["EnableScaleOut"].empty()) {
      enableScaleOut = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleOut"]));
    }
    if (m.find("GrowInterval") != m.end() && !m["GrowInterval"].empty()) {
      growInterval = make_shared<long>(boost::any_cast<long>(m["GrowInterval"]));
    }
    if (m.find("IdleInterval") != m.end() && !m["IdleInterval"].empty()) {
      idleInterval = make_shared<long>(boost::any_cast<long>(m["IdleInterval"]));
    }
    if (m.find("MaxCoreCount") != m.end() && !m["MaxCoreCount"].empty()) {
      maxCoreCount = make_shared<long>(boost::any_cast<long>(m["MaxCoreCount"]));
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<long>(boost::any_cast<long>(m["MaxCount"]));
    }
    if (m.find("MonitorSpec") != m.end() && !m["MonitorSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["MonitorSpec"].type()) {
        UpdateClusterRequestMonitorSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MonitorSpec"]));
        monitorSpec = make_shared<UpdateClusterRequestMonitorSpec>(model1);
      }
    }
    if (m.find("SchedulerSpec") != m.end() && !m["SchedulerSpec"].empty()) {
      if (typeid(map<string, boost::any>) == m["SchedulerSpec"].type()) {
        UpdateClusterRequestSchedulerSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SchedulerSpec"]));
        schedulerSpec = make_shared<UpdateClusterRequestSchedulerSpec>(model1);
      }
    }
  }


  virtual ~UpdateClusterRequest() = default;
};
class UpdateClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientVersion{};
  shared_ptr<string> clusterCustomConfigurationShrink{};
  shared_ptr<string> clusterDescription{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<bool> enableScaleIn{};
  shared_ptr<bool> enableScaleOut{};
  shared_ptr<long> growInterval{};
  shared_ptr<long> idleInterval{};
  shared_ptr<long> maxCoreCount{};
  shared_ptr<long> maxCount{};
  shared_ptr<string> monitorSpecShrink{};
  shared_ptr<string> schedulerSpecShrink{};

  UpdateClusterShrinkRequest() {}

  explicit UpdateClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (clusterCustomConfigurationShrink) {
      res["ClusterCustomConfiguration"] = boost::any(*clusterCustomConfigurationShrink);
    }
    if (clusterDescription) {
      res["ClusterDescription"] = boost::any(*clusterDescription);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (enableScaleIn) {
      res["EnableScaleIn"] = boost::any(*enableScaleIn);
    }
    if (enableScaleOut) {
      res["EnableScaleOut"] = boost::any(*enableScaleOut);
    }
    if (growInterval) {
      res["GrowInterval"] = boost::any(*growInterval);
    }
    if (idleInterval) {
      res["IdleInterval"] = boost::any(*idleInterval);
    }
    if (maxCoreCount) {
      res["MaxCoreCount"] = boost::any(*maxCoreCount);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (monitorSpecShrink) {
      res["MonitorSpec"] = boost::any(*monitorSpecShrink);
    }
    if (schedulerSpecShrink) {
      res["SchedulerSpec"] = boost::any(*schedulerSpecShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ClusterCustomConfiguration") != m.end() && !m["ClusterCustomConfiguration"].empty()) {
      clusterCustomConfigurationShrink = make_shared<string>(boost::any_cast<string>(m["ClusterCustomConfiguration"]));
    }
    if (m.find("ClusterDescription") != m.end() && !m["ClusterDescription"].empty()) {
      clusterDescription = make_shared<string>(boost::any_cast<string>(m["ClusterDescription"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["DeletionProtection"]));
    }
    if (m.find("EnableScaleIn") != m.end() && !m["EnableScaleIn"].empty()) {
      enableScaleIn = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleIn"]));
    }
    if (m.find("EnableScaleOut") != m.end() && !m["EnableScaleOut"].empty()) {
      enableScaleOut = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleOut"]));
    }
    if (m.find("GrowInterval") != m.end() && !m["GrowInterval"].empty()) {
      growInterval = make_shared<long>(boost::any_cast<long>(m["GrowInterval"]));
    }
    if (m.find("IdleInterval") != m.end() && !m["IdleInterval"].empty()) {
      idleInterval = make_shared<long>(boost::any_cast<long>(m["IdleInterval"]));
    }
    if (m.find("MaxCoreCount") != m.end() && !m["MaxCoreCount"].empty()) {
      maxCoreCount = make_shared<long>(boost::any_cast<long>(m["MaxCoreCount"]));
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<long>(boost::any_cast<long>(m["MaxCount"]));
    }
    if (m.find("MonitorSpec") != m.end() && !m["MonitorSpec"].empty()) {
      monitorSpecShrink = make_shared<string>(boost::any_cast<string>(m["MonitorSpec"]));
    }
    if (m.find("SchedulerSpec") != m.end() && !m["SchedulerSpec"].empty()) {
      schedulerSpecShrink = make_shared<string>(boost::any_cast<string>(m["SchedulerSpec"]));
    }
  }


  virtual ~UpdateClusterShrinkRequest() = default;
};
class UpdateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateClusterResponseBody() {}

  explicit UpdateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateClusterResponseBody() = default;
};
class UpdateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateClusterResponseBody> body{};

  UpdateClusterResponse() {}

  explicit UpdateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateClusterResponse() = default;
};
class UpdateNodesRequestInstances : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<bool> keepAlive{};

  UpdateNodesRequestInstances() {}

  explicit UpdateNodesRequestInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (keepAlive) {
      res["KeepAlive"] = boost::any(*keepAlive);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("KeepAlive") != m.end() && !m["KeepAlive"].empty()) {
      keepAlive = make_shared<bool>(boost::any_cast<bool>(m["KeepAlive"]));
    }
  }


  virtual ~UpdateNodesRequestInstances() = default;
};
class UpdateNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<UpdateNodesRequestInstances>> instances{};

  UpdateNodesRequest() {}

  explicit UpdateNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<UpdateNodesRequestInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateNodesRequestInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<UpdateNodesRequestInstances>>(expect1);
      }
    }
  }


  virtual ~UpdateNodesRequest() = default;
};
class UpdateNodesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> instancesShrink{};

  UpdateNodesShrinkRequest() {}

  explicit UpdateNodesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instancesShrink) {
      res["Instances"] = boost::any(*instancesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      instancesShrink = make_shared<string>(boost::any_cast<string>(m["Instances"]));
    }
  }


  virtual ~UpdateNodesShrinkRequest() = default;
};
class UpdateNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateNodesResponseBody() {}

  explicit UpdateNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateNodesResponseBody() = default;
};
class UpdateNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateNodesResponseBody> body{};

  UpdateNodesResponse() {}

  explicit UpdateNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNodesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNodesResponse() = default;
};
class UpdateQueueRequestQueue : public Darabonba::Model {
public:
  shared_ptr<string> allocationStrategy{};
  shared_ptr<vector<NodeTemplate>> computeNodes{};
  shared_ptr<bool> enableScaleIn{};
  shared_ptr<bool> enableScaleOut{};
  shared_ptr<string> hostnamePrefix{};
  shared_ptr<string> hostnameSuffix{};
  shared_ptr<long> initialCount{};
  shared_ptr<string> interConnect{};
  shared_ptr<vector<string>> keepAliveNodes{};
  shared_ptr<long> maxCount{};
  shared_ptr<long> maxCountPerCycle{};
  shared_ptr<long> minCount{};
  shared_ptr<string> queueName{};
  shared_ptr<string> ramRole{};
  shared_ptr<vector<string>> vSwitchIds{};

  UpdateQueueRequestQueue() {}

  explicit UpdateQueueRequestQueue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationStrategy) {
      res["AllocationStrategy"] = boost::any(*allocationStrategy);
    }
    if (computeNodes) {
      vector<boost::any> temp1;
      for(auto item1:*computeNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ComputeNodes"] = boost::any(temp1);
    }
    if (enableScaleIn) {
      res["EnableScaleIn"] = boost::any(*enableScaleIn);
    }
    if (enableScaleOut) {
      res["EnableScaleOut"] = boost::any(*enableScaleOut);
    }
    if (hostnamePrefix) {
      res["HostnamePrefix"] = boost::any(*hostnamePrefix);
    }
    if (hostnameSuffix) {
      res["HostnameSuffix"] = boost::any(*hostnameSuffix);
    }
    if (initialCount) {
      res["InitialCount"] = boost::any(*initialCount);
    }
    if (interConnect) {
      res["InterConnect"] = boost::any(*interConnect);
    }
    if (keepAliveNodes) {
      res["KeepAliveNodes"] = boost::any(*keepAliveNodes);
    }
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (maxCountPerCycle) {
      res["MaxCountPerCycle"] = boost::any(*maxCountPerCycle);
    }
    if (minCount) {
      res["MinCount"] = boost::any(*minCount);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (ramRole) {
      res["RamRole"] = boost::any(*ramRole);
    }
    if (vSwitchIds) {
      res["VSwitchIds"] = boost::any(*vSwitchIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationStrategy") != m.end() && !m["AllocationStrategy"].empty()) {
      allocationStrategy = make_shared<string>(boost::any_cast<string>(m["AllocationStrategy"]));
    }
    if (m.find("ComputeNodes") != m.end() && !m["ComputeNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["ComputeNodes"].type()) {
        vector<NodeTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ComputeNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NodeTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        computeNodes = make_shared<vector<NodeTemplate>>(expect1);
      }
    }
    if (m.find("EnableScaleIn") != m.end() && !m["EnableScaleIn"].empty()) {
      enableScaleIn = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleIn"]));
    }
    if (m.find("EnableScaleOut") != m.end() && !m["EnableScaleOut"].empty()) {
      enableScaleOut = make_shared<bool>(boost::any_cast<bool>(m["EnableScaleOut"]));
    }
    if (m.find("HostnamePrefix") != m.end() && !m["HostnamePrefix"].empty()) {
      hostnamePrefix = make_shared<string>(boost::any_cast<string>(m["HostnamePrefix"]));
    }
    if (m.find("HostnameSuffix") != m.end() && !m["HostnameSuffix"].empty()) {
      hostnameSuffix = make_shared<string>(boost::any_cast<string>(m["HostnameSuffix"]));
    }
    if (m.find("InitialCount") != m.end() && !m["InitialCount"].empty()) {
      initialCount = make_shared<long>(boost::any_cast<long>(m["InitialCount"]));
    }
    if (m.find("InterConnect") != m.end() && !m["InterConnect"].empty()) {
      interConnect = make_shared<string>(boost::any_cast<string>(m["InterConnect"]));
    }
    if (m.find("KeepAliveNodes") != m.end() && !m["KeepAliveNodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["KeepAliveNodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["KeepAliveNodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keepAliveNodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<long>(boost::any_cast<long>(m["MaxCount"]));
    }
    if (m.find("MaxCountPerCycle") != m.end() && !m["MaxCountPerCycle"].empty()) {
      maxCountPerCycle = make_shared<long>(boost::any_cast<long>(m["MaxCountPerCycle"]));
    }
    if (m.find("MinCount") != m.end() && !m["MinCount"].empty()) {
      minCount = make_shared<long>(boost::any_cast<long>(m["MinCount"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("RamRole") != m.end() && !m["RamRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["RamRole"]));
    }
    if (m.find("VSwitchIds") != m.end() && !m["VSwitchIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateQueueRequestQueue() = default;
};
class UpdateQueueRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<UpdateQueueRequestQueue> queue{};

  UpdateQueueRequest() {}

  explicit UpdateQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (queue) {
      res["Queue"] = queue ? boost::any(queue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      if (typeid(map<string, boost::any>) == m["Queue"].type()) {
        UpdateQueueRequestQueue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Queue"]));
        queue = make_shared<UpdateQueueRequestQueue>(model1);
      }
    }
  }


  virtual ~UpdateQueueRequest() = default;
};
class UpdateQueueShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> queueShrink{};

  UpdateQueueShrinkRequest() {}

  explicit UpdateQueueShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (queueShrink) {
      res["Queue"] = boost::any(*queueShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      queueShrink = make_shared<string>(boost::any_cast<string>(m["Queue"]));
    }
  }


  virtual ~UpdateQueueShrinkRequest() = default;
};
class UpdateQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateQueueResponseBody() {}

  explicit UpdateQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateQueueResponseBody() = default;
};
class UpdateQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateQueueResponseBody> body{};

  UpdateQueueResponse() {}

  explicit UpdateQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateQueueResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateQueueResponse() = default;
};
class UpdateUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> group{};
  shared_ptr<string> password{};
  shared_ptr<string> userName{};

  UpdateUserRequest() {}

  explicit UpdateUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~UpdateUserRequest() = default;
};
class UpdateUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

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
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
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
  AttachSharedStoragesResponse attachSharedStoragesWithOptions(shared_ptr<AttachSharedStoragesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachSharedStoragesResponse attachSharedStorages(shared_ptr<AttachSharedStoragesRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  CreateJobResponse createJobWithOptions(shared_ptr<CreateJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateJobResponse createJob(shared_ptr<CreateJobRequest> request);
  CreateNodesResponse createNodesWithOptions(shared_ptr<CreateNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNodesResponse createNodes(shared_ptr<CreateNodesRequest> request);
  CreateQueueResponse createQueueWithOptions(shared_ptr<CreateQueueRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateQueueResponse createQueue(shared_ptr<CreateQueueRequest> request);
  CreateUsersResponse createUsersWithOptions(shared_ptr<CreateUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUsersResponse createUsers(shared_ptr<CreateUsersRequest> request);
  DeleteClusterResponse deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterResponse deleteCluster(shared_ptr<DeleteClusterRequest> request);
  DeleteNodesResponse deleteNodesWithOptions(shared_ptr<DeleteNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNodesResponse deleteNodes(shared_ptr<DeleteNodesRequest> request);
  DeleteQueuesResponse deleteQueuesWithOptions(shared_ptr<DeleteQueuesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteQueuesResponse deleteQueues(shared_ptr<DeleteQueuesRequest> request);
  DeleteUsersResponse deleteUsersWithOptions(shared_ptr<DeleteUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUsersResponse deleteUsers(shared_ptr<DeleteUsersRequest> request);
  DescribeAddonTemplateResponse describeAddonTemplateWithOptions(shared_ptr<DescribeAddonTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAddonTemplateResponse describeAddonTemplate(shared_ptr<DescribeAddonTemplateRequest> request);
  DetachSharedStoragesResponse detachSharedStoragesWithOptions(shared_ptr<DetachSharedStoragesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachSharedStoragesResponse detachSharedStorages(shared_ptr<DetachSharedStoragesRequest> request);
  GetAddonResponse getAddonWithOptions(shared_ptr<GetAddonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAddonResponse getAddon(shared_ptr<GetAddonRequest> request);
  GetClusterResponse getClusterWithOptions(shared_ptr<GetClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClusterResponse getCluster(shared_ptr<GetClusterRequest> request);
  GetCommonLogDetailResponse getCommonLogDetailWithOptions(shared_ptr<GetCommonLogDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCommonLogDetailResponse getCommonLogDetail(shared_ptr<GetCommonLogDetailRequest> request);
  GetJobResponse getJobWithOptions(shared_ptr<GetJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobResponse getJob(shared_ptr<GetJobRequest> request);
  GetJobLogResponse getJobLogWithOptions(shared_ptr<GetJobLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobLogResponse getJobLog(shared_ptr<GetJobLogRequest> request);
  GetQueueResponse getQueueWithOptions(shared_ptr<GetQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQueueResponse getQueue(shared_ptr<GetQueueRequest> request);
  InstallAddonResponse installAddonWithOptions(shared_ptr<InstallAddonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InstallAddonResponse installAddon(shared_ptr<InstallAddonRequest> request);
  InstallSoftwaresResponse installSoftwaresWithOptions(shared_ptr<InstallSoftwaresRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InstallSoftwaresResponse installSoftwares(shared_ptr<InstallSoftwaresRequest> request);
  ListAddonTemplatesResponse listAddonTemplatesWithOptions(shared_ptr<ListAddonTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAddonTemplatesResponse listAddonTemplates(shared_ptr<ListAddonTemplatesRequest> request);
  ListAddonsResponse listAddonsWithOptions(shared_ptr<ListAddonsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAddonsResponse listAddons(shared_ptr<ListAddonsRequest> request);
  ListAvailableFileSystemsResponse listAvailableFileSystemsWithOptions(shared_ptr<ListAvailableFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAvailableFileSystemsResponse listAvailableFileSystems(shared_ptr<ListAvailableFileSystemsRequest> request);
  ListAvailableImagesResponse listAvailableImagesWithOptions(shared_ptr<ListAvailableImagesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAvailableImagesResponse listAvailableImages(shared_ptr<ListAvailableImagesRequest> request);
  ListClustersResponse listClustersWithOptions(shared_ptr<ListClustersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClustersResponse listClusters(shared_ptr<ListClustersRequest> request);
  ListCommonLogsResponse listCommonLogsWithOptions(shared_ptr<ListCommonLogsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCommonLogsResponse listCommonLogs(shared_ptr<ListCommonLogsRequest> request);
  ListInstalledSoftwaresResponse listInstalledSoftwaresWithOptions(shared_ptr<ListInstalledSoftwaresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstalledSoftwaresResponse listInstalledSoftwares(shared_ptr<ListInstalledSoftwaresRequest> request);
  ListJobsResponse listJobsWithOptions(shared_ptr<ListJobsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobsResponse listJobs(shared_ptr<ListJobsRequest> request);
  ListNodesResponse listNodesWithOptions(shared_ptr<ListNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodesResponse listNodes(shared_ptr<ListNodesRequest> request);
  ListQueuesResponse listQueuesWithOptions(shared_ptr<ListQueuesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQueuesResponse listQueues(shared_ptr<ListQueuesRequest> request);
  ListSharedStoragesResponse listSharedStoragesWithOptions(shared_ptr<ListSharedStoragesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSharedStoragesResponse listSharedStorages(shared_ptr<ListSharedStoragesRequest> request);
  ListSoftwaresResponse listSoftwaresWithOptions(shared_ptr<ListSoftwaresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSoftwaresResponse listSoftwares(shared_ptr<ListSoftwaresRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  StopJobsResponse stopJobsWithOptions(shared_ptr<StopJobsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopJobsResponse stopJobs(shared_ptr<StopJobsRequest> request);
  UnInstallAddonResponse unInstallAddonWithOptions(shared_ptr<UnInstallAddonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnInstallAddonResponse unInstallAddon(shared_ptr<UnInstallAddonRequest> request);
  UninstallSoftwaresResponse uninstallSoftwaresWithOptions(shared_ptr<UninstallSoftwaresRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UninstallSoftwaresResponse uninstallSoftwares(shared_ptr<UninstallSoftwaresRequest> request);
  UpdateClusterResponse updateClusterWithOptions(shared_ptr<UpdateClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateClusterResponse updateCluster(shared_ptr<UpdateClusterRequest> request);
  UpdateNodesResponse updateNodesWithOptions(shared_ptr<UpdateNodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNodesResponse updateNodes(shared_ptr<UpdateNodesRequest> request);
  UpdateQueueResponse updateQueueWithOptions(shared_ptr<UpdateQueueRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateQueueResponse updateQueue(shared_ptr<UpdateQueueRequest> request);
  UpdateUserResponse updateUserWithOptions(shared_ptr<UpdateUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserResponse updateUser(shared_ptr<UpdateUserRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_EHPC20240730

#endif
