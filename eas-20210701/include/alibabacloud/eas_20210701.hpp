// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EAS20210701_H_
#define ALIBABACLOUD_EAS20210701_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Eas20210701 {
class ContainerInfo : public Darabonba::Model {
public:
  shared_ptr<string> currentReaon{};
  shared_ptr<string> currentStatus{};
  shared_ptr<string> currentTimestamp{};
  shared_ptr<string> image{};
  shared_ptr<string> lastReason{};
  shared_ptr<string> lastStatus{};
  shared_ptr<string> lastTimestamp{};
  shared_ptr<string> name{};
  shared_ptr<long> port{};
  shared_ptr<bool> ready{};
  shared_ptr<long> restartCount{};

  ContainerInfo() {}

  explicit ContainerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentReaon) {
      res["CurrentReaon"] = boost::any(*currentReaon);
    }
    if (currentStatus) {
      res["CurrentStatus"] = boost::any(*currentStatus);
    }
    if (currentTimestamp) {
      res["CurrentTimestamp"] = boost::any(*currentTimestamp);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (lastReason) {
      res["LastReason"] = boost::any(*lastReason);
    }
    if (lastStatus) {
      res["LastStatus"] = boost::any(*lastStatus);
    }
    if (lastTimestamp) {
      res["LastTimestamp"] = boost::any(*lastTimestamp);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (ready) {
      res["Ready"] = boost::any(*ready);
    }
    if (restartCount) {
      res["RestartCount"] = boost::any(*restartCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentReaon") != m.end() && !m["CurrentReaon"].empty()) {
      currentReaon = make_shared<string>(boost::any_cast<string>(m["CurrentReaon"]));
    }
    if (m.find("CurrentStatus") != m.end() && !m["CurrentStatus"].empty()) {
      currentStatus = make_shared<string>(boost::any_cast<string>(m["CurrentStatus"]));
    }
    if (m.find("CurrentTimestamp") != m.end() && !m["CurrentTimestamp"].empty()) {
      currentTimestamp = make_shared<string>(boost::any_cast<string>(m["CurrentTimestamp"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("LastReason") != m.end() && !m["LastReason"].empty()) {
      lastReason = make_shared<string>(boost::any_cast<string>(m["LastReason"]));
    }
    if (m.find("LastStatus") != m.end() && !m["LastStatus"].empty()) {
      lastStatus = make_shared<string>(boost::any_cast<string>(m["LastStatus"]));
    }
    if (m.find("LastTimestamp") != m.end() && !m["LastTimestamp"].empty()) {
      lastTimestamp = make_shared<string>(boost::any_cast<string>(m["LastTimestamp"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Ready") != m.end() && !m["Ready"].empty()) {
      ready = make_shared<bool>(boost::any_cast<bool>(m["Ready"]));
    }
    if (m.find("RestartCount") != m.end() && !m["RestartCount"].empty()) {
      restartCount = make_shared<long>(boost::any_cast<long>(m["RestartCount"]));
    }
  }


  virtual ~ContainerInfo() = default;
};
class Group : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> internetEndpoint{};
  shared_ptr<string> intranetEndpoint{};
  shared_ptr<string> name{};
  shared_ptr<string> queueService{};
  shared_ptr<string> trafficMode{};
  shared_ptr<string> updateTime{};

  Group() {}

  explicit Group(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (internetEndpoint) {
      res["InternetEndpoint"] = boost::any(*internetEndpoint);
    }
    if (intranetEndpoint) {
      res["IntranetEndpoint"] = boost::any(*intranetEndpoint);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (queueService) {
      res["QueueService"] = boost::any(*queueService);
    }
    if (trafficMode) {
      res["TrafficMode"] = boost::any(*trafficMode);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("InternetEndpoint") != m.end() && !m["InternetEndpoint"].empty()) {
      internetEndpoint = make_shared<string>(boost::any_cast<string>(m["InternetEndpoint"]));
    }
    if (m.find("IntranetEndpoint") != m.end() && !m["IntranetEndpoint"].empty()) {
      intranetEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetEndpoint"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QueueService") != m.end() && !m["QueueService"].empty()) {
      queueService = make_shared<string>(boost::any_cast<string>(m["QueueService"]));
    }
    if (m.find("TrafficMode") != m.end() && !m["TrafficMode"].empty()) {
      trafficMode = make_shared<string>(boost::any_cast<string>(m["TrafficMode"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~Group() = default;
};
class Instance : public Darabonba::Model {
public:
  shared_ptr<double> currentAmount{};
  shared_ptr<string> externalIP{};
  shared_ptr<long> externalInstancePort{};
  shared_ptr<string> hostIP{};
  shared_ptr<string> hostName{};
  shared_ptr<string> innerIP{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> instancePort{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> isSpot{};
  shared_ptr<bool> isolated{};
  shared_ptr<vector<map<string, boost::any>>> lastState{};
  shared_ptr<string> namespace_{};
  shared_ptr<double> originalAmount{};
  shared_ptr<long> readyProcesses{};
  shared_ptr<string> reason{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> restartCount{};
  shared_ptr<string> role{};
  shared_ptr<string> startAt{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> tenantHostIP{};
  shared_ptr<string> tenantInstanceIP{};
  shared_ptr<long> totalProcesses{};
  shared_ptr<string> zone{};

  Instance() {}

  explicit Instance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentAmount) {
      res["CurrentAmount"] = boost::any(*currentAmount);
    }
    if (externalIP) {
      res["ExternalIP"] = boost::any(*externalIP);
    }
    if (externalInstancePort) {
      res["ExternalInstancePort"] = boost::any(*externalInstancePort);
    }
    if (hostIP) {
      res["HostIP"] = boost::any(*hostIP);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (innerIP) {
      res["InnerIP"] = boost::any(*innerIP);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instancePort) {
      res["InstancePort"] = boost::any(*instancePort);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (isSpot) {
      res["IsSpot"] = boost::any(*isSpot);
    }
    if (isolated) {
      res["Isolated"] = boost::any(*isolated);
    }
    if (lastState) {
      res["LastState"] = boost::any(*lastState);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (readyProcesses) {
      res["ReadyProcesses"] = boost::any(*readyProcesses);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (restartCount) {
      res["RestartCount"] = boost::any(*restartCount);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (startAt) {
      res["StartAt"] = boost::any(*startAt);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantHostIP) {
      res["TenantHostIP"] = boost::any(*tenantHostIP);
    }
    if (tenantInstanceIP) {
      res["TenantInstanceIP"] = boost::any(*tenantInstanceIP);
    }
    if (totalProcesses) {
      res["TotalProcesses"] = boost::any(*totalProcesses);
    }
    if (zone) {
      res["Zone"] = boost::any(*zone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentAmount") != m.end() && !m["CurrentAmount"].empty()) {
      currentAmount = make_shared<double>(boost::any_cast<double>(m["CurrentAmount"]));
    }
    if (m.find("ExternalIP") != m.end() && !m["ExternalIP"].empty()) {
      externalIP = make_shared<string>(boost::any_cast<string>(m["ExternalIP"]));
    }
    if (m.find("ExternalInstancePort") != m.end() && !m["ExternalInstancePort"].empty()) {
      externalInstancePort = make_shared<long>(boost::any_cast<long>(m["ExternalInstancePort"]));
    }
    if (m.find("HostIP") != m.end() && !m["HostIP"].empty()) {
      hostIP = make_shared<string>(boost::any_cast<string>(m["HostIP"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("InnerIP") != m.end() && !m["InnerIP"].empty()) {
      innerIP = make_shared<string>(boost::any_cast<string>(m["InnerIP"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstancePort") != m.end() && !m["InstancePort"].empty()) {
      instancePort = make_shared<long>(boost::any_cast<long>(m["InstancePort"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IsSpot") != m.end() && !m["IsSpot"].empty()) {
      isSpot = make_shared<bool>(boost::any_cast<bool>(m["IsSpot"]));
    }
    if (m.find("Isolated") != m.end() && !m["Isolated"].empty()) {
      isolated = make_shared<bool>(boost::any_cast<bool>(m["Isolated"]));
    }
    if (m.find("LastState") != m.end() && !m["LastState"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["LastState"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LastState"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      lastState = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<double>(boost::any_cast<double>(m["OriginalAmount"]));
    }
    if (m.find("ReadyProcesses") != m.end() && !m["ReadyProcesses"].empty()) {
      readyProcesses = make_shared<long>(boost::any_cast<long>(m["ReadyProcesses"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("RestartCount") != m.end() && !m["RestartCount"].empty()) {
      restartCount = make_shared<long>(boost::any_cast<long>(m["RestartCount"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("StartAt") != m.end() && !m["StartAt"].empty()) {
      startAt = make_shared<string>(boost::any_cast<string>(m["StartAt"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TenantHostIP") != m.end() && !m["TenantHostIP"].empty()) {
      tenantHostIP = make_shared<string>(boost::any_cast<string>(m["TenantHostIP"]));
    }
    if (m.find("TenantInstanceIP") != m.end() && !m["TenantInstanceIP"].empty()) {
      tenantInstanceIP = make_shared<string>(boost::any_cast<string>(m["TenantInstanceIP"]));
    }
    if (m.find("TotalProcesses") != m.end() && !m["TotalProcesses"].empty()) {
      totalProcesses = make_shared<long>(boost::any_cast<long>(m["TotalProcesses"]));
    }
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      zone = make_shared<string>(boost::any_cast<string>(m["Zone"]));
    }
  }


  virtual ~Instance() = default;
};
class Resource : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> cpuCount{};
  shared_ptr<long> cpuUsed{};
  shared_ptr<string> createTime{};
  shared_ptr<map<string, boost::any>> extraData{};
  shared_ptr<vector<string>> features{};
  shared_ptr<long> gpuCount{};
  shared_ptr<double> gpuUsed{};
  shared_ptr<long> instanceCount{};
  shared_ptr<long> instanceMaxAllocatableCPU{};
  shared_ptr<double> instanceMaxAllocatableGPU{};
  shared_ptr<long> instanceMaxAllocatableMemory{};
  shared_ptr<long> memory{};
  shared_ptr<long> memoryUsed{};
  shared_ptr<string> message{};
  shared_ptr<long> postPaidInstanceCount{};
  shared_ptr<long> prePaidInstanceCount{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> vendor{};

  Resource() {}

  explicit Resource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (cpuCount) {
      res["CpuCount"] = boost::any(*cpuCount);
    }
    if (cpuUsed) {
      res["CpuUsed"] = boost::any(*cpuUsed);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extraData) {
      res["ExtraData"] = boost::any(*extraData);
    }
    if (features) {
      res["Features"] = boost::any(*features);
    }
    if (gpuCount) {
      res["GpuCount"] = boost::any(*gpuCount);
    }
    if (gpuUsed) {
      res["GpuUsed"] = boost::any(*gpuUsed);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (instanceMaxAllocatableCPU) {
      res["InstanceMaxAllocatableCPU"] = boost::any(*instanceMaxAllocatableCPU);
    }
    if (instanceMaxAllocatableGPU) {
      res["InstanceMaxAllocatableGPU"] = boost::any(*instanceMaxAllocatableGPU);
    }
    if (instanceMaxAllocatableMemory) {
      res["InstanceMaxAllocatableMemory"] = boost::any(*instanceMaxAllocatableMemory);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (memoryUsed) {
      res["MemoryUsed"] = boost::any(*memoryUsed);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (postPaidInstanceCount) {
      res["PostPaidInstanceCount"] = boost::any(*postPaidInstanceCount);
    }
    if (prePaidInstanceCount) {
      res["PrePaidInstanceCount"] = boost::any(*prePaidInstanceCount);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CpuCount") != m.end() && !m["CpuCount"].empty()) {
      cpuCount = make_shared<long>(boost::any_cast<long>(m["CpuCount"]));
    }
    if (m.find("CpuUsed") != m.end() && !m["CpuUsed"].empty()) {
      cpuUsed = make_shared<long>(boost::any_cast<long>(m["CpuUsed"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExtraData") != m.end() && !m["ExtraData"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExtraData"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extraData = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Features"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Features"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      features = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GpuCount") != m.end() && !m["GpuCount"].empty()) {
      gpuCount = make_shared<long>(boost::any_cast<long>(m["GpuCount"]));
    }
    if (m.find("GpuUsed") != m.end() && !m["GpuUsed"].empty()) {
      gpuUsed = make_shared<double>(boost::any_cast<double>(m["GpuUsed"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("InstanceMaxAllocatableCPU") != m.end() && !m["InstanceMaxAllocatableCPU"].empty()) {
      instanceMaxAllocatableCPU = make_shared<long>(boost::any_cast<long>(m["InstanceMaxAllocatableCPU"]));
    }
    if (m.find("InstanceMaxAllocatableGPU") != m.end() && !m["InstanceMaxAllocatableGPU"].empty()) {
      instanceMaxAllocatableGPU = make_shared<double>(boost::any_cast<double>(m["InstanceMaxAllocatableGPU"]));
    }
    if (m.find("InstanceMaxAllocatableMemory") != m.end() && !m["InstanceMaxAllocatableMemory"].empty()) {
      instanceMaxAllocatableMemory = make_shared<long>(boost::any_cast<long>(m["InstanceMaxAllocatableMemory"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("MemoryUsed") != m.end() && !m["MemoryUsed"].empty()) {
      memoryUsed = make_shared<long>(boost::any_cast<long>(m["MemoryUsed"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PostPaidInstanceCount") != m.end() && !m["PostPaidInstanceCount"].empty()) {
      postPaidInstanceCount = make_shared<long>(boost::any_cast<long>(m["PostPaidInstanceCount"]));
    }
    if (m.find("PrePaidInstanceCount") != m.end() && !m["PrePaidInstanceCount"].empty()) {
      prePaidInstanceCount = make_shared<long>(boost::any_cast<long>(m["PrePaidInstanceCount"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~Resource() = default;
};
class ResourceInstanceLabels : public Darabonba::Model {
public:
  shared_ptr<string> labelKey{};
  shared_ptr<string> labelValue{};

  ResourceInstanceLabels() {}

  explicit ResourceInstanceLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelKey) {
      res["LabelKey"] = boost::any(*labelKey);
    }
    if (labelValue) {
      res["LabelValue"] = boost::any(*labelValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelKey") != m.end() && !m["LabelKey"].empty()) {
      labelKey = make_shared<string>(boost::any_cast<string>(m["LabelKey"]));
    }
    if (m.find("LabelValue") != m.end() && !m["LabelValue"].empty()) {
      labelValue = make_shared<string>(boost::any_cast<string>(m["LabelValue"]));
    }
  }


  virtual ~ResourceInstanceLabels() = default;
};
class ResourceInstance : public Darabonba::Model {
public:
  shared_ptr<string> arch{};
  shared_ptr<bool> autoRenewal{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expiredTime{};
  shared_ptr<long> instanceCpuCount{};
  shared_ptr<long> instanceGpuCount{};
  shared_ptr<string> instanceGpuMemory{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceIp{};
  shared_ptr<string> instanceMemory{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<long> instanceSystemDiskSize{};
  shared_ptr<string> instanceTenantIp{};
  shared_ptr<string> instanceType{};
  shared_ptr<double> instanceUsedCpu{};
  shared_ptr<double> instanceUsedGpu{};
  shared_ptr<string> instanceUsedGpuMemory{};
  shared_ptr<string> instanceUsedMemory{};
  shared_ptr<vector<ResourceInstanceLabels>> labels{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> zone{};

  ResourceInstance() {}

  explicit ResourceInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arch) {
      res["Arch"] = boost::any(*arch);
    }
    if (autoRenewal) {
      res["AutoRenewal"] = boost::any(*autoRenewal);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (instanceCpuCount) {
      res["InstanceCpuCount"] = boost::any(*instanceCpuCount);
    }
    if (instanceGpuCount) {
      res["InstanceGpuCount"] = boost::any(*instanceGpuCount);
    }
    if (instanceGpuMemory) {
      res["InstanceGpuMemory"] = boost::any(*instanceGpuMemory);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceIp) {
      res["InstanceIp"] = boost::any(*instanceIp);
    }
    if (instanceMemory) {
      res["InstanceMemory"] = boost::any(*instanceMemory);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceSystemDiskSize) {
      res["InstanceSystemDiskSize"] = boost::any(*instanceSystemDiskSize);
    }
    if (instanceTenantIp) {
      res["InstanceTenantIp"] = boost::any(*instanceTenantIp);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceUsedCpu) {
      res["InstanceUsedCpu"] = boost::any(*instanceUsedCpu);
    }
    if (instanceUsedGpu) {
      res["InstanceUsedGpu"] = boost::any(*instanceUsedGpu);
    }
    if (instanceUsedGpuMemory) {
      res["InstanceUsedGpuMemory"] = boost::any(*instanceUsedGpuMemory);
    }
    if (instanceUsedMemory) {
      res["InstanceUsedMemory"] = boost::any(*instanceUsedMemory);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (zone) {
      res["Zone"] = boost::any(*zone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Arch") != m.end() && !m["Arch"].empty()) {
      arch = make_shared<string>(boost::any_cast<string>(m["Arch"]));
    }
    if (m.find("AutoRenewal") != m.end() && !m["AutoRenewal"].empty()) {
      autoRenewal = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewal"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("InstanceCpuCount") != m.end() && !m["InstanceCpuCount"].empty()) {
      instanceCpuCount = make_shared<long>(boost::any_cast<long>(m["InstanceCpuCount"]));
    }
    if (m.find("InstanceGpuCount") != m.end() && !m["InstanceGpuCount"].empty()) {
      instanceGpuCount = make_shared<long>(boost::any_cast<long>(m["InstanceGpuCount"]));
    }
    if (m.find("InstanceGpuMemory") != m.end() && !m["InstanceGpuMemory"].empty()) {
      instanceGpuMemory = make_shared<string>(boost::any_cast<string>(m["InstanceGpuMemory"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceIp") != m.end() && !m["InstanceIp"].empty()) {
      instanceIp = make_shared<string>(boost::any_cast<string>(m["InstanceIp"]));
    }
    if (m.find("InstanceMemory") != m.end() && !m["InstanceMemory"].empty()) {
      instanceMemory = make_shared<string>(boost::any_cast<string>(m["InstanceMemory"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("InstanceSystemDiskSize") != m.end() && !m["InstanceSystemDiskSize"].empty()) {
      instanceSystemDiskSize = make_shared<long>(boost::any_cast<long>(m["InstanceSystemDiskSize"]));
    }
    if (m.find("InstanceTenantIp") != m.end() && !m["InstanceTenantIp"].empty()) {
      instanceTenantIp = make_shared<string>(boost::any_cast<string>(m["InstanceTenantIp"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceUsedCpu") != m.end() && !m["InstanceUsedCpu"].empty()) {
      instanceUsedCpu = make_shared<double>(boost::any_cast<double>(m["InstanceUsedCpu"]));
    }
    if (m.find("InstanceUsedGpu") != m.end() && !m["InstanceUsedGpu"].empty()) {
      instanceUsedGpu = make_shared<double>(boost::any_cast<double>(m["InstanceUsedGpu"]));
    }
    if (m.find("InstanceUsedGpuMemory") != m.end() && !m["InstanceUsedGpuMemory"].empty()) {
      instanceUsedGpuMemory = make_shared<string>(boost::any_cast<string>(m["InstanceUsedGpuMemory"]));
    }
    if (m.find("InstanceUsedMemory") != m.end() && !m["InstanceUsedMemory"].empty()) {
      instanceUsedMemory = make_shared<string>(boost::any_cast<string>(m["InstanceUsedMemory"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ResourceInstanceLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResourceInstanceLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ResourceInstanceLabels>>(expect1);
      }
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      zone = make_shared<string>(boost::any_cast<string>(m["Zone"]));
    }
  }


  virtual ~ResourceInstance() = default;
};
class ResourceInstanceWorker : public Darabonba::Model {
public:
  shared_ptr<long> cpuLimit{};
  shared_ptr<long> cpuRequest{};
  shared_ptr<long> gpuLimit{};
  shared_ptr<long> gpuRequest{};
  shared_ptr<long> memoryLimit{};
  shared_ptr<long> memoryRquest{};
  shared_ptr<string> name{};
  shared_ptr<bool> ready{};
  shared_ptr<long> restartCount{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};

  ResourceInstanceWorker() {}

  explicit ResourceInstanceWorker(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuLimit) {
      res["CpuLimit"] = boost::any(*cpuLimit);
    }
    if (cpuRequest) {
      res["CpuRequest"] = boost::any(*cpuRequest);
    }
    if (gpuLimit) {
      res["GpuLimit"] = boost::any(*gpuLimit);
    }
    if (gpuRequest) {
      res["GpuRequest"] = boost::any(*gpuRequest);
    }
    if (memoryLimit) {
      res["MemoryLimit"] = boost::any(*memoryLimit);
    }
    if (memoryRquest) {
      res["MemoryRquest"] = boost::any(*memoryRquest);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ready) {
      res["Ready"] = boost::any(*ready);
    }
    if (restartCount) {
      res["RestartCount"] = boost::any(*restartCount);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
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
    if (m.find("CpuLimit") != m.end() && !m["CpuLimit"].empty()) {
      cpuLimit = make_shared<long>(boost::any_cast<long>(m["CpuLimit"]));
    }
    if (m.find("CpuRequest") != m.end() && !m["CpuRequest"].empty()) {
      cpuRequest = make_shared<long>(boost::any_cast<long>(m["CpuRequest"]));
    }
    if (m.find("GpuLimit") != m.end() && !m["GpuLimit"].empty()) {
      gpuLimit = make_shared<long>(boost::any_cast<long>(m["GpuLimit"]));
    }
    if (m.find("GpuRequest") != m.end() && !m["GpuRequest"].empty()) {
      gpuRequest = make_shared<long>(boost::any_cast<long>(m["GpuRequest"]));
    }
    if (m.find("MemoryLimit") != m.end() && !m["MemoryLimit"].empty()) {
      memoryLimit = make_shared<long>(boost::any_cast<long>(m["MemoryLimit"]));
    }
    if (m.find("MemoryRquest") != m.end() && !m["MemoryRquest"].empty()) {
      memoryRquest = make_shared<long>(boost::any_cast<long>(m["MemoryRquest"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Ready") != m.end() && !m["Ready"].empty()) {
      ready = make_shared<bool>(boost::any_cast<bool>(m["Ready"]));
    }
    if (m.find("RestartCount") != m.end() && !m["RestartCount"].empty()) {
      restartCount = make_shared<long>(boost::any_cast<long>(m["RestartCount"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ResourceInstanceWorker() = default;
};
class ServiceInstanceCountInResource : public Darabonba::Model {
public:
  shared_ptr<long> dedicated{};
  shared_ptr<long> public_{};
  shared_ptr<long> quota{};

  ServiceInstanceCountInResource() {}

  explicit ServiceInstanceCountInResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dedicated) {
      res["Dedicated"] = boost::any(*dedicated);
    }
    if (public_) {
      res["Public"] = boost::any(*public_);
    }
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dedicated") != m.end() && !m["Dedicated"].empty()) {
      dedicated = make_shared<long>(boost::any_cast<long>(m["Dedicated"]));
    }
    if (m.find("Public") != m.end() && !m["Public"].empty()) {
      public_ = make_shared<long>(boost::any_cast<long>(m["Public"]));
    }
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
  }


  virtual ~ServiceInstanceCountInResource() = default;
};
class ServiceLabels : public Darabonba::Model {
public:
  shared_ptr<string> labelKey{};
  shared_ptr<string> labelValue{};

  ServiceLabels() {}

  explicit ServiceLabels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelKey) {
      res["LabelKey"] = boost::any(*labelKey);
    }
    if (labelValue) {
      res["LabelValue"] = boost::any(*labelValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelKey") != m.end() && !m["LabelKey"].empty()) {
      labelKey = make_shared<string>(boost::any_cast<string>(m["LabelKey"]));
    }
    if (m.find("LabelValue") != m.end() && !m["LabelValue"].empty()) {
      labelValue = make_shared<string>(boost::any_cast<string>(m["LabelValue"]));
    }
  }


  virtual ~ServiceLabels() = default;
};
class Service : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> appConfig{};
  shared_ptr<string> appSpecName{};
  shared_ptr<string> appType{};
  shared_ptr<string> appVersion{};
  shared_ptr<bool> autoscalerEnabled{};
  shared_ptr<string> callerUid{};
  shared_ptr<long> cpu{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> cronscalerEnabled{};
  shared_ptr<long> currentVersion{};
  shared_ptr<string> extraData{};
  shared_ptr<long> GPUCorePercentage{};
  shared_ptr<long> GPUMemory{};
  shared_ptr<string> gateway{};
  shared_ptr<long> gpu{};
  shared_ptr<string> image{};
  shared_ptr<ServiceInstanceCountInResource> instanceCountInResource{};
  shared_ptr<string> internetEndpoint{};
  shared_ptr<string> intranetEndpoint{};
  shared_ptr<vector<ServiceLabels>> labels{};
  shared_ptr<long> latestVersion{};
  shared_ptr<long> memory{};
  shared_ptr<string> message{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> parentUid{};
  shared_ptr<long> pendingInstance{};
  shared_ptr<string> quotaId{};
  shared_ptr<string> reason{};
  shared_ptr<string> region{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resource{};
  shared_ptr<string> resourceAlias{};
  shared_ptr<bool> resourceBurstable{};
  shared_ptr<string> role{};
  shared_ptr<string> roleAttrs{};
  shared_ptr<long> runningInstance{};
  shared_ptr<string> safetyLock{};
  shared_ptr<string> secondaryInternetEndpoint{};
  shared_ptr<string> secondaryIntranetEndpoint{};
  shared_ptr<string> serviceConfig{};
  shared_ptr<string> serviceGroup{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceUid{};
  shared_ptr<string> source{};
  shared_ptr<string> status{};
  shared_ptr<long> totalInstance{};
  shared_ptr<string> trafficState{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> weight{};
  shared_ptr<string> workspaceId{};

  Service() {}

  explicit Service(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (appConfig) {
      res["AppConfig"] = boost::any(*appConfig);
    }
    if (appSpecName) {
      res["AppSpecName"] = boost::any(*appSpecName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (autoscalerEnabled) {
      res["AutoscalerEnabled"] = boost::any(*autoscalerEnabled);
    }
    if (callerUid) {
      res["CallerUid"] = boost::any(*callerUid);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (cronscalerEnabled) {
      res["CronscalerEnabled"] = boost::any(*cronscalerEnabled);
    }
    if (currentVersion) {
      res["CurrentVersion"] = boost::any(*currentVersion);
    }
    if (extraData) {
      res["ExtraData"] = boost::any(*extraData);
    }
    if (GPUCorePercentage) {
      res["GPUCorePercentage"] = boost::any(*GPUCorePercentage);
    }
    if (GPUMemory) {
      res["GPUMemory"] = boost::any(*GPUMemory);
    }
    if (gateway) {
      res["Gateway"] = boost::any(*gateway);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (instanceCountInResource) {
      res["InstanceCountInResource"] = instanceCountInResource ? boost::any(instanceCountInResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (internetEndpoint) {
      res["InternetEndpoint"] = boost::any(*internetEndpoint);
    }
    if (intranetEndpoint) {
      res["IntranetEndpoint"] = boost::any(*intranetEndpoint);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (latestVersion) {
      res["LatestVersion"] = boost::any(*latestVersion);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (parentUid) {
      res["ParentUid"] = boost::any(*parentUid);
    }
    if (pendingInstance) {
      res["PendingInstance"] = boost::any(*pendingInstance);
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resource) {
      res["Resource"] = boost::any(*resource);
    }
    if (resourceAlias) {
      res["ResourceAlias"] = boost::any(*resourceAlias);
    }
    if (resourceBurstable) {
      res["ResourceBurstable"] = boost::any(*resourceBurstable);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (roleAttrs) {
      res["RoleAttrs"] = boost::any(*roleAttrs);
    }
    if (runningInstance) {
      res["RunningInstance"] = boost::any(*runningInstance);
    }
    if (safetyLock) {
      res["SafetyLock"] = boost::any(*safetyLock);
    }
    if (secondaryInternetEndpoint) {
      res["SecondaryInternetEndpoint"] = boost::any(*secondaryInternetEndpoint);
    }
    if (secondaryIntranetEndpoint) {
      res["SecondaryIntranetEndpoint"] = boost::any(*secondaryIntranetEndpoint);
    }
    if (serviceConfig) {
      res["ServiceConfig"] = boost::any(*serviceConfig);
    }
    if (serviceGroup) {
      res["ServiceGroup"] = boost::any(*serviceGroup);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceUid) {
      res["ServiceUid"] = boost::any(*serviceUid);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalInstance) {
      res["TotalInstance"] = boost::any(*totalInstance);
    }
    if (trafficState) {
      res["TrafficState"] = boost::any(*trafficState);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AppConfig") != m.end() && !m["AppConfig"].empty()) {
      appConfig = make_shared<string>(boost::any_cast<string>(m["AppConfig"]));
    }
    if (m.find("AppSpecName") != m.end() && !m["AppSpecName"].empty()) {
      appSpecName = make_shared<string>(boost::any_cast<string>(m["AppSpecName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("AutoscalerEnabled") != m.end() && !m["AutoscalerEnabled"].empty()) {
      autoscalerEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoscalerEnabled"]));
    }
    if (m.find("CallerUid") != m.end() && !m["CallerUid"].empty()) {
      callerUid = make_shared<string>(boost::any_cast<string>(m["CallerUid"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CronscalerEnabled") != m.end() && !m["CronscalerEnabled"].empty()) {
      cronscalerEnabled = make_shared<bool>(boost::any_cast<bool>(m["CronscalerEnabled"]));
    }
    if (m.find("CurrentVersion") != m.end() && !m["CurrentVersion"].empty()) {
      currentVersion = make_shared<long>(boost::any_cast<long>(m["CurrentVersion"]));
    }
    if (m.find("ExtraData") != m.end() && !m["ExtraData"].empty()) {
      extraData = make_shared<string>(boost::any_cast<string>(m["ExtraData"]));
    }
    if (m.find("GPUCorePercentage") != m.end() && !m["GPUCorePercentage"].empty()) {
      GPUCorePercentage = make_shared<long>(boost::any_cast<long>(m["GPUCorePercentage"]));
    }
    if (m.find("GPUMemory") != m.end() && !m["GPUMemory"].empty()) {
      GPUMemory = make_shared<long>(boost::any_cast<long>(m["GPUMemory"]));
    }
    if (m.find("Gateway") != m.end() && !m["Gateway"].empty()) {
      gateway = make_shared<string>(boost::any_cast<string>(m["Gateway"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("InstanceCountInResource") != m.end() && !m["InstanceCountInResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceCountInResource"].type()) {
        ServiceInstanceCountInResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceCountInResource"]));
        instanceCountInResource = make_shared<ServiceInstanceCountInResource>(model1);
      }
    }
    if (m.find("InternetEndpoint") != m.end() && !m["InternetEndpoint"].empty()) {
      internetEndpoint = make_shared<string>(boost::any_cast<string>(m["InternetEndpoint"]));
    }
    if (m.find("IntranetEndpoint") != m.end() && !m["IntranetEndpoint"].empty()) {
      intranetEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetEndpoint"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<ServiceLabels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ServiceLabels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<ServiceLabels>>(expect1);
      }
    }
    if (m.find("LatestVersion") != m.end() && !m["LatestVersion"].empty()) {
      latestVersion = make_shared<long>(boost::any_cast<long>(m["LatestVersion"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ParentUid") != m.end() && !m["ParentUid"].empty()) {
      parentUid = make_shared<string>(boost::any_cast<string>(m["ParentUid"]));
    }
    if (m.find("PendingInstance") != m.end() && !m["PendingInstance"].empty()) {
      pendingInstance = make_shared<long>(boost::any_cast<long>(m["PendingInstance"]));
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["Resource"]));
    }
    if (m.find("ResourceAlias") != m.end() && !m["ResourceAlias"].empty()) {
      resourceAlias = make_shared<string>(boost::any_cast<string>(m["ResourceAlias"]));
    }
    if (m.find("ResourceBurstable") != m.end() && !m["ResourceBurstable"].empty()) {
      resourceBurstable = make_shared<bool>(boost::any_cast<bool>(m["ResourceBurstable"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("RoleAttrs") != m.end() && !m["RoleAttrs"].empty()) {
      roleAttrs = make_shared<string>(boost::any_cast<string>(m["RoleAttrs"]));
    }
    if (m.find("RunningInstance") != m.end() && !m["RunningInstance"].empty()) {
      runningInstance = make_shared<long>(boost::any_cast<long>(m["RunningInstance"]));
    }
    if (m.find("SafetyLock") != m.end() && !m["SafetyLock"].empty()) {
      safetyLock = make_shared<string>(boost::any_cast<string>(m["SafetyLock"]));
    }
    if (m.find("SecondaryInternetEndpoint") != m.end() && !m["SecondaryInternetEndpoint"].empty()) {
      secondaryInternetEndpoint = make_shared<string>(boost::any_cast<string>(m["SecondaryInternetEndpoint"]));
    }
    if (m.find("SecondaryIntranetEndpoint") != m.end() && !m["SecondaryIntranetEndpoint"].empty()) {
      secondaryIntranetEndpoint = make_shared<string>(boost::any_cast<string>(m["SecondaryIntranetEndpoint"]));
    }
    if (m.find("ServiceConfig") != m.end() && !m["ServiceConfig"].empty()) {
      serviceConfig = make_shared<string>(boost::any_cast<string>(m["ServiceConfig"]));
    }
    if (m.find("ServiceGroup") != m.end() && !m["ServiceGroup"].empty()) {
      serviceGroup = make_shared<string>(boost::any_cast<string>(m["ServiceGroup"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceUid") != m.end() && !m["ServiceUid"].empty()) {
      serviceUid = make_shared<string>(boost::any_cast<string>(m["ServiceUid"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalInstance") != m.end() && !m["TotalInstance"].empty()) {
      totalInstance = make_shared<long>(boost::any_cast<long>(m["TotalInstance"]));
    }
    if (m.find("TrafficState") != m.end() && !m["TrafficState"].empty()) {
      trafficState = make_shared<string>(boost::any_cast<string>(m["TrafficState"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~Service() = default;
};
class AttachGatewayDomainRequestCustomDomain : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> domain{};
  shared_ptr<string> type{};

  AttachGatewayDomainRequestCustomDomain() {}

  explicit AttachGatewayDomainRequestCustomDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AttachGatewayDomainRequestCustomDomain() = default;
};
class AttachGatewayDomainRequest : public Darabonba::Model {
public:
  shared_ptr<AttachGatewayDomainRequestCustomDomain> customDomain{};

  AttachGatewayDomainRequest() {}

  explicit AttachGatewayDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customDomain) {
      res["CustomDomain"] = customDomain ? boost::any(customDomain->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomDomain") != m.end() && !m["CustomDomain"].empty()) {
      if (typeid(map<string, boost::any>) == m["CustomDomain"].type()) {
        AttachGatewayDomainRequestCustomDomain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CustomDomain"]));
        customDomain = make_shared<AttachGatewayDomainRequestCustomDomain>(model1);
      }
    }
  }


  virtual ~AttachGatewayDomainRequest() = default;
};
class AttachGatewayDomainShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> customDomainShrink{};

  AttachGatewayDomainShrinkRequest() {}

  explicit AttachGatewayDomainShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customDomainShrink) {
      res["CustomDomain"] = boost::any(*customDomainShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomDomain") != m.end() && !m["CustomDomain"].empty()) {
      customDomainShrink = make_shared<string>(boost::any_cast<string>(m["CustomDomain"]));
    }
  }


  virtual ~AttachGatewayDomainShrinkRequest() = default;
};
class AttachGatewayDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AttachGatewayDomainResponseBody() {}

  explicit AttachGatewayDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AttachGatewayDomainResponseBody() = default;
};
class AttachGatewayDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachGatewayDomainResponseBody> body{};

  AttachGatewayDomainResponse() {}

  explicit AttachGatewayDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AttachGatewayDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachGatewayDomainResponseBody>(model1);
      }
    }
  }


  virtual ~AttachGatewayDomainResponse() = default;
};
class CloneServiceRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> body{};

  CloneServiceRequest() {}

  explicit CloneServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~CloneServiceRequest() = default;
};
class CloneServiceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelsShrink{};
  shared_ptr<string> body{};

  CloneServiceShrinkRequest() {}

  explicit CloneServiceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelsShrink) {
      res["Labels"] = boost::any(*labelsShrink);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labelsShrink = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~CloneServiceShrinkRequest() = default;
};
class CloneServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> internetEndpoint{};
  shared_ptr<string> intranetEndpoint{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> status{};

  CloneServiceResponseBody() {}

  explicit CloneServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (internetEndpoint) {
      res["InternetEndpoint"] = boost::any(*internetEndpoint);
    }
    if (intranetEndpoint) {
      res["IntranetEndpoint"] = boost::any(*intranetEndpoint);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InternetEndpoint") != m.end() && !m["InternetEndpoint"].empty()) {
      internetEndpoint = make_shared<string>(boost::any_cast<string>(m["InternetEndpoint"]));
    }
    if (m.find("IntranetEndpoint") != m.end() && !m["IntranetEndpoint"].empty()) {
      intranetEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetEndpoint"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CloneServiceResponseBody() = default;
};
class CloneServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloneServiceResponseBody> body{};

  CloneServiceResponse() {}

  explicit CloneServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CloneServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CloneServiceResponse() = default;
};
class CommitServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CommitServiceResponseBody() {}

  explicit CommitServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CommitServiceResponseBody() = default;
};
class CommitServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CommitServiceResponseBody> body{};

  CommitServiceResponse() {}

  explicit CommitServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CommitServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CommitServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CommitServiceResponse() = default;
};
class CreateAclPolicyRequestAclPolicyList : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> entry{};

  CreateAclPolicyRequestAclPolicyList() {}

  explicit CreateAclPolicyRequestAclPolicyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
  }


  virtual ~CreateAclPolicyRequestAclPolicyList() = default;
};
class CreateAclPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateAclPolicyRequestAclPolicyList>> aclPolicyList{};
  shared_ptr<string> vpcId{};

  CreateAclPolicyRequest() {}

  explicit CreateAclPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclPolicyList) {
      vector<boost::any> temp1;
      for(auto item1:*aclPolicyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclPolicyList"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclPolicyList") != m.end() && !m["AclPolicyList"].empty()) {
      if (typeid(vector<boost::any>) == m["AclPolicyList"].type()) {
        vector<CreateAclPolicyRequestAclPolicyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclPolicyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAclPolicyRequestAclPolicyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclPolicyList = make_shared<vector<CreateAclPolicyRequestAclPolicyList>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateAclPolicyRequest() = default;
};
class CreateAclPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclPolicyListShrink{};
  shared_ptr<string> vpcId{};

  CreateAclPolicyShrinkRequest() {}

  explicit CreateAclPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclPolicyListShrink) {
      res["AclPolicyList"] = boost::any(*aclPolicyListShrink);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclPolicyList") != m.end() && !m["AclPolicyList"].empty()) {
      aclPolicyListShrink = make_shared<string>(boost::any_cast<string>(m["AclPolicyList"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateAclPolicyShrinkRequest() = default;
};
class CreateAclPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateAclPolicyResponseBody() {}

  explicit CreateAclPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAclPolicyResponseBody() = default;
};
class CreateAclPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAclPolicyResponseBody> body{};

  CreateAclPolicyResponse() {}

  explicit CreateAclPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAclPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAclPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAclPolicyResponse() = default;
};
class CreateAppServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> quotaId{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> appType{};
  shared_ptr<string> appVersion{};
  shared_ptr<map<string, boost::any>> config{};
  shared_ptr<long> replicas{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceSpec{};

  CreateAppServiceRequest() {}

  explicit CreateAppServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (replicas) {
      res["Replicas"] = boost::any(*replicas);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceSpec) {
      res["ServiceSpec"] = boost::any(*serviceSpec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Config"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Replicas") != m.end() && !m["Replicas"].empty()) {
      replicas = make_shared<long>(boost::any_cast<long>(m["Replicas"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceSpec") != m.end() && !m["ServiceSpec"].empty()) {
      serviceSpec = make_shared<string>(boost::any_cast<string>(m["ServiceSpec"]));
    }
  }


  virtual ~CreateAppServiceRequest() = default;
};
class CreateAppServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> internetEndpoint{};
  shared_ptr<string> intranetEndpoint{};
  shared_ptr<string> region{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> status{};

  CreateAppServiceResponseBody() {}

  explicit CreateAppServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (internetEndpoint) {
      res["InternetEndpoint"] = boost::any(*internetEndpoint);
    }
    if (intranetEndpoint) {
      res["IntranetEndpoint"] = boost::any(*intranetEndpoint);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InternetEndpoint") != m.end() && !m["InternetEndpoint"].empty()) {
      internetEndpoint = make_shared<string>(boost::any_cast<string>(m["InternetEndpoint"]));
    }
    if (m.find("IntranetEndpoint") != m.end() && !m["IntranetEndpoint"].empty()) {
      intranetEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetEndpoint"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateAppServiceResponseBody() = default;
};
class CreateAppServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppServiceResponseBody> body{};

  CreateAppServiceResponse() {}

  explicit CreateAppServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAppServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppServiceResponse() = default;
};
class CreateBenchmarkTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};

  CreateBenchmarkTaskRequest() {}

  explicit CreateBenchmarkTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~CreateBenchmarkTaskRequest() = default;
};
class CreateBenchmarkTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> region{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskName{};

  CreateBenchmarkTaskResponseBody() {}

  explicit CreateBenchmarkTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~CreateBenchmarkTaskResponseBody() = default;
};
class CreateBenchmarkTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBenchmarkTaskResponseBody> body{};

  CreateBenchmarkTaskResponse() {}

  explicit CreateBenchmarkTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateBenchmarkTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBenchmarkTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBenchmarkTaskResponse() = default;
};
class CreateGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceName{};
  shared_ptr<bool> autoRenewal{};
  shared_ptr<string> chargeType{};
  shared_ptr<bool> enableInternet{};
  shared_ptr<bool> enableIntranet{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> name{};
  shared_ptr<long> replicas{};

  CreateGatewayRequest() {}

  explicit CreateGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (autoRenewal) {
      res["AutoRenewal"] = boost::any(*autoRenewal);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (enableInternet) {
      res["EnableInternet"] = boost::any(*enableInternet);
    }
    if (enableIntranet) {
      res["EnableIntranet"] = boost::any(*enableIntranet);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (replicas) {
      res["Replicas"] = boost::any(*replicas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("AutoRenewal") != m.end() && !m["AutoRenewal"].empty()) {
      autoRenewal = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewal"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("EnableInternet") != m.end() && !m["EnableInternet"].empty()) {
      enableInternet = make_shared<bool>(boost::any_cast<bool>(m["EnableInternet"]));
    }
    if (m.find("EnableIntranet") != m.end() && !m["EnableIntranet"].empty()) {
      enableIntranet = make_shared<bool>(boost::any_cast<bool>(m["EnableIntranet"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Replicas") != m.end() && !m["Replicas"].empty()) {
      replicas = make_shared<long>(boost::any_cast<long>(m["Replicas"]));
    }
  }


  virtual ~CreateGatewayRequest() = default;
};
class CreateGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateGatewayResponseBody() {}

  explicit CreateGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateGatewayResponseBody() = default;
};
class CreateGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewayResponseBody> body{};

  CreateGatewayResponse() {}

  explicit CreateGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewayResponse() = default;
};
class CreateGatewayIntranetLinkedVpcRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<bool> enableAuthoritativeDns{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  CreateGatewayIntranetLinkedVpcRequest() {}

  explicit CreateGatewayIntranetLinkedVpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (enableAuthoritativeDns) {
      res["EnableAuthoritativeDns"] = boost::any(*enableAuthoritativeDns);
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
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("EnableAuthoritativeDns") != m.end() && !m["EnableAuthoritativeDns"].empty()) {
      enableAuthoritativeDns = make_shared<bool>(boost::any_cast<bool>(m["EnableAuthoritativeDns"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateGatewayIntranetLinkedVpcRequest() = default;
};
class CreateGatewayIntranetLinkedVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateGatewayIntranetLinkedVpcResponseBody() {}

  explicit CreateGatewayIntranetLinkedVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateGatewayIntranetLinkedVpcResponseBody() = default;
};
class CreateGatewayIntranetLinkedVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewayIntranetLinkedVpcResponseBody> body{};

  CreateGatewayIntranetLinkedVpcResponse() {}

  explicit CreateGatewayIntranetLinkedVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGatewayIntranetLinkedVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewayIntranetLinkedVpcResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewayIntranetLinkedVpcResponse() = default;
};
class CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> vpcId{};

  CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs() {}

  explicit CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs() = default;
};
class CreateGatewayIntranetLinkedVpcPeerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs>> peerVpcs{};
  shared_ptr<string> vpcId{};

  CreateGatewayIntranetLinkedVpcPeerRequest() {}

  explicit CreateGatewayIntranetLinkedVpcPeerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (peerVpcs) {
      vector<boost::any> temp1;
      for(auto item1:*peerVpcs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PeerVpcs"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeerVpcs") != m.end() && !m["PeerVpcs"].empty()) {
      if (typeid(vector<boost::any>) == m["PeerVpcs"].type()) {
        vector<CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PeerVpcs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        peerVpcs = make_shared<vector<CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateGatewayIntranetLinkedVpcPeerRequest() = default;
};
class CreateGatewayIntranetLinkedVpcPeerShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> peerVpcsShrink{};
  shared_ptr<string> vpcId{};

  CreateGatewayIntranetLinkedVpcPeerShrinkRequest() {}

  explicit CreateGatewayIntranetLinkedVpcPeerShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (peerVpcsShrink) {
      res["PeerVpcs"] = boost::any(*peerVpcsShrink);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeerVpcs") != m.end() && !m["PeerVpcs"].empty()) {
      peerVpcsShrink = make_shared<string>(boost::any_cast<string>(m["PeerVpcs"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateGatewayIntranetLinkedVpcPeerShrinkRequest() = default;
};
class CreateGatewayIntranetLinkedVpcPeerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateGatewayIntranetLinkedVpcPeerResponseBody() {}

  explicit CreateGatewayIntranetLinkedVpcPeerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateGatewayIntranetLinkedVpcPeerResponseBody() = default;
};
class CreateGatewayIntranetLinkedVpcPeerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewayIntranetLinkedVpcPeerResponseBody> body{};

  CreateGatewayIntranetLinkedVpcPeerResponse() {}

  explicit CreateGatewayIntranetLinkedVpcPeerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGatewayIntranetLinkedVpcPeerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewayIntranetLinkedVpcPeerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewayIntranetLinkedVpcPeerResponse() = default;
};
class CreateResourceRequestSelfManagedResourceOptionsNodeTolerations : public Darabonba::Model {
public:
  shared_ptr<string> effect{};
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  CreateResourceRequestSelfManagedResourceOptionsNodeTolerations() {}

  explicit CreateResourceRequestSelfManagedResourceOptionsNodeTolerations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~CreateResourceRequestSelfManagedResourceOptionsNodeTolerations() = default;
};
class CreateResourceRequestSelfManagedResourceOptions : public Darabonba::Model {
public:
  shared_ptr<string> externalClusterId{};
  shared_ptr<map<string, string>> nodeMatchLabels{};
  shared_ptr<vector<CreateResourceRequestSelfManagedResourceOptionsNodeTolerations>> nodeTolerations{};
  shared_ptr<string> roleName{};

  CreateResourceRequestSelfManagedResourceOptions() {}

  explicit CreateResourceRequestSelfManagedResourceOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalClusterId) {
      res["ExternalClusterId"] = boost::any(*externalClusterId);
    }
    if (nodeMatchLabels) {
      res["NodeMatchLabels"] = boost::any(*nodeMatchLabels);
    }
    if (nodeTolerations) {
      vector<boost::any> temp1;
      for(auto item1:*nodeTolerations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeTolerations"] = boost::any(temp1);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalClusterId") != m.end() && !m["ExternalClusterId"].empty()) {
      externalClusterId = make_shared<string>(boost::any_cast<string>(m["ExternalClusterId"]));
    }
    if (m.find("NodeMatchLabels") != m.end() && !m["NodeMatchLabels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["NodeMatchLabels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nodeMatchLabels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("NodeTolerations") != m.end() && !m["NodeTolerations"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeTolerations"].type()) {
        vector<CreateResourceRequestSelfManagedResourceOptionsNodeTolerations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeTolerations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateResourceRequestSelfManagedResourceOptionsNodeTolerations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeTolerations = make_shared<vector<CreateResourceRequestSelfManagedResourceOptionsNodeTolerations>>(expect1);
      }
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~CreateResourceRequestSelfManagedResourceOptions() = default;
};
class CreateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenewal{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> ecsInstanceCount{};
  shared_ptr<string> ecsInstanceType{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<CreateResourceRequestSelfManagedResourceOptions> selfManagedResourceOptions{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<string> zone{};

  CreateResourceRequest() {}

  explicit CreateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenewal) {
      res["AutoRenewal"] = boost::any(*autoRenewal);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (ecsInstanceCount) {
      res["EcsInstanceCount"] = boost::any(*ecsInstanceCount);
    }
    if (ecsInstanceType) {
      res["EcsInstanceType"] = boost::any(*ecsInstanceType);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (selfManagedResourceOptions) {
      res["SelfManagedResourceOptions"] = selfManagedResourceOptions ? boost::any(selfManagedResourceOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (zone) {
      res["Zone"] = boost::any(*zone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenewal") != m.end() && !m["AutoRenewal"].empty()) {
      autoRenewal = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewal"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("EcsInstanceCount") != m.end() && !m["EcsInstanceCount"].empty()) {
      ecsInstanceCount = make_shared<long>(boost::any_cast<long>(m["EcsInstanceCount"]));
    }
    if (m.find("EcsInstanceType") != m.end() && !m["EcsInstanceType"].empty()) {
      ecsInstanceType = make_shared<string>(boost::any_cast<string>(m["EcsInstanceType"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SelfManagedResourceOptions") != m.end() && !m["SelfManagedResourceOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["SelfManagedResourceOptions"].type()) {
        CreateResourceRequestSelfManagedResourceOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SelfManagedResourceOptions"]));
        selfManagedResourceOptions = make_shared<CreateResourceRequestSelfManagedResourceOptions>(model1);
      }
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      zone = make_shared<string>(boost::any_cast<string>(m["Zone"]));
    }
  }


  virtual ~CreateResourceRequest() = default;
};
class CreateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> ownerUid{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};

  CreateResourceResponseBody() {}

  explicit CreateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
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
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<string>(boost::any_cast<string>(m["OwnerUid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
  }


  virtual ~CreateResourceResponseBody() = default;
};
class CreateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceResponseBody> body{};

  CreateResourceResponse() {}

  explicit CreateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceResponse() = default;
};
class CreateResourceInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenewal{};
  shared_ptr<string> chargeType{};
  shared_ptr<long> ecsInstanceCount{};
  shared_ptr<string> ecsInstanceType{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<string> userData{};
  shared_ptr<string> zone{};

  CreateResourceInstancesRequest() {}

  explicit CreateResourceInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenewal) {
      res["AutoRenewal"] = boost::any(*autoRenewal);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (ecsInstanceCount) {
      res["EcsInstanceCount"] = boost::any(*ecsInstanceCount);
    }
    if (ecsInstanceType) {
      res["EcsInstanceType"] = boost::any(*ecsInstanceType);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (zone) {
      res["Zone"] = boost::any(*zone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenewal") != m.end() && !m["AutoRenewal"].empty()) {
      autoRenewal = make_shared<bool>(boost::any_cast<bool>(m["AutoRenewal"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("EcsInstanceCount") != m.end() && !m["EcsInstanceCount"].empty()) {
      ecsInstanceCount = make_shared<long>(boost::any_cast<long>(m["EcsInstanceCount"]));
    }
    if (m.find("EcsInstanceType") != m.end() && !m["EcsInstanceType"].empty()) {
      ecsInstanceType = make_shared<string>(boost::any_cast<string>(m["EcsInstanceType"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      zone = make_shared<string>(boost::any_cast<string>(m["Zone"]));
    }
  }


  virtual ~CreateResourceInstancesRequest() = default;
};
class CreateResourceInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateResourceInstancesResponseBody() {}

  explicit CreateResourceInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateResourceInstancesResponseBody() = default;
};
class CreateResourceInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceInstancesResponseBody> body{};

  CreateResourceInstancesResponse() {}

  explicit CreateResourceInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateResourceInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceInstancesResponse() = default;
};
class CreateResourceLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> logStore{};
  shared_ptr<string> projectName{};

  CreateResourceLogRequest() {}

  explicit CreateResourceLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~CreateResourceLogRequest() = default;
};
class CreateResourceLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateResourceLogResponseBody() {}

  explicit CreateResourceLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateResourceLogResponseBody() = default;
};
class CreateResourceLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceLogResponseBody> body{};

  CreateResourceLogResponse() {}

  explicit CreateResourceLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateResourceLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceLogResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceLogResponse() = default;
};
class CreateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> develop{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> body{};

  CreateServiceRequest() {}

  explicit CreateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (develop) {
      res["Develop"] = boost::any(*develop);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Develop") != m.end() && !m["Develop"].empty()) {
      develop = make_shared<string>(boost::any_cast<string>(m["Develop"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~CreateServiceRequest() = default;
};
class CreateServiceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> develop{};
  shared_ptr<string> labelsShrink{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> body{};

  CreateServiceShrinkRequest() {}

  explicit CreateServiceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (develop) {
      res["Develop"] = boost::any(*develop);
    }
    if (labelsShrink) {
      res["Labels"] = boost::any(*labelsShrink);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Develop") != m.end() && !m["Develop"].empty()) {
      develop = make_shared<string>(boost::any_cast<string>(m["Develop"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labelsShrink = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~CreateServiceShrinkRequest() = default;
};
class CreateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> internetEndpoint{};
  shared_ptr<string> intranetEndpoint{};
  shared_ptr<string> region{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> status{};

  CreateServiceResponseBody() {}

  explicit CreateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (internetEndpoint) {
      res["InternetEndpoint"] = boost::any(*internetEndpoint);
    }
    if (intranetEndpoint) {
      res["IntranetEndpoint"] = boost::any(*intranetEndpoint);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceId) {
      res["ServiceId"] = boost::any(*serviceId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InternetEndpoint") != m.end() && !m["InternetEndpoint"].empty()) {
      internetEndpoint = make_shared<string>(boost::any_cast<string>(m["InternetEndpoint"]));
    }
    if (m.find("IntranetEndpoint") != m.end() && !m["IntranetEndpoint"].empty()) {
      intranetEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetEndpoint"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceId") != m.end() && !m["ServiceId"].empty()) {
      serviceId = make_shared<string>(boost::any_cast<string>(m["ServiceId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateServiceResponseBody() = default;
};
class CreateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceResponseBody> body{};

  CreateServiceResponse() {}

  explicit CreateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceResponse() = default;
};
class CreateServiceAutoScalerRequestBehaviorOnZero : public Darabonba::Model {
public:
  shared_ptr<long> scaleDownGracePeriodSeconds{};
  shared_ptr<long> scaleUpActivationReplicas{};

  CreateServiceAutoScalerRequestBehaviorOnZero() {}

  explicit CreateServiceAutoScalerRequestBehaviorOnZero(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scaleDownGracePeriodSeconds) {
      res["scaleDownGracePeriodSeconds"] = boost::any(*scaleDownGracePeriodSeconds);
    }
    if (scaleUpActivationReplicas) {
      res["scaleUpActivationReplicas"] = boost::any(*scaleUpActivationReplicas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scaleDownGracePeriodSeconds") != m.end() && !m["scaleDownGracePeriodSeconds"].empty()) {
      scaleDownGracePeriodSeconds = make_shared<long>(boost::any_cast<long>(m["scaleDownGracePeriodSeconds"]));
    }
    if (m.find("scaleUpActivationReplicas") != m.end() && !m["scaleUpActivationReplicas"].empty()) {
      scaleUpActivationReplicas = make_shared<long>(boost::any_cast<long>(m["scaleUpActivationReplicas"]));
    }
  }


  virtual ~CreateServiceAutoScalerRequestBehaviorOnZero() = default;
};
class CreateServiceAutoScalerRequestBehaviorScaleDown : public Darabonba::Model {
public:
  shared_ptr<long> stabilizationWindowSeconds{};

  CreateServiceAutoScalerRequestBehaviorScaleDown() {}

  explicit CreateServiceAutoScalerRequestBehaviorScaleDown(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stabilizationWindowSeconds) {
      res["stabilizationWindowSeconds"] = boost::any(*stabilizationWindowSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("stabilizationWindowSeconds") != m.end() && !m["stabilizationWindowSeconds"].empty()) {
      stabilizationWindowSeconds = make_shared<long>(boost::any_cast<long>(m["stabilizationWindowSeconds"]));
    }
  }


  virtual ~CreateServiceAutoScalerRequestBehaviorScaleDown() = default;
};
class CreateServiceAutoScalerRequestBehaviorScaleUp : public Darabonba::Model {
public:
  shared_ptr<long> stabilizationWindowSeconds{};

  CreateServiceAutoScalerRequestBehaviorScaleUp() {}

  explicit CreateServiceAutoScalerRequestBehaviorScaleUp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stabilizationWindowSeconds) {
      res["stabilizationWindowSeconds"] = boost::any(*stabilizationWindowSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("stabilizationWindowSeconds") != m.end() && !m["stabilizationWindowSeconds"].empty()) {
      stabilizationWindowSeconds = make_shared<long>(boost::any_cast<long>(m["stabilizationWindowSeconds"]));
    }
  }


  virtual ~CreateServiceAutoScalerRequestBehaviorScaleUp() = default;
};
class CreateServiceAutoScalerRequestBehavior : public Darabonba::Model {
public:
  shared_ptr<CreateServiceAutoScalerRequestBehaviorOnZero> onZero{};
  shared_ptr<CreateServiceAutoScalerRequestBehaviorScaleDown> scaleDown{};
  shared_ptr<CreateServiceAutoScalerRequestBehaviorScaleUp> scaleUp{};

  CreateServiceAutoScalerRequestBehavior() {}

  explicit CreateServiceAutoScalerRequestBehavior(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onZero) {
      res["onZero"] = onZero ? boost::any(onZero->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scaleDown) {
      res["scaleDown"] = scaleDown ? boost::any(scaleDown->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scaleUp) {
      res["scaleUp"] = scaleUp ? boost::any(scaleUp->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("onZero") != m.end() && !m["onZero"].empty()) {
      if (typeid(map<string, boost::any>) == m["onZero"].type()) {
        CreateServiceAutoScalerRequestBehaviorOnZero model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["onZero"]));
        onZero = make_shared<CreateServiceAutoScalerRequestBehaviorOnZero>(model1);
      }
    }
    if (m.find("scaleDown") != m.end() && !m["scaleDown"].empty()) {
      if (typeid(map<string, boost::any>) == m["scaleDown"].type()) {
        CreateServiceAutoScalerRequestBehaviorScaleDown model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scaleDown"]));
        scaleDown = make_shared<CreateServiceAutoScalerRequestBehaviorScaleDown>(model1);
      }
    }
    if (m.find("scaleUp") != m.end() && !m["scaleUp"].empty()) {
      if (typeid(map<string, boost::any>) == m["scaleUp"].type()) {
        CreateServiceAutoScalerRequestBehaviorScaleUp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scaleUp"]));
        scaleUp = make_shared<CreateServiceAutoScalerRequestBehaviorScaleUp>(model1);
      }
    }
  }


  virtual ~CreateServiceAutoScalerRequestBehavior() = default;
};
class CreateServiceAutoScalerRequestScaleStrategies : public Darabonba::Model {
public:
  shared_ptr<string> metricName{};
  shared_ptr<string> service{};
  shared_ptr<double> threshold{};

  CreateServiceAutoScalerRequestScaleStrategies() {}

  explicit CreateServiceAutoScalerRequestScaleStrategies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricName) {
      res["metricName"] = boost::any(*metricName);
    }
    if (service) {
      res["service"] = boost::any(*service);
    }
    if (threshold) {
      res["threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("metricName") != m.end() && !m["metricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["metricName"]));
    }
    if (m.find("service") != m.end() && !m["service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["service"]));
    }
    if (m.find("threshold") != m.end() && !m["threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["threshold"]));
    }
  }


  virtual ~CreateServiceAutoScalerRequestScaleStrategies() = default;
};
class CreateServiceAutoScalerRequest : public Darabonba::Model {
public:
  shared_ptr<CreateServiceAutoScalerRequestBehavior> behavior{};
  shared_ptr<long> max{};
  shared_ptr<long> min{};
  shared_ptr<vector<CreateServiceAutoScalerRequestScaleStrategies>> scaleStrategies{};

  CreateServiceAutoScalerRequest() {}

  explicit CreateServiceAutoScalerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (behavior) {
      res["behavior"] = behavior ? boost::any(behavior->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (max) {
      res["max"] = boost::any(*max);
    }
    if (min) {
      res["min"] = boost::any(*min);
    }
    if (scaleStrategies) {
      vector<boost::any> temp1;
      for(auto item1:*scaleStrategies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scaleStrategies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("behavior") != m.end() && !m["behavior"].empty()) {
      if (typeid(map<string, boost::any>) == m["behavior"].type()) {
        CreateServiceAutoScalerRequestBehavior model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["behavior"]));
        behavior = make_shared<CreateServiceAutoScalerRequestBehavior>(model1);
      }
    }
    if (m.find("max") != m.end() && !m["max"].empty()) {
      max = make_shared<long>(boost::any_cast<long>(m["max"]));
    }
    if (m.find("min") != m.end() && !m["min"].empty()) {
      min = make_shared<long>(boost::any_cast<long>(m["min"]));
    }
    if (m.find("scaleStrategies") != m.end() && !m["scaleStrategies"].empty()) {
      if (typeid(vector<boost::any>) == m["scaleStrategies"].type()) {
        vector<CreateServiceAutoScalerRequestScaleStrategies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scaleStrategies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceAutoScalerRequestScaleStrategies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scaleStrategies = make_shared<vector<CreateServiceAutoScalerRequestScaleStrategies>>(expect1);
      }
    }
  }


  virtual ~CreateServiceAutoScalerRequest() = default;
};
class CreateServiceAutoScalerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateServiceAutoScalerResponseBody() {}

  explicit CreateServiceAutoScalerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateServiceAutoScalerResponseBody() = default;
};
class CreateServiceAutoScalerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceAutoScalerResponseBody> body{};

  CreateServiceAutoScalerResponse() {}

  explicit CreateServiceAutoScalerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceAutoScalerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceAutoScalerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceAutoScalerResponse() = default;
};
class CreateServiceCronScalerRequestScaleJobs : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> schedule{};
  shared_ptr<long> targetSize{};

  CreateServiceCronScalerRequestScaleJobs() {}

  explicit CreateServiceCronScalerRequestScaleJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (targetSize) {
      res["TargetSize"] = boost::any(*targetSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("TargetSize") != m.end() && !m["TargetSize"].empty()) {
      targetSize = make_shared<long>(boost::any_cast<long>(m["TargetSize"]));
    }
  }


  virtual ~CreateServiceCronScalerRequestScaleJobs() = default;
};
class CreateServiceCronScalerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> excludeDates{};
  shared_ptr<vector<CreateServiceCronScalerRequestScaleJobs>> scaleJobs{};

  CreateServiceCronScalerRequest() {}

  explicit CreateServiceCronScalerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeDates) {
      res["ExcludeDates"] = boost::any(*excludeDates);
    }
    if (scaleJobs) {
      vector<boost::any> temp1;
      for(auto item1:*scaleJobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScaleJobs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeDates") != m.end() && !m["ExcludeDates"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludeDates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludeDates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeDates = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScaleJobs") != m.end() && !m["ScaleJobs"].empty()) {
      if (typeid(vector<boost::any>) == m["ScaleJobs"].type()) {
        vector<CreateServiceCronScalerRequestScaleJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScaleJobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServiceCronScalerRequestScaleJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scaleJobs = make_shared<vector<CreateServiceCronScalerRequestScaleJobs>>(expect1);
      }
    }
  }


  virtual ~CreateServiceCronScalerRequest() = default;
};
class CreateServiceCronScalerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateServiceCronScalerResponseBody() {}

  explicit CreateServiceCronScalerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateServiceCronScalerResponseBody() = default;
};
class CreateServiceCronScalerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceCronScalerResponseBody> body{};

  CreateServiceCronScalerResponse() {}

  explicit CreateServiceCronScalerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceCronScalerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceCronScalerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceCronScalerResponse() = default;
};
class CreateServiceMirrorRequest : public Darabonba::Model {
public:
  shared_ptr<long> ratio{};
  shared_ptr<vector<string>> target{};

  CreateServiceMirrorRequest() {}

  explicit CreateServiceMirrorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ratio) {
      res["Ratio"] = boost::any(*ratio);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ratio") != m.end() && !m["Ratio"].empty()) {
      ratio = make_shared<long>(boost::any_cast<long>(m["Ratio"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Target"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Target"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      target = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateServiceMirrorRequest() = default;
};
class CreateServiceMirrorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateServiceMirrorResponseBody() {}

  explicit CreateServiceMirrorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateServiceMirrorResponseBody() = default;
};
class CreateServiceMirrorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceMirrorResponseBody> body{};

  CreateServiceMirrorResponse() {}

  explicit CreateServiceMirrorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceMirrorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceMirrorResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceMirrorResponse() = default;
};
class CreateVirtualResourceRequestResources : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<long> priority{};
  shared_ptr<string> quotaId{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceId{};
  shared_ptr<double> spotPriceLimit{};

  CreateVirtualResourceRequestResources() {}

  explicit CreateVirtualResourceRequestResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
  }


  virtual ~CreateVirtualResourceRequestResources() = default;
};
class CreateVirtualResourceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> disableSpotProtectionPeriod{};
  shared_ptr<vector<CreateVirtualResourceRequestResources>> resources{};
  shared_ptr<string> virtualResourceName{};

  CreateVirtualResourceRequest() {}

  explicit CreateVirtualResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableSpotProtectionPeriod) {
      res["DisableSpotProtectionPeriod"] = boost::any(*disableSpotProtectionPeriod);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (virtualResourceName) {
      res["VirtualResourceName"] = boost::any(*virtualResourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisableSpotProtectionPeriod") != m.end() && !m["DisableSpotProtectionPeriod"].empty()) {
      disableSpotProtectionPeriod = make_shared<bool>(boost::any_cast<bool>(m["DisableSpotProtectionPeriod"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<CreateVirtualResourceRequestResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVirtualResourceRequestResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<CreateVirtualResourceRequestResources>>(expect1);
      }
    }
    if (m.find("VirtualResourceName") != m.end() && !m["VirtualResourceName"].empty()) {
      virtualResourceName = make_shared<string>(boost::any_cast<string>(m["VirtualResourceName"]));
    }
  }


  virtual ~CreateVirtualResourceRequest() = default;
};
class CreateVirtualResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> virtualResourceId{};

  CreateVirtualResourceResponseBody() {}

  explicit CreateVirtualResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (virtualResourceId) {
      res["VirtualResourceId"] = boost::any(*virtualResourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VirtualResourceId") != m.end() && !m["VirtualResourceId"].empty()) {
      virtualResourceId = make_shared<string>(boost::any_cast<string>(m["VirtualResourceId"]));
    }
  }


  virtual ~CreateVirtualResourceResponseBody() = default;
};
class CreateVirtualResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVirtualResourceResponseBody> body{};

  CreateVirtualResourceResponse() {}

  explicit CreateVirtualResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateVirtualResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVirtualResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVirtualResourceResponse() = default;
};
class DeleteAclPolicyRequestAclPolicyList : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> entry{};

  DeleteAclPolicyRequestAclPolicyList() {}

  explicit DeleteAclPolicyRequestAclPolicyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
  }


  virtual ~DeleteAclPolicyRequestAclPolicyList() = default;
};
class DeleteAclPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteAclPolicyRequestAclPolicyList>> aclPolicyList{};
  shared_ptr<string> vpcId{};

  DeleteAclPolicyRequest() {}

  explicit DeleteAclPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclPolicyList) {
      vector<boost::any> temp1;
      for(auto item1:*aclPolicyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclPolicyList"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclPolicyList") != m.end() && !m["AclPolicyList"].empty()) {
      if (typeid(vector<boost::any>) == m["AclPolicyList"].type()) {
        vector<DeleteAclPolicyRequestAclPolicyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclPolicyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteAclPolicyRequestAclPolicyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclPolicyList = make_shared<vector<DeleteAclPolicyRequestAclPolicyList>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DeleteAclPolicyRequest() = default;
};
class DeleteAclPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aclPolicyListShrink{};
  shared_ptr<string> vpcId{};

  DeleteAclPolicyShrinkRequest() {}

  explicit DeleteAclPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclPolicyListShrink) {
      res["AclPolicyList"] = boost::any(*aclPolicyListShrink);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclPolicyList") != m.end() && !m["AclPolicyList"].empty()) {
      aclPolicyListShrink = make_shared<string>(boost::any_cast<string>(m["AclPolicyList"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DeleteAclPolicyShrinkRequest() = default;
};
class DeleteAclPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteAclPolicyResponseBody() {}

  explicit DeleteAclPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAclPolicyResponseBody() = default;
};
class DeleteAclPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAclPolicyResponseBody> body{};

  DeleteAclPolicyResponse() {}

  explicit DeleteAclPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAclPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAclPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAclPolicyResponse() = default;
};
class DeleteBenchmarkTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteBenchmarkTaskResponseBody() {}

  explicit DeleteBenchmarkTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteBenchmarkTaskResponseBody() = default;
};
class DeleteBenchmarkTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteBenchmarkTaskResponseBody> body{};

  DeleteBenchmarkTaskResponse() {}

  explicit DeleteBenchmarkTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteBenchmarkTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBenchmarkTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBenchmarkTaskResponse() = default;
};
class DeleteGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteGatewayResponseBody() {}

  explicit DeleteGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteGatewayResponseBody() = default;
};
class DeleteGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayResponseBody> body{};

  DeleteGatewayResponse() {}

  explicit DeleteGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayResponse() = default;
};
class DeleteGatewayIntranetLinkedVpcRequest : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  DeleteGatewayIntranetLinkedVpcRequest() {}

  explicit DeleteGatewayIntranetLinkedVpcRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DeleteGatewayIntranetLinkedVpcRequest() = default;
};
class DeleteGatewayIntranetLinkedVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteGatewayIntranetLinkedVpcResponseBody() {}

  explicit DeleteGatewayIntranetLinkedVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteGatewayIntranetLinkedVpcResponseBody() = default;
};
class DeleteGatewayIntranetLinkedVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayIntranetLinkedVpcResponseBody> body{};

  DeleteGatewayIntranetLinkedVpcResponse() {}

  explicit DeleteGatewayIntranetLinkedVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewayIntranetLinkedVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayIntranetLinkedVpcResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayIntranetLinkedVpcResponse() = default;
};
class DeleteGatewayIntranetLinkedVpcPeerRequestPeerVpcs : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> vpcId{};

  DeleteGatewayIntranetLinkedVpcPeerRequestPeerVpcs() {}

  explicit DeleteGatewayIntranetLinkedVpcPeerRequestPeerVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DeleteGatewayIntranetLinkedVpcPeerRequestPeerVpcs() = default;
};
class DeleteGatewayIntranetLinkedVpcPeerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteGatewayIntranetLinkedVpcPeerRequestPeerVpcs>> peerVpcs{};
  shared_ptr<string> vpcId{};

  DeleteGatewayIntranetLinkedVpcPeerRequest() {}

  explicit DeleteGatewayIntranetLinkedVpcPeerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (peerVpcs) {
      vector<boost::any> temp1;
      for(auto item1:*peerVpcs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PeerVpcs"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeerVpcs") != m.end() && !m["PeerVpcs"].empty()) {
      if (typeid(vector<boost::any>) == m["PeerVpcs"].type()) {
        vector<DeleteGatewayIntranetLinkedVpcPeerRequestPeerVpcs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PeerVpcs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteGatewayIntranetLinkedVpcPeerRequestPeerVpcs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        peerVpcs = make_shared<vector<DeleteGatewayIntranetLinkedVpcPeerRequestPeerVpcs>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DeleteGatewayIntranetLinkedVpcPeerRequest() = default;
};
class DeleteGatewayIntranetLinkedVpcPeerShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> peerVpcsShrink{};
  shared_ptr<string> vpcId{};

  DeleteGatewayIntranetLinkedVpcPeerShrinkRequest() {}

  explicit DeleteGatewayIntranetLinkedVpcPeerShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (peerVpcsShrink) {
      res["PeerVpcs"] = boost::any(*peerVpcsShrink);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeerVpcs") != m.end() && !m["PeerVpcs"].empty()) {
      peerVpcsShrink = make_shared<string>(boost::any_cast<string>(m["PeerVpcs"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DeleteGatewayIntranetLinkedVpcPeerShrinkRequest() = default;
};
class DeleteGatewayIntranetLinkedVpcPeerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteGatewayIntranetLinkedVpcPeerResponseBody() {}

  explicit DeleteGatewayIntranetLinkedVpcPeerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteGatewayIntranetLinkedVpcPeerResponseBody() = default;
};
class DeleteGatewayIntranetLinkedVpcPeerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayIntranetLinkedVpcPeerResponseBody> body{};

  DeleteGatewayIntranetLinkedVpcPeerResponse() {}

  explicit DeleteGatewayIntranetLinkedVpcPeerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGatewayIntranetLinkedVpcPeerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayIntranetLinkedVpcPeerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayIntranetLinkedVpcPeerResponse() = default;
};
class DeleteResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteResourceResponseBody() {}

  explicit DeleteResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteResourceResponseBody() = default;
};
class DeleteResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceResponseBody> body{};

  DeleteResourceResponse() {}

  explicit DeleteResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceResponse() = default;
};
class DeleteResourceDLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteResourceDLinkResponseBody() {}

  explicit DeleteResourceDLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteResourceDLinkResponseBody() = default;
};
class DeleteResourceDLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceDLinkResponseBody> body{};

  DeleteResourceDLinkResponse() {}

  explicit DeleteResourceDLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteResourceDLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceDLinkResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceDLinkResponse() = default;
};
class DeleteResourceInstanceLabelRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allInstances{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<vector<string>> keys{};

  DeleteResourceInstanceLabelRequest() {}

  explicit DeleteResourceInstanceLabelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allInstances) {
      res["AllInstances"] = boost::any(*allInstances);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllInstances") != m.end() && !m["AllInstances"].empty()) {
      allInstances = make_shared<bool>(boost::any_cast<bool>(m["AllInstances"]));
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
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteResourceInstanceLabelRequest() = default;
};
class DeleteResourceInstanceLabelShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allInstances{};
  shared_ptr<string> instanceIdsShrink{};
  shared_ptr<string> keysShrink{};

  DeleteResourceInstanceLabelShrinkRequest() {}

  explicit DeleteResourceInstanceLabelShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allInstances) {
      res["AllInstances"] = boost::any(*allInstances);
    }
    if (instanceIdsShrink) {
      res["InstanceIds"] = boost::any(*instanceIdsShrink);
    }
    if (keysShrink) {
      res["Keys"] = boost::any(*keysShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllInstances") != m.end() && !m["AllInstances"].empty()) {
      allInstances = make_shared<bool>(boost::any_cast<bool>(m["AllInstances"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      keysShrink = make_shared<string>(boost::any_cast<string>(m["Keys"]));
    }
  }


  virtual ~DeleteResourceInstanceLabelShrinkRequest() = default;
};
class DeleteResourceInstanceLabelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteResourceInstanceLabelResponseBody() {}

  explicit DeleteResourceInstanceLabelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteResourceInstanceLabelResponseBody() = default;
};
class DeleteResourceInstanceLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceInstanceLabelResponseBody> body{};

  DeleteResourceInstanceLabelResponse() {}

  explicit DeleteResourceInstanceLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteResourceInstanceLabelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceInstanceLabelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceInstanceLabelResponse() = default;
};
class DeleteResourceInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allFailed{};
  shared_ptr<string> instanceList{};

  DeleteResourceInstancesRequest() {}

  explicit DeleteResourceInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allFailed) {
      res["AllFailed"] = boost::any(*allFailed);
    }
    if (instanceList) {
      res["InstanceList"] = boost::any(*instanceList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllFailed") != m.end() && !m["AllFailed"].empty()) {
      allFailed = make_shared<bool>(boost::any_cast<bool>(m["AllFailed"]));
    }
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      instanceList = make_shared<string>(boost::any_cast<string>(m["InstanceList"]));
    }
  }


  virtual ~DeleteResourceInstancesRequest() = default;
};
class DeleteResourceInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteResourceInstancesResponseBody() {}

  explicit DeleteResourceInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteResourceInstancesResponseBody() = default;
};
class DeleteResourceInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceInstancesResponseBody> body{};

  DeleteResourceInstancesResponse() {}

  explicit DeleteResourceInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteResourceInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceInstancesResponse() = default;
};
class DeleteResourceLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteResourceLogResponseBody() {}

  explicit DeleteResourceLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteResourceLogResponseBody() = default;
};
class DeleteResourceLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceLogResponseBody> body{};

  DeleteResourceLogResponse() {}

  explicit DeleteResourceLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteResourceLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceLogResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceLogResponse() = default;
};
class DeleteServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteServiceResponseBody() {}

  explicit DeleteServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteServiceResponseBody() = default;
};
class DeleteServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceResponseBody> body{};

  DeleteServiceResponse() {}

  explicit DeleteServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceResponse() = default;
};
class DeleteServiceAutoScalerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteServiceAutoScalerResponseBody() {}

  explicit DeleteServiceAutoScalerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteServiceAutoScalerResponseBody() = default;
};
class DeleteServiceAutoScalerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceAutoScalerResponseBody> body{};

  DeleteServiceAutoScalerResponse() {}

  explicit DeleteServiceAutoScalerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceAutoScalerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceAutoScalerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceAutoScalerResponse() = default;
};
class DeleteServiceCronScalerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteServiceCronScalerResponseBody() {}

  explicit DeleteServiceCronScalerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteServiceCronScalerResponseBody() = default;
};
class DeleteServiceCronScalerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceCronScalerResponseBody> body{};

  DeleteServiceCronScalerResponse() {}

  explicit DeleteServiceCronScalerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceCronScalerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceCronScalerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceCronScalerResponse() = default;
};
class DeleteServiceInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> container{};
  shared_ptr<string> instanceList{};
  shared_ptr<bool> softRestart{};

  DeleteServiceInstancesRequest() {}

  explicit DeleteServiceInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (container) {
      res["Container"] = boost::any(*container);
    }
    if (instanceList) {
      res["InstanceList"] = boost::any(*instanceList);
    }
    if (softRestart) {
      res["SoftRestart"] = boost::any(*softRestart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Container") != m.end() && !m["Container"].empty()) {
      container = make_shared<string>(boost::any_cast<string>(m["Container"]));
    }
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      instanceList = make_shared<string>(boost::any_cast<string>(m["InstanceList"]));
    }
    if (m.find("SoftRestart") != m.end() && !m["SoftRestart"].empty()) {
      softRestart = make_shared<bool>(boost::any_cast<bool>(m["SoftRestart"]));
    }
  }


  virtual ~DeleteServiceInstancesRequest() = default;
};
class DeleteServiceInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteServiceInstancesResponseBody() {}

  explicit DeleteServiceInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteServiceInstancesResponseBody() = default;
};
class DeleteServiceInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceInstancesResponseBody> body{};

  DeleteServiceInstancesResponse() {}

  explicit DeleteServiceInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceInstancesResponse() = default;
};
class DeleteServiceLabelRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> keys{};

  DeleteServiceLabelRequest() {}

  explicit DeleteServiceLabelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keys) {
      res["Keys"] = boost::any(*keys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Keys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Keys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keys = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteServiceLabelRequest() = default;
};
class DeleteServiceLabelShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> keysShrink{};

  DeleteServiceLabelShrinkRequest() {}

  explicit DeleteServiceLabelShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keysShrink) {
      res["Keys"] = boost::any(*keysShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Keys") != m.end() && !m["Keys"].empty()) {
      keysShrink = make_shared<string>(boost::any_cast<string>(m["Keys"]));
    }
  }


  virtual ~DeleteServiceLabelShrinkRequest() = default;
};
class DeleteServiceLabelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteServiceLabelResponseBody() {}

  explicit DeleteServiceLabelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteServiceLabelResponseBody() = default;
};
class DeleteServiceLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceLabelResponseBody> body{};

  DeleteServiceLabelResponse() {}

  explicit DeleteServiceLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceLabelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceLabelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceLabelResponse() = default;
};
class DeleteServiceMirrorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteServiceMirrorResponseBody() {}

  explicit DeleteServiceMirrorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteServiceMirrorResponseBody() = default;
};
class DeleteServiceMirrorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceMirrorResponseBody> body{};

  DeleteServiceMirrorResponse() {}

  explicit DeleteServiceMirrorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceMirrorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceMirrorResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceMirrorResponse() = default;
};
class DeleteVirtualResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteVirtualResourceResponseBody() {}

  explicit DeleteVirtualResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteVirtualResourceResponseBody() = default;
};
class DeleteVirtualResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVirtualResourceResponseBody> body{};

  DeleteVirtualResourceResponse() {}

  explicit DeleteVirtualResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteVirtualResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVirtualResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVirtualResourceResponse() = default;
};
class DescribeBenchmarkTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> availableAgent{};
  shared_ptr<string> callerUid{};
  shared_ptr<long> desiredAgent{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> message{};
  shared_ptr<string> parentUid{};
  shared_ptr<string> reason{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> token{};

  DescribeBenchmarkTaskResponseBody() {}

  explicit DescribeBenchmarkTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableAgent) {
      res["AvailableAgent"] = boost::any(*availableAgent);
    }
    if (callerUid) {
      res["CallerUid"] = boost::any(*callerUid);
    }
    if (desiredAgent) {
      res["DesiredAgent"] = boost::any(*desiredAgent);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (parentUid) {
      res["ParentUid"] = boost::any(*parentUid);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableAgent") != m.end() && !m["AvailableAgent"].empty()) {
      availableAgent = make_shared<long>(boost::any_cast<long>(m["AvailableAgent"]));
    }
    if (m.find("CallerUid") != m.end() && !m["CallerUid"].empty()) {
      callerUid = make_shared<string>(boost::any_cast<string>(m["CallerUid"]));
    }
    if (m.find("DesiredAgent") != m.end() && !m["DesiredAgent"].empty()) {
      desiredAgent = make_shared<long>(boost::any_cast<long>(m["DesiredAgent"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ParentUid") != m.end() && !m["ParentUid"].empty()) {
      parentUid = make_shared<string>(boost::any_cast<string>(m["ParentUid"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~DescribeBenchmarkTaskResponseBody() = default;
};
class DescribeBenchmarkTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBenchmarkTaskResponseBody> body{};

  DescribeBenchmarkTaskResponse() {}

  explicit DescribeBenchmarkTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBenchmarkTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBenchmarkTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBenchmarkTaskResponse() = default;
};
class DescribeBenchmarkTaskReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> reportType{};

  DescribeBenchmarkTaskReportRequest() {}

  explicit DescribeBenchmarkTaskReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      reportType = make_shared<string>(boost::any_cast<string>(m["ReportType"]));
    }
  }


  virtual ~DescribeBenchmarkTaskReportRequest() = default;
};
class DescribeBenchmarkTaskReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<boost::any> data{};
  shared_ptr<string> reportUrl{};
  shared_ptr<string> requestId{};

  DescribeBenchmarkTaskReportResponseBody() {}

  explicit DescribeBenchmarkTaskReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (reportUrl) {
      res["ReportUrl"] = boost::any(*reportUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("ReportUrl") != m.end() && !m["ReportUrl"].empty()) {
      reportUrl = make_shared<string>(boost::any_cast<string>(m["ReportUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeBenchmarkTaskReportResponseBody() = default;
};
class DescribeBenchmarkTaskReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBenchmarkTaskReportResponseBody> body{};

  DescribeBenchmarkTaskReportResponse() {}

  explicit DescribeBenchmarkTaskReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBenchmarkTaskReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBenchmarkTaskReportResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBenchmarkTaskReportResponse() = default;
};
class DescribeGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> externalClusterId{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetDomain{};
  shared_ptr<bool> internetEnabled{};
  shared_ptr<string> internetStatus{};
  shared_ptr<string> intranetDomain{};
  shared_ptr<bool> isDefault{};
  shared_ptr<long> replicas{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> SSLRedirectionEnabled{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  DescribeGatewayResponseBody() {}

  explicit DescribeGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (externalClusterId) {
      res["ExternalClusterId"] = boost::any(*externalClusterId);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayName) {
      res["GatewayName"] = boost::any(*gatewayName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (internetDomain) {
      res["InternetDomain"] = boost::any(*internetDomain);
    }
    if (internetEnabled) {
      res["InternetEnabled"] = boost::any(*internetEnabled);
    }
    if (internetStatus) {
      res["InternetStatus"] = boost::any(*internetStatus);
    }
    if (intranetDomain) {
      res["IntranetDomain"] = boost::any(*intranetDomain);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (replicas) {
      res["Replicas"] = boost::any(*replicas);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (SSLRedirectionEnabled) {
      res["SSLRedirectionEnabled"] = boost::any(*SSLRedirectionEnabled);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExternalClusterId") != m.end() && !m["ExternalClusterId"].empty()) {
      externalClusterId = make_shared<string>(boost::any_cast<string>(m["ExternalClusterId"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayName") != m.end() && !m["GatewayName"].empty()) {
      gatewayName = make_shared<string>(boost::any_cast<string>(m["GatewayName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InternetDomain") != m.end() && !m["InternetDomain"].empty()) {
      internetDomain = make_shared<string>(boost::any_cast<string>(m["InternetDomain"]));
    }
    if (m.find("InternetEnabled") != m.end() && !m["InternetEnabled"].empty()) {
      internetEnabled = make_shared<bool>(boost::any_cast<bool>(m["InternetEnabled"]));
    }
    if (m.find("InternetStatus") != m.end() && !m["InternetStatus"].empty()) {
      internetStatus = make_shared<string>(boost::any_cast<string>(m["InternetStatus"]));
    }
    if (m.find("IntranetDomain") != m.end() && !m["IntranetDomain"].empty()) {
      intranetDomain = make_shared<string>(boost::any_cast<string>(m["IntranetDomain"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Replicas") != m.end() && !m["Replicas"].empty()) {
      replicas = make_shared<long>(boost::any_cast<long>(m["Replicas"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SSLRedirectionEnabled") != m.end() && !m["SSLRedirectionEnabled"].empty()) {
      SSLRedirectionEnabled = make_shared<bool>(boost::any_cast<bool>(m["SSLRedirectionEnabled"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeGatewayResponseBody() = default;
};
class DescribeGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayResponseBody> body{};

  DescribeGatewayResponse() {}

  explicit DescribeGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayResponse() = default;
};
class DescribeGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Group> body{};

  DescribeGroupResponse() {}

  explicit DescribeGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Group model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Group>(model1);
      }
    }
  }


  virtual ~DescribeGroupResponse() = default;
};
class DescribeGroupEndpointsResponseBodyEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> backendId{};
  shared_ptr<string> endpointType{};
  shared_ptr<vector<string>> internetEndpoints{};
  shared_ptr<vector<string>> intranetEndpoints{};
  shared_ptr<string> pathType{};
  shared_ptr<long> port{};

  DescribeGroupEndpointsResponseBodyEndpoints() {}

  explicit DescribeGroupEndpointsResponseBodyEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendId) {
      res["BackendId"] = boost::any(*backendId);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (internetEndpoints) {
      res["InternetEndpoints"] = boost::any(*internetEndpoints);
    }
    if (intranetEndpoints) {
      res["IntranetEndpoints"] = boost::any(*intranetEndpoints);
    }
    if (pathType) {
      res["PathType"] = boost::any(*pathType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendId") != m.end() && !m["BackendId"].empty()) {
      backendId = make_shared<string>(boost::any_cast<string>(m["BackendId"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("InternetEndpoints") != m.end() && !m["InternetEndpoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InternetEndpoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InternetEndpoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      internetEndpoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IntranetEndpoints") != m.end() && !m["IntranetEndpoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IntranetEndpoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IntranetEndpoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      intranetEndpoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PathType") != m.end() && !m["PathType"].empty()) {
      pathType = make_shared<string>(boost::any_cast<string>(m["PathType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~DescribeGroupEndpointsResponseBodyEndpoints() = default;
};
class DescribeGroupEndpointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<vector<DescribeGroupEndpointsResponseBodyEndpoints>> endpoints{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeGroupEndpointsResponseBody() {}

  explicit DescribeGroupEndpointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (endpoints) {
      vector<boost::any> temp1;
      for(auto item1:*endpoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Endpoints"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(vector<boost::any>) == m["Endpoints"].type()) {
        vector<DescribeGroupEndpointsResponseBodyEndpoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Endpoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGroupEndpointsResponseBodyEndpoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpoints = make_shared<vector<DescribeGroupEndpointsResponseBodyEndpoints>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeGroupEndpointsResponseBody() = default;
};
class DescribeGroupEndpointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGroupEndpointsResponseBody> body{};

  DescribeGroupEndpointsResponse() {}

  explicit DescribeGroupEndpointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGroupEndpointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGroupEndpointsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGroupEndpointsResponse() = default;
};
class DescribeMachineSpecRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceTypes{};

  DescribeMachineSpecRequest() {}

  explicit DescribeMachineSpecRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypes) {
      res["InstanceTypes"] = boost::any(*instanceTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeMachineSpecRequest() = default;
};
class DescribeMachineSpecShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceTypesShrink{};

  DescribeMachineSpecShrinkRequest() {}

  explicit DescribeMachineSpecShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypesShrink) {
      res["InstanceTypes"] = boost::any(*instanceTypesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      instanceTypesShrink = make_shared<string>(boost::any_cast<string>(m["InstanceTypes"]));
    }
  }


  virtual ~DescribeMachineSpecShrinkRequest() = default;
};
class DescribeMachineSpecResponseBodyInstanceMetas : public Darabonba::Model {
public:
  shared_ptr<long> CPU{};
  shared_ptr<string> GPU{};
  shared_ptr<long> GPUAmount{};
  shared_ptr<double> GPUMemory{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> isAvailable{};
  shared_ptr<double> memory{};
  shared_ptr<double> nonProtectSpotDiscount{};
  shared_ptr<double> spotDiscount{};
  shared_ptr<string> stockStatus{};
  shared_ptr<string> vendor{};

  DescribeMachineSpecResponseBodyInstanceMetas() {}

  explicit DescribeMachineSpecResponseBodyInstanceMetas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (GPU) {
      res["GPU"] = boost::any(*GPU);
    }
    if (GPUAmount) {
      res["GPUAmount"] = boost::any(*GPUAmount);
    }
    if (GPUMemory) {
      res["GPUMemory"] = boost::any(*GPUMemory);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (isAvailable) {
      res["IsAvailable"] = boost::any(*isAvailable);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nonProtectSpotDiscount) {
      res["NonProtectSpotDiscount"] = boost::any(*nonProtectSpotDiscount);
    }
    if (spotDiscount) {
      res["SpotDiscount"] = boost::any(*spotDiscount);
    }
    if (stockStatus) {
      res["StockStatus"] = boost::any(*stockStatus);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<long>(boost::any_cast<long>(m["CPU"]));
    }
    if (m.find("GPU") != m.end() && !m["GPU"].empty()) {
      GPU = make_shared<string>(boost::any_cast<string>(m["GPU"]));
    }
    if (m.find("GPUAmount") != m.end() && !m["GPUAmount"].empty()) {
      GPUAmount = make_shared<long>(boost::any_cast<long>(m["GPUAmount"]));
    }
    if (m.find("GPUMemory") != m.end() && !m["GPUMemory"].empty()) {
      GPUMemory = make_shared<double>(boost::any_cast<double>(m["GPUMemory"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IsAvailable") != m.end() && !m["IsAvailable"].empty()) {
      isAvailable = make_shared<bool>(boost::any_cast<bool>(m["IsAvailable"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<double>(boost::any_cast<double>(m["Memory"]));
    }
    if (m.find("NonProtectSpotDiscount") != m.end() && !m["NonProtectSpotDiscount"].empty()) {
      nonProtectSpotDiscount = make_shared<double>(boost::any_cast<double>(m["NonProtectSpotDiscount"]));
    }
    if (m.find("SpotDiscount") != m.end() && !m["SpotDiscount"].empty()) {
      spotDiscount = make_shared<double>(boost::any_cast<double>(m["SpotDiscount"]));
    }
    if (m.find("StockStatus") != m.end() && !m["StockStatus"].empty()) {
      stockStatus = make_shared<string>(boost::any_cast<string>(m["StockStatus"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~DescribeMachineSpecResponseBodyInstanceMetas() = default;
};
class DescribeMachineSpecResponseBodyTypes : public Darabonba::Model {
public:
  shared_ptr<long> CPU{};
  shared_ptr<vector<long>> memory{};

  DescribeMachineSpecResponseBodyTypes() {}

  explicit DescribeMachineSpecResponseBodyTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<long>(boost::any_cast<long>(m["CPU"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Memory"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Memory"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      memory = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~DescribeMachineSpecResponseBodyTypes() = default;
};
class DescribeMachineSpecResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeMachineSpecResponseBodyInstanceMetas>> instanceMetas{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeMachineSpecResponseBodyTypes>> types{};

  DescribeMachineSpecResponseBody() {}

  explicit DescribeMachineSpecResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceMetas) {
      vector<boost::any> temp1;
      for(auto item1:*instanceMetas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceMetas"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (types) {
      vector<boost::any> temp1;
      for(auto item1:*types){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Types"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceMetas") != m.end() && !m["InstanceMetas"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceMetas"].type()) {
        vector<DescribeMachineSpecResponseBodyInstanceMetas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceMetas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMachineSpecResponseBodyInstanceMetas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceMetas = make_shared<vector<DescribeMachineSpecResponseBodyInstanceMetas>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      if (typeid(vector<boost::any>) == m["Types"].type()) {
        vector<DescribeMachineSpecResponseBodyTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Types"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeMachineSpecResponseBodyTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        types = make_shared<vector<DescribeMachineSpecResponseBodyTypes>>(expect1);
      }
    }
  }


  virtual ~DescribeMachineSpecResponseBody() = default;
};
class DescribeMachineSpecResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMachineSpecResponseBody> body{};

  DescribeMachineSpecResponse() {}

  explicit DescribeMachineSpecResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeMachineSpecResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMachineSpecResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMachineSpecResponse() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> regionName{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<DescribeRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<DescribeRegionsResponseBodyRegions>>(expect1);
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
class DescribeResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> cpuCount{};
  shared_ptr<long> cpuUsed{};
  shared_ptr<string> createTime{};
  shared_ptr<string> extraData{};
  shared_ptr<vector<string>> features{};
  shared_ptr<long> gpuCount{};
  shared_ptr<double> gpuUsed{};
  shared_ptr<long> instanceCount{};
  shared_ptr<long> instanceMaxAllocatableCPU{};
  shared_ptr<double> instanceMaxAllocatableGPU{};
  shared_ptr<long> instanceMaxAllocatableMemory{};
  shared_ptr<long> memory{};
  shared_ptr<long> memoryUsed{};
  shared_ptr<string> message{};
  shared_ptr<string> ownerUid{};
  shared_ptr<long> postPaidInstanceCount{};
  shared_ptr<long> prePaidInstanceCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  DescribeResourceResponseBody() {}

  explicit DescribeResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (cpuCount) {
      res["CpuCount"] = boost::any(*cpuCount);
    }
    if (cpuUsed) {
      res["CpuUsed"] = boost::any(*cpuUsed);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (extraData) {
      res["ExtraData"] = boost::any(*extraData);
    }
    if (features) {
      res["Features"] = boost::any(*features);
    }
    if (gpuCount) {
      res["GpuCount"] = boost::any(*gpuCount);
    }
    if (gpuUsed) {
      res["GpuUsed"] = boost::any(*gpuUsed);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (instanceMaxAllocatableCPU) {
      res["InstanceMaxAllocatableCPU"] = boost::any(*instanceMaxAllocatableCPU);
    }
    if (instanceMaxAllocatableGPU) {
      res["InstanceMaxAllocatableGPU"] = boost::any(*instanceMaxAllocatableGPU);
    }
    if (instanceMaxAllocatableMemory) {
      res["InstanceMaxAllocatableMemory"] = boost::any(*instanceMaxAllocatableMemory);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (memoryUsed) {
      res["MemoryUsed"] = boost::any(*memoryUsed);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (ownerUid) {
      res["OwnerUid"] = boost::any(*ownerUid);
    }
    if (postPaidInstanceCount) {
      res["PostPaidInstanceCount"] = boost::any(*postPaidInstanceCount);
    }
    if (prePaidInstanceCount) {
      res["PrePaidInstanceCount"] = boost::any(*prePaidInstanceCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CpuCount") != m.end() && !m["CpuCount"].empty()) {
      cpuCount = make_shared<long>(boost::any_cast<long>(m["CpuCount"]));
    }
    if (m.find("CpuUsed") != m.end() && !m["CpuUsed"].empty()) {
      cpuUsed = make_shared<long>(boost::any_cast<long>(m["CpuUsed"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExtraData") != m.end() && !m["ExtraData"].empty()) {
      extraData = make_shared<string>(boost::any_cast<string>(m["ExtraData"]));
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Features"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Features"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      features = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GpuCount") != m.end() && !m["GpuCount"].empty()) {
      gpuCount = make_shared<long>(boost::any_cast<long>(m["GpuCount"]));
    }
    if (m.find("GpuUsed") != m.end() && !m["GpuUsed"].empty()) {
      gpuUsed = make_shared<double>(boost::any_cast<double>(m["GpuUsed"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("InstanceMaxAllocatableCPU") != m.end() && !m["InstanceMaxAllocatableCPU"].empty()) {
      instanceMaxAllocatableCPU = make_shared<long>(boost::any_cast<long>(m["InstanceMaxAllocatableCPU"]));
    }
    if (m.find("InstanceMaxAllocatableGPU") != m.end() && !m["InstanceMaxAllocatableGPU"].empty()) {
      instanceMaxAllocatableGPU = make_shared<double>(boost::any_cast<double>(m["InstanceMaxAllocatableGPU"]));
    }
    if (m.find("InstanceMaxAllocatableMemory") != m.end() && !m["InstanceMaxAllocatableMemory"].empty()) {
      instanceMaxAllocatableMemory = make_shared<long>(boost::any_cast<long>(m["InstanceMaxAllocatableMemory"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("MemoryUsed") != m.end() && !m["MemoryUsed"].empty()) {
      memoryUsed = make_shared<long>(boost::any_cast<long>(m["MemoryUsed"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OwnerUid") != m.end() && !m["OwnerUid"].empty()) {
      ownerUid = make_shared<string>(boost::any_cast<string>(m["OwnerUid"]));
    }
    if (m.find("PostPaidInstanceCount") != m.end() && !m["PostPaidInstanceCount"].empty()) {
      postPaidInstanceCount = make_shared<long>(boost::any_cast<long>(m["PostPaidInstanceCount"]));
    }
    if (m.find("PrePaidInstanceCount") != m.end() && !m["PrePaidInstanceCount"].empty()) {
      prePaidInstanceCount = make_shared<long>(boost::any_cast<long>(m["PrePaidInstanceCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~DescribeResourceResponseBody() = default;
};
class DescribeResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResourceResponseBody> body{};

  DescribeResourceResponse() {}

  explicit DescribeResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourceResponse() = default;
};
class DescribeResourceDLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> auxVSwitchList{};
  shared_ptr<string> destinationCIDRs{};
  shared_ptr<string> requestId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  DescribeResourceDLinkResponseBody() {}

  explicit DescribeResourceDLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auxVSwitchList) {
      res["AuxVSwitchList"] = boost::any(*auxVSwitchList);
    }
    if (destinationCIDRs) {
      res["DestinationCIDRs"] = boost::any(*destinationCIDRs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
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
    if (m.find("AuxVSwitchList") != m.end() && !m["AuxVSwitchList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuxVSwitchList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuxVSwitchList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      auxVSwitchList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DestinationCIDRs") != m.end() && !m["DestinationCIDRs"].empty()) {
      destinationCIDRs = make_shared<string>(boost::any_cast<string>(m["DestinationCIDRs"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeResourceDLinkResponseBody() = default;
};
class DescribeResourceDLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResourceDLinkResponseBody> body{};

  DescribeResourceDLinkResponse() {}

  explicit DescribeResourceDLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeResourceDLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourceDLinkResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourceDLinkResponse() = default;
};
class DescribeResourceLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> logStore{};
  shared_ptr<string> message{};
  shared_ptr<string> projectName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DescribeResourceLogResponseBody() {}

  explicit DescribeResourceLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeResourceLogResponseBody() = default;
};
class DescribeResourceLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResourceLogResponseBody> body{};

  DescribeResourceLogResponse() {}

  explicit DescribeResourceLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeResourceLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourceLogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourceLogResponse() = default;
};
class DescribeServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Service> body{};

  DescribeServiceResponse() {}

  explicit DescribeServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Service model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Service>(model1);
      }
    }
  }


  virtual ~DescribeServiceResponse() = default;
};
class DescribeServiceAutoScalerResponseBodyCurrentMetrics : public Darabonba::Model {
public:
  shared_ptr<string> metricName{};
  shared_ptr<string> service{};
  shared_ptr<double> value{};

  DescribeServiceAutoScalerResponseBodyCurrentMetrics() {}

  explicit DescribeServiceAutoScalerResponseBodyCurrentMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricName) {
      res["metricName"] = boost::any(*metricName);
    }
    if (service) {
      res["service"] = boost::any(*service);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("metricName") != m.end() && !m["metricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["metricName"]));
    }
    if (m.find("service") != m.end() && !m["service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["service"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["value"]));
    }
  }


  virtual ~DescribeServiceAutoScalerResponseBodyCurrentMetrics() = default;
};
class DescribeServiceAutoScalerResponseBodyScaleStrategies : public Darabonba::Model {
public:
  shared_ptr<string> metricName{};
  shared_ptr<string> service{};
  shared_ptr<double> threshold{};

  DescribeServiceAutoScalerResponseBodyScaleStrategies() {}

  explicit DescribeServiceAutoScalerResponseBodyScaleStrategies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricName) {
      res["metricName"] = boost::any(*metricName);
    }
    if (service) {
      res["service"] = boost::any(*service);
    }
    if (threshold) {
      res["threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("metricName") != m.end() && !m["metricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["metricName"]));
    }
    if (m.find("service") != m.end() && !m["service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["service"]));
    }
    if (m.find("threshold") != m.end() && !m["threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["threshold"]));
    }
  }


  virtual ~DescribeServiceAutoScalerResponseBodyScaleStrategies() = default;
};
class DescribeServiceAutoScalerResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> behavior{};
  shared_ptr<vector<DescribeServiceAutoScalerResponseBodyCurrentMetrics>> currentMetrics{};
  shared_ptr<long> maxReplica{};
  shared_ptr<long> minReplica{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeServiceAutoScalerResponseBodyScaleStrategies>> scaleStrategies{};
  shared_ptr<string> serviceName{};

  DescribeServiceAutoScalerResponseBody() {}

  explicit DescribeServiceAutoScalerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (behavior) {
      res["Behavior"] = boost::any(*behavior);
    }
    if (currentMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*currentMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CurrentMetrics"] = boost::any(temp1);
    }
    if (maxReplica) {
      res["MaxReplica"] = boost::any(*maxReplica);
    }
    if (minReplica) {
      res["MinReplica"] = boost::any(*minReplica);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scaleStrategies) {
      vector<boost::any> temp1;
      for(auto item1:*scaleStrategies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScaleStrategies"] = boost::any(temp1);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Behavior") != m.end() && !m["Behavior"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Behavior"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      behavior = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("CurrentMetrics") != m.end() && !m["CurrentMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["CurrentMetrics"].type()) {
        vector<DescribeServiceAutoScalerResponseBodyCurrentMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CurrentMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceAutoScalerResponseBodyCurrentMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        currentMetrics = make_shared<vector<DescribeServiceAutoScalerResponseBodyCurrentMetrics>>(expect1);
      }
    }
    if (m.find("MaxReplica") != m.end() && !m["MaxReplica"].empty()) {
      maxReplica = make_shared<long>(boost::any_cast<long>(m["MaxReplica"]));
    }
    if (m.find("MinReplica") != m.end() && !m["MinReplica"].empty()) {
      minReplica = make_shared<long>(boost::any_cast<long>(m["MinReplica"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScaleStrategies") != m.end() && !m["ScaleStrategies"].empty()) {
      if (typeid(vector<boost::any>) == m["ScaleStrategies"].type()) {
        vector<DescribeServiceAutoScalerResponseBodyScaleStrategies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScaleStrategies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceAutoScalerResponseBodyScaleStrategies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scaleStrategies = make_shared<vector<DescribeServiceAutoScalerResponseBodyScaleStrategies>>(expect1);
      }
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~DescribeServiceAutoScalerResponseBody() = default;
};
class DescribeServiceAutoScalerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeServiceAutoScalerResponseBody> body{};

  DescribeServiceAutoScalerResponse() {}

  explicit DescribeServiceAutoScalerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceAutoScalerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceAutoScalerResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceAutoScalerResponse() = default;
};
class DescribeServiceCronScalerResponseBodyScaleJobs : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> lastProbeTime{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> schedule{};
  shared_ptr<string> state{};
  shared_ptr<long> targetSize{};

  DescribeServiceCronScalerResponseBodyScaleJobs() {}

  explicit DescribeServiceCronScalerResponseBodyScaleJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (lastProbeTime) {
      res["LastProbeTime"] = boost::any(*lastProbeTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (targetSize) {
      res["TargetSize"] = boost::any(*targetSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("LastProbeTime") != m.end() && !m["LastProbeTime"].empty()) {
      lastProbeTime = make_shared<string>(boost::any_cast<string>(m["LastProbeTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("TargetSize") != m.end() && !m["TargetSize"].empty()) {
      targetSize = make_shared<long>(boost::any_cast<long>(m["TargetSize"]));
    }
  }


  virtual ~DescribeServiceCronScalerResponseBodyScaleJobs() = default;
};
class DescribeServiceCronScalerResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> excludeDates{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeServiceCronScalerResponseBodyScaleJobs>> scaleJobs{};
  shared_ptr<string> serviceName{};

  DescribeServiceCronScalerResponseBody() {}

  explicit DescribeServiceCronScalerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeDates) {
      res["ExcludeDates"] = boost::any(*excludeDates);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scaleJobs) {
      vector<boost::any> temp1;
      for(auto item1:*scaleJobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScaleJobs"] = boost::any(temp1);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeDates") != m.end() && !m["ExcludeDates"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludeDates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludeDates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeDates = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScaleJobs") != m.end() && !m["ScaleJobs"].empty()) {
      if (typeid(vector<boost::any>) == m["ScaleJobs"].type()) {
        vector<DescribeServiceCronScalerResponseBodyScaleJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScaleJobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceCronScalerResponseBodyScaleJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scaleJobs = make_shared<vector<DescribeServiceCronScalerResponseBodyScaleJobs>>(expect1);
      }
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~DescribeServiceCronScalerResponseBody() = default;
};
class DescribeServiceCronScalerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeServiceCronScalerResponseBody> body{};

  DescribeServiceCronScalerResponse() {}

  explicit DescribeServiceCronScalerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceCronScalerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceCronScalerResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceCronScalerResponse() = default;
};
class DescribeServiceDiagnosisResponseBodyDiagnosisList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> advices{};
  shared_ptr<vector<string>> causes{};
  shared_ptr<string> error{};

  DescribeServiceDiagnosisResponseBodyDiagnosisList() {}

  explicit DescribeServiceDiagnosisResponseBodyDiagnosisList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advices) {
      res["Advices"] = boost::any(*advices);
    }
    if (causes) {
      res["Causes"] = boost::any(*causes);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Advices") != m.end() && !m["Advices"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Advices"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Advices"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      advices = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Causes") != m.end() && !m["Causes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Causes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Causes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      causes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
  }


  virtual ~DescribeServiceDiagnosisResponseBodyDiagnosisList() = default;
};
class DescribeServiceDiagnosisResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeServiceDiagnosisResponseBodyDiagnosisList>> diagnosisList{};
  shared_ptr<string> requestId{};

  DescribeServiceDiagnosisResponseBody() {}

  explicit DescribeServiceDiagnosisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diagnosisList) {
      vector<boost::any> temp1;
      for(auto item1:*diagnosisList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DiagnosisList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiagnosisList") != m.end() && !m["DiagnosisList"].empty()) {
      if (typeid(vector<boost::any>) == m["DiagnosisList"].type()) {
        vector<DescribeServiceDiagnosisResponseBodyDiagnosisList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DiagnosisList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceDiagnosisResponseBodyDiagnosisList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        diagnosisList = make_shared<vector<DescribeServiceDiagnosisResponseBodyDiagnosisList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeServiceDiagnosisResponseBody() = default;
};
class DescribeServiceDiagnosisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeServiceDiagnosisResponseBody> body{};

  DescribeServiceDiagnosisResponse() {}

  explicit DescribeServiceDiagnosisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceDiagnosisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceDiagnosisResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceDiagnosisResponse() = default;
};
class DescribeServiceEndpointsResponseBodyEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> backendId{};
  shared_ptr<string> endpointType{};
  shared_ptr<vector<string>> internetEndpoints{};
  shared_ptr<vector<string>> intranetEndpoints{};
  shared_ptr<string> pathType{};
  shared_ptr<long> port{};

  DescribeServiceEndpointsResponseBodyEndpoints() {}

  explicit DescribeServiceEndpointsResponseBodyEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendId) {
      res["BackendId"] = boost::any(*backendId);
    }
    if (endpointType) {
      res["EndpointType"] = boost::any(*endpointType);
    }
    if (internetEndpoints) {
      res["InternetEndpoints"] = boost::any(*internetEndpoints);
    }
    if (intranetEndpoints) {
      res["IntranetEndpoints"] = boost::any(*intranetEndpoints);
    }
    if (pathType) {
      res["PathType"] = boost::any(*pathType);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendId") != m.end() && !m["BackendId"].empty()) {
      backendId = make_shared<string>(boost::any_cast<string>(m["BackendId"]));
    }
    if (m.find("EndpointType") != m.end() && !m["EndpointType"].empty()) {
      endpointType = make_shared<string>(boost::any_cast<string>(m["EndpointType"]));
    }
    if (m.find("InternetEndpoints") != m.end() && !m["InternetEndpoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InternetEndpoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InternetEndpoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      internetEndpoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IntranetEndpoints") != m.end() && !m["IntranetEndpoints"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IntranetEndpoints"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IntranetEndpoints"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      intranetEndpoints = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PathType") != m.end() && !m["PathType"].empty()) {
      pathType = make_shared<string>(boost::any_cast<string>(m["PathType"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~DescribeServiceEndpointsResponseBodyEndpoints() = default;
};
class DescribeServiceEndpointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<vector<DescribeServiceEndpointsResponseBodyEndpoints>> endpoints{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DescribeServiceEndpointsResponseBody() {}

  explicit DescribeServiceEndpointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (endpoints) {
      vector<boost::any> temp1;
      for(auto item1:*endpoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Endpoints"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(vector<boost::any>) == m["Endpoints"].type()) {
        vector<DescribeServiceEndpointsResponseBodyEndpoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Endpoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceEndpointsResponseBodyEndpoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpoints = make_shared<vector<DescribeServiceEndpointsResponseBodyEndpoints>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeServiceEndpointsResponseBody() = default;
};
class DescribeServiceEndpointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeServiceEndpointsResponseBody> body{};

  DescribeServiceEndpointsResponse() {}

  explicit DescribeServiceEndpointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceEndpointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceEndpointsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceEndpointsResponse() = default;
};
class DescribeServiceEventRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> eventType{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> pageNum{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> startTime{};

  DescribeServiceEventRequest() {}

  explicit DescribeServiceEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<string>(boost::any_cast<string>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeServiceEventRequest() = default;
};
class DescribeServiceEventResponseBodyEvents : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> reason{};
  shared_ptr<string> time{};
  shared_ptr<string> type{};

  DescribeServiceEventResponseBodyEvents() {}

  explicit DescribeServiceEventResponseBodyEvents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeServiceEventResponseBodyEvents() = default;
};
class DescribeServiceEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeServiceEventResponseBodyEvents>> events{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPageNum{};

  DescribeServiceEventResponseBody() {}

  explicit DescribeServiceEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (events) {
      vector<boost::any> temp1;
      for(auto item1:*events){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Events"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Events") != m.end() && !m["Events"].empty()) {
      if (typeid(vector<boost::any>) == m["Events"].type()) {
        vector<DescribeServiceEventResponseBodyEvents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Events"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceEventResponseBodyEvents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        events = make_shared<vector<DescribeServiceEventResponseBodyEvents>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~DescribeServiceEventResponseBody() = default;
};
class DescribeServiceEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeServiceEventResponseBody> body{};

  DescribeServiceEventResponse() {}

  explicit DescribeServiceEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceEventResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceEventResponse() = default;
};
class DescribeServiceInstanceDiagnosisResponseBodyDiagnosis : public Darabonba::Model {
public:
  shared_ptr<vector<string>> advices{};
  shared_ptr<vector<string>> causes{};
  shared_ptr<string> error{};

  DescribeServiceInstanceDiagnosisResponseBodyDiagnosis() {}

  explicit DescribeServiceInstanceDiagnosisResponseBodyDiagnosis(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advices) {
      res["Advices"] = boost::any(*advices);
    }
    if (causes) {
      res["Causes"] = boost::any(*causes);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Advices") != m.end() && !m["Advices"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Advices"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Advices"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      advices = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Causes") != m.end() && !m["Causes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Causes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Causes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      causes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
  }


  virtual ~DescribeServiceInstanceDiagnosisResponseBodyDiagnosis() = default;
};
class DescribeServiceInstanceDiagnosisResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceInstanceDiagnosisResponseBodyDiagnosis> diagnosis{};
  shared_ptr<string> requestId{};

  DescribeServiceInstanceDiagnosisResponseBody() {}

  explicit DescribeServiceInstanceDiagnosisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diagnosis) {
      res["Diagnosis"] = diagnosis ? boost::any(diagnosis->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Diagnosis") != m.end() && !m["Diagnosis"].empty()) {
      if (typeid(map<string, boost::any>) == m["Diagnosis"].type()) {
        DescribeServiceInstanceDiagnosisResponseBodyDiagnosis model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Diagnosis"]));
        diagnosis = make_shared<DescribeServiceInstanceDiagnosisResponseBodyDiagnosis>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeServiceInstanceDiagnosisResponseBody() = default;
};
class DescribeServiceInstanceDiagnosisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeServiceInstanceDiagnosisResponseBody> body{};

  DescribeServiceInstanceDiagnosisResponse() {}

  explicit DescribeServiceInstanceDiagnosisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceInstanceDiagnosisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceInstanceDiagnosisResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceInstanceDiagnosisResponse() = default;
};
class DescribeServiceLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerName{};
  shared_ptr<string> endTime{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> ip{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> previous{};
  shared_ptr<string> startTime{};

  DescribeServiceLogRequest() {}

  explicit DescribeServiceLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerName) {
      res["ContainerName"] = boost::any(*containerName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
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
    if (previous) {
      res["Previous"] = boost::any(*previous);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerName") != m.end() && !m["ContainerName"].empty()) {
      containerName = make_shared<string>(boost::any_cast<string>(m["ContainerName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
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
    if (m.find("Previous") != m.end() && !m["Previous"].empty()) {
      previous = make_shared<bool>(boost::any_cast<bool>(m["Previous"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeServiceLogRequest() = default;
};
class DescribeServiceLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> logs{};
  shared_ptr<long> pageNum{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPageNum{};

  DescribeServiceLogResponseBody() {}

  explicit DescribeServiceLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logs) {
      res["Logs"] = boost::any(*logs);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalPageNum) {
      res["TotalPageNum"] = boost::any(*totalPageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Logs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalPageNum") != m.end() && !m["TotalPageNum"].empty()) {
      totalPageNum = make_shared<long>(boost::any_cast<long>(m["TotalPageNum"]));
    }
  }


  virtual ~DescribeServiceLogResponseBody() = default;
};
class DescribeServiceLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeServiceLogResponseBody> body{};

  DescribeServiceLogResponse() {}

  explicit DescribeServiceLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceLogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceLogResponse() = default;
};
class DescribeServiceMirrorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ratio{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> target{};

  DescribeServiceMirrorResponseBody() {}

  explicit DescribeServiceMirrorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ratio) {
      res["Ratio"] = boost::any(*ratio);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ratio") != m.end() && !m["Ratio"].empty()) {
      ratio = make_shared<string>(boost::any_cast<string>(m["Ratio"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
  }


  virtual ~DescribeServiceMirrorResponseBody() = default;
};
class DescribeServiceMirrorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeServiceMirrorResponseBody> body{};

  DescribeServiceMirrorResponse() {}

  explicit DescribeServiceMirrorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceMirrorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceMirrorResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceMirrorResponse() = default;
};
class DescribeServiceSignedUrlRequest : public Darabonba::Model {
public:
  shared_ptr<long> expire{};
  shared_ptr<bool> internal{};
  shared_ptr<string> type{};

  DescribeServiceSignedUrlRequest() {}

  explicit DescribeServiceSignedUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (internal) {
      res["Internal"] = boost::any(*internal);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
    if (m.find("Internal") != m.end() && !m["Internal"].empty()) {
      internal = make_shared<bool>(boost::any_cast<bool>(m["Internal"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeServiceSignedUrlRequest() = default;
};
class DescribeServiceSignedUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> signedUrl{};

  DescribeServiceSignedUrlResponseBody() {}

  explicit DescribeServiceSignedUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signedUrl) {
      res["SignedUrl"] = boost::any(*signedUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SignedUrl") != m.end() && !m["SignedUrl"].empty()) {
      signedUrl = make_shared<string>(boost::any_cast<string>(m["SignedUrl"]));
    }
  }


  virtual ~DescribeServiceSignedUrlResponseBody() = default;
};
class DescribeServiceSignedUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeServiceSignedUrlResponseBody> body{};

  DescribeServiceSignedUrlResponse() {}

  explicit DescribeServiceSignedUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceSignedUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceSignedUrlResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceSignedUrlResponse() = default;
};
class DescribeSpotDiscountHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<bool> isProtect{};

  DescribeSpotDiscountHistoryRequest() {}

  explicit DescribeSpotDiscountHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (isProtect) {
      res["IsProtect"] = boost::any(*isProtect);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IsProtect") != m.end() && !m["IsProtect"].empty()) {
      isProtect = make_shared<bool>(boost::any_cast<bool>(m["IsProtect"]));
    }
  }


  virtual ~DescribeSpotDiscountHistoryRequest() = default;
};
class DescribeSpotDiscountHistoryResponseBodySpotDiscounts : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<string> spotDiscount{};
  shared_ptr<string> timestamp{};
  shared_ptr<string> zoneId{};

  DescribeSpotDiscountHistoryResponseBodySpotDiscounts() {}

  explicit DescribeSpotDiscountHistoryResponseBodySpotDiscounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (spotDiscount) {
      res["SpotDiscount"] = boost::any(*spotDiscount);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("SpotDiscount") != m.end() && !m["SpotDiscount"].empty()) {
      spotDiscount = make_shared<string>(boost::any_cast<string>(m["SpotDiscount"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeSpotDiscountHistoryResponseBodySpotDiscounts() = default;
};
class DescribeSpotDiscountHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSpotDiscountHistoryResponseBodySpotDiscounts>> spotDiscounts{};

  DescribeSpotDiscountHistoryResponseBody() {}

  explicit DescribeSpotDiscountHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spotDiscounts) {
      vector<boost::any> temp1;
      for(auto item1:*spotDiscounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpotDiscounts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SpotDiscounts") != m.end() && !m["SpotDiscounts"].empty()) {
      if (typeid(vector<boost::any>) == m["SpotDiscounts"].type()) {
        vector<DescribeSpotDiscountHistoryResponseBodySpotDiscounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpotDiscounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSpotDiscountHistoryResponseBodySpotDiscounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spotDiscounts = make_shared<vector<DescribeSpotDiscountHistoryResponseBodySpotDiscounts>>(expect1);
      }
    }
  }


  virtual ~DescribeSpotDiscountHistoryResponseBody() = default;
};
class DescribeSpotDiscountHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSpotDiscountHistoryResponseBody> body{};

  DescribeSpotDiscountHistoryResponse() {}

  explicit DescribeSpotDiscountHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSpotDiscountHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSpotDiscountHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSpotDiscountHistoryResponse() = default;
};
class DescribeVirtualResourceResponseBodyResources : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<long> priority{};
  shared_ptr<string> quotaId{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceId{};
  shared_ptr<double> spotPriceLimit{};

  DescribeVirtualResourceResponseBodyResources() {}

  explicit DescribeVirtualResourceResponseBodyResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
  }


  virtual ~DescribeVirtualResourceResponseBodyResources() = default;
};
class DescribeVirtualResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<bool> disableSpotProtectionPeriod{};
  shared_ptr<vector<string>> features{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVirtualResourceResponseBodyResources>> resources{};
  shared_ptr<long> serviceCount{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> virtualResourceId{};
  shared_ptr<string> virtualResourceName{};

  DescribeVirtualResourceResponseBody() {}

  explicit DescribeVirtualResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (disableSpotProtectionPeriod) {
      res["DisableSpotProtectionPeriod"] = boost::any(*disableSpotProtectionPeriod);
    }
    if (features) {
      res["Features"] = boost::any(*features);
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
    if (serviceCount) {
      res["ServiceCount"] = boost::any(*serviceCount);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (virtualResourceId) {
      res["VirtualResourceId"] = boost::any(*virtualResourceId);
    }
    if (virtualResourceName) {
      res["VirtualResourceName"] = boost::any(*virtualResourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DisableSpotProtectionPeriod") != m.end() && !m["DisableSpotProtectionPeriod"].empty()) {
      disableSpotProtectionPeriod = make_shared<bool>(boost::any_cast<bool>(m["DisableSpotProtectionPeriod"]));
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Features"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Features"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      features = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<DescribeVirtualResourceResponseBodyResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVirtualResourceResponseBodyResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<DescribeVirtualResourceResponseBodyResources>>(expect1);
      }
    }
    if (m.find("ServiceCount") != m.end() && !m["ServiceCount"].empty()) {
      serviceCount = make_shared<long>(boost::any_cast<long>(m["ServiceCount"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VirtualResourceId") != m.end() && !m["VirtualResourceId"].empty()) {
      virtualResourceId = make_shared<string>(boost::any_cast<string>(m["VirtualResourceId"]));
    }
    if (m.find("VirtualResourceName") != m.end() && !m["VirtualResourceName"].empty()) {
      virtualResourceName = make_shared<string>(boost::any_cast<string>(m["VirtualResourceName"]));
    }
  }


  virtual ~DescribeVirtualResourceResponseBody() = default;
};
class DescribeVirtualResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVirtualResourceResponseBody> body{};

  DescribeVirtualResourceResponse() {}

  explicit DescribeVirtualResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVirtualResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVirtualResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVirtualResourceResponse() = default;
};
class DetachGatewayDomainRequestCustomDomain : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> type{};

  DetachGatewayDomainRequestCustomDomain() {}

  explicit DetachGatewayDomainRequestCustomDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DetachGatewayDomainRequestCustomDomain() = default;
};
class DetachGatewayDomainRequest : public Darabonba::Model {
public:
  shared_ptr<DetachGatewayDomainRequestCustomDomain> customDomain{};

  DetachGatewayDomainRequest() {}

  explicit DetachGatewayDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customDomain) {
      res["CustomDomain"] = customDomain ? boost::any(customDomain->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomDomain") != m.end() && !m["CustomDomain"].empty()) {
      if (typeid(map<string, boost::any>) == m["CustomDomain"].type()) {
        DetachGatewayDomainRequestCustomDomain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CustomDomain"]));
        customDomain = make_shared<DetachGatewayDomainRequestCustomDomain>(model1);
      }
    }
  }


  virtual ~DetachGatewayDomainRequest() = default;
};
class DetachGatewayDomainShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> customDomainShrink{};

  DetachGatewayDomainShrinkRequest() {}

  explicit DetachGatewayDomainShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customDomainShrink) {
      res["CustomDomain"] = boost::any(*customDomainShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomDomain") != m.end() && !m["CustomDomain"].empty()) {
      customDomainShrink = make_shared<string>(boost::any_cast<string>(m["CustomDomain"]));
    }
  }


  virtual ~DetachGatewayDomainShrinkRequest() = default;
};
class DetachGatewayDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DetachGatewayDomainResponseBody() {}

  explicit DetachGatewayDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetachGatewayDomainResponseBody() = default;
};
class DetachGatewayDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachGatewayDomainResponseBody> body{};

  DetachGatewayDomainResponse() {}

  explicit DetachGatewayDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetachGatewayDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachGatewayDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DetachGatewayDomainResponse() = default;
};
class DevelopServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> exit{};

  DevelopServiceRequest() {}

  explicit DevelopServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exit) {
      res["Exit"] = boost::any(*exit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exit") != m.end() && !m["Exit"].empty()) {
      exit = make_shared<string>(boost::any_cast<string>(m["Exit"]));
    }
  }


  virtual ~DevelopServiceRequest() = default;
};
class DevelopServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DevelopServiceResponseBody() {}

  explicit DevelopServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DevelopServiceResponseBody() = default;
};
class DevelopServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DevelopServiceResponseBody> body{};

  DevelopServiceResponse() {}

  explicit DevelopServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DevelopServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DevelopServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DevelopServiceResponse() = default;
};
class ListAclPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};

  ListAclPolicyRequest() {}

  explicit ListAclPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListAclPolicyRequest() = default;
};
class ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> entry{};

  ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList() {}

  explicit ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
  }


  virtual ~ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList() = default;
};
class ListAclPolicyResponseBodyInternetAclPolicyList : public Darabonba::Model {
public:
  shared_ptr<vector<ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList>> aclPolicyList{};

  ListAclPolicyResponseBodyInternetAclPolicyList() {}

  explicit ListAclPolicyResponseBodyInternetAclPolicyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclPolicyList) {
      vector<boost::any> temp1;
      for(auto item1:*aclPolicyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclPolicyList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclPolicyList") != m.end() && !m["AclPolicyList"].empty()) {
      if (typeid(vector<boost::any>) == m["AclPolicyList"].type()) {
        vector<ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclPolicyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclPolicyList = make_shared<vector<ListAclPolicyResponseBodyInternetAclPolicyListAclPolicyList>>(expect1);
      }
    }
  }


  virtual ~ListAclPolicyResponseBodyInternetAclPolicyList() = default;
};
class ListAclPolicyResponseBodyIntranetVpcAclPolicyListAclPolicyList : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> entry{};

  ListAclPolicyResponseBodyIntranetVpcAclPolicyListAclPolicyList() {}

  explicit ListAclPolicyResponseBodyIntranetVpcAclPolicyListAclPolicyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (entry) {
      res["Entry"] = boost::any(*entry);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Entry") != m.end() && !m["Entry"].empty()) {
      entry = make_shared<string>(boost::any_cast<string>(m["Entry"]));
    }
  }


  virtual ~ListAclPolicyResponseBodyIntranetVpcAclPolicyListAclPolicyList() = default;
};
class ListAclPolicyResponseBodyIntranetVpcAclPolicyList : public Darabonba::Model {
public:
  shared_ptr<vector<ListAclPolicyResponseBodyIntranetVpcAclPolicyListAclPolicyList>> aclPolicyList{};
  shared_ptr<string> vpcId{};

  ListAclPolicyResponseBodyIntranetVpcAclPolicyList() {}

  explicit ListAclPolicyResponseBodyIntranetVpcAclPolicyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclPolicyList) {
      vector<boost::any> temp1;
      for(auto item1:*aclPolicyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclPolicyList"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclPolicyList") != m.end() && !m["AclPolicyList"].empty()) {
      if (typeid(vector<boost::any>) == m["AclPolicyList"].type()) {
        vector<ListAclPolicyResponseBodyIntranetVpcAclPolicyListAclPolicyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclPolicyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAclPolicyResponseBodyIntranetVpcAclPolicyListAclPolicyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclPolicyList = make_shared<vector<ListAclPolicyResponseBodyIntranetVpcAclPolicyListAclPolicyList>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListAclPolicyResponseBodyIntranetVpcAclPolicyList() = default;
};
class ListAclPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<vector<ListAclPolicyResponseBodyInternetAclPolicyList>> internetAclPolicyList{};
  shared_ptr<vector<ListAclPolicyResponseBodyIntranetVpcAclPolicyList>> intranetVpcAclPolicyList{};
  shared_ptr<string> requestId{};

  ListAclPolicyResponseBody() {}

  explicit ListAclPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (internetAclPolicyList) {
      vector<boost::any> temp1;
      for(auto item1:*internetAclPolicyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InternetAclPolicyList"] = boost::any(temp1);
    }
    if (intranetVpcAclPolicyList) {
      vector<boost::any> temp1;
      for(auto item1:*intranetVpcAclPolicyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IntranetVpcAclPolicyList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("InternetAclPolicyList") != m.end() && !m["InternetAclPolicyList"].empty()) {
      if (typeid(vector<boost::any>) == m["InternetAclPolicyList"].type()) {
        vector<ListAclPolicyResponseBodyInternetAclPolicyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InternetAclPolicyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAclPolicyResponseBodyInternetAclPolicyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        internetAclPolicyList = make_shared<vector<ListAclPolicyResponseBodyInternetAclPolicyList>>(expect1);
      }
    }
    if (m.find("IntranetVpcAclPolicyList") != m.end() && !m["IntranetVpcAclPolicyList"].empty()) {
      if (typeid(vector<boost::any>) == m["IntranetVpcAclPolicyList"].type()) {
        vector<ListAclPolicyResponseBodyIntranetVpcAclPolicyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IntranetVpcAclPolicyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAclPolicyResponseBodyIntranetVpcAclPolicyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        intranetVpcAclPolicyList = make_shared<vector<ListAclPolicyResponseBodyIntranetVpcAclPolicyList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAclPolicyResponseBody() = default;
};
class ListAclPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAclPolicyResponseBody> body{};

  ListAclPolicyResponse() {}

  explicit ListAclPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAclPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAclPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ListAclPolicyResponse() = default;
};
class ListBenchmarkTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> serviceName{};

  ListBenchmarkTaskRequest() {}

  explicit ListBenchmarkTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ListBenchmarkTaskRequest() = default;
};
class ListBenchmarkTaskResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<long> availableAgent{};
  shared_ptr<string> createTime{};
  shared_ptr<string> message{};
  shared_ptr<string> region{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> updateTime{};

  ListBenchmarkTaskResponseBodyTasks() {}

  explicit ListBenchmarkTaskResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableAgent) {
      res["AvailableAgent"] = boost::any(*availableAgent);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableAgent") != m.end() && !m["AvailableAgent"].empty()) {
      availableAgent = make_shared<long>(boost::any_cast<long>(m["AvailableAgent"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListBenchmarkTaskResponseBodyTasks() = default;
};
class ListBenchmarkTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListBenchmarkTaskResponseBodyTasks>> tasks{};
  shared_ptr<long> totalCount{};

  ListBenchmarkTaskResponseBody() {}

  explicit ListBenchmarkTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<ListBenchmarkTaskResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBenchmarkTaskResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ListBenchmarkTaskResponseBodyTasks>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListBenchmarkTaskResponseBody() = default;
};
class ListBenchmarkTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListBenchmarkTaskResponseBody> body{};

  ListBenchmarkTaskResponse() {}

  explicit ListBenchmarkTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListBenchmarkTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBenchmarkTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListBenchmarkTaskResponse() = default;
};
class ListGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceName{};

  ListGatewayRequest() {}

  explicit ListGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayName) {
      res["GatewayName"] = boost::any(*gatewayName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayName") != m.end() && !m["GatewayName"].empty()) {
      gatewayName = make_shared<string>(boost::any_cast<string>(m["GatewayName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
  }


  virtual ~ListGatewayRequest() = default;
};
class ListGatewayResponseBodyGateways : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetDomain{};
  shared_ptr<bool> internetEnabled{};
  shared_ptr<string> intranetDomain{};
  shared_ptr<bool> isDefault{};
  shared_ptr<long> replicas{};
  shared_ptr<bool> SSLRedirectionEnabled{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  ListGatewayResponseBodyGateways() {}

  explicit ListGatewayResponseBodyGateways(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayName) {
      res["GatewayName"] = boost::any(*gatewayName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (internetDomain) {
      res["InternetDomain"] = boost::any(*internetDomain);
    }
    if (internetEnabled) {
      res["InternetEnabled"] = boost::any(*internetEnabled);
    }
    if (intranetDomain) {
      res["IntranetDomain"] = boost::any(*intranetDomain);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (replicas) {
      res["Replicas"] = boost::any(*replicas);
    }
    if (SSLRedirectionEnabled) {
      res["SSLRedirectionEnabled"] = boost::any(*SSLRedirectionEnabled);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayName") != m.end() && !m["GatewayName"].empty()) {
      gatewayName = make_shared<string>(boost::any_cast<string>(m["GatewayName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InternetDomain") != m.end() && !m["InternetDomain"].empty()) {
      internetDomain = make_shared<string>(boost::any_cast<string>(m["InternetDomain"]));
    }
    if (m.find("InternetEnabled") != m.end() && !m["InternetEnabled"].empty()) {
      internetEnabled = make_shared<bool>(boost::any_cast<bool>(m["InternetEnabled"]));
    }
    if (m.find("IntranetDomain") != m.end() && !m["IntranetDomain"].empty()) {
      intranetDomain = make_shared<string>(boost::any_cast<string>(m["IntranetDomain"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Replicas") != m.end() && !m["Replicas"].empty()) {
      replicas = make_shared<long>(boost::any_cast<long>(m["Replicas"]));
    }
    if (m.find("SSLRedirectionEnabled") != m.end() && !m["SSLRedirectionEnabled"].empty()) {
      SSLRedirectionEnabled = make_shared<bool>(boost::any_cast<bool>(m["SSLRedirectionEnabled"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListGatewayResponseBodyGateways() = default;
};
class ListGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListGatewayResponseBodyGateways>> gateways{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListGatewayResponseBody() {}

  explicit ListGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gateways) {
      vector<boost::any> temp1;
      for(auto item1:*gateways){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Gateways"] = boost::any(temp1);
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
    if (m.find("Gateways") != m.end() && !m["Gateways"].empty()) {
      if (typeid(vector<boost::any>) == m["Gateways"].type()) {
        vector<ListGatewayResponseBodyGateways> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Gateways"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewayResponseBodyGateways model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gateways = make_shared<vector<ListGatewayResponseBodyGateways>>(expect1);
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


  virtual ~ListGatewayResponseBody() = default;
};
class ListGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGatewayResponseBody> body{};

  ListGatewayResponse() {}

  explicit ListGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~ListGatewayResponse() = default;
};
class ListGatewayDomainsResponseBodyCustomDomains : public Darabonba::Model {
public:
  shared_ptr<string> certificateEndDate{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> certificateName{};
  shared_ptr<string> certificateStartDate{};
  shared_ptr<string> certificateStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> domain{};
  shared_ptr<string> type{};
  shared_ptr<string> updateTime{};

  ListGatewayDomainsResponseBodyCustomDomains() {}

  explicit ListGatewayDomainsResponseBodyCustomDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateEndDate) {
      res["CertificateEndDate"] = boost::any(*certificateEndDate);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (certificateName) {
      res["CertificateName"] = boost::any(*certificateName);
    }
    if (certificateStartDate) {
      res["CertificateStartDate"] = boost::any(*certificateStartDate);
    }
    if (certificateStatus) {
      res["CertificateStatus"] = boost::any(*certificateStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateEndDate") != m.end() && !m["CertificateEndDate"].empty()) {
      certificateEndDate = make_shared<string>(boost::any_cast<string>(m["CertificateEndDate"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("CertificateName") != m.end() && !m["CertificateName"].empty()) {
      certificateName = make_shared<string>(boost::any_cast<string>(m["CertificateName"]));
    }
    if (m.find("CertificateStartDate") != m.end() && !m["CertificateStartDate"].empty()) {
      certificateStartDate = make_shared<string>(boost::any_cast<string>(m["CertificateStartDate"]));
    }
    if (m.find("CertificateStatus") != m.end() && !m["CertificateStatus"].empty()) {
      certificateStatus = make_shared<string>(boost::any_cast<string>(m["CertificateStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListGatewayDomainsResponseBodyCustomDomains() = default;
};
class ListGatewayDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListGatewayDomainsResponseBodyCustomDomains>> customDomains{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListGatewayDomainsResponseBody() {}

  explicit ListGatewayDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customDomains) {
      vector<boost::any> temp1;
      for(auto item1:*customDomains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomDomains"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomDomains") != m.end() && !m["CustomDomains"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomDomains"].type()) {
        vector<ListGatewayDomainsResponseBodyCustomDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomDomains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewayDomainsResponseBodyCustomDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customDomains = make_shared<vector<ListGatewayDomainsResponseBodyCustomDomains>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListGatewayDomainsResponseBody() = default;
};
class ListGatewayDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGatewayDomainsResponseBody> body{};

  ListGatewayDomainsResponse() {}

  explicit ListGatewayDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGatewayDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGatewayDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~ListGatewayDomainsResponse() = default;
};
class ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<bool> authoritativeDnsEnabled{};
  shared_ptr<string> ip{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList() {}

  explicit ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (authoritativeDnsEnabled) {
      res["AuthoritativeDnsEnabled"] = boost::any(*authoritativeDnsEnabled);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
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
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("AuthoritativeDnsEnabled") != m.end() && !m["AuthoritativeDnsEnabled"].empty()) {
      authoritativeDnsEnabled = make_shared<bool>(boost::any_cast<bool>(m["AuthoritativeDnsEnabled"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
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


  virtual ~ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList() = default;
};
class ListGatewayIntranetLinkedVpcResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<vector<ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList>> intranetLinkedVpcList{};
  shared_ptr<string> requestId{};

  ListGatewayIntranetLinkedVpcResponseBody() {}

  explicit ListGatewayIntranetLinkedVpcResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (intranetLinkedVpcList) {
      vector<boost::any> temp1;
      for(auto item1:*intranetLinkedVpcList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IntranetLinkedVpcList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IntranetLinkedVpcList") != m.end() && !m["IntranetLinkedVpcList"].empty()) {
      if (typeid(vector<boost::any>) == m["IntranetLinkedVpcList"].type()) {
        vector<ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IntranetLinkedVpcList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        intranetLinkedVpcList = make_shared<vector<ListGatewayIntranetLinkedVpcResponseBodyIntranetLinkedVpcList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListGatewayIntranetLinkedVpcResponseBody() = default;
};
class ListGatewayIntranetLinkedVpcResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGatewayIntranetLinkedVpcResponseBody> body{};

  ListGatewayIntranetLinkedVpcResponse() {}

  explicit ListGatewayIntranetLinkedVpcResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGatewayIntranetLinkedVpcResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGatewayIntranetLinkedVpcResponseBody>(model1);
      }
    }
  }


  virtual ~ListGatewayIntranetLinkedVpcResponse() = default;
};
class ListGatewayIntranetLinkedVpcPeerRequest : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};

  ListGatewayIntranetLinkedVpcPeerRequest() {}

  explicit ListGatewayIntranetLinkedVpcPeerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListGatewayIntranetLinkedVpcPeerRequest() = default;
};
class ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs : public Darabonba::Model {
public:
  shared_ptr<string> region{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};

  ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs() {}

  explicit ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
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
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs() = default;
};
class ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList : public Darabonba::Model {
public:
  shared_ptr<vector<ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs>> peerVpcs{};
  shared_ptr<string> vpcId{};

  ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList() {}

  explicit ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (peerVpcs) {
      vector<boost::any> temp1;
      for(auto item1:*peerVpcs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PeerVpcs"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PeerVpcs") != m.end() && !m["PeerVpcs"].empty()) {
      if (typeid(vector<boost::any>) == m["PeerVpcs"].type()) {
        vector<ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PeerVpcs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        peerVpcs = make_shared<vector<ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList() = default;
};
class ListGatewayIntranetLinkedVpcPeerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<vector<ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList>> peerVpcList{};
  shared_ptr<string> requestId{};

  ListGatewayIntranetLinkedVpcPeerResponseBody() {}

  explicit ListGatewayIntranetLinkedVpcPeerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (peerVpcList) {
      vector<boost::any> temp1;
      for(auto item1:*peerVpcList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PeerVpcList"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("PeerVpcList") != m.end() && !m["PeerVpcList"].empty()) {
      if (typeid(vector<boost::any>) == m["PeerVpcList"].type()) {
        vector<ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PeerVpcList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        peerVpcList = make_shared<vector<ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListGatewayIntranetLinkedVpcPeerResponseBody() = default;
};
class ListGatewayIntranetLinkedVpcPeerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGatewayIntranetLinkedVpcPeerResponseBody> body{};

  ListGatewayIntranetLinkedVpcPeerResponse() {}

  explicit ListGatewayIntranetLinkedVpcPeerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGatewayIntranetLinkedVpcPeerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGatewayIntranetLinkedVpcPeerResponseBody>(model1);
      }
    }
  }


  virtual ~ListGatewayIntranetLinkedVpcPeerResponse() = default;
};
class ListGatewayIntranetSupportedZoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> zones{};

  ListGatewayIntranetSupportedZoneResponseBody() {}

  explicit ListGatewayIntranetSupportedZoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zones) {
      res["Zones"] = boost::any(*zones);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Zones"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zones = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListGatewayIntranetSupportedZoneResponseBody() = default;
};
class ListGatewayIntranetSupportedZoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGatewayIntranetSupportedZoneResponseBody> body{};

  ListGatewayIntranetSupportedZoneResponse() {}

  explicit ListGatewayIntranetSupportedZoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGatewayIntranetSupportedZoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGatewayIntranetSupportedZoneResponseBody>(model1);
      }
    }
  }


  virtual ~ListGatewayIntranetSupportedZoneResponse() = default;
};
class ListGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> workspaceId{};

  ListGroupsRequest() {}

  explicit ListGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListGroupsRequest() = default;
};
class ListGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Group>> groups{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListGroupsResponseBody() {}

  explicit ListGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
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
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<Group> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Group model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<Group>>(expect1);
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


  virtual ~ListGroupsResponseBody() = default;
};
class ListGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupsResponseBody> body{};

  ListGroupsResponse() {}

  explicit ListGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupsResponse() = default;
};
class ListResourceInstanceWorkerRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> workerName{};

  ListResourceInstanceWorkerRequest() {}

  explicit ListResourceInstanceWorkerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (workerName) {
      res["WorkerName"] = boost::any(*workerName);
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
    if (m.find("WorkerName") != m.end() && !m["WorkerName"].empty()) {
      workerName = make_shared<string>(boost::any_cast<string>(m["WorkerName"]));
    }
  }


  virtual ~ListResourceInstanceWorkerRequest() = default;
};
class ListResourceInstanceWorkerResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ResourceInstanceWorker>> pods{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListResourceInstanceWorkerResponseBody() {}

  explicit ListResourceInstanceWorkerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pods) {
      vector<boost::any> temp1;
      for(auto item1:*pods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Pods"] = boost::any(temp1);
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
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Pods") != m.end() && !m["Pods"].empty()) {
      if (typeid(vector<boost::any>) == m["Pods"].type()) {
        vector<ResourceInstanceWorker> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Pods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResourceInstanceWorker model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pods = make_shared<vector<ResourceInstanceWorker>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListResourceInstanceWorkerResponseBody() = default;
};
class ListResourceInstanceWorkerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceInstanceWorkerResponseBody> body{};

  ListResourceInstanceWorkerResponse() {}

  explicit ListResourceInstanceWorkerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListResourceInstanceWorkerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceInstanceWorkerResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceInstanceWorkerResponse() = default;
};
class ListResourceInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> filter{};
  shared_ptr<string> instanceIP{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<map<string, string>> label{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sort{};

  ListResourceInstancesRequest() {}

  explicit ListResourceInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (instanceIP) {
      res["InstanceIP"] = boost::any(*instanceIP);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("InstanceIP") != m.end() && !m["InstanceIP"].empty()) {
      instanceIP = make_shared<string>(boost::any_cast<string>(m["InstanceIP"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Label"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      label = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
  }


  virtual ~ListResourceInstancesRequest() = default;
};
class ListResourceInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> filter{};
  shared_ptr<string> instanceIP{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> labelShrink{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sort{};

  ListResourceInstancesShrinkRequest() {}

  explicit ListResourceInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (instanceIP) {
      res["InstanceIP"] = boost::any(*instanceIP);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (labelShrink) {
      res["Label"] = boost::any(*labelShrink);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("InstanceIP") != m.end() && !m["InstanceIP"].empty()) {
      instanceIP = make_shared<string>(boost::any_cast<string>(m["InstanceIP"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      labelShrink = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
  }


  virtual ~ListResourceInstancesShrinkRequest() = default;
};
class ListResourceInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ResourceInstance>> instances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListResourceInstancesResponseBody() {}

  explicit ListResourceInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
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
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<ResourceInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResourceInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ResourceInstance>>(expect1);
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


  virtual ~ListResourceInstancesResponseBody() = default;
};
class ListResourceInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceInstancesResponseBody> body{};

  ListResourceInstancesResponse() {}

  explicit ListResourceInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListResourceInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceInstancesResponse() = default;
};
class ListResourceServicesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListResourceServicesRequest() {}

  explicit ListResourceServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListResourceServicesRequest() = default;
};
class ListResourceServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<Service>> services{};
  shared_ptr<long> totalCount{};

  ListResourceServicesResponseBody() {}

  explicit ListResourceServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Services"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<Service> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Service model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<Service>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListResourceServicesResponseBody() = default;
};
class ListResourceServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourceServicesResponseBody> body{};

  ListResourceServicesResponse() {}

  explicit ListResourceServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListResourceServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourceServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourceServicesResponse() = default;
};
class ListResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceStatus{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sort{};

  ListResourcesRequest() {}

  explicit ListResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<string>(boost::any_cast<string>(m["ResourceStatus"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
  }


  virtual ~ListResourcesRequest() = default;
};
class ListResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<Resource>> resources{};
  shared_ptr<long> totalCount{};

  ListResourcesResponseBody() {}

  explicit ListResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<Resource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Resource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<Resource>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListResourcesResponseBody() = default;
};
class ListResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcesResponseBody> body{};

  ListResourcesResponse() {}

  explicit ListResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesResponse() = default;
};
class ListServiceContainersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ContainerInfo>> containers{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceName{};

  ListServiceContainersResponseBody() {}

  explicit ListServiceContainersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containers) {
      vector<boost::any> temp1;
      for(auto item1:*containers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Containers"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Containers") != m.end() && !m["Containers"].empty()) {
      if (typeid(vector<boost::any>) == m["Containers"].type()) {
        vector<ContainerInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Containers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContainerInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        containers = make_shared<vector<ContainerInfo>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ListServiceContainersResponseBody() = default;
};
class ListServiceContainersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceContainersResponseBody> body{};

  ListServiceContainersResponse() {}

  explicit ListServiceContainersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServiceContainersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceContainersResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceContainersResponse() = default;
};
class ListServiceInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<string> hostIP{};
  shared_ptr<string> instanceIP{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> isSpot{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> role{};
  shared_ptr<string> sort{};

  ListServiceInstancesRequest() {}

  explicit ListServiceInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (hostIP) {
      res["HostIP"] = boost::any(*hostIP);
    }
    if (instanceIP) {
      res["InstanceIP"] = boost::any(*instanceIP);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (isSpot) {
      res["IsSpot"] = boost::any(*isSpot);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("HostIP") != m.end() && !m["HostIP"].empty()) {
      hostIP = make_shared<string>(boost::any_cast<string>(m["HostIP"]));
    }
    if (m.find("InstanceIP") != m.end() && !m["InstanceIP"].empty()) {
      instanceIP = make_shared<string>(boost::any_cast<string>(m["InstanceIP"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IsSpot") != m.end() && !m["IsSpot"].empty()) {
      isSpot = make_shared<bool>(boost::any_cast<bool>(m["IsSpot"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
  }


  virtual ~ListServiceInstancesRequest() = default;
};
class ListServiceInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Instance>> instances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListServiceInstancesResponseBody() {}

  explicit ListServiceInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
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
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<Instance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Instance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<Instance>>(expect1);
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


  virtual ~ListServiceInstancesResponseBody() = default;
};
class ListServiceInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceInstancesResponseBody> body{};

  ListServiceInstancesResponse() {}

  explicit ListServiceInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServiceInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceInstancesResponse() = default;
};
class ListServiceVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListServiceVersionsRequest() {}

  explicit ListServiceVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServiceVersionsRequest() = default;
};
class ListServiceVersionsResponseBodyVersions : public Darabonba::Model {
public:
  shared_ptr<string> buildTime{};
  shared_ptr<string> imageAvailable{};
  shared_ptr<long> imageId{};
  shared_ptr<string> message{};
  shared_ptr<string> serviceConfig{};
  shared_ptr<string> serviceRunnable{};

  ListServiceVersionsResponseBodyVersions() {}

  explicit ListServiceVersionsResponseBodyVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildTime) {
      res["BuildTime"] = boost::any(*buildTime);
    }
    if (imageAvailable) {
      res["ImageAvailable"] = boost::any(*imageAvailable);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (serviceConfig) {
      res["ServiceConfig"] = boost::any(*serviceConfig);
    }
    if (serviceRunnable) {
      res["ServiceRunnable"] = boost::any(*serviceRunnable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuildTime") != m.end() && !m["BuildTime"].empty()) {
      buildTime = make_shared<string>(boost::any_cast<string>(m["BuildTime"]));
    }
    if (m.find("ImageAvailable") != m.end() && !m["ImageAvailable"].empty()) {
      imageAvailable = make_shared<string>(boost::any_cast<string>(m["ImageAvailable"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<long>(boost::any_cast<long>(m["ImageId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ServiceConfig") != m.end() && !m["ServiceConfig"].empty()) {
      serviceConfig = make_shared<string>(boost::any_cast<string>(m["ServiceConfig"]));
    }
    if (m.find("ServiceRunnable") != m.end() && !m["ServiceRunnable"].empty()) {
      serviceRunnable = make_shared<string>(boost::any_cast<string>(m["ServiceRunnable"]));
    }
  }


  virtual ~ListServiceVersionsResponseBodyVersions() = default;
};
class ListServiceVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListServiceVersionsResponseBodyVersions>> versions{};

  ListServiceVersionsResponseBody() {}

  explicit ListServiceVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Versions"] = boost::any(temp1);
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
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      if (typeid(vector<boost::any>) == m["Versions"].type()) {
        vector<ListServiceVersionsResponseBodyVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServiceVersionsResponseBodyVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<ListServiceVersionsResponseBodyVersions>>(expect1);
      }
    }
  }


  virtual ~ListServiceVersionsResponseBody() = default;
};
class ListServiceVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServiceVersionsResponseBody> body{};

  ListServiceVersionsResponse() {}

  explicit ListServiceVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServiceVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServiceVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServiceVersionsResponse() = default;
};
class ListServicesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoscalerEnabled{};
  shared_ptr<bool> cronscalerEnabled{};
  shared_ptr<string> filter{};
  shared_ptr<string> gateway{};
  shared_ptr<string> groupName{};
  shared_ptr<bool> includeNoWorkspace{};
  shared_ptr<map<string, string>> label{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentServiceUid{};
  shared_ptr<string> quotaId{};
  shared_ptr<string> resourceAliasName{};
  shared_ptr<bool> resourceBurstable{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> role{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> serviceUid{};
  shared_ptr<string> sort{};
  shared_ptr<string> workspaceId{};

  ListServicesRequest() {}

  explicit ListServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoscalerEnabled) {
      res["AutoscalerEnabled"] = boost::any(*autoscalerEnabled);
    }
    if (cronscalerEnabled) {
      res["CronscalerEnabled"] = boost::any(*cronscalerEnabled);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (gateway) {
      res["Gateway"] = boost::any(*gateway);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (includeNoWorkspace) {
      res["IncludeNoWorkspace"] = boost::any(*includeNoWorkspace);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parentServiceUid) {
      res["ParentServiceUid"] = boost::any(*parentServiceUid);
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (resourceAliasName) {
      res["ResourceAliasName"] = boost::any(*resourceAliasName);
    }
    if (resourceBurstable) {
      res["ResourceBurstable"] = boost::any(*resourceBurstable);
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
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (serviceUid) {
      res["ServiceUid"] = boost::any(*serviceUid);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoscalerEnabled") != m.end() && !m["AutoscalerEnabled"].empty()) {
      autoscalerEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoscalerEnabled"]));
    }
    if (m.find("CronscalerEnabled") != m.end() && !m["CronscalerEnabled"].empty()) {
      cronscalerEnabled = make_shared<bool>(boost::any_cast<bool>(m["CronscalerEnabled"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Gateway") != m.end() && !m["Gateway"].empty()) {
      gateway = make_shared<string>(boost::any_cast<string>(m["Gateway"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IncludeNoWorkspace") != m.end() && !m["IncludeNoWorkspace"].empty()) {
      includeNoWorkspace = make_shared<bool>(boost::any_cast<bool>(m["IncludeNoWorkspace"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Label"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      label = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParentServiceUid") != m.end() && !m["ParentServiceUid"].empty()) {
      parentServiceUid = make_shared<string>(boost::any_cast<string>(m["ParentServiceUid"]));
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("ResourceAliasName") != m.end() && !m["ResourceAliasName"].empty()) {
      resourceAliasName = make_shared<string>(boost::any_cast<string>(m["ResourceAliasName"]));
    }
    if (m.find("ResourceBurstable") != m.end() && !m["ResourceBurstable"].empty()) {
      resourceBurstable = make_shared<bool>(boost::any_cast<bool>(m["ResourceBurstable"]));
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
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ServiceUid") != m.end() && !m["ServiceUid"].empty()) {
      serviceUid = make_shared<string>(boost::any_cast<string>(m["ServiceUid"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListServicesRequest() = default;
};
class ListServicesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoscalerEnabled{};
  shared_ptr<bool> cronscalerEnabled{};
  shared_ptr<string> filter{};
  shared_ptr<string> gateway{};
  shared_ptr<string> groupName{};
  shared_ptr<bool> includeNoWorkspace{};
  shared_ptr<string> labelShrink{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> parentServiceUid{};
  shared_ptr<string> quotaId{};
  shared_ptr<string> resourceAliasName{};
  shared_ptr<bool> resourceBurstable{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> role{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<string> serviceType{};
  shared_ptr<string> serviceUid{};
  shared_ptr<string> sort{};
  shared_ptr<string> workspaceId{};

  ListServicesShrinkRequest() {}

  explicit ListServicesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoscalerEnabled) {
      res["AutoscalerEnabled"] = boost::any(*autoscalerEnabled);
    }
    if (cronscalerEnabled) {
      res["CronscalerEnabled"] = boost::any(*cronscalerEnabled);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (gateway) {
      res["Gateway"] = boost::any(*gateway);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (includeNoWorkspace) {
      res["IncludeNoWorkspace"] = boost::any(*includeNoWorkspace);
    }
    if (labelShrink) {
      res["Label"] = boost::any(*labelShrink);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (parentServiceUid) {
      res["ParentServiceUid"] = boost::any(*parentServiceUid);
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (resourceAliasName) {
      res["ResourceAliasName"] = boost::any(*resourceAliasName);
    }
    if (resourceBurstable) {
      res["ResourceBurstable"] = boost::any(*resourceBurstable);
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
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (serviceUid) {
      res["ServiceUid"] = boost::any(*serviceUid);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoscalerEnabled") != m.end() && !m["AutoscalerEnabled"].empty()) {
      autoscalerEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoscalerEnabled"]));
    }
    if (m.find("CronscalerEnabled") != m.end() && !m["CronscalerEnabled"].empty()) {
      cronscalerEnabled = make_shared<bool>(boost::any_cast<bool>(m["CronscalerEnabled"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Gateway") != m.end() && !m["Gateway"].empty()) {
      gateway = make_shared<string>(boost::any_cast<string>(m["Gateway"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IncludeNoWorkspace") != m.end() && !m["IncludeNoWorkspace"].empty()) {
      includeNoWorkspace = make_shared<bool>(boost::any_cast<bool>(m["IncludeNoWorkspace"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      labelShrink = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ParentServiceUid") != m.end() && !m["ParentServiceUid"].empty()) {
      parentServiceUid = make_shared<string>(boost::any_cast<string>(m["ParentServiceUid"]));
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("ResourceAliasName") != m.end() && !m["ResourceAliasName"].empty()) {
      resourceAliasName = make_shared<string>(boost::any_cast<string>(m["ResourceAliasName"]));
    }
    if (m.find("ResourceBurstable") != m.end() && !m["ResourceBurstable"].empty()) {
      resourceBurstable = make_shared<bool>(boost::any_cast<bool>(m["ResourceBurstable"]));
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
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("ServiceUid") != m.end() && !m["ServiceUid"].empty()) {
      serviceUid = make_shared<string>(boost::any_cast<string>(m["ServiceUid"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListServicesShrinkRequest() = default;
};
class ListServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<Service>> services{};
  shared_ptr<long> totalCount{};

  ListServicesResponseBody() {}

  explicit ListServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (services) {
      vector<boost::any> temp1;
      for(auto item1:*services){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Services"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<Service> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Services"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Service model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        services = make_shared<vector<Service>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServicesResponseBody() = default;
};
class ListServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServicesResponseBody> body{};

  ListServicesResponse() {}

  explicit ListServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServicesResponse() = default;
};
class ListTenantAddonsResponseBodyAddons : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> attributes{};
  shared_ptr<string> name{};

  ListTenantAddonsResponseBodyAddons() {}

  explicit ListTenantAddonsResponseBodyAddons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Attributes"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      attributes = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ListTenantAddonsResponseBodyAddons() = default;
};
class ListTenantAddonsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListTenantAddonsResponseBodyAddons>> addons{};
  shared_ptr<string> requestId{};

  ListTenantAddonsResponseBody() {}

  explicit ListTenantAddonsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addons") != m.end() && !m["Addons"].empty()) {
      if (typeid(vector<boost::any>) == m["Addons"].type()) {
        vector<ListTenantAddonsResponseBodyAddons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Addons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTenantAddonsResponseBodyAddons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addons = make_shared<vector<ListTenantAddonsResponseBodyAddons>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListTenantAddonsResponseBody() = default;
};
class ListTenantAddonsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTenantAddonsResponseBody> body{};

  ListTenantAddonsResponse() {}

  explicit ListTenantAddonsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTenantAddonsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTenantAddonsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTenantAddonsResponse() = default;
};
class ListVirtualResourceRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> virtualResourceId{};
  shared_ptr<string> virtualResourceName{};

  ListVirtualResourceRequest() {}

  explicit ListVirtualResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualResourceId) {
      res["VirtualResourceId"] = boost::any(*virtualResourceId);
    }
    if (virtualResourceName) {
      res["VirtualResourceName"] = boost::any(*virtualResourceName);
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
    if (m.find("VirtualResourceId") != m.end() && !m["VirtualResourceId"].empty()) {
      virtualResourceId = make_shared<string>(boost::any_cast<string>(m["VirtualResourceId"]));
    }
    if (m.find("VirtualResourceName") != m.end() && !m["VirtualResourceName"].empty()) {
      virtualResourceName = make_shared<string>(boost::any_cast<string>(m["VirtualResourceName"]));
    }
  }


  virtual ~ListVirtualResourceRequest() = default;
};
class ListVirtualResourceResponseBodyVirtualResources : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> serviceCount{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> virtualResourceId{};
  shared_ptr<string> virtualResourceName{};

  ListVirtualResourceResponseBodyVirtualResources() {}

  explicit ListVirtualResourceResponseBodyVirtualResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (serviceCount) {
      res["ServiceCount"] = boost::any(*serviceCount);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (virtualResourceId) {
      res["VirtualResourceId"] = boost::any(*virtualResourceId);
    }
    if (virtualResourceName) {
      res["VirtualResourceName"] = boost::any(*virtualResourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ServiceCount") != m.end() && !m["ServiceCount"].empty()) {
      serviceCount = make_shared<long>(boost::any_cast<long>(m["ServiceCount"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VirtualResourceId") != m.end() && !m["VirtualResourceId"].empty()) {
      virtualResourceId = make_shared<string>(boost::any_cast<string>(m["VirtualResourceId"]));
    }
    if (m.find("VirtualResourceName") != m.end() && !m["VirtualResourceName"].empty()) {
      virtualResourceName = make_shared<string>(boost::any_cast<string>(m["VirtualResourceName"]));
    }
  }


  virtual ~ListVirtualResourceResponseBodyVirtualResources() = default;
};
class ListVirtualResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListVirtualResourceResponseBodyVirtualResources>> virtualResources{};

  ListVirtualResourceResponseBody() {}

  explicit ListVirtualResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (virtualResources) {
      vector<boost::any> temp1;
      for(auto item1:*virtualResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VirtualResources"] = boost::any(temp1);
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
    if (m.find("VirtualResources") != m.end() && !m["VirtualResources"].empty()) {
      if (typeid(vector<boost::any>) == m["VirtualResources"].type()) {
        vector<ListVirtualResourceResponseBodyVirtualResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VirtualResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVirtualResourceResponseBodyVirtualResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        virtualResources = make_shared<vector<ListVirtualResourceResponseBodyVirtualResources>>(expect1);
      }
    }
  }


  virtual ~ListVirtualResourceResponseBody() = default;
};
class ListVirtualResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVirtualResourceResponseBody> body{};

  ListVirtualResourceResponse() {}

  explicit ListVirtualResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVirtualResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVirtualResourceResponseBody>(model1);
      }
    }
  }


  virtual ~ListVirtualResourceResponse() = default;
};
class ReinstallTenantAddonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ReinstallTenantAddonResponseBody() {}

  explicit ReinstallTenantAddonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReinstallTenantAddonResponseBody() = default;
};
class ReinstallTenantAddonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReinstallTenantAddonResponseBody> body{};

  ReinstallTenantAddonResponse() {}

  explicit ReinstallTenantAddonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReinstallTenantAddonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReinstallTenantAddonResponseBody>(model1);
      }
    }
  }


  virtual ~ReinstallTenantAddonResponse() = default;
};
class ReleaseServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> trafficState{};
  shared_ptr<long> weight{};

  ReleaseServiceRequest() {}

  explicit ReleaseServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trafficState) {
      res["TrafficState"] = boost::any(*trafficState);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrafficState") != m.end() && !m["TrafficState"].empty()) {
      trafficState = make_shared<string>(boost::any_cast<string>(m["TrafficState"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~ReleaseServiceRequest() = default;
};
class ReleaseServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ReleaseServiceResponseBody() {}

  explicit ReleaseServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReleaseServiceResponseBody() = default;
};
class ReleaseServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseServiceResponseBody> body{};

  ReleaseServiceResponse() {}

  explicit ReleaseServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReleaseServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseServiceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseServiceResponse() = default;
};
class RestartServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RestartServiceResponseBody() {}

  explicit RestartServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RestartServiceResponseBody() = default;
};
class RestartServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartServiceResponseBody> body{};

  RestartServiceResponse() {}

  explicit RestartServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RestartServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartServiceResponseBody>(model1);
      }
    }
  }


  virtual ~RestartServiceResponse() = default;
};
class StartBenchmarkTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  StartBenchmarkTaskResponseBody() {}

  explicit StartBenchmarkTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartBenchmarkTaskResponseBody() = default;
};
class StartBenchmarkTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartBenchmarkTaskResponseBody> body{};

  StartBenchmarkTaskResponse() {}

  explicit StartBenchmarkTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartBenchmarkTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartBenchmarkTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StartBenchmarkTaskResponse() = default;
};
class StartServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  StartServiceResponseBody() {}

  explicit StartServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartServiceResponseBody() = default;
};
class StartServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartServiceResponseBody> body{};

  StartServiceResponse() {}

  explicit StartServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartServiceResponseBody>(model1);
      }
    }
  }


  virtual ~StartServiceResponse() = default;
};
class StopBenchmarkTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  StopBenchmarkTaskResponseBody() {}

  explicit StopBenchmarkTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopBenchmarkTaskResponseBody() = default;
};
class StopBenchmarkTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopBenchmarkTaskResponseBody> body{};

  StopBenchmarkTaskResponse() {}

  explicit StopBenchmarkTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopBenchmarkTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopBenchmarkTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StopBenchmarkTaskResponse() = default;
};
class StopServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  StopServiceResponseBody() {}

  explicit StopServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopServiceResponseBody() = default;
};
class StopServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopServiceResponseBody> body{};

  StopServiceResponse() {}

  explicit StopServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopServiceResponseBody>(model1);
      }
    }
  }


  virtual ~StopServiceResponse() = default;
};
class UpdateAppServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> quotaId{};
  shared_ptr<string> workspaceId{};
  shared_ptr<string> appType{};
  shared_ptr<string> appVersion{};
  shared_ptr<map<string, boost::any>> config{};
  shared_ptr<long> replicas{};
  shared_ptr<string> serviceSpec{};

  UpdateAppServiceRequest() {}

  explicit UpdateAppServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (replicas) {
      res["Replicas"] = boost::any(*replicas);
    }
    if (serviceSpec) {
      res["ServiceSpec"] = boost::any(*serviceSpec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Config"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Replicas") != m.end() && !m["Replicas"].empty()) {
      replicas = make_shared<long>(boost::any_cast<long>(m["Replicas"]));
    }
    if (m.find("ServiceSpec") != m.end() && !m["ServiceSpec"].empty()) {
      serviceSpec = make_shared<string>(boost::any_cast<string>(m["ServiceSpec"]));
    }
  }


  virtual ~UpdateAppServiceRequest() = default;
};
class UpdateAppServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateAppServiceResponseBody() {}

  explicit UpdateAppServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAppServiceResponseBody() = default;
};
class UpdateAppServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAppServiceResponseBody> body{};

  UpdateAppServiceResponse() {}

  explicit UpdateAppServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateAppServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppServiceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppServiceResponse() = default;
};
class UpdateBenchmarkTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};

  UpdateBenchmarkTaskRequest() {}

  explicit UpdateBenchmarkTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~UpdateBenchmarkTaskRequest() = default;
};
class UpdateBenchmarkTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateBenchmarkTaskResponseBody() {}

  explicit UpdateBenchmarkTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateBenchmarkTaskResponseBody() = default;
};
class UpdateBenchmarkTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateBenchmarkTaskResponseBody> body{};

  UpdateBenchmarkTaskResponse() {}

  explicit UpdateBenchmarkTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateBenchmarkTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBenchmarkTaskResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBenchmarkTaskResponse() = default;
};
class UpdateGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableInternet{};
  shared_ptr<bool> enableIntranet{};
  shared_ptr<bool> enableSSLRedirection{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> name{};
  shared_ptr<long> replicas{};

  UpdateGatewayRequest() {}

  explicit UpdateGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableInternet) {
      res["EnableInternet"] = boost::any(*enableInternet);
    }
    if (enableIntranet) {
      res["EnableIntranet"] = boost::any(*enableIntranet);
    }
    if (enableSSLRedirection) {
      res["EnableSSLRedirection"] = boost::any(*enableSSLRedirection);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (replicas) {
      res["Replicas"] = boost::any(*replicas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableInternet") != m.end() && !m["EnableInternet"].empty()) {
      enableInternet = make_shared<bool>(boost::any_cast<bool>(m["EnableInternet"]));
    }
    if (m.find("EnableIntranet") != m.end() && !m["EnableIntranet"].empty()) {
      enableIntranet = make_shared<bool>(boost::any_cast<bool>(m["EnableIntranet"]));
    }
    if (m.find("EnableSSLRedirection") != m.end() && !m["EnableSSLRedirection"].empty()) {
      enableSSLRedirection = make_shared<bool>(boost::any_cast<bool>(m["EnableSSLRedirection"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Replicas") != m.end() && !m["Replicas"].empty()) {
      replicas = make_shared<long>(boost::any_cast<long>(m["Replicas"]));
    }
  }


  virtual ~UpdateGatewayRequest() = default;
};
class UpdateGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateGatewayResponseBody() {}

  explicit UpdateGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateGatewayResponseBody() = default;
};
class UpdateGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGatewayResponseBody> body{};

  UpdateGatewayResponse() {}

  explicit UpdateGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGatewayResponse() = default;
};
class UpdateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> trafficMode{};

  UpdateGroupRequest() {}

  explicit UpdateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trafficMode) {
      res["TrafficMode"] = boost::any(*trafficMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrafficMode") != m.end() && !m["TrafficMode"].empty()) {
      trafficMode = make_shared<string>(boost::any_cast<string>(m["TrafficMode"]));
    }
  }


  virtual ~UpdateGroupRequest() = default;
};
class UpdateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateGroupResponseBody() {}

  explicit UpdateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateGroupResponseBody() = default;
};
class UpdateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGroupResponseBody> body{};

  UpdateGroupResponse() {}

  explicit UpdateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGroupResponse() = default;
};
class UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations : public Darabonba::Model {
public:
  shared_ptr<string> effect{};
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations() {}

  explicit UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effect) {
      res["effect"] = boost::any(*effect);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("effect") != m.end() && !m["effect"].empty()) {
      effect = make_shared<string>(boost::any_cast<string>(m["effect"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations() = default;
};
class UpdateResourceRequestSelfManagedResourceOptions : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> nodeMatchLabels{};
  shared_ptr<vector<UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations>> nodeTolerations{};

  UpdateResourceRequestSelfManagedResourceOptions() {}

  explicit UpdateResourceRequestSelfManagedResourceOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeMatchLabels) {
      res["NodeMatchLabels"] = boost::any(*nodeMatchLabels);
    }
    if (nodeTolerations) {
      vector<boost::any> temp1;
      for(auto item1:*nodeTolerations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeTolerations"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeMatchLabels") != m.end() && !m["NodeMatchLabels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["NodeMatchLabels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nodeMatchLabels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("NodeTolerations") != m.end() && !m["NodeTolerations"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeTolerations"].type()) {
        vector<UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeTolerations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeTolerations = make_shared<vector<UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations>>(expect1);
      }
    }
  }


  virtual ~UpdateResourceRequestSelfManagedResourceOptions() = default;
};
class UpdateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceName{};
  shared_ptr<UpdateResourceRequestSelfManagedResourceOptions> selfManagedResourceOptions{};

  UpdateResourceRequest() {}

  explicit UpdateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (selfManagedResourceOptions) {
      res["SelfManagedResourceOptions"] = selfManagedResourceOptions ? boost::any(selfManagedResourceOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("SelfManagedResourceOptions") != m.end() && !m["SelfManagedResourceOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["SelfManagedResourceOptions"].type()) {
        UpdateResourceRequestSelfManagedResourceOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SelfManagedResourceOptions"]));
        selfManagedResourceOptions = make_shared<UpdateResourceRequestSelfManagedResourceOptions>(model1);
      }
    }
  }


  virtual ~UpdateResourceRequest() = default;
};
class UpdateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};

  UpdateResourceResponseBody() {}

  explicit UpdateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
  }


  virtual ~UpdateResourceResponseBody() = default;
};
class UpdateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceResponseBody> body{};

  UpdateResourceResponse() {}

  explicit UpdateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceResponse() = default;
};
class UpdateResourceDLinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> destinationCIDRs{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<vector<string>> vSwitchIdList{};

  UpdateResourceDLinkRequest() {}

  explicit UpdateResourceDLinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCIDRs) {
      res["DestinationCIDRs"] = boost::any(*destinationCIDRs);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchIdList) {
      res["VSwitchIdList"] = boost::any(*vSwitchIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCIDRs") != m.end() && !m["DestinationCIDRs"].empty()) {
      destinationCIDRs = make_shared<string>(boost::any_cast<string>(m["DestinationCIDRs"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchIdList") != m.end() && !m["VSwitchIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitchIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitchIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitchIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateResourceDLinkRequest() = default;
};
class UpdateResourceDLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateResourceDLinkResponseBody() {}

  explicit UpdateResourceDLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateResourceDLinkResponseBody() = default;
};
class UpdateResourceDLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceDLinkResponseBody> body{};

  UpdateResourceDLinkResponse() {}

  explicit UpdateResourceDLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateResourceDLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceDLinkResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceDLinkResponse() = default;
};
class UpdateResourceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> action{};

  UpdateResourceInstanceRequest() {}

  explicit UpdateResourceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
  }


  virtual ~UpdateResourceInstanceRequest() = default;
};
class UpdateResourceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceId{};

  UpdateResourceInstanceResponseBody() {}

  explicit UpdateResourceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~UpdateResourceInstanceResponseBody() = default;
};
class UpdateResourceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceInstanceResponseBody> body{};

  UpdateResourceInstanceResponse() {}

  explicit UpdateResourceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateResourceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceInstanceResponse() = default;
};
class UpdateResourceInstanceLabelRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allInstances{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<map<string, string>> labels{};

  UpdateResourceInstanceLabelRequest() {}

  explicit UpdateResourceInstanceLabelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allInstances) {
      res["AllInstances"] = boost::any(*allInstances);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllInstances") != m.end() && !m["AllInstances"].empty()) {
      allInstances = make_shared<bool>(boost::any_cast<bool>(m["AllInstances"]));
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
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~UpdateResourceInstanceLabelRequest() = default;
};
class UpdateResourceInstanceLabelShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allInstances{};
  shared_ptr<string> instanceIdsShrink{};
  shared_ptr<map<string, string>> labels{};

  UpdateResourceInstanceLabelShrinkRequest() {}

  explicit UpdateResourceInstanceLabelShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allInstances) {
      res["AllInstances"] = boost::any(*allInstances);
    }
    if (instanceIdsShrink) {
      res["InstanceIds"] = boost::any(*instanceIdsShrink);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllInstances") != m.end() && !m["AllInstances"].empty()) {
      allInstances = make_shared<bool>(boost::any_cast<bool>(m["AllInstances"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~UpdateResourceInstanceLabelShrinkRequest() = default;
};
class UpdateResourceInstanceLabelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateResourceInstanceLabelResponseBody() {}

  explicit UpdateResourceInstanceLabelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateResourceInstanceLabelResponseBody() = default;
};
class UpdateResourceInstanceLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceInstanceLabelResponseBody> body{};

  UpdateResourceInstanceLabelResponse() {}

  explicit UpdateResourceInstanceLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateResourceInstanceLabelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceInstanceLabelResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceInstanceLabelResponse() = default;
};
class UpdateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> updateType{};
  shared_ptr<string> body{};

  UpdateServiceRequest() {}

  explicit UpdateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateType) {
      res["UpdateType"] = boost::any(*updateType);
    }
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UpdateType") != m.end() && !m["UpdateType"].empty()) {
      updateType = make_shared<string>(boost::any_cast<string>(m["UpdateType"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~UpdateServiceRequest() = default;
};
class UpdateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateServiceResponseBody() {}

  explicit UpdateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateServiceResponseBody() = default;
};
class UpdateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceResponseBody> body{};

  UpdateServiceResponse() {}

  explicit UpdateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceResponse() = default;
};
class UpdateServiceAutoScalerRequestBehaviorOnZero : public Darabonba::Model {
public:
  shared_ptr<long> scaleDownGracePeriodSeconds{};
  shared_ptr<long> scaleUpActivationReplicas{};

  UpdateServiceAutoScalerRequestBehaviorOnZero() {}

  explicit UpdateServiceAutoScalerRequestBehaviorOnZero(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scaleDownGracePeriodSeconds) {
      res["scaleDownGracePeriodSeconds"] = boost::any(*scaleDownGracePeriodSeconds);
    }
    if (scaleUpActivationReplicas) {
      res["scaleUpActivationReplicas"] = boost::any(*scaleUpActivationReplicas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scaleDownGracePeriodSeconds") != m.end() && !m["scaleDownGracePeriodSeconds"].empty()) {
      scaleDownGracePeriodSeconds = make_shared<long>(boost::any_cast<long>(m["scaleDownGracePeriodSeconds"]));
    }
    if (m.find("scaleUpActivationReplicas") != m.end() && !m["scaleUpActivationReplicas"].empty()) {
      scaleUpActivationReplicas = make_shared<long>(boost::any_cast<long>(m["scaleUpActivationReplicas"]));
    }
  }


  virtual ~UpdateServiceAutoScalerRequestBehaviorOnZero() = default;
};
class UpdateServiceAutoScalerRequestBehaviorScaleDown : public Darabonba::Model {
public:
  shared_ptr<long> stabilizationWindowSeconds{};

  UpdateServiceAutoScalerRequestBehaviorScaleDown() {}

  explicit UpdateServiceAutoScalerRequestBehaviorScaleDown(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stabilizationWindowSeconds) {
      res["stabilizationWindowSeconds"] = boost::any(*stabilizationWindowSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("stabilizationWindowSeconds") != m.end() && !m["stabilizationWindowSeconds"].empty()) {
      stabilizationWindowSeconds = make_shared<long>(boost::any_cast<long>(m["stabilizationWindowSeconds"]));
    }
  }


  virtual ~UpdateServiceAutoScalerRequestBehaviorScaleDown() = default;
};
class UpdateServiceAutoScalerRequestBehaviorScaleUp : public Darabonba::Model {
public:
  shared_ptr<long> stabilizationWindowSeconds{};

  UpdateServiceAutoScalerRequestBehaviorScaleUp() {}

  explicit UpdateServiceAutoScalerRequestBehaviorScaleUp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stabilizationWindowSeconds) {
      res["stabilizationWindowSeconds"] = boost::any(*stabilizationWindowSeconds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("stabilizationWindowSeconds") != m.end() && !m["stabilizationWindowSeconds"].empty()) {
      stabilizationWindowSeconds = make_shared<long>(boost::any_cast<long>(m["stabilizationWindowSeconds"]));
    }
  }


  virtual ~UpdateServiceAutoScalerRequestBehaviorScaleUp() = default;
};
class UpdateServiceAutoScalerRequestBehavior : public Darabonba::Model {
public:
  shared_ptr<UpdateServiceAutoScalerRequestBehaviorOnZero> onZero{};
  shared_ptr<UpdateServiceAutoScalerRequestBehaviorScaleDown> scaleDown{};
  shared_ptr<UpdateServiceAutoScalerRequestBehaviorScaleUp> scaleUp{};

  UpdateServiceAutoScalerRequestBehavior() {}

  explicit UpdateServiceAutoScalerRequestBehavior(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onZero) {
      res["onZero"] = onZero ? boost::any(onZero->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scaleDown) {
      res["scaleDown"] = scaleDown ? boost::any(scaleDown->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scaleUp) {
      res["scaleUp"] = scaleUp ? boost::any(scaleUp->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("onZero") != m.end() && !m["onZero"].empty()) {
      if (typeid(map<string, boost::any>) == m["onZero"].type()) {
        UpdateServiceAutoScalerRequestBehaviorOnZero model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["onZero"]));
        onZero = make_shared<UpdateServiceAutoScalerRequestBehaviorOnZero>(model1);
      }
    }
    if (m.find("scaleDown") != m.end() && !m["scaleDown"].empty()) {
      if (typeid(map<string, boost::any>) == m["scaleDown"].type()) {
        UpdateServiceAutoScalerRequestBehaviorScaleDown model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scaleDown"]));
        scaleDown = make_shared<UpdateServiceAutoScalerRequestBehaviorScaleDown>(model1);
      }
    }
    if (m.find("scaleUp") != m.end() && !m["scaleUp"].empty()) {
      if (typeid(map<string, boost::any>) == m["scaleUp"].type()) {
        UpdateServiceAutoScalerRequestBehaviorScaleUp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["scaleUp"]));
        scaleUp = make_shared<UpdateServiceAutoScalerRequestBehaviorScaleUp>(model1);
      }
    }
  }


  virtual ~UpdateServiceAutoScalerRequestBehavior() = default;
};
class UpdateServiceAutoScalerRequestScaleStrategies : public Darabonba::Model {
public:
  shared_ptr<string> metricName{};
  shared_ptr<string> service{};
  shared_ptr<double> threshold{};

  UpdateServiceAutoScalerRequestScaleStrategies() {}

  explicit UpdateServiceAutoScalerRequestScaleStrategies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricName) {
      res["metricName"] = boost::any(*metricName);
    }
    if (service) {
      res["service"] = boost::any(*service);
    }
    if (threshold) {
      res["threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("metricName") != m.end() && !m["metricName"].empty()) {
      metricName = make_shared<string>(boost::any_cast<string>(m["metricName"]));
    }
    if (m.find("service") != m.end() && !m["service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["service"]));
    }
    if (m.find("threshold") != m.end() && !m["threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["threshold"]));
    }
  }


  virtual ~UpdateServiceAutoScalerRequestScaleStrategies() = default;
};
class UpdateServiceAutoScalerRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateServiceAutoScalerRequestBehavior> behavior{};
  shared_ptr<long> max{};
  shared_ptr<long> min{};
  shared_ptr<vector<UpdateServiceAutoScalerRequestScaleStrategies>> scaleStrategies{};

  UpdateServiceAutoScalerRequest() {}

  explicit UpdateServiceAutoScalerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (behavior) {
      res["behavior"] = behavior ? boost::any(behavior->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (max) {
      res["max"] = boost::any(*max);
    }
    if (min) {
      res["min"] = boost::any(*min);
    }
    if (scaleStrategies) {
      vector<boost::any> temp1;
      for(auto item1:*scaleStrategies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["scaleStrategies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("behavior") != m.end() && !m["behavior"].empty()) {
      if (typeid(map<string, boost::any>) == m["behavior"].type()) {
        UpdateServiceAutoScalerRequestBehavior model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["behavior"]));
        behavior = make_shared<UpdateServiceAutoScalerRequestBehavior>(model1);
      }
    }
    if (m.find("max") != m.end() && !m["max"].empty()) {
      max = make_shared<long>(boost::any_cast<long>(m["max"]));
    }
    if (m.find("min") != m.end() && !m["min"].empty()) {
      min = make_shared<long>(boost::any_cast<long>(m["min"]));
    }
    if (m.find("scaleStrategies") != m.end() && !m["scaleStrategies"].empty()) {
      if (typeid(vector<boost::any>) == m["scaleStrategies"].type()) {
        vector<UpdateServiceAutoScalerRequestScaleStrategies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["scaleStrategies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceAutoScalerRequestScaleStrategies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scaleStrategies = make_shared<vector<UpdateServiceAutoScalerRequestScaleStrategies>>(expect1);
      }
    }
  }


  virtual ~UpdateServiceAutoScalerRequest() = default;
};
class UpdateServiceAutoScalerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateServiceAutoScalerResponseBody() {}

  explicit UpdateServiceAutoScalerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateServiceAutoScalerResponseBody() = default;
};
class UpdateServiceAutoScalerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceAutoScalerResponseBody> body{};

  UpdateServiceAutoScalerResponse() {}

  explicit UpdateServiceAutoScalerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceAutoScalerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceAutoScalerResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceAutoScalerResponse() = default;
};
class UpdateServiceCronScalerRequestScaleJobs : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> schedule{};
  shared_ptr<long> targetSize{};

  UpdateServiceCronScalerRequestScaleJobs() {}

  explicit UpdateServiceCronScalerRequestScaleJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (schedule) {
      res["Schedule"] = boost::any(*schedule);
    }
    if (targetSize) {
      res["TargetSize"] = boost::any(*targetSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Schedule") != m.end() && !m["Schedule"].empty()) {
      schedule = make_shared<string>(boost::any_cast<string>(m["Schedule"]));
    }
    if (m.find("TargetSize") != m.end() && !m["TargetSize"].empty()) {
      targetSize = make_shared<long>(boost::any_cast<long>(m["TargetSize"]));
    }
  }


  virtual ~UpdateServiceCronScalerRequestScaleJobs() = default;
};
class UpdateServiceCronScalerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> excludeDates{};
  shared_ptr<vector<UpdateServiceCronScalerRequestScaleJobs>> scaleJobs{};

  UpdateServiceCronScalerRequest() {}

  explicit UpdateServiceCronScalerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeDates) {
      res["ExcludeDates"] = boost::any(*excludeDates);
    }
    if (scaleJobs) {
      vector<boost::any> temp1;
      for(auto item1:*scaleJobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScaleJobs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeDates") != m.end() && !m["ExcludeDates"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExcludeDates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExcludeDates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      excludeDates = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScaleJobs") != m.end() && !m["ScaleJobs"].empty()) {
      if (typeid(vector<boost::any>) == m["ScaleJobs"].type()) {
        vector<UpdateServiceCronScalerRequestScaleJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScaleJobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServiceCronScalerRequestScaleJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scaleJobs = make_shared<vector<UpdateServiceCronScalerRequestScaleJobs>>(expect1);
      }
    }
  }


  virtual ~UpdateServiceCronScalerRequest() = default;
};
class UpdateServiceCronScalerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateServiceCronScalerResponseBody() {}

  explicit UpdateServiceCronScalerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateServiceCronScalerResponseBody() = default;
};
class UpdateServiceCronScalerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceCronScalerResponseBody> body{};

  UpdateServiceCronScalerResponse() {}

  explicit UpdateServiceCronScalerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceCronScalerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceCronScalerResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceCronScalerResponse() = default;
};
class UpdateServiceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> isolate{};

  UpdateServiceInstanceRequest() {}

  explicit UpdateServiceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolate) {
      res["Isolate"] = boost::any(*isolate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Isolate") != m.end() && !m["Isolate"].empty()) {
      isolate = make_shared<bool>(boost::any_cast<bool>(m["Isolate"]));
    }
  }


  virtual ~UpdateServiceInstanceRequest() = default;
};
class UpdateServiceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateServiceInstanceResponseBody() {}

  explicit UpdateServiceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateServiceInstanceResponseBody() = default;
};
class UpdateServiceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceInstanceResponseBody> body{};

  UpdateServiceInstanceResponse() {}

  explicit UpdateServiceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceInstanceResponse() = default;
};
class UpdateServiceLabelRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> labels{};

  UpdateServiceLabelRequest() {}

  explicit UpdateServiceLabelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~UpdateServiceLabelRequest() = default;
};
class UpdateServiceLabelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateServiceLabelResponseBody() {}

  explicit UpdateServiceLabelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateServiceLabelResponseBody() = default;
};
class UpdateServiceLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceLabelResponseBody> body{};

  UpdateServiceLabelResponse() {}

  explicit UpdateServiceLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceLabelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceLabelResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceLabelResponse() = default;
};
class UpdateServiceMirrorRequest : public Darabonba::Model {
public:
  shared_ptr<long> ratio{};
  shared_ptr<vector<string>> target{};

  UpdateServiceMirrorRequest() {}

  explicit UpdateServiceMirrorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ratio) {
      res["Ratio"] = boost::any(*ratio);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ratio") != m.end() && !m["Ratio"].empty()) {
      ratio = make_shared<long>(boost::any_cast<long>(m["Ratio"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Target"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Target"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      target = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateServiceMirrorRequest() = default;
};
class UpdateServiceMirrorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateServiceMirrorResponseBody() {}

  explicit UpdateServiceMirrorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateServiceMirrorResponseBody() = default;
};
class UpdateServiceMirrorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceMirrorResponseBody> body{};

  UpdateServiceMirrorResponse() {}

  explicit UpdateServiceMirrorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceMirrorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceMirrorResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceMirrorResponse() = default;
};
class UpdateServiceSafetyLockRequest : public Darabonba::Model {
public:
  shared_ptr<string> lock{};

  UpdateServiceSafetyLockRequest() {}

  explicit UpdateServiceSafetyLockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lock) {
      res["Lock"] = boost::any(*lock);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lock") != m.end() && !m["Lock"].empty()) {
      lock = make_shared<string>(boost::any_cast<string>(m["Lock"]));
    }
  }


  virtual ~UpdateServiceSafetyLockRequest() = default;
};
class UpdateServiceSafetyLockResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateServiceSafetyLockResponseBody() {}

  explicit UpdateServiceSafetyLockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateServiceSafetyLockResponseBody() = default;
};
class UpdateServiceSafetyLockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceSafetyLockResponseBody> body{};

  UpdateServiceSafetyLockResponse() {}

  explicit UpdateServiceSafetyLockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceSafetyLockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceSafetyLockResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceSafetyLockResponse() = default;
};
class UpdateServiceVersionRequest : public Darabonba::Model {
public:
  shared_ptr<long> version{};

  UpdateServiceVersionRequest() {}

  explicit UpdateServiceVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["Version"]));
    }
  }


  virtual ~UpdateServiceVersionRequest() = default;
};
class UpdateServiceVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateServiceVersionResponseBody() {}

  explicit UpdateServiceVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateServiceVersionResponseBody() = default;
};
class UpdateServiceVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServiceVersionResponseBody> body{};

  UpdateServiceVersionResponse() {}

  explicit UpdateServiceVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateServiceVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServiceVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServiceVersionResponse() = default;
};
class UpdateVirtualResourceRequestResources : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<long> priority{};
  shared_ptr<string> quotaId{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceId{};
  shared_ptr<double> spotPriceLimit{};

  UpdateVirtualResourceRequestResources() {}

  explicit UpdateVirtualResourceRequestResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (quotaId) {
      res["QuotaId"] = boost::any(*quotaId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("QuotaId") != m.end() && !m["QuotaId"].empty()) {
      quotaId = make_shared<string>(boost::any_cast<string>(m["QuotaId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
  }


  virtual ~UpdateVirtualResourceRequestResources() = default;
};
class UpdateVirtualResourceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> disableSpotProtectionPeriod{};
  shared_ptr<vector<UpdateVirtualResourceRequestResources>> resources{};
  shared_ptr<string> virtualResourceName{};

  UpdateVirtualResourceRequest() {}

  explicit UpdateVirtualResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableSpotProtectionPeriod) {
      res["DisableSpotProtectionPeriod"] = boost::any(*disableSpotProtectionPeriod);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (virtualResourceName) {
      res["VirtualResourceName"] = boost::any(*virtualResourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisableSpotProtectionPeriod") != m.end() && !m["DisableSpotProtectionPeriod"].empty()) {
      disableSpotProtectionPeriod = make_shared<bool>(boost::any_cast<bool>(m["DisableSpotProtectionPeriod"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<UpdateVirtualResourceRequestResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateVirtualResourceRequestResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<UpdateVirtualResourceRequestResources>>(expect1);
      }
    }
    if (m.find("VirtualResourceName") != m.end() && !m["VirtualResourceName"].empty()) {
      virtualResourceName = make_shared<string>(boost::any_cast<string>(m["VirtualResourceName"]));
    }
  }


  virtual ~UpdateVirtualResourceRequest() = default;
};
class UpdateVirtualResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateVirtualResourceResponseBody() {}

  explicit UpdateVirtualResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateVirtualResourceResponseBody() = default;
};
class UpdateVirtualResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateVirtualResourceResponseBody> body{};

  UpdateVirtualResourceResponse() {}

  explicit UpdateVirtualResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateVirtualResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVirtualResourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVirtualResourceResponse() = default;
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
  AttachGatewayDomainResponse attachGatewayDomainWithOptions(shared_ptr<string> ClusterId,
                                                             shared_ptr<string> GatewayId,
                                                             shared_ptr<AttachGatewayDomainRequest> tmpReq,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachGatewayDomainResponse attachGatewayDomain(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<AttachGatewayDomainRequest> request);
  CloneServiceResponse cloneServiceWithOptions(shared_ptr<string> ClusterId,
                                               shared_ptr<string> ServiceName,
                                               shared_ptr<CloneServiceRequest> tmpReq,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneServiceResponse cloneService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<CloneServiceRequest> request);
  CommitServiceResponse commitServiceWithOptions(shared_ptr<string> ClusterId,
                                                 shared_ptr<string> ServiceName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CommitServiceResponse commitService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  CreateAclPolicyResponse createAclPolicyWithOptions(shared_ptr<string> ClusterId,
                                                     shared_ptr<string> GatewayId,
                                                     shared_ptr<CreateAclPolicyRequest> tmpReq,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAclPolicyResponse createAclPolicy(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<CreateAclPolicyRequest> request);
  CreateAppServiceResponse createAppServiceWithOptions(shared_ptr<CreateAppServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppServiceResponse createAppService(shared_ptr<CreateAppServiceRequest> request);
  CreateBenchmarkTaskResponse createBenchmarkTaskWithOptions(shared_ptr<CreateBenchmarkTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBenchmarkTaskResponse createBenchmarkTask(shared_ptr<CreateBenchmarkTaskRequest> request);
  CreateGatewayResponse createGatewayWithOptions(shared_ptr<CreateGatewayRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewayResponse createGateway(shared_ptr<CreateGatewayRequest> request);
  CreateGatewayIntranetLinkedVpcResponse createGatewayIntranetLinkedVpcWithOptions(shared_ptr<string> ClusterId,
                                                                                   shared_ptr<string> GatewayId,
                                                                                   shared_ptr<CreateGatewayIntranetLinkedVpcRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewayIntranetLinkedVpcResponse createGatewayIntranetLinkedVpc(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<CreateGatewayIntranetLinkedVpcRequest> request);
  CreateGatewayIntranetLinkedVpcPeerResponse createGatewayIntranetLinkedVpcPeerWithOptions(shared_ptr<string> ClusterId,
                                                                                           shared_ptr<string> GatewayId,
                                                                                           shared_ptr<CreateGatewayIntranetLinkedVpcPeerRequest> tmpReq,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewayIntranetLinkedVpcPeerResponse createGatewayIntranetLinkedVpcPeer(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<CreateGatewayIntranetLinkedVpcPeerRequest> request);
  CreateResourceResponse createResourceWithOptions(shared_ptr<CreateResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceResponse createResource(shared_ptr<CreateResourceRequest> request);
  CreateResourceInstancesResponse createResourceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                     shared_ptr<string> ResourceId,
                                                                     shared_ptr<CreateResourceInstancesRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceInstancesResponse createResourceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<CreateResourceInstancesRequest> request);
  CreateResourceLogResponse createResourceLogWithOptions(shared_ptr<string> ClusterId,
                                                         shared_ptr<string> ResourceId,
                                                         shared_ptr<CreateResourceLogRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceLogResponse createResourceLog(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<CreateResourceLogRequest> request);
  CreateServiceResponse createServiceWithOptions(shared_ptr<CreateServiceRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceResponse createService(shared_ptr<CreateServiceRequest> request);
  CreateServiceAutoScalerResponse createServiceAutoScalerWithOptions(shared_ptr<string> ClusterId,
                                                                     shared_ptr<string> ServiceName,
                                                                     shared_ptr<CreateServiceAutoScalerRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceAutoScalerResponse createServiceAutoScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<CreateServiceAutoScalerRequest> request);
  CreateServiceCronScalerResponse createServiceCronScalerWithOptions(shared_ptr<string> ClusterId,
                                                                     shared_ptr<string> ServiceName,
                                                                     shared_ptr<CreateServiceCronScalerRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceCronScalerResponse createServiceCronScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<CreateServiceCronScalerRequest> request);
  CreateServiceMirrorResponse createServiceMirrorWithOptions(shared_ptr<string> ClusterId,
                                                             shared_ptr<string> ServiceName,
                                                             shared_ptr<CreateServiceMirrorRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceMirrorResponse createServiceMirror(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<CreateServiceMirrorRequest> request);
  CreateVirtualResourceResponse createVirtualResourceWithOptions(shared_ptr<CreateVirtualResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVirtualResourceResponse createVirtualResource(shared_ptr<CreateVirtualResourceRequest> request);
  DeleteAclPolicyResponse deleteAclPolicyWithOptions(shared_ptr<string> ClusterId,
                                                     shared_ptr<string> GatewayId,
                                                     shared_ptr<DeleteAclPolicyRequest> tmpReq,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAclPolicyResponse deleteAclPolicy(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<DeleteAclPolicyRequest> request);
  DeleteBenchmarkTaskResponse deleteBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                             shared_ptr<string> TaskName,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBenchmarkTaskResponse deleteBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName);
  DeleteGatewayResponse deleteGatewayWithOptions(shared_ptr<string> ClusterId,
                                                 shared_ptr<string> GatewayId,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayResponse deleteGateway(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId);
  DeleteGatewayIntranetLinkedVpcResponse deleteGatewayIntranetLinkedVpcWithOptions(shared_ptr<string> ClusterId,
                                                                                   shared_ptr<string> GatewayId,
                                                                                   shared_ptr<DeleteGatewayIntranetLinkedVpcRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayIntranetLinkedVpcResponse deleteGatewayIntranetLinkedVpc(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<DeleteGatewayIntranetLinkedVpcRequest> request);
  DeleteGatewayIntranetLinkedVpcPeerResponse deleteGatewayIntranetLinkedVpcPeerWithOptions(shared_ptr<string> ClusterId,
                                                                                           shared_ptr<string> GatewayId,
                                                                                           shared_ptr<DeleteGatewayIntranetLinkedVpcPeerRequest> tmpReq,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayIntranetLinkedVpcPeerResponse deleteGatewayIntranetLinkedVpcPeer(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<DeleteGatewayIntranetLinkedVpcPeerRequest> request);
  DeleteResourceResponse deleteResourceWithOptions(shared_ptr<string> ClusterId,
                                                   shared_ptr<string> ResourceId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceResponse deleteResource(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId);
  DeleteResourceDLinkResponse deleteResourceDLinkWithOptions(shared_ptr<string> ClusterId,
                                                             shared_ptr<string> ResourceId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceDLinkResponse deleteResourceDLink(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId);
  DeleteResourceInstanceLabelResponse deleteResourceInstanceLabelWithOptions(shared_ptr<string> ClusterId,
                                                                             shared_ptr<string> ResourceId,
                                                                             shared_ptr<DeleteResourceInstanceLabelRequest> tmpReq,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceInstanceLabelResponse deleteResourceInstanceLabel(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<DeleteResourceInstanceLabelRequest> request);
  DeleteResourceInstancesResponse deleteResourceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                     shared_ptr<string> ResourceId,
                                                                     shared_ptr<DeleteResourceInstancesRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceInstancesResponse deleteResourceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<DeleteResourceInstancesRequest> request);
  DeleteResourceLogResponse deleteResourceLogWithOptions(shared_ptr<string> ClusterId,
                                                         shared_ptr<string> ResourceId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceLogResponse deleteResourceLog(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId);
  DeleteServiceResponse deleteServiceWithOptions(shared_ptr<string> ClusterId,
                                                 shared_ptr<string> ServiceName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceResponse deleteService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  DeleteServiceAutoScalerResponse deleteServiceAutoScalerWithOptions(shared_ptr<string> ClusterId,
                                                                     shared_ptr<string> ServiceName,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceAutoScalerResponse deleteServiceAutoScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  DeleteServiceCronScalerResponse deleteServiceCronScalerWithOptions(shared_ptr<string> ClusterId,
                                                                     shared_ptr<string> ServiceName,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceCronScalerResponse deleteServiceCronScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  DeleteServiceInstancesResponse deleteServiceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                   shared_ptr<string> ServiceName,
                                                                   shared_ptr<DeleteServiceInstancesRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceInstancesResponse deleteServiceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DeleteServiceInstancesRequest> request);
  DeleteServiceLabelResponse deleteServiceLabelWithOptions(shared_ptr<string> ClusterId,
                                                           shared_ptr<string> ServiceName,
                                                           shared_ptr<DeleteServiceLabelRequest> tmpReq,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceLabelResponse deleteServiceLabel(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DeleteServiceLabelRequest> request);
  DeleteServiceMirrorResponse deleteServiceMirrorWithOptions(shared_ptr<string> ClusterId,
                                                             shared_ptr<string> ServiceName,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceMirrorResponse deleteServiceMirror(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  DeleteVirtualResourceResponse deleteVirtualResourceWithOptions(shared_ptr<string> ClusterId,
                                                                 shared_ptr<string> VirtualResourceId,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVirtualResourceResponse deleteVirtualResource(shared_ptr<string> ClusterId, shared_ptr<string> VirtualResourceId);
  DescribeBenchmarkTaskResponse describeBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                                 shared_ptr<string> TaskName,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBenchmarkTaskResponse describeBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName);
  DescribeBenchmarkTaskReportResponse describeBenchmarkTaskReportWithOptions(shared_ptr<string> ClusterId,
                                                                             shared_ptr<string> TaskName,
                                                                             shared_ptr<DescribeBenchmarkTaskReportRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBenchmarkTaskReportResponse describeBenchmarkTaskReport(shared_ptr<string> ClusterId, shared_ptr<string> TaskName, shared_ptr<DescribeBenchmarkTaskReportRequest> request);
  DescribeGatewayResponse describeGatewayWithOptions(shared_ptr<string> ClusterId,
                                                     shared_ptr<string> GatewayId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayResponse describeGateway(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId);
  DescribeGroupResponse describeGroupWithOptions(shared_ptr<string> ClusterId,
                                                 shared_ptr<string> GroupName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGroupResponse describeGroup(shared_ptr<string> ClusterId, shared_ptr<string> GroupName);
  DescribeGroupEndpointsResponse describeGroupEndpointsWithOptions(shared_ptr<string> ClusterId,
                                                                   shared_ptr<string> GroupName,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGroupEndpointsResponse describeGroupEndpoints(shared_ptr<string> ClusterId, shared_ptr<string> GroupName);
  DescribeMachineSpecResponse describeMachineSpecWithOptions(shared_ptr<DescribeMachineSpecRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMachineSpecResponse describeMachineSpec(shared_ptr<DescribeMachineSpecRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DescribeResourceResponse describeResourceWithOptions(shared_ptr<string> ClusterId,
                                                       shared_ptr<string> ResourceId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourceResponse describeResource(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId);
  DescribeResourceDLinkResponse describeResourceDLinkWithOptions(shared_ptr<string> ClusterId,
                                                                 shared_ptr<string> ResourceId,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourceDLinkResponse describeResourceDLink(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId);
  DescribeResourceLogResponse describeResourceLogWithOptions(shared_ptr<string> ClusterId,
                                                             shared_ptr<string> ResourceId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourceLogResponse describeResourceLog(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId);
  DescribeServiceResponse describeServiceWithOptions(shared_ptr<string> ClusterId,
                                                     shared_ptr<string> ServiceName,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceResponse describeService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  DescribeServiceAutoScalerResponse describeServiceAutoScalerWithOptions(shared_ptr<string> ClusterId,
                                                                         shared_ptr<string> ServiceName,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceAutoScalerResponse describeServiceAutoScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  DescribeServiceCronScalerResponse describeServiceCronScalerWithOptions(shared_ptr<string> ClusterId,
                                                                         shared_ptr<string> ServiceName,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceCronScalerResponse describeServiceCronScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  DescribeServiceDiagnosisResponse describeServiceDiagnosisWithOptions(shared_ptr<string> ClusterId,
                                                                       shared_ptr<string> ServiceName,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceDiagnosisResponse describeServiceDiagnosis(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  DescribeServiceEndpointsResponse describeServiceEndpointsWithOptions(shared_ptr<string> ClusterId,
                                                                       shared_ptr<string> ServiceName,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceEndpointsResponse describeServiceEndpoints(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  DescribeServiceEventResponse describeServiceEventWithOptions(shared_ptr<string> ClusterId,
                                                               shared_ptr<string> ServiceName,
                                                               shared_ptr<DescribeServiceEventRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceEventResponse describeServiceEvent(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DescribeServiceEventRequest> request);
  DescribeServiceInstanceDiagnosisResponse describeServiceInstanceDiagnosisWithOptions(shared_ptr<string> ClusterId,
                                                                                       shared_ptr<string> ServiceName,
                                                                                       shared_ptr<string> InstanceName,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceInstanceDiagnosisResponse describeServiceInstanceDiagnosis(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<string> InstanceName);
  DescribeServiceLogResponse describeServiceLogWithOptions(shared_ptr<string> ClusterId,
                                                           shared_ptr<string> ServiceName,
                                                           shared_ptr<DescribeServiceLogRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceLogResponse describeServiceLog(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DescribeServiceLogRequest> request);
  DescribeServiceMirrorResponse describeServiceMirrorWithOptions(shared_ptr<string> ClusterId,
                                                                 shared_ptr<string> ServiceName,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceMirrorResponse describeServiceMirror(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  DescribeServiceSignedUrlResponse describeServiceSignedUrlWithOptions(shared_ptr<string> ClusterId,
                                                                       shared_ptr<string> ServiceName,
                                                                       shared_ptr<DescribeServiceSignedUrlRequest> request,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceSignedUrlResponse describeServiceSignedUrl(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DescribeServiceSignedUrlRequest> request);
  DescribeSpotDiscountHistoryResponse describeSpotDiscountHistoryWithOptions(shared_ptr<DescribeSpotDiscountHistoryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSpotDiscountHistoryResponse describeSpotDiscountHistory(shared_ptr<DescribeSpotDiscountHistoryRequest> request);
  DescribeVirtualResourceResponse describeVirtualResourceWithOptions(shared_ptr<string> ClusterId,
                                                                     shared_ptr<string> VirtualResourceId,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVirtualResourceResponse describeVirtualResource(shared_ptr<string> ClusterId, shared_ptr<string> VirtualResourceId);
  DetachGatewayDomainResponse detachGatewayDomainWithOptions(shared_ptr<string> ClusterId,
                                                             shared_ptr<string> GatewayId,
                                                             shared_ptr<DetachGatewayDomainRequest> tmpReq,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachGatewayDomainResponse detachGatewayDomain(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<DetachGatewayDomainRequest> request);
  DevelopServiceResponse developServiceWithOptions(shared_ptr<string> ClusterId,
                                                   shared_ptr<string> ServiceName,
                                                   shared_ptr<DevelopServiceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DevelopServiceResponse developService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<DevelopServiceRequest> request);
  ListAclPolicyResponse listAclPolicyWithOptions(shared_ptr<string> ClusterId,
                                                 shared_ptr<string> GatewayId,
                                                 shared_ptr<ListAclPolicyRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAclPolicyResponse listAclPolicy(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<ListAclPolicyRequest> request);
  ListBenchmarkTaskResponse listBenchmarkTaskWithOptions(shared_ptr<ListBenchmarkTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBenchmarkTaskResponse listBenchmarkTask(shared_ptr<ListBenchmarkTaskRequest> request);
  ListGatewayResponse listGatewayWithOptions(shared_ptr<ListGatewayRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGatewayResponse listGateway(shared_ptr<ListGatewayRequest> request);
  ListGatewayDomainsResponse listGatewayDomainsWithOptions(shared_ptr<string> ClusterId,
                                                           shared_ptr<string> GatewayId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGatewayDomainsResponse listGatewayDomains(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId);
  ListGatewayIntranetLinkedVpcResponse listGatewayIntranetLinkedVpcWithOptions(shared_ptr<string> ClusterId,
                                                                               shared_ptr<string> GatewayId,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGatewayIntranetLinkedVpcResponse listGatewayIntranetLinkedVpc(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId);
  ListGatewayIntranetLinkedVpcPeerResponse listGatewayIntranetLinkedVpcPeerWithOptions(shared_ptr<string> ClusterId,
                                                                                       shared_ptr<string> GatewayId,
                                                                                       shared_ptr<ListGatewayIntranetLinkedVpcPeerRequest> request,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGatewayIntranetLinkedVpcPeerResponse listGatewayIntranetLinkedVpcPeer(shared_ptr<string> ClusterId, shared_ptr<string> GatewayId, shared_ptr<ListGatewayIntranetLinkedVpcPeerRequest> request);
  ListGatewayIntranetSupportedZoneResponse listGatewayIntranetSupportedZoneWithOptions(shared_ptr<string> GatewayId,
                                                                                       shared_ptr<string> ClusterId,
                                                                                       shared_ptr<map<string, string>> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGatewayIntranetSupportedZoneResponse listGatewayIntranetSupportedZone(shared_ptr<string> GatewayId, shared_ptr<string> ClusterId);
  ListGroupsResponse listGroupsWithOptions(shared_ptr<ListGroupsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupsResponse listGroups(shared_ptr<ListGroupsRequest> request);
  ListResourceInstanceWorkerResponse listResourceInstanceWorkerWithOptions(shared_ptr<string> ClusterId,
                                                                           shared_ptr<string> ResourceId,
                                                                           shared_ptr<string> InstanceName,
                                                                           shared_ptr<ListResourceInstanceWorkerRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceInstanceWorkerResponse listResourceInstanceWorker(shared_ptr<string> ClusterId,
                                                                shared_ptr<string> ResourceId,
                                                                shared_ptr<string> InstanceName,
                                                                shared_ptr<ListResourceInstanceWorkerRequest> request);
  ListResourceInstancesResponse listResourceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                                 shared_ptr<string> ResourceId,
                                                                 shared_ptr<ListResourceInstancesRequest> tmpReq,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceInstancesResponse listResourceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<ListResourceInstancesRequest> request);
  ListResourceServicesResponse listResourceServicesWithOptions(shared_ptr<string> ClusterId,
                                                               shared_ptr<string> ResourceId,
                                                               shared_ptr<ListResourceServicesRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourceServicesResponse listResourceServices(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<ListResourceServicesRequest> request);
  ListResourcesResponse listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesResponse listResources(shared_ptr<ListResourcesRequest> request);
  ListServiceContainersResponse listServiceContainersWithOptions(shared_ptr<string> ClusterId,
                                                                 shared_ptr<string> ServiceName,
                                                                 shared_ptr<string> InstanceName,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceContainersResponse listServiceContainers(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<string> InstanceName);
  ListServiceInstancesResponse listServiceInstancesWithOptions(shared_ptr<string> ClusterId,
                                                               shared_ptr<string> ServiceName,
                                                               shared_ptr<ListServiceInstancesRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceInstancesResponse listServiceInstances(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<ListServiceInstancesRequest> request);
  ListServiceVersionsResponse listServiceVersionsWithOptions(shared_ptr<string> ClusterId,
                                                             shared_ptr<string> ServiceName,
                                                             shared_ptr<ListServiceVersionsRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServiceVersionsResponse listServiceVersions(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<ListServiceVersionsRequest> request);
  ListServicesResponse listServicesWithOptions(shared_ptr<ListServicesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServicesResponse listServices(shared_ptr<ListServicesRequest> request);
  ListTenantAddonsResponse listTenantAddonsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTenantAddonsResponse listTenantAddons();
  ListVirtualResourceResponse listVirtualResourceWithOptions(shared_ptr<ListVirtualResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVirtualResourceResponse listVirtualResource(shared_ptr<ListVirtualResourceRequest> request);
  ReinstallTenantAddonResponse reinstallTenantAddonWithOptions(shared_ptr<string> ClusterId,
                                                               shared_ptr<string> TenantAddonName,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReinstallTenantAddonResponse reinstallTenantAddon(shared_ptr<string> ClusterId, shared_ptr<string> TenantAddonName);
  ReleaseServiceResponse releaseServiceWithOptions(shared_ptr<string> ClusterId,
                                                   shared_ptr<string> ServiceName,
                                                   shared_ptr<ReleaseServiceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseServiceResponse releaseService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<ReleaseServiceRequest> request);
  RestartServiceResponse restartServiceWithOptions(shared_ptr<string> ClusterId,
                                                   shared_ptr<string> ServiceName,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartServiceResponse restartService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  StartBenchmarkTaskResponse startBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                           shared_ptr<string> TaskName,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartBenchmarkTaskResponse startBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName);
  StartServiceResponse startServiceWithOptions(shared_ptr<string> ClusterId,
                                               shared_ptr<string> ServiceName,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartServiceResponse startService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  StopBenchmarkTaskResponse stopBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                         shared_ptr<string> TaskName,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopBenchmarkTaskResponse stopBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName);
  StopServiceResponse stopServiceWithOptions(shared_ptr<string> ClusterId,
                                             shared_ptr<string> ServiceName,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopServiceResponse stopService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName);
  UpdateAppServiceResponse updateAppServiceWithOptions(shared_ptr<string> ClusterId,
                                                       shared_ptr<string> ServiceName,
                                                       shared_ptr<UpdateAppServiceRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppServiceResponse updateAppService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateAppServiceRequest> request);
  UpdateBenchmarkTaskResponse updateBenchmarkTaskWithOptions(shared_ptr<string> ClusterId,
                                                             shared_ptr<string> TaskName,
                                                             shared_ptr<UpdateBenchmarkTaskRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBenchmarkTaskResponse updateBenchmarkTask(shared_ptr<string> ClusterId, shared_ptr<string> TaskName, shared_ptr<UpdateBenchmarkTaskRequest> request);
  UpdateGatewayResponse updateGatewayWithOptions(shared_ptr<string> GatewayId,
                                                 shared_ptr<string> ClusterId,
                                                 shared_ptr<UpdateGatewayRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGatewayResponse updateGateway(shared_ptr<string> GatewayId, shared_ptr<string> ClusterId, shared_ptr<UpdateGatewayRequest> request);
  UpdateGroupResponse updateGroupWithOptions(shared_ptr<string> ClusterId,
                                             shared_ptr<string> GroupName,
                                             shared_ptr<UpdateGroupRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGroupResponse updateGroup(shared_ptr<string> ClusterId, shared_ptr<string> GroupName, shared_ptr<UpdateGroupRequest> request);
  UpdateResourceResponse updateResourceWithOptions(shared_ptr<string> ClusterId,
                                                   shared_ptr<string> ResourceId,
                                                   shared_ptr<UpdateResourceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceResponse updateResource(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<UpdateResourceRequest> request);
  UpdateResourceDLinkResponse updateResourceDLinkWithOptions(shared_ptr<string> ClusterId,
                                                             shared_ptr<string> ResourceId,
                                                             shared_ptr<UpdateResourceDLinkRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceDLinkResponse updateResourceDLink(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<UpdateResourceDLinkRequest> request);
  UpdateResourceInstanceResponse updateResourceInstanceWithOptions(shared_ptr<string> ClusterId,
                                                                   shared_ptr<string> ResourceId,
                                                                   shared_ptr<string> InstanceId,
                                                                   shared_ptr<UpdateResourceInstanceRequest> request,
                                                                   shared_ptr<map<string, string>> headers,
                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceInstanceResponse updateResourceInstance(shared_ptr<string> ClusterId,
                                                        shared_ptr<string> ResourceId,
                                                        shared_ptr<string> InstanceId,
                                                        shared_ptr<UpdateResourceInstanceRequest> request);
  UpdateResourceInstanceLabelResponse updateResourceInstanceLabelWithOptions(shared_ptr<string> ClusterId,
                                                                             shared_ptr<string> ResourceId,
                                                                             shared_ptr<UpdateResourceInstanceLabelRequest> tmpReq,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceInstanceLabelResponse updateResourceInstanceLabel(shared_ptr<string> ClusterId, shared_ptr<string> ResourceId, shared_ptr<UpdateResourceInstanceLabelRequest> request);
  UpdateServiceResponse updateServiceWithOptions(shared_ptr<string> ClusterId,
                                                 shared_ptr<string> ServiceName,
                                                 shared_ptr<UpdateServiceRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceResponse updateService(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceRequest> request);
  UpdateServiceAutoScalerResponse updateServiceAutoScalerWithOptions(shared_ptr<string> ClusterId,
                                                                     shared_ptr<string> ServiceName,
                                                                     shared_ptr<UpdateServiceAutoScalerRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceAutoScalerResponse updateServiceAutoScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceAutoScalerRequest> request);
  UpdateServiceCronScalerResponse updateServiceCronScalerWithOptions(shared_ptr<string> ClusterId,
                                                                     shared_ptr<string> ServiceName,
                                                                     shared_ptr<UpdateServiceCronScalerRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceCronScalerResponse updateServiceCronScaler(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceCronScalerRequest> request);
  UpdateServiceInstanceResponse updateServiceInstanceWithOptions(shared_ptr<string> ClusterId,
                                                                 shared_ptr<string> ServiceName,
                                                                 shared_ptr<string> InstanceName,
                                                                 shared_ptr<UpdateServiceInstanceRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceInstanceResponse updateServiceInstance(shared_ptr<string> ClusterId,
                                                      shared_ptr<string> ServiceName,
                                                      shared_ptr<string> InstanceName,
                                                      shared_ptr<UpdateServiceInstanceRequest> request);
  UpdateServiceLabelResponse updateServiceLabelWithOptions(shared_ptr<string> ClusterId,
                                                           shared_ptr<string> ServiceName,
                                                           shared_ptr<UpdateServiceLabelRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceLabelResponse updateServiceLabel(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceLabelRequest> request);
  UpdateServiceMirrorResponse updateServiceMirrorWithOptions(shared_ptr<string> ClusterId,
                                                             shared_ptr<string> ServiceName,
                                                             shared_ptr<UpdateServiceMirrorRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceMirrorResponse updateServiceMirror(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceMirrorRequest> request);
  UpdateServiceSafetyLockResponse updateServiceSafetyLockWithOptions(shared_ptr<string> ClusterId,
                                                                     shared_ptr<string> ServiceName,
                                                                     shared_ptr<UpdateServiceSafetyLockRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceSafetyLockResponse updateServiceSafetyLock(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceSafetyLockRequest> request);
  UpdateServiceVersionResponse updateServiceVersionWithOptions(shared_ptr<string> ClusterId,
                                                               shared_ptr<string> ServiceName,
                                                               shared_ptr<UpdateServiceVersionRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServiceVersionResponse updateServiceVersion(shared_ptr<string> ClusterId, shared_ptr<string> ServiceName, shared_ptr<UpdateServiceVersionRequest> request);
  UpdateVirtualResourceResponse updateVirtualResourceWithOptions(shared_ptr<string> ClusterId,
                                                                 shared_ptr<string> VirtualResourceId,
                                                                 shared_ptr<UpdateVirtualResourceRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVirtualResourceResponse updateVirtualResource(shared_ptr<string> ClusterId, shared_ptr<string> VirtualResourceId, shared_ptr<UpdateVirtualResourceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Eas20210701

#endif
