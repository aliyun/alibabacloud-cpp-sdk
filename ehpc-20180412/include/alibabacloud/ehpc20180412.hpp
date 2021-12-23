// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EHPC20180412_H_
#define ALIBABACLOUD_EHPC20180412_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_EHPC20180412 {
class AddContainerAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerType{};
  shared_ptr<string> description{};
  shared_ptr<string> imageTag{};
  shared_ptr<string> name{};
  shared_ptr<string> repository{};

  AddContainerAppRequest() {}

  explicit AddContainerAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerType) {
      res["ContainerType"] = boost::any(*containerType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (repository) {
      res["Repository"] = boost::any(*repository);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerType") != m.end() && !m["ContainerType"].empty()) {
      containerType = make_shared<string>(boost::any_cast<string>(m["ContainerType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Repository") != m.end() && !m["Repository"].empty()) {
      repository = make_shared<string>(boost::any_cast<string>(m["Repository"]));
    }
  }


  virtual ~AddContainerAppRequest() = default;
};
class AddContainerAppResponseBodyContainerId : public Darabonba::Model {
public:
  shared_ptr<vector<string>> containerId{};

  AddContainerAppResponseBodyContainerId() {}

  explicit AddContainerAppResponseBodyContainerId(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerId) {
      res["ContainerId"] = boost::any(*containerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerId") != m.end() && !m["ContainerId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ContainerId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ContainerId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      containerId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddContainerAppResponseBodyContainerId() = default;
};
class AddContainerAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<AddContainerAppResponseBodyContainerId> containerId{};
  shared_ptr<string> requestId{};

  AddContainerAppResponseBody() {}

  explicit AddContainerAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerId) {
      res["ContainerId"] = containerId ? boost::any(containerId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerId") != m.end() && !m["ContainerId"].empty()) {
      if (typeid(map<string, boost::any>) == m["ContainerId"].type()) {
        AddContainerAppResponseBodyContainerId model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ContainerId"]));
        containerId = make_shared<AddContainerAppResponseBodyContainerId>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddContainerAppResponseBody() = default;
};
class AddContainerAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddContainerAppResponseBody> body{};

  AddContainerAppResponse() {}

  explicit AddContainerAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddContainerAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddContainerAppResponseBody>(model1);
      }
    }
  }


  virtual ~AddContainerAppResponse() = default;
};
class AddExistedNodesRequestInstance : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  AddExistedNodesRequestInstance() {}

  explicit AddExistedNodesRequestInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddExistedNodesRequestInstance() = default;
};
class AddExistedNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<vector<AddExistedNodesRequestInstance>> instance{};
  shared_ptr<string> jobQueue{};

  AddExistedNodesRequest() {}

  explicit AddExistedNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    if (jobQueue) {
      res["JobQueue"] = boost::any(*jobQueue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<AddExistedNodesRequestInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddExistedNodesRequestInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<AddExistedNodesRequestInstance>>(expect1);
      }
    }
    if (m.find("JobQueue") != m.end() && !m["JobQueue"].empty()) {
      jobQueue = make_shared<string>(boost::any_cast<string>(m["JobQueue"]));
    }
  }


  virtual ~AddExistedNodesRequest() = default;
};
class AddExistedNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  AddExistedNodesResponseBody() {}

  explicit AddExistedNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~AddExistedNodesResponseBody() = default;
};
class AddExistedNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddExistedNodesResponseBody> body{};

  AddExistedNodesResponse() {}

  explicit AddExistedNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddExistedNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddExistedNodesResponseBody>(model1);
      }
    }
  }


  virtual ~AddExistedNodesResponse() = default;
};
class AddLocalNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> nodes{};

  AddLocalNodesRequest() {}

  explicit AddLocalNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodes = make_shared<string>(boost::any_cast<string>(m["Nodes"]));
    }
  }


  virtual ~AddLocalNodesRequest() = default;
};
class AddLocalNodesResponseBodyInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};

  AddLocalNodesResponseBodyInstanceIds() {}

  explicit AddLocalNodesResponseBodyInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddLocalNodesResponseBodyInstanceIds() = default;
};
class AddLocalNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<AddLocalNodesResponseBodyInstanceIds> instanceIds{};
  shared_ptr<string> requestId{};

  AddLocalNodesResponseBody() {}

  explicit AddLocalNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = instanceIds ? boost::any(instanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceIds"].type()) {
        AddLocalNodesResponseBodyInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceIds"]));
        instanceIds = make_shared<AddLocalNodesResponseBodyInstanceIds>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddLocalNodesResponseBody() = default;
};
class AddLocalNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddLocalNodesResponseBody> body{};

  AddLocalNodesResponse() {}

  explicit AddLocalNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddLocalNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddLocalNodesResponseBody>(model1);
      }
    }
  }


  virtual ~AddLocalNodesResponse() = default;
};
class AddNodesRequestDataDisks : public Darabonba::Model {
public:
  shared_ptr<string> dataDiskCategory{};
  shared_ptr<bool> dataDiskDeleteWithInstance{};
  shared_ptr<bool> dataDiskEncrypted{};
  shared_ptr<string> dataDiskKMSKeyId{};
  shared_ptr<string> dataDiskPerformanceLevel{};
  shared_ptr<long> dataDiskSize{};

  AddNodesRequestDataDisks() {}

  explicit AddNodesRequestDataDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDiskCategory) {
      res["DataDiskCategory"] = boost::any(*dataDiskCategory);
    }
    if (dataDiskDeleteWithInstance) {
      res["DataDiskDeleteWithInstance"] = boost::any(*dataDiskDeleteWithInstance);
    }
    if (dataDiskEncrypted) {
      res["DataDiskEncrypted"] = boost::any(*dataDiskEncrypted);
    }
    if (dataDiskKMSKeyId) {
      res["DataDiskKMSKeyId"] = boost::any(*dataDiskKMSKeyId);
    }
    if (dataDiskPerformanceLevel) {
      res["DataDiskPerformanceLevel"] = boost::any(*dataDiskPerformanceLevel);
    }
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDiskCategory") != m.end() && !m["DataDiskCategory"].empty()) {
      dataDiskCategory = make_shared<string>(boost::any_cast<string>(m["DataDiskCategory"]));
    }
    if (m.find("DataDiskDeleteWithInstance") != m.end() && !m["DataDiskDeleteWithInstance"].empty()) {
      dataDiskDeleteWithInstance = make_shared<bool>(boost::any_cast<bool>(m["DataDiskDeleteWithInstance"]));
    }
    if (m.find("DataDiskEncrypted") != m.end() && !m["DataDiskEncrypted"].empty()) {
      dataDiskEncrypted = make_shared<bool>(boost::any_cast<bool>(m["DataDiskEncrypted"]));
    }
    if (m.find("DataDiskKMSKeyId") != m.end() && !m["DataDiskKMSKeyId"].empty()) {
      dataDiskKMSKeyId = make_shared<string>(boost::any_cast<string>(m["DataDiskKMSKeyId"]));
    }
    if (m.find("DataDiskPerformanceLevel") != m.end() && !m["DataDiskPerformanceLevel"].empty()) {
      dataDiskPerformanceLevel = make_shared<string>(boost::any_cast<string>(m["DataDiskPerformanceLevel"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<long>(boost::any_cast<long>(m["DataDiskSize"]));
    }
  }


  virtual ~AddNodesRequestDataDisks() = default;
};
class AddNodesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allocatePublicAddress{};
  shared_ptr<string> autoRenew{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<bool> computeEnableHt{};
  shared_ptr<string> computeSpotPriceLimit{};
  shared_ptr<string> computeSpotStrategy{};
  shared_ptr<long> count{};
  shared_ptr<string> createMode{};
  shared_ptr<vector<AddNodesRequestDataDisks>> dataDisks{};
  shared_ptr<string> ecsChargeType{};
  shared_ptr<string> hostNamePrefix{};
  shared_ptr<string> hostNameSuffix{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandWidthIn{};
  shared_ptr<long> internetMaxBandWidthOut{};
  shared_ptr<string> jobQueue{};
  shared_ptr<long> minCount{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<bool> sync{};
  shared_ptr<string> systemDiskLevel{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<string> systemDiskType{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  AddNodesRequest() {}

  explicit AddNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocatePublicAddress) {
      res["AllocatePublicAddress"] = boost::any(*allocatePublicAddress);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewPeriod) {
      res["AutoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (computeEnableHt) {
      res["ComputeEnableHt"] = boost::any(*computeEnableHt);
    }
    if (computeSpotPriceLimit) {
      res["ComputeSpotPriceLimit"] = boost::any(*computeSpotPriceLimit);
    }
    if (computeSpotStrategy) {
      res["ComputeSpotStrategy"] = boost::any(*computeSpotStrategy);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (dataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisks"] = boost::any(temp1);
    }
    if (ecsChargeType) {
      res["EcsChargeType"] = boost::any(*ecsChargeType);
    }
    if (hostNamePrefix) {
      res["HostNamePrefix"] = boost::any(*hostNamePrefix);
    }
    if (hostNameSuffix) {
      res["HostNameSuffix"] = boost::any(*hostNameSuffix);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandWidthIn) {
      res["InternetMaxBandWidthIn"] = boost::any(*internetMaxBandWidthIn);
    }
    if (internetMaxBandWidthOut) {
      res["InternetMaxBandWidthOut"] = boost::any(*internetMaxBandWidthOut);
    }
    if (jobQueue) {
      res["JobQueue"] = boost::any(*jobQueue);
    }
    if (minCount) {
      res["MinCount"] = boost::any(*minCount);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (sync) {
      res["Sync"] = boost::any(*sync);
    }
    if (systemDiskLevel) {
      res["SystemDiskLevel"] = boost::any(*systemDiskLevel);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (systemDiskType) {
      res["SystemDiskType"] = boost::any(*systemDiskType);
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
    if (m.find("AllocatePublicAddress") != m.end() && !m["AllocatePublicAddress"].empty()) {
      allocatePublicAddress = make_shared<bool>(boost::any_cast<bool>(m["AllocatePublicAddress"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewPeriod") != m.end() && !m["AutoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["AutoRenewPeriod"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ComputeEnableHt") != m.end() && !m["ComputeEnableHt"].empty()) {
      computeEnableHt = make_shared<bool>(boost::any_cast<bool>(m["ComputeEnableHt"]));
    }
    if (m.find("ComputeSpotPriceLimit") != m.end() && !m["ComputeSpotPriceLimit"].empty()) {
      computeSpotPriceLimit = make_shared<string>(boost::any_cast<string>(m["ComputeSpotPriceLimit"]));
    }
    if (m.find("ComputeSpotStrategy") != m.end() && !m["ComputeSpotStrategy"].empty()) {
      computeSpotStrategy = make_shared<string>(boost::any_cast<string>(m["ComputeSpotStrategy"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisks"].type()) {
        vector<AddNodesRequestDataDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddNodesRequestDataDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisks = make_shared<vector<AddNodesRequestDataDisks>>(expect1);
      }
    }
    if (m.find("EcsChargeType") != m.end() && !m["EcsChargeType"].empty()) {
      ecsChargeType = make_shared<string>(boost::any_cast<string>(m["EcsChargeType"]));
    }
    if (m.find("HostNamePrefix") != m.end() && !m["HostNamePrefix"].empty()) {
      hostNamePrefix = make_shared<string>(boost::any_cast<string>(m["HostNamePrefix"]));
    }
    if (m.find("HostNameSuffix") != m.end() && !m["HostNameSuffix"].empty()) {
      hostNameSuffix = make_shared<string>(boost::any_cast<string>(m["HostNameSuffix"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("InternetMaxBandWidthIn") != m.end() && !m["InternetMaxBandWidthIn"].empty()) {
      internetMaxBandWidthIn = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandWidthIn"]));
    }
    if (m.find("InternetMaxBandWidthOut") != m.end() && !m["InternetMaxBandWidthOut"].empty()) {
      internetMaxBandWidthOut = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandWidthOut"]));
    }
    if (m.find("JobQueue") != m.end() && !m["JobQueue"].empty()) {
      jobQueue = make_shared<string>(boost::any_cast<string>(m["JobQueue"]));
    }
    if (m.find("MinCount") != m.end() && !m["MinCount"].empty()) {
      minCount = make_shared<long>(boost::any_cast<long>(m["MinCount"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("Sync") != m.end() && !m["Sync"].empty()) {
      sync = make_shared<bool>(boost::any_cast<bool>(m["Sync"]));
    }
    if (m.find("SystemDiskLevel") != m.end() && !m["SystemDiskLevel"].empty()) {
      systemDiskLevel = make_shared<string>(boost::any_cast<string>(m["SystemDiskLevel"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("SystemDiskType") != m.end() && !m["SystemDiskType"].empty()) {
      systemDiskType = make_shared<string>(boost::any_cast<string>(m["SystemDiskType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~AddNodesRequest() = default;
};
class AddNodesResponseBodyInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};

  AddNodesResponseBodyInstanceIds() {}

  explicit AddNodesResponseBodyInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddNodesResponseBodyInstanceIds() = default;
};
class AddNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<AddNodesResponseBodyInstanceIds> instanceIds{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  AddNodesResponseBody() {}

  explicit AddNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = instanceIds ? boost::any(instanceIds->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceIds"].type()) {
        AddNodesResponseBodyInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceIds"]));
        instanceIds = make_shared<AddNodesResponseBodyInstanceIds>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~AddNodesResponseBody() = default;
};
class AddNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddNodesResponseBody> body{};

  AddNodesResponse() {}

  explicit AddNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddNodesResponseBody>(model1);
      }
    }
  }


  virtual ~AddNodesResponse() = default;
};
class AddQueueRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> queueName{};

  AddQueueRequest() {}

  explicit AddQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddQueueRequest() = default;
};
class AddQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddQueueResponseBody() {}

  explicit AddQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddQueueResponseBody() = default;
};
class AddQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddQueueResponseBody> body{};

  AddQueueResponse() {}

  explicit AddQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddQueueResponseBody>(model1);
      }
    }
  }


  virtual ~AddQueueResponse() = default;
};
class AddSecurityGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> securityGroupId{};

  AddSecurityGroupRequest() {}

  explicit AddSecurityGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
  }


  virtual ~AddSecurityGroupRequest() = default;
};
class AddSecurityGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddSecurityGroupResponseBody() {}

  explicit AddSecurityGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddSecurityGroupResponseBody() = default;
};
class AddSecurityGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddSecurityGroupResponseBody> body{};

  AddSecurityGroupResponse() {}

  explicit AddSecurityGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddSecurityGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSecurityGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddSecurityGroupResponse() = default;
};
class AddUsersRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> group{};
  shared_ptr<string> name{};
  shared_ptr<string> password{};

  AddUsersRequestUser() {}

  explicit AddUsersRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
  }


  virtual ~AddUsersRequestUser() = default;
};
class AddUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<AddUsersRequestUser>> user{};

  AddUsersRequest() {}

  explicit AddUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<AddUsersRequestUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddUsersRequestUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<AddUsersRequestUser>>(expect1);
      }
    }
  }


  virtual ~AddUsersRequest() = default;
};
class AddUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddUsersResponseBody() {}

  explicit AddUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUsersResponseBody() = default;
};
class AddUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddUsersResponseBody> body{};

  AddUsersResponse() {}

  explicit AddUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUsersResponseBody>(model1);
      }
    }
  }


  virtual ~AddUsersResponse() = default;
};
class ApplyNodesRequestInstanceTypeModel : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<double> maxPrice{};
  shared_ptr<string> targetImageId{};

  ApplyNodesRequestInstanceTypeModel() {}

  explicit ApplyNodesRequestInstanceTypeModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (maxPrice) {
      res["MaxPrice"] = boost::any(*maxPrice);
    }
    if (targetImageId) {
      res["TargetImageId"] = boost::any(*targetImageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("MaxPrice") != m.end() && !m["MaxPrice"].empty()) {
      maxPrice = make_shared<double>(boost::any_cast<double>(m["MaxPrice"]));
    }
    if (m.find("TargetImageId") != m.end() && !m["TargetImageId"].empty()) {
      targetImageId = make_shared<string>(boost::any_cast<string>(m["TargetImageId"]));
    }
  }


  virtual ~ApplyNodesRequestInstanceTypeModel() = default;
};
class ApplyNodesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ApplyNodesRequestTag() {}

  explicit ApplyNodesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ApplyNodesRequestTag() = default;
};
class ApplyNodesRequestZoneInfos : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  ApplyNodesRequestZoneInfos() {}

  explicit ApplyNodesRequestZoneInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ApplyNodesRequestZoneInfos() = default;
};
class ApplyNodesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allocatePublicAddress{};
  shared_ptr<string> clusterId{};
  shared_ptr<double> computeSpotPriceLimit{};
  shared_ptr<string> computeSpotStrategy{};
  shared_ptr<long> cores{};
  shared_ptr<string> hostNamePrefix{};
  shared_ptr<string> hostNameSuffix{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceFamilyLevel{};
  shared_ptr<vector<ApplyNodesRequestInstanceTypeModel>> instanceTypeModel{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandWidthIn{};
  shared_ptr<long> internetMaxBandWidthOut{};
  shared_ptr<long> interval{};
  shared_ptr<long> memory{};
  shared_ptr<string> priorityStrategy{};
  shared_ptr<string> resourceAmountType{};
  shared_ptr<long> round{};
  shared_ptr<bool> strictResourceProvision{};
  shared_ptr<bool> strictSatisfiedTargetCapacity{};
  shared_ptr<string> systemDiskLevel{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<string> systemDiskType{};
  shared_ptr<vector<ApplyNodesRequestTag>> tag{};
  shared_ptr<long> targetCapacity{};
  shared_ptr<vector<ApplyNodesRequestZoneInfos>> zoneInfos{};

  ApplyNodesRequest() {}

  explicit ApplyNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocatePublicAddress) {
      res["AllocatePublicAddress"] = boost::any(*allocatePublicAddress);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (computeSpotPriceLimit) {
      res["ComputeSpotPriceLimit"] = boost::any(*computeSpotPriceLimit);
    }
    if (computeSpotStrategy) {
      res["ComputeSpotStrategy"] = boost::any(*computeSpotStrategy);
    }
    if (cores) {
      res["Cores"] = boost::any(*cores);
    }
    if (hostNamePrefix) {
      res["HostNamePrefix"] = boost::any(*hostNamePrefix);
    }
    if (hostNameSuffix) {
      res["HostNameSuffix"] = boost::any(*hostNameSuffix);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (instanceFamilyLevel) {
      res["InstanceFamilyLevel"] = boost::any(*instanceFamilyLevel);
    }
    if (instanceTypeModel) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTypeModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTypeModel"] = boost::any(temp1);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandWidthIn) {
      res["InternetMaxBandWidthIn"] = boost::any(*internetMaxBandWidthIn);
    }
    if (internetMaxBandWidthOut) {
      res["InternetMaxBandWidthOut"] = boost::any(*internetMaxBandWidthOut);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (priorityStrategy) {
      res["PriorityStrategy"] = boost::any(*priorityStrategy);
    }
    if (resourceAmountType) {
      res["ResourceAmountType"] = boost::any(*resourceAmountType);
    }
    if (round) {
      res["Round"] = boost::any(*round);
    }
    if (strictResourceProvision) {
      res["StrictResourceProvision"] = boost::any(*strictResourceProvision);
    }
    if (strictSatisfiedTargetCapacity) {
      res["StrictSatisfiedTargetCapacity"] = boost::any(*strictSatisfiedTargetCapacity);
    }
    if (systemDiskLevel) {
      res["SystemDiskLevel"] = boost::any(*systemDiskLevel);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (systemDiskType) {
      res["SystemDiskType"] = boost::any(*systemDiskType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (targetCapacity) {
      res["TargetCapacity"] = boost::any(*targetCapacity);
    }
    if (zoneInfos) {
      vector<boost::any> temp1;
      for(auto item1:*zoneInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocatePublicAddress") != m.end() && !m["AllocatePublicAddress"].empty()) {
      allocatePublicAddress = make_shared<bool>(boost::any_cast<bool>(m["AllocatePublicAddress"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ComputeSpotPriceLimit") != m.end() && !m["ComputeSpotPriceLimit"].empty()) {
      computeSpotPriceLimit = make_shared<double>(boost::any_cast<double>(m["ComputeSpotPriceLimit"]));
    }
    if (m.find("ComputeSpotStrategy") != m.end() && !m["ComputeSpotStrategy"].empty()) {
      computeSpotStrategy = make_shared<string>(boost::any_cast<string>(m["ComputeSpotStrategy"]));
    }
    if (m.find("Cores") != m.end() && !m["Cores"].empty()) {
      cores = make_shared<long>(boost::any_cast<long>(m["Cores"]));
    }
    if (m.find("HostNamePrefix") != m.end() && !m["HostNamePrefix"].empty()) {
      hostNamePrefix = make_shared<string>(boost::any_cast<string>(m["HostNamePrefix"]));
    }
    if (m.find("HostNameSuffix") != m.end() && !m["HostNameSuffix"].empty()) {
      hostNameSuffix = make_shared<string>(boost::any_cast<string>(m["HostNameSuffix"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InstanceFamilyLevel") != m.end() && !m["InstanceFamilyLevel"].empty()) {
      instanceFamilyLevel = make_shared<string>(boost::any_cast<string>(m["InstanceFamilyLevel"]));
    }
    if (m.find("InstanceTypeModel") != m.end() && !m["InstanceTypeModel"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTypeModel"].type()) {
        vector<ApplyNodesRequestInstanceTypeModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTypeModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyNodesRequestInstanceTypeModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTypeModel = make_shared<vector<ApplyNodesRequestInstanceTypeModel>>(expect1);
      }
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("InternetMaxBandWidthIn") != m.end() && !m["InternetMaxBandWidthIn"].empty()) {
      internetMaxBandWidthIn = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandWidthIn"]));
    }
    if (m.find("InternetMaxBandWidthOut") != m.end() && !m["InternetMaxBandWidthOut"].empty()) {
      internetMaxBandWidthOut = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandWidthOut"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("PriorityStrategy") != m.end() && !m["PriorityStrategy"].empty()) {
      priorityStrategy = make_shared<string>(boost::any_cast<string>(m["PriorityStrategy"]));
    }
    if (m.find("ResourceAmountType") != m.end() && !m["ResourceAmountType"].empty()) {
      resourceAmountType = make_shared<string>(boost::any_cast<string>(m["ResourceAmountType"]));
    }
    if (m.find("Round") != m.end() && !m["Round"].empty()) {
      round = make_shared<long>(boost::any_cast<long>(m["Round"]));
    }
    if (m.find("StrictResourceProvision") != m.end() && !m["StrictResourceProvision"].empty()) {
      strictResourceProvision = make_shared<bool>(boost::any_cast<bool>(m["StrictResourceProvision"]));
    }
    if (m.find("StrictSatisfiedTargetCapacity") != m.end() && !m["StrictSatisfiedTargetCapacity"].empty()) {
      strictSatisfiedTargetCapacity = make_shared<bool>(boost::any_cast<bool>(m["StrictSatisfiedTargetCapacity"]));
    }
    if (m.find("SystemDiskLevel") != m.end() && !m["SystemDiskLevel"].empty()) {
      systemDiskLevel = make_shared<string>(boost::any_cast<string>(m["SystemDiskLevel"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("SystemDiskType") != m.end() && !m["SystemDiskType"].empty()) {
      systemDiskType = make_shared<string>(boost::any_cast<string>(m["SystemDiskType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ApplyNodesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyNodesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ApplyNodesRequestTag>>(expect1);
      }
    }
    if (m.find("TargetCapacity") != m.end() && !m["TargetCapacity"].empty()) {
      targetCapacity = make_shared<long>(boost::any_cast<long>(m["TargetCapacity"]));
    }
    if (m.find("ZoneInfos") != m.end() && !m["ZoneInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneInfos"].type()) {
        vector<ApplyNodesRequestZoneInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ApplyNodesRequestZoneInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneInfos = make_shared<vector<ApplyNodesRequestZoneInfos>>(expect1);
      }
    }
  }


  virtual ~ApplyNodesRequest() = default;
};
class ApplyNodesResponseBodyInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};

  ApplyNodesResponseBodyInstanceIds() {}

  explicit ApplyNodesResponseBodyInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ApplyNodesResponseBodyInstanceIds() = default;
};
class ApplyNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<ApplyNodesResponseBodyInstanceIds> instanceIds{};
  shared_ptr<string> requestId{};
  shared_ptr<long> satisfiedAmount{};
  shared_ptr<string> taskId{};

  ApplyNodesResponseBody() {}

  explicit ApplyNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (instanceIds) {
      res["InstanceIds"] = instanceIds ? boost::any(instanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (satisfiedAmount) {
      res["SatisfiedAmount"] = boost::any(*satisfiedAmount);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceIds"].type()) {
        ApplyNodesResponseBodyInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceIds"]));
        instanceIds = make_shared<ApplyNodesResponseBodyInstanceIds>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SatisfiedAmount") != m.end() && !m["SatisfiedAmount"].empty()) {
      satisfiedAmount = make_shared<long>(boost::any_cast<long>(m["SatisfiedAmount"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ApplyNodesResponseBody() = default;
};
class ApplyNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ApplyNodesResponseBody> body{};

  ApplyNodesResponse() {}

  explicit ApplyNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ApplyNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyNodesResponse() = default;
};
class CreateClusterRequestEcsOrderCompute : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceType{};

  CreateClusterRequestEcsOrderCompute() {}

  explicit CreateClusterRequestEcsOrderCompute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~CreateClusterRequestEcsOrderCompute() = default;
};
class CreateClusterRequestEcsOrderLogin : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceType{};

  CreateClusterRequestEcsOrderLogin() {}

  explicit CreateClusterRequestEcsOrderLogin(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~CreateClusterRequestEcsOrderLogin() = default;
};
class CreateClusterRequestEcsOrderManager : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceType{};

  CreateClusterRequestEcsOrderManager() {}

  explicit CreateClusterRequestEcsOrderManager(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~CreateClusterRequestEcsOrderManager() = default;
};
class CreateClusterRequestEcsOrder : public Darabonba::Model {
public:
  shared_ptr<CreateClusterRequestEcsOrderCompute> compute{};
  shared_ptr<CreateClusterRequestEcsOrderLogin> login{};
  shared_ptr<CreateClusterRequestEcsOrderManager> manager{};

  CreateClusterRequestEcsOrder() {}

  explicit CreateClusterRequestEcsOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!compute) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("compute is required.")));
    }
    if (!login) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("login is required.")));
    }
    if (!manager) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("manager is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compute) {
      res["Compute"] = compute ? boost::any(compute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (login) {
      res["Login"] = login ? boost::any(login->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (manager) {
      res["Manager"] = manager ? boost::any(manager->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compute") != m.end() && !m["Compute"].empty()) {
      if (typeid(map<string, boost::any>) == m["Compute"].type()) {
        CreateClusterRequestEcsOrderCompute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Compute"]));
        compute = make_shared<CreateClusterRequestEcsOrderCompute>(model1);
      }
    }
    if (m.find("Login") != m.end() && !m["Login"].empty()) {
      if (typeid(map<string, boost::any>) == m["Login"].type()) {
        CreateClusterRequestEcsOrderLogin model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Login"]));
        login = make_shared<CreateClusterRequestEcsOrderLogin>(model1);
      }
    }
    if (m.find("Manager") != m.end() && !m["Manager"].empty()) {
      if (typeid(map<string, boost::any>) == m["Manager"].type()) {
        CreateClusterRequestEcsOrderManager model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Manager"]));
        manager = make_shared<CreateClusterRequestEcsOrderManager>(model1);
      }
    }
  }


  virtual ~CreateClusterRequestEcsOrder() = default;
};
class CreateClusterRequestAdditionalVolumesRoles : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  CreateClusterRequestAdditionalVolumesRoles() {}

  explicit CreateClusterRequestAdditionalVolumesRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateClusterRequestAdditionalVolumesRoles() = default;
};
class CreateClusterRequestAdditionalVolumes : public Darabonba::Model {
public:
  shared_ptr<string> jobQueue{};
  shared_ptr<string> localDirectory{};
  shared_ptr<string> location{};
  shared_ptr<string> remoteDirectory{};
  shared_ptr<vector<CreateClusterRequestAdditionalVolumesRoles>> roles{};
  shared_ptr<string> volumeId{};
  shared_ptr<string> volumeMountpoint{};
  shared_ptr<string> volumeProtocol{};
  shared_ptr<string> volumeType{};

  CreateClusterRequestAdditionalVolumes() {}

  explicit CreateClusterRequestAdditionalVolumes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobQueue) {
      res["JobQueue"] = boost::any(*jobQueue);
    }
    if (localDirectory) {
      res["LocalDirectory"] = boost::any(*localDirectory);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (remoteDirectory) {
      res["RemoteDirectory"] = boost::any(*remoteDirectory);
    }
    if (roles) {
      vector<boost::any> temp1;
      for(auto item1:*roles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Roles"] = boost::any(temp1);
    }
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    if (volumeMountpoint) {
      res["VolumeMountpoint"] = boost::any(*volumeMountpoint);
    }
    if (volumeProtocol) {
      res["VolumeProtocol"] = boost::any(*volumeProtocol);
    }
    if (volumeType) {
      res["VolumeType"] = boost::any(*volumeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobQueue") != m.end() && !m["JobQueue"].empty()) {
      jobQueue = make_shared<string>(boost::any_cast<string>(m["JobQueue"]));
    }
    if (m.find("LocalDirectory") != m.end() && !m["LocalDirectory"].empty()) {
      localDirectory = make_shared<string>(boost::any_cast<string>(m["LocalDirectory"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("RemoteDirectory") != m.end() && !m["RemoteDirectory"].empty()) {
      remoteDirectory = make_shared<string>(boost::any_cast<string>(m["RemoteDirectory"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<CreateClusterRequestAdditionalVolumesRoles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Roles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestAdditionalVolumesRoles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roles = make_shared<vector<CreateClusterRequestAdditionalVolumesRoles>>(expect1);
      }
    }
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<string>(boost::any_cast<string>(m["VolumeId"]));
    }
    if (m.find("VolumeMountpoint") != m.end() && !m["VolumeMountpoint"].empty()) {
      volumeMountpoint = make_shared<string>(boost::any_cast<string>(m["VolumeMountpoint"]));
    }
    if (m.find("VolumeProtocol") != m.end() && !m["VolumeProtocol"].empty()) {
      volumeProtocol = make_shared<string>(boost::any_cast<string>(m["VolumeProtocol"]));
    }
    if (m.find("VolumeType") != m.end() && !m["VolumeType"].empty()) {
      volumeType = make_shared<string>(boost::any_cast<string>(m["VolumeType"]));
    }
  }


  virtual ~CreateClusterRequestAdditionalVolumes() = default;
};
class CreateClusterRequestApplication : public Darabonba::Model {
public:
  shared_ptr<string> tag{};

  CreateClusterRequestApplication() {}

  explicit CreateClusterRequestApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~CreateClusterRequestApplication() = default;
};
class CreateClusterRequestPostInstallScript : public Darabonba::Model {
public:
  shared_ptr<string> args{};
  shared_ptr<string> url{};

  CreateClusterRequestPostInstallScript() {}

  explicit CreateClusterRequestPostInstallScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      args = make_shared<string>(boost::any_cast<string>(m["Args"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateClusterRequestPostInstallScript() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<CreateClusterRequestEcsOrder> ecsOrder{};
  shared_ptr<string> accountType{};
  shared_ptr<vector<CreateClusterRequestAdditionalVolumes>> additionalVolumes{};
  shared_ptr<vector<CreateClusterRequestApplication>> application{};
  shared_ptr<string> autoRenew{};
  shared_ptr<long> autoRenewPeriod{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> clusterVersion{};
  shared_ptr<bool> computeEnableHt{};
  shared_ptr<string> computeSpotPriceLimit{};
  shared_ptr<string> computeSpotStrategy{};
  shared_ptr<string> deployMode{};
  shared_ptr<string> description{};
  shared_ptr<string> ecsChargeType{};
  shared_ptr<string> ehpcVersion{};
  shared_ptr<bool> haEnable{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> inputFileUrl{};
  shared_ptr<bool> isComputeEss{};
  shared_ptr<string> jobQueue{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> name{};
  shared_ptr<string> osTag{};
  shared_ptr<string> password{};
  shared_ptr<long> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> plugin{};
  shared_ptr<vector<CreateClusterRequestPostInstallScript>> postInstallScript{};
  shared_ptr<vector<string>> ramNodeTypes{};
  shared_ptr<string> ramRoleName{};
  shared_ptr<string> remoteDirectory{};
  shared_ptr<string> remoteVisEnable{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sccClusterId{};
  shared_ptr<string> schedulerType{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> securityGroupName{};
  shared_ptr<string> systemDiskLevel{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<string> systemDiskType{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> volumeId{};
  shared_ptr<string> volumeMountpoint{};
  shared_ptr<string> volumeProtocol{};
  shared_ptr<string> volumeType{};
  shared_ptr<string> vpcId{};
  shared_ptr<bool> withoutAgent{};
  shared_ptr<bool> withoutElasticIp{};
  shared_ptr<string> zoneId{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsOrder) {
      res["EcsOrder"] = ecsOrder ? boost::any(ecsOrder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (additionalVolumes) {
      vector<boost::any> temp1;
      for(auto item1:*additionalVolumes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdditionalVolumes"] = boost::any(temp1);
    }
    if (application) {
      vector<boost::any> temp1;
      for(auto item1:*application){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Application"] = boost::any(temp1);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (autoRenewPeriod) {
      res["AutoRenewPeriod"] = boost::any(*autoRenewPeriod);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (clusterVersion) {
      res["ClusterVersion"] = boost::any(*clusterVersion);
    }
    if (computeEnableHt) {
      res["ComputeEnableHt"] = boost::any(*computeEnableHt);
    }
    if (computeSpotPriceLimit) {
      res["ComputeSpotPriceLimit"] = boost::any(*computeSpotPriceLimit);
    }
    if (computeSpotStrategy) {
      res["ComputeSpotStrategy"] = boost::any(*computeSpotStrategy);
    }
    if (deployMode) {
      res["DeployMode"] = boost::any(*deployMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ecsChargeType) {
      res["EcsChargeType"] = boost::any(*ecsChargeType);
    }
    if (ehpcVersion) {
      res["EhpcVersion"] = boost::any(*ehpcVersion);
    }
    if (haEnable) {
      res["HaEnable"] = boost::any(*haEnable);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (inputFileUrl) {
      res["InputFileUrl"] = boost::any(*inputFileUrl);
    }
    if (isComputeEss) {
      res["IsComputeEss"] = boost::any(*isComputeEss);
    }
    if (jobQueue) {
      res["JobQueue"] = boost::any(*jobQueue);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (plugin) {
      res["Plugin"] = boost::any(*plugin);
    }
    if (postInstallScript) {
      vector<boost::any> temp1;
      for(auto item1:*postInstallScript){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PostInstallScript"] = boost::any(temp1);
    }
    if (ramNodeTypes) {
      res["RamNodeTypes"] = boost::any(*ramNodeTypes);
    }
    if (ramRoleName) {
      res["RamRoleName"] = boost::any(*ramRoleName);
    }
    if (remoteDirectory) {
      res["RemoteDirectory"] = boost::any(*remoteDirectory);
    }
    if (remoteVisEnable) {
      res["RemoteVisEnable"] = boost::any(*remoteVisEnable);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sccClusterId) {
      res["SccClusterId"] = boost::any(*sccClusterId);
    }
    if (schedulerType) {
      res["SchedulerType"] = boost::any(*schedulerType);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (securityGroupName) {
      res["SecurityGroupName"] = boost::any(*securityGroupName);
    }
    if (systemDiskLevel) {
      res["SystemDiskLevel"] = boost::any(*systemDiskLevel);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (systemDiskType) {
      res["SystemDiskType"] = boost::any(*systemDiskType);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    if (volumeMountpoint) {
      res["VolumeMountpoint"] = boost::any(*volumeMountpoint);
    }
    if (volumeProtocol) {
      res["VolumeProtocol"] = boost::any(*volumeProtocol);
    }
    if (volumeType) {
      res["VolumeType"] = boost::any(*volumeType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (withoutAgent) {
      res["WithoutAgent"] = boost::any(*withoutAgent);
    }
    if (withoutElasticIp) {
      res["WithoutElasticIp"] = boost::any(*withoutElasticIp);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsOrder") != m.end() && !m["EcsOrder"].empty()) {
      if (typeid(map<string, boost::any>) == m["EcsOrder"].type()) {
        CreateClusterRequestEcsOrder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EcsOrder"]));
        ecsOrder = make_shared<CreateClusterRequestEcsOrder>(model1);
      }
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AdditionalVolumes") != m.end() && !m["AdditionalVolumes"].empty()) {
      if (typeid(vector<boost::any>) == m["AdditionalVolumes"].type()) {
        vector<CreateClusterRequestAdditionalVolumes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdditionalVolumes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestAdditionalVolumes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        additionalVolumes = make_shared<vector<CreateClusterRequestAdditionalVolumes>>(expect1);
      }
    }
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(vector<boost::any>) == m["Application"].type()) {
        vector<CreateClusterRequestApplication> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Application"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestApplication model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        application = make_shared<vector<CreateClusterRequestApplication>>(expect1);
      }
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<string>(boost::any_cast<string>(m["AutoRenew"]));
    }
    if (m.find("AutoRenewPeriod") != m.end() && !m["AutoRenewPeriod"].empty()) {
      autoRenewPeriod = make_shared<long>(boost::any_cast<long>(m["AutoRenewPeriod"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ClusterVersion") != m.end() && !m["ClusterVersion"].empty()) {
      clusterVersion = make_shared<string>(boost::any_cast<string>(m["ClusterVersion"]));
    }
    if (m.find("ComputeEnableHt") != m.end() && !m["ComputeEnableHt"].empty()) {
      computeEnableHt = make_shared<bool>(boost::any_cast<bool>(m["ComputeEnableHt"]));
    }
    if (m.find("ComputeSpotPriceLimit") != m.end() && !m["ComputeSpotPriceLimit"].empty()) {
      computeSpotPriceLimit = make_shared<string>(boost::any_cast<string>(m["ComputeSpotPriceLimit"]));
    }
    if (m.find("ComputeSpotStrategy") != m.end() && !m["ComputeSpotStrategy"].empty()) {
      computeSpotStrategy = make_shared<string>(boost::any_cast<string>(m["ComputeSpotStrategy"]));
    }
    if (m.find("DeployMode") != m.end() && !m["DeployMode"].empty()) {
      deployMode = make_shared<string>(boost::any_cast<string>(m["DeployMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EcsChargeType") != m.end() && !m["EcsChargeType"].empty()) {
      ecsChargeType = make_shared<string>(boost::any_cast<string>(m["EcsChargeType"]));
    }
    if (m.find("EhpcVersion") != m.end() && !m["EhpcVersion"].empty()) {
      ehpcVersion = make_shared<string>(boost::any_cast<string>(m["EhpcVersion"]));
    }
    if (m.find("HaEnable") != m.end() && !m["HaEnable"].empty()) {
      haEnable = make_shared<bool>(boost::any_cast<bool>(m["HaEnable"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("InputFileUrl") != m.end() && !m["InputFileUrl"].empty()) {
      inputFileUrl = make_shared<string>(boost::any_cast<string>(m["InputFileUrl"]));
    }
    if (m.find("IsComputeEss") != m.end() && !m["IsComputeEss"].empty()) {
      isComputeEss = make_shared<bool>(boost::any_cast<bool>(m["IsComputeEss"]));
    }
    if (m.find("JobQueue") != m.end() && !m["JobQueue"].empty()) {
      jobQueue = make_shared<string>(boost::any_cast<string>(m["JobQueue"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("Plugin") != m.end() && !m["Plugin"].empty()) {
      plugin = make_shared<string>(boost::any_cast<string>(m["Plugin"]));
    }
    if (m.find("PostInstallScript") != m.end() && !m["PostInstallScript"].empty()) {
      if (typeid(vector<boost::any>) == m["PostInstallScript"].type()) {
        vector<CreateClusterRequestPostInstallScript> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PostInstallScript"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateClusterRequestPostInstallScript model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        postInstallScript = make_shared<vector<CreateClusterRequestPostInstallScript>>(expect1);
      }
    }
    if (m.find("RamNodeTypes") != m.end() && !m["RamNodeTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RamNodeTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RamNodeTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ramNodeTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RamRoleName") != m.end() && !m["RamRoleName"].empty()) {
      ramRoleName = make_shared<string>(boost::any_cast<string>(m["RamRoleName"]));
    }
    if (m.find("RemoteDirectory") != m.end() && !m["RemoteDirectory"].empty()) {
      remoteDirectory = make_shared<string>(boost::any_cast<string>(m["RemoteDirectory"]));
    }
    if (m.find("RemoteVisEnable") != m.end() && !m["RemoteVisEnable"].empty()) {
      remoteVisEnable = make_shared<string>(boost::any_cast<string>(m["RemoteVisEnable"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SccClusterId") != m.end() && !m["SccClusterId"].empty()) {
      sccClusterId = make_shared<string>(boost::any_cast<string>(m["SccClusterId"]));
    }
    if (m.find("SchedulerType") != m.end() && !m["SchedulerType"].empty()) {
      schedulerType = make_shared<string>(boost::any_cast<string>(m["SchedulerType"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SecurityGroupName") != m.end() && !m["SecurityGroupName"].empty()) {
      securityGroupName = make_shared<string>(boost::any_cast<string>(m["SecurityGroupName"]));
    }
    if (m.find("SystemDiskLevel") != m.end() && !m["SystemDiskLevel"].empty()) {
      systemDiskLevel = make_shared<string>(boost::any_cast<string>(m["SystemDiskLevel"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("SystemDiskType") != m.end() && !m["SystemDiskType"].empty()) {
      systemDiskType = make_shared<string>(boost::any_cast<string>(m["SystemDiskType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<string>(boost::any_cast<string>(m["VolumeId"]));
    }
    if (m.find("VolumeMountpoint") != m.end() && !m["VolumeMountpoint"].empty()) {
      volumeMountpoint = make_shared<string>(boost::any_cast<string>(m["VolumeMountpoint"]));
    }
    if (m.find("VolumeProtocol") != m.end() && !m["VolumeProtocol"].empty()) {
      volumeProtocol = make_shared<string>(boost::any_cast<string>(m["VolumeProtocol"]));
    }
    if (m.find("VolumeType") != m.end() && !m["VolumeType"].empty()) {
      volumeType = make_shared<string>(boost::any_cast<string>(m["VolumeType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("WithoutAgent") != m.end() && !m["WithoutAgent"].empty()) {
      withoutAgent = make_shared<bool>(boost::any_cast<bool>(m["WithoutAgent"]));
    }
    if (m.find("WithoutElasticIp") != m.end() && !m["WithoutElasticIp"].empty()) {
      withoutElasticIp = make_shared<bool>(boost::any_cast<bool>(m["WithoutElasticIp"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateClusterResponseBody() = default;
};
class CreateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateClusterResponseBody> body{};

  CreateClusterResponse() {}

  explicit CreateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class CreateGWSClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterType{};
  shared_ptr<string> name{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  CreateGWSClusterRequest() {}

  explicit CreateGWSClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateGWSClusterRequest() = default;
};
class CreateGWSClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};

  CreateGWSClusterResponseBody() {}

  explicit CreateGWSClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateGWSClusterResponseBody() = default;
};
class CreateGWSClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGWSClusterResponseBody> body{};

  CreateGWSClusterResponse() {}

  explicit CreateGWSClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGWSClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGWSClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGWSClusterResponse() = default;
};
class CreateGWSImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};

  CreateGWSImageRequest() {}

  explicit CreateGWSImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateGWSImageRequest() = default;
};
class CreateGWSImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> requestId{};

  CreateGWSImageResponseBody() {}

  explicit CreateGWSImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateGWSImageResponseBody() = default;
};
class CreateGWSImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGWSImageResponseBody> body{};

  CreateGWSImageResponse() {}

  explicit CreateGWSImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGWSImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGWSImageResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGWSImageResponse() = default;
};
class CreateGWSInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> allocatePublicAddress{};
  shared_ptr<string> appList{};
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthIn{};
  shared_ptr<long> internetMaxBandwidthOut{};
  shared_ptr<string> name{};
  shared_ptr<string> period{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<long> systemDiskSize{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> workMode{};

  CreateGWSInstanceRequest() {}

  explicit CreateGWSInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocatePublicAddress) {
      res["AllocatePublicAddress"] = boost::any(*allocatePublicAddress);
    }
    if (appList) {
      res["AppList"] = boost::any(*appList);
    }
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandwidthIn) {
      res["InternetMaxBandwidthIn"] = boost::any(*internetMaxBandwidthIn);
    }
    if (internetMaxBandwidthOut) {
      res["InternetMaxBandwidthOut"] = boost::any(*internetMaxBandwidthOut);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (workMode) {
      res["WorkMode"] = boost::any(*workMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocatePublicAddress") != m.end() && !m["AllocatePublicAddress"].empty()) {
      allocatePublicAddress = make_shared<bool>(boost::any_cast<bool>(m["AllocatePublicAddress"]));
    }
    if (m.find("AppList") != m.end() && !m["AppList"].empty()) {
      appList = make_shared<string>(boost::any_cast<string>(m["AppList"]));
    }
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("InternetMaxBandwidthIn") != m.end() && !m["InternetMaxBandwidthIn"].empty()) {
      internetMaxBandwidthIn = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandwidthIn"]));
    }
    if (m.find("InternetMaxBandwidthOut") != m.end() && !m["InternetMaxBandwidthOut"].empty()) {
      internetMaxBandwidthOut = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandwidthOut"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<string>(boost::any_cast<string>(m["Period"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("WorkMode") != m.end() && !m["WorkMode"].empty()) {
      workMode = make_shared<string>(boost::any_cast<string>(m["WorkMode"]));
    }
  }


  virtual ~CreateGWSInstanceRequest() = default;
};
class CreateGWSInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  CreateGWSInstanceResponseBody() {}

  explicit CreateGWSInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateGWSInstanceResponseBody() = default;
};
class CreateGWSInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGWSInstanceResponseBody> body{};

  CreateGWSInstanceResponse() {}

  explicit CreateGWSInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGWSInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGWSInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGWSInstanceResponse() = default;
};
class CreateHybridClusterRequestEcsOrderCompute : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};

  CreateHybridClusterRequestEcsOrderCompute() {}

  explicit CreateHybridClusterRequestEcsOrderCompute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~CreateHybridClusterRequestEcsOrderCompute() = default;
};
class CreateHybridClusterRequestEcsOrder : public Darabonba::Model {
public:
  shared_ptr<CreateHybridClusterRequestEcsOrderCompute> compute{};

  CreateHybridClusterRequestEcsOrder() {}

  explicit CreateHybridClusterRequestEcsOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!compute) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("compute is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compute) {
      res["Compute"] = compute ? boost::any(compute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compute") != m.end() && !m["Compute"].empty()) {
      if (typeid(map<string, boost::any>) == m["Compute"].type()) {
        CreateHybridClusterRequestEcsOrderCompute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Compute"]));
        compute = make_shared<CreateHybridClusterRequestEcsOrderCompute>(model1);
      }
    }
  }


  virtual ~CreateHybridClusterRequestEcsOrder() = default;
};
class CreateHybridClusterRequestApplication : public Darabonba::Model {
public:
  shared_ptr<string> tag{};

  CreateHybridClusterRequestApplication() {}

  explicit CreateHybridClusterRequestApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~CreateHybridClusterRequestApplication() = default;
};
class CreateHybridClusterRequestNodes : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<string> hostName{};
  shared_ptr<string> ipAddress{};
  shared_ptr<string> role{};
  shared_ptr<string> schedulerType{};

  CreateHybridClusterRequestNodes() {}

  explicit CreateHybridClusterRequestNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (schedulerType) {
      res["SchedulerType"] = boost::any(*schedulerType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("SchedulerType") != m.end() && !m["SchedulerType"].empty()) {
      schedulerType = make_shared<string>(boost::any_cast<string>(m["SchedulerType"]));
    }
  }


  virtual ~CreateHybridClusterRequestNodes() = default;
};
class CreateHybridClusterRequestPostInstallScript : public Darabonba::Model {
public:
  shared_ptr<string> args{};
  shared_ptr<string> url{};

  CreateHybridClusterRequestPostInstallScript() {}

  explicit CreateHybridClusterRequestPostInstallScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      args = make_shared<string>(boost::any_cast<string>(m["Args"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateHybridClusterRequestPostInstallScript() = default;
};
class CreateHybridClusterRequest : public Darabonba::Model {
public:
  shared_ptr<CreateHybridClusterRequestEcsOrder> ecsOrder{};
  shared_ptr<vector<CreateHybridClusterRequestApplication>> application{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clientVersion{};
  shared_ptr<double> computeSpotPriceLimit{};
  shared_ptr<string> computeSpotStrategy{};
  shared_ptr<string> description{};
  shared_ptr<string> domain{};
  shared_ptr<string> ehpcVersion{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> jobQueue{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> location{};
  shared_ptr<bool> multiOs{};
  shared_ptr<string> name{};
  shared_ptr<vector<CreateHybridClusterRequestNodes>> nodes{};
  shared_ptr<string> onPremiseVolumeLocalPath{};
  shared_ptr<string> onPremiseVolumeMountPoint{};
  shared_ptr<string> onPremiseVolumeProtocol{};
  shared_ptr<string> onPremiseVolumeRemotePath{};
  shared_ptr<string> osTag{};
  shared_ptr<string> password{};
  shared_ptr<vector<CreateHybridClusterRequestPostInstallScript>> postInstallScript{};
  shared_ptr<string> remoteDirectory{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<bool> schedulerPreInstall{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> securityGroupName{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> volumeId{};
  shared_ptr<string> volumeMountpoint{};
  shared_ptr<string> volumeProtocol{};
  shared_ptr<string> volumeType{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  CreateHybridClusterRequest() {}

  explicit CreateHybridClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsOrder) {
      res["EcsOrder"] = ecsOrder ? boost::any(ecsOrder->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (application) {
      vector<boost::any> temp1;
      for(auto item1:*application){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Application"] = boost::any(temp1);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (computeSpotPriceLimit) {
      res["ComputeSpotPriceLimit"] = boost::any(*computeSpotPriceLimit);
    }
    if (computeSpotStrategy) {
      res["ComputeSpotStrategy"] = boost::any(*computeSpotStrategy);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (ehpcVersion) {
      res["EhpcVersion"] = boost::any(*ehpcVersion);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (jobQueue) {
      res["JobQueue"] = boost::any(*jobQueue);
    }
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (multiOs) {
      res["MultiOs"] = boost::any(*multiOs);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (onPremiseVolumeLocalPath) {
      res["OnPremiseVolumeLocalPath"] = boost::any(*onPremiseVolumeLocalPath);
    }
    if (onPremiseVolumeMountPoint) {
      res["OnPremiseVolumeMountPoint"] = boost::any(*onPremiseVolumeMountPoint);
    }
    if (onPremiseVolumeProtocol) {
      res["OnPremiseVolumeProtocol"] = boost::any(*onPremiseVolumeProtocol);
    }
    if (onPremiseVolumeRemotePath) {
      res["OnPremiseVolumeRemotePath"] = boost::any(*onPremiseVolumeRemotePath);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (postInstallScript) {
      vector<boost::any> temp1;
      for(auto item1:*postInstallScript){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PostInstallScript"] = boost::any(temp1);
    }
    if (remoteDirectory) {
      res["RemoteDirectory"] = boost::any(*remoteDirectory);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (schedulerPreInstall) {
      res["SchedulerPreInstall"] = boost::any(*schedulerPreInstall);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (securityGroupName) {
      res["SecurityGroupName"] = boost::any(*securityGroupName);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    if (volumeMountpoint) {
      res["VolumeMountpoint"] = boost::any(*volumeMountpoint);
    }
    if (volumeProtocol) {
      res["VolumeProtocol"] = boost::any(*volumeProtocol);
    }
    if (volumeType) {
      res["VolumeType"] = boost::any(*volumeType);
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
    if (m.find("EcsOrder") != m.end() && !m["EcsOrder"].empty()) {
      if (typeid(map<string, boost::any>) == m["EcsOrder"].type()) {
        CreateHybridClusterRequestEcsOrder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EcsOrder"]));
        ecsOrder = make_shared<CreateHybridClusterRequestEcsOrder>(model1);
      }
    }
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(vector<boost::any>) == m["Application"].type()) {
        vector<CreateHybridClusterRequestApplication> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Application"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateHybridClusterRequestApplication model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        application = make_shared<vector<CreateHybridClusterRequestApplication>>(expect1);
      }
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ComputeSpotPriceLimit") != m.end() && !m["ComputeSpotPriceLimit"].empty()) {
      computeSpotPriceLimit = make_shared<double>(boost::any_cast<double>(m["ComputeSpotPriceLimit"]));
    }
    if (m.find("ComputeSpotStrategy") != m.end() && !m["ComputeSpotStrategy"].empty()) {
      computeSpotStrategy = make_shared<string>(boost::any_cast<string>(m["ComputeSpotStrategy"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EhpcVersion") != m.end() && !m["EhpcVersion"].empty()) {
      ehpcVersion = make_shared<string>(boost::any_cast<string>(m["EhpcVersion"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("JobQueue") != m.end() && !m["JobQueue"].empty()) {
      jobQueue = make_shared<string>(boost::any_cast<string>(m["JobQueue"]));
    }
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("MultiOs") != m.end() && !m["MultiOs"].empty()) {
      multiOs = make_shared<bool>(boost::any_cast<bool>(m["MultiOs"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<CreateHybridClusterRequestNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateHybridClusterRequestNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<CreateHybridClusterRequestNodes>>(expect1);
      }
    }
    if (m.find("OnPremiseVolumeLocalPath") != m.end() && !m["OnPremiseVolumeLocalPath"].empty()) {
      onPremiseVolumeLocalPath = make_shared<string>(boost::any_cast<string>(m["OnPremiseVolumeLocalPath"]));
    }
    if (m.find("OnPremiseVolumeMountPoint") != m.end() && !m["OnPremiseVolumeMountPoint"].empty()) {
      onPremiseVolumeMountPoint = make_shared<string>(boost::any_cast<string>(m["OnPremiseVolumeMountPoint"]));
    }
    if (m.find("OnPremiseVolumeProtocol") != m.end() && !m["OnPremiseVolumeProtocol"].empty()) {
      onPremiseVolumeProtocol = make_shared<string>(boost::any_cast<string>(m["OnPremiseVolumeProtocol"]));
    }
    if (m.find("OnPremiseVolumeRemotePath") != m.end() && !m["OnPremiseVolumeRemotePath"].empty()) {
      onPremiseVolumeRemotePath = make_shared<string>(boost::any_cast<string>(m["OnPremiseVolumeRemotePath"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PostInstallScript") != m.end() && !m["PostInstallScript"].empty()) {
      if (typeid(vector<boost::any>) == m["PostInstallScript"].type()) {
        vector<CreateHybridClusterRequestPostInstallScript> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PostInstallScript"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateHybridClusterRequestPostInstallScript model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        postInstallScript = make_shared<vector<CreateHybridClusterRequestPostInstallScript>>(expect1);
      }
    }
    if (m.find("RemoteDirectory") != m.end() && !m["RemoteDirectory"].empty()) {
      remoteDirectory = make_shared<string>(boost::any_cast<string>(m["RemoteDirectory"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SchedulerPreInstall") != m.end() && !m["SchedulerPreInstall"].empty()) {
      schedulerPreInstall = make_shared<bool>(boost::any_cast<bool>(m["SchedulerPreInstall"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SecurityGroupName") != m.end() && !m["SecurityGroupName"].empty()) {
      securityGroupName = make_shared<string>(boost::any_cast<string>(m["SecurityGroupName"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<string>(boost::any_cast<string>(m["VolumeId"]));
    }
    if (m.find("VolumeMountpoint") != m.end() && !m["VolumeMountpoint"].empty()) {
      volumeMountpoint = make_shared<string>(boost::any_cast<string>(m["VolumeMountpoint"]));
    }
    if (m.find("VolumeProtocol") != m.end() && !m["VolumeProtocol"].empty()) {
      volumeProtocol = make_shared<string>(boost::any_cast<string>(m["VolumeProtocol"]));
    }
    if (m.find("VolumeType") != m.end() && !m["VolumeType"].empty()) {
      volumeType = make_shared<string>(boost::any_cast<string>(m["VolumeType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateHybridClusterRequest() = default;
};
class CreateHybridClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateHybridClusterResponseBody() {}

  explicit CreateHybridClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateHybridClusterResponseBody() = default;
};
class CreateHybridClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateHybridClusterResponseBody> body{};

  CreateHybridClusterResponse() {}

  explicit CreateHybridClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateHybridClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHybridClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHybridClusterResponse() = default;
};
class CreateJobFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> content{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> runasUserPassword{};
  shared_ptr<string> targetFile{};

  CreateJobFileRequest() {}

  explicit CreateJobFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (runasUserPassword) {
      res["RunasUserPassword"] = boost::any(*runasUserPassword);
    }
    if (targetFile) {
      res["TargetFile"] = boost::any(*targetFile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("RunasUserPassword") != m.end() && !m["RunasUserPassword"].empty()) {
      runasUserPassword = make_shared<string>(boost::any_cast<string>(m["RunasUserPassword"]));
    }
    if (m.find("TargetFile") != m.end() && !m["TargetFile"].empty()) {
      targetFile = make_shared<string>(boost::any_cast<string>(m["TargetFile"]));
    }
  }


  virtual ~CreateJobFileRequest() = default;
};
class CreateJobFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateJobFileResponseBody() {}

  explicit CreateJobFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateJobFileResponseBody() = default;
};
class CreateJobFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateJobFileResponseBody> body{};

  CreateJobFileResponse() {}

  explicit CreateJobFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateJobFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateJobFileResponseBody>(model1);
      }
    }
  }


  virtual ~CreateJobFileResponse() = default;
};
class CreateJobTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> arrayRequest{};
  shared_ptr<string> clockTime{};
  shared_ptr<string> commandLine{};
  shared_ptr<long> gpu{};
  shared_ptr<string> inputFileUrl{};
  shared_ptr<string> mem{};
  shared_ptr<string> name{};
  shared_ptr<long> node{};
  shared_ptr<string> packagePath{};
  shared_ptr<long> priority{};
  shared_ptr<string> queue{};
  shared_ptr<bool> reRunable{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> stderrRedirectPath{};
  shared_ptr<string> stdoutRedirectPath{};
  shared_ptr<long> task{};
  shared_ptr<long> thread{};
  shared_ptr<string> unzipCmd{};
  shared_ptr<string> variables{};
  shared_ptr<bool> withUnzipCmd{};

  CreateJobTemplateRequest() {}

  explicit CreateJobTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayRequest) {
      res["ArrayRequest"] = boost::any(*arrayRequest);
    }
    if (clockTime) {
      res["ClockTime"] = boost::any(*clockTime);
    }
    if (commandLine) {
      res["CommandLine"] = boost::any(*commandLine);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (inputFileUrl) {
      res["InputFileUrl"] = boost::any(*inputFileUrl);
    }
    if (mem) {
      res["Mem"] = boost::any(*mem);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (node) {
      res["Node"] = boost::any(*node);
    }
    if (packagePath) {
      res["PackagePath"] = boost::any(*packagePath);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (queue) {
      res["Queue"] = boost::any(*queue);
    }
    if (reRunable) {
      res["ReRunable"] = boost::any(*reRunable);
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (stderrRedirectPath) {
      res["StderrRedirectPath"] = boost::any(*stderrRedirectPath);
    }
    if (stdoutRedirectPath) {
      res["StdoutRedirectPath"] = boost::any(*stdoutRedirectPath);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (thread) {
      res["Thread"] = boost::any(*thread);
    }
    if (unzipCmd) {
      res["UnzipCmd"] = boost::any(*unzipCmd);
    }
    if (variables) {
      res["Variables"] = boost::any(*variables);
    }
    if (withUnzipCmd) {
      res["WithUnzipCmd"] = boost::any(*withUnzipCmd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayRequest") != m.end() && !m["ArrayRequest"].empty()) {
      arrayRequest = make_shared<string>(boost::any_cast<string>(m["ArrayRequest"]));
    }
    if (m.find("ClockTime") != m.end() && !m["ClockTime"].empty()) {
      clockTime = make_shared<string>(boost::any_cast<string>(m["ClockTime"]));
    }
    if (m.find("CommandLine") != m.end() && !m["CommandLine"].empty()) {
      commandLine = make_shared<string>(boost::any_cast<string>(m["CommandLine"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("InputFileUrl") != m.end() && !m["InputFileUrl"].empty()) {
      inputFileUrl = make_shared<string>(boost::any_cast<string>(m["InputFileUrl"]));
    }
    if (m.find("Mem") != m.end() && !m["Mem"].empty()) {
      mem = make_shared<string>(boost::any_cast<string>(m["Mem"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      node = make_shared<long>(boost::any_cast<long>(m["Node"]));
    }
    if (m.find("PackagePath") != m.end() && !m["PackagePath"].empty()) {
      packagePath = make_shared<string>(boost::any_cast<string>(m["PackagePath"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      queue = make_shared<string>(boost::any_cast<string>(m["Queue"]));
    }
    if (m.find("ReRunable") != m.end() && !m["ReRunable"].empty()) {
      reRunable = make_shared<bool>(boost::any_cast<bool>(m["ReRunable"]));
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("StderrRedirectPath") != m.end() && !m["StderrRedirectPath"].empty()) {
      stderrRedirectPath = make_shared<string>(boost::any_cast<string>(m["StderrRedirectPath"]));
    }
    if (m.find("StdoutRedirectPath") != m.end() && !m["StdoutRedirectPath"].empty()) {
      stdoutRedirectPath = make_shared<string>(boost::any_cast<string>(m["StdoutRedirectPath"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<long>(boost::any_cast<long>(m["Task"]));
    }
    if (m.find("Thread") != m.end() && !m["Thread"].empty()) {
      thread = make_shared<long>(boost::any_cast<long>(m["Thread"]));
    }
    if (m.find("UnzipCmd") != m.end() && !m["UnzipCmd"].empty()) {
      unzipCmd = make_shared<string>(boost::any_cast<string>(m["UnzipCmd"]));
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["Variables"]));
    }
    if (m.find("WithUnzipCmd") != m.end() && !m["WithUnzipCmd"].empty()) {
      withUnzipCmd = make_shared<bool>(boost::any_cast<bool>(m["WithUnzipCmd"]));
    }
  }


  virtual ~CreateJobTemplateRequest() = default;
};
class CreateJobTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  CreateJobTemplateResponseBody() {}

  explicit CreateJobTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateJobTemplateResponseBody() = default;
};
class CreateJobTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateJobTemplateResponseBody> body{};

  CreateJobTemplateResponse() {}

  explicit CreateJobTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateJobTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateJobTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateJobTemplateResponse() = default;
};
class DeleteClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> releaseInstance{};

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
    if (releaseInstance) {
      res["ReleaseInstance"] = boost::any(*releaseInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ReleaseInstance") != m.end() && !m["ReleaseInstance"].empty()) {
      releaseInstance = make_shared<string>(boost::any_cast<string>(m["ReleaseInstance"]));
    }
  }


  virtual ~DeleteClusterRequest() = default;
};
class DeleteClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<DeleteClusterResponseBody> body{};

  DeleteClusterResponse() {}

  explicit DeleteClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DeleteContainerAppsRequestContainerApp : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DeleteContainerAppsRequestContainerApp() {}

  explicit DeleteContainerAppsRequestContainerApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteContainerAppsRequestContainerApp() = default;
};
class DeleteContainerAppsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<DeleteContainerAppsRequestContainerApp>> containerApp{};

  DeleteContainerAppsRequest() {}

  explicit DeleteContainerAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerApp) {
      vector<boost::any> temp1;
      for(auto item1:*containerApp){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContainerApp"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerApp") != m.end() && !m["ContainerApp"].empty()) {
      if (typeid(vector<boost::any>) == m["ContainerApp"].type()) {
        vector<DeleteContainerAppsRequestContainerApp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContainerApp"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteContainerAppsRequestContainerApp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        containerApp = make_shared<vector<DeleteContainerAppsRequestContainerApp>>(expect1);
      }
    }
  }


  virtual ~DeleteContainerAppsRequest() = default;
};
class DeleteContainerAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteContainerAppsResponseBody() {}

  explicit DeleteContainerAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteContainerAppsResponseBody() = default;
};
class DeleteContainerAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteContainerAppsResponseBody> body{};

  DeleteContainerAppsResponse() {}

  explicit DeleteContainerAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteContainerAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteContainerAppsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteContainerAppsResponse() = default;
};
class DeleteGWSClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DeleteGWSClusterRequest() {}

  explicit DeleteGWSClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGWSClusterRequest() = default;
};
class DeleteGWSClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGWSClusterResponseBody() {}

  explicit DeleteGWSClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGWSClusterResponseBody() = default;
};
class DeleteGWSClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGWSClusterResponseBody> body{};

  DeleteGWSClusterResponse() {}

  explicit DeleteGWSClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGWSClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGWSClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGWSClusterResponse() = default;
};
class DeleteGWSInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteGWSInstanceRequest() {}

  explicit DeleteGWSInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteGWSInstanceRequest() = default;
};
class DeleteGWSInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGWSInstanceResponseBody() {}

  explicit DeleteGWSInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGWSInstanceResponseBody() = default;
};
class DeleteGWSInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGWSInstanceResponseBody> body{};

  DeleteGWSInstanceResponse() {}

  explicit DeleteGWSInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteGWSInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGWSInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGWSInstanceResponse() = default;
};
class DeleteImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> containerType{};
  shared_ptr<string> imageTag{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repository{};

  DeleteImageRequest() {}

  explicit DeleteImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (containerType) {
      res["ContainerType"] = boost::any(*containerType);
    }
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repository) {
      res["Repository"] = boost::any(*repository);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ContainerType") != m.end() && !m["ContainerType"].empty()) {
      containerType = make_shared<string>(boost::any_cast<string>(m["ContainerType"]));
    }
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Repository") != m.end() && !m["Repository"].empty()) {
      repository = make_shared<string>(boost::any_cast<string>(m["Repository"]));
    }
  }


  virtual ~DeleteImageRequest() = default;
};
class DeleteImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteImageResponseBody() {}

  explicit DeleteImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteImageResponseBody() = default;
};
class DeleteImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteImageResponseBody> body{};

  DeleteImageResponse() {}

  explicit DeleteImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteImageResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteImageResponse() = default;
};
class DeleteJobTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> templates{};

  DeleteJobTemplatesRequest() {}

  explicit DeleteJobTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templates) {
      res["Templates"] = boost::any(*templates);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      templates = make_shared<string>(boost::any_cast<string>(m["Templates"]));
    }
  }


  virtual ~DeleteJobTemplatesRequest() = default;
};
class DeleteJobTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteJobTemplatesResponseBody() {}

  explicit DeleteJobTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteJobTemplatesResponseBody() = default;
};
class DeleteJobTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteJobTemplatesResponseBody> body{};

  DeleteJobTemplatesResponse() {}

  explicit DeleteJobTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteJobTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteJobTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteJobTemplatesResponse() = default;
};
class DeleteJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobs{};

  DeleteJobsRequest() {}

  explicit DeleteJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobs) {
      res["Jobs"] = boost::any(*jobs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      jobs = make_shared<string>(boost::any_cast<string>(m["Jobs"]));
    }
  }


  virtual ~DeleteJobsRequest() = default;
};
class DeleteJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteJobsResponseBody() {}

  explicit DeleteJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteJobsResponseBody() = default;
};
class DeleteJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteJobsResponseBody> body{};

  DeleteJobsResponse() {}

  explicit DeleteJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteJobsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteJobsResponse() = default;
};
class DeleteNodesRequestInstance : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  DeleteNodesRequestInstance() {}

  explicit DeleteNodesRequestInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteNodesRequestInstance() = default;
};
class DeleteNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<DeleteNodesRequestInstance>> instance{};
  shared_ptr<bool> releaseInstance{};
  shared_ptr<bool> sync{};

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
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    if (releaseInstance) {
      res["ReleaseInstance"] = boost::any(*releaseInstance);
    }
    if (sync) {
      res["Sync"] = boost::any(*sync);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<DeleteNodesRequestInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DeleteNodesRequestInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<DeleteNodesRequestInstance>>(expect1);
      }
    }
    if (m.find("ReleaseInstance") != m.end() && !m["ReleaseInstance"].empty()) {
      releaseInstance = make_shared<bool>(boost::any_cast<bool>(m["ReleaseInstance"]));
    }
    if (m.find("Sync") != m.end() && !m["Sync"].empty()) {
      sync = make_shared<bool>(boost::any_cast<bool>(m["Sync"]));
    }
  }


  virtual ~DeleteNodesRequest() = default;
};
class DeleteNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
  shared_ptr<DeleteNodesResponseBody> body{};

  DeleteNodesResponse() {}

  explicit DeleteNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DeleteQueueRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> queueName{};

  DeleteQueueRequest() {}

  explicit DeleteQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteQueueRequest() = default;
};
class DeleteQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteQueueResponseBody() {}

  explicit DeleteQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteQueueResponseBody() = default;
};
class DeleteQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteQueueResponseBody> body{};

  DeleteQueueResponse() {}

  explicit DeleteQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteQueueResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteQueueResponse() = default;
};
class DeleteSecurityGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> securityGroupId{};

  DeleteSecurityGroupRequest() {}

  explicit DeleteSecurityGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
  }


  virtual ~DeleteSecurityGroupRequest() = default;
};
class DeleteSecurityGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSecurityGroupResponseBody() {}

  explicit DeleteSecurityGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSecurityGroupResponseBody() = default;
};
class DeleteSecurityGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSecurityGroupResponseBody> body{};

  DeleteSecurityGroupResponse() {}

  explicit DeleteSecurityGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSecurityGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSecurityGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSecurityGroupResponse() = default;
};
class DeleteUsersRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DeleteUsersRequestUser() {}

  explicit DeleteUsersRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
  shared_ptr<DeleteUsersResponseBody> body{};

  DeleteUsersResponse() {}

  explicit DeleteUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class DescribeAutoScaleConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeAutoScaleConfigRequest() {}

  explicit DescribeAutoScaleConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeAutoScaleConfigRequest() = default;
};
class DescribeAutoScaleConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterType{};
  shared_ptr<bool> enableAutoGrow{};
  shared_ptr<bool> enableAutoShrink{};
  shared_ptr<string> excludeNodes{};
  shared_ptr<long> extraNodesGrowRatio{};
  shared_ptr<long> growIntervalInMinutes{};
  shared_ptr<long> growRatio{};
  shared_ptr<long> growTimeoutInMinutes{};
  shared_ptr<long> maxNodesInCluster{};
  shared_ptr<string> requestId{};
  shared_ptr<long> shrinkIdleTimes{};
  shared_ptr<long> shrinkIntervalInMinutes{};
  shared_ptr<string> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> uid{};

  DescribeAutoScaleConfigResponseBody() {}

  explicit DescribeAutoScaleConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (enableAutoGrow) {
      res["EnableAutoGrow"] = boost::any(*enableAutoGrow);
    }
    if (enableAutoShrink) {
      res["EnableAutoShrink"] = boost::any(*enableAutoShrink);
    }
    if (excludeNodes) {
      res["ExcludeNodes"] = boost::any(*excludeNodes);
    }
    if (extraNodesGrowRatio) {
      res["ExtraNodesGrowRatio"] = boost::any(*extraNodesGrowRatio);
    }
    if (growIntervalInMinutes) {
      res["GrowIntervalInMinutes"] = boost::any(*growIntervalInMinutes);
    }
    if (growRatio) {
      res["GrowRatio"] = boost::any(*growRatio);
    }
    if (growTimeoutInMinutes) {
      res["GrowTimeoutInMinutes"] = boost::any(*growTimeoutInMinutes);
    }
    if (maxNodesInCluster) {
      res["MaxNodesInCluster"] = boost::any(*maxNodesInCluster);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (shrinkIdleTimes) {
      res["ShrinkIdleTimes"] = boost::any(*shrinkIdleTimes);
    }
    if (shrinkIntervalInMinutes) {
      res["ShrinkIntervalInMinutes"] = boost::any(*shrinkIntervalInMinutes);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("EnableAutoGrow") != m.end() && !m["EnableAutoGrow"].empty()) {
      enableAutoGrow = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoGrow"]));
    }
    if (m.find("EnableAutoShrink") != m.end() && !m["EnableAutoShrink"].empty()) {
      enableAutoShrink = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoShrink"]));
    }
    if (m.find("ExcludeNodes") != m.end() && !m["ExcludeNodes"].empty()) {
      excludeNodes = make_shared<string>(boost::any_cast<string>(m["ExcludeNodes"]));
    }
    if (m.find("ExtraNodesGrowRatio") != m.end() && !m["ExtraNodesGrowRatio"].empty()) {
      extraNodesGrowRatio = make_shared<long>(boost::any_cast<long>(m["ExtraNodesGrowRatio"]));
    }
    if (m.find("GrowIntervalInMinutes") != m.end() && !m["GrowIntervalInMinutes"].empty()) {
      growIntervalInMinutes = make_shared<long>(boost::any_cast<long>(m["GrowIntervalInMinutes"]));
    }
    if (m.find("GrowRatio") != m.end() && !m["GrowRatio"].empty()) {
      growRatio = make_shared<long>(boost::any_cast<long>(m["GrowRatio"]));
    }
    if (m.find("GrowTimeoutInMinutes") != m.end() && !m["GrowTimeoutInMinutes"].empty()) {
      growTimeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["GrowTimeoutInMinutes"]));
    }
    if (m.find("MaxNodesInCluster") != m.end() && !m["MaxNodesInCluster"].empty()) {
      maxNodesInCluster = make_shared<long>(boost::any_cast<long>(m["MaxNodesInCluster"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShrinkIdleTimes") != m.end() && !m["ShrinkIdleTimes"].empty()) {
      shrinkIdleTimes = make_shared<long>(boost::any_cast<long>(m["ShrinkIdleTimes"]));
    }
    if (m.find("ShrinkIntervalInMinutes") != m.end() && !m["ShrinkIntervalInMinutes"].empty()) {
      shrinkIntervalInMinutes = make_shared<long>(boost::any_cast<long>(m["ShrinkIntervalInMinutes"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<string>(boost::any_cast<string>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~DescribeAutoScaleConfigResponseBody() = default;
};
class DescribeAutoScaleConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAutoScaleConfigResponseBody> body{};

  DescribeAutoScaleConfigResponse() {}

  explicit DescribeAutoScaleConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAutoScaleConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAutoScaleConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAutoScaleConfigResponse() = default;
};
class DescribeClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeClusterRequest() {}

  explicit DescribeClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeClusterRequest() = default;
};
class DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> tag{};
  shared_ptr<string> version{};

  DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo() {}

  explicit DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo() = default;
};
class DescribeClusterResponseBodyClusterInfoApplications : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo>> applicationInfo{};

  DescribeClusterResponseBodyClusterInfoApplications() {}

  explicit DescribeClusterResponseBodyClusterInfoApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationInfo) {
      vector<boost::any> temp1;
      for(auto item1:*applicationInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationInfo") != m.end() && !m["ApplicationInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationInfo"].type()) {
        vector<DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationInfo = make_shared<vector<DescribeClusterResponseBodyClusterInfoApplicationsApplicationInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoApplications() = default;
};
class DescribeClusterResponseBodyClusterInfoEcsInfoCompute : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceType{};

  DescribeClusterResponseBodyClusterInfoEcsInfoCompute() {}

  explicit DescribeClusterResponseBodyClusterInfoEcsInfoCompute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoEcsInfoCompute() = default;
};
class DescribeClusterResponseBodyClusterInfoEcsInfoLogin : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceType{};

  DescribeClusterResponseBodyClusterInfoEcsInfoLogin() {}

  explicit DescribeClusterResponseBodyClusterInfoEcsInfoLogin(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoEcsInfoLogin() = default;
};
class DescribeClusterResponseBodyClusterInfoEcsInfoManager : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceType{};

  DescribeClusterResponseBodyClusterInfoEcsInfoManager() {}

  explicit DescribeClusterResponseBodyClusterInfoEcsInfoManager(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoEcsInfoManager() = default;
};
class DescribeClusterResponseBodyClusterInfoEcsInfoProxyMgr : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> instanceType{};

  DescribeClusterResponseBodyClusterInfoEcsInfoProxyMgr() {}

  explicit DescribeClusterResponseBodyClusterInfoEcsInfoProxyMgr(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoEcsInfoProxyMgr() = default;
};
class DescribeClusterResponseBodyClusterInfoEcsInfo : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterResponseBodyClusterInfoEcsInfoCompute> compute{};
  shared_ptr<DescribeClusterResponseBodyClusterInfoEcsInfoLogin> login{};
  shared_ptr<DescribeClusterResponseBodyClusterInfoEcsInfoManager> manager{};
  shared_ptr<DescribeClusterResponseBodyClusterInfoEcsInfoProxyMgr> proxyMgr{};

  DescribeClusterResponseBodyClusterInfoEcsInfo() {}

  explicit DescribeClusterResponseBodyClusterInfoEcsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compute) {
      res["Compute"] = compute ? boost::any(compute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (login) {
      res["Login"] = login ? boost::any(login->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (manager) {
      res["Manager"] = manager ? boost::any(manager->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (proxyMgr) {
      res["ProxyMgr"] = proxyMgr ? boost::any(proxyMgr->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compute") != m.end() && !m["Compute"].empty()) {
      if (typeid(map<string, boost::any>) == m["Compute"].type()) {
        DescribeClusterResponseBodyClusterInfoEcsInfoCompute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Compute"]));
        compute = make_shared<DescribeClusterResponseBodyClusterInfoEcsInfoCompute>(model1);
      }
    }
    if (m.find("Login") != m.end() && !m["Login"].empty()) {
      if (typeid(map<string, boost::any>) == m["Login"].type()) {
        DescribeClusterResponseBodyClusterInfoEcsInfoLogin model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Login"]));
        login = make_shared<DescribeClusterResponseBodyClusterInfoEcsInfoLogin>(model1);
      }
    }
    if (m.find("Manager") != m.end() && !m["Manager"].empty()) {
      if (typeid(map<string, boost::any>) == m["Manager"].type()) {
        DescribeClusterResponseBodyClusterInfoEcsInfoManager model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Manager"]));
        manager = make_shared<DescribeClusterResponseBodyClusterInfoEcsInfoManager>(model1);
      }
    }
    if (m.find("ProxyMgr") != m.end() && !m["ProxyMgr"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProxyMgr"].type()) {
        DescribeClusterResponseBodyClusterInfoEcsInfoProxyMgr model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProxyMgr"]));
        proxyMgr = make_shared<DescribeClusterResponseBodyClusterInfoEcsInfoProxyMgr>(model1);
      }
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoEcsInfo() = default;
};
class DescribeClusterResponseBodyClusterInfoOnPremiseInfoOnPremiseInfo : public Darabonba::Model {
public:
  shared_ptr<string> hostName{};
  shared_ptr<string> IP{};
  shared_ptr<string> type{};

  DescribeClusterResponseBodyClusterInfoOnPremiseInfoOnPremiseInfo() {}

  explicit DescribeClusterResponseBodyClusterInfoOnPremiseInfoOnPremiseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (IP) {
      res["IP"] = boost::any(*IP);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("IP") != m.end() && !m["IP"].empty()) {
      IP = make_shared<string>(boost::any_cast<string>(m["IP"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoOnPremiseInfoOnPremiseInfo() = default;
};
class DescribeClusterResponseBodyClusterInfoOnPremiseInfo : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterResponseBodyClusterInfoOnPremiseInfoOnPremiseInfo>> onPremiseInfo{};

  DescribeClusterResponseBodyClusterInfoOnPremiseInfo() {}

  explicit DescribeClusterResponseBodyClusterInfoOnPremiseInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onPremiseInfo) {
      vector<boost::any> temp1;
      for(auto item1:*onPremiseInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnPremiseInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnPremiseInfo") != m.end() && !m["OnPremiseInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["OnPremiseInfo"].type()) {
        vector<DescribeClusterResponseBodyClusterInfoOnPremiseInfoOnPremiseInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnPremiseInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterResponseBodyClusterInfoOnPremiseInfoOnPremiseInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onPremiseInfo = make_shared<vector<DescribeClusterResponseBodyClusterInfoOnPremiseInfoOnPremiseInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoOnPremiseInfo() = default;
};
class DescribeClusterResponseBodyClusterInfoPostInstallScriptsPostInstallScriptInfo : public Darabonba::Model {
public:
  shared_ptr<string> args{};
  shared_ptr<string> url{};

  DescribeClusterResponseBodyClusterInfoPostInstallScriptsPostInstallScriptInfo() {}

  explicit DescribeClusterResponseBodyClusterInfoPostInstallScriptsPostInstallScriptInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["Args"] = boost::any(*args);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Args") != m.end() && !m["Args"].empty()) {
      args = make_shared<string>(boost::any_cast<string>(m["Args"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoPostInstallScriptsPostInstallScriptInfo() = default;
};
class DescribeClusterResponseBodyClusterInfoPostInstallScripts : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterResponseBodyClusterInfoPostInstallScriptsPostInstallScriptInfo>> postInstallScriptInfo{};

  DescribeClusterResponseBodyClusterInfoPostInstallScripts() {}

  explicit DescribeClusterResponseBodyClusterInfoPostInstallScripts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (postInstallScriptInfo) {
      vector<boost::any> temp1;
      for(auto item1:*postInstallScriptInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PostInstallScriptInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PostInstallScriptInfo") != m.end() && !m["PostInstallScriptInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["PostInstallScriptInfo"].type()) {
        vector<DescribeClusterResponseBodyClusterInfoPostInstallScriptsPostInstallScriptInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PostInstallScriptInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterResponseBodyClusterInfoPostInstallScriptsPostInstallScriptInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        postInstallScriptInfo = make_shared<vector<DescribeClusterResponseBodyClusterInfoPostInstallScriptsPostInstallScriptInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfoPostInstallScripts() = default;
};
class DescribeClusterResponseBodyClusterInfo : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<DescribeClusterResponseBodyClusterInfoApplications> applications{};
  shared_ptr<string> baseOsTag{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deployMode{};
  shared_ptr<string> description{};
  shared_ptr<string> ecsChargeType{};
  shared_ptr<DescribeClusterResponseBodyClusterInfoEcsInfo> ecsInfo{};
  shared_ptr<bool> haEnable{};
  shared_ptr<string> id{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> keyPairName{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};
  shared_ptr<DescribeClusterResponseBodyClusterInfoOnPremiseInfo> onPremiseInfo{};
  shared_ptr<string> osTag{};
  shared_ptr<DescribeClusterResponseBodyClusterInfoPostInstallScripts> postInstallScripts{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remoteDirectory{};
  shared_ptr<string> sccClusterId{};
  shared_ptr<string> schedulerType{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> volumeId{};
  shared_ptr<string> volumeMountpoint{};
  shared_ptr<string> volumeProtocol{};
  shared_ptr<string> volumeType{};
  shared_ptr<string> vpcId{};

  DescribeClusterResponseBodyClusterInfo() {}

  explicit DescribeClusterResponseBodyClusterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (applications) {
      res["Applications"] = applications ? boost::any(applications->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (baseOsTag) {
      res["BaseOsTag"] = boost::any(*baseOsTag);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deployMode) {
      res["DeployMode"] = boost::any(*deployMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ecsChargeType) {
      res["EcsChargeType"] = boost::any(*ecsChargeType);
    }
    if (ecsInfo) {
      res["EcsInfo"] = ecsInfo ? boost::any(ecsInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (haEnable) {
      res["HaEnable"] = boost::any(*haEnable);
    }
    if (id) {
      res["Id"] = boost::any(*id);
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
    if (keyPairName) {
      res["KeyPairName"] = boost::any(*keyPairName);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (onPremiseInfo) {
      res["OnPremiseInfo"] = onPremiseInfo ? boost::any(onPremiseInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (postInstallScripts) {
      res["PostInstallScripts"] = postInstallScripts ? boost::any(postInstallScripts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remoteDirectory) {
      res["RemoteDirectory"] = boost::any(*remoteDirectory);
    }
    if (sccClusterId) {
      res["SccClusterId"] = boost::any(*sccClusterId);
    }
    if (schedulerType) {
      res["SchedulerType"] = boost::any(*schedulerType);
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
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    if (volumeMountpoint) {
      res["VolumeMountpoint"] = boost::any(*volumeMountpoint);
    }
    if (volumeProtocol) {
      res["VolumeProtocol"] = boost::any(*volumeProtocol);
    }
    if (volumeType) {
      res["VolumeType"] = boost::any(*volumeType);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(map<string, boost::any>) == m["Applications"].type()) {
        DescribeClusterResponseBodyClusterInfoApplications model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Applications"]));
        applications = make_shared<DescribeClusterResponseBodyClusterInfoApplications>(model1);
      }
    }
    if (m.find("BaseOsTag") != m.end() && !m["BaseOsTag"].empty()) {
      baseOsTag = make_shared<string>(boost::any_cast<string>(m["BaseOsTag"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeployMode") != m.end() && !m["DeployMode"].empty()) {
      deployMode = make_shared<string>(boost::any_cast<string>(m["DeployMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EcsChargeType") != m.end() && !m["EcsChargeType"].empty()) {
      ecsChargeType = make_shared<string>(boost::any_cast<string>(m["EcsChargeType"]));
    }
    if (m.find("EcsInfo") != m.end() && !m["EcsInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["EcsInfo"].type()) {
        DescribeClusterResponseBodyClusterInfoEcsInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EcsInfo"]));
        ecsInfo = make_shared<DescribeClusterResponseBodyClusterInfoEcsInfo>(model1);
      }
    }
    if (m.find("HaEnable") != m.end() && !m["HaEnable"].empty()) {
      haEnable = make_shared<bool>(boost::any_cast<bool>(m["HaEnable"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
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
    if (m.find("KeyPairName") != m.end() && !m["KeyPairName"].empty()) {
      keyPairName = make_shared<string>(boost::any_cast<string>(m["KeyPairName"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OnPremiseInfo") != m.end() && !m["OnPremiseInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OnPremiseInfo"].type()) {
        DescribeClusterResponseBodyClusterInfoOnPremiseInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OnPremiseInfo"]));
        onPremiseInfo = make_shared<DescribeClusterResponseBodyClusterInfoOnPremiseInfo>(model1);
      }
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("PostInstallScripts") != m.end() && !m["PostInstallScripts"].empty()) {
      if (typeid(map<string, boost::any>) == m["PostInstallScripts"].type()) {
        DescribeClusterResponseBodyClusterInfoPostInstallScripts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PostInstallScripts"]));
        postInstallScripts = make_shared<DescribeClusterResponseBodyClusterInfoPostInstallScripts>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RemoteDirectory") != m.end() && !m["RemoteDirectory"].empty()) {
      remoteDirectory = make_shared<string>(boost::any_cast<string>(m["RemoteDirectory"]));
    }
    if (m.find("SccClusterId") != m.end() && !m["SccClusterId"].empty()) {
      sccClusterId = make_shared<string>(boost::any_cast<string>(m["SccClusterId"]));
    }
    if (m.find("SchedulerType") != m.end() && !m["SchedulerType"].empty()) {
      schedulerType = make_shared<string>(boost::any_cast<string>(m["SchedulerType"]));
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
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<string>(boost::any_cast<string>(m["VolumeId"]));
    }
    if (m.find("VolumeMountpoint") != m.end() && !m["VolumeMountpoint"].empty()) {
      volumeMountpoint = make_shared<string>(boost::any_cast<string>(m["VolumeMountpoint"]));
    }
    if (m.find("VolumeProtocol") != m.end() && !m["VolumeProtocol"].empty()) {
      volumeProtocol = make_shared<string>(boost::any_cast<string>(m["VolumeProtocol"]));
    }
    if (m.find("VolumeType") != m.end() && !m["VolumeType"].empty()) {
      volumeType = make_shared<string>(boost::any_cast<string>(m["VolumeType"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeClusterResponseBodyClusterInfo() = default;
};
class DescribeClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeClusterResponseBodyClusterInfo> clusterInfo{};
  shared_ptr<string> requestId{};

  DescribeClusterResponseBody() {}

  explicit DescribeClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterInfo) {
      res["ClusterInfo"] = clusterInfo ? boost::any(clusterInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterInfo") != m.end() && !m["ClusterInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterInfo"].type()) {
        DescribeClusterResponseBodyClusterInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterInfo"]));
        clusterInfo = make_shared<DescribeClusterResponseBodyClusterInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClusterResponseBody() = default;
};
class DescribeClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterResponseBody> body{};

  DescribeClusterResponse() {}

  explicit DescribeClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterResponse() = default;
};
class DescribeContainerAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerId{};

  DescribeContainerAppRequest() {}

  explicit DescribeContainerAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerId) {
      res["ContainerId"] = boost::any(*containerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerId") != m.end() && !m["ContainerId"].empty()) {
      containerId = make_shared<string>(boost::any_cast<string>(m["ContainerId"]));
    }
  }


  virtual ~DescribeContainerAppRequest() = default;
};
class DescribeContainerAppResponseBodyContainerAppInfo : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> imageTag{};
  shared_ptr<string> name{};
  shared_ptr<string> repository{};
  shared_ptr<string> type{};

  DescribeContainerAppResponseBodyContainerAppInfo() {}

  explicit DescribeContainerAppResponseBodyContainerAppInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (repository) {
      res["Repository"] = boost::any(*repository);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Repository") != m.end() && !m["Repository"].empty()) {
      repository = make_shared<string>(boost::any_cast<string>(m["Repository"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeContainerAppResponseBodyContainerAppInfo() = default;
};
class DescribeContainerAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeContainerAppResponseBodyContainerAppInfo> containerAppInfo{};
  shared_ptr<string> requestId{};

  DescribeContainerAppResponseBody() {}

  explicit DescribeContainerAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerAppInfo) {
      res["ContainerAppInfo"] = containerAppInfo ? boost::any(containerAppInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerAppInfo") != m.end() && !m["ContainerAppInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ContainerAppInfo"].type()) {
        DescribeContainerAppResponseBodyContainerAppInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ContainerAppInfo"]));
        containerAppInfo = make_shared<DescribeContainerAppResponseBodyContainerAppInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeContainerAppResponseBody() = default;
};
class DescribeContainerAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeContainerAppResponseBody> body{};

  DescribeContainerAppResponse() {}

  explicit DescribeContainerAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeContainerAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeContainerAppResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeContainerAppResponse() = default;
};
class DescribeGWSClusterPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<bool> asyncMode{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> taskId{};

  DescribeGWSClusterPolicyRequest() {}

  explicit DescribeGWSClusterPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncMode) {
      res["AsyncMode"] = boost::any(*asyncMode);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsyncMode") != m.end() && !m["AsyncMode"].empty()) {
      asyncMode = make_shared<bool>(boost::any_cast<bool>(m["AsyncMode"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeGWSClusterPolicyRequest() = default;
};
class DescribeGWSClusterPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clipboard{};
  shared_ptr<string> localDrive{};
  shared_ptr<string> requestId{};
  shared_ptr<string> usbRedirect{};
  shared_ptr<string> watermark{};

  DescribeGWSClusterPolicyResponseBody() {}

  explicit DescribeGWSClusterPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clipboard) {
      res["Clipboard"] = boost::any(*clipboard);
    }
    if (localDrive) {
      res["LocalDrive"] = boost::any(*localDrive);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (usbRedirect) {
      res["UsbRedirect"] = boost::any(*usbRedirect);
    }
    if (watermark) {
      res["Watermark"] = boost::any(*watermark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clipboard") != m.end() && !m["Clipboard"].empty()) {
      clipboard = make_shared<string>(boost::any_cast<string>(m["Clipboard"]));
    }
    if (m.find("LocalDrive") != m.end() && !m["LocalDrive"].empty()) {
      localDrive = make_shared<string>(boost::any_cast<string>(m["LocalDrive"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UsbRedirect") != m.end() && !m["UsbRedirect"].empty()) {
      usbRedirect = make_shared<string>(boost::any_cast<string>(m["UsbRedirect"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      watermark = make_shared<string>(boost::any_cast<string>(m["Watermark"]));
    }
  }


  virtual ~DescribeGWSClusterPolicyResponseBody() = default;
};
class DescribeGWSClusterPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGWSClusterPolicyResponseBody> body{};

  DescribeGWSClusterPolicyResponse() {}

  explicit DescribeGWSClusterPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGWSClusterPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGWSClusterPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGWSClusterPolicyResponse() = default;
};
class DescribeGWSClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeGWSClustersRequest() {}

  explicit DescribeGWSClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeGWSClustersRequest() = default;
};
class DescribeGWSClustersResponseBodyClustersClusterInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> createTime{};
  shared_ptr<long> instanceCount{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};

  DescribeGWSClustersResponseBodyClustersClusterInfo() {}

  explicit DescribeGWSClustersResponseBodyClustersClusterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeGWSClustersResponseBodyClustersClusterInfo() = default;
};
class DescribeGWSClustersResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGWSClustersResponseBodyClustersClusterInfo>> clusterInfo{};

  DescribeGWSClustersResponseBodyClusters() {}

  explicit DescribeGWSClustersResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterInfo) {
      vector<boost::any> temp1;
      for(auto item1:*clusterInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClusterInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterInfo") != m.end() && !m["ClusterInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ClusterInfo"].type()) {
        vector<DescribeGWSClustersResponseBodyClustersClusterInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClusterInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGWSClustersResponseBodyClustersClusterInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterInfo = make_shared<vector<DescribeGWSClustersResponseBodyClustersClusterInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeGWSClustersResponseBodyClusters() = default;
};
class DescribeGWSClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> callerType{};
  shared_ptr<DescribeGWSClustersResponseBodyClusters> clusters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeGWSClustersResponseBody() {}

  explicit DescribeGWSClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callerType) {
      res["CallerType"] = boost::any(*callerType);
    }
    if (clusters) {
      res["Clusters"] = clusters ? boost::any(clusters->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("CallerType") != m.end() && !m["CallerType"].empty()) {
      callerType = make_shared<string>(boost::any_cast<string>(m["CallerType"]));
    }
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(map<string, boost::any>) == m["Clusters"].type()) {
        DescribeGWSClustersResponseBodyClusters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Clusters"]));
        clusters = make_shared<DescribeGWSClustersResponseBodyClusters>(model1);
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


  virtual ~DescribeGWSClustersResponseBody() = default;
};
class DescribeGWSClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGWSClustersResponseBody> body{};

  DescribeGWSClustersResponse() {}

  explicit DescribeGWSClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGWSClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGWSClustersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGWSClustersResponse() = default;
};
class DescribeGWSImagesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeGWSImagesRequest() {}

  explicit DescribeGWSImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeGWSImagesRequest() = default;
};
class DescribeGWSImagesResponseBodyImagesImageInfo : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageType{};
  shared_ptr<string> name{};
  shared_ptr<string> progress{};
  shared_ptr<long> size{};
  shared_ptr<string> status{};

  DescribeGWSImagesResponseBodyImagesImageInfo() {}

  explicit DescribeGWSImagesResponseBodyImagesImageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageType) {
      res["ImageType"] = boost::any(*imageType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageType") != m.end() && !m["ImageType"].empty()) {
      imageType = make_shared<string>(boost::any_cast<string>(m["ImageType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeGWSImagesResponseBodyImagesImageInfo() = default;
};
class DescribeGWSImagesResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGWSImagesResponseBodyImagesImageInfo>> imageInfo{};

  DescribeGWSImagesResponseBodyImages() {}

  explicit DescribeGWSImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageInfo) {
      vector<boost::any> temp1;
      for(auto item1:*imageInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageInfo") != m.end() && !m["ImageInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageInfo"].type()) {
        vector<DescribeGWSImagesResponseBodyImagesImageInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGWSImagesResponseBodyImagesImageInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageInfo = make_shared<vector<DescribeGWSImagesResponseBodyImagesImageInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeGWSImagesResponseBodyImages() = default;
};
class DescribeGWSImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeGWSImagesResponseBodyImages> images{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeGWSImagesResponseBody() {}

  explicit DescribeGWSImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      res["Images"] = images ? boost::any(images->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(map<string, boost::any>) == m["Images"].type()) {
        DescribeGWSImagesResponseBodyImages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Images"]));
        images = make_shared<DescribeGWSImagesResponseBodyImages>(model1);
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


  virtual ~DescribeGWSImagesResponseBody() = default;
};
class DescribeGWSImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGWSImagesResponseBody> body{};

  DescribeGWSImagesResponse() {}

  explicit DescribeGWSImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGWSImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGWSImagesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGWSImagesResponse() = default;
};
class DescribeGWSInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userName{};
  shared_ptr<long> userUid{};

  DescribeGWSInstancesRequest() {}

  explicit DescribeGWSInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userUid) {
      res["UserUid"] = boost::any(*userUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
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
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserUid") != m.end() && !m["UserUid"].empty()) {
      userUid = make_shared<long>(boost::any_cast<long>(m["UserUid"]));
    }
  }


  virtual ~DescribeGWSInstancesRequest() = default;
};
class DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppListAppInfo : public Darabonba::Model {
public:
  shared_ptr<string> appArgs{};
  shared_ptr<string> appName{};
  shared_ptr<string> appPath{};

  DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppListAppInfo() {}

  explicit DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppListAppInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appArgs) {
      res["AppArgs"] = boost::any(*appArgs);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appPath) {
      res["AppPath"] = boost::any(*appPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppArgs") != m.end() && !m["AppArgs"].empty()) {
      appArgs = make_shared<string>(boost::any_cast<string>(m["AppArgs"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppPath") != m.end() && !m["AppPath"].empty()) {
      appPath = make_shared<string>(boost::any_cast<string>(m["AppPath"]));
    }
  }


  virtual ~DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppListAppInfo() = default;
};
class DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppListAppInfo>> appInfo{};

  DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppList() {}

  explicit DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfo) {
      vector<boost::any> temp1;
      for(auto item1:*appInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfo") != m.end() && !m["AppInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AppInfo"].type()) {
        vector<DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppListAppInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppListAppInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appInfo = make_shared<vector<DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppListAppInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppList() = default;
};
class DescribeGWSInstancesResponseBodyInstancesInstanceInfo : public Darabonba::Model {
public:
  shared_ptr<DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppList> appList{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> userName{};
  shared_ptr<string> workMode{};

  DescribeGWSInstancesResponseBodyInstancesInstanceInfo() {}

  explicit DescribeGWSInstancesResponseBodyInstancesInstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appList) {
      res["AppList"] = appList ? boost::any(appList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (workMode) {
      res["WorkMode"] = boost::any(*workMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppList") != m.end() && !m["AppList"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppList"].type()) {
        DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppList"]));
        appList = make_shared<DescribeGWSInstancesResponseBodyInstancesInstanceInfoAppList>(model1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("WorkMode") != m.end() && !m["WorkMode"].empty()) {
      workMode = make_shared<string>(boost::any_cast<string>(m["WorkMode"]));
    }
  }


  virtual ~DescribeGWSInstancesResponseBodyInstancesInstanceInfo() = default;
};
class DescribeGWSInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGWSInstancesResponseBodyInstancesInstanceInfo>> instanceInfo{};

  DescribeGWSInstancesResponseBodyInstances() {}

  explicit DescribeGWSInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*instanceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceInfo") != m.end() && !m["InstanceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceInfo"].type()) {
        vector<DescribeGWSInstancesResponseBodyInstancesInstanceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGWSInstancesResponseBodyInstancesInstanceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceInfo = make_shared<vector<DescribeGWSInstancesResponseBodyInstancesInstanceInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeGWSInstancesResponseBodyInstances() = default;
};
class DescribeGWSInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeGWSInstancesResponseBodyInstances> instances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeGWSInstancesResponseBody() {}

  explicit DescribeGWSInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      res["Instances"] = instances ? boost::any(instances->toMap()) : boost::any(map<string,boost::any>({}));
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
      if (typeid(map<string, boost::any>) == m["Instances"].type()) {
        DescribeGWSInstancesResponseBodyInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instances"]));
        instances = make_shared<DescribeGWSInstancesResponseBodyInstances>(model1);
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


  virtual ~DescribeGWSInstancesResponseBody() = default;
};
class DescribeGWSInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGWSInstancesResponseBody> body{};

  DescribeGWSInstancesResponse() {}

  explicit DescribeGWSInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGWSInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGWSInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGWSInstancesResponse() = default;
};
class DescribeImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> containerType{};
  shared_ptr<string> imageTag{};
  shared_ptr<string> regionId{};
  shared_ptr<string> repository{};

  DescribeImageRequest() {}

  explicit DescribeImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (containerType) {
      res["ContainerType"] = boost::any(*containerType);
    }
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repository) {
      res["Repository"] = boost::any(*repository);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ContainerType") != m.end() && !m["ContainerType"].empty()) {
      containerType = make_shared<string>(boost::any_cast<string>(m["ContainerType"]));
    }
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Repository") != m.end() && !m["Repository"].empty()) {
      repository = make_shared<string>(boost::any_cast<string>(m["Repository"]));
    }
  }


  virtual ~DescribeImageRequest() = default;
};
class DescribeImageResponseBodyImageInfo : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> repository{};
  shared_ptr<string> status{};
  shared_ptr<string> system{};
  shared_ptr<string> tag{};
  shared_ptr<string> type{};
  shared_ptr<string> updateDateTime{};

  DescribeImageResponseBodyImageInfo() {}

  explicit DescribeImageResponseBodyImageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (repository) {
      res["Repository"] = boost::any(*repository);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (system) {
      res["System"] = boost::any(*system);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateDateTime) {
      res["UpdateDateTime"] = boost::any(*updateDateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("Repository") != m.end() && !m["Repository"].empty()) {
      repository = make_shared<string>(boost::any_cast<string>(m["Repository"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("System") != m.end() && !m["System"].empty()) {
      system = make_shared<string>(boost::any_cast<string>(m["System"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateDateTime") != m.end() && !m["UpdateDateTime"].empty()) {
      updateDateTime = make_shared<string>(boost::any_cast<string>(m["UpdateDateTime"]));
    }
  }


  virtual ~DescribeImageResponseBodyImageInfo() = default;
};
class DescribeImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeImageResponseBodyImageInfo> imageInfo{};
  shared_ptr<string> requestId{};

  DescribeImageResponseBody() {}

  explicit DescribeImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageInfo) {
      res["ImageInfo"] = imageInfo ? boost::any(imageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageInfo") != m.end() && !m["ImageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageInfo"].type()) {
        DescribeImageResponseBodyImageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageInfo"]));
        imageInfo = make_shared<DescribeImageResponseBodyImageInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeImageResponseBody() = default;
};
class DescribeImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeImageResponseBody> body{};

  DescribeImageResponse() {}

  explicit DescribeImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImageResponse() = default;
};
class DescribeImageGatewayConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeImageGatewayConfigRequest() {}

  explicit DescribeImageGatewayConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeImageGatewayConfigRequest() = default;
};
class DescribeImageGatewayConfigResponseBodyImagegwLocationsLocationInfo : public Darabonba::Model {
public:
  shared_ptr<string> authentication{};
  shared_ptr<string> location{};
  shared_ptr<string> remoteType{};
  shared_ptr<string> URL{};

  DescribeImageGatewayConfigResponseBodyImagegwLocationsLocationInfo() {}

  explicit DescribeImageGatewayConfigResponseBodyImagegwLocationsLocationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authentication) {
      res["Authentication"] = boost::any(*authentication);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (remoteType) {
      res["RemoteType"] = boost::any(*remoteType);
    }
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Authentication") != m.end() && !m["Authentication"].empty()) {
      authentication = make_shared<string>(boost::any_cast<string>(m["Authentication"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("RemoteType") != m.end() && !m["RemoteType"].empty()) {
      remoteType = make_shared<string>(boost::any_cast<string>(m["RemoteType"]));
    }
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~DescribeImageGatewayConfigResponseBodyImagegwLocationsLocationInfo() = default;
};
class DescribeImageGatewayConfigResponseBodyImagegwLocations : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeImageGatewayConfigResponseBodyImagegwLocationsLocationInfo>> locationInfo{};

  DescribeImageGatewayConfigResponseBodyImagegwLocations() {}

  explicit DescribeImageGatewayConfigResponseBodyImagegwLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (locationInfo) {
      vector<boost::any> temp1;
      for(auto item1:*locationInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LocationInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocationInfo") != m.end() && !m["LocationInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["LocationInfo"].type()) {
        vector<DescribeImageGatewayConfigResponseBodyImagegwLocationsLocationInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LocationInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImageGatewayConfigResponseBodyImagegwLocationsLocationInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        locationInfo = make_shared<vector<DescribeImageGatewayConfigResponseBodyImagegwLocationsLocationInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeImageGatewayConfigResponseBodyImagegwLocations() = default;
};
class DescribeImageGatewayConfigResponseBodyImagegw : public Darabonba::Model {
public:
  shared_ptr<string> defaultImageLocation{};
  shared_ptr<string> imageExpirationTimeout{};
  shared_ptr<DescribeImageGatewayConfigResponseBodyImagegwLocations> locations{};
  shared_ptr<string> mongoDBURI{};
  shared_ptr<long> pullUpdateTimeout{};
  shared_ptr<string> updateDateTime{};

  DescribeImageGatewayConfigResponseBodyImagegw() {}

  explicit DescribeImageGatewayConfigResponseBodyImagegw(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultImageLocation) {
      res["DefaultImageLocation"] = boost::any(*defaultImageLocation);
    }
    if (imageExpirationTimeout) {
      res["ImageExpirationTimeout"] = boost::any(*imageExpirationTimeout);
    }
    if (locations) {
      res["Locations"] = locations ? boost::any(locations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mongoDBURI) {
      res["MongoDBURI"] = boost::any(*mongoDBURI);
    }
    if (pullUpdateTimeout) {
      res["PullUpdateTimeout"] = boost::any(*pullUpdateTimeout);
    }
    if (updateDateTime) {
      res["UpdateDateTime"] = boost::any(*updateDateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultImageLocation") != m.end() && !m["DefaultImageLocation"].empty()) {
      defaultImageLocation = make_shared<string>(boost::any_cast<string>(m["DefaultImageLocation"]));
    }
    if (m.find("ImageExpirationTimeout") != m.end() && !m["ImageExpirationTimeout"].empty()) {
      imageExpirationTimeout = make_shared<string>(boost::any_cast<string>(m["ImageExpirationTimeout"]));
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      if (typeid(map<string, boost::any>) == m["Locations"].type()) {
        DescribeImageGatewayConfigResponseBodyImagegwLocations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Locations"]));
        locations = make_shared<DescribeImageGatewayConfigResponseBodyImagegwLocations>(model1);
      }
    }
    if (m.find("MongoDBURI") != m.end() && !m["MongoDBURI"].empty()) {
      mongoDBURI = make_shared<string>(boost::any_cast<string>(m["MongoDBURI"]));
    }
    if (m.find("PullUpdateTimeout") != m.end() && !m["PullUpdateTimeout"].empty()) {
      pullUpdateTimeout = make_shared<long>(boost::any_cast<long>(m["PullUpdateTimeout"]));
    }
    if (m.find("UpdateDateTime") != m.end() && !m["UpdateDateTime"].empty()) {
      updateDateTime = make_shared<string>(boost::any_cast<string>(m["UpdateDateTime"]));
    }
  }


  virtual ~DescribeImageGatewayConfigResponseBodyImagegw() = default;
};
class DescribeImageGatewayConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeImageGatewayConfigResponseBodyImagegw> imagegw{};
  shared_ptr<string> requestId{};

  DescribeImageGatewayConfigResponseBody() {}

  explicit DescribeImageGatewayConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imagegw) {
      res["Imagegw"] = imagegw ? boost::any(imagegw->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Imagegw") != m.end() && !m["Imagegw"].empty()) {
      if (typeid(map<string, boost::any>) == m["Imagegw"].type()) {
        DescribeImageGatewayConfigResponseBodyImagegw model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Imagegw"]));
        imagegw = make_shared<DescribeImageGatewayConfigResponseBodyImagegw>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeImageGatewayConfigResponseBody() = default;
};
class DescribeImageGatewayConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeImageGatewayConfigResponseBody> body{};

  DescribeImageGatewayConfigResponse() {}

  explicit DescribeImageGatewayConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeImageGatewayConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImageGatewayConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImageGatewayConfigResponse() = default;
};
class DescribeImagePriceRequest : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> imageId{};
  shared_ptr<string> orderType{};
  shared_ptr<long> period{};
  shared_ptr<string> priceUnit{};
  shared_ptr<string> skuCode{};

  DescribeImagePriceRequest() {}

  explicit DescribeImagePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (priceUnit) {
      res["PriceUnit"] = boost::any(*priceUnit);
    }
    if (skuCode) {
      res["SkuCode"] = boost::any(*skuCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("PriceUnit") != m.end() && !m["PriceUnit"].empty()) {
      priceUnit = make_shared<string>(boost::any_cast<string>(m["PriceUnit"]));
    }
    if (m.find("SkuCode") != m.end() && !m["SkuCode"].empty()) {
      skuCode = make_shared<string>(boost::any_cast<string>(m["SkuCode"]));
    }
  }


  virtual ~DescribeImagePriceRequest() = default;
};
class DescribeImagePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<double> discountPrice{};
  shared_ptr<string> imageId{};
  shared_ptr<double> originalPrice{};
  shared_ptr<string> requestId{};
  shared_ptr<double> tradePrice{};

  DescribeImagePriceResponseBody() {}

  explicit DescribeImagePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~DescribeImagePriceResponseBody() = default;
};
class DescribeImagePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeImagePriceResponseBody> body{};

  DescribeImagePriceResponse() {}

  explicit DescribeImagePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeImagePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImagePriceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImagePriceResponse() = default;
};
class DescribeJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobId{};

  DescribeJobRequest() {}

  explicit DescribeJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeJobRequest() = default;
};
class DescribeJobResponseBodyMessage : public Darabonba::Model {
public:
  shared_ptr<string> jobInfo{};

  DescribeJobResponseBodyMessage() {}

  explicit DescribeJobResponseBodyMessage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobInfo) {
      res["JobInfo"] = boost::any(*jobInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobInfo") != m.end() && !m["JobInfo"].empty()) {
      jobInfo = make_shared<string>(boost::any_cast<string>(m["JobInfo"]));
    }
  }


  virtual ~DescribeJobResponseBodyMessage() = default;
};
class DescribeJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeJobResponseBodyMessage> message{};
  shared_ptr<string> requestId{};

  DescribeJobResponseBody() {}

  explicit DescribeJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = message ? boost::any(message->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      if (typeid(map<string, boost::any>) == m["Message"].type()) {
        DescribeJobResponseBodyMessage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Message"]));
        message = make_shared<DescribeJobResponseBodyMessage>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeJobResponseBody() = default;
};
class DescribeJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeJobResponseBody> body{};

  DescribeJobResponse() {}

  explicit DescribeJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeJobResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeJobResponse() = default;
};
class DescribeNFSClientStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeNFSClientStatusRequest() {}

  explicit DescribeNFSClientStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeNFSClientStatusRequest() = default;
};
class DescribeNFSClientStatusResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> exitCode{};
  shared_ptr<string> invokeRecordStatus{};
  shared_ptr<string> output{};

  DescribeNFSClientStatusResponseBodyResult() {}

  explicit DescribeNFSClientStatusResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exitCode) {
      res["ExitCode"] = boost::any(*exitCode);
    }
    if (invokeRecordStatus) {
      res["InvokeRecordStatus"] = boost::any(*invokeRecordStatus);
    }
    if (output) {
      res["Output"] = boost::any(*output);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExitCode") != m.end() && !m["ExitCode"].empty()) {
      exitCode = make_shared<long>(boost::any_cast<long>(m["ExitCode"]));
    }
    if (m.find("InvokeRecordStatus") != m.end() && !m["InvokeRecordStatus"].empty()) {
      invokeRecordStatus = make_shared<string>(boost::any_cast<string>(m["InvokeRecordStatus"]));
    }
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
  }


  virtual ~DescribeNFSClientStatusResponseBodyResult() = default;
};
class DescribeNFSClientStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeNFSClientStatusResponseBodyResult> result{};
  shared_ptr<string> status{};

  DescribeNFSClientStatusResponseBody() {}

  explicit DescribeNFSClientStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        DescribeNFSClientStatusResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<DescribeNFSClientStatusResponseBodyResult>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeNFSClientStatusResponseBody() = default;
};
class DescribeNFSClientStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeNFSClientStatusResponseBody> body{};

  DescribeNFSClientStatusResponse() {}

  explicit DescribeNFSClientStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeNFSClientStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNFSClientStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNFSClientStatusResponse() = default;
};
class DescribePriceRequestCommoditiesDataDisks : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<bool> deleteWithInstance{};
  shared_ptr<bool> encrypted{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<long> size{};

  DescribePriceRequestCommoditiesDataDisks() {}

  explicit DescribePriceRequestCommoditiesDataDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["category"] = boost::any(*category);
    }
    if (deleteWithInstance) {
      res["deleteWithInstance"] = boost::any(*deleteWithInstance);
    }
    if (encrypted) {
      res["encrypted"] = boost::any(*encrypted);
    }
    if (performanceLevel) {
      res["performanceLevel"] = boost::any(*performanceLevel);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("category") != m.end() && !m["category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["category"]));
    }
    if (m.find("deleteWithInstance") != m.end() && !m["deleteWithInstance"].empty()) {
      deleteWithInstance = make_shared<bool>(boost::any_cast<bool>(m["deleteWithInstance"]));
    }
    if (m.find("encrypted") != m.end() && !m["encrypted"].empty()) {
      encrypted = make_shared<bool>(boost::any_cast<bool>(m["encrypted"]));
    }
    if (m.find("performanceLevel") != m.end() && !m["performanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["performanceLevel"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
  }


  virtual ~DescribePriceRequestCommoditiesDataDisks() = default;
};
class DescribePriceRequestCommodities : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<vector<DescribePriceRequestCommoditiesDataDisks>> dataDisks{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandWidthOut{};
  shared_ptr<string> networkType{};
  shared_ptr<string> nodeType{};
  shared_ptr<long> period{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<string> systemDiskPerformanceLevel{};
  shared_ptr<long> systemDiskSize{};

  DescribePriceRequestCommodities() {}

  explicit DescribePriceRequestCommodities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (dataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisks"] = boost::any(temp1);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (internetChargeType) {
      res["InternetChargeType"] = boost::any(*internetChargeType);
    }
    if (internetMaxBandWidthOut) {
      res["InternetMaxBandWidthOut"] = boost::any(*internetMaxBandWidthOut);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskPerformanceLevel) {
      res["SystemDiskPerformanceLevel"] = boost::any(*systemDiskPerformanceLevel);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisks"].type()) {
        vector<DescribePriceRequestCommoditiesDataDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePriceRequestCommoditiesDataDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisks = make_shared<vector<DescribePriceRequestCommoditiesDataDisks>>(expect1);
      }
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InternetChargeType") != m.end() && !m["InternetChargeType"].empty()) {
      internetChargeType = make_shared<string>(boost::any_cast<string>(m["InternetChargeType"]));
    }
    if (m.find("InternetMaxBandWidthOut") != m.end() && !m["InternetMaxBandWidthOut"].empty()) {
      internetMaxBandWidthOut = make_shared<long>(boost::any_cast<long>(m["InternetMaxBandWidthOut"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("SystemDiskPerformanceLevel") != m.end() && !m["SystemDiskPerformanceLevel"].empty()) {
      systemDiskPerformanceLevel = make_shared<string>(boost::any_cast<string>(m["SystemDiskPerformanceLevel"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
  }


  virtual ~DescribePriceRequestCommodities() = default;
};
class DescribePriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<vector<DescribePriceRequestCommodities>> commodities{};
  shared_ptr<string> orderType{};
  shared_ptr<string> priceUnit{};

  DescribePriceRequest() {}

  explicit DescribePriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (commodities) {
      vector<boost::any> temp1;
      for(auto item1:*commodities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Commodities"] = boost::any(temp1);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (priceUnit) {
      res["PriceUnit"] = boost::any(*priceUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Commodities") != m.end() && !m["Commodities"].empty()) {
      if (typeid(vector<boost::any>) == m["Commodities"].type()) {
        vector<DescribePriceRequestCommodities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Commodities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePriceRequestCommodities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        commodities = make_shared<vector<DescribePriceRequestCommodities>>(expect1);
      }
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PriceUnit") != m.end() && !m["PriceUnit"].empty()) {
      priceUnit = make_shared<string>(boost::any_cast<string>(m["PriceUnit"]));
    }
  }


  virtual ~DescribePriceRequest() = default;
};
class DescribePriceResponseBodyPricesPriceInfo : public Darabonba::Model {
public:
  shared_ptr<string> currency{};
  shared_ptr<string> nodeType{};
  shared_ptr<double> originalPrice{};
  shared_ptr<double> tradePrice{};

  DescribePriceResponseBodyPricesPriceInfo() {}

  explicit DescribePriceResponseBodyPricesPriceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~DescribePriceResponseBodyPricesPriceInfo() = default;
};
class DescribePriceResponseBodyPrices : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePriceResponseBodyPricesPriceInfo>> priceInfo{};

  DescribePriceResponseBodyPrices() {}

  explicit DescribePriceResponseBodyPrices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (priceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*priceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PriceInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PriceInfo") != m.end() && !m["PriceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["PriceInfo"].type()) {
        vector<DescribePriceResponseBodyPricesPriceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PriceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePriceResponseBodyPricesPriceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        priceInfo = make_shared<vector<DescribePriceResponseBodyPricesPriceInfo>>(expect1);
      }
    }
  }


  virtual ~DescribePriceResponseBodyPrices() = default;
};
class DescribePriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePriceResponseBodyPrices> prices{};
  shared_ptr<string> requestId{};
  shared_ptr<double> totalTradePrice{};

  DescribePriceResponseBody() {}

  explicit DescribePriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prices) {
      res["Prices"] = prices ? boost::any(prices->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalTradePrice) {
      res["TotalTradePrice"] = boost::any(*totalTradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Prices") != m.end() && !m["Prices"].empty()) {
      if (typeid(map<string, boost::any>) == m["Prices"].type()) {
        DescribePriceResponseBodyPrices model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Prices"]));
        prices = make_shared<DescribePriceResponseBodyPrices>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalTradePrice") != m.end() && !m["TotalTradePrice"].empty()) {
      totalTradePrice = make_shared<double>(boost::any_cast<double>(m["TotalTradePrice"]));
    }
  }


  virtual ~DescribePriceResponseBody() = default;
};
class DescribePriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePriceResponseBody> body{};

  DescribePriceResponse() {}

  explicit DescribePriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePriceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePriceResponse() = default;
};
class EcdDeleteDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> desktopId{};

  EcdDeleteDesktopsRequest() {}

  explicit EcdDeleteDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~EcdDeleteDesktopsRequest() = default;
};
class EcdDeleteDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EcdDeleteDesktopsResponseBody() {}

  explicit EcdDeleteDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EcdDeleteDesktopsResponseBody() = default;
};
class EcdDeleteDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EcdDeleteDesktopsResponseBody> body{};

  EcdDeleteDesktopsResponse() {}

  explicit EcdDeleteDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EcdDeleteDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EcdDeleteDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~EcdDeleteDesktopsResponse() = default;
};
class EditJobTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> arrayRequest{};
  shared_ptr<string> clockTime{};
  shared_ptr<string> commandLine{};
  shared_ptr<long> gpu{};
  shared_ptr<string> inputFileUrl{};
  shared_ptr<string> mem{};
  shared_ptr<string> name{};
  shared_ptr<long> node{};
  shared_ptr<string> packagePath{};
  shared_ptr<long> priority{};
  shared_ptr<string> queue{};
  shared_ptr<bool> reRunable{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> stderrRedirectPath{};
  shared_ptr<string> stdoutRedirectPath{};
  shared_ptr<long> task{};
  shared_ptr<string> templateId{};
  shared_ptr<long> thread{};
  shared_ptr<string> unzipCmd{};
  shared_ptr<string> variables{};
  shared_ptr<bool> withUnzipCmd{};

  EditJobTemplateRequest() {}

  explicit EditJobTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayRequest) {
      res["ArrayRequest"] = boost::any(*arrayRequest);
    }
    if (clockTime) {
      res["ClockTime"] = boost::any(*clockTime);
    }
    if (commandLine) {
      res["CommandLine"] = boost::any(*commandLine);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (inputFileUrl) {
      res["InputFileUrl"] = boost::any(*inputFileUrl);
    }
    if (mem) {
      res["Mem"] = boost::any(*mem);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (node) {
      res["Node"] = boost::any(*node);
    }
    if (packagePath) {
      res["PackagePath"] = boost::any(*packagePath);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (queue) {
      res["Queue"] = boost::any(*queue);
    }
    if (reRunable) {
      res["ReRunable"] = boost::any(*reRunable);
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (stderrRedirectPath) {
      res["StderrRedirectPath"] = boost::any(*stderrRedirectPath);
    }
    if (stdoutRedirectPath) {
      res["StdoutRedirectPath"] = boost::any(*stdoutRedirectPath);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (thread) {
      res["Thread"] = boost::any(*thread);
    }
    if (unzipCmd) {
      res["UnzipCmd"] = boost::any(*unzipCmd);
    }
    if (variables) {
      res["Variables"] = boost::any(*variables);
    }
    if (withUnzipCmd) {
      res["WithUnzipCmd"] = boost::any(*withUnzipCmd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayRequest") != m.end() && !m["ArrayRequest"].empty()) {
      arrayRequest = make_shared<string>(boost::any_cast<string>(m["ArrayRequest"]));
    }
    if (m.find("ClockTime") != m.end() && !m["ClockTime"].empty()) {
      clockTime = make_shared<string>(boost::any_cast<string>(m["ClockTime"]));
    }
    if (m.find("CommandLine") != m.end() && !m["CommandLine"].empty()) {
      commandLine = make_shared<string>(boost::any_cast<string>(m["CommandLine"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("InputFileUrl") != m.end() && !m["InputFileUrl"].empty()) {
      inputFileUrl = make_shared<string>(boost::any_cast<string>(m["InputFileUrl"]));
    }
    if (m.find("Mem") != m.end() && !m["Mem"].empty()) {
      mem = make_shared<string>(boost::any_cast<string>(m["Mem"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      node = make_shared<long>(boost::any_cast<long>(m["Node"]));
    }
    if (m.find("PackagePath") != m.end() && !m["PackagePath"].empty()) {
      packagePath = make_shared<string>(boost::any_cast<string>(m["PackagePath"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      queue = make_shared<string>(boost::any_cast<string>(m["Queue"]));
    }
    if (m.find("ReRunable") != m.end() && !m["ReRunable"].empty()) {
      reRunable = make_shared<bool>(boost::any_cast<bool>(m["ReRunable"]));
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("StderrRedirectPath") != m.end() && !m["StderrRedirectPath"].empty()) {
      stderrRedirectPath = make_shared<string>(boost::any_cast<string>(m["StderrRedirectPath"]));
    }
    if (m.find("StdoutRedirectPath") != m.end() && !m["StdoutRedirectPath"].empty()) {
      stdoutRedirectPath = make_shared<string>(boost::any_cast<string>(m["StdoutRedirectPath"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<long>(boost::any_cast<long>(m["Task"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Thread") != m.end() && !m["Thread"].empty()) {
      thread = make_shared<long>(boost::any_cast<long>(m["Thread"]));
    }
    if (m.find("UnzipCmd") != m.end() && !m["UnzipCmd"].empty()) {
      unzipCmd = make_shared<string>(boost::any_cast<string>(m["UnzipCmd"]));
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["Variables"]));
    }
    if (m.find("WithUnzipCmd") != m.end() && !m["WithUnzipCmd"].empty()) {
      withUnzipCmd = make_shared<bool>(boost::any_cast<bool>(m["WithUnzipCmd"]));
    }
  }


  virtual ~EditJobTemplateRequest() = default;
};
class EditJobTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  EditJobTemplateResponseBody() {}

  explicit EditJobTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~EditJobTemplateResponseBody() = default;
};
class EditJobTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EditJobTemplateResponseBody> body{};

  EditJobTemplateResponse() {}

  explicit EditJobTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EditJobTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditJobTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~EditJobTemplateResponse() = default;
};
class GetAccountingReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> dim{};
  shared_ptr<long> endTime{};
  shared_ptr<string> filterValue{};
  shared_ptr<string> jobId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> reportType{};
  shared_ptr<long> startTime{};

  GetAccountingReportRequest() {}

  explicit GetAccountingReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (dim) {
      res["Dim"] = boost::any(*dim);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (filterValue) {
      res["FilterValue"] = boost::any(*filterValue);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reportType) {
      res["ReportType"] = boost::any(*reportType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Dim") != m.end() && !m["Dim"].empty()) {
      dim = make_shared<string>(boost::any_cast<string>(m["Dim"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("FilterValue") != m.end() && !m["FilterValue"].empty()) {
      filterValue = make_shared<string>(boost::any_cast<string>(m["FilterValue"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ReportType") != m.end() && !m["ReportType"].empty()) {
      reportType = make_shared<string>(boost::any_cast<string>(m["ReportType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetAccountingReportRequest() = default;
};
class GetAccountingReportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> data{};

  GetAccountingReportResponseBodyData() {}

  explicit GetAccountingReportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetAccountingReportResponseBodyData() = default;
};
class GetAccountingReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAccountingReportResponseBodyData> data{};
  shared_ptr<string> metrics{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCoreTime{};
  shared_ptr<long> totalCount{};

  GetAccountingReportResponseBody() {}

  explicit GetAccountingReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
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
    if (totalCoreTime) {
      res["TotalCoreTime"] = boost::any(*totalCoreTime);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAccountingReportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAccountingReportResponseBodyData>(model1);
      }
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      metrics = make_shared<string>(boost::any_cast<string>(m["Metrics"]));
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
    if (m.find("TotalCoreTime") != m.end() && !m["TotalCoreTime"].empty()) {
      totalCoreTime = make_shared<long>(boost::any_cast<long>(m["TotalCoreTime"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetAccountingReportResponseBody() = default;
};
class GetAccountingReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAccountingReportResponseBody> body{};

  GetAccountingReportResponse() {}

  explicit GetAccountingReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAccountingReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAccountingReportResponseBody>(model1);
      }
    }
  }


  virtual ~GetAccountingReportResponse() = default;
};
class GetAutoScaleConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  GetAutoScaleConfigRequest() {}

  explicit GetAutoScaleConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAutoScaleConfigRequest() = default;
};
class GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisksDataDisksInfo : public Darabonba::Model {
public:
  shared_ptr<string> dataDiskCategory{};
  shared_ptr<bool> dataDiskDeleteWithInstance{};
  shared_ptr<bool> dataDiskEncrypted{};
  shared_ptr<string> dataDiskKMSKeyId{};
  shared_ptr<string> dataDiskPerformanceLevel{};
  shared_ptr<long> dataDiskSize{};

  GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisksDataDisksInfo() {}

  explicit GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisksDataDisksInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDiskCategory) {
      res["DataDiskCategory"] = boost::any(*dataDiskCategory);
    }
    if (dataDiskDeleteWithInstance) {
      res["DataDiskDeleteWithInstance"] = boost::any(*dataDiskDeleteWithInstance);
    }
    if (dataDiskEncrypted) {
      res["DataDiskEncrypted"] = boost::any(*dataDiskEncrypted);
    }
    if (dataDiskKMSKeyId) {
      res["DataDiskKMSKeyId"] = boost::any(*dataDiskKMSKeyId);
    }
    if (dataDiskPerformanceLevel) {
      res["DataDiskPerformanceLevel"] = boost::any(*dataDiskPerformanceLevel);
    }
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDiskCategory") != m.end() && !m["DataDiskCategory"].empty()) {
      dataDiskCategory = make_shared<string>(boost::any_cast<string>(m["DataDiskCategory"]));
    }
    if (m.find("DataDiskDeleteWithInstance") != m.end() && !m["DataDiskDeleteWithInstance"].empty()) {
      dataDiskDeleteWithInstance = make_shared<bool>(boost::any_cast<bool>(m["DataDiskDeleteWithInstance"]));
    }
    if (m.find("DataDiskEncrypted") != m.end() && !m["DataDiskEncrypted"].empty()) {
      dataDiskEncrypted = make_shared<bool>(boost::any_cast<bool>(m["DataDiskEncrypted"]));
    }
    if (m.find("DataDiskKMSKeyId") != m.end() && !m["DataDiskKMSKeyId"].empty()) {
      dataDiskKMSKeyId = make_shared<string>(boost::any_cast<string>(m["DataDiskKMSKeyId"]));
    }
    if (m.find("DataDiskPerformanceLevel") != m.end() && !m["DataDiskPerformanceLevel"].empty()) {
      dataDiskPerformanceLevel = make_shared<string>(boost::any_cast<string>(m["DataDiskPerformanceLevel"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<long>(boost::any_cast<long>(m["DataDiskSize"]));
    }
  }


  virtual ~GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisksDataDisksInfo() = default;
};
class GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisks : public Darabonba::Model {
public:
  shared_ptr<vector<GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisksDataDisksInfo>> dataDisksInfo{};

  GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisks() {}

  explicit GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDisksInfo) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisksInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisksInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDisksInfo") != m.end() && !m["DataDisksInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisksInfo"].type()) {
        vector<GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisksDataDisksInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisksInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisksDataDisksInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisksInfo = make_shared<vector<GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisksDataDisksInfo>>(expect1);
      }
    }
  }


  virtual ~GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisks() = default;
};
class GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypesInstanceTypeInfo : public Darabonba::Model {
public:
  shared_ptr<string> hostNamePrefix{};
  shared_ptr<string> instanceType{};
  shared_ptr<double> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypesInstanceTypeInfo() {}

  explicit GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypesInstanceTypeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostNamePrefix) {
      res["HostNamePrefix"] = boost::any(*hostNamePrefix);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
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
    if (m.find("HostNamePrefix") != m.end() && !m["HostNamePrefix"].empty()) {
      hostNamePrefix = make_shared<string>(boost::any_cast<string>(m["HostNamePrefix"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypesInstanceTypeInfo() = default;
};
class GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypes : public Darabonba::Model {
public:
  shared_ptr<vector<GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypesInstanceTypeInfo>> instanceTypeInfo{};

  GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypes() {}

  explicit GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTypeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTypeInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypeInfo") != m.end() && !m["InstanceTypeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTypeInfo"].type()) {
        vector<GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypesInstanceTypeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTypeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypesInstanceTypeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTypeInfo = make_shared<vector<GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypesInstanceTypeInfo>>(expect1);
      }
    }
  }


  virtual ~GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypes() = default;
};
class GetAutoScaleConfigResponseBodyQueuesQueueInfo : public Darabonba::Model {
public:
  shared_ptr<GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisks> dataDisks{};
  shared_ptr<bool> enableAutoGrow{};
  shared_ptr<bool> enableAutoShrink{};
  shared_ptr<string> hostNamePrefix{};
  shared_ptr<string> hostNameSuffix{};
  shared_ptr<string> instanceType{};
  shared_ptr<GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypes> instanceTypes{};
  shared_ptr<long> maxNodesInQueue{};
  shared_ptr<long> minNodesInQueue{};
  shared_ptr<string> queueImageId{};
  shared_ptr<string> queueName{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<double> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<string> systemDiskLevel{};
  shared_ptr<long> systemDiskSize{};

  GetAutoScaleConfigResponseBodyQueuesQueueInfo() {}

  explicit GetAutoScaleConfigResponseBodyQueuesQueueInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDisks) {
      res["DataDisks"] = dataDisks ? boost::any(dataDisks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (enableAutoGrow) {
      res["EnableAutoGrow"] = boost::any(*enableAutoGrow);
    }
    if (enableAutoShrink) {
      res["EnableAutoShrink"] = boost::any(*enableAutoShrink);
    }
    if (hostNamePrefix) {
      res["HostNamePrefix"] = boost::any(*hostNamePrefix);
    }
    if (hostNameSuffix) {
      res["HostNameSuffix"] = boost::any(*hostNameSuffix);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceTypes) {
      res["InstanceTypes"] = instanceTypes ? boost::any(instanceTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxNodesInQueue) {
      res["MaxNodesInQueue"] = boost::any(*maxNodesInQueue);
    }
    if (minNodesInQueue) {
      res["MinNodesInQueue"] = boost::any(*minNodesInQueue);
    }
    if (queueImageId) {
      res["QueueImageId"] = boost::any(*queueImageId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskLevel) {
      res["SystemDiskLevel"] = boost::any(*systemDiskLevel);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataDisks"].type()) {
        GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataDisks"]));
        dataDisks = make_shared<GetAutoScaleConfigResponseBodyQueuesQueueInfoDataDisks>(model1);
      }
    }
    if (m.find("EnableAutoGrow") != m.end() && !m["EnableAutoGrow"].empty()) {
      enableAutoGrow = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoGrow"]));
    }
    if (m.find("EnableAutoShrink") != m.end() && !m["EnableAutoShrink"].empty()) {
      enableAutoShrink = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoShrink"]));
    }
    if (m.find("HostNamePrefix") != m.end() && !m["HostNamePrefix"].empty()) {
      hostNamePrefix = make_shared<string>(boost::any_cast<string>(m["HostNamePrefix"]));
    }
    if (m.find("HostNameSuffix") != m.end() && !m["HostNameSuffix"].empty()) {
      hostNameSuffix = make_shared<string>(boost::any_cast<string>(m["HostNameSuffix"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceTypes"].type()) {
        GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceTypes"]));
        instanceTypes = make_shared<GetAutoScaleConfigResponseBodyQueuesQueueInfoInstanceTypes>(model1);
      }
    }
    if (m.find("MaxNodesInQueue") != m.end() && !m["MaxNodesInQueue"].empty()) {
      maxNodesInQueue = make_shared<long>(boost::any_cast<long>(m["MaxNodesInQueue"]));
    }
    if (m.find("MinNodesInQueue") != m.end() && !m["MinNodesInQueue"].empty()) {
      minNodesInQueue = make_shared<long>(boost::any_cast<long>(m["MinNodesInQueue"]));
    }
    if (m.find("QueueImageId") != m.end() && !m["QueueImageId"].empty()) {
      queueImageId = make_shared<string>(boost::any_cast<string>(m["QueueImageId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("SystemDiskLevel") != m.end() && !m["SystemDiskLevel"].empty()) {
      systemDiskLevel = make_shared<string>(boost::any_cast<string>(m["SystemDiskLevel"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
  }


  virtual ~GetAutoScaleConfigResponseBodyQueuesQueueInfo() = default;
};
class GetAutoScaleConfigResponseBodyQueues : public Darabonba::Model {
public:
  shared_ptr<vector<GetAutoScaleConfigResponseBodyQueuesQueueInfo>> queueInfo{};

  GetAutoScaleConfigResponseBodyQueues() {}

  explicit GetAutoScaleConfigResponseBodyQueues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queueInfo) {
      vector<boost::any> temp1;
      for(auto item1:*queueInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QueueInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueueInfo") != m.end() && !m["QueueInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["QueueInfo"].type()) {
        vector<GetAutoScaleConfigResponseBodyQueuesQueueInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QueueInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAutoScaleConfigResponseBodyQueuesQueueInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queueInfo = make_shared<vector<GetAutoScaleConfigResponseBodyQueuesQueueInfo>>(expect1);
      }
    }
  }


  virtual ~GetAutoScaleConfigResponseBodyQueues() = default;
};
class GetAutoScaleConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterType{};
  shared_ptr<bool> enableAutoGrow{};
  shared_ptr<bool> enableAutoShrink{};
  shared_ptr<string> excludeNodes{};
  shared_ptr<long> extraNodesGrowRatio{};
  shared_ptr<long> growIntervalInMinutes{};
  shared_ptr<long> growRatio{};
  shared_ptr<long> growTimeoutInMinutes{};
  shared_ptr<string> imageId{};
  shared_ptr<long> maxNodesInCluster{};
  shared_ptr<GetAutoScaleConfigResponseBodyQueues> queues{};
  shared_ptr<string> requestId{};
  shared_ptr<long> shrinkIdleTimes{};
  shared_ptr<long> shrinkIntervalInMinutes{};
  shared_ptr<double> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> uid{};

  GetAutoScaleConfigResponseBody() {}

  explicit GetAutoScaleConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (enableAutoGrow) {
      res["EnableAutoGrow"] = boost::any(*enableAutoGrow);
    }
    if (enableAutoShrink) {
      res["EnableAutoShrink"] = boost::any(*enableAutoShrink);
    }
    if (excludeNodes) {
      res["ExcludeNodes"] = boost::any(*excludeNodes);
    }
    if (extraNodesGrowRatio) {
      res["ExtraNodesGrowRatio"] = boost::any(*extraNodesGrowRatio);
    }
    if (growIntervalInMinutes) {
      res["GrowIntervalInMinutes"] = boost::any(*growIntervalInMinutes);
    }
    if (growRatio) {
      res["GrowRatio"] = boost::any(*growRatio);
    }
    if (growTimeoutInMinutes) {
      res["GrowTimeoutInMinutes"] = boost::any(*growTimeoutInMinutes);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (maxNodesInCluster) {
      res["MaxNodesInCluster"] = boost::any(*maxNodesInCluster);
    }
    if (queues) {
      res["Queues"] = queues ? boost::any(queues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (shrinkIdleTimes) {
      res["ShrinkIdleTimes"] = boost::any(*shrinkIdleTimes);
    }
    if (shrinkIntervalInMinutes) {
      res["ShrinkIntervalInMinutes"] = boost::any(*shrinkIntervalInMinutes);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("EnableAutoGrow") != m.end() && !m["EnableAutoGrow"].empty()) {
      enableAutoGrow = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoGrow"]));
    }
    if (m.find("EnableAutoShrink") != m.end() && !m["EnableAutoShrink"].empty()) {
      enableAutoShrink = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoShrink"]));
    }
    if (m.find("ExcludeNodes") != m.end() && !m["ExcludeNodes"].empty()) {
      excludeNodes = make_shared<string>(boost::any_cast<string>(m["ExcludeNodes"]));
    }
    if (m.find("ExtraNodesGrowRatio") != m.end() && !m["ExtraNodesGrowRatio"].empty()) {
      extraNodesGrowRatio = make_shared<long>(boost::any_cast<long>(m["ExtraNodesGrowRatio"]));
    }
    if (m.find("GrowIntervalInMinutes") != m.end() && !m["GrowIntervalInMinutes"].empty()) {
      growIntervalInMinutes = make_shared<long>(boost::any_cast<long>(m["GrowIntervalInMinutes"]));
    }
    if (m.find("GrowRatio") != m.end() && !m["GrowRatio"].empty()) {
      growRatio = make_shared<long>(boost::any_cast<long>(m["GrowRatio"]));
    }
    if (m.find("GrowTimeoutInMinutes") != m.end() && !m["GrowTimeoutInMinutes"].empty()) {
      growTimeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["GrowTimeoutInMinutes"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("MaxNodesInCluster") != m.end() && !m["MaxNodesInCluster"].empty()) {
      maxNodesInCluster = make_shared<long>(boost::any_cast<long>(m["MaxNodesInCluster"]));
    }
    if (m.find("Queues") != m.end() && !m["Queues"].empty()) {
      if (typeid(map<string, boost::any>) == m["Queues"].type()) {
        GetAutoScaleConfigResponseBodyQueues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Queues"]));
        queues = make_shared<GetAutoScaleConfigResponseBodyQueues>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShrinkIdleTimes") != m.end() && !m["ShrinkIdleTimes"].empty()) {
      shrinkIdleTimes = make_shared<long>(boost::any_cast<long>(m["ShrinkIdleTimes"]));
    }
    if (m.find("ShrinkIntervalInMinutes") != m.end() && !m["ShrinkIntervalInMinutes"].empty()) {
      shrinkIntervalInMinutes = make_shared<long>(boost::any_cast<long>(m["ShrinkIntervalInMinutes"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~GetAutoScaleConfigResponseBody() = default;
};
class GetAutoScaleConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAutoScaleConfigResponseBody> body{};

  GetAutoScaleConfigResponse() {}

  explicit GetAutoScaleConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAutoScaleConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAutoScaleConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetAutoScaleConfigResponse() = default;
};
class GetCloudMetricLogsRequest : public Darabonba::Model {
public:
  shared_ptr<long> aggregationInterval{};
  shared_ptr<string> aggregationType{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> filter{};
  shared_ptr<long> from{};
  shared_ptr<string> metricCategories{};
  shared_ptr<string> metricScope{};
  shared_ptr<bool> reverse{};
  shared_ptr<long> to{};

  GetCloudMetricLogsRequest() {}

  explicit GetCloudMetricLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregationInterval) {
      res["AggregationInterval"] = boost::any(*aggregationInterval);
    }
    if (aggregationType) {
      res["AggregationType"] = boost::any(*aggregationType);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (metricCategories) {
      res["MetricCategories"] = boost::any(*metricCategories);
    }
    if (metricScope) {
      res["MetricScope"] = boost::any(*metricScope);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AggregationInterval") != m.end() && !m["AggregationInterval"].empty()) {
      aggregationInterval = make_shared<long>(boost::any_cast<long>(m["AggregationInterval"]));
    }
    if (m.find("AggregationType") != m.end() && !m["AggregationType"].empty()) {
      aggregationType = make_shared<string>(boost::any_cast<string>(m["AggregationType"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<long>(boost::any_cast<long>(m["From"]));
    }
    if (m.find("MetricCategories") != m.end() && !m["MetricCategories"].empty()) {
      metricCategories = make_shared<string>(boost::any_cast<string>(m["MetricCategories"]));
    }
    if (m.find("MetricScope") != m.end() && !m["MetricScope"].empty()) {
      metricScope = make_shared<string>(boost::any_cast<string>(m["MetricScope"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<long>(boost::any_cast<long>(m["To"]));
    }
  }


  virtual ~GetCloudMetricLogsRequest() = default;
};
class GetCloudMetricLogsResponseBodyMetricLogsMetricLog : public Darabonba::Model {
public:
  shared_ptr<string> diskDevice{};
  shared_ptr<string> hostname{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> metricData{};
  shared_ptr<string> networkInterface{};
  shared_ptr<long> time{};

  GetCloudMetricLogsResponseBodyMetricLogsMetricLog() {}

  explicit GetCloudMetricLogsResponseBodyMetricLogsMetricLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskDevice) {
      res["DiskDevice"] = boost::any(*diskDevice);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (metricData) {
      res["MetricData"] = boost::any(*metricData);
    }
    if (networkInterface) {
      res["NetworkInterface"] = boost::any(*networkInterface);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskDevice") != m.end() && !m["DiskDevice"].empty()) {
      diskDevice = make_shared<string>(boost::any_cast<string>(m["DiskDevice"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MetricData") != m.end() && !m["MetricData"].empty()) {
      metricData = make_shared<string>(boost::any_cast<string>(m["MetricData"]));
    }
    if (m.find("NetworkInterface") != m.end() && !m["NetworkInterface"].empty()) {
      networkInterface = make_shared<string>(boost::any_cast<string>(m["NetworkInterface"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
  }


  virtual ~GetCloudMetricLogsResponseBodyMetricLogsMetricLog() = default;
};
class GetCloudMetricLogsResponseBodyMetricLogs : public Darabonba::Model {
public:
  shared_ptr<vector<GetCloudMetricLogsResponseBodyMetricLogsMetricLog>> metricLog{};

  GetCloudMetricLogsResponseBodyMetricLogs() {}

  explicit GetCloudMetricLogsResponseBodyMetricLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricLog) {
      vector<boost::any> temp1;
      for(auto item1:*metricLog){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MetricLog"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricLog") != m.end() && !m["MetricLog"].empty()) {
      if (typeid(vector<boost::any>) == m["MetricLog"].type()) {
        vector<GetCloudMetricLogsResponseBodyMetricLogsMetricLog> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MetricLog"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCloudMetricLogsResponseBodyMetricLogsMetricLog model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metricLog = make_shared<vector<GetCloudMetricLogsResponseBodyMetricLogsMetricLog>>(expect1);
      }
    }
  }


  virtual ~GetCloudMetricLogsResponseBodyMetricLogs() = default;
};
class GetCloudMetricLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetCloudMetricLogsResponseBodyMetricLogs> metricLogs{};
  shared_ptr<string> requestId{};

  GetCloudMetricLogsResponseBody() {}

  explicit GetCloudMetricLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricLogs) {
      res["MetricLogs"] = metricLogs ? boost::any(metricLogs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricLogs") != m.end() && !m["MetricLogs"].empty()) {
      if (typeid(map<string, boost::any>) == m["MetricLogs"].type()) {
        GetCloudMetricLogsResponseBodyMetricLogs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MetricLogs"]));
        metricLogs = make_shared<GetCloudMetricLogsResponseBodyMetricLogs>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCloudMetricLogsResponseBody() = default;
};
class GetCloudMetricLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCloudMetricLogsResponseBody> body{};

  GetCloudMetricLogsResponse() {}

  explicit GetCloudMetricLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCloudMetricLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCloudMetricLogsResponseBody>(model1);
      }
    }
  }


  virtual ~GetCloudMetricLogsResponse() = default;
};
class GetCloudMetricProfilingRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> profilingId{};
  shared_ptr<string> regionId{};

  GetCloudMetricProfilingRequest() {}

  explicit GetCloudMetricProfilingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (profilingId) {
      res["ProfilingId"] = boost::any(*profilingId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ProfilingId") != m.end() && !m["ProfilingId"].empty()) {
      profilingId = make_shared<string>(boost::any_cast<string>(m["ProfilingId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetCloudMetricProfilingRequest() = default;
};
class GetCloudMetricProfilingResponseBodySvgUrlsSvgInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> size{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  GetCloudMetricProfilingResponseBodySvgUrlsSvgInfo() {}

  explicit GetCloudMetricProfilingResponseBodySvgUrlsSvgInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetCloudMetricProfilingResponseBodySvgUrlsSvgInfo() = default;
};
class GetCloudMetricProfilingResponseBodySvgUrls : public Darabonba::Model {
public:
  shared_ptr<vector<GetCloudMetricProfilingResponseBodySvgUrlsSvgInfo>> svgInfo{};

  GetCloudMetricProfilingResponseBodySvgUrls() {}

  explicit GetCloudMetricProfilingResponseBodySvgUrls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (svgInfo) {
      vector<boost::any> temp1;
      for(auto item1:*svgInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SvgInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SvgInfo") != m.end() && !m["SvgInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["SvgInfo"].type()) {
        vector<GetCloudMetricProfilingResponseBodySvgUrlsSvgInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SvgInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCloudMetricProfilingResponseBodySvgUrlsSvgInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        svgInfo = make_shared<vector<GetCloudMetricProfilingResponseBodySvgUrlsSvgInfo>>(expect1);
      }
    }
  }


  virtual ~GetCloudMetricProfilingResponseBodySvgUrls() = default;
};
class GetCloudMetricProfilingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetCloudMetricProfilingResponseBodySvgUrls> svgUrls{};

  GetCloudMetricProfilingResponseBody() {}

  explicit GetCloudMetricProfilingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (svgUrls) {
      res["SvgUrls"] = svgUrls ? boost::any(svgUrls->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SvgUrls") != m.end() && !m["SvgUrls"].empty()) {
      if (typeid(map<string, boost::any>) == m["SvgUrls"].type()) {
        GetCloudMetricProfilingResponseBodySvgUrls model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SvgUrls"]));
        svgUrls = make_shared<GetCloudMetricProfilingResponseBodySvgUrls>(model1);
      }
    }
  }


  virtual ~GetCloudMetricProfilingResponseBody() = default;
};
class GetCloudMetricProfilingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCloudMetricProfilingResponseBody> body{};

  GetCloudMetricProfilingResponse() {}

  explicit GetCloudMetricProfilingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCloudMetricProfilingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCloudMetricProfilingResponseBody>(model1);
      }
    }
  }


  virtual ~GetCloudMetricProfilingResponse() = default;
};
class GetClusterVolumesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  GetClusterVolumesRequest() {}

  explicit GetClusterVolumesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetClusterVolumesRequest() = default;
};
class GetClusterVolumesResponseBodyVolumesVolumeInfoRolesRoleInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  GetClusterVolumesResponseBodyVolumesVolumeInfoRolesRoleInfo() {}

  explicit GetClusterVolumesResponseBodyVolumesVolumeInfoRolesRoleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetClusterVolumesResponseBodyVolumesVolumeInfoRolesRoleInfo() = default;
};
class GetClusterVolumesResponseBodyVolumesVolumeInfoRoles : public Darabonba::Model {
public:
  shared_ptr<vector<GetClusterVolumesResponseBodyVolumesVolumeInfoRolesRoleInfo>> roleInfo{};

  GetClusterVolumesResponseBodyVolumesVolumeInfoRoles() {}

  explicit GetClusterVolumesResponseBodyVolumesVolumeInfoRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleInfo) {
      vector<boost::any> temp1;
      for(auto item1:*roleInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RoleInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleInfo") != m.end() && !m["RoleInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RoleInfo"].type()) {
        vector<GetClusterVolumesResponseBodyVolumesVolumeInfoRolesRoleInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RoleInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetClusterVolumesResponseBodyVolumesVolumeInfoRolesRoleInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roleInfo = make_shared<vector<GetClusterVolumesResponseBodyVolumesVolumeInfoRolesRoleInfo>>(expect1);
      }
    }
  }


  virtual ~GetClusterVolumesResponseBodyVolumesVolumeInfoRoles() = default;
};
class GetClusterVolumesResponseBodyVolumesVolumeInfo : public Darabonba::Model {
public:
  shared_ptr<string> jobQueue{};
  shared_ptr<string> localDirectory{};
  shared_ptr<string> location{};
  shared_ptr<bool> mustKeep{};
  shared_ptr<string> remoteDirectory{};
  shared_ptr<GetClusterVolumesResponseBodyVolumesVolumeInfoRoles> roles{};
  shared_ptr<string> volumeId{};
  shared_ptr<string> volumeMountpoint{};
  shared_ptr<string> volumeProtocol{};
  shared_ptr<string> volumeType{};

  GetClusterVolumesResponseBodyVolumesVolumeInfo() {}

  explicit GetClusterVolumesResponseBodyVolumesVolumeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobQueue) {
      res["JobQueue"] = boost::any(*jobQueue);
    }
    if (localDirectory) {
      res["LocalDirectory"] = boost::any(*localDirectory);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (mustKeep) {
      res["MustKeep"] = boost::any(*mustKeep);
    }
    if (remoteDirectory) {
      res["RemoteDirectory"] = boost::any(*remoteDirectory);
    }
    if (roles) {
      res["Roles"] = roles ? boost::any(roles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    if (volumeMountpoint) {
      res["VolumeMountpoint"] = boost::any(*volumeMountpoint);
    }
    if (volumeProtocol) {
      res["VolumeProtocol"] = boost::any(*volumeProtocol);
    }
    if (volumeType) {
      res["VolumeType"] = boost::any(*volumeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobQueue") != m.end() && !m["JobQueue"].empty()) {
      jobQueue = make_shared<string>(boost::any_cast<string>(m["JobQueue"]));
    }
    if (m.find("LocalDirectory") != m.end() && !m["LocalDirectory"].empty()) {
      localDirectory = make_shared<string>(boost::any_cast<string>(m["LocalDirectory"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("MustKeep") != m.end() && !m["MustKeep"].empty()) {
      mustKeep = make_shared<bool>(boost::any_cast<bool>(m["MustKeep"]));
    }
    if (m.find("RemoteDirectory") != m.end() && !m["RemoteDirectory"].empty()) {
      remoteDirectory = make_shared<string>(boost::any_cast<string>(m["RemoteDirectory"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roles"].type()) {
        GetClusterVolumesResponseBodyVolumesVolumeInfoRoles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roles"]));
        roles = make_shared<GetClusterVolumesResponseBodyVolumesVolumeInfoRoles>(model1);
      }
    }
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<string>(boost::any_cast<string>(m["VolumeId"]));
    }
    if (m.find("VolumeMountpoint") != m.end() && !m["VolumeMountpoint"].empty()) {
      volumeMountpoint = make_shared<string>(boost::any_cast<string>(m["VolumeMountpoint"]));
    }
    if (m.find("VolumeProtocol") != m.end() && !m["VolumeProtocol"].empty()) {
      volumeProtocol = make_shared<string>(boost::any_cast<string>(m["VolumeProtocol"]));
    }
    if (m.find("VolumeType") != m.end() && !m["VolumeType"].empty()) {
      volumeType = make_shared<string>(boost::any_cast<string>(m["VolumeType"]));
    }
  }


  virtual ~GetClusterVolumesResponseBodyVolumesVolumeInfo() = default;
};
class GetClusterVolumesResponseBodyVolumes : public Darabonba::Model {
public:
  shared_ptr<vector<GetClusterVolumesResponseBodyVolumesVolumeInfo>> volumeInfo{};

  GetClusterVolumesResponseBodyVolumes() {}

  explicit GetClusterVolumesResponseBodyVolumes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (volumeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*volumeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VolumeInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VolumeInfo") != m.end() && !m["VolumeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["VolumeInfo"].type()) {
        vector<GetClusterVolumesResponseBodyVolumesVolumeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VolumeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetClusterVolumesResponseBodyVolumesVolumeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volumeInfo = make_shared<vector<GetClusterVolumesResponseBodyVolumesVolumeInfo>>(expect1);
      }
    }
  }


  virtual ~GetClusterVolumesResponseBodyVolumes() = default;
};
class GetClusterVolumesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<GetClusterVolumesResponseBodyVolumes> volumes{};

  GetClusterVolumesResponseBody() {}

  explicit GetClusterVolumesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (volumes) {
      res["Volumes"] = volumes ? boost::any(volumes->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Volumes") != m.end() && !m["Volumes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Volumes"].type()) {
        GetClusterVolumesResponseBodyVolumes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Volumes"]));
        volumes = make_shared<GetClusterVolumesResponseBodyVolumes>(model1);
      }
    }
  }


  virtual ~GetClusterVolumesResponseBody() = default;
};
class GetClusterVolumesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetClusterVolumesResponseBody> body{};

  GetClusterVolumesResponse() {}

  explicit GetClusterVolumesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetClusterVolumesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClusterVolumesResponseBody>(model1);
      }
    }
  }


  virtual ~GetClusterVolumesResponse() = default;
};
class GetGWSConnectTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> instanceId{};

  GetGWSConnectTicketRequest() {}

  explicit GetGWSConnectTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetGWSConnectTicketRequest() = default;
};
class GetGWSConnectTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> ticket{};

  GetGWSConnectTicketResponseBody() {}

  explicit GetGWSConnectTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ticket) {
      res["Ticket"] = boost::any(*ticket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Ticket") != m.end() && !m["Ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["Ticket"]));
    }
  }


  virtual ~GetGWSConnectTicketResponseBody() = default;
};
class GetGWSConnectTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGWSConnectTicketResponseBody> body{};

  GetGWSConnectTicketResponse() {}

  explicit GetGWSConnectTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetGWSConnectTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGWSConnectTicketResponseBody>(model1);
      }
    }
  }


  virtual ~GetGWSConnectTicketResponse() = default;
};
class GetHealthMonitorLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> enableReverse{};
  shared_ptr<long> endTime{};
  shared_ptr<string> filter{};
  shared_ptr<long> startTime{};

  GetHealthMonitorLogsRequest() {}

  explicit GetHealthMonitorLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (enableReverse) {
      res["EnableReverse"] = boost::any(*enableReverse);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("EnableReverse") != m.end() && !m["EnableReverse"].empty()) {
      enableReverse = make_shared<bool>(boost::any_cast<bool>(m["EnableReverse"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~GetHealthMonitorLogsRequest() = default;
};
class GetHealthMonitorLogsResponseBodyLogInfoLogsCheckListCheckList : public Darabonba::Model {
public:
  shared_ptr<string> checkDescription{};
  shared_ptr<string> checkInfo{};
  shared_ptr<string> checkName{};
  shared_ptr<string> checkSolution{};

  GetHealthMonitorLogsResponseBodyLogInfoLogsCheckListCheckList() {}

  explicit GetHealthMonitorLogsResponseBodyLogInfoLogsCheckListCheckList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkDescription) {
      res["CheckDescription"] = boost::any(*checkDescription);
    }
    if (checkInfo) {
      res["CheckInfo"] = boost::any(*checkInfo);
    }
    if (checkName) {
      res["CheckName"] = boost::any(*checkName);
    }
    if (checkSolution) {
      res["CheckSolution"] = boost::any(*checkSolution);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckDescription") != m.end() && !m["CheckDescription"].empty()) {
      checkDescription = make_shared<string>(boost::any_cast<string>(m["CheckDescription"]));
    }
    if (m.find("CheckInfo") != m.end() && !m["CheckInfo"].empty()) {
      checkInfo = make_shared<string>(boost::any_cast<string>(m["CheckInfo"]));
    }
    if (m.find("CheckName") != m.end() && !m["CheckName"].empty()) {
      checkName = make_shared<string>(boost::any_cast<string>(m["CheckName"]));
    }
    if (m.find("CheckSolution") != m.end() && !m["CheckSolution"].empty()) {
      checkSolution = make_shared<string>(boost::any_cast<string>(m["CheckSolution"]));
    }
  }


  virtual ~GetHealthMonitorLogsResponseBodyLogInfoLogsCheckListCheckList() = default;
};
class GetHealthMonitorLogsResponseBodyLogInfoLogsCheckList : public Darabonba::Model {
public:
  shared_ptr<vector<GetHealthMonitorLogsResponseBodyLogInfoLogsCheckListCheckList>> checkList{};

  GetHealthMonitorLogsResponseBodyLogInfoLogsCheckList() {}

  explicit GetHealthMonitorLogsResponseBodyLogInfoLogsCheckList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkList) {
      vector<boost::any> temp1;
      for(auto item1:*checkList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CheckList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckList") != m.end() && !m["CheckList"].empty()) {
      if (typeid(vector<boost::any>) == m["CheckList"].type()) {
        vector<GetHealthMonitorLogsResponseBodyLogInfoLogsCheckListCheckList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CheckList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHealthMonitorLogsResponseBodyLogInfoLogsCheckListCheckList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        checkList = make_shared<vector<GetHealthMonitorLogsResponseBodyLogInfoLogsCheckListCheckList>>(expect1);
      }
    }
  }


  virtual ~GetHealthMonitorLogsResponseBodyLogInfoLogsCheckList() = default;
};
class GetHealthMonitorLogsResponseBodyLogInfoLogs : public Darabonba::Model {
public:
  shared_ptr<GetHealthMonitorLogsResponseBodyLogInfoLogsCheckList> checkList{};
  shared_ptr<string> healthId{};
  shared_ptr<string> hostName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> itemDescription{};
  shared_ptr<string> itemName{};
  shared_ptr<string> level{};
  shared_ptr<string> sceneDescription{};
  shared_ptr<string> sceneName{};
  shared_ptr<long> time{};

  GetHealthMonitorLogsResponseBodyLogInfoLogs() {}

  explicit GetHealthMonitorLogsResponseBodyLogInfoLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkList) {
      res["CheckList"] = checkList ? boost::any(checkList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (healthId) {
      res["HealthId"] = boost::any(*healthId);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (itemDescription) {
      res["ItemDescription"] = boost::any(*itemDescription);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (sceneDescription) {
      res["SceneDescription"] = boost::any(*sceneDescription);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckList") != m.end() && !m["CheckList"].empty()) {
      if (typeid(map<string, boost::any>) == m["CheckList"].type()) {
        GetHealthMonitorLogsResponseBodyLogInfoLogsCheckList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CheckList"]));
        checkList = make_shared<GetHealthMonitorLogsResponseBodyLogInfoLogsCheckList>(model1);
      }
    }
    if (m.find("HealthId") != m.end() && !m["HealthId"].empty()) {
      healthId = make_shared<string>(boost::any_cast<string>(m["HealthId"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ItemDescription") != m.end() && !m["ItemDescription"].empty()) {
      itemDescription = make_shared<string>(boost::any_cast<string>(m["ItemDescription"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      itemName = make_shared<string>(boost::any_cast<string>(m["ItemName"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("SceneDescription") != m.end() && !m["SceneDescription"].empty()) {
      sceneDescription = make_shared<string>(boost::any_cast<string>(m["SceneDescription"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
  }


  virtual ~GetHealthMonitorLogsResponseBodyLogInfoLogs() = default;
};
class GetHealthMonitorLogsResponseBodyLogInfo : public Darabonba::Model {
public:
  shared_ptr<vector<GetHealthMonitorLogsResponseBodyLogInfoLogs>> logs{};

  GetHealthMonitorLogsResponseBodyLogInfo() {}

  explicit GetHealthMonitorLogsResponseBodyLogInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<GetHealthMonitorLogsResponseBodyLogInfoLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Logs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHealthMonitorLogsResponseBodyLogInfoLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logs = make_shared<vector<GetHealthMonitorLogsResponseBodyLogInfoLogs>>(expect1);
      }
    }
  }


  virtual ~GetHealthMonitorLogsResponseBodyLogInfo() = default;
};
class GetHealthMonitorLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetHealthMonitorLogsResponseBodyLogInfo> logInfo{};
  shared_ptr<string> requestId{};

  GetHealthMonitorLogsResponseBody() {}

  explicit GetHealthMonitorLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logInfo) {
      res["LogInfo"] = logInfo ? boost::any(logInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogInfo") != m.end() && !m["LogInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogInfo"].type()) {
        GetHealthMonitorLogsResponseBodyLogInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogInfo"]));
        logInfo = make_shared<GetHealthMonitorLogsResponseBodyLogInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetHealthMonitorLogsResponseBody() = default;
};
class GetHealthMonitorLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHealthMonitorLogsResponseBody> body{};

  GetHealthMonitorLogsResponse() {}

  explicit GetHealthMonitorLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHealthMonitorLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHealthMonitorLogsResponseBody>(model1);
      }
    }
  }


  virtual ~GetHealthMonitorLogsResponse() = default;
};
class GetHybridClusterConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> node{};

  GetHybridClusterConfigRequest() {}

  explicit GetHybridClusterConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (node) {
      res["Node"] = boost::any(*node);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      node = make_shared<string>(boost::any_cast<string>(m["Node"]));
    }
  }


  virtual ~GetHybridClusterConfigRequest() = default;
};
class GetHybridClusterConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterConfig{};
  shared_ptr<string> requestId{};

  GetHybridClusterConfigResponseBody() {}

  explicit GetHybridClusterConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterConfig) {
      res["ClusterConfig"] = boost::any(*clusterConfig);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterConfig") != m.end() && !m["ClusterConfig"].empty()) {
      clusterConfig = make_shared<string>(boost::any_cast<string>(m["ClusterConfig"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetHybridClusterConfigResponseBody() = default;
};
class GetHybridClusterConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetHybridClusterConfigResponseBody> body{};

  GetHybridClusterConfigResponse() {}

  explicit GetHybridClusterConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetHybridClusterConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHybridClusterConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetHybridClusterConfigResponse() = default;
};
class GetIfEcsTypeSupportHtConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};

  GetIfEcsTypeSupportHtConfigRequest() {}

  explicit GetIfEcsTypeSupportHtConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~GetIfEcsTypeSupportHtConfigRequest() = default;
};
class GetIfEcsTypeSupportHtConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> defaultHtEnabled{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> supportHtConfig{};

  GetIfEcsTypeSupportHtConfigResponseBody() {}

  explicit GetIfEcsTypeSupportHtConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultHtEnabled) {
      res["DefaultHtEnabled"] = boost::any(*defaultHtEnabled);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (supportHtConfig) {
      res["SupportHtConfig"] = boost::any(*supportHtConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultHtEnabled") != m.end() && !m["DefaultHtEnabled"].empty()) {
      defaultHtEnabled = make_shared<bool>(boost::any_cast<bool>(m["DefaultHtEnabled"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SupportHtConfig") != m.end() && !m["SupportHtConfig"].empty()) {
      supportHtConfig = make_shared<bool>(boost::any_cast<bool>(m["SupportHtConfig"]));
    }
  }


  virtual ~GetIfEcsTypeSupportHtConfigResponseBody() = default;
};
class GetIfEcsTypeSupportHtConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetIfEcsTypeSupportHtConfigResponseBody> body{};

  GetIfEcsTypeSupportHtConfigResponse() {}

  explicit GetIfEcsTypeSupportHtConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetIfEcsTypeSupportHtConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIfEcsTypeSupportHtConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetIfEcsTypeSupportHtConfigResponse() = default;
};
class GetSchedulerInfoRequestScheduler : public Darabonba::Model {
public:
  shared_ptr<string> schedName{};

  GetSchedulerInfoRequestScheduler() {}

  explicit GetSchedulerInfoRequestScheduler(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedName) {
      res["SchedName"] = boost::any(*schedName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SchedName") != m.end() && !m["SchedName"].empty()) {
      schedName = make_shared<string>(boost::any_cast<string>(m["SchedName"]));
    }
  }


  virtual ~GetSchedulerInfoRequestScheduler() = default;
};
class GetSchedulerInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<GetSchedulerInfoRequestScheduler>> scheduler{};

  GetSchedulerInfoRequest() {}

  explicit GetSchedulerInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scheduler) {
      vector<boost::any> temp1;
      for(auto item1:*scheduler){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Scheduler"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      if (typeid(vector<boost::any>) == m["Scheduler"].type()) {
        vector<GetSchedulerInfoRequestScheduler> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Scheduler"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSchedulerInfoRequestScheduler model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduler = make_shared<vector<GetSchedulerInfoRequestScheduler>>(expect1);
      }
    }
  }


  virtual ~GetSchedulerInfoRequest() = default;
};
class GetSchedulerInfoResponseBodySchedInfo : public Darabonba::Model {
public:
  shared_ptr<string> configuration{};
  shared_ptr<string> schedName{};

  GetSchedulerInfoResponseBodySchedInfo() {}

  explicit GetSchedulerInfoResponseBodySchedInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configuration) {
      res["Configuration"] = boost::any(*configuration);
    }
    if (schedName) {
      res["SchedName"] = boost::any(*schedName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Configuration") != m.end() && !m["Configuration"].empty()) {
      configuration = make_shared<string>(boost::any_cast<string>(m["Configuration"]));
    }
    if (m.find("SchedName") != m.end() && !m["SchedName"].empty()) {
      schedName = make_shared<string>(boost::any_cast<string>(m["SchedName"]));
    }
  }


  virtual ~GetSchedulerInfoResponseBodySchedInfo() = default;
};
class GetSchedulerInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetSchedulerInfoResponseBodySchedInfo>> schedInfo{};

  GetSchedulerInfoResponseBody() {}

  explicit GetSchedulerInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (schedInfo) {
      vector<boost::any> temp1;
      for(auto item1:*schedInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SchedInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SchedInfo") != m.end() && !m["SchedInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["SchedInfo"].type()) {
        vector<GetSchedulerInfoResponseBodySchedInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SchedInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSchedulerInfoResponseBodySchedInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        schedInfo = make_shared<vector<GetSchedulerInfoResponseBodySchedInfo>>(expect1);
      }
    }
  }


  virtual ~GetSchedulerInfoResponseBody() = default;
};
class GetSchedulerInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSchedulerInfoResponseBody> body{};

  GetSchedulerInfoResponse() {}

  explicit GetSchedulerInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSchedulerInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSchedulerInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetSchedulerInfoResponse() = default;
};
class GetVisualServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  GetVisualServiceStatusRequest() {}

  explicit GetVisualServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetVisualServiceStatusRequest() = default;
};
class GetVisualServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetVisualServiceStatusResponseBody() {}

  explicit GetVisualServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetVisualServiceStatusResponseBody() = default;
};
class GetVisualServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVisualServiceStatusResponseBody> body{};

  GetVisualServiceStatusResponse() {}

  explicit GetVisualServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetVisualServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVisualServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetVisualServiceStatusResponse() = default;
};
class GetWorkbenchTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountSessionTicket{};
  shared_ptr<string> accountUid{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> port{};
  shared_ptr<string> userName{};
  shared_ptr<string> userPassword{};

  GetWorkbenchTokenRequest() {}

  explicit GetWorkbenchTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountSessionTicket) {
      res["AccountSessionTicket"] = boost::any(*accountSessionTicket);
    }
    if (accountUid) {
      res["AccountUid"] = boost::any(*accountUid);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userPassword) {
      res["UserPassword"] = boost::any(*userPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountSessionTicket") != m.end() && !m["AccountSessionTicket"].empty()) {
      accountSessionTicket = make_shared<string>(boost::any_cast<string>(m["AccountSessionTicket"]));
    }
    if (m.find("AccountUid") != m.end() && !m["AccountUid"].empty()) {
      accountUid = make_shared<string>(boost::any_cast<string>(m["AccountUid"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserPassword") != m.end() && !m["UserPassword"].empty()) {
      userPassword = make_shared<string>(boost::any_cast<string>(m["UserPassword"]));
    }
  }


  virtual ~GetWorkbenchTokenRequest() = default;
};
class GetWorkbenchTokenResponseBodyRootInstanceLoginView : public Darabonba::Model {
public:
  shared_ptr<string> baseViewUrl{};
  shared_ptr<string> defaultViewUrl{};
  shared_ptr<string> fileTreeViewUrl{};
  shared_ptr<string> rdpViewUrl{};
  shared_ptr<string> terminalViewUrl{};
  shared_ptr<string> viewName{};

  GetWorkbenchTokenResponseBodyRootInstanceLoginView() {}

  explicit GetWorkbenchTokenResponseBodyRootInstanceLoginView(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseViewUrl) {
      res["baseViewUrl"] = boost::any(*baseViewUrl);
    }
    if (defaultViewUrl) {
      res["defaultViewUrl"] = boost::any(*defaultViewUrl);
    }
    if (fileTreeViewUrl) {
      res["fileTreeViewUrl"] = boost::any(*fileTreeViewUrl);
    }
    if (rdpViewUrl) {
      res["rdpViewUrl"] = boost::any(*rdpViewUrl);
    }
    if (terminalViewUrl) {
      res["terminalViewUrl"] = boost::any(*terminalViewUrl);
    }
    if (viewName) {
      res["viewName"] = boost::any(*viewName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("baseViewUrl") != m.end() && !m["baseViewUrl"].empty()) {
      baseViewUrl = make_shared<string>(boost::any_cast<string>(m["baseViewUrl"]));
    }
    if (m.find("defaultViewUrl") != m.end() && !m["defaultViewUrl"].empty()) {
      defaultViewUrl = make_shared<string>(boost::any_cast<string>(m["defaultViewUrl"]));
    }
    if (m.find("fileTreeViewUrl") != m.end() && !m["fileTreeViewUrl"].empty()) {
      fileTreeViewUrl = make_shared<string>(boost::any_cast<string>(m["fileTreeViewUrl"]));
    }
    if (m.find("rdpViewUrl") != m.end() && !m["rdpViewUrl"].empty()) {
      rdpViewUrl = make_shared<string>(boost::any_cast<string>(m["rdpViewUrl"]));
    }
    if (m.find("terminalViewUrl") != m.end() && !m["terminalViewUrl"].empty()) {
      terminalViewUrl = make_shared<string>(boost::any_cast<string>(m["terminalViewUrl"]));
    }
    if (m.find("viewName") != m.end() && !m["viewName"].empty()) {
      viewName = make_shared<string>(boost::any_cast<string>(m["viewName"]));
    }
  }


  virtual ~GetWorkbenchTokenResponseBodyRootInstanceLoginView() = default;
};
class GetWorkbenchTokenResponseBodyRoot : public Darabonba::Model {
public:
  shared_ptr<GetWorkbenchTokenResponseBodyRootInstanceLoginView> instanceLoginView{};

  GetWorkbenchTokenResponseBodyRoot() {}

  explicit GetWorkbenchTokenResponseBodyRoot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceLoginView) {
      res["instanceLoginView"] = instanceLoginView ? boost::any(instanceLoginView->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceLoginView") != m.end() && !m["instanceLoginView"].empty()) {
      if (typeid(map<string, boost::any>) == m["instanceLoginView"].type()) {
        GetWorkbenchTokenResponseBodyRootInstanceLoginView model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["instanceLoginView"]));
        instanceLoginView = make_shared<GetWorkbenchTokenResponseBodyRootInstanceLoginView>(model1);
      }
    }
  }


  virtual ~GetWorkbenchTokenResponseBodyRoot() = default;
};
class GetWorkbenchTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetWorkbenchTokenResponseBodyRoot> root{};

  GetWorkbenchTokenResponseBody() {}

  explicit GetWorkbenchTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (root) {
      res["root"] = root ? boost::any(root->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("root") != m.end() && !m["root"].empty()) {
      if (typeid(map<string, boost::any>) == m["root"].type()) {
        GetWorkbenchTokenResponseBodyRoot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["root"]));
        root = make_shared<GetWorkbenchTokenResponseBodyRoot>(model1);
      }
    }
  }


  virtual ~GetWorkbenchTokenResponseBody() = default;
};
class GetWorkbenchTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetWorkbenchTokenResponseBody> body{};

  GetWorkbenchTokenResponse() {}

  explicit GetWorkbenchTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetWorkbenchTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkbenchTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkbenchTokenResponse() = default;
};
class InitializeEHPCRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  InitializeEHPCRequest() {}

  explicit InitializeEHPCRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InitializeEHPCRequest() = default;
};
class InitializeEHPCResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  InitializeEHPCResponseBody() {}

  explicit InitializeEHPCResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InitializeEHPCResponseBody() = default;
};
class InitializeEHPCResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InitializeEHPCResponseBody> body{};

  InitializeEHPCResponse() {}

  explicit InitializeEHPCResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InitializeEHPCResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitializeEHPCResponseBody>(model1);
      }
    }
  }


  virtual ~InitializeEHPCResponse() = default;
};
class InstallSoftwareRequest : public Darabonba::Model {
public:
  shared_ptr<string> application{};
  shared_ptr<string> clusterId{};

  InstallSoftwareRequest() {}

  explicit InstallSoftwareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      res["Application"] = boost::any(*application);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      application = make_shared<string>(boost::any_cast<string>(m["Application"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~InstallSoftwareRequest() = default;
};
class InstallSoftwareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  InstallSoftwareResponseBody() {}

  explicit InstallSoftwareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InstallSoftwareResponseBody() = default;
};
class InstallSoftwareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InstallSoftwareResponseBody> body{};

  InstallSoftwareResponse() {}

  explicit InstallSoftwareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InstallSoftwareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InstallSoftwareResponseBody>(model1);
      }
    }
  }


  virtual ~InstallSoftwareResponse() = default;
};
class InvokeShellCommandRequestInstance : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  InvokeShellCommandRequestInstance() {}

  explicit InvokeShellCommandRequestInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InvokeShellCommandRequestInstance() = default;
};
class InvokeShellCommandRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> command{};
  shared_ptr<vector<InvokeShellCommandRequestInstance>> instance{};
  shared_ptr<long> timeout{};
  shared_ptr<string> workingDir{};

  InvokeShellCommandRequest() {}

  explicit InvokeShellCommandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (command) {
      res["Command"] = boost::any(*command);
    }
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<InvokeShellCommandRequestInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InvokeShellCommandRequestInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<InvokeShellCommandRequestInstance>>(expect1);
      }
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~InvokeShellCommandRequest() = default;
};
class InvokeShellCommandResponseBodyInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};

  InvokeShellCommandResponseBodyInstanceIds() {}

  explicit InvokeShellCommandResponseBodyInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~InvokeShellCommandResponseBodyInstanceIds() = default;
};
class InvokeShellCommandResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> commandId{};
  shared_ptr<InvokeShellCommandResponseBodyInstanceIds> instanceIds{};
  shared_ptr<string> requestId{};

  InvokeShellCommandResponseBody() {}

  explicit InvokeShellCommandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commandId) {
      res["CommandId"] = boost::any(*commandId);
    }
    if (instanceIds) {
      res["InstanceIds"] = instanceIds ? boost::any(instanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommandId") != m.end() && !m["CommandId"].empty()) {
      commandId = make_shared<string>(boost::any_cast<string>(m["CommandId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceIds"].type()) {
        InvokeShellCommandResponseBodyInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceIds"]));
        instanceIds = make_shared<InvokeShellCommandResponseBodyInstanceIds>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~InvokeShellCommandResponseBody() = default;
};
class InvokeShellCommandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InvokeShellCommandResponseBody> body{};

  InvokeShellCommandResponse() {}

  explicit InvokeShellCommandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InvokeShellCommandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvokeShellCommandResponseBody>(model1);
      }
    }
  }


  virtual ~InvokeShellCommandResponse() = default;
};
class ListAvailableEcsTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceChargeType{};
  shared_ptr<bool> showSoldOut{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> zoneId{};

  ListAvailableEcsTypesRequest() {}

  explicit ListAvailableEcsTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (showSoldOut) {
      res["ShowSoldOut"] = boost::any(*showSoldOut);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("ShowSoldOut") != m.end() && !m["ShowSoldOut"].empty()) {
      showSoldOut = make_shared<bool>(boost::any_cast<bool>(m["ShowSoldOut"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListAvailableEcsTypesRequest() = default;
};
class ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfoZoneIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> zoneId{};

  ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfoZoneIds() {}

  explicit ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfoZoneIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ZoneId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ZoneId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zoneId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfoZoneIds() = default;
};
class ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo : public Darabonba::Model {
public:
  shared_ptr<long> cpuCoreCount{};
  shared_ptr<long> eniQuantity{};
  shared_ptr<long> GPUAmount{};
  shared_ptr<string> GPUSpec{};
  shared_ptr<long> instanceBandwidthRx{};
  shared_ptr<long> instanceBandwidthTx{};
  shared_ptr<long> instancePpsRx{};
  shared_ptr<long> instancePpsTx{};
  shared_ptr<string> instanceTypeId{};
  shared_ptr<long> memorySize{};
  shared_ptr<string> status{};
  shared_ptr<ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfoZoneIds> zoneIds{};

  ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo() {}

  explicit ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpuCoreCount) {
      res["CpuCoreCount"] = boost::any(*cpuCoreCount);
    }
    if (eniQuantity) {
      res["EniQuantity"] = boost::any(*eniQuantity);
    }
    if (GPUAmount) {
      res["GPUAmount"] = boost::any(*GPUAmount);
    }
    if (GPUSpec) {
      res["GPUSpec"] = boost::any(*GPUSpec);
    }
    if (instanceBandwidthRx) {
      res["InstanceBandwidthRx"] = boost::any(*instanceBandwidthRx);
    }
    if (instanceBandwidthTx) {
      res["InstanceBandwidthTx"] = boost::any(*instanceBandwidthTx);
    }
    if (instancePpsRx) {
      res["InstancePpsRx"] = boost::any(*instancePpsRx);
    }
    if (instancePpsTx) {
      res["InstancePpsTx"] = boost::any(*instancePpsTx);
    }
    if (instanceTypeId) {
      res["InstanceTypeId"] = boost::any(*instanceTypeId);
    }
    if (memorySize) {
      res["MemorySize"] = boost::any(*memorySize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (zoneIds) {
      res["ZoneIds"] = zoneIds ? boost::any(zoneIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CpuCoreCount") != m.end() && !m["CpuCoreCount"].empty()) {
      cpuCoreCount = make_shared<long>(boost::any_cast<long>(m["CpuCoreCount"]));
    }
    if (m.find("EniQuantity") != m.end() && !m["EniQuantity"].empty()) {
      eniQuantity = make_shared<long>(boost::any_cast<long>(m["EniQuantity"]));
    }
    if (m.find("GPUAmount") != m.end() && !m["GPUAmount"].empty()) {
      GPUAmount = make_shared<long>(boost::any_cast<long>(m["GPUAmount"]));
    }
    if (m.find("GPUSpec") != m.end() && !m["GPUSpec"].empty()) {
      GPUSpec = make_shared<string>(boost::any_cast<string>(m["GPUSpec"]));
    }
    if (m.find("InstanceBandwidthRx") != m.end() && !m["InstanceBandwidthRx"].empty()) {
      instanceBandwidthRx = make_shared<long>(boost::any_cast<long>(m["InstanceBandwidthRx"]));
    }
    if (m.find("InstanceBandwidthTx") != m.end() && !m["InstanceBandwidthTx"].empty()) {
      instanceBandwidthTx = make_shared<long>(boost::any_cast<long>(m["InstanceBandwidthTx"]));
    }
    if (m.find("InstancePpsRx") != m.end() && !m["InstancePpsRx"].empty()) {
      instancePpsRx = make_shared<long>(boost::any_cast<long>(m["InstancePpsRx"]));
    }
    if (m.find("InstancePpsTx") != m.end() && !m["InstancePpsTx"].empty()) {
      instancePpsTx = make_shared<long>(boost::any_cast<long>(m["InstancePpsTx"]));
    }
    if (m.find("InstanceTypeId") != m.end() && !m["InstanceTypeId"].empty()) {
      instanceTypeId = make_shared<string>(boost::any_cast<string>(m["InstanceTypeId"]));
    }
    if (m.find("MemorySize") != m.end() && !m["MemorySize"].empty()) {
      memorySize = make_shared<long>(boost::any_cast<long>(m["MemorySize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ZoneIds") != m.end() && !m["ZoneIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["ZoneIds"].type()) {
        ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfoZoneIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ZoneIds"]));
        zoneIds = make_shared<ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfoZoneIds>(model1);
      }
    }
  }


  virtual ~ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo() = default;
};
class ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypes : public Darabonba::Model {
public:
  shared_ptr<vector<ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo>> typesInfo{};

  ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypes() {}

  explicit ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (typesInfo) {
      vector<boost::any> temp1;
      for(auto item1:*typesInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TypesInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TypesInfo") != m.end() && !m["TypesInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["TypesInfo"].type()) {
        vector<ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TypesInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        typesInfo = make_shared<vector<ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypesTypesInfo>>(expect1);
      }
    }
  }


  virtual ~ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypes() = default;
};
class ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfo : public Darabonba::Model {
public:
  shared_ptr<string> generation{};
  shared_ptr<string> instanceTypeFamilyId{};
  shared_ptr<ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypes> types{};

  ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfo() {}

  explicit ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generation) {
      res["Generation"] = boost::any(*generation);
    }
    if (instanceTypeFamilyId) {
      res["InstanceTypeFamilyId"] = boost::any(*instanceTypeFamilyId);
    }
    if (types) {
      res["Types"] = types ? boost::any(types->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Generation") != m.end() && !m["Generation"].empty()) {
      generation = make_shared<string>(boost::any_cast<string>(m["Generation"]));
    }
    if (m.find("InstanceTypeFamilyId") != m.end() && !m["InstanceTypeFamilyId"].empty()) {
      instanceTypeFamilyId = make_shared<string>(boost::any_cast<string>(m["InstanceTypeFamilyId"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      if (typeid(map<string, boost::any>) == m["Types"].type()) {
        ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Types"]));
        types = make_shared<ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfoTypes>(model1);
      }
    }
  }


  virtual ~ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfo() = default;
};
class ListAvailableEcsTypesResponseBodyInstanceTypeFamilies : public Darabonba::Model {
public:
  shared_ptr<vector<ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfo>> instanceTypeFamilyInfo{};

  ListAvailableEcsTypesResponseBodyInstanceTypeFamilies() {}

  explicit ListAvailableEcsTypesResponseBodyInstanceTypeFamilies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypeFamilyInfo) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTypeFamilyInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTypeFamilyInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypeFamilyInfo") != m.end() && !m["InstanceTypeFamilyInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTypeFamilyInfo"].type()) {
        vector<ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTypeFamilyInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTypeFamilyInfo = make_shared<vector<ListAvailableEcsTypesResponseBodyInstanceTypeFamiliesInstanceTypeFamilyInfo>>(expect1);
      }
    }
  }


  virtual ~ListAvailableEcsTypesResponseBodyInstanceTypeFamilies() = default;
};
class ListAvailableEcsTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAvailableEcsTypesResponseBodyInstanceTypeFamilies> instanceTypeFamilies{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> supportSpotInstance{};

  ListAvailableEcsTypesResponseBody() {}

  explicit ListAvailableEcsTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypeFamilies) {
      res["InstanceTypeFamilies"] = instanceTypeFamilies ? boost::any(instanceTypeFamilies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (supportSpotInstance) {
      res["SupportSpotInstance"] = boost::any(*supportSpotInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypeFamilies") != m.end() && !m["InstanceTypeFamilies"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceTypeFamilies"].type()) {
        ListAvailableEcsTypesResponseBodyInstanceTypeFamilies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceTypeFamilies"]));
        instanceTypeFamilies = make_shared<ListAvailableEcsTypesResponseBodyInstanceTypeFamilies>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SupportSpotInstance") != m.end() && !m["SupportSpotInstance"].empty()) {
      supportSpotInstance = make_shared<bool>(boost::any_cast<bool>(m["SupportSpotInstance"]));
    }
  }


  virtual ~ListAvailableEcsTypesResponseBody() = default;
};
class ListAvailableEcsTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListAvailableEcsTypesResponseBody> body{};

  ListAvailableEcsTypesResponse() {}

  explicit ListAvailableEcsTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAvailableEcsTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAvailableEcsTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAvailableEcsTypesResponse() = default;
};
class ListCloudMetricProfilingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  ListCloudMetricProfilingsRequest() {}

  explicit ListCloudMetricProfilingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListCloudMetricProfilingsRequest() = default;
};
class ListCloudMetricProfilingsResponseBodyProfilingsProfilingInfo : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<long> freq{};
  shared_ptr<string> hostName{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pid{};
  shared_ptr<string> profilingId{};
  shared_ptr<string> triggerTime{};

  ListCloudMetricProfilingsResponseBodyProfilingsProfilingInfo() {}

  explicit ListCloudMetricProfilingsResponseBodyProfilingsProfilingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (freq) {
      res["Freq"] = boost::any(*freq);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (profilingId) {
      res["ProfilingId"] = boost::any(*profilingId);
    }
    if (triggerTime) {
      res["TriggerTime"] = boost::any(*triggerTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Freq") != m.end() && !m["Freq"].empty()) {
      freq = make_shared<long>(boost::any_cast<long>(m["Freq"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["Pid"]));
    }
    if (m.find("ProfilingId") != m.end() && !m["ProfilingId"].empty()) {
      profilingId = make_shared<string>(boost::any_cast<string>(m["ProfilingId"]));
    }
    if (m.find("TriggerTime") != m.end() && !m["TriggerTime"].empty()) {
      triggerTime = make_shared<string>(boost::any_cast<string>(m["TriggerTime"]));
    }
  }


  virtual ~ListCloudMetricProfilingsResponseBodyProfilingsProfilingInfo() = default;
};
class ListCloudMetricProfilingsResponseBodyProfilings : public Darabonba::Model {
public:
  shared_ptr<vector<ListCloudMetricProfilingsResponseBodyProfilingsProfilingInfo>> profilingInfo{};

  ListCloudMetricProfilingsResponseBodyProfilings() {}

  explicit ListCloudMetricProfilingsResponseBodyProfilings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (profilingInfo) {
      vector<boost::any> temp1;
      for(auto item1:*profilingInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProfilingInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProfilingInfo") != m.end() && !m["ProfilingInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ProfilingInfo"].type()) {
        vector<ListCloudMetricProfilingsResponseBodyProfilingsProfilingInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProfilingInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCloudMetricProfilingsResponseBodyProfilingsProfilingInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        profilingInfo = make_shared<vector<ListCloudMetricProfilingsResponseBodyProfilingsProfilingInfo>>(expect1);
      }
    }
  }


  virtual ~ListCloudMetricProfilingsResponseBodyProfilings() = default;
};
class ListCloudMetricProfilingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<ListCloudMetricProfilingsResponseBodyProfilings> profilings{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListCloudMetricProfilingsResponseBody() {}

  explicit ListCloudMetricProfilingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (profilings) {
      res["Profilings"] = profilings ? boost::any(profilings->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Profilings") != m.end() && !m["Profilings"].empty()) {
      if (typeid(map<string, boost::any>) == m["Profilings"].type()) {
        ListCloudMetricProfilingsResponseBodyProfilings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Profilings"]));
        profilings = make_shared<ListCloudMetricProfilingsResponseBodyProfilings>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCloudMetricProfilingsResponseBody() = default;
};
class ListCloudMetricProfilingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCloudMetricProfilingsResponseBody> body{};

  ListCloudMetricProfilingsResponse() {}

  explicit ListCloudMetricProfilingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCloudMetricProfilingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCloudMetricProfilingsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCloudMetricProfilingsResponse() = default;
};
class ListClusterLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListClusterLogsRequest() {}

  explicit ListClusterLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListClusterLogsRequest() = default;
};
class ListClusterLogsResponseBodyLogsLogInfo : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> level{};
  shared_ptr<string> message{};
  shared_ptr<string> operation{};

  ListClusterLogsResponseBodyLogsLogInfo() {}

  explicit ListClusterLogsResponseBodyLogsLogInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
  }


  virtual ~ListClusterLogsResponseBodyLogsLogInfo() = default;
};
class ListClusterLogsResponseBodyLogs : public Darabonba::Model {
public:
  shared_ptr<vector<ListClusterLogsResponseBodyLogsLogInfo>> logInfo{};

  ListClusterLogsResponseBodyLogs() {}

  explicit ListClusterLogsResponseBodyLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logInfo) {
      vector<boost::any> temp1;
      for(auto item1:*logInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogInfo") != m.end() && !m["LogInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["LogInfo"].type()) {
        vector<ListClusterLogsResponseBodyLogsLogInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterLogsResponseBodyLogsLogInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logInfo = make_shared<vector<ListClusterLogsResponseBodyLogsLogInfo>>(expect1);
      }
    }
  }


  virtual ~ListClusterLogsResponseBodyLogs() = default;
};
class ListClusterLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<ListClusterLogsResponseBodyLogs> logs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListClusterLogsResponseBody() {}

  explicit ListClusterLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (logs) {
      res["Logs"] = logs ? boost::any(logs->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Logs"].type()) {
        ListClusterLogsResponseBodyLogs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Logs"]));
        logs = make_shared<ListClusterLogsResponseBodyLogs>(model1);
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


  virtual ~ListClusterLogsResponseBody() = default;
};
class ListClusterLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListClusterLogsResponseBody> body{};

  ListClusterLogsResponse() {}

  explicit ListClusterLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClusterLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterLogsResponse() = default;
};
class ListClustersRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListClustersRequest() {}

  explicit ListClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListClustersRequest() = default;
};
class ListClustersResponseBodyClustersClusterInfoSimpleComputes : public Darabonba::Model {
public:
  shared_ptr<long> exceptionCount{};
  shared_ptr<long> normalCount{};
  shared_ptr<long> operatingCount{};
  shared_ptr<long> stoppedCount{};
  shared_ptr<long> total{};

  ListClustersResponseBodyClustersClusterInfoSimpleComputes() {}

  explicit ListClustersResponseBodyClustersClusterInfoSimpleComputes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exceptionCount) {
      res["ExceptionCount"] = boost::any(*exceptionCount);
    }
    if (normalCount) {
      res["NormalCount"] = boost::any(*normalCount);
    }
    if (operatingCount) {
      res["OperatingCount"] = boost::any(*operatingCount);
    }
    if (stoppedCount) {
      res["StoppedCount"] = boost::any(*stoppedCount);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExceptionCount") != m.end() && !m["ExceptionCount"].empty()) {
      exceptionCount = make_shared<long>(boost::any_cast<long>(m["ExceptionCount"]));
    }
    if (m.find("NormalCount") != m.end() && !m["NormalCount"].empty()) {
      normalCount = make_shared<long>(boost::any_cast<long>(m["NormalCount"]));
    }
    if (m.find("OperatingCount") != m.end() && !m["OperatingCount"].empty()) {
      operatingCount = make_shared<long>(boost::any_cast<long>(m["OperatingCount"]));
    }
    if (m.find("StoppedCount") != m.end() && !m["StoppedCount"].empty()) {
      stoppedCount = make_shared<long>(boost::any_cast<long>(m["StoppedCount"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersClusterInfoSimpleComputes() = default;
};
class ListClustersResponseBodyClustersClusterInfoSimpleManagers : public Darabonba::Model {
public:
  shared_ptr<long> exceptionCount{};
  shared_ptr<long> normalCount{};
  shared_ptr<long> operatingCount{};
  shared_ptr<long> stoppedCount{};
  shared_ptr<long> total{};

  ListClustersResponseBodyClustersClusterInfoSimpleManagers() {}

  explicit ListClustersResponseBodyClustersClusterInfoSimpleManagers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exceptionCount) {
      res["ExceptionCount"] = boost::any(*exceptionCount);
    }
    if (normalCount) {
      res["NormalCount"] = boost::any(*normalCount);
    }
    if (operatingCount) {
      res["OperatingCount"] = boost::any(*operatingCount);
    }
    if (stoppedCount) {
      res["StoppedCount"] = boost::any(*stoppedCount);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExceptionCount") != m.end() && !m["ExceptionCount"].empty()) {
      exceptionCount = make_shared<long>(boost::any_cast<long>(m["ExceptionCount"]));
    }
    if (m.find("NormalCount") != m.end() && !m["NormalCount"].empty()) {
      normalCount = make_shared<long>(boost::any_cast<long>(m["NormalCount"]));
    }
    if (m.find("OperatingCount") != m.end() && !m["OperatingCount"].empty()) {
      operatingCount = make_shared<long>(boost::any_cast<long>(m["OperatingCount"]));
    }
    if (m.find("StoppedCount") != m.end() && !m["StoppedCount"].empty()) {
      stoppedCount = make_shared<long>(boost::any_cast<long>(m["StoppedCount"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListClustersResponseBodyClustersClusterInfoSimpleManagers() = default;
};
class ListClustersResponseBodyClustersClusterInfoSimpleTotalResources : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memory{};

  ListClustersResponseBodyClustersClusterInfoSimpleTotalResources() {}

  explicit ListClustersResponseBodyClustersClusterInfoSimpleTotalResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListClustersResponseBodyClustersClusterInfoSimpleTotalResources() = default;
};
class ListClustersResponseBodyClustersClusterInfoSimpleUsedResources : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memory{};

  ListClustersResponseBodyClustersClusterInfoSimpleUsedResources() {}

  explicit ListClustersResponseBodyClustersClusterInfoSimpleUsedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListClustersResponseBodyClustersClusterInfoSimpleUsedResources() = default;
};
class ListClustersResponseBodyClustersClusterInfoSimple : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<string> baseOsTag{};
  shared_ptr<string> clientVersion{};
  shared_ptr<double> computeSpotPriceLimit{};
  shared_ptr<string> computeSpotStrategy{};
  shared_ptr<ListClustersResponseBodyClustersClusterInfoSimpleComputes> computes{};
  shared_ptr<long> count{};
  shared_ptr<string> createTime{};
  shared_ptr<string> deployMode{};
  shared_ptr<string> description{};
  shared_ptr<string> ehpcVersion{};
  shared_ptr<bool> hasPlugin{};
  shared_ptr<string> id{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> instanceType{};
  shared_ptr<bool> isComputeEss{};
  shared_ptr<string> location{};
  shared_ptr<string> loginNodes{};
  shared_ptr<ListClustersResponseBodyClustersClusterInfoSimpleManagers> managers{};
  shared_ptr<string> name{};
  shared_ptr<string> nodePrefix{};
  shared_ptr<string> nodeSuffix{};
  shared_ptr<string> osTag{};
  shared_ptr<string> regionId{};
  shared_ptr<string> schedulerType{};
  shared_ptr<string> status{};
  shared_ptr<ListClustersResponseBodyClustersClusterInfoSimpleTotalResources> totalResources{};
  shared_ptr<ListClustersResponseBodyClustersClusterInfoSimpleUsedResources> usedResources{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ListClustersResponseBodyClustersClusterInfoSimple() {}

  explicit ListClustersResponseBodyClustersClusterInfoSimple(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (baseOsTag) {
      res["BaseOsTag"] = boost::any(*baseOsTag);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (computeSpotPriceLimit) {
      res["ComputeSpotPriceLimit"] = boost::any(*computeSpotPriceLimit);
    }
    if (computeSpotStrategy) {
      res["ComputeSpotStrategy"] = boost::any(*computeSpotStrategy);
    }
    if (computes) {
      res["Computes"] = computes ? boost::any(computes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deployMode) {
      res["DeployMode"] = boost::any(*deployMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ehpcVersion) {
      res["EhpcVersion"] = boost::any(*ehpcVersion);
    }
    if (hasPlugin) {
      res["HasPlugin"] = boost::any(*hasPlugin);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (isComputeEss) {
      res["IsComputeEss"] = boost::any(*isComputeEss);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (loginNodes) {
      res["LoginNodes"] = boost::any(*loginNodes);
    }
    if (managers) {
      res["Managers"] = managers ? boost::any(managers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodePrefix) {
      res["NodePrefix"] = boost::any(*nodePrefix);
    }
    if (nodeSuffix) {
      res["NodeSuffix"] = boost::any(*nodeSuffix);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (schedulerType) {
      res["SchedulerType"] = boost::any(*schedulerType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (totalResources) {
      res["TotalResources"] = totalResources ? boost::any(totalResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (usedResources) {
      res["UsedResources"] = usedResources ? boost::any(usedResources->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("BaseOsTag") != m.end() && !m["BaseOsTag"].empty()) {
      baseOsTag = make_shared<string>(boost::any_cast<string>(m["BaseOsTag"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ComputeSpotPriceLimit") != m.end() && !m["ComputeSpotPriceLimit"].empty()) {
      computeSpotPriceLimit = make_shared<double>(boost::any_cast<double>(m["ComputeSpotPriceLimit"]));
    }
    if (m.find("ComputeSpotStrategy") != m.end() && !m["ComputeSpotStrategy"].empty()) {
      computeSpotStrategy = make_shared<string>(boost::any_cast<string>(m["ComputeSpotStrategy"]));
    }
    if (m.find("Computes") != m.end() && !m["Computes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Computes"].type()) {
        ListClustersResponseBodyClustersClusterInfoSimpleComputes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Computes"]));
        computes = make_shared<ListClustersResponseBodyClustersClusterInfoSimpleComputes>(model1);
      }
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DeployMode") != m.end() && !m["DeployMode"].empty()) {
      deployMode = make_shared<string>(boost::any_cast<string>(m["DeployMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EhpcVersion") != m.end() && !m["EhpcVersion"].empty()) {
      ehpcVersion = make_shared<string>(boost::any_cast<string>(m["EhpcVersion"]));
    }
    if (m.find("HasPlugin") != m.end() && !m["HasPlugin"].empty()) {
      hasPlugin = make_shared<bool>(boost::any_cast<bool>(m["HasPlugin"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IsComputeEss") != m.end() && !m["IsComputeEss"].empty()) {
      isComputeEss = make_shared<bool>(boost::any_cast<bool>(m["IsComputeEss"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("LoginNodes") != m.end() && !m["LoginNodes"].empty()) {
      loginNodes = make_shared<string>(boost::any_cast<string>(m["LoginNodes"]));
    }
    if (m.find("Managers") != m.end() && !m["Managers"].empty()) {
      if (typeid(map<string, boost::any>) == m["Managers"].type()) {
        ListClustersResponseBodyClustersClusterInfoSimpleManagers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Managers"]));
        managers = make_shared<ListClustersResponseBodyClustersClusterInfoSimpleManagers>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodePrefix") != m.end() && !m["NodePrefix"].empty()) {
      nodePrefix = make_shared<string>(boost::any_cast<string>(m["NodePrefix"]));
    }
    if (m.find("NodeSuffix") != m.end() && !m["NodeSuffix"].empty()) {
      nodeSuffix = make_shared<string>(boost::any_cast<string>(m["NodeSuffix"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SchedulerType") != m.end() && !m["SchedulerType"].empty()) {
      schedulerType = make_shared<string>(boost::any_cast<string>(m["SchedulerType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TotalResources") != m.end() && !m["TotalResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TotalResources"].type()) {
        ListClustersResponseBodyClustersClusterInfoSimpleTotalResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TotalResources"]));
        totalResources = make_shared<ListClustersResponseBodyClustersClusterInfoSimpleTotalResources>(model1);
      }
    }
    if (m.find("UsedResources") != m.end() && !m["UsedResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsedResources"].type()) {
        ListClustersResponseBodyClustersClusterInfoSimpleUsedResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsedResources"]));
        usedResources = make_shared<ListClustersResponseBodyClustersClusterInfoSimpleUsedResources>(model1);
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


  virtual ~ListClustersResponseBodyClustersClusterInfoSimple() = default;
};
class ListClustersResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<vector<ListClustersResponseBodyClustersClusterInfoSimple>> clusterInfoSimple{};

  ListClustersResponseBodyClusters() {}

  explicit ListClustersResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterInfoSimple) {
      vector<boost::any> temp1;
      for(auto item1:*clusterInfoSimple){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClusterInfoSimple"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterInfoSimple") != m.end() && !m["ClusterInfoSimple"].empty()) {
      if (typeid(vector<boost::any>) == m["ClusterInfoSimple"].type()) {
        vector<ListClustersResponseBodyClustersClusterInfoSimple> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClusterInfoSimple"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyClustersClusterInfoSimple model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterInfoSimple = make_shared<vector<ListClustersResponseBodyClustersClusterInfoSimple>>(expect1);
      }
    }
  }


  virtual ~ListClustersResponseBodyClusters() = default;
};
class ListClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListClustersResponseBodyClusters> clusters{};
  shared_ptr<long> pageNumber{};
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
      res["Clusters"] = clusters ? boost::any(clusters->toMap()) : boost::any(map<string,boost::any>({}));
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
      if (typeid(map<string, boost::any>) == m["Clusters"].type()) {
        ListClustersResponseBodyClusters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Clusters"]));
        clusters = make_shared<ListClustersResponseBodyClusters>(model1);
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


  virtual ~ListClustersResponseBody() = default;
};
class ListClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListClustersResponseBody> body{};

  ListClustersResponse() {}

  explicit ListClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListClustersMetaRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListClustersMetaRequest() {}

  explicit ListClustersMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListClustersMetaRequest() = default;
};
class ListClustersMetaResponseBodyClustersClusterInfoSimple : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> deployMode{};
  shared_ptr<string> description{};
  shared_ptr<bool> hasPlugin{};
  shared_ptr<string> id{};
  shared_ptr<bool> isComputeEss{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};
  shared_ptr<string> osTag{};
  shared_ptr<string> schedulerType{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};

  ListClustersMetaResponseBodyClustersClusterInfoSimple() {}

  explicit ListClustersMetaResponseBodyClustersClusterInfoSimple(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (deployMode) {
      res["DeployMode"] = boost::any(*deployMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hasPlugin) {
      res["HasPlugin"] = boost::any(*hasPlugin);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isComputeEss) {
      res["IsComputeEss"] = boost::any(*isComputeEss);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (schedulerType) {
      res["SchedulerType"] = boost::any(*schedulerType);
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
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("DeployMode") != m.end() && !m["DeployMode"].empty()) {
      deployMode = make_shared<string>(boost::any_cast<string>(m["DeployMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HasPlugin") != m.end() && !m["HasPlugin"].empty()) {
      hasPlugin = make_shared<bool>(boost::any_cast<bool>(m["HasPlugin"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IsComputeEss") != m.end() && !m["IsComputeEss"].empty()) {
      isComputeEss = make_shared<bool>(boost::any_cast<bool>(m["IsComputeEss"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("SchedulerType") != m.end() && !m["SchedulerType"].empty()) {
      schedulerType = make_shared<string>(boost::any_cast<string>(m["SchedulerType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListClustersMetaResponseBodyClustersClusterInfoSimple() = default;
};
class ListClustersMetaResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<vector<ListClustersMetaResponseBodyClustersClusterInfoSimple>> clusterInfoSimple{};

  ListClustersMetaResponseBodyClusters() {}

  explicit ListClustersMetaResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterInfoSimple) {
      vector<boost::any> temp1;
      for(auto item1:*clusterInfoSimple){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClusterInfoSimple"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterInfoSimple") != m.end() && !m["ClusterInfoSimple"].empty()) {
      if (typeid(vector<boost::any>) == m["ClusterInfoSimple"].type()) {
        vector<ListClustersMetaResponseBodyClustersClusterInfoSimple> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClusterInfoSimple"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersMetaResponseBodyClustersClusterInfoSimple model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusterInfoSimple = make_shared<vector<ListClustersMetaResponseBodyClustersClusterInfoSimple>>(expect1);
      }
    }
  }


  virtual ~ListClustersMetaResponseBodyClusters() = default;
};
class ListClustersMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListClustersMetaResponseBodyClusters> clusters{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListClustersMetaResponseBody() {}

  explicit ListClustersMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      res["Clusters"] = clusters ? boost::any(clusters->toMap()) : boost::any(map<string,boost::any>({}));
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
      if (typeid(map<string, boost::any>) == m["Clusters"].type()) {
        ListClustersMetaResponseBodyClusters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Clusters"]));
        clusters = make_shared<ListClustersMetaResponseBodyClusters>(model1);
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


  virtual ~ListClustersMetaResponseBody() = default;
};
class ListClustersMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListClustersMetaResponseBody> body{};

  ListClustersMetaResponse() {}

  explicit ListClustersMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClustersMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClustersMetaResponseBody>(model1);
      }
    }
  }


  virtual ~ListClustersMetaResponse() = default;
};
class ListCommandsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> commandId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListCommandsRequest() {}

  explicit ListCommandsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (commandId) {
      res["CommandId"] = boost::any(*commandId);
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
    if (m.find("CommandId") != m.end() && !m["CommandId"].empty()) {
      commandId = make_shared<string>(boost::any_cast<string>(m["CommandId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListCommandsRequest() = default;
};
class ListCommandsResponseBodyCommandsCommand : public Darabonba::Model {
public:
  shared_ptr<string> commandContent{};
  shared_ptr<string> commandId{};
  shared_ptr<string> timeout{};
  shared_ptr<string> workingDir{};

  ListCommandsResponseBodyCommandsCommand() {}

  explicit ListCommandsResponseBodyCommandsCommand(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commandContent) {
      res["CommandContent"] = boost::any(*commandContent);
    }
    if (commandId) {
      res["CommandId"] = boost::any(*commandId);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (workingDir) {
      res["WorkingDir"] = boost::any(*workingDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommandContent") != m.end() && !m["CommandContent"].empty()) {
      commandContent = make_shared<string>(boost::any_cast<string>(m["CommandContent"]));
    }
    if (m.find("CommandId") != m.end() && !m["CommandId"].empty()) {
      commandId = make_shared<string>(boost::any_cast<string>(m["CommandId"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<string>(boost::any_cast<string>(m["Timeout"]));
    }
    if (m.find("WorkingDir") != m.end() && !m["WorkingDir"].empty()) {
      workingDir = make_shared<string>(boost::any_cast<string>(m["WorkingDir"]));
    }
  }


  virtual ~ListCommandsResponseBodyCommandsCommand() = default;
};
class ListCommandsResponseBodyCommands : public Darabonba::Model {
public:
  shared_ptr<vector<ListCommandsResponseBodyCommandsCommand>> command{};

  ListCommandsResponseBodyCommands() {}

  explicit ListCommandsResponseBodyCommands(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      vector<boost::any> temp1;
      for(auto item1:*command){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Command"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<ListCommandsResponseBodyCommandsCommand> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Command"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCommandsResponseBodyCommandsCommand model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        command = make_shared<vector<ListCommandsResponseBodyCommandsCommand>>(expect1);
      }
    }
  }


  virtual ~ListCommandsResponseBodyCommands() = default;
};
class ListCommandsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListCommandsResponseBodyCommands> commands{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListCommandsResponseBody() {}

  explicit ListCommandsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commands) {
      res["Commands"] = commands ? boost::any(commands->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Commands") != m.end() && !m["Commands"].empty()) {
      if (typeid(map<string, boost::any>) == m["Commands"].type()) {
        ListCommandsResponseBodyCommands model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Commands"]));
        commands = make_shared<ListCommandsResponseBodyCommands>(model1);
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


  virtual ~ListCommandsResponseBody() = default;
};
class ListCommandsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCommandsResponseBody> body{};

  ListCommandsResponse() {}

  explicit ListCommandsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCommandsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCommandsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCommandsResponse() = default;
};
class ListContainerAppsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListContainerAppsRequest() {}

  explicit ListContainerAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListContainerAppsRequest() = default;
};
class ListContainerAppsResponseBodyContainerAppsContainerApps : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> imageTag{};
  shared_ptr<string> name{};
  shared_ptr<string> repository{};
  shared_ptr<string> type{};

  ListContainerAppsResponseBodyContainerAppsContainerApps() {}

  explicit ListContainerAppsResponseBodyContainerAppsContainerApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (repository) {
      res["Repository"] = boost::any(*repository);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Repository") != m.end() && !m["Repository"].empty()) {
      repository = make_shared<string>(boost::any_cast<string>(m["Repository"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListContainerAppsResponseBodyContainerAppsContainerApps() = default;
};
class ListContainerAppsResponseBodyContainerApps : public Darabonba::Model {
public:
  shared_ptr<vector<ListContainerAppsResponseBodyContainerAppsContainerApps>> containerApps{};

  ListContainerAppsResponseBodyContainerApps() {}

  explicit ListContainerAppsResponseBodyContainerApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerApps) {
      vector<boost::any> temp1;
      for(auto item1:*containerApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ContainerApps"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerApps") != m.end() && !m["ContainerApps"].empty()) {
      if (typeid(vector<boost::any>) == m["ContainerApps"].type()) {
        vector<ListContainerAppsResponseBodyContainerAppsContainerApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ContainerApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListContainerAppsResponseBodyContainerAppsContainerApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        containerApps = make_shared<vector<ListContainerAppsResponseBodyContainerAppsContainerApps>>(expect1);
      }
    }
  }


  virtual ~ListContainerAppsResponseBodyContainerApps() = default;
};
class ListContainerAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListContainerAppsResponseBodyContainerApps> containerApps{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListContainerAppsResponseBody() {}

  explicit ListContainerAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerApps) {
      res["ContainerApps"] = containerApps ? boost::any(containerApps->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ContainerApps") != m.end() && !m["ContainerApps"].empty()) {
      if (typeid(map<string, boost::any>) == m["ContainerApps"].type()) {
        ListContainerAppsResponseBodyContainerApps model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ContainerApps"]));
        containerApps = make_shared<ListContainerAppsResponseBodyContainerApps>(model1);
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


  virtual ~ListContainerAppsResponseBody() = default;
};
class ListContainerAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListContainerAppsResponseBody> body{};

  ListContainerAppsResponse() {}

  explicit ListContainerAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListContainerAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListContainerAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListContainerAppsResponse() = default;
};
class ListContainerImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> containerType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListContainerImagesRequest() {}

  explicit ListContainerImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (containerType) {
      res["ContainerType"] = boost::any(*containerType);
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
    if (m.find("ContainerType") != m.end() && !m["ContainerType"].empty()) {
      containerType = make_shared<string>(boost::any_cast<string>(m["ContainerType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListContainerImagesRequest() = default;
};
class ListContainerImagesResponseBodyImagesImages : public Darabonba::Model {
public:
  shared_ptr<string> imageId{};
  shared_ptr<string> repository{};
  shared_ptr<string> status{};
  shared_ptr<string> system{};
  shared_ptr<string> tag{};
  shared_ptr<string> type{};
  shared_ptr<string> updateDateTime{};

  ListContainerImagesResponseBodyImagesImages() {}

  explicit ListContainerImagesResponseBodyImagesImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (repository) {
      res["Repository"] = boost::any(*repository);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (system) {
      res["System"] = boost::any(*system);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updateDateTime) {
      res["UpdateDateTime"] = boost::any(*updateDateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("Repository") != m.end() && !m["Repository"].empty()) {
      repository = make_shared<string>(boost::any_cast<string>(m["Repository"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("System") != m.end() && !m["System"].empty()) {
      system = make_shared<string>(boost::any_cast<string>(m["System"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdateDateTime") != m.end() && !m["UpdateDateTime"].empty()) {
      updateDateTime = make_shared<string>(boost::any_cast<string>(m["UpdateDateTime"]));
    }
  }


  virtual ~ListContainerImagesResponseBodyImagesImages() = default;
};
class ListContainerImagesResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<vector<ListContainerImagesResponseBodyImagesImages>> images{};

  ListContainerImagesResponseBodyImages() {}

  explicit ListContainerImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<ListContainerImagesResponseBodyImagesImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListContainerImagesResponseBodyImagesImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<ListContainerImagesResponseBodyImagesImages>>(expect1);
      }
    }
  }


  virtual ~ListContainerImagesResponseBodyImages() = default;
};
class ListContainerImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DBInfo{};
  shared_ptr<ListContainerImagesResponseBodyImages> images{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListContainerImagesResponseBody() {}

  explicit ListContainerImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DBInfo) {
      res["DBInfo"] = boost::any(*DBInfo);
    }
    if (images) {
      res["Images"] = images ? boost::any(images->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("DBInfo") != m.end() && !m["DBInfo"].empty()) {
      DBInfo = make_shared<string>(boost::any_cast<string>(m["DBInfo"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(map<string, boost::any>) == m["Images"].type()) {
        ListContainerImagesResponseBodyImages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Images"]));
        images = make_shared<ListContainerImagesResponseBodyImages>(model1);
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


  virtual ~ListContainerImagesResponseBody() = default;
};
class ListContainerImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListContainerImagesResponseBody> body{};

  ListContainerImagesResponse() {}

  explicit ListContainerImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListContainerImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListContainerImagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListContainerImagesResponse() = default;
};
class ListCpfsFileSystemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileSystemId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListCpfsFileSystemsRequest() {}

  explicit ListCpfsFileSystemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
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
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListCpfsFileSystemsRequest() = default;
};
class ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets : public Darabonba::Model {
public:
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<string> networkType{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswId{};

  ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets() {}

  explicit ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswId) {
      res["VswId"] = boost::any(*vswId);
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
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswId") != m.end() && !m["VswId"].empty()) {
      vswId = make_shared<string>(boost::any_cast<string>(m["VswId"]));
    }
  }


  virtual ~ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets() = default;
};
class ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetList : public Darabonba::Model {
public:
  shared_ptr<vector<ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets>> mountTargets{};

  ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetList() {}

  explicit ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountTargets) {
      vector<boost::any> temp1;
      for(auto item1:*mountTargets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MountTargets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountTargets") != m.end() && !m["MountTargets"].empty()) {
      if (typeid(vector<boost::any>) == m["MountTargets"].type()) {
        vector<ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MountTargets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountTargets = make_shared<vector<ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets>>(expect1);
      }
    }
  }


  virtual ~ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetList() = default;
};
class ListCpfsFileSystemsResponseBodyFileSystemListFileSystems : public Darabonba::Model {
public:
  shared_ptr<string> capacity{};
  shared_ptr<string> createTime{};
  shared_ptr<string> destription{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetList> mountTargetList{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> zoneId{};

  ListCpfsFileSystemsResponseBodyFileSystemListFileSystems() {}

  explicit ListCpfsFileSystemsResponseBodyFileSystemListFileSystems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (destription) {
      res["Destription"] = boost::any(*destription);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (mountTargetList) {
      res["MountTargetList"] = mountTargetList ? boost::any(mountTargetList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
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
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<string>(boost::any_cast<string>(m["Capacity"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Destription") != m.end() && !m["Destription"].empty()) {
      destription = make_shared<string>(boost::any_cast<string>(m["Destription"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("MountTargetList") != m.end() && !m["MountTargetList"].empty()) {
      if (typeid(map<string, boost::any>) == m["MountTargetList"].type()) {
        ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MountTargetList"]));
        mountTargetList = make_shared<ListCpfsFileSystemsResponseBodyFileSystemListFileSystemsMountTargetList>(model1);
      }
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListCpfsFileSystemsResponseBodyFileSystemListFileSystems() = default;
};
class ListCpfsFileSystemsResponseBodyFileSystemList : public Darabonba::Model {
public:
  shared_ptr<vector<ListCpfsFileSystemsResponseBodyFileSystemListFileSystems>> fileSystems{};

  ListCpfsFileSystemsResponseBodyFileSystemList() {}

  explicit ListCpfsFileSystemsResponseBodyFileSystemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystems) {
      vector<boost::any> temp1;
      for(auto item1:*fileSystems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileSystems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystems") != m.end() && !m["FileSystems"].empty()) {
      if (typeid(vector<boost::any>) == m["FileSystems"].type()) {
        vector<ListCpfsFileSystemsResponseBodyFileSystemListFileSystems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileSystems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCpfsFileSystemsResponseBodyFileSystemListFileSystems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileSystems = make_shared<vector<ListCpfsFileSystemsResponseBodyFileSystemListFileSystems>>(expect1);
      }
    }
  }


  virtual ~ListCpfsFileSystemsResponseBodyFileSystemList() = default;
};
class ListCpfsFileSystemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListCpfsFileSystemsResponseBodyFileSystemList> fileSystemList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListCpfsFileSystemsResponseBody() {}

  explicit ListCpfsFileSystemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemList) {
      res["FileSystemList"] = fileSystemList ? boost::any(fileSystemList->toMap()) : boost::any(map<string,boost::any>({}));
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
      if (typeid(map<string, boost::any>) == m["FileSystemList"].type()) {
        ListCpfsFileSystemsResponseBodyFileSystemList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileSystemList"]));
        fileSystemList = make_shared<ListCpfsFileSystemsResponseBodyFileSystemList>(model1);
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


  virtual ~ListCpfsFileSystemsResponseBody() = default;
};
class ListCpfsFileSystemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCpfsFileSystemsResponseBody> body{};

  ListCpfsFileSystemsResponse() {}

  explicit ListCpfsFileSystemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCpfsFileSystemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCpfsFileSystemsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCpfsFileSystemsResponse() = default;
};
class ListCurrentClientVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clientVersion{};
  shared_ptr<string> requestId{};

  ListCurrentClientVersionResponseBody() {}

  explicit ListCurrentClientVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCurrentClientVersionResponseBody() = default;
};
class ListCurrentClientVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCurrentClientVersionResponseBody> body{};

  ListCurrentClientVersionResponse() {}

  explicit ListCurrentClientVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCurrentClientVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCurrentClientVersionResponseBody>(model1);
      }
    }
  }


  virtual ~ListCurrentClientVersionResponse() = default;
};
class ListCustomImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> baseOsTag{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> instanceType{};

  ListCustomImagesRequest() {}

  explicit ListCustomImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseOsTag) {
      res["BaseOsTag"] = boost::any(*baseOsTag);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseOsTag") != m.end() && !m["BaseOsTag"].empty()) {
      baseOsTag = make_shared<string>(boost::any_cast<string>(m["BaseOsTag"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~ListCustomImagesRequest() = default;
};
class ListCustomImagesResponseBodyImagesImageInfoBaseOsTag : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> osTag{};
  shared_ptr<string> platform{};
  shared_ptr<string> version{};

  ListCustomImagesResponseBodyImagesImageInfoBaseOsTag() {}

  explicit ListCustomImagesResponseBodyImagesImageInfoBaseOsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (version) {
      res["Version"] = boost::any(*version);
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
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListCustomImagesResponseBodyImagesImageInfoBaseOsTag() = default;
};
class ListCustomImagesResponseBodyImagesImageInfoOsTag : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> baseOsTag{};
  shared_ptr<string> osTag{};
  shared_ptr<string> platform{};
  shared_ptr<string> version{};

  ListCustomImagesResponseBodyImagesImageInfoOsTag() {}

  explicit ListCustomImagesResponseBodyImagesImageInfoOsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["Architecture"] = boost::any(*architecture);
    }
    if (baseOsTag) {
      res["BaseOsTag"] = boost::any(*baseOsTag);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Architecture") != m.end() && !m["Architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["Architecture"]));
    }
    if (m.find("BaseOsTag") != m.end() && !m["BaseOsTag"].empty()) {
      baseOsTag = make_shared<string>(boost::any_cast<string>(m["BaseOsTag"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListCustomImagesResponseBodyImagesImageInfoOsTag() = default;
};
class ListCustomImagesResponseBodyImagesImageInfo : public Darabonba::Model {
public:
  shared_ptr<ListCustomImagesResponseBodyImagesImageInfoBaseOsTag> baseOsTag{};
  shared_ptr<string> description{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageName{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<ListCustomImagesResponseBodyImagesImageInfoOsTag> osTag{};
  shared_ptr<string> postInstallScript{};
  shared_ptr<string> pricingCycle{};
  shared_ptr<string> productCode{};
  shared_ptr<long> size{};
  shared_ptr<string> skuCode{};
  shared_ptr<string> status{};
  shared_ptr<string> uid{};

  ListCustomImagesResponseBodyImagesImageInfo() {}

  explicit ListCustomImagesResponseBodyImagesImageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseOsTag) {
      res["BaseOsTag"] = baseOsTag ? boost::any(baseOsTag->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (osTag) {
      res["OsTag"] = osTag ? boost::any(osTag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (postInstallScript) {
      res["PostInstallScript"] = boost::any(*postInstallScript);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (skuCode) {
      res["SkuCode"] = boost::any(*skuCode);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseOsTag") != m.end() && !m["BaseOsTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["BaseOsTag"].type()) {
        ListCustomImagesResponseBodyImagesImageInfoBaseOsTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BaseOsTag"]));
        baseOsTag = make_shared<ListCustomImagesResponseBodyImagesImageInfoBaseOsTag>(model1);
      }
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
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      if (typeid(map<string, boost::any>) == m["OsTag"].type()) {
        ListCustomImagesResponseBodyImagesImageInfoOsTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OsTag"]));
        osTag = make_shared<ListCustomImagesResponseBodyImagesImageInfoOsTag>(model1);
      }
    }
    if (m.find("PostInstallScript") != m.end() && !m["PostInstallScript"].empty()) {
      postInstallScript = make_shared<string>(boost::any_cast<string>(m["PostInstallScript"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SkuCode") != m.end() && !m["SkuCode"].empty()) {
      skuCode = make_shared<string>(boost::any_cast<string>(m["SkuCode"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~ListCustomImagesResponseBodyImagesImageInfo() = default;
};
class ListCustomImagesResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<vector<ListCustomImagesResponseBodyImagesImageInfo>> imageInfo{};

  ListCustomImagesResponseBodyImages() {}

  explicit ListCustomImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageInfo) {
      vector<boost::any> temp1;
      for(auto item1:*imageInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageInfo") != m.end() && !m["ImageInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageInfo"].type()) {
        vector<ListCustomImagesResponseBodyImagesImageInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCustomImagesResponseBodyImagesImageInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageInfo = make_shared<vector<ListCustomImagesResponseBodyImagesImageInfo>>(expect1);
      }
    }
  }


  virtual ~ListCustomImagesResponseBodyImages() = default;
};
class ListCustomImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListCustomImagesResponseBodyImages> images{};
  shared_ptr<string> requestId{};

  ListCustomImagesResponseBody() {}

  explicit ListCustomImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      res["Images"] = images ? boost::any(images->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(map<string, boost::any>) == m["Images"].type()) {
        ListCustomImagesResponseBodyImages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Images"]));
        images = make_shared<ListCustomImagesResponseBodyImages>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCustomImagesResponseBody() = default;
};
class ListCustomImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListCustomImagesResponseBody> body{};

  ListCustomImagesResponse() {}

  explicit ListCustomImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListCustomImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCustomImagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCustomImagesResponse() = default;
};
class ListFileSystemWithMountTargetsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListFileSystemWithMountTargetsRequest() {}

  explicit ListFileSystemWithMountTargetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListFileSystemWithMountTargetsRequest() = default;
};
class ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets : public Darabonba::Model {
public:
  shared_ptr<string> accessGroup{};
  shared_ptr<string> mountTargetDomain{};
  shared_ptr<string> networkType{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vswId{};

  ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets() {}

  explicit ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessGroup) {
      res["AccessGroup"] = boost::any(*accessGroup);
    }
    if (mountTargetDomain) {
      res["MountTargetDomain"] = boost::any(*mountTargetDomain);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vswId) {
      res["VswId"] = boost::any(*vswId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessGroup") != m.end() && !m["AccessGroup"].empty()) {
      accessGroup = make_shared<string>(boost::any_cast<string>(m["AccessGroup"]));
    }
    if (m.find("MountTargetDomain") != m.end() && !m["MountTargetDomain"].empty()) {
      mountTargetDomain = make_shared<string>(boost::any_cast<string>(m["MountTargetDomain"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VswId") != m.end() && !m["VswId"].empty()) {
      vswId = make_shared<string>(boost::any_cast<string>(m["VswId"]));
    }
  }


  virtual ~ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets() = default;
};
class ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetList : public Darabonba::Model {
public:
  shared_ptr<vector<ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets>> mountTargets{};

  ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetList() {}

  explicit ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mountTargets) {
      vector<boost::any> temp1;
      for(auto item1:*mountTargets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MountTargets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MountTargets") != m.end() && !m["MountTargets"].empty()) {
      if (typeid(vector<boost::any>) == m["MountTargets"].type()) {
        vector<ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MountTargets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        mountTargets = make_shared<vector<ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetListMountTargets>>(expect1);
      }
    }
  }


  virtual ~ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetList() = default;
};
class ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageListPackages : public Darabonba::Model {
public:
  shared_ptr<string> packageId{};

  ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageListPackages() {}

  explicit ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageListPackages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (packageId) {
      res["PackageId"] = boost::any(*packageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PackageId") != m.end() && !m["PackageId"].empty()) {
      packageId = make_shared<string>(boost::any_cast<string>(m["PackageId"]));
    }
  }


  virtual ~ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageListPackages() = default;
};
class ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageList : public Darabonba::Model {
public:
  shared_ptr<vector<ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageListPackages>> packages{};

  ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageList() {}

  explicit ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (packages) {
      vector<boost::any> temp1;
      for(auto item1:*packages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Packages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Packages") != m.end() && !m["Packages"].empty()) {
      if (typeid(vector<boost::any>) == m["Packages"].type()) {
        vector<ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageListPackages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Packages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageListPackages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        packages = make_shared<vector<ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageListPackages>>(expect1);
      }
    }
  }


  virtual ~ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageList() = default;
};
class ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystems : public Darabonba::Model {
public:
  shared_ptr<long> bandWidth{};
  shared_ptr<long> capacity{};
  shared_ptr<string> createTime{};
  shared_ptr<string> destription{};
  shared_ptr<long> encryptType{};
  shared_ptr<string> fileSystemId{};
  shared_ptr<string> fileSystemType{};
  shared_ptr<long> meteredSize{};
  shared_ptr<ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetList> mountTargetList{};
  shared_ptr<ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageList> packageList{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> storageType{};

  ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystems() {}

  explicit ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandWidth) {
      res["BandWidth"] = boost::any(*bandWidth);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (destription) {
      res["Destription"] = boost::any(*destription);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (fileSystemId) {
      res["FileSystemId"] = boost::any(*fileSystemId);
    }
    if (fileSystemType) {
      res["FileSystemType"] = boost::any(*fileSystemType);
    }
    if (meteredSize) {
      res["MeteredSize"] = boost::any(*meteredSize);
    }
    if (mountTargetList) {
      res["MountTargetList"] = mountTargetList ? boost::any(mountTargetList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (packageList) {
      res["PackageList"] = packageList ? boost::any(packageList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageType) {
      res["StorageType"] = boost::any(*storageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandWidth") != m.end() && !m["BandWidth"].empty()) {
      bandWidth = make_shared<long>(boost::any_cast<long>(m["BandWidth"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Destription") != m.end() && !m["Destription"].empty()) {
      destription = make_shared<string>(boost::any_cast<string>(m["Destription"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<long>(boost::any_cast<long>(m["EncryptType"]));
    }
    if (m.find("FileSystemId") != m.end() && !m["FileSystemId"].empty()) {
      fileSystemId = make_shared<string>(boost::any_cast<string>(m["FileSystemId"]));
    }
    if (m.find("FileSystemType") != m.end() && !m["FileSystemType"].empty()) {
      fileSystemType = make_shared<string>(boost::any_cast<string>(m["FileSystemType"]));
    }
    if (m.find("MeteredSize") != m.end() && !m["MeteredSize"].empty()) {
      meteredSize = make_shared<long>(boost::any_cast<long>(m["MeteredSize"]));
    }
    if (m.find("MountTargetList") != m.end() && !m["MountTargetList"].empty()) {
      if (typeid(map<string, boost::any>) == m["MountTargetList"].type()) {
        ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MountTargetList"]));
        mountTargetList = make_shared<ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsMountTargetList>(model1);
      }
    }
    if (m.find("PackageList") != m.end() && !m["PackageList"].empty()) {
      if (typeid(map<string, boost::any>) == m["PackageList"].type()) {
        ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PackageList"]));
        packageList = make_shared<ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystemsPackageList>(model1);
      }
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageType") != m.end() && !m["StorageType"].empty()) {
      storageType = make_shared<string>(boost::any_cast<string>(m["StorageType"]));
    }
  }


  virtual ~ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystems() = default;
};
class ListFileSystemWithMountTargetsResponseBodyFileSystemList : public Darabonba::Model {
public:
  shared_ptr<vector<ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystems>> fileSystems{};

  ListFileSystemWithMountTargetsResponseBodyFileSystemList() {}

  explicit ListFileSystemWithMountTargetsResponseBodyFileSystemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystems) {
      vector<boost::any> temp1;
      for(auto item1:*fileSystems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileSystems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileSystems") != m.end() && !m["FileSystems"].empty()) {
      if (typeid(vector<boost::any>) == m["FileSystems"].type()) {
        vector<ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileSystems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileSystems = make_shared<vector<ListFileSystemWithMountTargetsResponseBodyFileSystemListFileSystems>>(expect1);
      }
    }
  }


  virtual ~ListFileSystemWithMountTargetsResponseBodyFileSystemList() = default;
};
class ListFileSystemWithMountTargetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListFileSystemWithMountTargetsResponseBodyFileSystemList> fileSystemList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListFileSystemWithMountTargetsResponseBody() {}

  explicit ListFileSystemWithMountTargetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileSystemList) {
      res["FileSystemList"] = fileSystemList ? boost::any(fileSystemList->toMap()) : boost::any(map<string,boost::any>({}));
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
      if (typeid(map<string, boost::any>) == m["FileSystemList"].type()) {
        ListFileSystemWithMountTargetsResponseBodyFileSystemList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileSystemList"]));
        fileSystemList = make_shared<ListFileSystemWithMountTargetsResponseBodyFileSystemList>(model1);
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


  virtual ~ListFileSystemWithMountTargetsResponseBody() = default;
};
class ListFileSystemWithMountTargetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListFileSystemWithMountTargetsResponseBody> body{};

  ListFileSystemWithMountTargetsResponse() {}

  explicit ListFileSystemWithMountTargetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListFileSystemWithMountTargetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFileSystemWithMountTargetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFileSystemWithMountTargetsResponse() = default;
};
class ListImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> baseOsTag{};
  shared_ptr<string> instanceType{};

  ListImagesRequest() {}

  explicit ListImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseOsTag) {
      res["BaseOsTag"] = boost::any(*baseOsTag);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseOsTag") != m.end() && !m["BaseOsTag"].empty()) {
      baseOsTag = make_shared<string>(boost::any_cast<string>(m["BaseOsTag"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~ListImagesRequest() = default;
};
class ListImagesResponseBodyOsTagsOsInfo : public Darabonba::Model {
public:
  shared_ptr<string> architecture{};
  shared_ptr<string> baseOsTag{};
  shared_ptr<string> imageId{};
  shared_ptr<string> osTag{};
  shared_ptr<string> platform{};
  shared_ptr<string> version{};

  ListImagesResponseBodyOsTagsOsInfo() {}

  explicit ListImagesResponseBodyOsTagsOsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (architecture) {
      res["Architecture"] = boost::any(*architecture);
    }
    if (baseOsTag) {
      res["BaseOsTag"] = boost::any(*baseOsTag);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Architecture") != m.end() && !m["Architecture"].empty()) {
      architecture = make_shared<string>(boost::any_cast<string>(m["Architecture"]));
    }
    if (m.find("BaseOsTag") != m.end() && !m["BaseOsTag"].empty()) {
      baseOsTag = make_shared<string>(boost::any_cast<string>(m["BaseOsTag"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListImagesResponseBodyOsTagsOsInfo() = default;
};
class ListImagesResponseBodyOsTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListImagesResponseBodyOsTagsOsInfo>> osInfo{};

  ListImagesResponseBodyOsTags() {}

  explicit ListImagesResponseBodyOsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (osInfo) {
      vector<boost::any> temp1;
      for(auto item1:*osInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OsInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OsInfo") != m.end() && !m["OsInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["OsInfo"].type()) {
        vector<ListImagesResponseBodyOsTagsOsInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OsInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImagesResponseBodyOsTagsOsInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        osInfo = make_shared<vector<ListImagesResponseBodyOsTagsOsInfo>>(expect1);
      }
    }
  }


  virtual ~ListImagesResponseBodyOsTags() = default;
};
class ListImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListImagesResponseBodyOsTags> osTags{};
  shared_ptr<string> requestId{};

  ListImagesResponseBody() {}

  explicit ListImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (osTags) {
      res["OsTags"] = osTags ? boost::any(osTags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OsTags") != m.end() && !m["OsTags"].empty()) {
      if (typeid(map<string, boost::any>) == m["OsTags"].type()) {
        ListImagesResponseBodyOsTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OsTags"]));
        osTags = make_shared<ListImagesResponseBodyOsTags>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListImagesResponseBody() = default;
};
class ListImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListImagesResponseBody> body{};

  ListImagesResponse() {}

  explicit ListImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListImagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListImagesResponse() = default;
};
class ListInstalledSoftwareRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  ListInstalledSoftwareRequest() {}

  explicit ListInstalledSoftwareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInstalledSoftwareRequest() = default;
};
class ListInstalledSoftwareResponseBodySoftwareListSoftwareList : public Darabonba::Model {
public:
  shared_ptr<string> softwareId{};
  shared_ptr<string> softwareName{};
  shared_ptr<string> softwareStatus{};
  shared_ptr<string> softwareVersion{};

  ListInstalledSoftwareResponseBodySoftwareListSoftwareList() {}

  explicit ListInstalledSoftwareResponseBodySoftwareListSoftwareList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (softwareId) {
      res["SoftwareId"] = boost::any(*softwareId);
    }
    if (softwareName) {
      res["SoftwareName"] = boost::any(*softwareName);
    }
    if (softwareStatus) {
      res["SoftwareStatus"] = boost::any(*softwareStatus);
    }
    if (softwareVersion) {
      res["SoftwareVersion"] = boost::any(*softwareVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SoftwareId") != m.end() && !m["SoftwareId"].empty()) {
      softwareId = make_shared<string>(boost::any_cast<string>(m["SoftwareId"]));
    }
    if (m.find("SoftwareName") != m.end() && !m["SoftwareName"].empty()) {
      softwareName = make_shared<string>(boost::any_cast<string>(m["SoftwareName"]));
    }
    if (m.find("SoftwareStatus") != m.end() && !m["SoftwareStatus"].empty()) {
      softwareStatus = make_shared<string>(boost::any_cast<string>(m["SoftwareStatus"]));
    }
    if (m.find("SoftwareVersion") != m.end() && !m["SoftwareVersion"].empty()) {
      softwareVersion = make_shared<string>(boost::any_cast<string>(m["SoftwareVersion"]));
    }
  }


  virtual ~ListInstalledSoftwareResponseBodySoftwareListSoftwareList() = default;
};
class ListInstalledSoftwareResponseBodySoftwareList : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstalledSoftwareResponseBodySoftwareListSoftwareList>> softwareList{};

  ListInstalledSoftwareResponseBodySoftwareList() {}

  explicit ListInstalledSoftwareResponseBodySoftwareList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (softwareList) {
      vector<boost::any> temp1;
      for(auto item1:*softwareList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SoftwareList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SoftwareList") != m.end() && !m["SoftwareList"].empty()) {
      if (typeid(vector<boost::any>) == m["SoftwareList"].type()) {
        vector<ListInstalledSoftwareResponseBodySoftwareListSoftwareList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SoftwareList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstalledSoftwareResponseBodySoftwareListSoftwareList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        softwareList = make_shared<vector<ListInstalledSoftwareResponseBodySoftwareListSoftwareList>>(expect1);
      }
    }
  }


  virtual ~ListInstalledSoftwareResponseBodySoftwareList() = default;
};
class ListInstalledSoftwareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListInstalledSoftwareResponseBodySoftwareList> softwareList{};

  ListInstalledSoftwareResponseBody() {}

  explicit ListInstalledSoftwareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (softwareList) {
      res["SoftwareList"] = softwareList ? boost::any(softwareList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SoftwareList") != m.end() && !m["SoftwareList"].empty()) {
      if (typeid(map<string, boost::any>) == m["SoftwareList"].type()) {
        ListInstalledSoftwareResponseBodySoftwareList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SoftwareList"]));
        softwareList = make_shared<ListInstalledSoftwareResponseBodySoftwareList>(model1);
      }
    }
  }


  virtual ~ListInstalledSoftwareResponseBody() = default;
};
class ListInstalledSoftwareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListInstalledSoftwareResponseBody> body{};

  ListInstalledSoftwareResponse() {}

  explicit ListInstalledSoftwareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListInstalledSoftwareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstalledSoftwareResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstalledSoftwareResponse() = default;
};
class ListInvocationResultsRequestInstance : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  ListInvocationResultsRequestInstance() {}

  explicit ListInvocationResultsRequestInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInvocationResultsRequestInstance() = default;
};
class ListInvocationResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> commandId{};
  shared_ptr<vector<ListInvocationResultsRequestInstance>> instance{};
  shared_ptr<string> invokeRecordStatus{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListInvocationResultsRequest() {}

  explicit ListInvocationResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (commandId) {
      res["CommandId"] = boost::any(*commandId);
    }
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    if (invokeRecordStatus) {
      res["InvokeRecordStatus"] = boost::any(*invokeRecordStatus);
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
    if (m.find("CommandId") != m.end() && !m["CommandId"].empty()) {
      commandId = make_shared<string>(boost::any_cast<string>(m["CommandId"]));
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<ListInvocationResultsRequestInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInvocationResultsRequestInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<ListInvocationResultsRequestInstance>>(expect1);
      }
    }
    if (m.find("InvokeRecordStatus") != m.end() && !m["InvokeRecordStatus"].empty()) {
      invokeRecordStatus = make_shared<string>(boost::any_cast<string>(m["InvokeRecordStatus"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListInvocationResultsRequest() = default;
};
class ListInvocationResultsResponseBodyInvocationResultsInvocationResult : public Darabonba::Model {
public:
  shared_ptr<string> commandId{};
  shared_ptr<long> exitCode{};
  shared_ptr<string> finishedTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> invokeRecordStatus{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  ListInvocationResultsResponseBodyInvocationResultsInvocationResult() {}

  explicit ListInvocationResultsResponseBodyInvocationResultsInvocationResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commandId) {
      res["CommandId"] = boost::any(*commandId);
    }
    if (exitCode) {
      res["ExitCode"] = boost::any(*exitCode);
    }
    if (finishedTime) {
      res["FinishedTime"] = boost::any(*finishedTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (invokeRecordStatus) {
      res["InvokeRecordStatus"] = boost::any(*invokeRecordStatus);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommandId") != m.end() && !m["CommandId"].empty()) {
      commandId = make_shared<string>(boost::any_cast<string>(m["CommandId"]));
    }
    if (m.find("ExitCode") != m.end() && !m["ExitCode"].empty()) {
      exitCode = make_shared<long>(boost::any_cast<long>(m["ExitCode"]));
    }
    if (m.find("FinishedTime") != m.end() && !m["FinishedTime"].empty()) {
      finishedTime = make_shared<string>(boost::any_cast<string>(m["FinishedTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InvokeRecordStatus") != m.end() && !m["InvokeRecordStatus"].empty()) {
      invokeRecordStatus = make_shared<string>(boost::any_cast<string>(m["InvokeRecordStatus"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListInvocationResultsResponseBodyInvocationResultsInvocationResult() = default;
};
class ListInvocationResultsResponseBodyInvocationResults : public Darabonba::Model {
public:
  shared_ptr<vector<ListInvocationResultsResponseBodyInvocationResultsInvocationResult>> invocationResult{};

  ListInvocationResultsResponseBodyInvocationResults() {}

  explicit ListInvocationResultsResponseBodyInvocationResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invocationResult) {
      vector<boost::any> temp1;
      for(auto item1:*invocationResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InvocationResult"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvocationResult") != m.end() && !m["InvocationResult"].empty()) {
      if (typeid(vector<boost::any>) == m["InvocationResult"].type()) {
        vector<ListInvocationResultsResponseBodyInvocationResultsInvocationResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InvocationResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInvocationResultsResponseBodyInvocationResultsInvocationResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invocationResult = make_shared<vector<ListInvocationResultsResponseBodyInvocationResultsInvocationResult>>(expect1);
      }
    }
  }


  virtual ~ListInvocationResultsResponseBodyInvocationResults() = default;
};
class ListInvocationResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListInvocationResultsResponseBodyInvocationResults> invocationResults{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListInvocationResultsResponseBody() {}

  explicit ListInvocationResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invocationResults) {
      res["InvocationResults"] = invocationResults ? boost::any(invocationResults->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("InvocationResults") != m.end() && !m["InvocationResults"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvocationResults"].type()) {
        ListInvocationResultsResponseBodyInvocationResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvocationResults"]));
        invocationResults = make_shared<ListInvocationResultsResponseBodyInvocationResults>(model1);
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


  virtual ~ListInvocationResultsResponseBody() = default;
};
class ListInvocationResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListInvocationResultsResponseBody> body{};

  ListInvocationResultsResponse() {}

  explicit ListInvocationResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListInvocationResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInvocationResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListInvocationResultsResponse() = default;
};
class ListInvocationStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> commandId{};

  ListInvocationStatusRequest() {}

  explicit ListInvocationStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (commandId) {
      res["CommandId"] = boost::any(*commandId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CommandId") != m.end() && !m["CommandId"].empty()) {
      commandId = make_shared<string>(boost::any_cast<string>(m["CommandId"]));
    }
  }


  virtual ~ListInvocationStatusRequest() = default;
};
class ListInvocationStatusResponseBodyInvokeInstancesInvokeInstance : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceInvokeStatus{};

  ListInvocationStatusResponseBodyInvokeInstancesInvokeInstance() {}

  explicit ListInvocationStatusResponseBodyInvokeInstancesInvokeInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceInvokeStatus) {
      res["InstanceInvokeStatus"] = boost::any(*instanceInvokeStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceInvokeStatus") != m.end() && !m["InstanceInvokeStatus"].empty()) {
      instanceInvokeStatus = make_shared<string>(boost::any_cast<string>(m["InstanceInvokeStatus"]));
    }
  }


  virtual ~ListInvocationStatusResponseBodyInvokeInstancesInvokeInstance() = default;
};
class ListInvocationStatusResponseBodyInvokeInstances : public Darabonba::Model {
public:
  shared_ptr<vector<ListInvocationStatusResponseBodyInvokeInstancesInvokeInstance>> invokeInstance{};

  ListInvocationStatusResponseBodyInvokeInstances() {}

  explicit ListInvocationStatusResponseBodyInvokeInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeInstance) {
      vector<boost::any> temp1;
      for(auto item1:*invokeInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InvokeInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeInstance") != m.end() && !m["InvokeInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["InvokeInstance"].type()) {
        vector<ListInvocationStatusResponseBodyInvokeInstancesInvokeInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InvokeInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInvocationStatusResponseBodyInvokeInstancesInvokeInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invokeInstance = make_shared<vector<ListInvocationStatusResponseBodyInvokeInstancesInvokeInstance>>(expect1);
      }
    }
  }


  virtual ~ListInvocationStatusResponseBodyInvokeInstances() = default;
};
class ListInvocationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> commandId{};
  shared_ptr<ListInvocationStatusResponseBodyInvokeInstances> invokeInstances{};
  shared_ptr<string> invokeStatus{};
  shared_ptr<string> requestId{};

  ListInvocationStatusResponseBody() {}

  explicit ListInvocationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commandId) {
      res["CommandId"] = boost::any(*commandId);
    }
    if (invokeInstances) {
      res["InvokeInstances"] = invokeInstances ? boost::any(invokeInstances->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (invokeStatus) {
      res["InvokeStatus"] = boost::any(*invokeStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommandId") != m.end() && !m["CommandId"].empty()) {
      commandId = make_shared<string>(boost::any_cast<string>(m["CommandId"]));
    }
    if (m.find("InvokeInstances") != m.end() && !m["InvokeInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvokeInstances"].type()) {
        ListInvocationStatusResponseBodyInvokeInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvokeInstances"]));
        invokeInstances = make_shared<ListInvocationStatusResponseBodyInvokeInstances>(model1);
      }
    }
    if (m.find("InvokeStatus") != m.end() && !m["InvokeStatus"].empty()) {
      invokeStatus = make_shared<string>(boost::any_cast<string>(m["InvokeStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListInvocationStatusResponseBody() = default;
};
class ListInvocationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListInvocationStatusResponseBody> body{};

  ListInvocationStatusResponse() {}

  explicit ListInvocationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListInvocationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInvocationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ListInvocationStatusResponse() = default;
};
class ListJobTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListJobTemplatesRequest() {}

  explicit ListJobTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListJobTemplatesRequest() = default;
};
class ListJobTemplatesResponseBodyTemplatesJobTemplates : public Darabonba::Model {
public:
  shared_ptr<string> arrayRequest{};
  shared_ptr<string> clockTime{};
  shared_ptr<string> commandLine{};
  shared_ptr<long> gpu{};
  shared_ptr<string> id{};
  shared_ptr<string> inputFileUrl{};
  shared_ptr<string> mem{};
  shared_ptr<string> name{};
  shared_ptr<long> node{};
  shared_ptr<string> packagePath{};
  shared_ptr<long> priority{};
  shared_ptr<string> queue{};
  shared_ptr<bool> reRunable{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> stderrRedirectPath{};
  shared_ptr<string> stdoutRedirectPath{};
  shared_ptr<long> task{};
  shared_ptr<long> thread{};
  shared_ptr<string> unzipCmd{};
  shared_ptr<string> variables{};
  shared_ptr<bool> withUnzipCmd{};

  ListJobTemplatesResponseBodyTemplatesJobTemplates() {}

  explicit ListJobTemplatesResponseBodyTemplatesJobTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayRequest) {
      res["ArrayRequest"] = boost::any(*arrayRequest);
    }
    if (clockTime) {
      res["ClockTime"] = boost::any(*clockTime);
    }
    if (commandLine) {
      res["CommandLine"] = boost::any(*commandLine);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (inputFileUrl) {
      res["InputFileUrl"] = boost::any(*inputFileUrl);
    }
    if (mem) {
      res["Mem"] = boost::any(*mem);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (node) {
      res["Node"] = boost::any(*node);
    }
    if (packagePath) {
      res["PackagePath"] = boost::any(*packagePath);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (queue) {
      res["Queue"] = boost::any(*queue);
    }
    if (reRunable) {
      res["ReRunable"] = boost::any(*reRunable);
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (stderrRedirectPath) {
      res["StderrRedirectPath"] = boost::any(*stderrRedirectPath);
    }
    if (stdoutRedirectPath) {
      res["StdoutRedirectPath"] = boost::any(*stdoutRedirectPath);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (thread) {
      res["Thread"] = boost::any(*thread);
    }
    if (unzipCmd) {
      res["UnzipCmd"] = boost::any(*unzipCmd);
    }
    if (variables) {
      res["Variables"] = boost::any(*variables);
    }
    if (withUnzipCmd) {
      res["WithUnzipCmd"] = boost::any(*withUnzipCmd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayRequest") != m.end() && !m["ArrayRequest"].empty()) {
      arrayRequest = make_shared<string>(boost::any_cast<string>(m["ArrayRequest"]));
    }
    if (m.find("ClockTime") != m.end() && !m["ClockTime"].empty()) {
      clockTime = make_shared<string>(boost::any_cast<string>(m["ClockTime"]));
    }
    if (m.find("CommandLine") != m.end() && !m["CommandLine"].empty()) {
      commandLine = make_shared<string>(boost::any_cast<string>(m["CommandLine"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InputFileUrl") != m.end() && !m["InputFileUrl"].empty()) {
      inputFileUrl = make_shared<string>(boost::any_cast<string>(m["InputFileUrl"]));
    }
    if (m.find("Mem") != m.end() && !m["Mem"].empty()) {
      mem = make_shared<string>(boost::any_cast<string>(m["Mem"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      node = make_shared<long>(boost::any_cast<long>(m["Node"]));
    }
    if (m.find("PackagePath") != m.end() && !m["PackagePath"].empty()) {
      packagePath = make_shared<string>(boost::any_cast<string>(m["PackagePath"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      queue = make_shared<string>(boost::any_cast<string>(m["Queue"]));
    }
    if (m.find("ReRunable") != m.end() && !m["ReRunable"].empty()) {
      reRunable = make_shared<bool>(boost::any_cast<bool>(m["ReRunable"]));
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("StderrRedirectPath") != m.end() && !m["StderrRedirectPath"].empty()) {
      stderrRedirectPath = make_shared<string>(boost::any_cast<string>(m["StderrRedirectPath"]));
    }
    if (m.find("StdoutRedirectPath") != m.end() && !m["StdoutRedirectPath"].empty()) {
      stdoutRedirectPath = make_shared<string>(boost::any_cast<string>(m["StdoutRedirectPath"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<long>(boost::any_cast<long>(m["Task"]));
    }
    if (m.find("Thread") != m.end() && !m["Thread"].empty()) {
      thread = make_shared<long>(boost::any_cast<long>(m["Thread"]));
    }
    if (m.find("UnzipCmd") != m.end() && !m["UnzipCmd"].empty()) {
      unzipCmd = make_shared<string>(boost::any_cast<string>(m["UnzipCmd"]));
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["Variables"]));
    }
    if (m.find("WithUnzipCmd") != m.end() && !m["WithUnzipCmd"].empty()) {
      withUnzipCmd = make_shared<bool>(boost::any_cast<bool>(m["WithUnzipCmd"]));
    }
  }


  virtual ~ListJobTemplatesResponseBodyTemplatesJobTemplates() = default;
};
class ListJobTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<vector<ListJobTemplatesResponseBodyTemplatesJobTemplates>> jobTemplates{};

  ListJobTemplatesResponseBodyTemplates() {}

  explicit ListJobTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobTemplates) {
      vector<boost::any> temp1;
      for(auto item1:*jobTemplates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobTemplates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobTemplates") != m.end() && !m["JobTemplates"].empty()) {
      if (typeid(vector<boost::any>) == m["JobTemplates"].type()) {
        vector<ListJobTemplatesResponseBodyTemplatesJobTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobTemplates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobTemplatesResponseBodyTemplatesJobTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobTemplates = make_shared<vector<ListJobTemplatesResponseBodyTemplatesJobTemplates>>(expect1);
      }
    }
  }


  virtual ~ListJobTemplatesResponseBodyTemplates() = default;
};
class ListJobTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<ListJobTemplatesResponseBodyTemplates> templates{};
  shared_ptr<long> totalCount{};

  ListJobTemplatesResponseBody() {}

  explicit ListJobTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templates) {
      res["Templates"] = templates ? boost::any(templates->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(map<string, boost::any>) == m["Templates"].type()) {
        ListJobTemplatesResponseBodyTemplates model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Templates"]));
        templates = make_shared<ListJobTemplatesResponseBodyTemplates>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListJobTemplatesResponseBody() = default;
};
class ListJobTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListJobTemplatesResponseBody> body{};

  ListJobTemplatesResponse() {}

  explicit ListJobTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListJobTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListJobTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListJobTemplatesResponse() = default;
};
class ListJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> rerunable{};
  shared_ptr<string> state{};

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
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (rerunable) {
      res["Rerunable"] = boost::any(*rerunable);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Rerunable") != m.end() && !m["Rerunable"].empty()) {
      rerunable = make_shared<string>(boost::any_cast<string>(m["Rerunable"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~ListJobsRequest() = default;
};
class ListJobsResponseBodyJobsJobInfoResources : public Darabonba::Model {
public:
  shared_ptr<long> cores{};
  shared_ptr<long> nodes{};

  ListJobsResponseBodyJobsJobInfoResources() {}

  explicit ListJobsResponseBodyJobsJobInfoResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cores) {
      res["Cores"] = boost::any(*cores);
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
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodes = make_shared<long>(boost::any_cast<long>(m["Nodes"]));
    }
  }


  virtual ~ListJobsResponseBodyJobsJobInfoResources() = default;
};
class ListJobsResponseBodyJobsJobInfo : public Darabonba::Model {
public:
  shared_ptr<string> arrayRequest{};
  shared_ptr<string> comment{};
  shared_ptr<string> id{};
  shared_ptr<string> lastModifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> nodeList{};
  shared_ptr<string> owner{};
  shared_ptr<string> priority{};
  shared_ptr<ListJobsResponseBodyJobsJobInfoResources> resources{};
  shared_ptr<string> shellPath{};
  shared_ptr<string> startTime{};
  shared_ptr<string> state{};
  shared_ptr<string> stderr{};
  shared_ptr<string> stdout{};
  shared_ptr<string> submitTime{};

  ListJobsResponseBodyJobsJobInfo() {}

  explicit ListJobsResponseBodyJobsJobInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayRequest) {
      res["ArrayRequest"] = boost::any(*arrayRequest);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lastModifyTime) {
      res["LastModifyTime"] = boost::any(*lastModifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodeList) {
      res["NodeList"] = boost::any(*nodeList);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (resources) {
      res["Resources"] = resources ? boost::any(resources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (shellPath) {
      res["ShellPath"] = boost::any(*shellPath);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (stderr) {
      res["Stderr"] = boost::any(*stderr);
    }
    if (stdout) {
      res["Stdout"] = boost::any(*stdout);
    }
    if (submitTime) {
      res["SubmitTime"] = boost::any(*submitTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayRequest") != m.end() && !m["ArrayRequest"].empty()) {
      arrayRequest = make_shared<string>(boost::any_cast<string>(m["ArrayRequest"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LastModifyTime") != m.end() && !m["LastModifyTime"].empty()) {
      lastModifyTime = make_shared<string>(boost::any_cast<string>(m["LastModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodeList") != m.end() && !m["NodeList"].empty()) {
      nodeList = make_shared<string>(boost::any_cast<string>(m["NodeList"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resources"].type()) {
        ListJobsResponseBodyJobsJobInfoResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resources"]));
        resources = make_shared<ListJobsResponseBodyJobsJobInfoResources>(model1);
      }
    }
    if (m.find("ShellPath") != m.end() && !m["ShellPath"].empty()) {
      shellPath = make_shared<string>(boost::any_cast<string>(m["ShellPath"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Stderr") != m.end() && !m["Stderr"].empty()) {
      stderr = make_shared<string>(boost::any_cast<string>(m["Stderr"]));
    }
    if (m.find("Stdout") != m.end() && !m["Stdout"].empty()) {
      stdout = make_shared<string>(boost::any_cast<string>(m["Stdout"]));
    }
    if (m.find("SubmitTime") != m.end() && !m["SubmitTime"].empty()) {
      submitTime = make_shared<string>(boost::any_cast<string>(m["SubmitTime"]));
    }
  }


  virtual ~ListJobsResponseBodyJobsJobInfo() = default;
};
class ListJobsResponseBodyJobs : public Darabonba::Model {
public:
  shared_ptr<vector<ListJobsResponseBodyJobsJobInfo>> jobInfo{};

  ListJobsResponseBodyJobs() {}

  explicit ListJobsResponseBodyJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobInfo) {
      vector<boost::any> temp1;
      for(auto item1:*jobInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobInfo") != m.end() && !m["JobInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["JobInfo"].type()) {
        vector<ListJobsResponseBodyJobsJobInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListJobsResponseBodyJobsJobInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobInfo = make_shared<vector<ListJobsResponseBodyJobsJobInfo>>(expect1);
      }
    }
  }


  virtual ~ListJobsResponseBodyJobs() = default;
};
class ListJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListJobsResponseBodyJobs> jobs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListJobsResponseBody() {}

  explicit ListJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobs) {
      res["Jobs"] = jobs ? boost::any(jobs->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Jobs"].type()) {
        ListJobsResponseBodyJobs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Jobs"]));
        jobs = make_shared<ListJobsResponseBodyJobs>(model1);
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


  virtual ~ListJobsResponseBody() = default;
};
class ListJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListJobsResponseBody> body{};

  ListJobsResponse() {}

  explicit ListJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<string> filter{};
  shared_ptr<string> hostName{};
  shared_ptr<string> hostNamePrefix{};
  shared_ptr<string> hostNameSuffix{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> privateIpAddress{};
  shared_ptr<string> role{};
  shared_ptr<string> sequence{};
  shared_ptr<string> sortBy{};

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
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (hostNamePrefix) {
      res["HostNamePrefix"] = boost::any(*hostNamePrefix);
    }
    if (hostNameSuffix) {
      res["HostNameSuffix"] = boost::any(*hostNameSuffix);
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
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (sequence) {
      res["Sequence"] = boost::any(*sequence);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("HostNamePrefix") != m.end() && !m["HostNamePrefix"].empty()) {
      hostNamePrefix = make_shared<string>(boost::any_cast<string>(m["HostNamePrefix"]));
    }
    if (m.find("HostNameSuffix") != m.end() && !m["HostNameSuffix"].empty()) {
      hostNameSuffix = make_shared<string>(boost::any_cast<string>(m["HostNameSuffix"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<string>(boost::any_cast<string>(m["PrivateIpAddress"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Sequence") != m.end() && !m["Sequence"].empty()) {
      sequence = make_shared<string>(boost::any_cast<string>(m["Sequence"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListNodesRequest() = default;
};
class ListNodesResponseBodyNodesNodeInfoRoles : public Darabonba::Model {
public:
  shared_ptr<vector<string>> role{};

  ListNodesResponseBodyNodesNodeInfoRoles() {}

  explicit ListNodesResponseBodyNodesNodeInfoRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Role"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Role"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      role = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListNodesResponseBodyNodesNodeInfoRoles() = default;
};
class ListNodesResponseBodyNodesNodeInfoTotalResources : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memory{};

  ListNodesResponseBodyNodesNodeInfoTotalResources() {}

  explicit ListNodesResponseBodyNodesNodeInfoTotalResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListNodesResponseBodyNodesNodeInfoTotalResources() = default;
};
class ListNodesResponseBodyNodesNodeInfoUsedResources : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memory{};

  ListNodesResponseBodyNodesNodeInfoUsedResources() {}

  explicit ListNodesResponseBodyNodesNodeInfoUsedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListNodesResponseBodyNodesNodeInfoUsedResources() = default;
};
class ListNodesResponseBodyNodesNodeInfo : public Darabonba::Model {
public:
  shared_ptr<string> addTime{};
  shared_ptr<string> createMode{};
  shared_ptr<bool> createdByEhpc{};
  shared_ptr<bool> expired{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> hostName{};
  shared_ptr<bool> htEnabled{};
  shared_ptr<string> id{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> ipAddress{};
  shared_ptr<string> location{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> publicIpAddress{};
  shared_ptr<string> regionId{};
  shared_ptr<ListNodesResponseBodyNodesNodeInfoRoles> roles{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> stateInSched{};
  shared_ptr<string> status{};
  shared_ptr<ListNodesResponseBodyNodesNodeInfoTotalResources> totalResources{};
  shared_ptr<ListNodesResponseBodyNodesNodeInfoUsedResources> usedResources{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> version{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ListNodesResponseBodyNodesNodeInfo() {}

  explicit ListNodesResponseBodyNodesNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addTime) {
      res["AddTime"] = boost::any(*addTime);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createdByEhpc) {
      res["CreatedByEhpc"] = boost::any(*createdByEhpc);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
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
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (publicIpAddress) {
      res["PublicIpAddress"] = boost::any(*publicIpAddress);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (roles) {
      res["Roles"] = roles ? boost::any(roles->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (usedResources) {
      res["UsedResources"] = usedResources ? boost::any(usedResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
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
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreatedByEhpc") != m.end() && !m["CreatedByEhpc"].empty()) {
      createdByEhpc = make_shared<bool>(boost::any_cast<bool>(m["CreatedByEhpc"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<bool>(boost::any_cast<bool>(m["Expired"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
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
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("PublicIpAddress") != m.end() && !m["PublicIpAddress"].empty()) {
      publicIpAddress = make_shared<string>(boost::any_cast<string>(m["PublicIpAddress"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roles"].type()) {
        ListNodesResponseBodyNodesNodeInfoRoles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roles"]));
        roles = make_shared<ListNodesResponseBodyNodesNodeInfoRoles>(model1);
      }
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
        ListNodesResponseBodyNodesNodeInfoTotalResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TotalResources"]));
        totalResources = make_shared<ListNodesResponseBodyNodesNodeInfoTotalResources>(model1);
      }
    }
    if (m.find("UsedResources") != m.end() && !m["UsedResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsedResources"].type()) {
        ListNodesResponseBodyNodesNodeInfoUsedResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsedResources"]));
        usedResources = make_shared<ListNodesResponseBodyNodesNodeInfoUsedResources>(model1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListNodesResponseBodyNodesNodeInfo() = default;
};
class ListNodesResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesResponseBodyNodesNodeInfo>> nodeInfo{};

  ListNodesResponseBodyNodes() {}

  explicit ListNodesResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeInfo") != m.end() && !m["NodeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInfo"].type()) {
        vector<ListNodesResponseBodyNodesNodeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyNodesNodeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInfo = make_shared<vector<ListNodesResponseBodyNodesNodeInfo>>(expect1);
      }
    }
  }


  virtual ~ListNodesResponseBodyNodes() = default;
};
class ListNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListNodesResponseBodyNodes> nodes{};
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
      res["Nodes"] = nodes ? boost::any(nodes->toMap()) : boost::any(map<string,boost::any>({}));
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
      if (typeid(map<string, boost::any>) == m["Nodes"].type()) {
        ListNodesResponseBodyNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Nodes"]));
        nodes = make_shared<ListNodesResponseBodyNodes>(model1);
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
  shared_ptr<ListNodesResponseBody> body{};

  ListNodesResponse() {}

  explicit ListNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListNodesByQueueRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queueName{};

  ListNodesByQueueRequest() {}

  explicit ListNodesByQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
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
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
  }


  virtual ~ListNodesByQueueRequest() = default;
};
class ListNodesByQueueResponseBodyNodesNodeInfoTotalResources : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memory{};

  ListNodesByQueueResponseBodyNodesNodeInfoTotalResources() {}

  explicit ListNodesByQueueResponseBodyNodesNodeInfoTotalResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListNodesByQueueResponseBodyNodesNodeInfoTotalResources() = default;
};
class ListNodesByQueueResponseBodyNodesNodeInfoUsedResources : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> gpu{};
  shared_ptr<long> memory{};

  ListNodesByQueueResponseBodyNodesNodeInfoUsedResources() {}

  explicit ListNodesByQueueResponseBodyNodesNodeInfoUsedResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListNodesByQueueResponseBodyNodesNodeInfoUsedResources() = default;
};
class ListNodesByQueueResponseBodyNodesNodeInfo : public Darabonba::Model {
public:
  shared_ptr<string> addTime{};
  shared_ptr<string> createMode{};
  shared_ptr<bool> createdByEhpc{};
  shared_ptr<bool> expired{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> hostName{};
  shared_ptr<bool> htEnabled{};
  shared_ptr<string> id{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> ipAddress{};
  shared_ptr<string> location{};
  shared_ptr<string> lockReason{};
  shared_ptr<string> publicIpAddress{};
  shared_ptr<string> regionId{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> stateInSched{};
  shared_ptr<string> status{};
  shared_ptr<ListNodesByQueueResponseBodyNodesNodeInfoTotalResources> totalResources{};
  shared_ptr<ListNodesByQueueResponseBodyNodesNodeInfoUsedResources> usedResources{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> version{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> zoneId{};

  ListNodesByQueueResponseBodyNodesNodeInfo() {}

  explicit ListNodesByQueueResponseBodyNodesNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addTime) {
      res["AddTime"] = boost::any(*addTime);
    }
    if (createMode) {
      res["CreateMode"] = boost::any(*createMode);
    }
    if (createdByEhpc) {
      res["CreatedByEhpc"] = boost::any(*createdByEhpc);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
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
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (publicIpAddress) {
      res["PublicIpAddress"] = boost::any(*publicIpAddress);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (usedResources) {
      res["UsedResources"] = usedResources ? boost::any(usedResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
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
    if (m.find("CreateMode") != m.end() && !m["CreateMode"].empty()) {
      createMode = make_shared<string>(boost::any_cast<string>(m["CreateMode"]));
    }
    if (m.find("CreatedByEhpc") != m.end() && !m["CreatedByEhpc"].empty()) {
      createdByEhpc = make_shared<bool>(boost::any_cast<bool>(m["CreatedByEhpc"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<bool>(boost::any_cast<bool>(m["Expired"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
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
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("PublicIpAddress") != m.end() && !m["PublicIpAddress"].empty()) {
      publicIpAddress = make_shared<string>(boost::any_cast<string>(m["PublicIpAddress"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
        ListNodesByQueueResponseBodyNodesNodeInfoTotalResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TotalResources"]));
        totalResources = make_shared<ListNodesByQueueResponseBodyNodesNodeInfoTotalResources>(model1);
      }
    }
    if (m.find("UsedResources") != m.end() && !m["UsedResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["UsedResources"].type()) {
        ListNodesByQueueResponseBodyNodesNodeInfoUsedResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UsedResources"]));
        usedResources = make_shared<ListNodesByQueueResponseBodyNodesNodeInfoUsedResources>(model1);
      }
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListNodesByQueueResponseBodyNodesNodeInfo() = default;
};
class ListNodesByQueueResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesByQueueResponseBodyNodesNodeInfo>> nodeInfo{};

  ListNodesByQueueResponseBodyNodes() {}

  explicit ListNodesByQueueResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeInfo") != m.end() && !m["NodeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInfo"].type()) {
        vector<ListNodesByQueueResponseBodyNodesNodeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesByQueueResponseBodyNodesNodeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInfo = make_shared<vector<ListNodesByQueueResponseBodyNodesNodeInfo>>(expect1);
      }
    }
  }


  virtual ~ListNodesByQueueResponseBodyNodes() = default;
};
class ListNodesByQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListNodesByQueueResponseBodyNodes> nodes{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListNodesByQueueResponseBody() {}

  explicit ListNodesByQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      res["Nodes"] = nodes ? boost::any(nodes->toMap()) : boost::any(map<string,boost::any>({}));
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
      if (typeid(map<string, boost::any>) == m["Nodes"].type()) {
        ListNodesByQueueResponseBodyNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Nodes"]));
        nodes = make_shared<ListNodesByQueueResponseBodyNodes>(model1);
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


  virtual ~ListNodesByQueueResponseBody() = default;
};
class ListNodesByQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListNodesByQueueResponseBody> body{};

  ListNodesByQueueResponse() {}

  explicit ListNodesByQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListNodesByQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodesByQueueResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodesByQueueResponse() = default;
};
class ListNodesNoPagingRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> hostName{};
  shared_ptr<bool> onlyDetached{};
  shared_ptr<string> role{};
  shared_ptr<string> sequence{};

  ListNodesNoPagingRequest() {}

  explicit ListNodesNoPagingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (onlyDetached) {
      res["OnlyDetached"] = boost::any(*onlyDetached);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (sequence) {
      res["Sequence"] = boost::any(*sequence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("OnlyDetached") != m.end() && !m["OnlyDetached"].empty()) {
      onlyDetached = make_shared<bool>(boost::any_cast<bool>(m["OnlyDetached"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Sequence") != m.end() && !m["Sequence"].empty()) {
      sequence = make_shared<string>(boost::any_cast<string>(m["Sequence"]));
    }
  }


  virtual ~ListNodesNoPagingRequest() = default;
};
class ListNodesNoPagingResponseBodyNodesNodeInfo : public Darabonba::Model {
public:
  shared_ptr<string> hostName{};
  shared_ptr<string> id{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> status{};

  ListNodesNoPagingResponseBodyNodesNodeInfo() {}

  explicit ListNodesNoPagingResponseBodyNodesNodeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
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
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListNodesNoPagingResponseBodyNodesNodeInfo() = default;
};
class ListNodesNoPagingResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesNoPagingResponseBodyNodesNodeInfo>> nodeInfo{};

  ListNodesNoPagingResponseBodyNodes() {}

  explicit ListNodesNoPagingResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*nodeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeInfo") != m.end() && !m["NodeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeInfo"].type()) {
        vector<ListNodesNoPagingResponseBodyNodesNodeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesNoPagingResponseBodyNodesNodeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeInfo = make_shared<vector<ListNodesNoPagingResponseBodyNodesNodeInfo>>(expect1);
      }
    }
  }


  virtual ~ListNodesNoPagingResponseBodyNodes() = default;
};
class ListNodesNoPagingResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListNodesNoPagingResponseBodyNodes> nodes{};
  shared_ptr<string> requestId{};

  ListNodesNoPagingResponseBody() {}

  explicit ListNodesNoPagingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      res["Nodes"] = nodes ? boost::any(nodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Nodes"].type()) {
        ListNodesNoPagingResponseBodyNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Nodes"]));
        nodes = make_shared<ListNodesNoPagingResponseBodyNodes>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListNodesNoPagingResponseBody() = default;
};
class ListNodesNoPagingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListNodesNoPagingResponseBody> body{};

  ListNodesNoPagingResponse() {}

  explicit ListNodesNoPagingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListNodesNoPagingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodesNoPagingResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodesNoPagingResponse() = default;
};
class ListPreferredEcsTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceChargeType{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> zoneId{};

  ListPreferredEcsTypesRequest() {}

  explicit ListPreferredEcsTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceChargeType) {
      res["InstanceChargeType"] = boost::any(*instanceChargeType);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceChargeType") != m.end() && !m["InstanceChargeType"].empty()) {
      instanceChargeType = make_shared<string>(boost::any_cast<string>(m["InstanceChargeType"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListPreferredEcsTypesRequest() = default;
};
class ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceTypeId{};

  ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute() {}

  explicit ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypeId) {
      res["InstanceTypeId"] = boost::any(*instanceTypeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypeId") != m.end() && !m["InstanceTypeId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypeId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypeId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypeId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute() = default;
};
class ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceTypeId{};

  ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin() {}

  explicit ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypeId) {
      res["InstanceTypeId"] = boost::any(*instanceTypeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypeId") != m.end() && !m["InstanceTypeId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypeId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypeId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypeId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin() = default;
};
class ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceTypeId{};

  ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager() {}

  explicit ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypeId) {
      res["InstanceTypeId"] = boost::any(*instanceTypeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypeId") != m.end() && !m["InstanceTypeId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypeId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypeId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypeId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager() = default;
};
class ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles : public Darabonba::Model {
public:
  shared_ptr<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute> compute{};
  shared_ptr<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin> login{};
  shared_ptr<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager> manager{};

  ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles() {}

  explicit ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compute) {
      res["Compute"] = compute ? boost::any(compute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (login) {
      res["Login"] = login ? boost::any(login->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (manager) {
      res["Manager"] = manager ? boost::any(manager->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compute") != m.end() && !m["Compute"].empty()) {
      if (typeid(map<string, boost::any>) == m["Compute"].type()) {
        ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Compute"]));
        compute = make_shared<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesCompute>(model1);
      }
    }
    if (m.find("Login") != m.end() && !m["Login"].empty()) {
      if (typeid(map<string, boost::any>) == m["Login"].type()) {
        ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Login"]));
        login = make_shared<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesLogin>(model1);
      }
    }
    if (m.find("Manager") != m.end() && !m["Manager"].empty()) {
      if (typeid(map<string, boost::any>) == m["Manager"].type()) {
        ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Manager"]));
        manager = make_shared<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRolesManager>(model1);
      }
    }
  }


  virtual ~ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles() = default;
};
class ListPreferredEcsTypesResponseBodySeriesSeriesInfo : public Darabonba::Model {
public:
  shared_ptr<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles> roles{};
  shared_ptr<string> seriesId{};
  shared_ptr<string> seriesName{};

  ListPreferredEcsTypesResponseBodySeriesSeriesInfo() {}

  explicit ListPreferredEcsTypesResponseBodySeriesSeriesInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roles) {
      res["Roles"] = roles ? boost::any(roles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (seriesId) {
      res["SeriesId"] = boost::any(*seriesId);
    }
    if (seriesName) {
      res["SeriesName"] = boost::any(*seriesName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roles"].type()) {
        ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roles"]));
        roles = make_shared<ListPreferredEcsTypesResponseBodySeriesSeriesInfoRoles>(model1);
      }
    }
    if (m.find("SeriesId") != m.end() && !m["SeriesId"].empty()) {
      seriesId = make_shared<string>(boost::any_cast<string>(m["SeriesId"]));
    }
    if (m.find("SeriesName") != m.end() && !m["SeriesName"].empty()) {
      seriesName = make_shared<string>(boost::any_cast<string>(m["SeriesName"]));
    }
  }


  virtual ~ListPreferredEcsTypesResponseBodySeriesSeriesInfo() = default;
};
class ListPreferredEcsTypesResponseBodySeries : public Darabonba::Model {
public:
  shared_ptr<vector<ListPreferredEcsTypesResponseBodySeriesSeriesInfo>> seriesInfo{};

  ListPreferredEcsTypesResponseBodySeries() {}

  explicit ListPreferredEcsTypesResponseBodySeries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (seriesInfo) {
      vector<boost::any> temp1;
      for(auto item1:*seriesInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SeriesInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SeriesInfo") != m.end() && !m["SeriesInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["SeriesInfo"].type()) {
        vector<ListPreferredEcsTypesResponseBodySeriesSeriesInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SeriesInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPreferredEcsTypesResponseBodySeriesSeriesInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        seriesInfo = make_shared<vector<ListPreferredEcsTypesResponseBodySeriesSeriesInfo>>(expect1);
      }
    }
  }


  virtual ~ListPreferredEcsTypesResponseBodySeries() = default;
};
class ListPreferredEcsTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListPreferredEcsTypesResponseBodySeries> series{};
  shared_ptr<bool> supportSpotInstance{};

  ListPreferredEcsTypesResponseBody() {}

  explicit ListPreferredEcsTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (series) {
      res["Series"] = series ? boost::any(series->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (supportSpotInstance) {
      res["SupportSpotInstance"] = boost::any(*supportSpotInstance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Series") != m.end() && !m["Series"].empty()) {
      if (typeid(map<string, boost::any>) == m["Series"].type()) {
        ListPreferredEcsTypesResponseBodySeries model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Series"]));
        series = make_shared<ListPreferredEcsTypesResponseBodySeries>(model1);
      }
    }
    if (m.find("SupportSpotInstance") != m.end() && !m["SupportSpotInstance"].empty()) {
      supportSpotInstance = make_shared<bool>(boost::any_cast<bool>(m["SupportSpotInstance"]));
    }
  }


  virtual ~ListPreferredEcsTypesResponseBody() = default;
};
class ListPreferredEcsTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListPreferredEcsTypesResponseBody> body{};

  ListPreferredEcsTypesResponse() {}

  explicit ListPreferredEcsTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListPreferredEcsTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPreferredEcsTypesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPreferredEcsTypesResponse() = default;
};
class ListQueuesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~ListQueuesRequest() = default;
};
class ListQueuesResponseBodyQueuesQueueInfoComputeInstanceType : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceType{};

  ListQueuesResponseBodyQueuesQueueInfoComputeInstanceType() {}

  explicit ListQueuesResponseBodyQueuesQueueInfoComputeInstanceType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceType"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceType"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceType = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListQueuesResponseBodyQueuesQueueInfoComputeInstanceType() = default;
};
class ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypesInstance : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<double> spotPriceLimit{};

  ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypesInstance() {}

  explicit ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypesInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
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
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
  }


  virtual ~ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypesInstance() = default;
};
class ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypes : public Darabonba::Model {
public:
  shared_ptr<vector<ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypesInstance>> instance{};

  ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypes() {}

  explicit ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypesInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypesInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypesInstance>>(expect1);
      }
    }
  }


  virtual ~ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypes() = default;
};
class ListQueuesResponseBodyQueuesQueueInfo : public Darabonba::Model {
public:
  shared_ptr<ListQueuesResponseBodyQueuesQueueInfoComputeInstanceType> computeInstanceType{};
  shared_ptr<bool> enableAutoGrow{};
  shared_ptr<string> hostNamePrefix{};
  shared_ptr<string> hostNameSuffix{};
  shared_ptr<string> imageId{};
  shared_ptr<string> queueName{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypes> spotInstanceTypes{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> type{};

  ListQueuesResponseBodyQueuesQueueInfo() {}

  explicit ListQueuesResponseBodyQueuesQueueInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (computeInstanceType) {
      res["ComputeInstanceType"] = computeInstanceType ? boost::any(computeInstanceType->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (enableAutoGrow) {
      res["EnableAutoGrow"] = boost::any(*enableAutoGrow);
    }
    if (hostNamePrefix) {
      res["HostNamePrefix"] = boost::any(*hostNamePrefix);
    }
    if (hostNameSuffix) {
      res["HostNameSuffix"] = boost::any(*hostNameSuffix);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (spotInstanceTypes) {
      res["SpotInstanceTypes"] = spotInstanceTypes ? boost::any(spotInstanceTypes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ComputeInstanceType") != m.end() && !m["ComputeInstanceType"].empty()) {
      if (typeid(map<string, boost::any>) == m["ComputeInstanceType"].type()) {
        ListQueuesResponseBodyQueuesQueueInfoComputeInstanceType model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ComputeInstanceType"]));
        computeInstanceType = make_shared<ListQueuesResponseBodyQueuesQueueInfoComputeInstanceType>(model1);
      }
    }
    if (m.find("EnableAutoGrow") != m.end() && !m["EnableAutoGrow"].empty()) {
      enableAutoGrow = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoGrow"]));
    }
    if (m.find("HostNamePrefix") != m.end() && !m["HostNamePrefix"].empty()) {
      hostNamePrefix = make_shared<string>(boost::any_cast<string>(m["HostNamePrefix"]));
    }
    if (m.find("HostNameSuffix") != m.end() && !m["HostNameSuffix"].empty()) {
      hostNameSuffix = make_shared<string>(boost::any_cast<string>(m["HostNameSuffix"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SpotInstanceTypes") != m.end() && !m["SpotInstanceTypes"].empty()) {
      if (typeid(map<string, boost::any>) == m["SpotInstanceTypes"].type()) {
        ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SpotInstanceTypes"]));
        spotInstanceTypes = make_shared<ListQueuesResponseBodyQueuesQueueInfoSpotInstanceTypes>(model1);
      }
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListQueuesResponseBodyQueuesQueueInfo() = default;
};
class ListQueuesResponseBodyQueues : public Darabonba::Model {
public:
  shared_ptr<vector<ListQueuesResponseBodyQueuesQueueInfo>> queueInfo{};

  ListQueuesResponseBodyQueues() {}

  explicit ListQueuesResponseBodyQueues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queueInfo) {
      vector<boost::any> temp1;
      for(auto item1:*queueInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QueueInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueueInfo") != m.end() && !m["QueueInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["QueueInfo"].type()) {
        vector<ListQueuesResponseBodyQueuesQueueInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QueueInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQueuesResponseBodyQueuesQueueInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queueInfo = make_shared<vector<ListQueuesResponseBodyQueuesQueueInfo>>(expect1);
      }
    }
  }


  virtual ~ListQueuesResponseBodyQueues() = default;
};
class ListQueuesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListQueuesResponseBodyQueues> queues{};
  shared_ptr<string> requestId{};

  ListQueuesResponseBody() {}

  explicit ListQueuesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queues) {
      res["Queues"] = queues ? boost::any(queues->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Queues") != m.end() && !m["Queues"].empty()) {
      if (typeid(map<string, boost::any>) == m["Queues"].type()) {
        ListQueuesResponseBodyQueues model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Queues"]));
        queues = make_shared<ListQueuesResponseBodyQueues>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListQueuesResponseBody() = default;
};
class ListQueuesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListQueuesResponseBody> body{};

  ListQueuesResponse() {}

  explicit ListQueuesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListRegionsResponseBodyRegionsRegionInfo : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  ListRegionsResponseBodyRegionsRegionInfo() {}

  explicit ListRegionsResponseBodyRegionsRegionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListRegionsResponseBodyRegionsRegionInfo() = default;
};
class ListRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<ListRegionsResponseBodyRegionsRegionInfo>> regionInfo{};

  ListRegionsResponseBodyRegions() {}

  explicit ListRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionInfo) {
      vector<boost::any> temp1;
      for(auto item1:*regionInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegionInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionInfo") != m.end() && !m["RegionInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["RegionInfo"].type()) {
        vector<ListRegionsResponseBodyRegionsRegionInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegionInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegionsResponseBodyRegionsRegionInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regionInfo = make_shared<vector<ListRegionsResponseBodyRegionsRegionInfo>>(expect1);
      }
    }
  }


  virtual ~ListRegionsResponseBodyRegions() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<ListRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRegionsResponseBody() = default;
};
class ListRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListRegionsResponseBody> body{};

  ListRegionsResponse() {}

  explicit ListRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegionsResponse() = default;
};
class ListSecurityGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  ListSecurityGroupsRequest() {}

  explicit ListSecurityGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListSecurityGroupsRequest() = default;
};
class ListSecurityGroupsResponseBodySecurityGroups : public Darabonba::Model {
public:
  shared_ptr<vector<string>> securityGroup{};

  ListSecurityGroupsResponseBodySecurityGroups() {}

  explicit ListSecurityGroupsResponseBodySecurityGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroup) {
      res["SecurityGroup"] = boost::any(*securityGroup);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityGroup") != m.end() && !m["SecurityGroup"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroup"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroup"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroup = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListSecurityGroupsResponseBodySecurityGroups() = default;
};
class ListSecurityGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListSecurityGroupsResponseBodySecurityGroups> securityGroups{};
  shared_ptr<long> totalCount{};

  ListSecurityGroupsResponseBody() {}

  explicit ListSecurityGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityGroups) {
      res["SecurityGroups"] = securityGroups ? boost::any(securityGroups->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("SecurityGroups") != m.end() && !m["SecurityGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecurityGroups"].type()) {
        ListSecurityGroupsResponseBodySecurityGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecurityGroups"]));
        securityGroups = make_shared<ListSecurityGroupsResponseBodySecurityGroups>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSecurityGroupsResponseBody() = default;
};
class ListSecurityGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSecurityGroupsResponseBody> body{};

  ListSecurityGroupsResponse() {}

  explicit ListSecurityGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSecurityGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSecurityGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSecurityGroupsResponse() = default;
};
class ListSoftwaresRequest : public Darabonba::Model {
public:
  shared_ptr<string> ehpcVersion{};
  shared_ptr<string> osTag{};

  ListSoftwaresRequest() {}

  explicit ListSoftwaresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ehpcVersion) {
      res["EhpcVersion"] = boost::any(*ehpcVersion);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EhpcVersion") != m.end() && !m["EhpcVersion"].empty()) {
      ehpcVersion = make_shared<string>(boost::any_cast<string>(m["EhpcVersion"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
  }


  virtual ~ListSoftwaresRequest() = default;
};
class ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> required{};
  shared_ptr<string> tag{};
  shared_ptr<string> version{};

  ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo() {}

  explicit ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
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
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["Required"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo() = default;
};
class ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications : public Darabonba::Model {
public:
  shared_ptr<vector<ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo>> applicationInfo{};

  ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications() {}

  explicit ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationInfo) {
      vector<boost::any> temp1;
      for(auto item1:*applicationInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationInfo") != m.end() && !m["ApplicationInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationInfo"].type()) {
        vector<ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationInfo = make_shared<vector<ListSoftwaresResponseBodySoftwaresSoftwareInfoApplicationsApplicationInfo>>(expect1);
      }
    }
  }


  virtual ~ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications() = default;
};
class ListSoftwaresResponseBodySoftwaresSoftwareInfo : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<string> accountVersion{};
  shared_ptr<ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications> applications{};
  shared_ptr<string> ehpcVersion{};
  shared_ptr<string> osTag{};
  shared_ptr<string> schedulerType{};
  shared_ptr<string> schedulerVersion{};

  ListSoftwaresResponseBodySoftwaresSoftwareInfo() {}

  explicit ListSoftwaresResponseBodySoftwaresSoftwareInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (accountVersion) {
      res["AccountVersion"] = boost::any(*accountVersion);
    }
    if (applications) {
      res["Applications"] = applications ? boost::any(applications->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ehpcVersion) {
      res["EhpcVersion"] = boost::any(*ehpcVersion);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (schedulerType) {
      res["SchedulerType"] = boost::any(*schedulerType);
    }
    if (schedulerVersion) {
      res["SchedulerVersion"] = boost::any(*schedulerVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AccountVersion") != m.end() && !m["AccountVersion"].empty()) {
      accountVersion = make_shared<string>(boost::any_cast<string>(m["AccountVersion"]));
    }
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(map<string, boost::any>) == m["Applications"].type()) {
        ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Applications"]));
        applications = make_shared<ListSoftwaresResponseBodySoftwaresSoftwareInfoApplications>(model1);
      }
    }
    if (m.find("EhpcVersion") != m.end() && !m["EhpcVersion"].empty()) {
      ehpcVersion = make_shared<string>(boost::any_cast<string>(m["EhpcVersion"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("SchedulerType") != m.end() && !m["SchedulerType"].empty()) {
      schedulerType = make_shared<string>(boost::any_cast<string>(m["SchedulerType"]));
    }
    if (m.find("SchedulerVersion") != m.end() && !m["SchedulerVersion"].empty()) {
      schedulerVersion = make_shared<string>(boost::any_cast<string>(m["SchedulerVersion"]));
    }
  }


  virtual ~ListSoftwaresResponseBodySoftwaresSoftwareInfo() = default;
};
class ListSoftwaresResponseBodySoftwares : public Darabonba::Model {
public:
  shared_ptr<vector<ListSoftwaresResponseBodySoftwaresSoftwareInfo>> softwareInfo{};

  ListSoftwaresResponseBodySoftwares() {}

  explicit ListSoftwaresResponseBodySoftwares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (softwareInfo) {
      vector<boost::any> temp1;
      for(auto item1:*softwareInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SoftwareInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SoftwareInfo") != m.end() && !m["SoftwareInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["SoftwareInfo"].type()) {
        vector<ListSoftwaresResponseBodySoftwaresSoftwareInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SoftwareInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSoftwaresResponseBodySoftwaresSoftwareInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        softwareInfo = make_shared<vector<ListSoftwaresResponseBodySoftwaresSoftwareInfo>>(expect1);
      }
    }
  }


  virtual ~ListSoftwaresResponseBodySoftwares() = default;
};
class ListSoftwaresResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListSoftwaresResponseBodySoftwares> softwares{};

  ListSoftwaresResponseBody() {}

  explicit ListSoftwaresResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (softwares) {
      res["Softwares"] = softwares ? boost::any(softwares->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Softwares") != m.end() && !m["Softwares"].empty()) {
      if (typeid(map<string, boost::any>) == m["Softwares"].type()) {
        ListSoftwaresResponseBodySoftwares model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Softwares"]));
        softwares = make_shared<ListSoftwaresResponseBodySoftwares>(model1);
      }
    }
  }


  virtual ~ListSoftwaresResponseBody() = default;
};
class ListSoftwaresResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSoftwaresResponseBody> body{};

  ListSoftwaresResponse() {}

  explicit ListSoftwaresResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class ListTasksRequest : public Darabonba::Model {
public:
  shared_ptr<bool> archived{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> taskId{};

  ListTasksRequest() {}

  explicit ListTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archived) {
      res["Archived"] = boost::any(*archived);
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Archived") != m.end() && !m["Archived"].empty()) {
      archived = make_shared<bool>(boost::any_cast<bool>(m["Archived"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ListTasksRequest() = default;
};
class ListTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> currentStep{};
  shared_ptr<string> errors{};
  shared_ptr<string> request{};
  shared_ptr<string> result{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};
  shared_ptr<long> totalSteps{};

  ListTasksResponseBodyTasks() {}

  explicit ListTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (currentStep) {
      res["CurrentStep"] = boost::any(*currentStep);
    }
    if (errors) {
      res["Errors"] = boost::any(*errors);
    }
    if (request) {
      res["Request"] = boost::any(*request);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (totalSteps) {
      res["TotalSteps"] = boost::any(*totalSteps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CurrentStep") != m.end() && !m["CurrentStep"].empty()) {
      currentStep = make_shared<long>(boost::any_cast<long>(m["CurrentStep"]));
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      errors = make_shared<string>(boost::any_cast<string>(m["Errors"]));
    }
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      request = make_shared<string>(boost::any_cast<string>(m["Request"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("TotalSteps") != m.end() && !m["TotalSteps"].empty()) {
      totalSteps = make_shared<long>(boost::any_cast<long>(m["TotalSteps"]));
    }
  }


  virtual ~ListTasksResponseBodyTasks() = default;
};
class ListTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTasksResponseBodyTasks>> tasks{};
  shared_ptr<long> totalCount{};

  ListTasksResponseBody() {}

  explicit ListTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListTasksResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTasksResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ListTasksResponseBodyTasks>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTasksResponseBody() = default;
};
class ListTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTasksResponseBody> body{};

  ListTasksResponse() {}

  explicit ListTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListTasksResponse() = default;
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
  shared_ptr<string> name{};

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
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
class ListVolumesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListVolumesRequest() {}

  explicit ListVolumesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVolumesRequest() = default;
};
class ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumesVolumeInfo : public Darabonba::Model {
public:
  shared_ptr<string> jobQueue{};
  shared_ptr<string> localDirectory{};
  shared_ptr<string> location{};
  shared_ptr<string> remoteDirectory{};
  shared_ptr<string> role{};
  shared_ptr<string> volumeId{};
  shared_ptr<string> volumeMountpoint{};
  shared_ptr<string> volumeProtocol{};
  shared_ptr<string> volumeType{};

  ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumesVolumeInfo() {}

  explicit ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumesVolumeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobQueue) {
      res["JobQueue"] = boost::any(*jobQueue);
    }
    if (localDirectory) {
      res["LocalDirectory"] = boost::any(*localDirectory);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (remoteDirectory) {
      res["RemoteDirectory"] = boost::any(*remoteDirectory);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    if (volumeMountpoint) {
      res["VolumeMountpoint"] = boost::any(*volumeMountpoint);
    }
    if (volumeProtocol) {
      res["VolumeProtocol"] = boost::any(*volumeProtocol);
    }
    if (volumeType) {
      res["VolumeType"] = boost::any(*volumeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobQueue") != m.end() && !m["JobQueue"].empty()) {
      jobQueue = make_shared<string>(boost::any_cast<string>(m["JobQueue"]));
    }
    if (m.find("LocalDirectory") != m.end() && !m["LocalDirectory"].empty()) {
      localDirectory = make_shared<string>(boost::any_cast<string>(m["LocalDirectory"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("RemoteDirectory") != m.end() && !m["RemoteDirectory"].empty()) {
      remoteDirectory = make_shared<string>(boost::any_cast<string>(m["RemoteDirectory"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<string>(boost::any_cast<string>(m["VolumeId"]));
    }
    if (m.find("VolumeMountpoint") != m.end() && !m["VolumeMountpoint"].empty()) {
      volumeMountpoint = make_shared<string>(boost::any_cast<string>(m["VolumeMountpoint"]));
    }
    if (m.find("VolumeProtocol") != m.end() && !m["VolumeProtocol"].empty()) {
      volumeProtocol = make_shared<string>(boost::any_cast<string>(m["VolumeProtocol"]));
    }
    if (m.find("VolumeType") != m.end() && !m["VolumeType"].empty()) {
      volumeType = make_shared<string>(boost::any_cast<string>(m["VolumeType"]));
    }
  }


  virtual ~ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumesVolumeInfo() = default;
};
class ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumes : public Darabonba::Model {
public:
  shared_ptr<vector<ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumesVolumeInfo>> volumeInfo{};

  ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumes() {}

  explicit ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (volumeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*volumeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VolumeInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VolumeInfo") != m.end() && !m["VolumeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["VolumeInfo"].type()) {
        vector<ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumesVolumeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VolumeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumesVolumeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volumeInfo = make_shared<vector<ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumesVolumeInfo>>(expect1);
      }
    }
  }


  virtual ~ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumes() = default;
};
class ListVolumesResponseBodyVolumesVolumeInfo : public Darabonba::Model {
public:
  shared_ptr<ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumes> additionalVolumes{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remoteDirectory{};
  shared_ptr<string> volumeId{};
  shared_ptr<string> volumeMountpoint{};
  shared_ptr<string> volumeProtocol{};
  shared_ptr<string> volumeType{};

  ListVolumesResponseBodyVolumesVolumeInfo() {}

  explicit ListVolumesResponseBodyVolumesVolumeInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalVolumes) {
      res["AdditionalVolumes"] = additionalVolumes ? boost::any(additionalVolumes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterName) {
      res["ClusterName"] = boost::any(*clusterName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remoteDirectory) {
      res["RemoteDirectory"] = boost::any(*remoteDirectory);
    }
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    if (volumeMountpoint) {
      res["VolumeMountpoint"] = boost::any(*volumeMountpoint);
    }
    if (volumeProtocol) {
      res["VolumeProtocol"] = boost::any(*volumeProtocol);
    }
    if (volumeType) {
      res["VolumeType"] = boost::any(*volumeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalVolumes") != m.end() && !m["AdditionalVolumes"].empty()) {
      if (typeid(map<string, boost::any>) == m["AdditionalVolumes"].type()) {
        ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AdditionalVolumes"]));
        additionalVolumes = make_shared<ListVolumesResponseBodyVolumesVolumeInfoAdditionalVolumes>(model1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterName") != m.end() && !m["ClusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["ClusterName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RemoteDirectory") != m.end() && !m["RemoteDirectory"].empty()) {
      remoteDirectory = make_shared<string>(boost::any_cast<string>(m["RemoteDirectory"]));
    }
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<string>(boost::any_cast<string>(m["VolumeId"]));
    }
    if (m.find("VolumeMountpoint") != m.end() && !m["VolumeMountpoint"].empty()) {
      volumeMountpoint = make_shared<string>(boost::any_cast<string>(m["VolumeMountpoint"]));
    }
    if (m.find("VolumeProtocol") != m.end() && !m["VolumeProtocol"].empty()) {
      volumeProtocol = make_shared<string>(boost::any_cast<string>(m["VolumeProtocol"]));
    }
    if (m.find("VolumeType") != m.end() && !m["VolumeType"].empty()) {
      volumeType = make_shared<string>(boost::any_cast<string>(m["VolumeType"]));
    }
  }


  virtual ~ListVolumesResponseBodyVolumesVolumeInfo() = default;
};
class ListVolumesResponseBodyVolumes : public Darabonba::Model {
public:
  shared_ptr<vector<ListVolumesResponseBodyVolumesVolumeInfo>> volumeInfo{};

  ListVolumesResponseBodyVolumes() {}

  explicit ListVolumesResponseBodyVolumes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (volumeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*volumeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VolumeInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VolumeInfo") != m.end() && !m["VolumeInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["VolumeInfo"].type()) {
        vector<ListVolumesResponseBodyVolumesVolumeInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VolumeInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVolumesResponseBodyVolumesVolumeInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        volumeInfo = make_shared<vector<ListVolumesResponseBodyVolumesVolumeInfo>>(expect1);
      }
    }
  }


  virtual ~ListVolumesResponseBodyVolumes() = default;
};
class ListVolumesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<ListVolumesResponseBodyVolumes> volumes{};

  ListVolumesResponseBody() {}

  explicit ListVolumesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (volumes) {
      res["Volumes"] = volumes ? boost::any(volumes->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Volumes") != m.end() && !m["Volumes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Volumes"].type()) {
        ListVolumesResponseBodyVolumes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Volumes"]));
        volumes = make_shared<ListVolumesResponseBodyVolumes>(model1);
      }
    }
  }


  virtual ~ListVolumesResponseBody() = default;
};
class ListVolumesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVolumesResponseBody> body{};

  ListVolumesResponse() {}

  explicit ListVolumesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVolumesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVolumesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVolumesResponse() = default;
};
class ModifyClusterAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> description{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> name{};

  ModifyClusterAttributesRequest() {}

  explicit ModifyClusterAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ModifyClusterAttributesRequest() = default;
};
class ModifyClusterAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyClusterAttributesResponseBody() {}

  explicit ModifyClusterAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyClusterAttributesResponseBody() = default;
};
class ModifyClusterAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyClusterAttributesResponseBody> body{};

  ModifyClusterAttributesResponse() {}

  explicit ModifyClusterAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyClusterAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterAttributesResponse() = default;
};
class ModifyContainerAppAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerId{};
  shared_ptr<string> description{};

  ModifyContainerAppAttributesRequest() {}

  explicit ModifyContainerAppAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerId) {
      res["ContainerId"] = boost::any(*containerId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerId") != m.end() && !m["ContainerId"].empty()) {
      containerId = make_shared<string>(boost::any_cast<string>(m["ContainerId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~ModifyContainerAppAttributesRequest() = default;
};
class ModifyContainerAppAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyContainerAppAttributesResponseBody() {}

  explicit ModifyContainerAppAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyContainerAppAttributesResponseBody() = default;
};
class ModifyContainerAppAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyContainerAppAttributesResponseBody> body{};

  ModifyContainerAppAttributesResponse() {}

  explicit ModifyContainerAppAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyContainerAppAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyContainerAppAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyContainerAppAttributesResponse() = default;
};
class ModifyImageGatewayConfigRequestRepo : public Darabonba::Model {
public:
  shared_ptr<string> auth{};
  shared_ptr<string> location{};
  shared_ptr<string> URL{};

  ModifyImageGatewayConfigRequestRepo() {}

  explicit ModifyImageGatewayConfigRequestRepo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auth) {
      res["Auth"] = boost::any(*auth);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Auth") != m.end() && !m["Auth"].empty()) {
      auth = make_shared<string>(boost::any_cast<string>(m["Auth"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~ModifyImageGatewayConfigRequestRepo() = default;
};
class ModifyImageGatewayConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> DBPassword{};
  shared_ptr<string> DBServerInfo{};
  shared_ptr<string> DBType{};
  shared_ptr<string> DBUsername{};
  shared_ptr<string> defaultRepoLocation{};
  shared_ptr<string> imageExpirationTimeout{};
  shared_ptr<long> pullUpdateTimeout{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<ModifyImageGatewayConfigRequestRepo>> repo{};

  ModifyImageGatewayConfigRequest() {}

  explicit ModifyImageGatewayConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (DBPassword) {
      res["DBPassword"] = boost::any(*DBPassword);
    }
    if (DBServerInfo) {
      res["DBServerInfo"] = boost::any(*DBServerInfo);
    }
    if (DBType) {
      res["DBType"] = boost::any(*DBType);
    }
    if (DBUsername) {
      res["DBUsername"] = boost::any(*DBUsername);
    }
    if (defaultRepoLocation) {
      res["DefaultRepoLocation"] = boost::any(*defaultRepoLocation);
    }
    if (imageExpirationTimeout) {
      res["ImageExpirationTimeout"] = boost::any(*imageExpirationTimeout);
    }
    if (pullUpdateTimeout) {
      res["PullUpdateTimeout"] = boost::any(*pullUpdateTimeout);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (repo) {
      vector<boost::any> temp1;
      for(auto item1:*repo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Repo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DBPassword") != m.end() && !m["DBPassword"].empty()) {
      DBPassword = make_shared<string>(boost::any_cast<string>(m["DBPassword"]));
    }
    if (m.find("DBServerInfo") != m.end() && !m["DBServerInfo"].empty()) {
      DBServerInfo = make_shared<string>(boost::any_cast<string>(m["DBServerInfo"]));
    }
    if (m.find("DBType") != m.end() && !m["DBType"].empty()) {
      DBType = make_shared<string>(boost::any_cast<string>(m["DBType"]));
    }
    if (m.find("DBUsername") != m.end() && !m["DBUsername"].empty()) {
      DBUsername = make_shared<string>(boost::any_cast<string>(m["DBUsername"]));
    }
    if (m.find("DefaultRepoLocation") != m.end() && !m["DefaultRepoLocation"].empty()) {
      defaultRepoLocation = make_shared<string>(boost::any_cast<string>(m["DefaultRepoLocation"]));
    }
    if (m.find("ImageExpirationTimeout") != m.end() && !m["ImageExpirationTimeout"].empty()) {
      imageExpirationTimeout = make_shared<string>(boost::any_cast<string>(m["ImageExpirationTimeout"]));
    }
    if (m.find("PullUpdateTimeout") != m.end() && !m["PullUpdateTimeout"].empty()) {
      pullUpdateTimeout = make_shared<long>(boost::any_cast<long>(m["PullUpdateTimeout"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Repo") != m.end() && !m["Repo"].empty()) {
      if (typeid(vector<boost::any>) == m["Repo"].type()) {
        vector<ModifyImageGatewayConfigRequestRepo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Repo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyImageGatewayConfigRequestRepo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        repo = make_shared<vector<ModifyImageGatewayConfigRequestRepo>>(expect1);
      }
    }
  }


  virtual ~ModifyImageGatewayConfigRequest() = default;
};
class ModifyImageGatewayConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyImageGatewayConfigResponseBody() {}

  explicit ModifyImageGatewayConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyImageGatewayConfigResponseBody() = default;
};
class ModifyImageGatewayConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyImageGatewayConfigResponseBody> body{};

  ModifyImageGatewayConfigResponse() {}

  explicit ModifyImageGatewayConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyImageGatewayConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyImageGatewayConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyImageGatewayConfigResponse() = default;
};
class ModifyUserGroupsRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> group{};
  shared_ptr<string> name{};

  ModifyUserGroupsRequestUser() {}

  explicit ModifyUserGroupsRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ModifyUserGroupsRequestUser() = default;
};
class ModifyUserGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<ModifyUserGroupsRequestUser>> user{};

  ModifyUserGroupsRequest() {}

  explicit ModifyUserGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ModifyUserGroupsRequestUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyUserGroupsRequestUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<ModifyUserGroupsRequestUser>>(expect1);
      }
    }
  }


  virtual ~ModifyUserGroupsRequest() = default;
};
class ModifyUserGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUserGroupsResponseBody() {}

  explicit ModifyUserGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyUserGroupsResponseBody() = default;
};
class ModifyUserGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyUserGroupsResponseBody> body{};

  ModifyUserGroupsResponse() {}

  explicit ModifyUserGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyUserGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUserGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUserGroupsResponse() = default;
};
class ModifyUserPasswordsRequestUser : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> password{};

  ModifyUserPasswordsRequestUser() {}

  explicit ModifyUserPasswordsRequestUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
  }


  virtual ~ModifyUserPasswordsRequestUser() = default;
};
class ModifyUserPasswordsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<ModifyUserPasswordsRequestUser>> user{};

  ModifyUserPasswordsRequest() {}

  explicit ModifyUserPasswordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ModifyUserPasswordsRequestUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyUserPasswordsRequestUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<ModifyUserPasswordsRequestUser>>(expect1);
      }
    }
  }


  virtual ~ModifyUserPasswordsRequest() = default;
};
class ModifyUserPasswordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUserPasswordsResponseBody() {}

  explicit ModifyUserPasswordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyUserPasswordsResponseBody() = default;
};
class ModifyUserPasswordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyUserPasswordsResponseBody> body{};

  ModifyUserPasswordsResponse() {}

  explicit ModifyUserPasswordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyUserPasswordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUserPasswordsResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUserPasswordsResponse() = default;
};
class ModifyVisualServicePasswdRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> passwd{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> runasUserPassword{};

  ModifyVisualServicePasswdRequest() {}

  explicit ModifyVisualServicePasswdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (passwd) {
      res["Passwd"] = boost::any(*passwd);
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (runasUserPassword) {
      res["RunasUserPassword"] = boost::any(*runasUserPassword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Passwd") != m.end() && !m["Passwd"].empty()) {
      passwd = make_shared<string>(boost::any_cast<string>(m["Passwd"]));
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("RunasUserPassword") != m.end() && !m["RunasUserPassword"].empty()) {
      runasUserPassword = make_shared<string>(boost::any_cast<string>(m["RunasUserPassword"]));
    }
  }


  virtual ~ModifyVisualServicePasswdRequest() = default;
};
class ModifyVisualServicePasswdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ModifyVisualServicePasswdResponseBody() {}

  explicit ModifyVisualServicePasswdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyVisualServicePasswdResponseBody() = default;
};
class ModifyVisualServicePasswdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyVisualServicePasswdResponseBody> body{};

  ModifyVisualServicePasswdResponse() {}

  explicit ModifyVisualServicePasswdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyVisualServicePasswdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyVisualServicePasswdResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyVisualServicePasswdResponse() = default;
};
class MountNFSRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> mountDir{};
  shared_ptr<string> nfsDir{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> remoteDir{};

  MountNFSRequest() {}

  explicit MountNFSRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mountDir) {
      res["MountDir"] = boost::any(*mountDir);
    }
    if (nfsDir) {
      res["NfsDir"] = boost::any(*nfsDir);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (remoteDir) {
      res["RemoteDir"] = boost::any(*remoteDir);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MountDir") != m.end() && !m["MountDir"].empty()) {
      mountDir = make_shared<string>(boost::any_cast<string>(m["MountDir"]));
    }
    if (m.find("NfsDir") != m.end() && !m["NfsDir"].empty()) {
      nfsDir = make_shared<string>(boost::any_cast<string>(m["NfsDir"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("RemoteDir") != m.end() && !m["RemoteDir"].empty()) {
      remoteDir = make_shared<string>(boost::any_cast<string>(m["RemoteDir"]));
    }
  }


  virtual ~MountNFSRequest() = default;
};
class MountNFSResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> invokeId{};
  shared_ptr<string> requestId{};

  MountNFSResponseBody() {}

  explicit MountNFSResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invokeId) {
      res["InvokeId"] = boost::any(*invokeId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvokeId") != m.end() && !m["InvokeId"].empty()) {
      invokeId = make_shared<string>(boost::any_cast<string>(m["InvokeId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~MountNFSResponseBody() = default;
};
class MountNFSResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MountNFSResponseBody> body{};

  MountNFSResponse() {}

  explicit MountNFSResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        MountNFSResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MountNFSResponseBody>(model1);
      }
    }
  }


  virtual ~MountNFSResponse() = default;
};
class PullImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> containerType{};
  shared_ptr<string> imageTag{};
  shared_ptr<string> repository{};

  PullImageRequest() {}

  explicit PullImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (containerType) {
      res["ContainerType"] = boost::any(*containerType);
    }
    if (imageTag) {
      res["ImageTag"] = boost::any(*imageTag);
    }
    if (repository) {
      res["Repository"] = boost::any(*repository);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ContainerType") != m.end() && !m["ContainerType"].empty()) {
      containerType = make_shared<string>(boost::any_cast<string>(m["ContainerType"]));
    }
    if (m.find("ImageTag") != m.end() && !m["ImageTag"].empty()) {
      imageTag = make_shared<string>(boost::any_cast<string>(m["ImageTag"]));
    }
    if (m.find("Repository") != m.end() && !m["Repository"].empty()) {
      repository = make_shared<string>(boost::any_cast<string>(m["Repository"]));
    }
  }


  virtual ~PullImageRequest() = default;
};
class PullImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PullImageResponseBody() {}

  explicit PullImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PullImageResponseBody() = default;
};
class PullImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PullImageResponseBody> body{};

  PullImageResponse() {}

  explicit PullImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PullImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PullImageResponseBody>(model1);
      }
    }
  }


  virtual ~PullImageResponse() = default;
};
class QueryServicePackAndPriceResponseBodyServicePackServicePackInfo : public Darabonba::Model {
public:
  shared_ptr<long> capacity{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> startTime{};

  QueryServicePackAndPriceResponseBodyServicePackServicePackInfo() {}

  explicit QueryServicePackAndPriceResponseBodyServicePackServicePackInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~QueryServicePackAndPriceResponseBodyServicePackServicePackInfo() = default;
};
class QueryServicePackAndPriceResponseBodyServicePack : public Darabonba::Model {
public:
  shared_ptr<vector<QueryServicePackAndPriceResponseBodyServicePackServicePackInfo>> servicePackInfo{};

  QueryServicePackAndPriceResponseBodyServicePack() {}

  explicit QueryServicePackAndPriceResponseBodyServicePack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (servicePackInfo) {
      vector<boost::any> temp1;
      for(auto item1:*servicePackInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServicePackInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServicePackInfo") != m.end() && !m["ServicePackInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ServicePackInfo"].type()) {
        vector<QueryServicePackAndPriceResponseBodyServicePackServicePackInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServicePackInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryServicePackAndPriceResponseBodyServicePackServicePackInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servicePackInfo = make_shared<vector<QueryServicePackAndPriceResponseBodyServicePackServicePackInfo>>(expect1);
      }
    }
  }


  virtual ~QueryServicePackAndPriceResponseBodyServicePack() = default;
};
class QueryServicePackAndPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> chargeAmount{};
  shared_ptr<string> currency{};
  shared_ptr<double> discountPrice{};
  shared_ptr<long> originalAmount{};
  shared_ptr<double> originalPrice{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<QueryServicePackAndPriceResponseBodyServicePack> servicePack{};
  shared_ptr<double> tradePrice{};

  QueryServicePackAndPriceResponseBody() {}

  explicit QueryServicePackAndPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeAmount) {
      res["ChargeAmount"] = boost::any(*chargeAmount);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (discountPrice) {
      res["DiscountPrice"] = boost::any(*discountPrice);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (servicePack) {
      res["ServicePack"] = servicePack ? boost::any(servicePack->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeAmount") != m.end() && !m["ChargeAmount"].empty()) {
      chargeAmount = make_shared<long>(boost::any_cast<long>(m["ChargeAmount"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("DiscountPrice") != m.end() && !m["DiscountPrice"].empty()) {
      discountPrice = make_shared<double>(boost::any_cast<double>(m["DiscountPrice"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<long>(boost::any_cast<long>(m["OriginalAmount"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<double>(boost::any_cast<double>(m["OriginalPrice"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServicePack") != m.end() && !m["ServicePack"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServicePack"].type()) {
        QueryServicePackAndPriceResponseBodyServicePack model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServicePack"]));
        servicePack = make_shared<QueryServicePackAndPriceResponseBodyServicePack>(model1);
      }
    }
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~QueryServicePackAndPriceResponseBody() = default;
};
class QueryServicePackAndPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryServicePackAndPriceResponseBody> body{};

  QueryServicePackAndPriceResponse() {}

  explicit QueryServicePackAndPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryServicePackAndPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryServicePackAndPriceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryServicePackAndPriceResponse() = default;
};
class RecoverClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> imageId{};
  shared_ptr<string> imageOwnerAlias{};
  shared_ptr<string> osTag{};
  shared_ptr<string> schedulerType{};

  RecoverClusterRequest() {}

  explicit RecoverClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (imageOwnerAlias) {
      res["ImageOwnerAlias"] = boost::any(*imageOwnerAlias);
    }
    if (osTag) {
      res["OsTag"] = boost::any(*osTag);
    }
    if (schedulerType) {
      res["SchedulerType"] = boost::any(*schedulerType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("ImageOwnerAlias") != m.end() && !m["ImageOwnerAlias"].empty()) {
      imageOwnerAlias = make_shared<string>(boost::any_cast<string>(m["ImageOwnerAlias"]));
    }
    if (m.find("OsTag") != m.end() && !m["OsTag"].empty()) {
      osTag = make_shared<string>(boost::any_cast<string>(m["OsTag"]));
    }
    if (m.find("SchedulerType") != m.end() && !m["SchedulerType"].empty()) {
      schedulerType = make_shared<string>(boost::any_cast<string>(m["SchedulerType"]));
    }
  }


  virtual ~RecoverClusterRequest() = default;
};
class RecoverClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  RecoverClusterResponseBody() {}

  explicit RecoverClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~RecoverClusterResponseBody() = default;
};
class RecoverClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecoverClusterResponseBody> body{};

  RecoverClusterResponse() {}

  explicit RecoverClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RecoverClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecoverClusterResponseBody>(model1);
      }
    }
  }


  virtual ~RecoverClusterResponse() = default;
};
class RerunJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobs{};

  RerunJobsRequest() {}

  explicit RerunJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (jobs) {
      res["Jobs"] = boost::any(*jobs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      jobs = make_shared<string>(boost::any_cast<string>(m["Jobs"]));
    }
  }


  virtual ~RerunJobsRequest() = default;
};
class RerunJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RerunJobsResponseBody() {}

  explicit RerunJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RerunJobsResponseBody() = default;
};
class RerunJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RerunJobsResponseBody> body{};

  RerunJobsResponse() {}

  explicit RerunJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RerunJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RerunJobsResponseBody>(model1);
      }
    }
  }


  virtual ~RerunJobsResponse() = default;
};
class ResetNodesRequestInstance : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  ResetNodesRequestInstance() {}

  explicit ResetNodesRequestInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetNodesRequestInstance() = default;
};
class ResetNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<ResetNodesRequestInstance>> instance{};

  ResetNodesRequest() {}

  explicit ResetNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
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
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<ResetNodesRequestInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ResetNodesRequestInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<ResetNodesRequestInstance>>(expect1);
      }
    }
  }


  virtual ~ResetNodesRequest() = default;
};
class ResetNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  ResetNodesResponseBody() {}

  explicit ResetNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ResetNodesResponseBody() = default;
};
class ResetNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResetNodesResponseBody> body{};

  ResetNodesResponse() {}

  explicit ResetNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResetNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ResetNodesResponse() = default;
};
class RunCloudMetricProfilingRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<long> duration{};
  shared_ptr<long> freq{};
  shared_ptr<string> hostName{};
  shared_ptr<long> processId{};
  shared_ptr<string> regionId{};

  RunCloudMetricProfilingRequest() {}

  explicit RunCloudMetricProfilingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (freq) {
      res["Freq"] = boost::any(*freq);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (processId) {
      res["ProcessId"] = boost::any(*processId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Freq") != m.end() && !m["Freq"].empty()) {
      freq = make_shared<long>(boost::any_cast<long>(m["Freq"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("ProcessId") != m.end() && !m["ProcessId"].empty()) {
      processId = make_shared<long>(boost::any_cast<long>(m["ProcessId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~RunCloudMetricProfilingRequest() = default;
};
class RunCloudMetricProfilingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RunCloudMetricProfilingResponseBody() {}

  explicit RunCloudMetricProfilingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RunCloudMetricProfilingResponseBody() = default;
};
class RunCloudMetricProfilingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RunCloudMetricProfilingResponseBody> body{};

  RunCloudMetricProfilingResponse() {}

  explicit RunCloudMetricProfilingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunCloudMetricProfilingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunCloudMetricProfilingResponseBody>(model1);
      }
    }
  }


  virtual ~RunCloudMetricProfilingResponse() = default;
};
class SetAutoScaleConfigRequestQueuesDataDisks : public Darabonba::Model {
public:
  shared_ptr<string> dataDiskCategory{};
  shared_ptr<bool> dataDiskDeleteWithInstance{};
  shared_ptr<bool> dataDiskEncrypted{};
  shared_ptr<string> dataDiskKMSKeyId{};
  shared_ptr<string> dataDiskPerformanceLevel{};
  shared_ptr<long> dataDiskSize{};

  SetAutoScaleConfigRequestQueuesDataDisks() {}

  explicit SetAutoScaleConfigRequestQueuesDataDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDiskCategory) {
      res["DataDiskCategory"] = boost::any(*dataDiskCategory);
    }
    if (dataDiskDeleteWithInstance) {
      res["DataDiskDeleteWithInstance"] = boost::any(*dataDiskDeleteWithInstance);
    }
    if (dataDiskEncrypted) {
      res["DataDiskEncrypted"] = boost::any(*dataDiskEncrypted);
    }
    if (dataDiskKMSKeyId) {
      res["DataDiskKMSKeyId"] = boost::any(*dataDiskKMSKeyId);
    }
    if (dataDiskPerformanceLevel) {
      res["DataDiskPerformanceLevel"] = boost::any(*dataDiskPerformanceLevel);
    }
    if (dataDiskSize) {
      res["DataDiskSize"] = boost::any(*dataDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDiskCategory") != m.end() && !m["DataDiskCategory"].empty()) {
      dataDiskCategory = make_shared<string>(boost::any_cast<string>(m["DataDiskCategory"]));
    }
    if (m.find("DataDiskDeleteWithInstance") != m.end() && !m["DataDiskDeleteWithInstance"].empty()) {
      dataDiskDeleteWithInstance = make_shared<bool>(boost::any_cast<bool>(m["DataDiskDeleteWithInstance"]));
    }
    if (m.find("DataDiskEncrypted") != m.end() && !m["DataDiskEncrypted"].empty()) {
      dataDiskEncrypted = make_shared<bool>(boost::any_cast<bool>(m["DataDiskEncrypted"]));
    }
    if (m.find("DataDiskKMSKeyId") != m.end() && !m["DataDiskKMSKeyId"].empty()) {
      dataDiskKMSKeyId = make_shared<string>(boost::any_cast<string>(m["DataDiskKMSKeyId"]));
    }
    if (m.find("DataDiskPerformanceLevel") != m.end() && !m["DataDiskPerformanceLevel"].empty()) {
      dataDiskPerformanceLevel = make_shared<string>(boost::any_cast<string>(m["DataDiskPerformanceLevel"]));
    }
    if (m.find("DataDiskSize") != m.end() && !m["DataDiskSize"].empty()) {
      dataDiskSize = make_shared<long>(boost::any_cast<long>(m["DataDiskSize"]));
    }
  }


  virtual ~SetAutoScaleConfigRequestQueuesDataDisks() = default;
};
class SetAutoScaleConfigRequestQueuesInstanceTypes : public Darabonba::Model {
public:
  shared_ptr<string> instanceType{};
  shared_ptr<double> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  SetAutoScaleConfigRequestQueuesInstanceTypes() {}

  explicit SetAutoScaleConfigRequestQueuesInstanceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
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
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~SetAutoScaleConfigRequestQueuesInstanceTypes() = default;
};
class SetAutoScaleConfigRequestQueues : public Darabonba::Model {
public:
  shared_ptr<vector<SetAutoScaleConfigRequestQueuesDataDisks>> dataDisks{};
  shared_ptr<bool> enableAutoGrow{};
  shared_ptr<bool> enableAutoShrink{};
  shared_ptr<string> hostNamePrefix{};
  shared_ptr<string> hostNameSuffix{};
  shared_ptr<string> instanceType{};
  shared_ptr<vector<SetAutoScaleConfigRequestQueuesInstanceTypes>> instanceTypes{};
  shared_ptr<long> maxNodesInQueue{};
  shared_ptr<long> minNodesInQueue{};
  shared_ptr<string> queueImageId{};
  shared_ptr<string> queueName{};
  shared_ptr<double> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<string> systemDiskLevel{};
  shared_ptr<long> systemDiskSize{};

  SetAutoScaleConfigRequestQueues() {}

  explicit SetAutoScaleConfigRequestQueues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDisks) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisks"] = boost::any(temp1);
    }
    if (enableAutoGrow) {
      res["EnableAutoGrow"] = boost::any(*enableAutoGrow);
    }
    if (enableAutoShrink) {
      res["EnableAutoShrink"] = boost::any(*enableAutoShrink);
    }
    if (hostNamePrefix) {
      res["HostNamePrefix"] = boost::any(*hostNamePrefix);
    }
    if (hostNameSuffix) {
      res["HostNameSuffix"] = boost::any(*hostNameSuffix);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (instanceTypes) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTypes"] = boost::any(temp1);
    }
    if (maxNodesInQueue) {
      res["MaxNodesInQueue"] = boost::any(*maxNodesInQueue);
    }
    if (minNodesInQueue) {
      res["MinNodesInQueue"] = boost::any(*minNodesInQueue);
    }
    if (queueImageId) {
      res["QueueImageId"] = boost::any(*queueImageId);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskLevel) {
      res["SystemDiskLevel"] = boost::any(*systemDiskLevel);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisks"].type()) {
        vector<SetAutoScaleConfigRequestQueuesDataDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetAutoScaleConfigRequestQueuesDataDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisks = make_shared<vector<SetAutoScaleConfigRequestQueuesDataDisks>>(expect1);
      }
    }
    if (m.find("EnableAutoGrow") != m.end() && !m["EnableAutoGrow"].empty()) {
      enableAutoGrow = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoGrow"]));
    }
    if (m.find("EnableAutoShrink") != m.end() && !m["EnableAutoShrink"].empty()) {
      enableAutoShrink = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoShrink"]));
    }
    if (m.find("HostNamePrefix") != m.end() && !m["HostNamePrefix"].empty()) {
      hostNamePrefix = make_shared<string>(boost::any_cast<string>(m["HostNamePrefix"]));
    }
    if (m.find("HostNameSuffix") != m.end() && !m["HostNameSuffix"].empty()) {
      hostNameSuffix = make_shared<string>(boost::any_cast<string>(m["HostNameSuffix"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<SetAutoScaleConfigRequestQueuesInstanceTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetAutoScaleConfigRequestQueuesInstanceTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTypes = make_shared<vector<SetAutoScaleConfigRequestQueuesInstanceTypes>>(expect1);
      }
    }
    if (m.find("MaxNodesInQueue") != m.end() && !m["MaxNodesInQueue"].empty()) {
      maxNodesInQueue = make_shared<long>(boost::any_cast<long>(m["MaxNodesInQueue"]));
    }
    if (m.find("MinNodesInQueue") != m.end() && !m["MinNodesInQueue"].empty()) {
      minNodesInQueue = make_shared<long>(boost::any_cast<long>(m["MinNodesInQueue"]));
    }
    if (m.find("QueueImageId") != m.end() && !m["QueueImageId"].empty()) {
      queueImageId = make_shared<string>(boost::any_cast<string>(m["QueueImageId"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("SystemDiskLevel") != m.end() && !m["SystemDiskLevel"].empty()) {
      systemDiskLevel = make_shared<string>(boost::any_cast<string>(m["SystemDiskLevel"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
  }


  virtual ~SetAutoScaleConfigRequestQueues() = default;
};
class SetAutoScaleConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> enableAutoGrow{};
  shared_ptr<bool> enableAutoShrink{};
  shared_ptr<string> excludeNodes{};
  shared_ptr<long> extraNodesGrowRatio{};
  shared_ptr<long> growIntervalInMinutes{};
  shared_ptr<long> growRatio{};
  shared_ptr<long> growTimeoutInMinutes{};
  shared_ptr<string> imageId{};
  shared_ptr<long> maxNodesInCluster{};
  shared_ptr<vector<SetAutoScaleConfigRequestQueues>> queues{};
  shared_ptr<long> shrinkIdleTimes{};
  shared_ptr<long> shrinkIntervalInMinutes{};
  shared_ptr<double> spotPriceLimit{};
  shared_ptr<string> spotStrategy{};

  SetAutoScaleConfigRequest() {}

  explicit SetAutoScaleConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (enableAutoGrow) {
      res["EnableAutoGrow"] = boost::any(*enableAutoGrow);
    }
    if (enableAutoShrink) {
      res["EnableAutoShrink"] = boost::any(*enableAutoShrink);
    }
    if (excludeNodes) {
      res["ExcludeNodes"] = boost::any(*excludeNodes);
    }
    if (extraNodesGrowRatio) {
      res["ExtraNodesGrowRatio"] = boost::any(*extraNodesGrowRatio);
    }
    if (growIntervalInMinutes) {
      res["GrowIntervalInMinutes"] = boost::any(*growIntervalInMinutes);
    }
    if (growRatio) {
      res["GrowRatio"] = boost::any(*growRatio);
    }
    if (growTimeoutInMinutes) {
      res["GrowTimeoutInMinutes"] = boost::any(*growTimeoutInMinutes);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (maxNodesInCluster) {
      res["MaxNodesInCluster"] = boost::any(*maxNodesInCluster);
    }
    if (queues) {
      vector<boost::any> temp1;
      for(auto item1:*queues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Queues"] = boost::any(temp1);
    }
    if (shrinkIdleTimes) {
      res["ShrinkIdleTimes"] = boost::any(*shrinkIdleTimes);
    }
    if (shrinkIntervalInMinutes) {
      res["ShrinkIntervalInMinutes"] = boost::any(*shrinkIntervalInMinutes);
    }
    if (spotPriceLimit) {
      res["SpotPriceLimit"] = boost::any(*spotPriceLimit);
    }
    if (spotStrategy) {
      res["SpotStrategy"] = boost::any(*spotStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("EnableAutoGrow") != m.end() && !m["EnableAutoGrow"].empty()) {
      enableAutoGrow = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoGrow"]));
    }
    if (m.find("EnableAutoShrink") != m.end() && !m["EnableAutoShrink"].empty()) {
      enableAutoShrink = make_shared<bool>(boost::any_cast<bool>(m["EnableAutoShrink"]));
    }
    if (m.find("ExcludeNodes") != m.end() && !m["ExcludeNodes"].empty()) {
      excludeNodes = make_shared<string>(boost::any_cast<string>(m["ExcludeNodes"]));
    }
    if (m.find("ExtraNodesGrowRatio") != m.end() && !m["ExtraNodesGrowRatio"].empty()) {
      extraNodesGrowRatio = make_shared<long>(boost::any_cast<long>(m["ExtraNodesGrowRatio"]));
    }
    if (m.find("GrowIntervalInMinutes") != m.end() && !m["GrowIntervalInMinutes"].empty()) {
      growIntervalInMinutes = make_shared<long>(boost::any_cast<long>(m["GrowIntervalInMinutes"]));
    }
    if (m.find("GrowRatio") != m.end() && !m["GrowRatio"].empty()) {
      growRatio = make_shared<long>(boost::any_cast<long>(m["GrowRatio"]));
    }
    if (m.find("GrowTimeoutInMinutes") != m.end() && !m["GrowTimeoutInMinutes"].empty()) {
      growTimeoutInMinutes = make_shared<long>(boost::any_cast<long>(m["GrowTimeoutInMinutes"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("MaxNodesInCluster") != m.end() && !m["MaxNodesInCluster"].empty()) {
      maxNodesInCluster = make_shared<long>(boost::any_cast<long>(m["MaxNodesInCluster"]));
    }
    if (m.find("Queues") != m.end() && !m["Queues"].empty()) {
      if (typeid(vector<boost::any>) == m["Queues"].type()) {
        vector<SetAutoScaleConfigRequestQueues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Queues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetAutoScaleConfigRequestQueues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queues = make_shared<vector<SetAutoScaleConfigRequestQueues>>(expect1);
      }
    }
    if (m.find("ShrinkIdleTimes") != m.end() && !m["ShrinkIdleTimes"].empty()) {
      shrinkIdleTimes = make_shared<long>(boost::any_cast<long>(m["ShrinkIdleTimes"]));
    }
    if (m.find("ShrinkIntervalInMinutes") != m.end() && !m["ShrinkIntervalInMinutes"].empty()) {
      shrinkIntervalInMinutes = make_shared<long>(boost::any_cast<long>(m["ShrinkIntervalInMinutes"]));
    }
    if (m.find("SpotPriceLimit") != m.end() && !m["SpotPriceLimit"].empty()) {
      spotPriceLimit = make_shared<double>(boost::any_cast<double>(m["SpotPriceLimit"]));
    }
    if (m.find("SpotStrategy") != m.end() && !m["SpotStrategy"].empty()) {
      spotStrategy = make_shared<string>(boost::any_cast<string>(m["SpotStrategy"]));
    }
  }


  virtual ~SetAutoScaleConfigRequest() = default;
};
class SetAutoScaleConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetAutoScaleConfigResponseBody() {}

  explicit SetAutoScaleConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetAutoScaleConfigResponseBody() = default;
};
class SetAutoScaleConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetAutoScaleConfigResponseBody> body{};

  SetAutoScaleConfigResponse() {}

  explicit SetAutoScaleConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetAutoScaleConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAutoScaleConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SetAutoScaleConfigResponse() = default;
};
class SetGWSClusterPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<bool> asyncMode{};
  shared_ptr<string> clipboard{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> localDrive{};
  shared_ptr<string> udpPort{};
  shared_ptr<string> usbRedirect{};
  shared_ptr<string> watermark{};

  SetGWSClusterPolicyRequest() {}

  explicit SetGWSClusterPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncMode) {
      res["AsyncMode"] = boost::any(*asyncMode);
    }
    if (clipboard) {
      res["Clipboard"] = boost::any(*clipboard);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (localDrive) {
      res["LocalDrive"] = boost::any(*localDrive);
    }
    if (udpPort) {
      res["UdpPort"] = boost::any(*udpPort);
    }
    if (usbRedirect) {
      res["UsbRedirect"] = boost::any(*usbRedirect);
    }
    if (watermark) {
      res["Watermark"] = boost::any(*watermark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsyncMode") != m.end() && !m["AsyncMode"].empty()) {
      asyncMode = make_shared<bool>(boost::any_cast<bool>(m["AsyncMode"]));
    }
    if (m.find("Clipboard") != m.end() && !m["Clipboard"].empty()) {
      clipboard = make_shared<string>(boost::any_cast<string>(m["Clipboard"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("LocalDrive") != m.end() && !m["LocalDrive"].empty()) {
      localDrive = make_shared<string>(boost::any_cast<string>(m["LocalDrive"]));
    }
    if (m.find("UdpPort") != m.end() && !m["UdpPort"].empty()) {
      udpPort = make_shared<string>(boost::any_cast<string>(m["UdpPort"]));
    }
    if (m.find("UsbRedirect") != m.end() && !m["UsbRedirect"].empty()) {
      usbRedirect = make_shared<string>(boost::any_cast<string>(m["UsbRedirect"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      watermark = make_shared<string>(boost::any_cast<string>(m["Watermark"]));
    }
  }


  virtual ~SetGWSClusterPolicyRequest() = default;
};
class SetGWSClusterPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetGWSClusterPolicyResponseBody() {}

  explicit SetGWSClusterPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetGWSClusterPolicyResponseBody() = default;
};
class SetGWSClusterPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetGWSClusterPolicyResponseBody> body{};

  SetGWSClusterPolicyResponse() {}

  explicit SetGWSClusterPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetGWSClusterPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetGWSClusterPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~SetGWSClusterPolicyResponse() = default;
};
class SetGWSInstanceNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};

  SetGWSInstanceNameRequest() {}

  explicit SetGWSInstanceNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~SetGWSInstanceNameRequest() = default;
};
class SetGWSInstanceNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetGWSInstanceNameResponseBody() {}

  explicit SetGWSInstanceNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetGWSInstanceNameResponseBody() = default;
};
class SetGWSInstanceNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetGWSInstanceNameResponseBody> body{};

  SetGWSInstanceNameResponse() {}

  explicit SetGWSInstanceNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetGWSInstanceNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetGWSInstanceNameResponseBody>(model1);
      }
    }
  }


  virtual ~SetGWSInstanceNameResponse() = default;
};
class SetGWSInstanceUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> userName{};
  shared_ptr<string> userUid{};

  SetGWSInstanceUserRequest() {}

  explicit SetGWSInstanceUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userUid) {
      res["UserUid"] = boost::any(*userUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserUid") != m.end() && !m["UserUid"].empty()) {
      userUid = make_shared<string>(boost::any_cast<string>(m["UserUid"]));
    }
  }


  virtual ~SetGWSInstanceUserRequest() = default;
};
class SetGWSInstanceUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetGWSInstanceUserResponseBody() {}

  explicit SetGWSInstanceUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetGWSInstanceUserResponseBody() = default;
};
class SetGWSInstanceUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetGWSInstanceUserResponseBody> body{};

  SetGWSInstanceUserResponse() {}

  explicit SetGWSInstanceUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetGWSInstanceUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetGWSInstanceUserResponseBody>(model1);
      }
    }
  }


  virtual ~SetGWSInstanceUserResponse() = default;
};
class SetQueueRequestNode : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  SetQueueRequestNode() {}

  explicit SetQueueRequestNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~SetQueueRequestNode() = default;
};
class SetQueueRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<SetQueueRequestNode>> node{};
  shared_ptr<string> queueName{};

  SetQueueRequest() {}

  explicit SetQueueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (node) {
      vector<boost::any> temp1;
      for(auto item1:*node){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Node"] = boost::any(temp1);
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
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(vector<boost::any>) == m["Node"].type()) {
        vector<SetQueueRequestNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Node"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetQueueRequestNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        node = make_shared<vector<SetQueueRequestNode>>(expect1);
      }
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
  }


  virtual ~SetQueueRequest() = default;
};
class SetQueueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetQueueResponseBody() {}

  explicit SetQueueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetQueueResponseBody() = default;
};
class SetQueueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetQueueResponseBody> body{};

  SetQueueResponse() {}

  explicit SetQueueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetQueueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetQueueResponseBody>(model1);
      }
    }
  }


  virtual ~SetQueueResponse() = default;
};
class SetSchedulerInfoRequestPbsInfoAclLimit : public Darabonba::Model {
public:
  shared_ptr<string> aclUsers{};
  shared_ptr<string> queue{};

  SetSchedulerInfoRequestPbsInfoAclLimit() {}

  explicit SetSchedulerInfoRequestPbsInfoAclLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclUsers) {
      res["AclUsers"] = boost::any(*aclUsers);
    }
    if (queue) {
      res["Queue"] = boost::any(*queue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclUsers") != m.end() && !m["AclUsers"].empty()) {
      aclUsers = make_shared<string>(boost::any_cast<string>(m["AclUsers"]));
    }
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      queue = make_shared<string>(boost::any_cast<string>(m["Queue"]));
    }
  }


  virtual ~SetSchedulerInfoRequestPbsInfoAclLimit() = default;
};
class SetSchedulerInfoRequestPbsInfoResourceLimit : public Darabonba::Model {
public:
  shared_ptr<long> cpus{};
  shared_ptr<string> mem{};
  shared_ptr<long> nodes{};
  shared_ptr<string> queue{};
  shared_ptr<string> user{};

  SetSchedulerInfoRequestPbsInfoResourceLimit() {}

  explicit SetSchedulerInfoRequestPbsInfoResourceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpus) {
      res["Cpus"] = boost::any(*cpus);
    }
    if (mem) {
      res["Mem"] = boost::any(*mem);
    }
    if (nodes) {
      res["Nodes"] = boost::any(*nodes);
    }
    if (queue) {
      res["Queue"] = boost::any(*queue);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cpus") != m.end() && !m["Cpus"].empty()) {
      cpus = make_shared<long>(boost::any_cast<long>(m["Cpus"]));
    }
    if (m.find("Mem") != m.end() && !m["Mem"].empty()) {
      mem = make_shared<string>(boost::any_cast<string>(m["Mem"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      nodes = make_shared<long>(boost::any_cast<long>(m["Nodes"]));
    }
    if (m.find("Queue") != m.end() && !m["Queue"].empty()) {
      queue = make_shared<string>(boost::any_cast<string>(m["Queue"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
  }


  virtual ~SetSchedulerInfoRequestPbsInfoResourceLimit() = default;
};
class SetSchedulerInfoRequestPbsInfo : public Darabonba::Model {
public:
  shared_ptr<vector<SetSchedulerInfoRequestPbsInfoAclLimit>> aclLimit{};
  shared_ptr<long> jobHistoryDuration{};
  shared_ptr<vector<SetSchedulerInfoRequestPbsInfoResourceLimit>> resourceLimit{};
  shared_ptr<long> schedInterval{};

  SetSchedulerInfoRequestPbsInfo() {}

  explicit SetSchedulerInfoRequestPbsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aclLimit) {
      vector<boost::any> temp1;
      for(auto item1:*aclLimit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AclLimit"] = boost::any(temp1);
    }
    if (jobHistoryDuration) {
      res["JobHistoryDuration"] = boost::any(*jobHistoryDuration);
    }
    if (resourceLimit) {
      vector<boost::any> temp1;
      for(auto item1:*resourceLimit){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResourceLimit"] = boost::any(temp1);
    }
    if (schedInterval) {
      res["SchedInterval"] = boost::any(*schedInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AclLimit") != m.end() && !m["AclLimit"].empty()) {
      if (typeid(vector<boost::any>) == m["AclLimit"].type()) {
        vector<SetSchedulerInfoRequestPbsInfoAclLimit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AclLimit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetSchedulerInfoRequestPbsInfoAclLimit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aclLimit = make_shared<vector<SetSchedulerInfoRequestPbsInfoAclLimit>>(expect1);
      }
    }
    if (m.find("JobHistoryDuration") != m.end() && !m["JobHistoryDuration"].empty()) {
      jobHistoryDuration = make_shared<long>(boost::any_cast<long>(m["JobHistoryDuration"]));
    }
    if (m.find("ResourceLimit") != m.end() && !m["ResourceLimit"].empty()) {
      if (typeid(vector<boost::any>) == m["ResourceLimit"].type()) {
        vector<SetSchedulerInfoRequestPbsInfoResourceLimit> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResourceLimit"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetSchedulerInfoRequestPbsInfoResourceLimit model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resourceLimit = make_shared<vector<SetSchedulerInfoRequestPbsInfoResourceLimit>>(expect1);
      }
    }
    if (m.find("SchedInterval") != m.end() && !m["SchedInterval"].empty()) {
      schedInterval = make_shared<long>(boost::any_cast<long>(m["SchedInterval"]));
    }
  }


  virtual ~SetSchedulerInfoRequestPbsInfo() = default;
};
class SetSchedulerInfoRequestScheduler : public Darabonba::Model {
public:
  shared_ptr<string> schedName{};

  SetSchedulerInfoRequestScheduler() {}

  explicit SetSchedulerInfoRequestScheduler(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (schedName) {
      res["SchedName"] = boost::any(*schedName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SchedName") != m.end() && !m["SchedName"].empty()) {
      schedName = make_shared<string>(boost::any_cast<string>(m["SchedName"]));
    }
  }


  virtual ~SetSchedulerInfoRequestScheduler() = default;
};
class SetSchedulerInfoRequestSlurmInfo : public Darabonba::Model {
public:
  shared_ptr<long> backfillInterval{};
  shared_ptr<long> schedInterval{};

  SetSchedulerInfoRequestSlurmInfo() {}

  explicit SetSchedulerInfoRequestSlurmInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backfillInterval) {
      res["BackfillInterval"] = boost::any(*backfillInterval);
    }
    if (schedInterval) {
      res["SchedInterval"] = boost::any(*schedInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackfillInterval") != m.end() && !m["BackfillInterval"].empty()) {
      backfillInterval = make_shared<long>(boost::any_cast<long>(m["BackfillInterval"]));
    }
    if (m.find("SchedInterval") != m.end() && !m["SchedInterval"].empty()) {
      schedInterval = make_shared<long>(boost::any_cast<long>(m["SchedInterval"]));
    }
  }


  virtual ~SetSchedulerInfoRequestSlurmInfo() = default;
};
class SetSchedulerInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<SetSchedulerInfoRequestPbsInfo>> pbsInfo{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<SetSchedulerInfoRequestScheduler>> scheduler{};
  shared_ptr<vector<SetSchedulerInfoRequestSlurmInfo>> slurmInfo{};

  SetSchedulerInfoRequest() {}

  explicit SetSchedulerInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (pbsInfo) {
      vector<boost::any> temp1;
      for(auto item1:*pbsInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PbsInfo"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scheduler) {
      vector<boost::any> temp1;
      for(auto item1:*scheduler){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Scheduler"] = boost::any(temp1);
    }
    if (slurmInfo) {
      vector<boost::any> temp1;
      for(auto item1:*slurmInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlurmInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PbsInfo") != m.end() && !m["PbsInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["PbsInfo"].type()) {
        vector<SetSchedulerInfoRequestPbsInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PbsInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetSchedulerInfoRequestPbsInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pbsInfo = make_shared<vector<SetSchedulerInfoRequestPbsInfo>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      if (typeid(vector<boost::any>) == m["Scheduler"].type()) {
        vector<SetSchedulerInfoRequestScheduler> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Scheduler"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetSchedulerInfoRequestScheduler model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduler = make_shared<vector<SetSchedulerInfoRequestScheduler>>(expect1);
      }
    }
    if (m.find("SlurmInfo") != m.end() && !m["SlurmInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["SlurmInfo"].type()) {
        vector<SetSchedulerInfoRequestSlurmInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlurmInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SetSchedulerInfoRequestSlurmInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slurmInfo = make_shared<vector<SetSchedulerInfoRequestSlurmInfo>>(expect1);
      }
    }
  }


  virtual ~SetSchedulerInfoRequest() = default;
};
class SetSchedulerInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SetSchedulerInfoResponseBody() {}

  explicit SetSchedulerInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetSchedulerInfoResponseBody() = default;
};
class SetSchedulerInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetSchedulerInfoResponseBody> body{};

  SetSchedulerInfoResponse() {}

  explicit SetSchedulerInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetSchedulerInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetSchedulerInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SetSchedulerInfoResponse() = default;
};
class StartClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  StartClusterRequest() {}

  explicit StartClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartClusterRequest() = default;
};
class StartClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  StartClusterResponseBody() {}

  explicit StartClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StartClusterResponseBody() = default;
};
class StartClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartClusterResponseBody> body{};

  StartClusterResponse() {}

  explicit StartClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartClusterResponseBody>(model1);
      }
    }
  }


  virtual ~StartClusterResponse() = default;
};
class StartGWSInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  StartGWSInstanceRequest() {}

  explicit StartGWSInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~StartGWSInstanceRequest() = default;
};
class StartGWSInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartGWSInstanceResponseBody() {}

  explicit StartGWSInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartGWSInstanceResponseBody() = default;
};
class StartGWSInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartGWSInstanceResponseBody> body{};

  StartGWSInstanceResponse() {}

  explicit StartGWSInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartGWSInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartGWSInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StartGWSInstanceResponse() = default;
};
class StartNodesRequestInstance : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  StartNodesRequestInstance() {}

  explicit StartNodesRequestInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartNodesRequestInstance() = default;
};
class StartNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<StartNodesRequestInstance>> instance{};
  shared_ptr<string> role{};

  StartNodesRequest() {}

  explicit StartNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<StartNodesRequestInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartNodesRequestInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<StartNodesRequestInstance>>(expect1);
      }
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~StartNodesRequest() = default;
};
class StartNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  StartNodesResponseBody() {}

  explicit StartNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StartNodesResponseBody() = default;
};
class StartNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartNodesResponseBody> body{};

  StartNodesResponse() {}

  explicit StartNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartNodesResponseBody>(model1);
      }
    }
  }


  virtual ~StartNodesResponse() = default;
};
class StartVisualServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> cidrIp{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> port{};

  StartVisualServiceRequest() {}

  explicit StartVisualServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrIp) {
      res["CidrIp"] = boost::any(*cidrIp);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CidrIp") != m.end() && !m["CidrIp"].empty()) {
      cidrIp = make_shared<string>(boost::any_cast<string>(m["CidrIp"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~StartVisualServiceRequest() = default;
};
class StartVisualServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  StartVisualServiceResponseBody() {}

  explicit StartVisualServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartVisualServiceResponseBody() = default;
};
class StartVisualServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StartVisualServiceResponseBody> body{};

  StartVisualServiceResponse() {}

  explicit StartVisualServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StartVisualServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartVisualServiceResponseBody>(model1);
      }
    }
  }


  virtual ~StartVisualServiceResponse() = default;
};
class StopClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  StopClusterRequest() {}

  explicit StopClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopClusterRequest() = default;
};
class StopClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  StopClusterResponseBody() {}

  explicit StopClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StopClusterResponseBody() = default;
};
class StopClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopClusterResponseBody> body{};

  StopClusterResponse() {}

  explicit StopClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopClusterResponseBody>(model1);
      }
    }
  }


  virtual ~StopClusterResponse() = default;
};
class StopGWSInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  StopGWSInstanceRequest() {}

  explicit StopGWSInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~StopGWSInstanceRequest() = default;
};
class StopGWSInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopGWSInstanceResponseBody() {}

  explicit StopGWSInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopGWSInstanceResponseBody() = default;
};
class StopGWSInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopGWSInstanceResponseBody> body{};

  StopGWSInstanceResponse() {}

  explicit StopGWSInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopGWSInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopGWSInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~StopGWSInstanceResponse() = default;
};
class StopJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> jobs{};

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
    if (jobs) {
      res["Jobs"] = boost::any(*jobs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      jobs = make_shared<string>(boost::any_cast<string>(m["Jobs"]));
    }
  }


  virtual ~StopJobsRequest() = default;
};
class StopJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopJobsResponseBody() = default;
};
class StopJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopJobsResponseBody> body{};

  StopJobsResponse() {}

  explicit StopJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
class StopNodesRequestInstance : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  StopNodesRequestInstance() {}

  explicit StopNodesRequestInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopNodesRequestInstance() = default;
};
class StopNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<StopNodesRequestInstance>> instance{};
  shared_ptr<string> role{};

  StopNodesRequest() {}

  explicit StopNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<StopNodesRequestInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StopNodesRequestInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<StopNodesRequestInstance>>(expect1);
      }
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~StopNodesRequest() = default;
};
class StopNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  StopNodesResponseBody() {}

  explicit StopNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~StopNodesResponseBody() = default;
};
class StopNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopNodesResponseBody> body{};

  StopNodesResponse() {}

  explicit StopNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopNodesResponseBody>(model1);
      }
    }
  }


  virtual ~StopNodesResponse() = default;
};
class StopVisualServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> cidrIp{};
  shared_ptr<string> clusterId{};
  shared_ptr<long> port{};

  StopVisualServiceRequest() {}

  explicit StopVisualServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrIp) {
      res["CidrIp"] = boost::any(*cidrIp);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CidrIp") != m.end() && !m["CidrIp"].empty()) {
      cidrIp = make_shared<string>(boost::any_cast<string>(m["CidrIp"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
  }


  virtual ~StopVisualServiceRequest() = default;
};
class StopVisualServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  StopVisualServiceResponseBody() {}

  explicit StopVisualServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopVisualServiceResponseBody() = default;
};
class StopVisualServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopVisualServiceResponseBody> body{};

  StopVisualServiceResponse() {}

  explicit StopVisualServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopVisualServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopVisualServiceResponseBody>(model1);
      }
    }
  }


  virtual ~StopVisualServiceResponse() = default;
};
class SubmitJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> arrayRequest{};
  shared_ptr<string> clockTime{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> commandLine{};
  shared_ptr<string> containerId{};
  shared_ptr<long> gpu{};
  shared_ptr<string> inputFileUrl{};
  shared_ptr<string> jobQueue{};
  shared_ptr<string> mem{};
  shared_ptr<string> name{};
  shared_ptr<long> node{};
  shared_ptr<string> packagePath{};
  shared_ptr<string> postCmdLine{};
  shared_ptr<long> priority{};
  shared_ptr<bool> reRunable{};
  shared_ptr<string> runasUser{};
  shared_ptr<string> runasUserPassword{};
  shared_ptr<string> stderrRedirectPath{};
  shared_ptr<string> stdoutRedirectPath{};
  shared_ptr<long> task{};
  shared_ptr<long> thread{};
  shared_ptr<string> unzipCmd{};
  shared_ptr<string> variables{};

  SubmitJobRequest() {}

  explicit SubmitJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayRequest) {
      res["ArrayRequest"] = boost::any(*arrayRequest);
    }
    if (clockTime) {
      res["ClockTime"] = boost::any(*clockTime);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (commandLine) {
      res["CommandLine"] = boost::any(*commandLine);
    }
    if (containerId) {
      res["ContainerId"] = boost::any(*containerId);
    }
    if (gpu) {
      res["Gpu"] = boost::any(*gpu);
    }
    if (inputFileUrl) {
      res["InputFileUrl"] = boost::any(*inputFileUrl);
    }
    if (jobQueue) {
      res["JobQueue"] = boost::any(*jobQueue);
    }
    if (mem) {
      res["Mem"] = boost::any(*mem);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (node) {
      res["Node"] = boost::any(*node);
    }
    if (packagePath) {
      res["PackagePath"] = boost::any(*packagePath);
    }
    if (postCmdLine) {
      res["PostCmdLine"] = boost::any(*postCmdLine);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (reRunable) {
      res["ReRunable"] = boost::any(*reRunable);
    }
    if (runasUser) {
      res["RunasUser"] = boost::any(*runasUser);
    }
    if (runasUserPassword) {
      res["RunasUserPassword"] = boost::any(*runasUserPassword);
    }
    if (stderrRedirectPath) {
      res["StderrRedirectPath"] = boost::any(*stderrRedirectPath);
    }
    if (stdoutRedirectPath) {
      res["StdoutRedirectPath"] = boost::any(*stdoutRedirectPath);
    }
    if (task) {
      res["Task"] = boost::any(*task);
    }
    if (thread) {
      res["Thread"] = boost::any(*thread);
    }
    if (unzipCmd) {
      res["UnzipCmd"] = boost::any(*unzipCmd);
    }
    if (variables) {
      res["Variables"] = boost::any(*variables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayRequest") != m.end() && !m["ArrayRequest"].empty()) {
      arrayRequest = make_shared<string>(boost::any_cast<string>(m["ArrayRequest"]));
    }
    if (m.find("ClockTime") != m.end() && !m["ClockTime"].empty()) {
      clockTime = make_shared<string>(boost::any_cast<string>(m["ClockTime"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("CommandLine") != m.end() && !m["CommandLine"].empty()) {
      commandLine = make_shared<string>(boost::any_cast<string>(m["CommandLine"]));
    }
    if (m.find("ContainerId") != m.end() && !m["ContainerId"].empty()) {
      containerId = make_shared<string>(boost::any_cast<string>(m["ContainerId"]));
    }
    if (m.find("Gpu") != m.end() && !m["Gpu"].empty()) {
      gpu = make_shared<long>(boost::any_cast<long>(m["Gpu"]));
    }
    if (m.find("InputFileUrl") != m.end() && !m["InputFileUrl"].empty()) {
      inputFileUrl = make_shared<string>(boost::any_cast<string>(m["InputFileUrl"]));
    }
    if (m.find("JobQueue") != m.end() && !m["JobQueue"].empty()) {
      jobQueue = make_shared<string>(boost::any_cast<string>(m["JobQueue"]));
    }
    if (m.find("Mem") != m.end() && !m["Mem"].empty()) {
      mem = make_shared<string>(boost::any_cast<string>(m["Mem"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      node = make_shared<long>(boost::any_cast<long>(m["Node"]));
    }
    if (m.find("PackagePath") != m.end() && !m["PackagePath"].empty()) {
      packagePath = make_shared<string>(boost::any_cast<string>(m["PackagePath"]));
    }
    if (m.find("PostCmdLine") != m.end() && !m["PostCmdLine"].empty()) {
      postCmdLine = make_shared<string>(boost::any_cast<string>(m["PostCmdLine"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("ReRunable") != m.end() && !m["ReRunable"].empty()) {
      reRunable = make_shared<bool>(boost::any_cast<bool>(m["ReRunable"]));
    }
    if (m.find("RunasUser") != m.end() && !m["RunasUser"].empty()) {
      runasUser = make_shared<string>(boost::any_cast<string>(m["RunasUser"]));
    }
    if (m.find("RunasUserPassword") != m.end() && !m["RunasUserPassword"].empty()) {
      runasUserPassword = make_shared<string>(boost::any_cast<string>(m["RunasUserPassword"]));
    }
    if (m.find("StderrRedirectPath") != m.end() && !m["StderrRedirectPath"].empty()) {
      stderrRedirectPath = make_shared<string>(boost::any_cast<string>(m["StderrRedirectPath"]));
    }
    if (m.find("StdoutRedirectPath") != m.end() && !m["StdoutRedirectPath"].empty()) {
      stdoutRedirectPath = make_shared<string>(boost::any_cast<string>(m["StdoutRedirectPath"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      task = make_shared<long>(boost::any_cast<long>(m["Task"]));
    }
    if (m.find("Thread") != m.end() && !m["Thread"].empty()) {
      thread = make_shared<long>(boost::any_cast<long>(m["Thread"]));
    }
    if (m.find("UnzipCmd") != m.end() && !m["UnzipCmd"].empty()) {
      unzipCmd = make_shared<string>(boost::any_cast<string>(m["UnzipCmd"]));
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      variables = make_shared<string>(boost::any_cast<string>(m["Variables"]));
    }
  }


  virtual ~SubmitJobRequest() = default;
};
class SubmitJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  SubmitJobResponseBody() {}

  explicit SubmitJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitJobResponseBody() = default;
};
class SubmitJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitJobResponseBody> body{};

  SubmitJobResponse() {}

  explicit SubmitJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitJobResponse() = default;
};
class SyncUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> regionId{};

  SyncUsersRequest() {}

  explicit SyncUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SyncUsersRequest() = default;
};
class SyncUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SyncUsersResponseBody() {}

  explicit SyncUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SyncUsersResponseBody() = default;
};
class SyncUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SyncUsersResponseBody> body{};

  SyncUsersResponse() {}

  explicit SyncUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SyncUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncUsersResponseBody>(model1);
      }
    }
  }


  virtual ~SyncUsersResponse() = default;
};
class UninstallSoftwareRequest : public Darabonba::Model {
public:
  shared_ptr<string> application{};
  shared_ptr<string> clusterId{};

  UninstallSoftwareRequest() {}

  explicit UninstallSoftwareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      res["Application"] = boost::any(*application);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      application = make_shared<string>(boost::any_cast<string>(m["Application"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~UninstallSoftwareRequest() = default;
};
class UninstallSoftwareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UninstallSoftwareResponseBody() {}

  explicit UninstallSoftwareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UninstallSoftwareResponseBody() = default;
};
class UninstallSoftwareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UninstallSoftwareResponseBody> body{};

  UninstallSoftwareResponse() {}

  explicit UninstallSoftwareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UninstallSoftwareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UninstallSoftwareResponseBody>(model1);
      }
    }
  }


  virtual ~UninstallSoftwareResponse() = default;
};
class UpdateClusterVolumesRequestAdditionalVolumesRoles : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  UpdateClusterVolumesRequestAdditionalVolumesRoles() {}

  explicit UpdateClusterVolumesRequestAdditionalVolumesRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateClusterVolumesRequestAdditionalVolumesRoles() = default;
};
class UpdateClusterVolumesRequestAdditionalVolumes : public Darabonba::Model {
public:
  shared_ptr<string> jobQueue{};
  shared_ptr<string> localDirectory{};
  shared_ptr<string> location{};
  shared_ptr<string> remoteDirectory{};
  shared_ptr<vector<UpdateClusterVolumesRequestAdditionalVolumesRoles>> roles{};
  shared_ptr<string> volumeId{};
  shared_ptr<string> volumeMountpoint{};
  shared_ptr<string> volumeProtocol{};
  shared_ptr<string> volumeType{};

  UpdateClusterVolumesRequestAdditionalVolumes() {}

  explicit UpdateClusterVolumesRequestAdditionalVolumes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobQueue) {
      res["JobQueue"] = boost::any(*jobQueue);
    }
    if (localDirectory) {
      res["LocalDirectory"] = boost::any(*localDirectory);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (remoteDirectory) {
      res["RemoteDirectory"] = boost::any(*remoteDirectory);
    }
    if (roles) {
      vector<boost::any> temp1;
      for(auto item1:*roles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Roles"] = boost::any(temp1);
    }
    if (volumeId) {
      res["VolumeId"] = boost::any(*volumeId);
    }
    if (volumeMountpoint) {
      res["VolumeMountpoint"] = boost::any(*volumeMountpoint);
    }
    if (volumeProtocol) {
      res["VolumeProtocol"] = boost::any(*volumeProtocol);
    }
    if (volumeType) {
      res["VolumeType"] = boost::any(*volumeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobQueue") != m.end() && !m["JobQueue"].empty()) {
      jobQueue = make_shared<string>(boost::any_cast<string>(m["JobQueue"]));
    }
    if (m.find("LocalDirectory") != m.end() && !m["LocalDirectory"].empty()) {
      localDirectory = make_shared<string>(boost::any_cast<string>(m["LocalDirectory"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("RemoteDirectory") != m.end() && !m["RemoteDirectory"].empty()) {
      remoteDirectory = make_shared<string>(boost::any_cast<string>(m["RemoteDirectory"]));
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<UpdateClusterVolumesRequestAdditionalVolumesRoles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Roles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateClusterVolumesRequestAdditionalVolumesRoles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roles = make_shared<vector<UpdateClusterVolumesRequestAdditionalVolumesRoles>>(expect1);
      }
    }
    if (m.find("VolumeId") != m.end() && !m["VolumeId"].empty()) {
      volumeId = make_shared<string>(boost::any_cast<string>(m["VolumeId"]));
    }
    if (m.find("VolumeMountpoint") != m.end() && !m["VolumeMountpoint"].empty()) {
      volumeMountpoint = make_shared<string>(boost::any_cast<string>(m["VolumeMountpoint"]));
    }
    if (m.find("VolumeProtocol") != m.end() && !m["VolumeProtocol"].empty()) {
      volumeProtocol = make_shared<string>(boost::any_cast<string>(m["VolumeProtocol"]));
    }
    if (m.find("VolumeType") != m.end() && !m["VolumeType"].empty()) {
      volumeType = make_shared<string>(boost::any_cast<string>(m["VolumeType"]));
    }
  }


  virtual ~UpdateClusterVolumesRequestAdditionalVolumes() = default;
};
class UpdateClusterVolumesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateClusterVolumesRequestAdditionalVolumes>> additionalVolumes{};
  shared_ptr<string> clusterId{};

  UpdateClusterVolumesRequest() {}

  explicit UpdateClusterVolumesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalVolumes) {
      vector<boost::any> temp1;
      for(auto item1:*additionalVolumes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AdditionalVolumes"] = boost::any(temp1);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalVolumes") != m.end() && !m["AdditionalVolumes"].empty()) {
      if (typeid(vector<boost::any>) == m["AdditionalVolumes"].type()) {
        vector<UpdateClusterVolumesRequestAdditionalVolumes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AdditionalVolumes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateClusterVolumesRequestAdditionalVolumes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        additionalVolumes = make_shared<vector<UpdateClusterVolumesRequestAdditionalVolumes>>(expect1);
      }
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~UpdateClusterVolumesRequest() = default;
};
class UpdateClusterVolumesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateClusterVolumesResponseBody() {}

  explicit UpdateClusterVolumesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateClusterVolumesResponseBody() = default;
};
class UpdateClusterVolumesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateClusterVolumesResponseBody> body{};

  UpdateClusterVolumesResponse() {}

  explicit UpdateClusterVolumesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateClusterVolumesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateClusterVolumesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateClusterVolumesResponse() = default;
};
class UpdateQueueConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> computeInstanceType{};
  shared_ptr<string> queueName{};
  shared_ptr<string> resourceGroupId{};

  UpdateQueueConfigRequest() {}

  explicit UpdateQueueConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (computeInstanceType) {
      res["ComputeInstanceType"] = boost::any(*computeInstanceType);
    }
    if (queueName) {
      res["QueueName"] = boost::any(*queueName);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ComputeInstanceType") != m.end() && !m["ComputeInstanceType"].empty()) {
      computeInstanceType = make_shared<string>(boost::any_cast<string>(m["ComputeInstanceType"]));
    }
    if (m.find("QueueName") != m.end() && !m["QueueName"].empty()) {
      queueName = make_shared<string>(boost::any_cast<string>(m["QueueName"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~UpdateQueueConfigRequest() = default;
};
class UpdateQueueConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateQueueConfigResponseBody() {}

  explicit UpdateQueueConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateQueueConfigResponseBody() = default;
};
class UpdateQueueConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateQueueConfigResponseBody> body{};

  UpdateQueueConfigResponse() {}

  explicit UpdateQueueConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateQueueConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateQueueConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateQueueConfigResponse() = default;
};
class UpgradeClientRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientVersion{};
  shared_ptr<string> clusterId{};

  UpgradeClientRequest() {}

  explicit UpgradeClientRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~UpgradeClientRequest() = default;
};
class UpgradeClientResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeClientResponseBody() {}

  explicit UpgradeClientResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeClientResponseBody() = default;
};
class UpgradeClientResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeClientResponseBody> body{};

  UpgradeClientResponse() {}

  explicit UpgradeClientResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeClientResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeClientResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeClientResponse() = default;
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
  AddContainerAppResponse addContainerAppWithOptions(shared_ptr<AddContainerAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddContainerAppResponse addContainerApp(shared_ptr<AddContainerAppRequest> request);
  AddExistedNodesResponse addExistedNodesWithOptions(shared_ptr<AddExistedNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddExistedNodesResponse addExistedNodes(shared_ptr<AddExistedNodesRequest> request);
  AddLocalNodesResponse addLocalNodesWithOptions(shared_ptr<AddLocalNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddLocalNodesResponse addLocalNodes(shared_ptr<AddLocalNodesRequest> request);
  AddNodesResponse addNodesWithOptions(shared_ptr<AddNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddNodesResponse addNodes(shared_ptr<AddNodesRequest> request);
  AddQueueResponse addQueueWithOptions(shared_ptr<AddQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddQueueResponse addQueue(shared_ptr<AddQueueRequest> request);
  AddSecurityGroupResponse addSecurityGroupWithOptions(shared_ptr<AddSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSecurityGroupResponse addSecurityGroup(shared_ptr<AddSecurityGroupRequest> request);
  AddUsersResponse addUsersWithOptions(shared_ptr<AddUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUsersResponse addUsers(shared_ptr<AddUsersRequest> request);
  ApplyNodesResponse applyNodesWithOptions(shared_ptr<ApplyNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyNodesResponse applyNodes(shared_ptr<ApplyNodesRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<CreateClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<CreateClusterRequest> request);
  CreateGWSClusterResponse createGWSClusterWithOptions(shared_ptr<CreateGWSClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGWSClusterResponse createGWSCluster(shared_ptr<CreateGWSClusterRequest> request);
  CreateGWSImageResponse createGWSImageWithOptions(shared_ptr<CreateGWSImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGWSImageResponse createGWSImage(shared_ptr<CreateGWSImageRequest> request);
  CreateGWSInstanceResponse createGWSInstanceWithOptions(shared_ptr<CreateGWSInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGWSInstanceResponse createGWSInstance(shared_ptr<CreateGWSInstanceRequest> request);
  CreateHybridClusterResponse createHybridClusterWithOptions(shared_ptr<CreateHybridClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHybridClusterResponse createHybridCluster(shared_ptr<CreateHybridClusterRequest> request);
  CreateJobFileResponse createJobFileWithOptions(shared_ptr<CreateJobFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateJobFileResponse createJobFile(shared_ptr<CreateJobFileRequest> request);
  CreateJobTemplateResponse createJobTemplateWithOptions(shared_ptr<CreateJobTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateJobTemplateResponse createJobTemplate(shared_ptr<CreateJobTemplateRequest> request);
  DeleteClusterResponse deleteClusterWithOptions(shared_ptr<DeleteClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClusterResponse deleteCluster(shared_ptr<DeleteClusterRequest> request);
  DeleteContainerAppsResponse deleteContainerAppsWithOptions(shared_ptr<DeleteContainerAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteContainerAppsResponse deleteContainerApps(shared_ptr<DeleteContainerAppsRequest> request);
  DeleteGWSClusterResponse deleteGWSClusterWithOptions(shared_ptr<DeleteGWSClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGWSClusterResponse deleteGWSCluster(shared_ptr<DeleteGWSClusterRequest> request);
  DeleteGWSInstanceResponse deleteGWSInstanceWithOptions(shared_ptr<DeleteGWSInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGWSInstanceResponse deleteGWSInstance(shared_ptr<DeleteGWSInstanceRequest> request);
  DeleteImageResponse deleteImageWithOptions(shared_ptr<DeleteImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImageResponse deleteImage(shared_ptr<DeleteImageRequest> request);
  DeleteJobTemplatesResponse deleteJobTemplatesWithOptions(shared_ptr<DeleteJobTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteJobTemplatesResponse deleteJobTemplates(shared_ptr<DeleteJobTemplatesRequest> request);
  DeleteJobsResponse deleteJobsWithOptions(shared_ptr<DeleteJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteJobsResponse deleteJobs(shared_ptr<DeleteJobsRequest> request);
  DeleteNodesResponse deleteNodesWithOptions(shared_ptr<DeleteNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNodesResponse deleteNodes(shared_ptr<DeleteNodesRequest> request);
  DeleteQueueResponse deleteQueueWithOptions(shared_ptr<DeleteQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteQueueResponse deleteQueue(shared_ptr<DeleteQueueRequest> request);
  DeleteSecurityGroupResponse deleteSecurityGroupWithOptions(shared_ptr<DeleteSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSecurityGroupResponse deleteSecurityGroup(shared_ptr<DeleteSecurityGroupRequest> request);
  DeleteUsersResponse deleteUsersWithOptions(shared_ptr<DeleteUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUsersResponse deleteUsers(shared_ptr<DeleteUsersRequest> request);
  DescribeAutoScaleConfigResponse describeAutoScaleConfigWithOptions(shared_ptr<DescribeAutoScaleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAutoScaleConfigResponse describeAutoScaleConfig(shared_ptr<DescribeAutoScaleConfigRequest> request);
  DescribeClusterResponse describeClusterWithOptions(shared_ptr<DescribeClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterResponse describeCluster(shared_ptr<DescribeClusterRequest> request);
  DescribeContainerAppResponse describeContainerAppWithOptions(shared_ptr<DescribeContainerAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeContainerAppResponse describeContainerApp(shared_ptr<DescribeContainerAppRequest> request);
  DescribeGWSClusterPolicyResponse describeGWSClusterPolicyWithOptions(shared_ptr<DescribeGWSClusterPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGWSClusterPolicyResponse describeGWSClusterPolicy(shared_ptr<DescribeGWSClusterPolicyRequest> request);
  DescribeGWSClustersResponse describeGWSClustersWithOptions(shared_ptr<DescribeGWSClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGWSClustersResponse describeGWSClusters(shared_ptr<DescribeGWSClustersRequest> request);
  DescribeGWSImagesResponse describeGWSImagesWithOptions(shared_ptr<DescribeGWSImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGWSImagesResponse describeGWSImages(shared_ptr<DescribeGWSImagesRequest> request);
  DescribeGWSInstancesResponse describeGWSInstancesWithOptions(shared_ptr<DescribeGWSInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGWSInstancesResponse describeGWSInstances(shared_ptr<DescribeGWSInstancesRequest> request);
  DescribeImageResponse describeImageWithOptions(shared_ptr<DescribeImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImageResponse describeImage(shared_ptr<DescribeImageRequest> request);
  DescribeImageGatewayConfigResponse describeImageGatewayConfigWithOptions(shared_ptr<DescribeImageGatewayConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImageGatewayConfigResponse describeImageGatewayConfig(shared_ptr<DescribeImageGatewayConfigRequest> request);
  DescribeImagePriceResponse describeImagePriceWithOptions(shared_ptr<DescribeImagePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImagePriceResponse describeImagePrice(shared_ptr<DescribeImagePriceRequest> request);
  DescribeJobResponse describeJobWithOptions(shared_ptr<DescribeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeJobResponse describeJob(shared_ptr<DescribeJobRequest> request);
  DescribeNFSClientStatusResponse describeNFSClientStatusWithOptions(shared_ptr<DescribeNFSClientStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNFSClientStatusResponse describeNFSClientStatus(shared_ptr<DescribeNFSClientStatusRequest> request);
  DescribePriceResponse describePriceWithOptions(shared_ptr<DescribePriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePriceResponse describePrice(shared_ptr<DescribePriceRequest> request);
  EcdDeleteDesktopsResponse ecdDeleteDesktopsWithOptions(shared_ptr<EcdDeleteDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EcdDeleteDesktopsResponse ecdDeleteDesktops(shared_ptr<EcdDeleteDesktopsRequest> request);
  EditJobTemplateResponse editJobTemplateWithOptions(shared_ptr<EditJobTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditJobTemplateResponse editJobTemplate(shared_ptr<EditJobTemplateRequest> request);
  GetAccountingReportResponse getAccountingReportWithOptions(shared_ptr<GetAccountingReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAccountingReportResponse getAccountingReport(shared_ptr<GetAccountingReportRequest> request);
  GetAutoScaleConfigResponse getAutoScaleConfigWithOptions(shared_ptr<GetAutoScaleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAutoScaleConfigResponse getAutoScaleConfig(shared_ptr<GetAutoScaleConfigRequest> request);
  GetCloudMetricLogsResponse getCloudMetricLogsWithOptions(shared_ptr<GetCloudMetricLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCloudMetricLogsResponse getCloudMetricLogs(shared_ptr<GetCloudMetricLogsRequest> request);
  GetCloudMetricProfilingResponse getCloudMetricProfilingWithOptions(shared_ptr<GetCloudMetricProfilingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCloudMetricProfilingResponse getCloudMetricProfiling(shared_ptr<GetCloudMetricProfilingRequest> request);
  GetClusterVolumesResponse getClusterVolumesWithOptions(shared_ptr<GetClusterVolumesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClusterVolumesResponse getClusterVolumes(shared_ptr<GetClusterVolumesRequest> request);
  GetGWSConnectTicketResponse getGWSConnectTicketWithOptions(shared_ptr<GetGWSConnectTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGWSConnectTicketResponse getGWSConnectTicket(shared_ptr<GetGWSConnectTicketRequest> request);
  GetHealthMonitorLogsResponse getHealthMonitorLogsWithOptions(shared_ptr<GetHealthMonitorLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHealthMonitorLogsResponse getHealthMonitorLogs(shared_ptr<GetHealthMonitorLogsRequest> request);
  GetHybridClusterConfigResponse getHybridClusterConfigWithOptions(shared_ptr<GetHybridClusterConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHybridClusterConfigResponse getHybridClusterConfig(shared_ptr<GetHybridClusterConfigRequest> request);
  GetIfEcsTypeSupportHtConfigResponse getIfEcsTypeSupportHtConfigWithOptions(shared_ptr<GetIfEcsTypeSupportHtConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIfEcsTypeSupportHtConfigResponse getIfEcsTypeSupportHtConfig(shared_ptr<GetIfEcsTypeSupportHtConfigRequest> request);
  GetSchedulerInfoResponse getSchedulerInfoWithOptions(shared_ptr<GetSchedulerInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSchedulerInfoResponse getSchedulerInfo(shared_ptr<GetSchedulerInfoRequest> request);
  GetVisualServiceStatusResponse getVisualServiceStatusWithOptions(shared_ptr<GetVisualServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVisualServiceStatusResponse getVisualServiceStatus(shared_ptr<GetVisualServiceStatusRequest> request);
  GetWorkbenchTokenResponse getWorkbenchTokenWithOptions(shared_ptr<GetWorkbenchTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkbenchTokenResponse getWorkbenchToken(shared_ptr<GetWorkbenchTokenRequest> request);
  InitializeEHPCResponse initializeEHPCWithOptions(shared_ptr<InitializeEHPCRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitializeEHPCResponse initializeEHPC(shared_ptr<InitializeEHPCRequest> request);
  InstallSoftwareResponse installSoftwareWithOptions(shared_ptr<InstallSoftwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InstallSoftwareResponse installSoftware(shared_ptr<InstallSoftwareRequest> request);
  InvokeShellCommandResponse invokeShellCommandWithOptions(shared_ptr<InvokeShellCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvokeShellCommandResponse invokeShellCommand(shared_ptr<InvokeShellCommandRequest> request);
  ListAvailableEcsTypesResponse listAvailableEcsTypesWithOptions(shared_ptr<ListAvailableEcsTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAvailableEcsTypesResponse listAvailableEcsTypes(shared_ptr<ListAvailableEcsTypesRequest> request);
  ListCloudMetricProfilingsResponse listCloudMetricProfilingsWithOptions(shared_ptr<ListCloudMetricProfilingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCloudMetricProfilingsResponse listCloudMetricProfilings(shared_ptr<ListCloudMetricProfilingsRequest> request);
  ListClusterLogsResponse listClusterLogsWithOptions(shared_ptr<ListClusterLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterLogsResponse listClusterLogs(shared_ptr<ListClusterLogsRequest> request);
  ListClustersResponse listClustersWithOptions(shared_ptr<ListClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClustersResponse listClusters(shared_ptr<ListClustersRequest> request);
  ListClustersMetaResponse listClustersMetaWithOptions(shared_ptr<ListClustersMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClustersMetaResponse listClustersMeta(shared_ptr<ListClustersMetaRequest> request);
  ListCommandsResponse listCommandsWithOptions(shared_ptr<ListCommandsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCommandsResponse listCommands(shared_ptr<ListCommandsRequest> request);
  ListContainerAppsResponse listContainerAppsWithOptions(shared_ptr<ListContainerAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListContainerAppsResponse listContainerApps(shared_ptr<ListContainerAppsRequest> request);
  ListContainerImagesResponse listContainerImagesWithOptions(shared_ptr<ListContainerImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListContainerImagesResponse listContainerImages(shared_ptr<ListContainerImagesRequest> request);
  ListCpfsFileSystemsResponse listCpfsFileSystemsWithOptions(shared_ptr<ListCpfsFileSystemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCpfsFileSystemsResponse listCpfsFileSystems(shared_ptr<ListCpfsFileSystemsRequest> request);
  ListCurrentClientVersionResponse listCurrentClientVersionWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCurrentClientVersionResponse listCurrentClientVersion();
  ListCustomImagesResponse listCustomImagesWithOptions(shared_ptr<ListCustomImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCustomImagesResponse listCustomImages(shared_ptr<ListCustomImagesRequest> request);
  ListFileSystemWithMountTargetsResponse listFileSystemWithMountTargetsWithOptions(shared_ptr<ListFileSystemWithMountTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFileSystemWithMountTargetsResponse listFileSystemWithMountTargets(shared_ptr<ListFileSystemWithMountTargetsRequest> request);
  ListImagesResponse listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImagesResponse listImages(shared_ptr<ListImagesRequest> request);
  ListInstalledSoftwareResponse listInstalledSoftwareWithOptions(shared_ptr<ListInstalledSoftwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstalledSoftwareResponse listInstalledSoftware(shared_ptr<ListInstalledSoftwareRequest> request);
  ListInvocationResultsResponse listInvocationResultsWithOptions(shared_ptr<ListInvocationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInvocationResultsResponse listInvocationResults(shared_ptr<ListInvocationResultsRequest> request);
  ListInvocationStatusResponse listInvocationStatusWithOptions(shared_ptr<ListInvocationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInvocationStatusResponse listInvocationStatus(shared_ptr<ListInvocationStatusRequest> request);
  ListJobTemplatesResponse listJobTemplatesWithOptions(shared_ptr<ListJobTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobTemplatesResponse listJobTemplates(shared_ptr<ListJobTemplatesRequest> request);
  ListJobsResponse listJobsWithOptions(shared_ptr<ListJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListJobsResponse listJobs(shared_ptr<ListJobsRequest> request);
  ListNodesResponse listNodesWithOptions(shared_ptr<ListNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodesResponse listNodes(shared_ptr<ListNodesRequest> request);
  ListNodesByQueueResponse listNodesByQueueWithOptions(shared_ptr<ListNodesByQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodesByQueueResponse listNodesByQueue(shared_ptr<ListNodesByQueueRequest> request);
  ListNodesNoPagingResponse listNodesNoPagingWithOptions(shared_ptr<ListNodesNoPagingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodesNoPagingResponse listNodesNoPaging(shared_ptr<ListNodesNoPagingRequest> request);
  ListPreferredEcsTypesResponse listPreferredEcsTypesWithOptions(shared_ptr<ListPreferredEcsTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPreferredEcsTypesResponse listPreferredEcsTypes(shared_ptr<ListPreferredEcsTypesRequest> request);
  ListQueuesResponse listQueuesWithOptions(shared_ptr<ListQueuesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQueuesResponse listQueues(shared_ptr<ListQueuesRequest> request);
  ListRegionsResponse listRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions();
  ListSecurityGroupsResponse listSecurityGroupsWithOptions(shared_ptr<ListSecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSecurityGroupsResponse listSecurityGroups(shared_ptr<ListSecurityGroupsRequest> request);
  ListSoftwaresResponse listSoftwaresWithOptions(shared_ptr<ListSoftwaresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSoftwaresResponse listSoftwares(shared_ptr<ListSoftwaresRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<ListTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<ListTasksRequest> request);
  ListUsersResponse listUsersWithOptions(shared_ptr<ListUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUsersResponse listUsers(shared_ptr<ListUsersRequest> request);
  ListVolumesResponse listVolumesWithOptions(shared_ptr<ListVolumesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVolumesResponse listVolumes(shared_ptr<ListVolumesRequest> request);
  ModifyClusterAttributesResponse modifyClusterAttributesWithOptions(shared_ptr<ModifyClusterAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterAttributesResponse modifyClusterAttributes(shared_ptr<ModifyClusterAttributesRequest> request);
  ModifyContainerAppAttributesResponse modifyContainerAppAttributesWithOptions(shared_ptr<ModifyContainerAppAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyContainerAppAttributesResponse modifyContainerAppAttributes(shared_ptr<ModifyContainerAppAttributesRequest> request);
  ModifyImageGatewayConfigResponse modifyImageGatewayConfigWithOptions(shared_ptr<ModifyImageGatewayConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyImageGatewayConfigResponse modifyImageGatewayConfig(shared_ptr<ModifyImageGatewayConfigRequest> request);
  ModifyUserGroupsResponse modifyUserGroupsWithOptions(shared_ptr<ModifyUserGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUserGroupsResponse modifyUserGroups(shared_ptr<ModifyUserGroupsRequest> request);
  ModifyUserPasswordsResponse modifyUserPasswordsWithOptions(shared_ptr<ModifyUserPasswordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUserPasswordsResponse modifyUserPasswords(shared_ptr<ModifyUserPasswordsRequest> request);
  ModifyVisualServicePasswdResponse modifyVisualServicePasswdWithOptions(shared_ptr<ModifyVisualServicePasswdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyVisualServicePasswdResponse modifyVisualServicePasswd(shared_ptr<ModifyVisualServicePasswdRequest> request);
  MountNFSResponse mountNFSWithOptions(shared_ptr<MountNFSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MountNFSResponse mountNFS(shared_ptr<MountNFSRequest> request);
  PullImageResponse pullImageWithOptions(shared_ptr<PullImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PullImageResponse pullImage(shared_ptr<PullImageRequest> request);
  QueryServicePackAndPriceResponse queryServicePackAndPriceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryServicePackAndPriceResponse queryServicePackAndPrice();
  RecoverClusterResponse recoverClusterWithOptions(shared_ptr<RecoverClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecoverClusterResponse recoverCluster(shared_ptr<RecoverClusterRequest> request);
  RerunJobsResponse rerunJobsWithOptions(shared_ptr<RerunJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RerunJobsResponse rerunJobs(shared_ptr<RerunJobsRequest> request);
  ResetNodesResponse resetNodesWithOptions(shared_ptr<ResetNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetNodesResponse resetNodes(shared_ptr<ResetNodesRequest> request);
  RunCloudMetricProfilingResponse runCloudMetricProfilingWithOptions(shared_ptr<RunCloudMetricProfilingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunCloudMetricProfilingResponse runCloudMetricProfiling(shared_ptr<RunCloudMetricProfilingRequest> request);
  SetAutoScaleConfigResponse setAutoScaleConfigWithOptions(shared_ptr<SetAutoScaleConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAutoScaleConfigResponse setAutoScaleConfig(shared_ptr<SetAutoScaleConfigRequest> request);
  SetGWSClusterPolicyResponse setGWSClusterPolicyWithOptions(shared_ptr<SetGWSClusterPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetGWSClusterPolicyResponse setGWSClusterPolicy(shared_ptr<SetGWSClusterPolicyRequest> request);
  SetGWSInstanceNameResponse setGWSInstanceNameWithOptions(shared_ptr<SetGWSInstanceNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetGWSInstanceNameResponse setGWSInstanceName(shared_ptr<SetGWSInstanceNameRequest> request);
  SetGWSInstanceUserResponse setGWSInstanceUserWithOptions(shared_ptr<SetGWSInstanceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetGWSInstanceUserResponse setGWSInstanceUser(shared_ptr<SetGWSInstanceUserRequest> request);
  SetQueueResponse setQueueWithOptions(shared_ptr<SetQueueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetQueueResponse setQueue(shared_ptr<SetQueueRequest> request);
  SetSchedulerInfoResponse setSchedulerInfoWithOptions(shared_ptr<SetSchedulerInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetSchedulerInfoResponse setSchedulerInfo(shared_ptr<SetSchedulerInfoRequest> request);
  StartClusterResponse startClusterWithOptions(shared_ptr<StartClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartClusterResponse startCluster(shared_ptr<StartClusterRequest> request);
  StartGWSInstanceResponse startGWSInstanceWithOptions(shared_ptr<StartGWSInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartGWSInstanceResponse startGWSInstance(shared_ptr<StartGWSInstanceRequest> request);
  StartNodesResponse startNodesWithOptions(shared_ptr<StartNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartNodesResponse startNodes(shared_ptr<StartNodesRequest> request);
  StartVisualServiceResponse startVisualServiceWithOptions(shared_ptr<StartVisualServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartVisualServiceResponse startVisualService(shared_ptr<StartVisualServiceRequest> request);
  StopClusterResponse stopClusterWithOptions(shared_ptr<StopClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopClusterResponse stopCluster(shared_ptr<StopClusterRequest> request);
  StopGWSInstanceResponse stopGWSInstanceWithOptions(shared_ptr<StopGWSInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopGWSInstanceResponse stopGWSInstance(shared_ptr<StopGWSInstanceRequest> request);
  StopJobsResponse stopJobsWithOptions(shared_ptr<StopJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopJobsResponse stopJobs(shared_ptr<StopJobsRequest> request);
  StopNodesResponse stopNodesWithOptions(shared_ptr<StopNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopNodesResponse stopNodes(shared_ptr<StopNodesRequest> request);
  StopVisualServiceResponse stopVisualServiceWithOptions(shared_ptr<StopVisualServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopVisualServiceResponse stopVisualService(shared_ptr<StopVisualServiceRequest> request);
  SubmitJobResponse submitJobWithOptions(shared_ptr<SubmitJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitJobResponse submitJob(shared_ptr<SubmitJobRequest> request);
  SyncUsersResponse syncUsersWithOptions(shared_ptr<SyncUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncUsersResponse syncUsers(shared_ptr<SyncUsersRequest> request);
  UninstallSoftwareResponse uninstallSoftwareWithOptions(shared_ptr<UninstallSoftwareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UninstallSoftwareResponse uninstallSoftware(shared_ptr<UninstallSoftwareRequest> request);
  UpdateClusterVolumesResponse updateClusterVolumesWithOptions(shared_ptr<UpdateClusterVolumesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateClusterVolumesResponse updateClusterVolumes(shared_ptr<UpdateClusterVolumesRequest> request);
  UpdateQueueConfigResponse updateQueueConfigWithOptions(shared_ptr<UpdateQueueConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateQueueConfigResponse updateQueueConfig(shared_ptr<UpdateQueueConfigRequest> request);
  UpgradeClientResponse upgradeClientWithOptions(shared_ptr<UpgradeClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeClientResponse upgradeClient(shared_ptr<UpgradeClientRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_EHPC20180412

#endif
