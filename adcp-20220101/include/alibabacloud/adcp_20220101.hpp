// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ADCP20220101_H_
#define ALIBABACLOUD_ADCP20220101_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Adcp20220101 {
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
class DescribeHubClusterDetailsResponseBodyClusterClusterInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterSpec{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> name{};
  shared_ptr<string> profile{};
  shared_ptr<string> regionId{};
  shared_ptr<string> state{};
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
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
  }


  virtual ~DescribeHubClustersRequest() = default;
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
class DescribeHubClustersResponseBodyClustersClusterInfo : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterSpec{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> name{};
  shared_ptr<string> profile{};
  shared_ptr<string> regionId{};
  shared_ptr<string> state{};
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
    if (state) {
      res["State"] = boost::any(*state);
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
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
class UpdateHubClusterFeatureRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiServerEipId{};
  shared_ptr<bool> argoCDEnabled{};
  shared_ptr<bool> argoServerEnabled{};
  shared_ptr<bool> auditLogEnabled{};
  shared_ptr<string> clusterId{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<bool> enableMesh{};
  shared_ptr<string> name{};
  shared_ptr<string> priceLimit{};
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
    if (apiServerEipId) {
      res["ApiServerEipId"] = boost::any(*apiServerEipId);
    }
    if (argoCDEnabled) {
      res["ArgoCDEnabled"] = boost::any(*argoCDEnabled);
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
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
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
    if (m.find("ApiServerEipId") != m.end() && !m["ApiServerEipId"].empty()) {
      apiServerEipId = make_shared<string>(boost::any_cast<string>(m["ApiServerEipId"]));
    }
    if (m.find("ArgoCDEnabled") != m.end() && !m["ArgoCDEnabled"].empty()) {
      argoCDEnabled = make_shared<bool>(boost::any_cast<bool>(m["ArgoCDEnabled"]));
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<string>(boost::any_cast<string>(m["PriceLimit"]));
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
  shared_ptr<string> apiServerEipId{};
  shared_ptr<bool> argoCDEnabled{};
  shared_ptr<bool> argoServerEnabled{};
  shared_ptr<bool> auditLogEnabled{};
  shared_ptr<string> clusterId{};
  shared_ptr<bool> deletionProtection{};
  shared_ptr<bool> enableMesh{};
  shared_ptr<string> name{};
  shared_ptr<string> priceLimit{};
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
    if (apiServerEipId) {
      res["ApiServerEipId"] = boost::any(*apiServerEipId);
    }
    if (argoCDEnabled) {
      res["ArgoCDEnabled"] = boost::any(*argoCDEnabled);
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
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (priceLimit) {
      res["PriceLimit"] = boost::any(*priceLimit);
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
    if (m.find("ApiServerEipId") != m.end() && !m["ApiServerEipId"].empty()) {
      apiServerEipId = make_shared<string>(boost::any_cast<string>(m["ApiServerEipId"]));
    }
    if (m.find("ArgoCDEnabled") != m.end() && !m["ArgoCDEnabled"].empty()) {
      argoCDEnabled = make_shared<bool>(boost::any_cast<bool>(m["ArgoCDEnabled"]));
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PriceLimit") != m.end() && !m["PriceLimit"].empty()) {
      priceLimit = make_shared<string>(boost::any_cast<string>(m["PriceLimit"]));
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

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
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
  CreateHubClusterResponse createHubClusterWithOptions(shared_ptr<CreateHubClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateHubClusterResponse createHubCluster(shared_ptr<CreateHubClusterRequest> request);
  DeleteHubClusterResponse deleteHubClusterWithOptions(shared_ptr<DeleteHubClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHubClusterResponse deleteHubCluster(shared_ptr<DeleteHubClusterRequest> request);
  DescribeHubClusterDetailsResponse describeHubClusterDetailsWithOptions(shared_ptr<DescribeHubClusterDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHubClusterDetailsResponse describeHubClusterDetails(shared_ptr<DescribeHubClusterDetailsRequest> request);
  DescribeHubClusterKubeconfigResponse describeHubClusterKubeconfigWithOptions(shared_ptr<DescribeHubClusterKubeconfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHubClusterKubeconfigResponse describeHubClusterKubeconfig(shared_ptr<DescribeHubClusterKubeconfigRequest> request);
  DescribeHubClusterLogsResponse describeHubClusterLogsWithOptions(shared_ptr<DescribeHubClusterLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHubClusterLogsResponse describeHubClusterLogs(shared_ptr<DescribeHubClusterLogsRequest> request);
  DescribeHubClustersResponse describeHubClustersWithOptions(shared_ptr<DescribeHubClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHubClustersResponse describeHubClusters(shared_ptr<DescribeHubClustersRequest> request);
  DescribeManagedClustersResponse describeManagedClustersWithOptions(shared_ptr<DescribeManagedClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeManagedClustersResponse describeManagedClusters(shared_ptr<DescribeManagedClustersRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DetachClusterFromHubResponse detachClusterFromHubWithOptions(shared_ptr<DetachClusterFromHubRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachClusterFromHubResponse detachClusterFromHub(shared_ptr<DetachClusterFromHubRequest> request);
  UpdateHubClusterFeatureResponse updateHubClusterFeatureWithOptions(shared_ptr<UpdateHubClusterFeatureRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHubClusterFeatureResponse updateHubClusterFeature(shared_ptr<UpdateHubClusterFeatureRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Adcp20220101

#endif
