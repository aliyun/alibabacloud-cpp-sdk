// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ESS20160722_H_
#define ALIBABACLOUD_ESS20160722_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ess20160722 {
class AttachInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};

  AttachInstancesRequest() {}

  explicit AttachInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~AttachInstancesRequest() = default;
};
class AttachInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingActivityId{};

  AttachInstancesResponseBody() {}

  explicit AttachInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
  }


  virtual ~AttachInstancesResponseBody() = default;
};
class AttachInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachInstancesResponseBody> body{};

  AttachInstancesResponse() {}

  explicit AttachInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~AttachInstancesResponse() = default;
};
class CreateScalingConfigurationRequestDataDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> deleteWithInstance{};
  shared_ptr<string> device{};
  shared_ptr<long> size{};
  shared_ptr<string> snapshotId{};

  CreateScalingConfigurationRequestDataDisk() {}

  explicit CreateScalingConfigurationRequestDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      deleteWithInstance = make_shared<string>(boost::any_cast<string>(m["DeleteWithInstance"]));
    }
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~CreateScalingConfigurationRequestDataDisk() = default;
};
class CreateScalingConfigurationRequestSystemDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<long> size{};

  CreateScalingConfigurationRequestSystemDisk() {}

  explicit CreateScalingConfigurationRequestSystemDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
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
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~CreateScalingConfigurationRequestSystemDisk() = default;
};
class CreateScalingConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateScalingConfigurationRequestDataDisk>> dataDisk{};
  shared_ptr<CreateScalingConfigurationRequestSystemDisk> systemDisk{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthIn{};
  shared_ptr<long> internetMaxBandwidthOut{};
  shared_ptr<string> ioOptimized{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingConfigurationName{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> securityGroupId{};

  CreateScalingConfigurationRequest() {}

  explicit CreateScalingConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisk"] = boost::any(temp1);
    }
    if (systemDisk) {
      res["SystemDisk"] = systemDisk ? boost::any(systemDisk->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
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
    if (ioOptimized) {
      res["IoOptimized"] = boost::any(*ioOptimized);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (scalingConfigurationName) {
      res["ScalingConfigurationName"] = boost::any(*scalingConfigurationName);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDisk") != m.end() && !m["DataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisk"].type()) {
        vector<CreateScalingConfigurationRequestDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateScalingConfigurationRequestDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<CreateScalingConfigurationRequestDataDisk>>(expect1);
      }
    }
    if (m.find("SystemDisk") != m.end() && !m["SystemDisk"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemDisk"].type()) {
        CreateScalingConfigurationRequestSystemDisk model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemDisk"]));
        systemDisk = make_shared<CreateScalingConfigurationRequestSystemDisk>(model1);
      }
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
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
    if (m.find("IoOptimized") != m.end() && !m["IoOptimized"].empty()) {
      ioOptimized = make_shared<string>(boost::any_cast<string>(m["IoOptimized"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("ScalingConfigurationName") != m.end() && !m["ScalingConfigurationName"].empty()) {
      scalingConfigurationName = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationName"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
  }


  virtual ~CreateScalingConfigurationRequest() = default;
};
class CreateScalingConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingConfigurationId{};

  CreateScalingConfigurationResponseBody() {}

  explicit CreateScalingConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      scalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationId"]));
    }
  }


  virtual ~CreateScalingConfigurationResponseBody() = default;
};
class CreateScalingConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateScalingConfigurationResponseBody> body{};

  CreateScalingConfigurationResponse() {}

  explicit CreateScalingConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScalingConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScalingConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScalingConfigurationResponse() = default;
};
class CreateScalingGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> removalPolicy{};
  shared_ptr<string> DBInstanceIds{};
  shared_ptr<long> defaultCooldown{};
  shared_ptr<string> loadBalancerIds{};
  shared_ptr<long> maxSize{};
  shared_ptr<long> minSize{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupName{};
  shared_ptr<string> vSwitchId{};

  CreateScalingGroupRequest() {}

  explicit CreateScalingGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (removalPolicy) {
      res["RemovalPolicy"] = boost::any(*removalPolicy);
    }
    if (DBInstanceIds) {
      res["DBInstanceIds"] = boost::any(*DBInstanceIds);
    }
    if (defaultCooldown) {
      res["DefaultCooldown"] = boost::any(*defaultCooldown);
    }
    if (loadBalancerIds) {
      res["LoadBalancerIds"] = boost::any(*loadBalancerIds);
    }
    if (maxSize) {
      res["MaxSize"] = boost::any(*maxSize);
    }
    if (minSize) {
      res["MinSize"] = boost::any(*minSize);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (scalingGroupName) {
      res["ScalingGroupName"] = boost::any(*scalingGroupName);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RemovalPolicy") != m.end() && !m["RemovalPolicy"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RemovalPolicy"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RemovalPolicy"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      removalPolicy = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DBInstanceIds") != m.end() && !m["DBInstanceIds"].empty()) {
      DBInstanceIds = make_shared<string>(boost::any_cast<string>(m["DBInstanceIds"]));
    }
    if (m.find("DefaultCooldown") != m.end() && !m["DefaultCooldown"].empty()) {
      defaultCooldown = make_shared<long>(boost::any_cast<long>(m["DefaultCooldown"]));
    }
    if (m.find("LoadBalancerIds") != m.end() && !m["LoadBalancerIds"].empty()) {
      loadBalancerIds = make_shared<string>(boost::any_cast<string>(m["LoadBalancerIds"]));
    }
    if (m.find("MaxSize") != m.end() && !m["MaxSize"].empty()) {
      maxSize = make_shared<long>(boost::any_cast<long>(m["MaxSize"]));
    }
    if (m.find("MinSize") != m.end() && !m["MinSize"].empty()) {
      minSize = make_shared<long>(boost::any_cast<long>(m["MinSize"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("ScalingGroupName") != m.end() && !m["ScalingGroupName"].empty()) {
      scalingGroupName = make_shared<string>(boost::any_cast<string>(m["ScalingGroupName"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateScalingGroupRequest() = default;
};
class CreateScalingGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingGroupId{};

  CreateScalingGroupResponseBody() {}

  explicit CreateScalingGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~CreateScalingGroupResponseBody() = default;
};
class CreateScalingGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateScalingGroupResponseBody> body{};

  CreateScalingGroupResponse() {}

  explicit CreateScalingGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScalingGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScalingGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScalingGroupResponse() = default;
};
class CreateScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> adjustmentType{};
  shared_ptr<long> adjustmentValue{};
  shared_ptr<long> cooldown{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> scalingRuleName{};

  CreateScalingRuleRequest() {}

  explicit CreateScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adjustmentType) {
      res["AdjustmentType"] = boost::any(*adjustmentType);
    }
    if (adjustmentValue) {
      res["AdjustmentValue"] = boost::any(*adjustmentValue);
    }
    if (cooldown) {
      res["Cooldown"] = boost::any(*cooldown);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdjustmentType") != m.end() && !m["AdjustmentType"].empty()) {
      adjustmentType = make_shared<string>(boost::any_cast<string>(m["AdjustmentType"]));
    }
    if (m.find("AdjustmentValue") != m.end() && !m["AdjustmentValue"].empty()) {
      adjustmentValue = make_shared<long>(boost::any_cast<long>(m["AdjustmentValue"]));
    }
    if (m.find("Cooldown") != m.end() && !m["Cooldown"].empty()) {
      cooldown = make_shared<long>(boost::any_cast<long>(m["Cooldown"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
  }


  virtual ~CreateScalingRuleRequest() = default;
};
class CreateScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingRuleAri{};
  shared_ptr<string> scalingRuleId{};

  CreateScalingRuleResponseBody() {}

  explicit CreateScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingRuleAri) {
      res["ScalingRuleAri"] = boost::any(*scalingRuleAri);
    }
    if (scalingRuleId) {
      res["ScalingRuleId"] = boost::any(*scalingRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingRuleAri") != m.end() && !m["ScalingRuleAri"].empty()) {
      scalingRuleAri = make_shared<string>(boost::any_cast<string>(m["ScalingRuleAri"]));
    }
    if (m.find("ScalingRuleId") != m.end() && !m["ScalingRuleId"].empty()) {
      scalingRuleId = make_shared<string>(boost::any_cast<string>(m["ScalingRuleId"]));
    }
  }


  virtual ~CreateScalingRuleResponseBody() = default;
};
class CreateScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateScalingRuleResponseBody> body{};

  CreateScalingRuleResponse() {}

  explicit CreateScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScalingRuleResponse() = default;
};
class CreateScheduledTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> launchExpirationTime{};
  shared_ptr<string> launchTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> recurrenceEndTime{};
  shared_ptr<string> recurrenceType{};
  shared_ptr<string> recurrenceValue{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scheduledAction{};
  shared_ptr<string> scheduledTaskName{};
  shared_ptr<bool> taskEnabled{};

  CreateScheduledTaskRequest() {}

  explicit CreateScheduledTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (launchExpirationTime) {
      res["LaunchExpirationTime"] = boost::any(*launchExpirationTime);
    }
    if (launchTime) {
      res["LaunchTime"] = boost::any(*launchTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (recurrenceEndTime) {
      res["RecurrenceEndTime"] = boost::any(*recurrenceEndTime);
    }
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValue) {
      res["RecurrenceValue"] = boost::any(*recurrenceValue);
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
    if (scheduledAction) {
      res["ScheduledAction"] = boost::any(*scheduledAction);
    }
    if (scheduledTaskName) {
      res["ScheduledTaskName"] = boost::any(*scheduledTaskName);
    }
    if (taskEnabled) {
      res["TaskEnabled"] = boost::any(*taskEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LaunchExpirationTime") != m.end() && !m["LaunchExpirationTime"].empty()) {
      launchExpirationTime = make_shared<long>(boost::any_cast<long>(m["LaunchExpirationTime"]));
    }
    if (m.find("LaunchTime") != m.end() && !m["LaunchTime"].empty()) {
      launchTime = make_shared<string>(boost::any_cast<string>(m["LaunchTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RecurrenceEndTime") != m.end() && !m["RecurrenceEndTime"].empty()) {
      recurrenceEndTime = make_shared<string>(boost::any_cast<string>(m["RecurrenceEndTime"]));
    }
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValue") != m.end() && !m["RecurrenceValue"].empty()) {
      recurrenceValue = make_shared<string>(boost::any_cast<string>(m["RecurrenceValue"]));
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
    if (m.find("ScheduledAction") != m.end() && !m["ScheduledAction"].empty()) {
      scheduledAction = make_shared<string>(boost::any_cast<string>(m["ScheduledAction"]));
    }
    if (m.find("ScheduledTaskName") != m.end() && !m["ScheduledTaskName"].empty()) {
      scheduledTaskName = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskName"]));
    }
    if (m.find("TaskEnabled") != m.end() && !m["TaskEnabled"].empty()) {
      taskEnabled = make_shared<bool>(boost::any_cast<bool>(m["TaskEnabled"]));
    }
  }


  virtual ~CreateScheduledTaskRequest() = default;
};
class CreateScheduledTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scheduledTaskId{};

  CreateScheduledTaskResponseBody() {}

  explicit CreateScheduledTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scheduledTaskId) {
      res["ScheduledTaskId"] = boost::any(*scheduledTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScheduledTaskId") != m.end() && !m["ScheduledTaskId"].empty()) {
      scheduledTaskId = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskId"]));
    }
  }


  virtual ~CreateScheduledTaskResponseBody() = default;
};
class CreateScheduledTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateScheduledTaskResponseBody> body{};

  CreateScheduledTaskResponse() {}

  explicit CreateScheduledTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateScheduledTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateScheduledTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateScheduledTaskResponse() = default;
};
class DeleteScalingConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingConfigurationId{};

  DeleteScalingConfigurationRequest() {}

  explicit DeleteScalingConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      scalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationId"]));
    }
  }


  virtual ~DeleteScalingConfigurationRequest() = default;
};
class DeleteScalingConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteScalingConfigurationResponseBody() {}

  explicit DeleteScalingConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScalingConfigurationResponseBody() = default;
};
class DeleteScalingConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteScalingConfigurationResponseBody> body{};

  DeleteScalingConfigurationResponse() {}

  explicit DeleteScalingConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScalingConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScalingConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScalingConfigurationResponse() = default;
};
class DeleteScalingGroupRequest : public Darabonba::Model {
public:
  shared_ptr<bool> forceDelete{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};

  DeleteScalingGroupRequest() {}

  explicit DeleteScalingGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (forceDelete) {
      res["ForceDelete"] = boost::any(*forceDelete);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ForceDelete") != m.end() && !m["ForceDelete"].empty()) {
      forceDelete = make_shared<bool>(boost::any_cast<bool>(m["ForceDelete"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~DeleteScalingGroupRequest() = default;
};
class DeleteScalingGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteScalingGroupResponseBody() {}

  explicit DeleteScalingGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScalingGroupResponseBody() = default;
};
class DeleteScalingGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteScalingGroupResponseBody> body{};

  DeleteScalingGroupResponse() {}

  explicit DeleteScalingGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScalingGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScalingGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScalingGroupResponse() = default;
};
class DeleteScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingRuleId{};

  DeleteScalingRuleRequest() {}

  explicit DeleteScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (scalingRuleId) {
      res["ScalingRuleId"] = boost::any(*scalingRuleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("ScalingRuleId") != m.end() && !m["ScalingRuleId"].empty()) {
      scalingRuleId = make_shared<string>(boost::any_cast<string>(m["ScalingRuleId"]));
    }
  }


  virtual ~DeleteScalingRuleRequest() = default;
};
class DeleteScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteScalingRuleResponseBody() {}

  explicit DeleteScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScalingRuleResponseBody() = default;
};
class DeleteScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteScalingRuleResponseBody> body{};

  DeleteScalingRuleResponse() {}

  explicit DeleteScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScalingRuleResponse() = default;
};
class DeleteScheduledTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scheduledTaskId{};

  DeleteScheduledTaskRequest() {}

  explicit DeleteScheduledTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (scheduledTaskId) {
      res["ScheduledTaskId"] = boost::any(*scheduledTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("ScheduledTaskId") != m.end() && !m["ScheduledTaskId"].empty()) {
      scheduledTaskId = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskId"]));
    }
  }


  virtual ~DeleteScheduledTaskRequest() = default;
};
class DeleteScheduledTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteScheduledTaskResponseBody() {}

  explicit DeleteScheduledTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteScheduledTaskResponseBody() = default;
};
class DeleteScheduledTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteScheduledTaskResponseBody> body{};

  DeleteScheduledTaskResponse() {}

  explicit DeleteScheduledTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteScheduledTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteScheduledTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteScheduledTaskResponse() = default;
};
class DescribeAccountAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeAccountAttributesRequest() {}

  explicit DescribeAccountAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DescribeAccountAttributesRequest() = default;
};
class DescribeAccountAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxNumberOfDBInstances{};
  shared_ptr<long> maxNumberOfLoadBalancers{};
  shared_ptr<long> maxNumberOfMaxSize{};
  shared_ptr<long> maxNumberOfMinSize{};
  shared_ptr<long> maxNumberOfScalingConfigurations{};
  shared_ptr<long> maxNumberOfScalingGroups{};
  shared_ptr<long> maxNumberOfScalingInstances{};
  shared_ptr<long> maxNumberOfScalingRules{};
  shared_ptr<long> maxNumberOfScheduledTasks{};

  DescribeAccountAttributesResponseBody() {}

  explicit DescribeAccountAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxNumberOfDBInstances) {
      res["MaxNumberOfDBInstances"] = boost::any(*maxNumberOfDBInstances);
    }
    if (maxNumberOfLoadBalancers) {
      res["MaxNumberOfLoadBalancers"] = boost::any(*maxNumberOfLoadBalancers);
    }
    if (maxNumberOfMaxSize) {
      res["MaxNumberOfMaxSize"] = boost::any(*maxNumberOfMaxSize);
    }
    if (maxNumberOfMinSize) {
      res["MaxNumberOfMinSize"] = boost::any(*maxNumberOfMinSize);
    }
    if (maxNumberOfScalingConfigurations) {
      res["MaxNumberOfScalingConfigurations"] = boost::any(*maxNumberOfScalingConfigurations);
    }
    if (maxNumberOfScalingGroups) {
      res["MaxNumberOfScalingGroups"] = boost::any(*maxNumberOfScalingGroups);
    }
    if (maxNumberOfScalingInstances) {
      res["MaxNumberOfScalingInstances"] = boost::any(*maxNumberOfScalingInstances);
    }
    if (maxNumberOfScalingRules) {
      res["MaxNumberOfScalingRules"] = boost::any(*maxNumberOfScalingRules);
    }
    if (maxNumberOfScheduledTasks) {
      res["MaxNumberOfScheduledTasks"] = boost::any(*maxNumberOfScheduledTasks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxNumberOfDBInstances") != m.end() && !m["MaxNumberOfDBInstances"].empty()) {
      maxNumberOfDBInstances = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfDBInstances"]));
    }
    if (m.find("MaxNumberOfLoadBalancers") != m.end() && !m["MaxNumberOfLoadBalancers"].empty()) {
      maxNumberOfLoadBalancers = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfLoadBalancers"]));
    }
    if (m.find("MaxNumberOfMaxSize") != m.end() && !m["MaxNumberOfMaxSize"].empty()) {
      maxNumberOfMaxSize = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfMaxSize"]));
    }
    if (m.find("MaxNumberOfMinSize") != m.end() && !m["MaxNumberOfMinSize"].empty()) {
      maxNumberOfMinSize = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfMinSize"]));
    }
    if (m.find("MaxNumberOfScalingConfigurations") != m.end() && !m["MaxNumberOfScalingConfigurations"].empty()) {
      maxNumberOfScalingConfigurations = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScalingConfigurations"]));
    }
    if (m.find("MaxNumberOfScalingGroups") != m.end() && !m["MaxNumberOfScalingGroups"].empty()) {
      maxNumberOfScalingGroups = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScalingGroups"]));
    }
    if (m.find("MaxNumberOfScalingInstances") != m.end() && !m["MaxNumberOfScalingInstances"].empty()) {
      maxNumberOfScalingInstances = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScalingInstances"]));
    }
    if (m.find("MaxNumberOfScalingRules") != m.end() && !m["MaxNumberOfScalingRules"].empty()) {
      maxNumberOfScalingRules = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScalingRules"]));
    }
    if (m.find("MaxNumberOfScheduledTasks") != m.end() && !m["MaxNumberOfScheduledTasks"].empty()) {
      maxNumberOfScheduledTasks = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScheduledTasks"]));
    }
  }


  virtual ~DescribeAccountAttributesResponseBody() = default;
};
class DescribeAccountAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountAttributesResponseBody> body{};

  DescribeAccountAttributesResponse() {}

  explicit DescribeAccountAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccountAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountAttributesResponse() = default;
};
class DescribeCapacityHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> startTime{};

  DescribeCapacityHistoryRequest() {}

  explicit DescribeCapacityHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeCapacityHistoryRequest() = default;
};
class DescribeCapacityHistoryResponseBodyCapacityHistoryItemsCapacityHistoryModel : public Darabonba::Model {
public:
  shared_ptr<long> attachedCapacity{};
  shared_ptr<long> autoCreatedCapacity{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> timestamp{};
  shared_ptr<long> totalCapacity{};

  DescribeCapacityHistoryResponseBodyCapacityHistoryItemsCapacityHistoryModel() {}

  explicit DescribeCapacityHistoryResponseBodyCapacityHistoryItemsCapacityHistoryModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachedCapacity) {
      res["AttachedCapacity"] = boost::any(*attachedCapacity);
    }
    if (autoCreatedCapacity) {
      res["AutoCreatedCapacity"] = boost::any(*autoCreatedCapacity);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (totalCapacity) {
      res["TotalCapacity"] = boost::any(*totalCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachedCapacity") != m.end() && !m["AttachedCapacity"].empty()) {
      attachedCapacity = make_shared<long>(boost::any_cast<long>(m["AttachedCapacity"]));
    }
    if (m.find("AutoCreatedCapacity") != m.end() && !m["AutoCreatedCapacity"].empty()) {
      autoCreatedCapacity = make_shared<long>(boost::any_cast<long>(m["AutoCreatedCapacity"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
    if (m.find("TotalCapacity") != m.end() && !m["TotalCapacity"].empty()) {
      totalCapacity = make_shared<long>(boost::any_cast<long>(m["TotalCapacity"]));
    }
  }


  virtual ~DescribeCapacityHistoryResponseBodyCapacityHistoryItemsCapacityHistoryModel() = default;
};
class DescribeCapacityHistoryResponseBodyCapacityHistoryItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCapacityHistoryResponseBodyCapacityHistoryItemsCapacityHistoryModel>> capacityHistoryModel{};

  DescribeCapacityHistoryResponseBodyCapacityHistoryItems() {}

  explicit DescribeCapacityHistoryResponseBodyCapacityHistoryItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacityHistoryModel) {
      vector<boost::any> temp1;
      for(auto item1:*capacityHistoryModel){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CapacityHistoryModel"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CapacityHistoryModel") != m.end() && !m["CapacityHistoryModel"].empty()) {
      if (typeid(vector<boost::any>) == m["CapacityHistoryModel"].type()) {
        vector<DescribeCapacityHistoryResponseBodyCapacityHistoryItemsCapacityHistoryModel> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CapacityHistoryModel"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCapacityHistoryResponseBodyCapacityHistoryItemsCapacityHistoryModel model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        capacityHistoryModel = make_shared<vector<DescribeCapacityHistoryResponseBodyCapacityHistoryItemsCapacityHistoryModel>>(expect1);
      }
    }
  }


  virtual ~DescribeCapacityHistoryResponseBodyCapacityHistoryItems() = default;
};
class DescribeCapacityHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCapacityHistoryResponseBodyCapacityHistoryItems> capacityHistoryItems{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DescribeCapacityHistoryResponseBody() {}

  explicit DescribeCapacityHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacityHistoryItems) {
      res["CapacityHistoryItems"] = capacityHistoryItems ? boost::any(capacityHistoryItems->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CapacityHistoryItems") != m.end() && !m["CapacityHistoryItems"].empty()) {
      if (typeid(map<string, boost::any>) == m["CapacityHistoryItems"].type()) {
        DescribeCapacityHistoryResponseBodyCapacityHistoryItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CapacityHistoryItems"]));
        capacityHistoryItems = make_shared<DescribeCapacityHistoryResponseBodyCapacityHistoryItems>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCapacityHistoryResponseBody() = default;
};
class DescribeCapacityHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCapacityHistoryResponseBody> body{};

  DescribeCapacityHistoryResponse() {}

  explicit DescribeCapacityHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCapacityHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCapacityHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCapacityHistoryResponse() = default;
};
class DescribeLimitationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeLimitationRequest() {}

  explicit DescribeLimitationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DescribeLimitationRequest() = default;
};
class DescribeLimitationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxNumberOfDBInstances{};
  shared_ptr<long> maxNumberOfLoadBalancers{};
  shared_ptr<long> maxNumberOfMaxSize{};
  shared_ptr<long> maxNumberOfMinSize{};
  shared_ptr<long> maxNumberOfScalingConfigurations{};
  shared_ptr<long> maxNumberOfScalingGroups{};
  shared_ptr<long> maxNumberOfScalingInstances{};
  shared_ptr<long> maxNumberOfScalingRules{};
  shared_ptr<long> maxNumberOfScheduledTasks{};

  DescribeLimitationResponseBody() {}

  explicit DescribeLimitationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxNumberOfDBInstances) {
      res["MaxNumberOfDBInstances"] = boost::any(*maxNumberOfDBInstances);
    }
    if (maxNumberOfLoadBalancers) {
      res["MaxNumberOfLoadBalancers"] = boost::any(*maxNumberOfLoadBalancers);
    }
    if (maxNumberOfMaxSize) {
      res["MaxNumberOfMaxSize"] = boost::any(*maxNumberOfMaxSize);
    }
    if (maxNumberOfMinSize) {
      res["MaxNumberOfMinSize"] = boost::any(*maxNumberOfMinSize);
    }
    if (maxNumberOfScalingConfigurations) {
      res["MaxNumberOfScalingConfigurations"] = boost::any(*maxNumberOfScalingConfigurations);
    }
    if (maxNumberOfScalingGroups) {
      res["MaxNumberOfScalingGroups"] = boost::any(*maxNumberOfScalingGroups);
    }
    if (maxNumberOfScalingInstances) {
      res["MaxNumberOfScalingInstances"] = boost::any(*maxNumberOfScalingInstances);
    }
    if (maxNumberOfScalingRules) {
      res["MaxNumberOfScalingRules"] = boost::any(*maxNumberOfScalingRules);
    }
    if (maxNumberOfScheduledTasks) {
      res["MaxNumberOfScheduledTasks"] = boost::any(*maxNumberOfScheduledTasks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxNumberOfDBInstances") != m.end() && !m["MaxNumberOfDBInstances"].empty()) {
      maxNumberOfDBInstances = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfDBInstances"]));
    }
    if (m.find("MaxNumberOfLoadBalancers") != m.end() && !m["MaxNumberOfLoadBalancers"].empty()) {
      maxNumberOfLoadBalancers = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfLoadBalancers"]));
    }
    if (m.find("MaxNumberOfMaxSize") != m.end() && !m["MaxNumberOfMaxSize"].empty()) {
      maxNumberOfMaxSize = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfMaxSize"]));
    }
    if (m.find("MaxNumberOfMinSize") != m.end() && !m["MaxNumberOfMinSize"].empty()) {
      maxNumberOfMinSize = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfMinSize"]));
    }
    if (m.find("MaxNumberOfScalingConfigurations") != m.end() && !m["MaxNumberOfScalingConfigurations"].empty()) {
      maxNumberOfScalingConfigurations = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScalingConfigurations"]));
    }
    if (m.find("MaxNumberOfScalingGroups") != m.end() && !m["MaxNumberOfScalingGroups"].empty()) {
      maxNumberOfScalingGroups = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScalingGroups"]));
    }
    if (m.find("MaxNumberOfScalingInstances") != m.end() && !m["MaxNumberOfScalingInstances"].empty()) {
      maxNumberOfScalingInstances = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScalingInstances"]));
    }
    if (m.find("MaxNumberOfScalingRules") != m.end() && !m["MaxNumberOfScalingRules"].empty()) {
      maxNumberOfScalingRules = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScalingRules"]));
    }
    if (m.find("MaxNumberOfScheduledTasks") != m.end() && !m["MaxNumberOfScheduledTasks"].empty()) {
      maxNumberOfScheduledTasks = make_shared<long>(boost::any_cast<long>(m["MaxNumberOfScheduledTasks"]));
    }
  }


