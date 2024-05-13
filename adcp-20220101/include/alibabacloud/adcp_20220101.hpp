// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ADCP20220101_H_
#define ALIBABACLOUD_ADCP20220101_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Adcp20220101 {
class Tag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  Tag() {}

  explicit Tag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~Tag() = default;
};
class AttachClusterToHubRequest : public Darabonba::Model {
public:
  shared_ptr<bool> attachToMesh{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterIds{};

  AttachClusterToHubRequest() {}

  explicit AttachClusterToHubRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attachToMesh) {
      res["AttachToMesh"] = boost::any(*attachToMesh);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterIds) {
      res["ClusterIds"] = boost::any(*clusterIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttachToMesh") != m.end() && !m["AttachToMesh"].empty()) {
      attachToMesh = make_shared<bool>(boost::any_cast<bool>(m["AttachToMesh"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterIds") != m.end() && !m["ClusterIds"].empty()) {
      clusterIds = make_shared<string>(boost::any_cast<string>(m["ClusterIds"]));
    }
  }


  virtual ~AttachClusterToHubRequest() = default;
};
class AttachClusterToHubResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<string>> managedClusterIds{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  AttachClusterToHubResponseBody() {}

  explicit AttachClusterToHubResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (managedClusterIds) {
      res["ManagedClusterIds"] = boost::any(*managedClusterIds);
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
    if (m.find("ManagedClusterIds") != m.end() && !m["ManagedClusterIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ManagedClusterIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ManagedClusterIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      managedClusterIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~AttachClusterToHubResponseBody() = default;
};
class AttachClusterToHubResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachClusterToHubResponseBody> body{};

  AttachClusterToHubResponse() {}

  explicit AttachClusterToHubResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachClusterToHubResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachClusterToHubResponseBody>(model1);
      }
    }
  }


  virtual ~AttachClusterToHubResponse() = default;
};
class ChangeResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  ChangeResourceGroupRequest() {}

  explicit ChangeResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewResourceGroupId") != m.end() && !m["NewResourceGroupId"].empty()) {
      newResourceGroupId = make_shared<string>(boost::any_cast<string>(m["NewResourceGroupId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~ChangeResourceGroupRequest() = default;
};
class ChangeResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ChangeResourceGroupResponseBody() {}

  explicit ChangeResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangeResourceGroupResponseBody() = default;
};
class ChangeResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangeResourceGroupResponseBody> body{};

  ChangeResourceGroupResponse() {}

  explicit ChangeResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeResourceGroupResponse() = default;
};
class CreateHubClusterRequest : public Darabonba::Model {
public:
  shared_ptr<bool> apiServerPublicEip{};
  shared_ptr<bool> argoServerEnabled{};
  shared_ptr<bool> auditLogEnabled{};
  shared_ptr<bool> isEnterpriseSecurityGroup{};
  shared_ptr<string> name{};
  shared_ptr<string> priceLimit{};
  shared_ptr<string> profile{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupID{};
  shared_ptr<vector<Tag>> tag{};
  shared_ptr<string> vSwitches{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> workflowScheduleMode{};

  CreateHubClusterRequest() {}

  explicit CreateHubClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiServerPublicEip) {
      res["ApiServerPublicEip"] = boost::any(*apiServerPublicEip);
    }
    if (argoServerEnabled) {
      res["ArgoServerEnabled"] = boost::any(*argoServerEnabled);
    }
    if (auditLogEnabled) {
      res["AuditLogEnabled"] = boost::any(*auditLogEnabled);
    }
    if (isEnterpriseSecurityGroup) {
      res["IsEnterpriseSecurityGroup"] = boost::any(*isEnterpriseSecurityGroup);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (workflowScheduleMode) {
      res["WorkflowScheduleMode"] = boost::any(*workflowScheduleMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiServerPublicEip") != m.end() && !m["ApiServerPublicEip"].empty()) {
      apiServerPublicEip = make_shared<bool>(boost::any_cast<bool>(m["ApiServerPublicEip"]));
    }
    if (m.find("ArgoServerEnabled") != m.end() && !m["ArgoServerEnabled"].empty()) {
      argoServerEnabled = make_shared<bool>(boost::any_cast<bool>(m["ArgoServerEnabled"]));
    }
    if (m.find("AuditLogEnabled") != m.end() && !m["AuditLogEnabled"].empty()) {
      auditLogEnabled = make_shared<bool>(boost::any_cast<bool>(m["AuditLogEnabled"]));
    }
    if (m.find("IsEnterpriseSecurityGroup") != m.end() && !m["IsEnterpriseSecurityGroup"].empty()) {
      isEnterpriseSecurityGroup = make_shared<bool>(boost::any_cast<bool>(m["IsEnterpriseSecurityGroup"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<string>(boost::any_cast<string>(m["PriceLimit"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<Tag>>(expect1);
      }
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vSwitches = make_shared<string>(boost::any_cast<string>(m["VSwitches"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("WorkflowScheduleMode") != m.end() && !m["WorkflowScheduleMode"].empty()) {
      workflowScheduleMode = make_shared<string>(boost::any_cast<string>(m["WorkflowScheduleMode"]));
    }
  }


  virtual ~CreateHubClusterRequest() = default;
};
class CreateHubClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> apiServerPublicEip{};
  shared_ptr<bool> argoServerEnabled{};
  shared_ptr<bool> auditLogEnabled{};
  shared_ptr<bool> isEnterpriseSecurityGroup{};
  shared_ptr<string> name{};
  shared_ptr<string> priceLimit{};
  shared_ptr<string> profile{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupID{};
  shared_ptr<string> tagShrink{};
  shared_ptr<string> vSwitches{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> workflowScheduleMode{};

  CreateHubClusterShrinkRequest() {}

  explicit CreateHubClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiServerPublicEip) {
      res["ApiServerPublicEip"] = boost::any(*apiServerPublicEip);
    }
    if (argoServerEnabled) {
      res["ArgoServerEnabled"] = boost::any(*argoServerEnabled);
    }
    if (auditLogEnabled) {
      res["AuditLogEnabled"] = boost::any(*auditLogEnabled);
    }
    if (isEnterpriseSecurityGroup) {
      res["IsEnterpriseSecurityGroup"] = boost::any(*isEnterpriseSecurityGroup);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (workflowScheduleMode) {
      res["WorkflowScheduleMode"] = boost::any(*workflowScheduleMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiServerPublicEip") != m.end() && !m["ApiServerPublicEip"].empty()) {
      apiServerPublicEip = make_shared<bool>(boost::any_cast<bool>(m["ApiServerPublicEip"]));
    }
    if (m.find("ArgoServerEnabled") != m.end() && !m["ArgoServerEnabled"].empty()) {
      argoServerEnabled = make_shared<bool>(boost::any_cast<bool>(m["ArgoServerEnabled"]));
    }
    if (m.find("AuditLogEnabled") != m.end() && !m["AuditLogEnabled"].empty()) {
      auditLogEnabled = make_shared<bool>(boost::any_cast<bool>(m["AuditLogEnabled"]));
    }
    if (m.find("IsEnterpriseSecurityGroup") != m.end() && !m["IsEnterpriseSecurityGroup"].empty()) {
      isEnterpriseSecurityGroup = make_shared<bool>(boost::any_cast<bool>(m["IsEnterpriseSecurityGroup"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<string>(boost::any_cast<string>(m["PriceLimit"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vSwitches = make_shared<string>(boost::any_cast<string>(m["VSwitches"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("WorkflowScheduleMode") != m.end() && !m["WorkflowScheduleMode"].empty()) {
      workflowScheduleMode = make_shared<string>(boost::any_cast<string>(m["WorkflowScheduleMode"]));
    }
  }


  virtual ~CreateHubClusterShrinkRequest() = default;
};
class CreateHubClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateHubClusterResponseBody() {}

  explicit CreateHubClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateHubClusterResponseBody() = default;
};
class CreateHubClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateHubClusterResponseBody> body{};

  CreateHubClusterResponse() {}

  explicit CreateHubClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateHubClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateHubClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateHubClusterResponse() = default;
};
class DeleteHubClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> force{};
  shared_ptr<vector<string>> retainResources{};

  DeleteHubClusterRequest() {}

  explicit DeleteHubClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (retainResources) {
      res["RetainResources"] = boost::any(*retainResources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("RetainResources") != m.end() && !m["RetainResources"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RetainResources"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RetainResources"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      retainResources = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteHubClusterRequest() = default;
};
class DeleteHubClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> force{};
  shared_ptr<string> retainResourcesShrink{};

  DeleteHubClusterShrinkRequest() {}

  explicit DeleteHubClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (retainResourcesShrink) {
      res["RetainResources"] = boost::any(*retainResourcesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("RetainResources") != m.end() && !m["RetainResources"].empty()) {
      retainResourcesShrink = make_shared<string>(boost::any_cast<string>(m["RetainResources"]));
    }
  }


  virtual ~DeleteHubClusterShrinkRequest() = default;
};
class DeleteHubClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  DeleteHubClusterResponseBody() {}

  explicit DeleteHubClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteHubClusterResponseBody() = default;
};
class DeleteHubClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteHubClusterResponseBody> body{};

  DeleteHubClusterResponse() {}

  explicit DeleteHubClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteHubClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteHubClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteHubClusterResponse() = default;
};
class DeletePolicyInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<string>> clusterIds{};
  shared_ptr<string> policyName{};

  DeletePolicyInstanceRequest() {}

  explicit DeletePolicyInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterIds) {
      res["ClusterIds"] = boost::any(*clusterIds);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
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
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~DeletePolicyInstanceRequest() = default;
};
class DeletePolicyInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterIdsShrink{};
  shared_ptr<string> policyName{};

  DeletePolicyInstanceShrinkRequest() {}

  explicit DeletePolicyInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterIdsShrink) {
      res["ClusterIds"] = boost::any(*clusterIdsShrink);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterIds") != m.end() && !m["ClusterIds"].empty()) {
      clusterIdsShrink = make_shared<string>(boost::any_cast<string>(m["ClusterIds"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~DeletePolicyInstanceShrinkRequest() = default;
};
class DeletePolicyInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePolicyInstanceResponseBody() {}

  explicit DeletePolicyInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePolicyInstanceResponseBody() = default;
};
class DeletePolicyInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePolicyInstanceResponseBody> body{};

  DeletePolicyInstanceResponse() {}

  explicit DeletePolicyInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePolicyInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePolicyInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePolicyInstanceResponse() = default;
};
class DeleteUserPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> userId{};

  DeleteUserPermissionRequest() {}

  explicit DeleteUserPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteUserPermissionRequest() = default;
};
class DeleteUserPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserPermissionResponseBody() {}

  explicit DeleteUserPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserPermissionResponseBody() = default;
};
class DeleteUserPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserPermissionResponseBody> body{};

  DeleteUserPermissionResponse() {}

  explicit DeleteUserPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserPermissionResponse() = default;
};
class DeployPolicyInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<string>> clusterIds{};
  shared_ptr<vector<string>> namespaces{};
  shared_ptr<string> policyAction{};
  shared_ptr<string> policyName{};

  DeployPolicyInstanceRequest() {}

  explicit DeployPolicyInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterIds) {
      res["ClusterIds"] = boost::any(*clusterIds);
    }
    if (namespaces) {
      res["Namespaces"] = boost::any(*namespaces);
    }
    if (policyAction) {
      res["PolicyAction"] = boost::any(*policyAction);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
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
    if (m.find("Namespaces") != m.end() && !m["Namespaces"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Namespaces"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Namespaces"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      namespaces = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PolicyAction") != m.end() && !m["PolicyAction"].empty()) {
      policyAction = make_shared<string>(boost::any_cast<string>(m["PolicyAction"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~DeployPolicyInstanceRequest() = default;
};
class DeployPolicyInstanceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterIdsShrink{};
  shared_ptr<string> namespacesShrink{};
  shared_ptr<string> policyAction{};
  shared_ptr<string> policyName{};

  DeployPolicyInstanceShrinkRequest() {}

  explicit DeployPolicyInstanceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterIdsShrink) {
      res["ClusterIds"] = boost::any(*clusterIdsShrink);
    }
    if (namespacesShrink) {
      res["Namespaces"] = boost::any(*namespacesShrink);
    }
    if (policyAction) {
      res["PolicyAction"] = boost::any(*policyAction);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterIds") != m.end() && !m["ClusterIds"].empty()) {
      clusterIdsShrink = make_shared<string>(boost::any_cast<string>(m["ClusterIds"]));
    }
    if (m.find("Namespaces") != m.end() && !m["Namespaces"].empty()) {
      namespacesShrink = make_shared<string>(boost::any_cast<string>(m["Namespaces"]));
    }
    if (m.find("PolicyAction") != m.end() && !m["PolicyAction"].empty()) {
      policyAction = make_shared<string>(boost::any_cast<string>(m["PolicyAction"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~DeployPolicyInstanceShrinkRequest() = default;
};
class DeployPolicyInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeployPolicyInstanceResponseBody() {}

  explicit DeployPolicyInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeployPolicyInstanceResponseBody() = default;
};
class DeployPolicyInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployPolicyInstanceResponseBody> body{};

  DeployPolicyInstanceResponse() {}

  explicit DeployPolicyInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeployPolicyInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployPolicyInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeployPolicyInstanceResponse() = default;
};
class DescribeHubClusterDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeHubClusterDetailsRequest() {}

  explicit DescribeHubClusterDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeHubClusterDetailsRequest() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterApiServer : public Darabonba::Model {
public:
  shared_ptr<string> apiServerEipId{};
  shared_ptr<bool> enabledPublic{};
  shared_ptr<string> loadBalancerId{};

  DescribeHubClusterDetailsResponseBodyClusterApiServer() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterApiServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiServerEipId) {
      res["ApiServerEipId"] = boost::any(*apiServerEipId);
    }
    if (enabledPublic) {
      res["EnabledPublic"] = boost::any(*enabledPublic);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiServerEipId") != m.end() && !m["ApiServerEipId"].empty()) {
      apiServerEipId = make_shared<string>(boost::any_cast<string>(m["ApiServerEipId"]));
    }
    if (m.find("EnabledPublic") != m.end() && !m["EnabledPublic"].empty()) {
      enabledPublic = make_shared<bool>(boost::any_cast<bool>(m["EnabledPublic"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterApiServer() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneGitOps : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accessControlList{};
  shared_ptr<bool> enabled{};
  shared_ptr<bool> HAEnabled{};
  shared_ptr<bool> publicAccessEnabled{};

  DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneGitOps() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneGitOps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessControlList) {
      res["AccessControlList"] = boost::any(*accessControlList);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (HAEnabled) {
      res["HAEnabled"] = boost::any(*HAEnabled);
    }
    if (publicAccessEnabled) {
      res["PublicAccessEnabled"] = boost::any(*publicAccessEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessControlList") != m.end() && !m["AccessControlList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccessControlList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccessControlList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accessControlList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("HAEnabled") != m.end() && !m["HAEnabled"].empty()) {
      HAEnabled = make_shared<bool>(boost::any_cast<bool>(m["HAEnabled"]));
    }
    if (m.find("PublicAccessEnabled") != m.end() && !m["PublicAccessEnabled"].empty()) {
      publicAccessEnabled = make_shared<bool>(boost::any_cast<bool>(m["PublicAccessEnabled"]));
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneGitOps() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlowArgoWorkflow : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accessControlList{};
  shared_ptr<bool> enabled{};
  shared_ptr<bool> publicAccessEnabled{};
  shared_ptr<string> serverEnabled{};

  DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlowArgoWorkflow() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlowArgoWorkflow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessControlList) {
      res["AccessControlList"] = boost::any(*accessControlList);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (publicAccessEnabled) {
      res["PublicAccessEnabled"] = boost::any(*publicAccessEnabled);
    }
    if (serverEnabled) {
      res["ServerEnabled"] = boost::any(*serverEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessControlList") != m.end() && !m["AccessControlList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccessControlList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccessControlList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accessControlList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("PublicAccessEnabled") != m.end() && !m["PublicAccessEnabled"].empty()) {
      publicAccessEnabled = make_shared<bool>(boost::any_cast<bool>(m["PublicAccessEnabled"]));
    }
    if (m.find("ServerEnabled") != m.end() && !m["ServerEnabled"].empty()) {
      serverEnabled = make_shared<string>(boost::any_cast<string>(m["ServerEnabled"]));
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlowArgoWorkflow() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlow : public Darabonba::Model {
public:
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlowArgoWorkflow> argoWorkflow{};

  DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlow() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlow(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (argoWorkflow) {
      res["ArgoWorkflow"] = argoWorkflow ? boost::any(argoWorkflow->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArgoWorkflow") != m.end() && !m["ArgoWorkflow"].empty()) {
      if (typeid(map<string, boost::any>) == m["ArgoWorkflow"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlowArgoWorkflow model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ArgoWorkflow"]));
        argoWorkflow = make_shared<DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlowArgoWorkflow>(model1);
      }
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlow() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOne : public Darabonba::Model {
public:
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneGitOps> gitOps{};
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlow> workFlow{};

  DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOne() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOne(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gitOps) {
      res["GitOps"] = gitOps ? boost::any(gitOps->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workFlow) {
      res["WorkFlow"] = workFlow ? boost::any(workFlow->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GitOps") != m.end() && !m["GitOps"].empty()) {
      if (typeid(map<string, boost::any>) == m["GitOps"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneGitOps model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GitOps"]));
        gitOps = make_shared<DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneGitOps>(model1);
      }
    }
    if (m.find("WorkFlow") != m.end() && !m["WorkFlow"].empty()) {
      if (typeid(map<string, boost::any>) == m["WorkFlow"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlow model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WorkFlow"]));
        workFlow = make_shared<DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOneWorkFlow>(model1);
      }
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOne() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaData : public Darabonba::Model {
public:
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOne> ACKOne{};

  DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaData() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ACKOne) {
      res["ACKOne"] = ACKOne ? boost::any(ACKOne->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ACKOne") != m.end() && !m["ACKOne"].empty()) {
      if (typeid(map<string, boost::any>) == m["ACKOne"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOne model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ACKOne"]));
        ACKOne = make_shared<DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaDataACKOne>(model1);
      }
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaData() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterClusterInfoTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeHubClusterDetailsResponseBodyClusterClusterInfoTags() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterClusterInfoTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeHubClusterDetailsResponseBodyClusterClusterInfoTags() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterClusterInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterSpec{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaData> metaData{};
  shared_ptr<string> name{};
  shared_ptr<string> profile{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupID{};
  shared_ptr<string> state{};
  shared_ptr<vector<DescribeHubClusterDetailsResponseBodyClusterClusterInfoTags>> tags{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> version{};

  DescribeHubClusterDetailsResponseBodyClusterClusterInfo() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterClusterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterSpec) {
      res["ClusterSpec"] = boost::any(*clusterSpec);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (metaData) {
      res["MetaData"] = metaData ? boost::any(metaData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterSpec") != m.end() && !m["ClusterSpec"].empty()) {
      clusterSpec = make_shared<string>(boost::any_cast<string>(m["ClusterSpec"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("MetaData") != m.end() && !m["MetaData"].empty()) {
      if (typeid(map<string, boost::any>) == m["MetaData"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MetaData"]));
        metaData = make_shared<DescribeHubClusterDetailsResponseBodyClusterClusterInfoMetaData>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeHubClusterDetailsResponseBodyClusterClusterInfoTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHubClusterDetailsResponseBodyClusterClusterInfoTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeHubClusterDetailsResponseBodyClusterClusterInfoTags>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterClusterInfo() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterConditions : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> reason{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  DescribeHubClusterDetailsResponseBodyClusterConditions() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterConditions() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> intranetApiServerEndpoint{};
  shared_ptr<string> publicApiServerEndpoint{};

  DescribeHubClusterDetailsResponseBodyClusterEndpoints() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intranetApiServerEndpoint) {
      res["IntranetApiServerEndpoint"] = boost::any(*intranetApiServerEndpoint);
    }
    if (publicApiServerEndpoint) {
      res["PublicApiServerEndpoint"] = boost::any(*publicApiServerEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntranetApiServerEndpoint") != m.end() && !m["IntranetApiServerEndpoint"].empty()) {
      intranetApiServerEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetApiServerEndpoint"]));
    }
    if (m.find("PublicApiServerEndpoint") != m.end() && !m["PublicApiServerEndpoint"].empty()) {
      publicApiServerEndpoint = make_shared<string>(boost::any_cast<string>(m["PublicApiServerEndpoint"]));
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterEndpoints() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterLogConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableLog{};
  shared_ptr<string> logProject{};
  shared_ptr<string> logStoreTTL{};

  DescribeHubClusterDetailsResponseBodyClusterLogConfig() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableLog) {
      res["EnableLog"] = boost::any(*enableLog);
    }
    if (logProject) {
      res["LogProject"] = boost::any(*logProject);
    }
    if (logStoreTTL) {
      res["LogStoreTTL"] = boost::any(*logStoreTTL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableLog") != m.end() && !m["EnableLog"].empty()) {
      enableLog = make_shared<bool>(boost::any_cast<bool>(m["EnableLog"]));
    }
    if (m.find("LogProject") != m.end() && !m["LogProject"].empty()) {
      logProject = make_shared<string>(boost::any_cast<string>(m["LogProject"]));
    }
    if (m.find("LogStoreTTL") != m.end() && !m["LogStoreTTL"].empty()) {
      logStoreTTL = make_shared<string>(boost::any_cast<string>(m["LogStoreTTL"]));
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterLogConfig() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterMeshConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableMesh{};
  shared_ptr<string> meshId{};

  DescribeHubClusterDetailsResponseBodyClusterMeshConfig() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterMeshConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableMesh) {
      res["EnableMesh"] = boost::any(*enableMesh);
    }
    if (meshId) {
      res["MeshId"] = boost::any(*meshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableMesh") != m.end() && !m["EnableMesh"].empty()) {
      enableMesh = make_shared<bool>(boost::any_cast<bool>(m["EnableMesh"]));
    }
    if (m.find("MeshId") != m.end() && !m["MeshId"].empty()) {
      meshId = make_shared<string>(boost::any_cast<string>(m["MeshId"]));
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterMeshConfig() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterNetwork : public Darabonba::Model {
public:
  shared_ptr<string> clusterDomain{};
  shared_ptr<string> IPStack{};
  shared_ptr<vector<string>> securityGroupIDs{};
  shared_ptr<vector<string>> vSwitches{};
  shared_ptr<string> vpcId{};

  DescribeHubClusterDetailsResponseBodyClusterNetwork() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterDomain) {
      res["ClusterDomain"] = boost::any(*clusterDomain);
    }
    if (IPStack) {
      res["IPStack"] = boost::any(*IPStack);
    }
    if (securityGroupIDs) {
      res["SecurityGroupIDs"] = boost::any(*securityGroupIDs);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterDomain") != m.end() && !m["ClusterDomain"].empty()) {
      clusterDomain = make_shared<string>(boost::any_cast<string>(m["ClusterDomain"]));
    }
    if (m.find("IPStack") != m.end() && !m["IPStack"].empty()) {
      IPStack = make_shared<string>(boost::any_cast<string>(m["IPStack"]));
    }
    if (m.find("SecurityGroupIDs") != m.end() && !m["SecurityGroupIDs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIDs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIDs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIDs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterNetwork() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnitsVSwitches : public Darabonba::Model {
public:
  shared_ptr<string> vswitchId{};
  shared_ptr<string> zoneId{};

  DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnitsVSwitches() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnitsVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vswitchId) {
      res["VswitchId"] = boost::any(*vswitchId);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VswitchId") != m.end() && !m["VswitchId"].empty()) {
      vswitchId = make_shared<string>(boost::any_cast<string>(m["VswitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnitsVSwitches() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnits : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnitsVSwitches>> vSwitches{};
  shared_ptr<string> vpcId{};

  DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnits() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnits(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vSwitches) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitches"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnitsVSwitches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnitsVSwitches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitches = make_shared<vector<DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnitsVSwitches>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnits() = default;
};
class DescribeHubClusterDetailsResponseBodyClusterWorkflowConfig : public Darabonba::Model {
public:
  shared_ptr<bool> argoServerEnabled{};
  shared_ptr<string> priceLimit{};
  shared_ptr<string> workflowScheduleMode{};
  shared_ptr<vector<DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnits>> workflowUnits{};

  DescribeHubClusterDetailsResponseBodyClusterWorkflowConfig() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterWorkflowConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (argoServerEnabled) {
      res["ArgoServerEnabled"] = boost::any(*argoServerEnabled);
    }
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
    }
    if (workflowScheduleMode) {
      res["WorkflowScheduleMode"] = boost::any(*workflowScheduleMode);
    }
    if (workflowUnits) {
      vector<boost::any> temp1;
      for(auto item1:*workflowUnits){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WorkflowUnits"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArgoServerEnabled") != m.end() && !m["ArgoServerEnabled"].empty()) {
      argoServerEnabled = make_shared<bool>(boost::any_cast<bool>(m["ArgoServerEnabled"]));
    }
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<string>(boost::any_cast<string>(m["PriceLimit"]));
    }
    if (m.find("WorkflowScheduleMode") != m.end() && !m["WorkflowScheduleMode"].empty()) {
      workflowScheduleMode = make_shared<string>(boost::any_cast<string>(m["WorkflowScheduleMode"]));
    }
    if (m.find("WorkflowUnits") != m.end() && !m["WorkflowUnits"].empty()) {
      if (typeid(vector<boost::any>) == m["WorkflowUnits"].type()) {
        vector<DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnits> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WorkflowUnits"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnits model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workflowUnits = make_shared<vector<DescribeHubClusterDetailsResponseBodyClusterWorkflowConfigWorkflowUnits>>(expect1);
      }
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyClusterWorkflowConfig() = default;
};
class DescribeHubClusterDetailsResponseBodyCluster : public Darabonba::Model {
public:
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterApiServer> apiServer{};
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterClusterInfo> clusterInfo{};
  shared_ptr<vector<DescribeHubClusterDetailsResponseBodyClusterConditions>> conditions{};
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterEndpoints> endpoints{};
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterLogConfig> logConfig{};
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterMeshConfig> meshConfig{};
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterNetwork> network{};
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterWorkflowConfig> workflowConfig{};

  DescribeHubClusterDetailsResponseBodyCluster() {}

  explicit DescribeHubClusterDetailsResponseBodyCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiServer) {
      res["ApiServer"] = apiServer ? boost::any(apiServer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterInfo) {
      res["ClusterInfo"] = clusterInfo ? boost::any(clusterInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Conditions"] = boost::any(temp1);
    }
    if (endpoints) {
      res["Endpoints"] = endpoints ? boost::any(endpoints->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logConfig) {
      res["LogConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (meshConfig) {
      res["MeshConfig"] = meshConfig ? boost::any(meshConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (workflowConfig) {
      res["WorkflowConfig"] = workflowConfig ? boost::any(workflowConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiServer") != m.end() && !m["ApiServer"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiServer"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterApiServer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiServer"]));
        apiServer = make_shared<DescribeHubClusterDetailsResponseBodyClusterApiServer>(model1);
      }
    }
    if (m.find("ClusterInfo") != m.end() && !m["ClusterInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterInfo"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterClusterInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterInfo"]));
        clusterInfo = make_shared<DescribeHubClusterDetailsResponseBodyClusterClusterInfo>(model1);
      }
    }
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["Conditions"].type()) {
        vector<DescribeHubClusterDetailsResponseBodyClusterConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHubClusterDetailsResponseBodyClusterConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<DescribeHubClusterDetailsResponseBodyClusterConditions>>(expect1);
      }
    }
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(map<string, boost::any>) == m["Endpoints"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterEndpoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Endpoints"]));
        endpoints = make_shared<DescribeHubClusterDetailsResponseBodyClusterEndpoints>(model1);
      }
    }
    if (m.find("LogConfig") != m.end() && !m["LogConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogConfig"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogConfig"]));
        logConfig = make_shared<DescribeHubClusterDetailsResponseBodyClusterLogConfig>(model1);
      }
    }
    if (m.find("MeshConfig") != m.end() && !m["MeshConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MeshConfig"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterMeshConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MeshConfig"]));
        meshConfig = make_shared<DescribeHubClusterDetailsResponseBodyClusterMeshConfig>(model1);
      }
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<DescribeHubClusterDetailsResponseBodyClusterNetwork>(model1);
      }
    }
    if (m.find("WorkflowConfig") != m.end() && !m["WorkflowConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["WorkflowConfig"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterWorkflowConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WorkflowConfig"]));
        workflowConfig = make_shared<DescribeHubClusterDetailsResponseBodyClusterWorkflowConfig>(model1);
      }
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBodyCluster() = default;
};
class DescribeHubClusterDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeHubClusterDetailsResponseBodyCluster> cluster{};
  shared_ptr<string> requestId{};

  DescribeHubClusterDetailsResponseBody() {}

  explicit DescribeHubClusterDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["Cluster"] = cluster ? boost::any(cluster->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cluster"].type()) {
        DescribeHubClusterDetailsResponseBodyCluster model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cluster"]));
        cluster = make_shared<DescribeHubClusterDetailsResponseBodyCluster>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeHubClusterDetailsResponseBody() = default;
};
class DescribeHubClusterDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHubClusterDetailsResponseBody> body{};

  DescribeHubClusterDetailsResponse() {}

  explicit DescribeHubClusterDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHubClusterDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHubClusterDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHubClusterDetailsResponse() = default;
};
class DescribeHubClusterKubeconfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> privateIpAddress{};

  DescribeHubClusterKubeconfigRequest() {}

  explicit DescribeHubClusterKubeconfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<bool>(boost::any_cast<bool>(m["PrivateIpAddress"]));
    }
  }


  virtual ~DescribeHubClusterKubeconfigRequest() = default;
};
class DescribeHubClusterKubeconfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> kubeconfig{};
  shared_ptr<string> requestId{};

  DescribeHubClusterKubeconfigResponseBody() {}

  explicit DescribeHubClusterKubeconfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kubeconfig) {
      res["Kubeconfig"] = boost::any(*kubeconfig);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Kubeconfig") != m.end() && !m["Kubeconfig"].empty()) {
      kubeconfig = make_shared<string>(boost::any_cast<string>(m["Kubeconfig"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeHubClusterKubeconfigResponseBody() = default;
};
class DescribeHubClusterKubeconfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHubClusterKubeconfigResponseBody> body{};

  DescribeHubClusterKubeconfigResponse() {}

  explicit DescribeHubClusterKubeconfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHubClusterKubeconfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHubClusterKubeconfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHubClusterKubeconfigResponse() = default;
};
class DescribeHubClusterLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeHubClusterLogsRequest() {}

  explicit DescribeHubClusterLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeHubClusterLogsRequest() = default;
};
class DescribeHubClusterLogsResponseBodyLogs : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterLog{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> logLevel{};

  DescribeHubClusterLogsResponseBodyLogs() {}

  explicit DescribeHubClusterLogsResponseBodyLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterLog) {
      res["ClusterLog"] = boost::any(*clusterLog);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (logLevel) {
      res["LogLevel"] = boost::any(*logLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterLog") != m.end() && !m["ClusterLog"].empty()) {
      clusterLog = make_shared<string>(boost::any_cast<string>(m["ClusterLog"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("LogLevel") != m.end() && !m["LogLevel"].empty()) {
      logLevel = make_shared<string>(boost::any_cast<string>(m["LogLevel"]));
    }
  }


  virtual ~DescribeHubClusterLogsResponseBodyLogs() = default;
};
class DescribeHubClusterLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHubClusterLogsResponseBodyLogs>> logs{};
  shared_ptr<string> requestId{};

  DescribeHubClusterLogsResponseBody() {}

  explicit DescribeHubClusterLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<DescribeHubClusterLogsResponseBodyLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Logs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHubClusterLogsResponseBodyLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logs = make_shared<vector<DescribeHubClusterLogsResponseBodyLogs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeHubClusterLogsResponseBody() = default;
};
class DescribeHubClusterLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHubClusterLogsResponseBody> body{};

  DescribeHubClusterLogsResponse() {}

  explicit DescribeHubClusterLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHubClusterLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHubClusterLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHubClusterLogsResponse() = default;
};
class DescribeHubClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> profile{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<Tag>> tag{};

  DescribeHubClustersRequest() {}

  explicit DescribeHubClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (profile) {
      res["Profile"] = boost::any(*profile);
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
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<Tag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Tag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<Tag>>(expect1);
      }
    }
  }


  virtual ~DescribeHubClustersRequest() = default;
};
class DescribeHubClustersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> profile{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tagShrink{};

  DescribeHubClustersShrinkRequest() {}

  explicit DescribeHubClustersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tagShrink) {
      res["Tag"] = boost::any(*tagShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tagShrink = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~DescribeHubClustersShrinkRequest() = default;
};
class DescribeHubClustersResponseBodyClustersApiServer : public Darabonba::Model {
public:
  shared_ptr<string> apiServerEipId{};
  shared_ptr<bool> enabledPublic{};
  shared_ptr<string> loadBalancerId{};

  DescribeHubClustersResponseBodyClustersApiServer() {}

  explicit DescribeHubClustersResponseBodyClustersApiServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiServerEipId) {
      res["ApiServerEipId"] = boost::any(*apiServerEipId);
    }
    if (enabledPublic) {
      res["EnabledPublic"] = boost::any(*enabledPublic);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiServerEipId") != m.end() && !m["ApiServerEipId"].empty()) {
      apiServerEipId = make_shared<string>(boost::any_cast<string>(m["ApiServerEipId"]));
    }
    if (m.find("EnabledPublic") != m.end() && !m["EnabledPublic"].empty()) {
      enabledPublic = make_shared<bool>(boost::any_cast<bool>(m["EnabledPublic"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~DescribeHubClustersResponseBodyClustersApiServer() = default;
};
class DescribeHubClustersResponseBodyClustersClusterInfoTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  DescribeHubClustersResponseBodyClustersClusterInfoTags() {}

  explicit DescribeHubClustersResponseBodyClustersClusterInfoTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeHubClustersResponseBodyClustersClusterInfoTags() = default;
};
class DescribeHubClustersResponseBodyClustersClusterInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterSpec{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> name{};
  shared_ptr<string> profile{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupID{};
  shared_ptr<string> state{};
  shared_ptr<vector<DescribeHubClustersResponseBodyClustersClusterInfoTags>> tags{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> version{};

  DescribeHubClustersResponseBodyClustersClusterInfo() {}

  explicit DescribeHubClustersResponseBodyClustersClusterInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterSpec) {
      res["ClusterSpec"] = boost::any(*clusterSpec);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupID) {
      res["ResourceGroupID"] = boost::any(*resourceGroupID);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterSpec") != m.end() && !m["ClusterSpec"].empty()) {
      clusterSpec = make_shared<string>(boost::any_cast<string>(m["ClusterSpec"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupID") != m.end() && !m["ResourceGroupID"].empty()) {
      resourceGroupID = make_shared<string>(boost::any_cast<string>(m["ResourceGroupID"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeHubClustersResponseBodyClustersClusterInfoTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHubClustersResponseBodyClustersClusterInfoTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeHubClustersResponseBodyClustersClusterInfoTags>>(expect1);
      }
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeHubClustersResponseBodyClustersClusterInfo() = default;
};
class DescribeHubClustersResponseBodyClustersConditions : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> reason{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  DescribeHubClustersResponseBodyClustersConditions() {}

  explicit DescribeHubClustersResponseBodyClustersConditions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeHubClustersResponseBodyClustersConditions() = default;
};
class DescribeHubClustersResponseBodyClustersEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> intranetApiServerEndpoint{};
  shared_ptr<string> publicApiServerEndpoint{};

  DescribeHubClustersResponseBodyClustersEndpoints() {}

  explicit DescribeHubClustersResponseBodyClustersEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intranetApiServerEndpoint) {
      res["IntranetApiServerEndpoint"] = boost::any(*intranetApiServerEndpoint);
    }
    if (publicApiServerEndpoint) {
      res["PublicApiServerEndpoint"] = boost::any(*publicApiServerEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntranetApiServerEndpoint") != m.end() && !m["IntranetApiServerEndpoint"].empty()) {
      intranetApiServerEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetApiServerEndpoint"]));
    }
    if (m.find("PublicApiServerEndpoint") != m.end() && !m["PublicApiServerEndpoint"].empty()) {
      publicApiServerEndpoint = make_shared<string>(boost::any_cast<string>(m["PublicApiServerEndpoint"]));
    }
  }


  virtual ~DescribeHubClustersResponseBodyClustersEndpoints() = default;
};
class DescribeHubClustersResponseBodyClustersLogConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableLog{};
  shared_ptr<string> logProject{};
  shared_ptr<string> logStoreTTL{};

  DescribeHubClustersResponseBodyClustersLogConfig() {}

  explicit DescribeHubClustersResponseBodyClustersLogConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableLog) {
      res["EnableLog"] = boost::any(*enableLog);
    }
    if (logProject) {
      res["LogProject"] = boost::any(*logProject);
    }
    if (logStoreTTL) {
      res["LogStoreTTL"] = boost::any(*logStoreTTL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableLog") != m.end() && !m["EnableLog"].empty()) {
      enableLog = make_shared<bool>(boost::any_cast<bool>(m["EnableLog"]));
    }
    if (m.find("LogProject") != m.end() && !m["LogProject"].empty()) {
      logProject = make_shared<string>(boost::any_cast<string>(m["LogProject"]));
    }
    if (m.find("LogStoreTTL") != m.end() && !m["LogStoreTTL"].empty()) {
      logStoreTTL = make_shared<string>(boost::any_cast<string>(m["LogStoreTTL"]));
    }
  }


  virtual ~DescribeHubClustersResponseBodyClustersLogConfig() = default;
};
class DescribeHubClustersResponseBodyClustersMeshConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableMesh{};
  shared_ptr<string> meshId{};

  DescribeHubClustersResponseBodyClustersMeshConfig() {}

  explicit DescribeHubClustersResponseBodyClustersMeshConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableMesh) {
      res["EnableMesh"] = boost::any(*enableMesh);
    }
    if (meshId) {
      res["MeshId"] = boost::any(*meshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableMesh") != m.end() && !m["EnableMesh"].empty()) {
      enableMesh = make_shared<bool>(boost::any_cast<bool>(m["EnableMesh"]));
    }
    if (m.find("MeshId") != m.end() && !m["MeshId"].empty()) {
      meshId = make_shared<string>(boost::any_cast<string>(m["MeshId"]));
    }
  }


  virtual ~DescribeHubClustersResponseBodyClustersMeshConfig() = default;
};
class DescribeHubClustersResponseBodyClustersNetwork : public Darabonba::Model {
public:
  shared_ptr<string> clusterDomain{};
  shared_ptr<vector<string>> securityGroupIDs{};
  shared_ptr<vector<string>> vSwitches{};
  shared_ptr<string> vpcId{};

  DescribeHubClustersResponseBodyClustersNetwork() {}

  explicit DescribeHubClustersResponseBodyClustersNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterDomain) {
      res["ClusterDomain"] = boost::any(*clusterDomain);
    }
    if (securityGroupIDs) {
      res["SecurityGroupIDs"] = boost::any(*securityGroupIDs);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterDomain") != m.end() && !m["ClusterDomain"].empty()) {
      clusterDomain = make_shared<string>(boost::any_cast<string>(m["ClusterDomain"]));
    }
    if (m.find("SecurityGroupIDs") != m.end() && !m["SecurityGroupIDs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIDs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIDs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIDs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeHubClustersResponseBodyClustersNetwork() = default;
};
class DescribeHubClustersResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<DescribeHubClustersResponseBodyClustersApiServer> apiServer{};
  shared_ptr<DescribeHubClustersResponseBodyClustersClusterInfo> clusterInfo{};
  shared_ptr<vector<DescribeHubClustersResponseBodyClustersConditions>> conditions{};
  shared_ptr<DescribeHubClustersResponseBodyClustersEndpoints> endpoints{};
  shared_ptr<DescribeHubClustersResponseBodyClustersLogConfig> logConfig{};
  shared_ptr<DescribeHubClustersResponseBodyClustersMeshConfig> meshConfig{};
  shared_ptr<DescribeHubClustersResponseBodyClustersNetwork> network{};

  DescribeHubClustersResponseBodyClusters() {}

  explicit DescribeHubClustersResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiServer) {
      res["ApiServer"] = apiServer ? boost::any(apiServer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusterInfo) {
      res["ClusterInfo"] = clusterInfo ? boost::any(clusterInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (conditions) {
      vector<boost::any> temp1;
      for(auto item1:*conditions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Conditions"] = boost::any(temp1);
    }
    if (endpoints) {
      res["Endpoints"] = endpoints ? boost::any(endpoints->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (logConfig) {
      res["LogConfig"] = logConfig ? boost::any(logConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (meshConfig) {
      res["MeshConfig"] = meshConfig ? boost::any(meshConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiServer") != m.end() && !m["ApiServer"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiServer"].type()) {
        DescribeHubClustersResponseBodyClustersApiServer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiServer"]));
        apiServer = make_shared<DescribeHubClustersResponseBodyClustersApiServer>(model1);
      }
    }
    if (m.find("ClusterInfo") != m.end() && !m["ClusterInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClusterInfo"].type()) {
        DescribeHubClustersResponseBodyClustersClusterInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClusterInfo"]));
        clusterInfo = make_shared<DescribeHubClustersResponseBodyClustersClusterInfo>(model1);
      }
    }
    if (m.find("Conditions") != m.end() && !m["Conditions"].empty()) {
      if (typeid(vector<boost::any>) == m["Conditions"].type()) {
        vector<DescribeHubClustersResponseBodyClustersConditions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Conditions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHubClustersResponseBodyClustersConditions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conditions = make_shared<vector<DescribeHubClustersResponseBodyClustersConditions>>(expect1);
      }
    }
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(map<string, boost::any>) == m["Endpoints"].type()) {
        DescribeHubClustersResponseBodyClustersEndpoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Endpoints"]));
        endpoints = make_shared<DescribeHubClustersResponseBodyClustersEndpoints>(model1);
      }
    }
    if (m.find("LogConfig") != m.end() && !m["LogConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LogConfig"].type()) {
        DescribeHubClustersResponseBodyClustersLogConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LogConfig"]));
        logConfig = make_shared<DescribeHubClustersResponseBodyClustersLogConfig>(model1);
      }
    }
    if (m.find("MeshConfig") != m.end() && !m["MeshConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MeshConfig"].type()) {
        DescribeHubClustersResponseBodyClustersMeshConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MeshConfig"]));
        meshConfig = make_shared<DescribeHubClustersResponseBodyClustersMeshConfig>(model1);
      }
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        DescribeHubClustersResponseBodyClustersNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<DescribeHubClustersResponseBodyClustersNetwork>(model1);
      }
    }
  }


  virtual ~DescribeHubClustersResponseBodyClusters() = default;
};
class DescribeHubClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHubClustersResponseBodyClusters>> clusters{};
  shared_ptr<string> requestId{};

  DescribeHubClustersResponseBody() {}

  explicit DescribeHubClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<DescribeHubClustersResponseBodyClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHubClustersResponseBodyClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<DescribeHubClustersResponseBodyClusters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeHubClustersResponseBody() = default;
};
class DescribeHubClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHubClustersResponseBody> body{};

  DescribeHubClustersResponse() {}

  explicit DescribeHubClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHubClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHubClustersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHubClustersResponse() = default;
};
class DescribeManagedClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribeManagedClustersRequest() {}

  explicit DescribeManagedClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeManagedClustersRequest() = default;
};
class DescribeManagedClustersResponseBodyClustersCluster : public Darabonba::Model {
public:
  shared_ptr<string> clusterID{};
  shared_ptr<string> clusterSpec{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> created{};
  shared_ptr<string> currentVersion{};
  shared_ptr<string> initVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> profile{};
  shared_ptr<string> region{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> state{};
  shared_ptr<string> updated{};
  shared_ptr<string> vSwitchID{};
  shared_ptr<string> vpcID{};

  DescribeManagedClustersResponseBodyClustersCluster() {}

  explicit DescribeManagedClustersResponseBodyClustersCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterID) {
      res["ClusterID"] = boost::any(*clusterID);
    }
    if (clusterSpec) {
      res["ClusterSpec"] = boost::any(*clusterSpec);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (currentVersion) {
      res["CurrentVersion"] = boost::any(*currentVersion);
    }
    if (initVersion) {
      res["InitVersion"] = boost::any(*initVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    if (vSwitchID) {
      res["VSwitchID"] = boost::any(*vSwitchID);
    }
    if (vpcID) {
      res["VpcID"] = boost::any(*vpcID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterID") != m.end() && !m["ClusterID"].empty()) {
      clusterID = make_shared<string>(boost::any_cast<string>(m["ClusterID"]));
    }
    if (m.find("ClusterSpec") != m.end() && !m["ClusterSpec"].empty()) {
      clusterSpec = make_shared<string>(boost::any_cast<string>(m["ClusterSpec"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("CurrentVersion") != m.end() && !m["CurrentVersion"].empty()) {
      currentVersion = make_shared<string>(boost::any_cast<string>(m["CurrentVersion"]));
    }
    if (m.find("InitVersion") != m.end() && !m["InitVersion"].empty()) {
      initVersion = make_shared<string>(boost::any_cast<string>(m["InitVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
    if (m.find("VSwitchID") != m.end() && !m["VSwitchID"].empty()) {
      vSwitchID = make_shared<string>(boost::any_cast<string>(m["VSwitchID"]));
    }
    if (m.find("VpcID") != m.end() && !m["VpcID"].empty()) {
      vpcID = make_shared<string>(boost::any_cast<string>(m["VpcID"]));
    }
  }


  virtual ~DescribeManagedClustersResponseBodyClustersCluster() = default;
};
class DescribeManagedClustersResponseBodyClustersMeshStatus : public Darabonba::Model {
public:
  shared_ptr<bool> inMesh{};

  DescribeManagedClustersResponseBodyClustersMeshStatus() {}

  explicit DescribeManagedClustersResponseBodyClustersMeshStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inMesh) {
      res["InMesh"] = boost::any(*inMesh);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InMesh") != m.end() && !m["InMesh"].empty()) {
      inMesh = make_shared<bool>(boost::any_cast<bool>(m["InMesh"]));
    }
  }


  virtual ~DescribeManagedClustersResponseBodyClustersMeshStatus() = default;
};
class DescribeManagedClustersResponseBodyClustersStatus : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> state{};

  DescribeManagedClustersResponseBodyClustersStatus() {}

  explicit DescribeManagedClustersResponseBodyClustersStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DescribeManagedClustersResponseBodyClustersStatus() = default;
};
class DescribeManagedClustersResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<DescribeManagedClustersResponseBodyClustersCluster> cluster{};
  shared_ptr<DescribeManagedClustersResponseBodyClustersMeshStatus> meshStatus{};
  shared_ptr<DescribeManagedClustersResponseBodyClustersStatus> status{};

  DescribeManagedClustersResponseBodyClusters() {}

  explicit DescribeManagedClustersResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["Cluster"] = cluster ? boost::any(cluster->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (meshStatus) {
      res["MeshStatus"] = meshStatus ? boost::any(meshStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cluster"].type()) {
        DescribeManagedClustersResponseBodyClustersCluster model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cluster"]));
        cluster = make_shared<DescribeManagedClustersResponseBodyClustersCluster>(model1);
      }
    }
    if (m.find("MeshStatus") != m.end() && !m["MeshStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["MeshStatus"].type()) {
        DescribeManagedClustersResponseBodyClustersMeshStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MeshStatus"]));
        meshStatus = make_shared<DescribeManagedClustersResponseBodyClustersMeshStatus>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      if (typeid(map<string, boost::any>) == m["Status"].type()) {
        DescribeManagedClustersResponseBodyClustersStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Status"]));
        status = make_shared<DescribeManagedClustersResponseBodyClustersStatus>(model1);
      }
    }
  }


  virtual ~DescribeManagedClustersResponseBodyClusters() = default;
};
class DescribeManagedClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeManagedClustersResponseBodyClusters>> clusters{};
  shared_ptr<string> requestId{};

  DescribeManagedClustersResponseBody() {}

  explicit DescribeManagedClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<DescribeManagedClustersResponseBodyClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeManagedClustersResponseBodyClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<DescribeManagedClustersResponseBodyClusters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeManagedClustersResponseBody() = default;
};
class DescribeManagedClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeManagedClustersResponseBody> body{};

  DescribeManagedClustersResponse() {}

  explicit DescribeManagedClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeManagedClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeManagedClustersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeManagedClustersResponse() = default;
};
class DescribePoliciesResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<string>> names{};

  DescribePoliciesResponseBodyPolicies() {}

  explicit DescribePoliciesResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (names) {
      res["Names"] = boost::any(*names);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Names"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Names"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      names = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribePoliciesResponseBodyPolicies() = default;
};
class DescribePoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePoliciesResponseBodyPolicies>> policies{};
  shared_ptr<string> requestId{};

  DescribePoliciesResponseBody() {}

  explicit DescribePoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policies) {
      vector<boost::any> temp1;
      for(auto item1:*policies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policies"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(vector<boost::any>) == m["Policies"].type()) {
        vector<DescribePoliciesResponseBodyPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePoliciesResponseBodyPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policies = make_shared<vector<DescribePoliciesResponseBodyPolicies>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePoliciesResponseBody() = default;
};
class DescribePoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePoliciesResponseBody> body{};

  DescribePoliciesResponse() {}

  explicit DescribePoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePoliciesResponse() = default;
};
class DescribePolicyDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyName{};

  DescribePolicyDetailsRequest() {}

  explicit DescribePolicyDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~DescribePolicyDetailsRequest() = default;
};
class DescribePolicyDetailsResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> category{};
  shared_ptr<string> created{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<long> noConfig{};
  shared_ptr<string> severity{};
  shared_ptr<string> template_{};
  shared_ptr<string> updated{};

  DescribePolicyDetailsResponseBodyPolicy() {}

  explicit DescribePolicyDetailsResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (created) {
      res["Created"] = boost::any(*created);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (noConfig) {
      res["NoConfig"] = boost::any(*noConfig);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (updated) {
      res["Updated"] = boost::any(*updated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Created") != m.end() && !m["Created"].empty()) {
      created = make_shared<string>(boost::any_cast<string>(m["Created"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NoConfig") != m.end() && !m["NoConfig"].empty()) {
      noConfig = make_shared<long>(boost::any_cast<long>(m["NoConfig"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("Updated") != m.end() && !m["Updated"].empty()) {
      updated = make_shared<string>(boost::any_cast<string>(m["Updated"]));
    }
  }


  virtual ~DescribePolicyDetailsResponseBodyPolicy() = default;
};
class DescribePolicyDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePolicyDetailsResponseBodyPolicy> policy{};
  shared_ptr<string> requestId{};

  DescribePolicyDetailsResponseBody() {}

  explicit DescribePolicyDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        DescribePolicyDetailsResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<DescribePolicyDetailsResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePolicyDetailsResponseBody() = default;
};
class DescribePolicyDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePolicyDetailsResponseBody> body{};

  DescribePolicyDetailsResponse() {}

  explicit DescribePolicyDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePolicyDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePolicyDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePolicyDetailsResponse() = default;
};
class DescribePolicyGovernanceInClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribePolicyGovernanceInClusterRequest() {}

  explicit DescribePolicyGovernanceInClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribePolicyGovernanceInClusterRequest() = default;
};
class DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesCluster : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterSpec{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> name{};
  shared_ptr<string> profile{};
  shared_ptr<string> regionId{};
  shared_ptr<string> state{};

  DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesCluster() {}

  explicit DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterSpec) {
      res["ClusterSpec"] = boost::any(*clusterSpec);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("ClusterSpec") != m.end() && !m["ClusterSpec"].empty()) {
      clusterSpec = make_shared<string>(boost::any_cast<string>(m["ClusterSpec"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesCluster() = default;
};
class DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceAdmitLog : public Darabonba::Model {
public:
  shared_ptr<string> count{};
  shared_ptr<string> logProject{};
  shared_ptr<string> logStore{};
  shared_ptr<vector<map<string, string>>> logs{};
  shared_ptr<string> progress{};

  DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceAdmitLog() {}

  explicit DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceAdmitLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (logProject) {
      res["LogProject"] = boost::any(*logProject);
    }
    if (logStore) {
      res["LogStore"] = boost::any(*logStore);
    }
    if (logs) {
      res["Logs"] = boost::any(*logs);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<string>(boost::any_cast<string>(m["Count"]));
    }
    if (m.find("LogProject") != m.end() && !m["LogProject"].empty()) {
      logProject = make_shared<string>(boost::any_cast<string>(m["LogProject"]));
    }
    if (m.find("LogStore") != m.end() && !m["LogStore"].empty()) {
      logStore = make_shared<string>(boost::any_cast<string>(m["LogStore"]));
    }
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Logs"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      logs = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceAdmitLog() = default;
};
class DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceOnState : public Darabonba::Model {
public:
  shared_ptr<long> enabledCount{};
  shared_ptr<string> severity{};
  shared_ptr<long> totalCount{};

  DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceOnState() {}

  explicit DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceOnState(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabledCount) {
      res["EnabledCount"] = boost::any(*enabledCount);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnabledCount") != m.end() && !m["EnabledCount"].empty()) {
      enabledCount = make_shared<long>(boost::any_cast<long>(m["EnabledCount"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceOnState() = default;
};
class DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsDeny : public Darabonba::Model {
public:
  shared_ptr<string> severity{};
  shared_ptr<long> violations{};

  DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsDeny() {}

  explicit DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsDeny(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (violations) {
      res["Violations"] = boost::any(*violations);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Violations") != m.end() && !m["Violations"].empty()) {
      violations = make_shared<long>(boost::any_cast<long>(m["Violations"]));
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsDeny() = default;
};
class DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsWarn : public Darabonba::Model {
public:
  shared_ptr<string> severity{};
  shared_ptr<string> violations{};

  DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsWarn() {}

  explicit DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsWarn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (violations) {
      res["Violations"] = boost::any(*violations);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Violations") != m.end() && !m["Violations"].empty()) {
      violations = make_shared<string>(boost::any_cast<string>(m["Violations"]));
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsWarn() = default;
};
class DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolations : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsDeny>> deny{};
  shared_ptr<vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsWarn>> warn{};

  DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolations() {}

  explicit DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deny) {
      vector<boost::any> temp1;
      for(auto item1:*deny){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Deny"] = boost::any(temp1);
    }
    if (warn) {
      vector<boost::any> temp1;
      for(auto item1:*warn){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Warn"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Deny") != m.end() && !m["Deny"].empty()) {
      if (typeid(vector<boost::any>) == m["Deny"].type()) {
        vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsDeny> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Deny"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsDeny model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deny = make_shared<vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsDeny>>(expect1);
      }
    }
    if (m.find("Warn") != m.end() && !m["Warn"].empty()) {
      if (typeid(vector<boost::any>) == m["Warn"].type()) {
        vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsWarn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Warn"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsWarn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        warn = make_shared<vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolationsWarn>>(expect1);
      }
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolations() = default;
};
class DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsDeny : public Darabonba::Model {
public:
  shared_ptr<string> policyDescription{};
  shared_ptr<string> policyName{};
  shared_ptr<string> severity{};
  shared_ptr<long> violations{};

  DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsDeny() {}

  explicit DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsDeny(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyDescription) {
      res["PolicyDescription"] = boost::any(*policyDescription);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (violations) {
      res["Violations"] = boost::any(*violations);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyDescription") != m.end() && !m["PolicyDescription"].empty()) {
      policyDescription = make_shared<string>(boost::any_cast<string>(m["PolicyDescription"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Violations") != m.end() && !m["Violations"].empty()) {
      violations = make_shared<long>(boost::any_cast<long>(m["Violations"]));
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsDeny() = default;
};
class DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsWarn : public Darabonba::Model {
public:
  shared_ptr<string> policyDescription{};
  shared_ptr<string> policyName{};
  shared_ptr<string> severity{};
  shared_ptr<long> violations{};

  DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsWarn() {}

  explicit DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsWarn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyDescription) {
      res["PolicyDescription"] = boost::any(*policyDescription);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (violations) {
      res["Violations"] = boost::any(*violations);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyDescription") != m.end() && !m["PolicyDescription"].empty()) {
      policyDescription = make_shared<string>(boost::any_cast<string>(m["PolicyDescription"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Violations") != m.end() && !m["Violations"].empty()) {
      violations = make_shared<long>(boost::any_cast<long>(m["Violations"]));
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsWarn() = default;
};
class DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolations : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsDeny>> deny{};
  shared_ptr<vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsWarn>> warn{};

  DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolations() {}

  explicit DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deny) {
      vector<boost::any> temp1;
      for(auto item1:*deny){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Deny"] = boost::any(temp1);
    }
    if (warn) {
      vector<boost::any> temp1;
      for(auto item1:*warn){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Warn"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Deny") != m.end() && !m["Deny"].empty()) {
      if (typeid(vector<boost::any>) == m["Deny"].type()) {
        vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsDeny> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Deny"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsDeny model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deny = make_shared<vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsDeny>>(expect1);
      }
    }
    if (m.find("Warn") != m.end() && !m["Warn"].empty()) {
      if (typeid(vector<boost::any>) == m["Warn"].type()) {
        vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsWarn> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Warn"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsWarn model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        warn = make_shared<vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolationsWarn>>(expect1);
      }
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolations() = default;
};
class DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolation : public Darabonba::Model {
public:
  shared_ptr<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolations> totalViolations{};
  shared_ptr<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolations> violations{};

  DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolation() {}

  explicit DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalViolations) {
      res["TotalViolations"] = totalViolations ? boost::any(totalViolations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (violations) {
      res["Violations"] = violations ? boost::any(violations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalViolations") != m.end() && !m["TotalViolations"].empty()) {
      if (typeid(map<string, boost::any>) == m["TotalViolations"].type()) {
        DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TotalViolations"]));
        totalViolations = make_shared<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationTotalViolations>(model1);
      }
    }
    if (m.find("Violations") != m.end() && !m["Violations"].empty()) {
      if (typeid(map<string, boost::any>) == m["Violations"].type()) {
        DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Violations"]));
        violations = make_shared<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolationViolations>(model1);
      }
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolation() = default;
};
class DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernance : public Darabonba::Model {
public:
  shared_ptr<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceAdmitLog> admitLog{};
  shared_ptr<vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceOnState>> onState{};
  shared_ptr<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolation> violation{};

  DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernance() {}

  explicit DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (admitLog) {
      res["AdmitLog"] = admitLog ? boost::any(admitLog->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (onState) {
      vector<boost::any> temp1;
      for(auto item1:*onState){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnState"] = boost::any(temp1);
    }
    if (violation) {
      res["Violation"] = violation ? boost::any(violation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdmitLog") != m.end() && !m["AdmitLog"].empty()) {
      if (typeid(map<string, boost::any>) == m["AdmitLog"].type()) {
        DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceAdmitLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AdmitLog"]));
        admitLog = make_shared<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceAdmitLog>(model1);
      }
    }
    if (m.find("OnState") != m.end() && !m["OnState"].empty()) {
      if (typeid(vector<boost::any>) == m["OnState"].type()) {
        vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceOnState> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnState"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceOnState model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onState = make_shared<vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceOnState>>(expect1);
      }
    }
    if (m.find("Violation") != m.end() && !m["Violation"].empty()) {
      if (typeid(map<string, boost::any>) == m["Violation"].type()) {
        DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Violation"]));
        violation = make_shared<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernanceViolation>(model1);
      }
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernance() = default;
};
class DescribePolicyGovernanceInClusterResponseBodyPolicyGovernances : public Darabonba::Model {
public:
  shared_ptr<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesCluster> cluster{};
  shared_ptr<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernance> policyGovernance{};

  DescribePolicyGovernanceInClusterResponseBodyPolicyGovernances() {}

  explicit DescribePolicyGovernanceInClusterResponseBodyPolicyGovernances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["Cluster"] = cluster ? boost::any(cluster->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyGovernance) {
      res["PolicyGovernance"] = policyGovernance ? boost::any(policyGovernance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cluster") != m.end() && !m["Cluster"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cluster"].type()) {
        DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesCluster model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cluster"]));
        cluster = make_shared<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesCluster>(model1);
      }
    }
    if (m.find("PolicyGovernance") != m.end() && !m["PolicyGovernance"].empty()) {
      if (typeid(map<string, boost::any>) == m["PolicyGovernance"].type()) {
        DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PolicyGovernance"]));
        policyGovernance = make_shared<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernancesPolicyGovernance>(model1);
      }
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponseBodyPolicyGovernances() = default;
};
class DescribePolicyGovernanceInClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernances>> policyGovernances{};
  shared_ptr<string> requestId{};

  DescribePolicyGovernanceInClusterResponseBody() {}

  explicit DescribePolicyGovernanceInClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyGovernances) {
      vector<boost::any> temp1;
      for(auto item1:*policyGovernances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyGovernances"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyGovernances") != m.end() && !m["PolicyGovernances"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyGovernances"].type()) {
        vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyGovernances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyGovernanceInClusterResponseBodyPolicyGovernances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyGovernances = make_shared<vector<DescribePolicyGovernanceInClusterResponseBodyPolicyGovernances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponseBody() = default;
};
class DescribePolicyGovernanceInClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePolicyGovernanceInClusterResponseBody> body{};

  DescribePolicyGovernanceInClusterResponse() {}

  explicit DescribePolicyGovernanceInClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePolicyGovernanceInClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePolicyGovernanceInClusterResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePolicyGovernanceInClusterResponse() = default;
};
class DescribePolicyInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> policyName{};

  DescribePolicyInstancesRequest() {}

  explicit DescribePolicyInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
  }


  virtual ~DescribePolicyInstancesRequest() = default;
};
class DescribePolicyInstancesResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> policyAction{};
  shared_ptr<string> policyCategory{};
  shared_ptr<string> policyDescription{};
  shared_ptr<string> policyName{};
  shared_ptr<map<string, string>> policyParameters{};
  shared_ptr<string> policyScope{};
  shared_ptr<string> policySeverity{};
  shared_ptr<long> totalViolations{};

  DescribePolicyInstancesResponseBodyPolicies() {}

  explicit DescribePolicyInstancesResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (policyAction) {
      res["PolicyAction"] = boost::any(*policyAction);
    }
    if (policyCategory) {
      res["PolicyCategory"] = boost::any(*policyCategory);
    }
    if (policyDescription) {
      res["PolicyDescription"] = boost::any(*policyDescription);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policyParameters) {
      res["PolicyParameters"] = boost::any(*policyParameters);
    }
    if (policyScope) {
      res["PolicyScope"] = boost::any(*policyScope);
    }
    if (policySeverity) {
      res["PolicySeverity"] = boost::any(*policySeverity);
    }
    if (totalViolations) {
      res["TotalViolations"] = boost::any(*totalViolations);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PolicyAction") != m.end() && !m["PolicyAction"].empty()) {
      policyAction = make_shared<string>(boost::any_cast<string>(m["PolicyAction"]));
    }
    if (m.find("PolicyCategory") != m.end() && !m["PolicyCategory"].empty()) {
      policyCategory = make_shared<string>(boost::any_cast<string>(m["PolicyCategory"]));
    }
    if (m.find("PolicyDescription") != m.end() && !m["PolicyDescription"].empty()) {
      policyDescription = make_shared<string>(boost::any_cast<string>(m["PolicyDescription"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicyParameters") != m.end() && !m["PolicyParameters"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["PolicyParameters"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      policyParameters = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("PolicyScope") != m.end() && !m["PolicyScope"].empty()) {
      policyScope = make_shared<string>(boost::any_cast<string>(m["PolicyScope"]));
    }
    if (m.find("PolicySeverity") != m.end() && !m["PolicySeverity"].empty()) {
      policySeverity = make_shared<string>(boost::any_cast<string>(m["PolicySeverity"]));
    }
    if (m.find("TotalViolations") != m.end() && !m["TotalViolations"].empty()) {
      totalViolations = make_shared<long>(boost::any_cast<long>(m["TotalViolations"]));
    }
  }


  virtual ~DescribePolicyInstancesResponseBodyPolicies() = default;
};
class DescribePolicyInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePolicyInstancesResponseBodyPolicies>> policies{};
  shared_ptr<string> requestId{};

  DescribePolicyInstancesResponseBody() {}

  explicit DescribePolicyInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policies) {
      vector<boost::any> temp1;
      for(auto item1:*policies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policies"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(vector<boost::any>) == m["Policies"].type()) {
        vector<DescribePolicyInstancesResponseBodyPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyInstancesResponseBodyPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policies = make_shared<vector<DescribePolicyInstancesResponseBodyPolicies>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePolicyInstancesResponseBody() = default;
};
class DescribePolicyInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePolicyInstancesResponseBody> body{};

  DescribePolicyInstancesResponse() {}

  explicit DescribePolicyInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePolicyInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePolicyInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePolicyInstancesResponse() = default;
};
class DescribePolicyInstancesStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};

  DescribePolicyInstancesStatusRequest() {}

  explicit DescribePolicyInstancesStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribePolicyInstancesStatusRequest() = default;
};
class DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstancesPolicyClusters : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> status{};

  DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstancesPolicyClusters() {}

  explicit DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstancesPolicyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstancesPolicyClusters() = default;
};
class DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstances : public Darabonba::Model {
public:
  shared_ptr<string> policyCategory{};
  shared_ptr<vector<DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstancesPolicyClusters>> policyClusters{};
  shared_ptr<string> policyDescription{};
  shared_ptr<long> policyInstancesCount{};
  shared_ptr<string> policyName{};
  shared_ptr<string> policySeverity{};

  DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstances() {}

  explicit DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyCategory) {
      res["PolicyCategory"] = boost::any(*policyCategory);
    }
    if (policyClusters) {
      vector<boost::any> temp1;
      for(auto item1:*policyClusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyClusters"] = boost::any(temp1);
    }
    if (policyDescription) {
      res["PolicyDescription"] = boost::any(*policyDescription);
    }
    if (policyInstancesCount) {
      res["PolicyInstancesCount"] = boost::any(*policyInstancesCount);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (policySeverity) {
      res["PolicySeverity"] = boost::any(*policySeverity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyCategory") != m.end() && !m["PolicyCategory"].empty()) {
      policyCategory = make_shared<string>(boost::any_cast<string>(m["PolicyCategory"]));
    }
    if (m.find("PolicyClusters") != m.end() && !m["PolicyClusters"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyClusters"].type()) {
        vector<DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstancesPolicyClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyClusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstancesPolicyClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyClusters = make_shared<vector<DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstancesPolicyClusters>>(expect1);
      }
    }
    if (m.find("PolicyDescription") != m.end() && !m["PolicyDescription"].empty()) {
      policyDescription = make_shared<string>(boost::any_cast<string>(m["PolicyDescription"]));
    }
    if (m.find("PolicyInstancesCount") != m.end() && !m["PolicyInstancesCount"].empty()) {
      policyInstancesCount = make_shared<long>(boost::any_cast<long>(m["PolicyInstancesCount"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("PolicySeverity") != m.end() && !m["PolicySeverity"].empty()) {
      policySeverity = make_shared<string>(boost::any_cast<string>(m["PolicySeverity"]));
    }
  }


  virtual ~DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstances() = default;
};
class DescribePolicyInstancesStatusResponseBodyPoliciesSeverityInfo : public Darabonba::Model {
public:
  shared_ptr<string> severityCount{};
  shared_ptr<string> severityType{};

  DescribePolicyInstancesStatusResponseBodyPoliciesSeverityInfo() {}

  explicit DescribePolicyInstancesStatusResponseBodyPoliciesSeverityInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (severityCount) {
      res["SeverityCount"] = boost::any(*severityCount);
    }
    if (severityType) {
      res["SeverityType"] = boost::any(*severityType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SeverityCount") != m.end() && !m["SeverityCount"].empty()) {
      severityCount = make_shared<string>(boost::any_cast<string>(m["SeverityCount"]));
    }
    if (m.find("SeverityType") != m.end() && !m["SeverityType"].empty()) {
      severityType = make_shared<string>(boost::any_cast<string>(m["SeverityType"]));
    }
  }


  virtual ~DescribePolicyInstancesStatusResponseBodyPoliciesSeverityInfo() = default;
};
class DescribePolicyInstancesStatusResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstances>> policyInstances{};
  shared_ptr<vector<DescribePolicyInstancesStatusResponseBodyPoliciesSeverityInfo>> severityInfo{};

  DescribePolicyInstancesStatusResponseBodyPolicies() {}

  explicit DescribePolicyInstancesStatusResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyInstances) {
      vector<boost::any> temp1;
      for(auto item1:*policyInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PolicyInstances"] = boost::any(temp1);
    }
    if (severityInfo) {
      vector<boost::any> temp1;
      for(auto item1:*severityInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SeverityInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyInstances") != m.end() && !m["PolicyInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["PolicyInstances"].type()) {
        vector<DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PolicyInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policyInstances = make_shared<vector<DescribePolicyInstancesStatusResponseBodyPoliciesPolicyInstances>>(expect1);
      }
    }
    if (m.find("SeverityInfo") != m.end() && !m["SeverityInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["SeverityInfo"].type()) {
        vector<DescribePolicyInstancesStatusResponseBodyPoliciesSeverityInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SeverityInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePolicyInstancesStatusResponseBodyPoliciesSeverityInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        severityInfo = make_shared<vector<DescribePolicyInstancesStatusResponseBodyPoliciesSeverityInfo>>(expect1);
      }
    }
  }


  virtual ~DescribePolicyInstancesStatusResponseBodyPolicies() = default;
};
class DescribePolicyInstancesStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePolicyInstancesStatusResponseBodyPolicies> policies{};
  shared_ptr<string> requestId{};

  DescribePolicyInstancesStatusResponseBody() {}

  explicit DescribePolicyInstancesStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policies) {
      res["Policies"] = policies ? boost::any(policies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policies"].type()) {
        DescribePolicyInstancesStatusResponseBodyPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policies"]));
        policies = make_shared<DescribePolicyInstancesStatusResponseBodyPolicies>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribePolicyInstancesStatusResponseBody() = default;
};
class DescribePolicyInstancesStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePolicyInstancesStatusResponseBody> body{};

  DescribePolicyInstancesStatusResponse() {}

  explicit DescribePolicyInstancesStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePolicyInstancesStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePolicyInstancesStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePolicyInstancesStatusResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class DescribeUserPermissionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  DescribeUserPermissionsRequest() {}

  explicit DescribeUserPermissionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeUserPermissionsRequest() = default;
};
class DescribeUserPermissionsResponseBodyPermissions : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> roleName{};
  shared_ptr<string> roleType{};

  DescribeUserPermissionsResponseBodyPermissions() {}

  explicit DescribeUserPermissionsResponseBodyPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
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
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~DescribeUserPermissionsResponseBodyPermissions() = default;
};
class DescribeUserPermissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUserPermissionsResponseBodyPermissions>> permissions{};
  shared_ptr<string> requestId{};

  DescribeUserPermissionsResponseBody() {}

  explicit DescribeUserPermissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      vector<boost::any> temp1;
      for(auto item1:*permissions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Permissions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      if (typeid(vector<boost::any>) == m["Permissions"].type()) {
        vector<DescribeUserPermissionsResponseBodyPermissions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Permissions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserPermissionsResponseBodyPermissions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissions = make_shared<vector<DescribeUserPermissionsResponseBodyPermissions>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeUserPermissionsResponseBody() = default;
};
class DescribeUserPermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserPermissionsResponseBody> body{};

  DescribeUserPermissionsResponse() {}

  explicit DescribeUserPermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserPermissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserPermissionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserPermissionsResponse() = default;
};
class DetachClusterFromHubRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterIds{};
  shared_ptr<bool> detachFromMesh{};

  DetachClusterFromHubRequest() {}

  explicit DetachClusterFromHubRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterIds) {
      res["ClusterIds"] = boost::any(*clusterIds);
    }
    if (detachFromMesh) {
      res["DetachFromMesh"] = boost::any(*detachFromMesh);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterIds") != m.end() && !m["ClusterIds"].empty()) {
      clusterIds = make_shared<string>(boost::any_cast<string>(m["ClusterIds"]));
    }
    if (m.find("DetachFromMesh") != m.end() && !m["DetachFromMesh"].empty()) {
      detachFromMesh = make_shared<bool>(boost::any_cast<bool>(m["DetachFromMesh"]));
    }
  }


  virtual ~DetachClusterFromHubRequest() = default;
};
class DetachClusterFromHubResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<string>> managedClusterIds{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  DetachClusterFromHubResponseBody() {}

  explicit DetachClusterFromHubResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (managedClusterIds) {
      res["ManagedClusterIds"] = boost::any(*managedClusterIds);
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
    if (m.find("ManagedClusterIds") != m.end() && !m["ManagedClusterIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ManagedClusterIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ManagedClusterIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      managedClusterIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DetachClusterFromHubResponseBody() = default;
};
class DetachClusterFromHubResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachClusterFromHubResponseBody> body{};

  DetachClusterFromHubResponse() {}

  explicit DetachClusterFromHubResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachClusterFromHubResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachClusterFromHubResponseBody>(model1);
      }
    }
  }


  virtual ~DetachClusterFromHubResponse() = default;
};
class GrantUserPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> isRamRole{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> roleName{};
  shared_ptr<string> roleType{};
  shared_ptr<string> userId{};

  GrantUserPermissionRequest() {}

  explicit GrantUserPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (isRamRole) {
      res["IsRamRole"] = boost::any(*isRamRole);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("IsRamRole") != m.end() && !m["IsRamRole"].empty()) {
      isRamRole = make_shared<bool>(boost::any_cast<bool>(m["IsRamRole"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GrantUserPermissionRequest() = default;
};
class GrantUserPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GrantUserPermissionResponseBody() {}

  explicit GrantUserPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GrantUserPermissionResponseBody() = default;
};
class GrantUserPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GrantUserPermissionResponseBody> body{};

  GrantUserPermissionResponse() {}

  explicit GrantUserPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GrantUserPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantUserPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~GrantUserPermissionResponse() = default;
};
class GrantUserPermissionsRequestPermissions : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<bool> isRamRole{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> roleName{};
  shared_ptr<string> roleType{};

  GrantUserPermissionsRequestPermissions() {}

  explicit GrantUserPermissionsRequestPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (isRamRole) {
      res["IsRamRole"] = boost::any(*isRamRole);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("IsRamRole") != m.end() && !m["IsRamRole"].empty()) {
      isRamRole = make_shared<bool>(boost::any_cast<bool>(m["IsRamRole"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~GrantUserPermissionsRequestPermissions() = default;
};
class GrantUserPermissionsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GrantUserPermissionsRequestPermissions>> permissions{};
  shared_ptr<string> userId{};

  GrantUserPermissionsRequest() {}

  explicit GrantUserPermissionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissions) {
      vector<boost::any> temp1;
      for(auto item1:*permissions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Permissions"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      if (typeid(vector<boost::any>) == m["Permissions"].type()) {
        vector<GrantUserPermissionsRequestPermissions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Permissions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GrantUserPermissionsRequestPermissions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        permissions = make_shared<vector<GrantUserPermissionsRequestPermissions>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GrantUserPermissionsRequest() = default;
};
class GrantUserPermissionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> permissionsShrink{};
  shared_ptr<string> userId{};

  GrantUserPermissionsShrinkRequest() {}

  explicit GrantUserPermissionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (permissionsShrink) {
      res["Permissions"] = boost::any(*permissionsShrink);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Permissions") != m.end() && !m["Permissions"].empty()) {
      permissionsShrink = make_shared<string>(boost::any_cast<string>(m["Permissions"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GrantUserPermissionsShrinkRequest() = default;
};
class GrantUserPermissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  GrantUserPermissionsResponseBody() {}

  explicit GrantUserPermissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GrantUserPermissionsResponseBody() = default;
};
class GrantUserPermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GrantUserPermissionsResponseBody> body{};

  GrantUserPermissionsResponse() {}

  explicit GrantUserPermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GrantUserPermissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantUserPermissionsResponseBody>(model1);
      }
    }
  }


  virtual ~GrantUserPermissionsResponse() = default;
};
class UpdateHubClusterFeatureRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> accessControlList{};
  shared_ptr<string> apiServerEipId{};
  shared_ptr<bool> argoCDEnabled{};
  shared_ptr<bool> argoCDHAEnabled{};
  shared_ptr<bool> argoEventsEnabled{};
  shared_ptr<bool> argoServerEnabled{};
  shared_ptr<bool> auditLogEnabled{};
  shared_ptr<string> clusterId{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<bool> enableMesh{};
  shared_ptr<bool> gatewayEnabled{};
  shared_ptr<bool> monitorEnabled{};
  shared_ptr<string> name{};
  shared_ptr<string> priceLimit{};
  shared_ptr<bool> publicAccessEnabled{};
  shared_ptr<bool> publicApiServerEnabled{};
  shared_ptr<vector<string>> vSwitches{};
  shared_ptr<string> workflowScheduleMode{};

  UpdateHubClusterFeatureRequest() {}

  explicit UpdateHubClusterFeatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessControlList) {
      res["AccessControlList"] = boost::any(*accessControlList);
    }
    if (apiServerEipId) {
      res["ApiServerEipId"] = boost::any(*apiServerEipId);
    }
    if (argoCDEnabled) {
      res["ArgoCDEnabled"] = boost::any(*argoCDEnabled);
    }
    if (argoCDHAEnabled) {
      res["ArgoCDHAEnabled"] = boost::any(*argoCDHAEnabled);
    }
    if (argoEventsEnabled) {
      res["ArgoEventsEnabled"] = boost::any(*argoEventsEnabled);
    }
    if (argoServerEnabled) {
      res["ArgoServerEnabled"] = boost::any(*argoServerEnabled);
    }
    if (auditLogEnabled) {
      res["AuditLogEnabled"] = boost::any(*auditLogEnabled);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (enableMesh) {
      res["EnableMesh"] = boost::any(*enableMesh);
    }
    if (gatewayEnabled) {
      res["GatewayEnabled"] = boost::any(*gatewayEnabled);
    }
    if (monitorEnabled) {
      res["MonitorEnabled"] = boost::any(*monitorEnabled);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
    }
    if (publicAccessEnabled) {
      res["PublicAccessEnabled"] = boost::any(*publicAccessEnabled);
    }
    if (publicApiServerEnabled) {
      res["PublicApiServerEnabled"] = boost::any(*publicApiServerEnabled);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    if (workflowScheduleMode) {
      res["WorkflowScheduleMode"] = boost::any(*workflowScheduleMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessControlList") != m.end() && !m["AccessControlList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AccessControlList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AccessControlList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      accessControlList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApiServerEipId") != m.end() && !m["ApiServerEipId"].empty()) {
      apiServerEipId = make_shared<string>(boost::any_cast<string>(m["ApiServerEipId"]));
    }
    if (m.find("ArgoCDEnabled") != m.end() && !m["ArgoCDEnabled"].empty()) {
      argoCDEnabled = make_shared<bool>(boost::any_cast<bool>(m["ArgoCDEnabled"]));
    }
    if (m.find("ArgoCDHAEnabled") != m.end() && !m["ArgoCDHAEnabled"].empty()) {
      argoCDHAEnabled = make_shared<bool>(boost::any_cast<bool>(m["ArgoCDHAEnabled"]));
    }
    if (m.find("ArgoEventsEnabled") != m.end() && !m["ArgoEventsEnabled"].empty()) {
      argoEventsEnabled = make_shared<bool>(boost::any_cast<bool>(m["ArgoEventsEnabled"]));
    }
    if (m.find("ArgoServerEnabled") != m.end() && !m["ArgoServerEnabled"].empty()) {
      argoServerEnabled = make_shared<bool>(boost::any_cast<bool>(m["ArgoServerEnabled"]));
    }
    if (m.find("AuditLogEnabled") != m.end() && !m["AuditLogEnabled"].empty()) {
      auditLogEnabled = make_shared<bool>(boost::any_cast<bool>(m["AuditLogEnabled"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["DeletionProtection"]));
    }
    if (m.find("EnableMesh") != m.end() && !m["EnableMesh"].empty()) {
      enableMesh = make_shared<bool>(boost::any_cast<bool>(m["EnableMesh"]));
    }
    if (m.find("GatewayEnabled") != m.end() && !m["GatewayEnabled"].empty()) {
      gatewayEnabled = make_shared<bool>(boost::any_cast<bool>(m["GatewayEnabled"]));
    }
    if (m.find("MonitorEnabled") != m.end() && !m["MonitorEnabled"].empty()) {
      monitorEnabled = make_shared<bool>(boost::any_cast<bool>(m["MonitorEnabled"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<string>(boost::any_cast<string>(m["PriceLimit"]));
    }
    if (m.find("PublicAccessEnabled") != m.end() && !m["PublicAccessEnabled"].empty()) {
      publicAccessEnabled = make_shared<bool>(boost::any_cast<bool>(m["PublicAccessEnabled"]));
    }
    if (m.find("PublicApiServerEnabled") != m.end() && !m["PublicApiServerEnabled"].empty()) {
      publicApiServerEnabled = make_shared<bool>(boost::any_cast<bool>(m["PublicApiServerEnabled"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("WorkflowScheduleMode") != m.end() && !m["WorkflowScheduleMode"].empty()) {
      workflowScheduleMode = make_shared<string>(boost::any_cast<string>(m["WorkflowScheduleMode"]));
    }
  }


  virtual ~UpdateHubClusterFeatureRequest() = default;
};
class UpdateHubClusterFeatureShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessControlListShrink{};
  shared_ptr<string> apiServerEipId{};
  shared_ptr<bool> argoCDEnabled{};
  shared_ptr<bool> argoCDHAEnabled{};
  shared_ptr<bool> argoEventsEnabled{};
  shared_ptr<bool> argoServerEnabled{};
  shared_ptr<bool> auditLogEnabled{};
  shared_ptr<string> clusterId{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<bool> enableMesh{};
  shared_ptr<bool> gatewayEnabled{};
  shared_ptr<bool> monitorEnabled{};
  shared_ptr<string> name{};
  shared_ptr<string> priceLimit{};
  shared_ptr<bool> publicAccessEnabled{};
  shared_ptr<bool> publicApiServerEnabled{};
  shared_ptr<string> vSwitchesShrink{};
  shared_ptr<string> workflowScheduleMode{};

  UpdateHubClusterFeatureShrinkRequest() {}

  explicit UpdateHubClusterFeatureShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessControlListShrink) {
      res["AccessControlList"] = boost::any(*accessControlListShrink);
    }
    if (apiServerEipId) {
      res["ApiServerEipId"] = boost::any(*apiServerEipId);
    }
    if (argoCDEnabled) {
      res["ArgoCDEnabled"] = boost::any(*argoCDEnabled);
    }
    if (argoCDHAEnabled) {
      res["ArgoCDHAEnabled"] = boost::any(*argoCDHAEnabled);
    }
    if (argoEventsEnabled) {
      res["ArgoEventsEnabled"] = boost::any(*argoEventsEnabled);
    }
    if (argoServerEnabled) {
      res["ArgoServerEnabled"] = boost::any(*argoServerEnabled);
    }
    if (auditLogEnabled) {
      res["AuditLogEnabled"] = boost::any(*auditLogEnabled);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (deletionProtection) {
      res["DeletionProtection"] = boost::any(*deletionProtection);
    }
    if (enableMesh) {
      res["EnableMesh"] = boost::any(*enableMesh);
    }
    if (gatewayEnabled) {
      res["GatewayEnabled"] = boost::any(*gatewayEnabled);
    }
    if (monitorEnabled) {
      res["MonitorEnabled"] = boost::any(*monitorEnabled);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
    }
    if (publicAccessEnabled) {
      res["PublicAccessEnabled"] = boost::any(*publicAccessEnabled);
    }
    if (publicApiServerEnabled) {
      res["PublicApiServerEnabled"] = boost::any(*publicApiServerEnabled);
    }
    if (vSwitchesShrink) {
      res["VSwitches"] = boost::any(*vSwitchesShrink);
    }
    if (workflowScheduleMode) {
      res["WorkflowScheduleMode"] = boost::any(*workflowScheduleMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessControlList") != m.end() && !m["AccessControlList"].empty()) {
      accessControlListShrink = make_shared<string>(boost::any_cast<string>(m["AccessControlList"]));
    }
    if (m.find("ApiServerEipId") != m.end() && !m["ApiServerEipId"].empty()) {
      apiServerEipId = make_shared<string>(boost::any_cast<string>(m["ApiServerEipId"]));
    }
    if (m.find("ArgoCDEnabled") != m.end() && !m["ArgoCDEnabled"].empty()) {
      argoCDEnabled = make_shared<bool>(boost::any_cast<bool>(m["ArgoCDEnabled"]));
    }
    if (m.find("ArgoCDHAEnabled") != m.end() && !m["ArgoCDHAEnabled"].empty()) {
      argoCDHAEnabled = make_shared<bool>(boost::any_cast<bool>(m["ArgoCDHAEnabled"]));
    }
    if (m.find("ArgoEventsEnabled") != m.end() && !m["ArgoEventsEnabled"].empty()) {
      argoEventsEnabled = make_shared<bool>(boost::any_cast<bool>(m["ArgoEventsEnabled"]));
    }
    if (m.find("ArgoServerEnabled") != m.end() && !m["ArgoServerEnabled"].empty()) {
      argoServerEnabled = make_shared<bool>(boost::any_cast<bool>(m["ArgoServerEnabled"]));
    }
    if (m.find("AuditLogEnabled") != m.end() && !m["AuditLogEnabled"].empty()) {
      auditLogEnabled = make_shared<bool>(boost::any_cast<bool>(m["AuditLogEnabled"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("DeletionProtection") != m.end() && !m["DeletionProtection"].empty()) {
      deletionProtection = make_shared<bool>(boost::any_cast<bool>(m["DeletionProtection"]));
    }
    if (m.find("EnableMesh") != m.end() && !m["EnableMesh"].empty()) {
      enableMesh = make_shared<bool>(boost::any_cast<bool>(m["EnableMesh"]));
    }
    if (m.find("GatewayEnabled") != m.end() && !m["GatewayEnabled"].empty()) {
      gatewayEnabled = make_shared<bool>(boost::any_cast<bool>(m["GatewayEnabled"]));
    }
    if (m.find("MonitorEnabled") != m.end() && !m["MonitorEnabled"].empty()) {
      monitorEnabled = make_shared<bool>(boost::any_cast<bool>(m["MonitorEnabled"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<string>(boost::any_cast<string>(m["PriceLimit"]));
    }
    if (m.find("PublicAccessEnabled") != m.end() && !m["PublicAccessEnabled"].empty()) {
      publicAccessEnabled = make_shared<bool>(boost::any_cast<bool>(m["PublicAccessEnabled"]));
    }
    if (m.find("PublicApiServerEnabled") != m.end() && !m["PublicApiServerEnabled"].empty()) {
      publicApiServerEnabled = make_shared<bool>(boost::any_cast<bool>(m["PublicApiServerEnabled"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vSwitchesShrink = make_shared<string>(boost::any_cast<string>(m["VSwitches"]));
    }
    if (m.find("WorkflowScheduleMode") != m.end() && !m["WorkflowScheduleMode"].empty()) {
      workflowScheduleMode = make_shared<string>(boost::any_cast<string>(m["WorkflowScheduleMode"]));
    }
  }


  virtual ~UpdateHubClusterFeatureShrinkRequest() = default;
};
class UpdateHubClusterFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateHubClusterFeatureResponseBody() {}

  explicit UpdateHubClusterFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateHubClusterFeatureResponseBody() = default;
};
class UpdateHubClusterFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateHubClusterFeatureResponseBody> body{};

  UpdateHubClusterFeatureResponse() {}

  explicit UpdateHubClusterFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateHubClusterFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHubClusterFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHubClusterFeatureResponse() = default;
};
class UpdateUserPermissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> roleName{};
  shared_ptr<string> roleType{};
  shared_ptr<string> userId{};

  UpdateUserPermissionRequest() {}

  explicit UpdateUserPermissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateUserPermissionRequest() = default;
};
class UpdateUserPermissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateUserPermissionResponseBody() {}

  explicit UpdateUserPermissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateUserPermissionResponseBody() = default;
};
class UpdateUserPermissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserPermissionResponseBody> body{};

  UpdateUserPermissionResponse() {}

  explicit UpdateUserPermissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserPermissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserPermissionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserPermissionResponse() = default;
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
  AttachClusterToHubResponse attachClusterToHubWithOptions(shared_ptr<AttachClusterToHubRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachClusterToHubResponse attachClusterToHub(shared_ptr<AttachClusterToHubRequest> request);
  ChangeResourceGroupResponse changeResourceGroupWithOptions(shared_ptr<ChangeResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeResourceGroupResponse changeResourceGroup(shared_ptr<ChangeResourceGroupRequest> request);
  CreateHubClusterResponse createHubClusterWithOptions(shared_ptr<CreateHubClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHubClusterResponse createHubCluster(shared_ptr<CreateHubClusterRequest> request);
  DeleteHubClusterResponse deleteHubClusterWithOptions(shared_ptr<DeleteHubClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHubClusterResponse deleteHubCluster(shared_ptr<DeleteHubClusterRequest> request);
  DeletePolicyInstanceResponse deletePolicyInstanceWithOptions(shared_ptr<DeletePolicyInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePolicyInstanceResponse deletePolicyInstance(shared_ptr<DeletePolicyInstanceRequest> request);
  DeleteUserPermissionResponse deleteUserPermissionWithOptions(shared_ptr<DeleteUserPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserPermissionResponse deleteUserPermission(shared_ptr<DeleteUserPermissionRequest> request);
  DeployPolicyInstanceResponse deployPolicyInstanceWithOptions(shared_ptr<DeployPolicyInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployPolicyInstanceResponse deployPolicyInstance(shared_ptr<DeployPolicyInstanceRequest> request);
  DescribeHubClusterDetailsResponse describeHubClusterDetailsWithOptions(shared_ptr<DescribeHubClusterDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHubClusterDetailsResponse describeHubClusterDetails(shared_ptr<DescribeHubClusterDetailsRequest> request);
  DescribeHubClusterKubeconfigResponse describeHubClusterKubeconfigWithOptions(shared_ptr<DescribeHubClusterKubeconfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHubClusterKubeconfigResponse describeHubClusterKubeconfig(shared_ptr<DescribeHubClusterKubeconfigRequest> request);
  DescribeHubClusterLogsResponse describeHubClusterLogsWithOptions(shared_ptr<DescribeHubClusterLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHubClusterLogsResponse describeHubClusterLogs(shared_ptr<DescribeHubClusterLogsRequest> request);
  DescribeHubClustersResponse describeHubClustersWithOptions(shared_ptr<DescribeHubClustersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHubClustersResponse describeHubClusters(shared_ptr<DescribeHubClustersRequest> request);
  DescribeManagedClustersResponse describeManagedClustersWithOptions(shared_ptr<DescribeManagedClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeManagedClustersResponse describeManagedClusters(shared_ptr<DescribeManagedClustersRequest> request);
  DescribePoliciesResponse describePoliciesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePoliciesResponse describePolicies();
  DescribePolicyDetailsResponse describePolicyDetailsWithOptions(shared_ptr<DescribePolicyDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolicyDetailsResponse describePolicyDetails(shared_ptr<DescribePolicyDetailsRequest> request);
  DescribePolicyGovernanceInClusterResponse describePolicyGovernanceInClusterWithOptions(shared_ptr<DescribePolicyGovernanceInClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolicyGovernanceInClusterResponse describePolicyGovernanceInCluster(shared_ptr<DescribePolicyGovernanceInClusterRequest> request);
  DescribePolicyInstancesResponse describePolicyInstancesWithOptions(shared_ptr<DescribePolicyInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolicyInstancesResponse describePolicyInstances(shared_ptr<DescribePolicyInstancesRequest> request);
  DescribePolicyInstancesStatusResponse describePolicyInstancesStatusWithOptions(shared_ptr<DescribePolicyInstancesStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePolicyInstancesStatusResponse describePolicyInstancesStatus(shared_ptr<DescribePolicyInstancesStatusRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeUserPermissionsResponse describeUserPermissionsWithOptions(shared_ptr<DescribeUserPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserPermissionsResponse describeUserPermissions(shared_ptr<DescribeUserPermissionsRequest> request);
  DetachClusterFromHubResponse detachClusterFromHubWithOptions(shared_ptr<DetachClusterFromHubRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachClusterFromHubResponse detachClusterFromHub(shared_ptr<DetachClusterFromHubRequest> request);
  GrantUserPermissionResponse grantUserPermissionWithOptions(shared_ptr<GrantUserPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantUserPermissionResponse grantUserPermission(shared_ptr<GrantUserPermissionRequest> request);
  GrantUserPermissionsResponse grantUserPermissionsWithOptions(shared_ptr<GrantUserPermissionsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantUserPermissionsResponse grantUserPermissions(shared_ptr<GrantUserPermissionsRequest> request);
  UpdateHubClusterFeatureResponse updateHubClusterFeatureWithOptions(shared_ptr<UpdateHubClusterFeatureRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHubClusterFeatureResponse updateHubClusterFeature(shared_ptr<UpdateHubClusterFeatureRequest> request);
  UpdateUserPermissionResponse updateUserPermissionWithOptions(shared_ptr<UpdateUserPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserPermissionResponse updateUserPermission(shared_ptr<UpdateUserPermissionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Adcp20220101

#endif