  virtual ~DescribeLimitationResponseBody() = default;
};
class DescribeLimitationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLimitationResponseBody> body{};

  DescribeLimitationResponse() {}

  explicit DescribeLimitationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLimitationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLimitationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLimitationResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

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
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};

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
class DescribeScalingActivitiesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> scalingActivityId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> statusCode{};

  DescribeScalingActivitiesRequest() {}

  explicit DescribeScalingActivitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingActivityId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingActivityId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingActivityId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<string>(boost::any_cast<string>(m["StatusCode"]));
    }
  }


  virtual ~DescribeScalingActivitiesRequest() = default;
};
class DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity : public Darabonba::Model {
public:
  shared_ptr<string> attachedCapacity{};
  shared_ptr<string> autoCreatedCapacity{};
  shared_ptr<string> cause{};
  shared_ptr<string> description{};
  shared_ptr<string> endTime{};
  shared_ptr<long> progress{};
  shared_ptr<string> scalingActivityId{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> statusCode{};
  shared_ptr<string> statusMessage{};
  shared_ptr<string> totalCapacity{};

  DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity() {}

  explicit DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachedCapacity) {
      res["AttachedCapacity"] = boost::any(*attachedCapacity);
    }
    if (autoCreatedCapacity) {
      res["AutoCreatedCapacity"] = boost::any(*autoCreatedCapacity);
    }
    if (cause) {
      res["Cause"] = boost::any(*cause);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    if (totalCapacity) {
      res["TotalCapacity"] = boost::any(*totalCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachedCapacity") != m.end() && !m["AttachedCapacity"].empty()) {
      attachedCapacity = make_shared<string>(boost::any_cast<string>(m["AttachedCapacity"]));
    }
    if (m.find("AutoCreatedCapacity") != m.end() && !m["AutoCreatedCapacity"].empty()) {
      autoCreatedCapacity = make_shared<string>(boost::any_cast<string>(m["AutoCreatedCapacity"]));
    }
    if (m.find("Cause") != m.end() && !m["Cause"].empty()) {
      cause = make_shared<string>(boost::any_cast<string>(m["Cause"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<string>(boost::any_cast<string>(m["StatusCode"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
    if (m.find("TotalCapacity") != m.end() && !m["TotalCapacity"].empty()) {
      totalCapacity = make_shared<string>(boost::any_cast<string>(m["TotalCapacity"]));
    }
  }


  virtual ~DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity() = default;
};
class DescribeScalingActivitiesResponseBodyScalingActivities : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity>> scalingActivity{};

  DescribeScalingActivitiesResponseBodyScalingActivities() {}

  explicit DescribeScalingActivitiesResponseBodyScalingActivities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingActivity) {
      vector<boost::any> temp1;
      for(auto item1:*scalingActivity){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScalingActivity"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingActivity") != m.end() && !m["ScalingActivity"].empty()) {
      if (typeid(vector<boost::any>) == m["ScalingActivity"].type()) {
        vector<DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScalingActivity"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scalingActivity = make_shared<vector<DescribeScalingActivitiesResponseBodyScalingActivitiesScalingActivity>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingActivitiesResponseBodyScalingActivities() = default;
};
class DescribeScalingActivitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScalingActivitiesResponseBodyScalingActivities> scalingActivities{};
  shared_ptr<long> totalCount{};

  DescribeScalingActivitiesResponseBody() {}

  explicit DescribeScalingActivitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scalingActivities) {
      res["ScalingActivities"] = scalingActivities ? boost::any(scalingActivities->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ScalingActivities") != m.end() && !m["ScalingActivities"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScalingActivities"].type()) {
        DescribeScalingActivitiesResponseBodyScalingActivities model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScalingActivities"]));
        scalingActivities = make_shared<DescribeScalingActivitiesResponseBodyScalingActivities>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeScalingActivitiesResponseBody() = default;
};
class DescribeScalingActivitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScalingActivitiesResponseBody> body{};

  DescribeScalingActivitiesResponse() {}

  explicit DescribeScalingActivitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScalingActivitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScalingActivitiesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScalingActivitiesResponse() = default;
};
class DescribeScalingActivityDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingActivityId{};

  DescribeScalingActivityDetailRequest() {}

  explicit DescribeScalingActivityDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
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
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
  }


  virtual ~DescribeScalingActivityDetailRequest() = default;
};
class DescribeScalingActivityDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> scalingActivityId{};

  DescribeScalingActivityDetailResponseBody() {}

  explicit DescribeScalingActivityDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
  }


  virtual ~DescribeScalingActivityDetailResponseBody() = default;
};
class DescribeScalingActivityDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScalingActivityDetailResponseBody> body{};

  DescribeScalingActivityDetailResponse() {}

  explicit DescribeScalingActivityDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScalingActivityDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScalingActivityDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScalingActivityDetailResponse() = default;
};
class DescribeScalingConfigurationsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> scalingConfigurationId{};
  shared_ptr<vector<string>> scalingConfigurationName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};

  DescribeScalingConfigurationsRequest() {}

  explicit DescribeScalingConfigurationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    if (scalingConfigurationName) {
      res["ScalingConfigurationName"] = boost::any(*scalingConfigurationName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingConfigurationId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingConfigurationId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingConfigurationId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScalingConfigurationName") != m.end() && !m["ScalingConfigurationName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingConfigurationName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingConfigurationName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingConfigurationName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~DescribeScalingConfigurationsRequest() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> device{};
  shared_ptr<long> size{};
  shared_ptr<string> snapshotId{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (device) {
      res["Device"] = boost::any(*device);
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
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      device = make_shared<string>(boost::any_cast<string>(m["Device"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk>> dataDisk{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataDisk) {
      vector<boost::any> temp1;
      for(auto item1:*dataDisk){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataDisk"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataDisk") != m.end() && !m["DataDisk"].empty()) {
      if (typeid(vector<boost::any>) == m["DataDisk"].type()) {
        vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataDisk"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataDisk = make_shared<vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisksDataDisk>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks> dataDisks{};
  shared_ptr<string> imageId{};
  shared_ptr<string> instanceGeneration{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetChargeType{};
  shared_ptr<long> internetMaxBandwidthIn{};
  shared_ptr<long> internetMaxBandwidthOut{};
  shared_ptr<string> ioOptimized{};
  shared_ptr<string> lifecycleState{};
  shared_ptr<string> scalingConfigurationId{};
  shared_ptr<string> scalingConfigurationName{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<string> systemDiskCategory{};
  shared_ptr<long> systemDiskSize{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (dataDisks) {
      res["DataDisks"] = dataDisks ? boost::any(dataDisks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (instanceGeneration) {
      res["InstanceGeneration"] = boost::any(*instanceGeneration);
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
    if (ioOptimized) {
      res["IoOptimized"] = boost::any(*ioOptimized);
    }
    if (lifecycleState) {
      res["LifecycleState"] = boost::any(*lifecycleState);
    }
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    if (scalingConfigurationName) {
      res["ScalingConfigurationName"] = boost::any(*scalingConfigurationName);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (systemDiskCategory) {
      res["SystemDiskCategory"] = boost::any(*systemDiskCategory);
    }
    if (systemDiskSize) {
      res["SystemDiskSize"] = boost::any(*systemDiskSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DataDisks") != m.end() && !m["DataDisks"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataDisks"].type()) {
        DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataDisks"]));
        dataDisks = make_shared<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfigurationDataDisks>(model1);
      }
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("InstanceGeneration") != m.end() && !m["InstanceGeneration"].empty()) {
      instanceGeneration = make_shared<string>(boost::any_cast<string>(m["InstanceGeneration"]));
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
    if (m.find("IoOptimized") != m.end() && !m["IoOptimized"].empty()) {
      ioOptimized = make_shared<string>(boost::any_cast<string>(m["IoOptimized"]));
    }
    if (m.find("LifecycleState") != m.end() && !m["LifecycleState"].empty()) {
      lifecycleState = make_shared<string>(boost::any_cast<string>(m["LifecycleState"]));
    }
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      scalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationId"]));
    }
    if (m.find("ScalingConfigurationName") != m.end() && !m["ScalingConfigurationName"].empty()) {
      scalingConfigurationName = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationName"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("SystemDiskCategory") != m.end() && !m["SystemDiskCategory"].empty()) {
      systemDiskCategory = make_shared<string>(boost::any_cast<string>(m["SystemDiskCategory"]));
    }
    if (m.find("SystemDiskSize") != m.end() && !m["SystemDiskSize"].empty()) {
      systemDiskSize = make_shared<long>(boost::any_cast<long>(m["SystemDiskSize"]));
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration() = default;
};
class DescribeScalingConfigurationsResponseBodyScalingConfigurations : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration>> scalingConfiguration{};

  DescribeScalingConfigurationsResponseBodyScalingConfigurations() {}

  explicit DescribeScalingConfigurationsResponseBodyScalingConfigurations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingConfiguration) {
      vector<boost::any> temp1;
      for(auto item1:*scalingConfiguration){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScalingConfiguration"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingConfiguration") != m.end() && !m["ScalingConfiguration"].empty()) {
      if (typeid(vector<boost::any>) == m["ScalingConfiguration"].type()) {
        vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScalingConfiguration"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scalingConfiguration = make_shared<vector<DescribeScalingConfigurationsResponseBodyScalingConfigurationsScalingConfiguration>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurations() = default;
};
class DescribeScalingConfigurationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScalingConfigurationsResponseBodyScalingConfigurations> scalingConfigurations{};
  shared_ptr<long> totalCount{};

  DescribeScalingConfigurationsResponseBody() {}

  explicit DescribeScalingConfigurationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scalingConfigurations) {
      res["ScalingConfigurations"] = scalingConfigurations ? boost::any(scalingConfigurations->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ScalingConfigurations") != m.end() && !m["ScalingConfigurations"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScalingConfigurations"].type()) {
        DescribeScalingConfigurationsResponseBodyScalingConfigurations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScalingConfigurations"]));
        scalingConfigurations = make_shared<DescribeScalingConfigurationsResponseBodyScalingConfigurations>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeScalingConfigurationsResponseBody() = default;
};
class DescribeScalingConfigurationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScalingConfigurationsResponseBody> body{};

  DescribeScalingConfigurationsResponse() {}

  explicit DescribeScalingConfigurationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScalingConfigurationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScalingConfigurationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScalingConfigurationsResponse() = default;
};
class DescribeScalingGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> scalingGroupId{};
  shared_ptr<vector<string>> scalingGroupName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};

  DescribeScalingGroupsRequest() {}

  explicit DescribeScalingGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (scalingGroupName) {
      res["ScalingGroupName"] = boost::any(*scalingGroupName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingGroupId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingGroupId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingGroupId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScalingGroupName") != m.end() && !m["ScalingGroupName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingGroupName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingGroupName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingGroupName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~DescribeScalingGroupsRequest() = default;
};
class DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupDBInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> DBInstanceId{};

  DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupDBInstanceIds() {}

  explicit DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupDBInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DBInstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DBInstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      DBInstanceId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupDBInstanceIds() = default;
};
class DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupLoadBalancerIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> loadBalancerId{};

  DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupLoadBalancerIds() {}

  explicit DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupLoadBalancerIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LoadBalancerId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LoadBalancerId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      loadBalancerId = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupLoadBalancerIds() = default;
};
class DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupRemovalPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<string>> removalPolicy{};

  DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupRemovalPolicies() {}

  explicit DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupRemovalPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (removalPolicy) {
      res["RemovalPolicy"] = boost::any(*removalPolicy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RemovalPolicy") != m.end() && !m["RemovalPolicy"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RemovalPolicy"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RemovalPolicy"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      removalPolicy = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupRemovalPolicies() = default;
};
class DescribeScalingGroupsResponseBodyScalingGroupsScalingGroup : public Darabonba::Model {
public:
  shared_ptr<long> activeCapacity{};
  shared_ptr<string> activeScalingConfigurationId{};
  shared_ptr<string> creationTime{};
  shared_ptr<DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupDBInstanceIds> DBInstanceIds{};
  shared_ptr<long> defaultCooldown{};
  shared_ptr<string> lifecycleState{};
  shared_ptr<DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupLoadBalancerIds> loadBalancerIds{};
  shared_ptr<long> maxSize{};
  shared_ptr<long> minSize{};
  shared_ptr<long> pendingCapacity{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupRemovalPolicies> removalPolicies{};
  shared_ptr<long> removingCapacity{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> scalingGroupName{};
  shared_ptr<long> totalCapacity{};
  shared_ptr<string> vSwitchId{};

  DescribeScalingGroupsResponseBodyScalingGroupsScalingGroup() {}

  explicit DescribeScalingGroupsResponseBodyScalingGroupsScalingGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeCapacity) {
      res["ActiveCapacity"] = boost::any(*activeCapacity);
    }
    if (activeScalingConfigurationId) {
      res["ActiveScalingConfigurationId"] = boost::any(*activeScalingConfigurationId);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (DBInstanceIds) {
      res["DBInstanceIds"] = DBInstanceIds ? boost::any(DBInstanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (defaultCooldown) {
      res["DefaultCooldown"] = boost::any(*defaultCooldown);
    }
    if (lifecycleState) {
      res["LifecycleState"] = boost::any(*lifecycleState);
    }
    if (loadBalancerIds) {
      res["LoadBalancerIds"] = loadBalancerIds ? boost::any(loadBalancerIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (maxSize) {
      res["MaxSize"] = boost::any(*maxSize);
    }
    if (minSize) {
      res["MinSize"] = boost::any(*minSize);
    }
    if (pendingCapacity) {
      res["PendingCapacity"] = boost::any(*pendingCapacity);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (removalPolicies) {
      res["RemovalPolicies"] = removalPolicies ? boost::any(removalPolicies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (removingCapacity) {
      res["RemovingCapacity"] = boost::any(*removingCapacity);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (scalingGroupName) {
      res["ScalingGroupName"] = boost::any(*scalingGroupName);
    }
    if (totalCapacity) {
      res["TotalCapacity"] = boost::any(*totalCapacity);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveCapacity") != m.end() && !m["ActiveCapacity"].empty()) {
      activeCapacity = make_shared<long>(boost::any_cast<long>(m["ActiveCapacity"]));
    }
    if (m.find("ActiveScalingConfigurationId") != m.end() && !m["ActiveScalingConfigurationId"].empty()) {
      activeScalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ActiveScalingConfigurationId"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DBInstanceIds") != m.end() && !m["DBInstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["DBInstanceIds"].type()) {
        DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupDBInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DBInstanceIds"]));
        DBInstanceIds = make_shared<DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupDBInstanceIds>(model1);
      }
    }
    if (m.find("DefaultCooldown") != m.end() && !m["DefaultCooldown"].empty()) {
      defaultCooldown = make_shared<long>(boost::any_cast<long>(m["DefaultCooldown"]));
    }
    if (m.find("LifecycleState") != m.end() && !m["LifecycleState"].empty()) {
      lifecycleState = make_shared<string>(boost::any_cast<string>(m["LifecycleState"]));
    }
    if (m.find("LoadBalancerIds") != m.end() && !m["LoadBalancerIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancerIds"].type()) {
        DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupLoadBalancerIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancerIds"]));
        loadBalancerIds = make_shared<DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupLoadBalancerIds>(model1);
      }
    }
    if (m.find("MaxSize") != m.end() && !m["MaxSize"].empty()) {
      maxSize = make_shared<long>(boost::any_cast<long>(m["MaxSize"]));
    }
    if (m.find("MinSize") != m.end() && !m["MinSize"].empty()) {
      minSize = make_shared<long>(boost::any_cast<long>(m["MinSize"]));
    }
    if (m.find("PendingCapacity") != m.end() && !m["PendingCapacity"].empty()) {
      pendingCapacity = make_shared<long>(boost::any_cast<long>(m["PendingCapacity"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RemovalPolicies") != m.end() && !m["RemovalPolicies"].empty()) {
      if (typeid(map<string, boost::any>) == m["RemovalPolicies"].type()) {
        DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupRemovalPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RemovalPolicies"]));
        removalPolicies = make_shared<DescribeScalingGroupsResponseBodyScalingGroupsScalingGroupRemovalPolicies>(model1);
      }
    }
    if (m.find("RemovingCapacity") != m.end() && !m["RemovingCapacity"].empty()) {
      removingCapacity = make_shared<long>(boost::any_cast<long>(m["RemovingCapacity"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ScalingGroupName") != m.end() && !m["ScalingGroupName"].empty()) {
      scalingGroupName = make_shared<string>(boost::any_cast<string>(m["ScalingGroupName"]));
    }
    if (m.find("TotalCapacity") != m.end() && !m["TotalCapacity"].empty()) {
      totalCapacity = make_shared<long>(boost::any_cast<long>(m["TotalCapacity"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~DescribeScalingGroupsResponseBodyScalingGroupsScalingGroup() = default;
};
class DescribeScalingGroupsResponseBodyScalingGroups : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingGroupsResponseBodyScalingGroupsScalingGroup>> scalingGroup{};

  DescribeScalingGroupsResponseBodyScalingGroups() {}

  explicit DescribeScalingGroupsResponseBodyScalingGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingGroup) {
      vector<boost::any> temp1;
      for(auto item1:*scalingGroup){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScalingGroup"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingGroup") != m.end() && !m["ScalingGroup"].empty()) {
      if (typeid(vector<boost::any>) == m["ScalingGroup"].type()) {
        vector<DescribeScalingGroupsResponseBodyScalingGroupsScalingGroup> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScalingGroup"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingGroupsResponseBodyScalingGroupsScalingGroup model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scalingGroup = make_shared<vector<DescribeScalingGroupsResponseBodyScalingGroupsScalingGroup>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingGroupsResponseBodyScalingGroups() = default;
};
class DescribeScalingGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScalingGroupsResponseBodyScalingGroups> scalingGroups{};
  shared_ptr<long> totalCount{};

  DescribeScalingGroupsResponseBody() {}

  explicit DescribeScalingGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scalingGroups) {
      res["ScalingGroups"] = scalingGroups ? boost::any(scalingGroups->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ScalingGroups") != m.end() && !m["ScalingGroups"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScalingGroups"].type()) {
        DescribeScalingGroupsResponseBodyScalingGroups model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScalingGroups"]));
        scalingGroups = make_shared<DescribeScalingGroupsResponseBodyScalingGroups>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeScalingGroupsResponseBody() = default;
};
class DescribeScalingGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScalingGroupsResponseBody> body{};

  DescribeScalingGroupsResponse() {}

  explicit DescribeScalingGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScalingGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScalingGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScalingGroupsResponse() = default;
};
class DescribeScalingInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<string> creationType{};
  shared_ptr<string> healthStatus{};
  shared_ptr<string> lifecycleState{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingConfigurationId{};
  shared_ptr<string> scalingGroupId{};

  DescribeScalingInstancesRequest() {}

  explicit DescribeScalingInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (creationType) {
      res["CreationType"] = boost::any(*creationType);
    }
    if (healthStatus) {
      res["HealthStatus"] = boost::any(*healthStatus);
    }
    if (lifecycleState) {
      res["LifecycleState"] = boost::any(*lifecycleState);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
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
    if (m.find("CreationType") != m.end() && !m["CreationType"].empty()) {
      creationType = make_shared<string>(boost::any_cast<string>(m["CreationType"]));
    }
    if (m.find("HealthStatus") != m.end() && !m["HealthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["HealthStatus"]));
    }
    if (m.find("LifecycleState") != m.end() && !m["LifecycleState"].empty()) {
      lifecycleState = make_shared<string>(boost::any_cast<string>(m["LifecycleState"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      scalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~DescribeScalingInstancesRequest() = default;
};
class DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> creationType{};
  shared_ptr<string> healthStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lifecycleState{};
  shared_ptr<string> scalingConfigurationId{};
  shared_ptr<string> scalingGroupId{};

  DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance() {}

  explicit DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (creationType) {
      res["CreationType"] = boost::any(*creationType);
    }
    if (healthStatus) {
      res["HealthStatus"] = boost::any(*healthStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lifecycleState) {
      res["LifecycleState"] = boost::any(*lifecycleState);
    }
    if (scalingConfigurationId) {
      res["ScalingConfigurationId"] = boost::any(*scalingConfigurationId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("CreationType") != m.end() && !m["CreationType"].empty()) {
      creationType = make_shared<string>(boost::any_cast<string>(m["CreationType"]));
    }
    if (m.find("HealthStatus") != m.end() && !m["HealthStatus"].empty()) {
      healthStatus = make_shared<string>(boost::any_cast<string>(m["HealthStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LifecycleState") != m.end() && !m["LifecycleState"].empty()) {
      lifecycleState = make_shared<string>(boost::any_cast<string>(m["LifecycleState"]));
    }
    if (m.find("ScalingConfigurationId") != m.end() && !m["ScalingConfigurationId"].empty()) {
      scalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ScalingConfigurationId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance() = default;
};
class DescribeScalingInstancesResponseBodyScalingInstances : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance>> scalingInstance{};

  DescribeScalingInstancesResponseBodyScalingInstances() {}

  explicit DescribeScalingInstancesResponseBodyScalingInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingInstance) {
      vector<boost::any> temp1;
      for(auto item1:*scalingInstance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScalingInstance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingInstance") != m.end() && !m["ScalingInstance"].empty()) {
      if (typeid(vector<boost::any>) == m["ScalingInstance"].type()) {
        vector<DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScalingInstance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scalingInstance = make_shared<vector<DescribeScalingInstancesResponseBodyScalingInstancesScalingInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingInstancesResponseBodyScalingInstances() = default;
};
class DescribeScalingInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScalingInstancesResponseBodyScalingInstances> scalingInstances{};
  shared_ptr<long> totalCount{};

  DescribeScalingInstancesResponseBody() {}

  explicit DescribeScalingInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scalingInstances) {
      res["ScalingInstances"] = scalingInstances ? boost::any(scalingInstances->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ScalingInstances") != m.end() && !m["ScalingInstances"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScalingInstances"].type()) {
        DescribeScalingInstancesResponseBodyScalingInstances model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScalingInstances"]));
        scalingInstances = make_shared<DescribeScalingInstancesResponseBodyScalingInstances>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeScalingInstancesResponseBody() = default;
};
class DescribeScalingInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScalingInstancesResponseBody> body{};

  DescribeScalingInstancesResponse() {}

  explicit DescribeScalingInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScalingInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScalingInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScalingInstancesResponse() = default;
};
class DescribeScalingRulesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> scalingRuleAri{};
  shared_ptr<vector<string>> scalingRuleId{};
  shared_ptr<vector<string>> scalingRuleName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};

  DescribeScalingRulesRequest() {}

  explicit DescribeScalingRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingRuleAri) {
      res["ScalingRuleAri"] = boost::any(*scalingRuleAri);
    }
    if (scalingRuleId) {
      res["ScalingRuleId"] = boost::any(*scalingRuleId);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingRuleAri") != m.end() && !m["ScalingRuleAri"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingRuleAri"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingRuleAri"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingRuleAri = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScalingRuleId") != m.end() && !m["ScalingRuleId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingRuleId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingRuleId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingRuleId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScalingRuleName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScalingRuleName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scalingRuleName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~DescribeScalingRulesRequest() = default;
};
class DescribeScalingRulesResponseBodyScalingRulesScalingRule : public Darabonba::Model {
public:
  shared_ptr<string> adjustmentType{};
  shared_ptr<long> adjustmentValue{};
  shared_ptr<long> cooldown{};
  shared_ptr<long> maxSize{};
  shared_ptr<long> minSize{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> scalingRuleAri{};
  shared_ptr<string> scalingRuleId{};
  shared_ptr<string> scalingRuleName{};

  DescribeScalingRulesResponseBodyScalingRulesScalingRule() {}

  explicit DescribeScalingRulesResponseBodyScalingRulesScalingRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adjustmentType) {
      res["AdjustmentType"] = boost::any(*adjustmentType);
    }
    if (adjustmentValue) {
      res["AdjustmentValue"] = boost::any(*adjustmentValue);
    }
    if (cooldown) {
      res["Cooldown"] = boost::any(*cooldown);
    }
    if (maxSize) {
      res["MaxSize"] = boost::any(*maxSize);
    }
    if (minSize) {
      res["MinSize"] = boost::any(*minSize);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (scalingRuleAri) {
      res["ScalingRuleAri"] = boost::any(*scalingRuleAri);
    }
    if (scalingRuleId) {
      res["ScalingRuleId"] = boost::any(*scalingRuleId);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdjustmentType") != m.end() && !m["AdjustmentType"].empty()) {
      adjustmentType = make_shared<string>(boost::any_cast<string>(m["AdjustmentType"]));
    }
    if (m.find("AdjustmentValue") != m.end() && !m["AdjustmentValue"].empty()) {
      adjustmentValue = make_shared<long>(boost::any_cast<long>(m["AdjustmentValue"]));
    }
    if (m.find("Cooldown") != m.end() && !m["Cooldown"].empty()) {
      cooldown = make_shared<long>(boost::any_cast<long>(m["Cooldown"]));
    }
    if (m.find("MaxSize") != m.end() && !m["MaxSize"].empty()) {
      maxSize = make_shared<long>(boost::any_cast<long>(m["MaxSize"]));
    }
    if (m.find("MinSize") != m.end() && !m["MinSize"].empty()) {
      minSize = make_shared<long>(boost::any_cast<long>(m["MinSize"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ScalingRuleAri") != m.end() && !m["ScalingRuleAri"].empty()) {
      scalingRuleAri = make_shared<string>(boost::any_cast<string>(m["ScalingRuleAri"]));
    }
    if (m.find("ScalingRuleId") != m.end() && !m["ScalingRuleId"].empty()) {
      scalingRuleId = make_shared<string>(boost::any_cast<string>(m["ScalingRuleId"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
  }


  virtual ~DescribeScalingRulesResponseBodyScalingRulesScalingRule() = default;
};
class DescribeScalingRulesResponseBodyScalingRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScalingRulesResponseBodyScalingRulesScalingRule>> scalingRule{};

  DescribeScalingRulesResponseBodyScalingRules() {}

  explicit DescribeScalingRulesResponseBodyScalingRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scalingRule) {
      vector<boost::any> temp1;
      for(auto item1:*scalingRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScalingRule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScalingRule") != m.end() && !m["ScalingRule"].empty()) {
      if (typeid(vector<boost::any>) == m["ScalingRule"].type()) {
        vector<DescribeScalingRulesResponseBodyScalingRulesScalingRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScalingRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScalingRulesResponseBodyScalingRulesScalingRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scalingRule = make_shared<vector<DescribeScalingRulesResponseBodyScalingRulesScalingRule>>(expect1);
      }
    }
  }


  virtual ~DescribeScalingRulesResponseBodyScalingRules() = default;
};
class DescribeScalingRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScalingRulesResponseBodyScalingRules> scalingRules{};
  shared_ptr<long> totalCount{};

  DescribeScalingRulesResponseBody() {}

  explicit DescribeScalingRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scalingRules) {
      res["ScalingRules"] = scalingRules ? boost::any(scalingRules->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ScalingRules") != m.end() && !m["ScalingRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScalingRules"].type()) {
        DescribeScalingRulesResponseBodyScalingRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScalingRules"]));
        scalingRules = make_shared<DescribeScalingRulesResponseBodyScalingRules>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeScalingRulesResponseBody() = default;
};
class DescribeScalingRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScalingRulesResponseBody> body{};

  DescribeScalingRulesResponse() {}

  explicit DescribeScalingRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScalingRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScalingRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScalingRulesResponse() = default;
};
class DescribeScheduledTasksRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> scheduledAction{};
  shared_ptr<vector<string>> scheduledTaskId{};
  shared_ptr<vector<string>> scheduledTaskName{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DescribeScheduledTasksRequest() {}

  explicit DescribeScheduledTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduledAction) {
      res["ScheduledAction"] = boost::any(*scheduledAction);
    }
    if (scheduledTaskId) {
      res["ScheduledTaskId"] = boost::any(*scheduledTaskId);
    }
    if (scheduledTaskName) {
      res["ScheduledTaskName"] = boost::any(*scheduledTaskName);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
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
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduledAction") != m.end() && !m["ScheduledAction"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScheduledAction"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScheduledAction"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scheduledAction = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScheduledTaskId") != m.end() && !m["ScheduledTaskId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScheduledTaskId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScheduledTaskId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scheduledTaskId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScheduledTaskName") != m.end() && !m["ScheduledTaskName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScheduledTaskName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScheduledTaskName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scheduledTaskName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
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
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DescribeScheduledTasksRequest() = default;
};
class DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> launchExpirationTime{};
  shared_ptr<string> launchTime{};
  shared_ptr<string> recurrenceEndTime{};
  shared_ptr<string> recurrenceType{};
  shared_ptr<string> recurrenceValue{};
  shared_ptr<string> scheduledAction{};
  shared_ptr<string> scheduledTaskId{};
  shared_ptr<string> scheduledTaskName{};
  shared_ptr<bool> taskEnabled{};

  DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask() {}

  explicit DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (launchExpirationTime) {
      res["LaunchExpirationTime"] = boost::any(*launchExpirationTime);
    }
    if (launchTime) {
      res["LaunchTime"] = boost::any(*launchTime);
    }
    if (recurrenceEndTime) {
      res["RecurrenceEndTime"] = boost::any(*recurrenceEndTime);
    }
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValue) {
      res["RecurrenceValue"] = boost::any(*recurrenceValue);
    }
    if (scheduledAction) {
      res["ScheduledAction"] = boost::any(*scheduledAction);
    }
    if (scheduledTaskId) {
      res["ScheduledTaskId"] = boost::any(*scheduledTaskId);
    }
    if (scheduledTaskName) {
      res["ScheduledTaskName"] = boost::any(*scheduledTaskName);
    }
    if (taskEnabled) {
      res["TaskEnabled"] = boost::any(*taskEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LaunchExpirationTime") != m.end() && !m["LaunchExpirationTime"].empty()) {
      launchExpirationTime = make_shared<long>(boost::any_cast<long>(m["LaunchExpirationTime"]));
    }
    if (m.find("LaunchTime") != m.end() && !m["LaunchTime"].empty()) {
      launchTime = make_shared<string>(boost::any_cast<string>(m["LaunchTime"]));
    }
    if (m.find("RecurrenceEndTime") != m.end() && !m["RecurrenceEndTime"].empty()) {
      recurrenceEndTime = make_shared<string>(boost::any_cast<string>(m["RecurrenceEndTime"]));
    }
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValue") != m.end() && !m["RecurrenceValue"].empty()) {
      recurrenceValue = make_shared<string>(boost::any_cast<string>(m["RecurrenceValue"]));
    }
    if (m.find("ScheduledAction") != m.end() && !m["ScheduledAction"].empty()) {
      scheduledAction = make_shared<string>(boost::any_cast<string>(m["ScheduledAction"]));
    }
    if (m.find("ScheduledTaskId") != m.end() && !m["ScheduledTaskId"].empty()) {
      scheduledTaskId = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskId"]));
    }
    if (m.find("ScheduledTaskName") != m.end() && !m["ScheduledTaskName"].empty()) {
      scheduledTaskName = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskName"]));
    }
    if (m.find("TaskEnabled") != m.end() && !m["TaskEnabled"].empty()) {
      taskEnabled = make_shared<bool>(boost::any_cast<bool>(m["TaskEnabled"]));
    }
  }


  virtual ~DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask() = default;
};
class DescribeScheduledTasksResponseBodyScheduledTasks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask>> scheduledTask{};

  DescribeScheduledTasksResponseBodyScheduledTasks() {}

  explicit DescribeScheduledTasksResponseBodyScheduledTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduledTask) {
      vector<boost::any> temp1;
      for(auto item1:*scheduledTask){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScheduledTask"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduledTask") != m.end() && !m["ScheduledTask"].empty()) {
      if (typeid(vector<boost::any>) == m["ScheduledTask"].type()) {
        vector<DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScheduledTask"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scheduledTask = make_shared<vector<DescribeScheduledTasksResponseBodyScheduledTasksScheduledTask>>(expect1);
      }
    }
  }


  virtual ~DescribeScheduledTasksResponseBodyScheduledTasks() = default;
};
class DescribeScheduledTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeScheduledTasksResponseBodyScheduledTasks> scheduledTasks{};
  shared_ptr<long> totalCount{};

  DescribeScheduledTasksResponseBody() {}

  explicit DescribeScheduledTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (scheduledTasks) {
      res["ScheduledTasks"] = scheduledTasks ? boost::any(scheduledTasks->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ScheduledTasks") != m.end() && !m["ScheduledTasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduledTasks"].type()) {
        DescribeScheduledTasksResponseBodyScheduledTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduledTasks"]));
        scheduledTasks = make_shared<DescribeScheduledTasksResponseBodyScheduledTasks>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeScheduledTasksResponseBody() = default;
};
class DescribeScheduledTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeScheduledTasksResponseBody> body{};

  DescribeScheduledTasksResponse() {}

  explicit DescribeScheduledTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeScheduledTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeScheduledTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeScheduledTasksResponse() = default;
};
class DetachInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};

  DetachInstancesRequest() {}

  explicit DetachInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~DetachInstancesRequest() = default;
};
class DetachInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingActivityId{};

  DetachInstancesResponseBody() {}

  explicit DetachInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
  }


  virtual ~DetachInstancesResponseBody() = default;
};
class DetachInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachInstancesResponseBody> body{};

  DetachInstancesResponse() {}

  explicit DetachInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DetachInstancesResponse() = default;
};
class DisableScalingGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};

  DisableScalingGroupRequest() {}

  explicit DisableScalingGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~DisableScalingGroupRequest() = default;
};
class DisableScalingGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableScalingGroupResponseBody() {}

  explicit DisableScalingGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableScalingGroupResponseBody() = default;
};
class DisableScalingGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableScalingGroupResponseBody> body{};

  DisableScalingGroupResponse() {}

  explicit DisableScalingGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableScalingGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableScalingGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DisableScalingGroupResponse() = default;
};
class EnableScalingGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<string> activeScalingConfigurationId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};

  EnableScalingGroupRequest() {}

  explicit EnableScalingGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (activeScalingConfigurationId) {
      res["ActiveScalingConfigurationId"] = boost::any(*activeScalingConfigurationId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
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
    if (m.find("ActiveScalingConfigurationId") != m.end() && !m["ActiveScalingConfigurationId"].empty()) {
      activeScalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ActiveScalingConfigurationId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~EnableScalingGroupRequest() = default;
};
class EnableScalingGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableScalingGroupResponseBody() {}

  explicit EnableScalingGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableScalingGroupResponseBody() = default;
};
class EnableScalingGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableScalingGroupResponseBody> body{};

  EnableScalingGroupResponse() {}

  explicit EnableScalingGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableScalingGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableScalingGroupResponseBody>(model1);
      }
    }
  }


  virtual ~EnableScalingGroupResponse() = default;
};
class ExecuteScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingRuleAri{};

  ExecuteScalingRuleRequest() {}

  explicit ExecuteScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (scalingRuleAri) {
      res["ScalingRuleAri"] = boost::any(*scalingRuleAri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("ScalingRuleAri") != m.end() && !m["ScalingRuleAri"].empty()) {
      scalingRuleAri = make_shared<string>(boost::any_cast<string>(m["ScalingRuleAri"]));
    }
  }


  virtual ~ExecuteScalingRuleRequest() = default;
};
class ExecuteScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingActivityId{};

  ExecuteScalingRuleResponseBody() {}

  explicit ExecuteScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
  }


  virtual ~ExecuteScalingRuleResponseBody() = default;
};
class ExecuteScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteScalingRuleResponseBody> body{};

  ExecuteScalingRuleResponse() {}

  explicit ExecuteScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteScalingRuleResponse() = default;
};
class ModifyScalingGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> removalPolicy{};
  shared_ptr<string> activeScalingConfigurationId{};
  shared_ptr<long> defaultCooldown{};
  shared_ptr<long> maxSize{};
  shared_ptr<long> minSize{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<string> scalingGroupId{};
  shared_ptr<string> scalingGroupName{};

  ModifyScalingGroupRequest() {}

  explicit ModifyScalingGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (removalPolicy) {
      res["RemovalPolicy"] = boost::any(*removalPolicy);
    }
    if (activeScalingConfigurationId) {
      res["ActiveScalingConfigurationId"] = boost::any(*activeScalingConfigurationId);
    }
    if (defaultCooldown) {
      res["DefaultCooldown"] = boost::any(*defaultCooldown);
    }
    if (maxSize) {
      res["MaxSize"] = boost::any(*maxSize);
    }
    if (minSize) {
      res["MinSize"] = boost::any(*minSize);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
    }
    if (scalingGroupName) {
      res["ScalingGroupName"] = boost::any(*scalingGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RemovalPolicy") != m.end() && !m["RemovalPolicy"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RemovalPolicy"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RemovalPolicy"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      removalPolicy = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ActiveScalingConfigurationId") != m.end() && !m["ActiveScalingConfigurationId"].empty()) {
      activeScalingConfigurationId = make_shared<string>(boost::any_cast<string>(m["ActiveScalingConfigurationId"]));
    }
    if (m.find("DefaultCooldown") != m.end() && !m["DefaultCooldown"].empty()) {
      defaultCooldown = make_shared<long>(boost::any_cast<long>(m["DefaultCooldown"]));
    }
    if (m.find("MaxSize") != m.end() && !m["MaxSize"].empty()) {
      maxSize = make_shared<long>(boost::any_cast<long>(m["MaxSize"]));
    }
    if (m.find("MinSize") != m.end() && !m["MinSize"].empty()) {
      minSize = make_shared<long>(boost::any_cast<long>(m["MinSize"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
    if (m.find("ScalingGroupName") != m.end() && !m["ScalingGroupName"].empty()) {
      scalingGroupName = make_shared<string>(boost::any_cast<string>(m["ScalingGroupName"]));
    }
  }


  virtual ~ModifyScalingGroupRequest() = default;
};
class ModifyScalingGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyScalingGroupResponseBody() {}

  explicit ModifyScalingGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyScalingGroupResponseBody() = default;
};
class ModifyScalingGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyScalingGroupResponseBody> body{};

  ModifyScalingGroupResponse() {}

  explicit ModifyScalingGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyScalingGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyScalingGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyScalingGroupResponse() = default;
};
class ModifyScalingRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> adjustmentType{};
  shared_ptr<long> adjustmentValue{};
  shared_ptr<long> cooldown{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingRuleId{};
  shared_ptr<string> scalingRuleName{};

  ModifyScalingRuleRequest() {}

  explicit ModifyScalingRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adjustmentType) {
      res["AdjustmentType"] = boost::any(*adjustmentType);
    }
    if (adjustmentValue) {
      res["AdjustmentValue"] = boost::any(*adjustmentValue);
    }
    if (cooldown) {
      res["Cooldown"] = boost::any(*cooldown);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (scalingRuleId) {
      res["ScalingRuleId"] = boost::any(*scalingRuleId);
    }
    if (scalingRuleName) {
      res["ScalingRuleName"] = boost::any(*scalingRuleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdjustmentType") != m.end() && !m["AdjustmentType"].empty()) {
      adjustmentType = make_shared<string>(boost::any_cast<string>(m["AdjustmentType"]));
    }
    if (m.find("AdjustmentValue") != m.end() && !m["AdjustmentValue"].empty()) {
      adjustmentValue = make_shared<long>(boost::any_cast<long>(m["AdjustmentValue"]));
    }
    if (m.find("Cooldown") != m.end() && !m["Cooldown"].empty()) {
      cooldown = make_shared<long>(boost::any_cast<long>(m["Cooldown"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("ScalingRuleId") != m.end() && !m["ScalingRuleId"].empty()) {
      scalingRuleId = make_shared<string>(boost::any_cast<string>(m["ScalingRuleId"]));
    }
    if (m.find("ScalingRuleName") != m.end() && !m["ScalingRuleName"].empty()) {
      scalingRuleName = make_shared<string>(boost::any_cast<string>(m["ScalingRuleName"]));
    }
  }


  virtual ~ModifyScalingRuleRequest() = default;
};
class ModifyScalingRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyScalingRuleResponseBody() {}

  explicit ModifyScalingRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyScalingRuleResponseBody() = default;
};
class ModifyScalingRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyScalingRuleResponseBody> body{};

  ModifyScalingRuleResponse() {}

  explicit ModifyScalingRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyScalingRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyScalingRuleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyScalingRuleResponse() = default;
};
class ModifyScheduledTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> launchExpirationTime{};
  shared_ptr<string> launchTime{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> recurrenceEndTime{};
  shared_ptr<string> recurrenceType{};
  shared_ptr<string> recurrenceValue{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scheduledAction{};
  shared_ptr<string> scheduledTaskId{};
  shared_ptr<string> scheduledTaskName{};
  shared_ptr<bool> taskEnabled{};

  ModifyScheduledTaskRequest() {}

  explicit ModifyScheduledTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (launchExpirationTime) {
      res["LaunchExpirationTime"] = boost::any(*launchExpirationTime);
    }
    if (launchTime) {
      res["LaunchTime"] = boost::any(*launchTime);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (recurrenceEndTime) {
      res["RecurrenceEndTime"] = boost::any(*recurrenceEndTime);
    }
    if (recurrenceType) {
      res["RecurrenceType"] = boost::any(*recurrenceType);
    }
    if (recurrenceValue) {
      res["RecurrenceValue"] = boost::any(*recurrenceValue);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scheduledAction) {
      res["ScheduledAction"] = boost::any(*scheduledAction);
    }
    if (scheduledTaskId) {
      res["ScheduledTaskId"] = boost::any(*scheduledTaskId);
    }
    if (scheduledTaskName) {
      res["ScheduledTaskName"] = boost::any(*scheduledTaskName);
    }
    if (taskEnabled) {
      res["TaskEnabled"] = boost::any(*taskEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LaunchExpirationTime") != m.end() && !m["LaunchExpirationTime"].empty()) {
      launchExpirationTime = make_shared<long>(boost::any_cast<long>(m["LaunchExpirationTime"]));
    }
    if (m.find("LaunchTime") != m.end() && !m["LaunchTime"].empty()) {
      launchTime = make_shared<string>(boost::any_cast<string>(m["LaunchTime"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RecurrenceEndTime") != m.end() && !m["RecurrenceEndTime"].empty()) {
      recurrenceEndTime = make_shared<string>(boost::any_cast<string>(m["RecurrenceEndTime"]));
    }
    if (m.find("RecurrenceType") != m.end() && !m["RecurrenceType"].empty()) {
      recurrenceType = make_shared<string>(boost::any_cast<string>(m["RecurrenceType"]));
    }
    if (m.find("RecurrenceValue") != m.end() && !m["RecurrenceValue"].empty()) {
      recurrenceValue = make_shared<string>(boost::any_cast<string>(m["RecurrenceValue"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ScheduledAction") != m.end() && !m["ScheduledAction"].empty()) {
      scheduledAction = make_shared<string>(boost::any_cast<string>(m["ScheduledAction"]));
    }
    if (m.find("ScheduledTaskId") != m.end() && !m["ScheduledTaskId"].empty()) {
      scheduledTaskId = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskId"]));
    }
    if (m.find("ScheduledTaskName") != m.end() && !m["ScheduledTaskName"].empty()) {
      scheduledTaskName = make_shared<string>(boost::any_cast<string>(m["ScheduledTaskName"]));
    }
    if (m.find("TaskEnabled") != m.end() && !m["TaskEnabled"].empty()) {
      taskEnabled = make_shared<bool>(boost::any_cast<bool>(m["TaskEnabled"]));
    }
  }


  virtual ~ModifyScheduledTaskRequest() = default;
};
class ModifyScheduledTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyScheduledTaskResponseBody() {}

  explicit ModifyScheduledTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyScheduledTaskResponseBody() = default;
};
class ModifyScheduledTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyScheduledTaskResponseBody> body{};

  ModifyScheduledTaskResponse() {}

  explicit ModifyScheduledTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyScheduledTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyScheduledTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyScheduledTaskResponse() = default;
};
class RemoveInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<string> ownerAccount{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scalingGroupId{};

  RemoveInstancesRequest() {}

  explicit RemoveInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
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
    if (scalingGroupId) {
      res["ScalingGroupId"] = boost::any(*scalingGroupId);
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
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
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
    if (m.find("ScalingGroupId") != m.end() && !m["ScalingGroupId"].empty()) {
      scalingGroupId = make_shared<string>(boost::any_cast<string>(m["ScalingGroupId"]));
    }
  }


  virtual ~RemoveInstancesRequest() = default;
};
class RemoveInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> scalingActivityId{};

  RemoveInstancesResponseBody() {}

  explicit RemoveInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scalingActivityId) {
      res["ScalingActivityId"] = boost::any(*scalingActivityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScalingActivityId") != m.end() && !m["ScalingActivityId"].empty()) {
      scalingActivityId = make_shared<string>(boost::any_cast<string>(m["ScalingActivityId"]));
    }
  }


  virtual ~RemoveInstancesResponseBody() = default;
};
class RemoveInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveInstancesResponseBody> body{};

  RemoveInstancesResponse() {}

  explicit RemoveInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveInstancesResponse() = default;
};
class VerifyAuthenticationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> uid{};

  VerifyAuthenticationRequest() {}

  explicit VerifyAuthenticationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (uid) {
      res["Uid"] = boost::any(*uid);
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
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~VerifyAuthenticationRequest() = default;
};
class VerifyAuthenticationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VerifyAuthenticationResponseBody() {}

  explicit VerifyAuthenticationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VerifyAuthenticationResponseBody() = default;
};
class VerifyAuthenticationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyAuthenticationResponseBody> body{};

  VerifyAuthenticationResponse() {}

  explicit VerifyAuthenticationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyAuthenticationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyAuthenticationResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyAuthenticationResponse() = default;
};
class VerifyUserRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};

  VerifyUserRequest() {}

  explicit VerifyUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
  }


  virtual ~VerifyUserRequest() = default;
};
class VerifyUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  VerifyUserResponse() {}

  explicit VerifyUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

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
  }


  virtual ~VerifyUserResponse() = default;
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
  AttachInstancesResponse attachInstancesWithOptions(shared_ptr<AttachInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachInstancesResponse attachInstances(shared_ptr<AttachInstancesRequest> request);
  CreateScalingConfigurationResponse createScalingConfigurationWithOptions(shared_ptr<CreateScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScalingConfigurationResponse createScalingConfiguration(shared_ptr<CreateScalingConfigurationRequest> request);
  CreateScalingGroupResponse createScalingGroupWithOptions(shared_ptr<CreateScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScalingGroupResponse createScalingGroup(shared_ptr<CreateScalingGroupRequest> request);
  CreateScalingRuleResponse createScalingRuleWithOptions(shared_ptr<CreateScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScalingRuleResponse createScalingRule(shared_ptr<CreateScalingRuleRequest> request);
  CreateScheduledTaskResponse createScheduledTaskWithOptions(shared_ptr<CreateScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateScheduledTaskResponse createScheduledTask(shared_ptr<CreateScheduledTaskRequest> request);
  DeleteScalingConfigurationResponse deleteScalingConfigurationWithOptions(shared_ptr<DeleteScalingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScalingConfigurationResponse deleteScalingConfiguration(shared_ptr<DeleteScalingConfigurationRequest> request);
  DeleteScalingGroupResponse deleteScalingGroupWithOptions(shared_ptr<DeleteScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScalingGroupResponse deleteScalingGroup(shared_ptr<DeleteScalingGroupRequest> request);
  DeleteScalingRuleResponse deleteScalingRuleWithOptions(shared_ptr<DeleteScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScalingRuleResponse deleteScalingRule(shared_ptr<DeleteScalingRuleRequest> request);
  DeleteScheduledTaskResponse deleteScheduledTaskWithOptions(shared_ptr<DeleteScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteScheduledTaskResponse deleteScheduledTask(shared_ptr<DeleteScheduledTaskRequest> request);
  DescribeAccountAttributesResponse describeAccountAttributesWithOptions(shared_ptr<DescribeAccountAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountAttributesResponse describeAccountAttributes(shared_ptr<DescribeAccountAttributesRequest> request);
  DescribeCapacityHistoryResponse describeCapacityHistoryWithOptions(shared_ptr<DescribeCapacityHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCapacityHistoryResponse describeCapacityHistory(shared_ptr<DescribeCapacityHistoryRequest> request);
  DescribeLimitationResponse describeLimitationWithOptions(shared_ptr<DescribeLimitationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLimitationResponse describeLimitation(shared_ptr<DescribeLimitationRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeScalingActivitiesResponse describeScalingActivitiesWithOptions(shared_ptr<DescribeScalingActivitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScalingActivitiesResponse describeScalingActivities(shared_ptr<DescribeScalingActivitiesRequest> request);
  DescribeScalingActivityDetailResponse describeScalingActivityDetailWithOptions(shared_ptr<DescribeScalingActivityDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScalingActivityDetailResponse describeScalingActivityDetail(shared_ptr<DescribeScalingActivityDetailRequest> request);
  DescribeScalingConfigurationsResponse describeScalingConfigurationsWithOptions(shared_ptr<DescribeScalingConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScalingConfigurationsResponse describeScalingConfigurations(shared_ptr<DescribeScalingConfigurationsRequest> request);
  DescribeScalingGroupsResponse describeScalingGroupsWithOptions(shared_ptr<DescribeScalingGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScalingGroupsResponse describeScalingGroups(shared_ptr<DescribeScalingGroupsRequest> request);
  DescribeScalingInstancesResponse describeScalingInstancesWithOptions(shared_ptr<DescribeScalingInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScalingInstancesResponse describeScalingInstances(shared_ptr<DescribeScalingInstancesRequest> request);
  DescribeScalingRulesResponse describeScalingRulesWithOptions(shared_ptr<DescribeScalingRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScalingRulesResponse describeScalingRules(shared_ptr<DescribeScalingRulesRequest> request);
  DescribeScheduledTasksResponse describeScheduledTasksWithOptions(shared_ptr<DescribeScheduledTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeScheduledTasksResponse describeScheduledTasks(shared_ptr<DescribeScheduledTasksRequest> request);
  DetachInstancesResponse detachInstancesWithOptions(shared_ptr<DetachInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachInstancesResponse detachInstances(shared_ptr<DetachInstancesRequest> request);
  DisableScalingGroupResponse disableScalingGroupWithOptions(shared_ptr<DisableScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableScalingGroupResponse disableScalingGroup(shared_ptr<DisableScalingGroupRequest> request);
  EnableScalingGroupResponse enableScalingGroupWithOptions(shared_ptr<EnableScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableScalingGroupResponse enableScalingGroup(shared_ptr<EnableScalingGroupRequest> request);
  ExecuteScalingRuleResponse executeScalingRuleWithOptions(shared_ptr<ExecuteScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteScalingRuleResponse executeScalingRule(shared_ptr<ExecuteScalingRuleRequest> request);
  ModifyScalingGroupResponse modifyScalingGroupWithOptions(shared_ptr<ModifyScalingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyScalingGroupResponse modifyScalingGroup(shared_ptr<ModifyScalingGroupRequest> request);
  ModifyScalingRuleResponse modifyScalingRuleWithOptions(shared_ptr<ModifyScalingRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyScalingRuleResponse modifyScalingRule(shared_ptr<ModifyScalingRuleRequest> request);
  ModifyScheduledTaskResponse modifyScheduledTaskWithOptions(shared_ptr<ModifyScheduledTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyScheduledTaskResponse modifyScheduledTask(shared_ptr<ModifyScheduledTaskRequest> request);
  RemoveInstancesResponse removeInstancesWithOptions(shared_ptr<RemoveInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveInstancesResponse removeInstances(shared_ptr<RemoveInstancesRequest> request);
  VerifyAuthenticationResponse verifyAuthenticationWithOptions(shared_ptr<VerifyAuthenticationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyAuthenticationResponse verifyAuthentication(shared_ptr<VerifyAuthenticationRequest> request);
  VerifyUserResponse verifyUserWithOptions(shared_ptr<VerifyUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyUserResponse verifyUser(shared_ptr<VerifyUserRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ess20160722

#endif
