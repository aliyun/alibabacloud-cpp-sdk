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
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterIds{};

  AttachClusterToHubRequest() {}

  explicit AttachClusterToHubRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  }


  virtual ~AttachClusterToHubResponseBody() = default;
};
class AttachClusterToHubResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AttachClusterToHubResponseBody> body{};

  AttachClusterToHubResponse() {}

  explicit AttachClusterToHubResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<bool> auditLogEnabled{};
  shared_ptr<string> auditLogProject{};
  shared_ptr<string> auditLogStoreTTL{};
  shared_ptr<bool> controlPlaneLogEnabled{};
  shared_ptr<string> controlPlaneLogProject{};
  shared_ptr<string> controlPlaneLogTTL{};
  shared_ptr<bool> isEnterpriseSecurityGroup{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> vSwitches{};
  shared_ptr<string> vpcId{};

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
    if (auditLogEnabled) {
      res["AuditLogEnabled"] = boost::any(*auditLogEnabled);
    }
    if (auditLogProject) {
      res["AuditLogProject"] = boost::any(*auditLogProject);
    }
    if (auditLogStoreTTL) {
      res["AuditLogStoreTTL"] = boost::any(*auditLogStoreTTL);
    }
    if (controlPlaneLogEnabled) {
      res["ControlPlaneLogEnabled"] = boost::any(*controlPlaneLogEnabled);
    }
    if (controlPlaneLogProject) {
      res["ControlPlaneLogProject"] = boost::any(*controlPlaneLogProject);
    }
    if (controlPlaneLogTTL) {
      res["ControlPlaneLogTTL"] = boost::any(*controlPlaneLogTTL);
    }
    if (isEnterpriseSecurityGroup) {
      res["IsEnterpriseSecurityGroup"] = boost::any(*isEnterpriseSecurityGroup);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiServerPublicEip") != m.end() && !m["ApiServerPublicEip"].empty()) {
      apiServerPublicEip = make_shared<bool>(boost::any_cast<bool>(m["ApiServerPublicEip"]));
    }
    if (m.find("AuditLogEnabled") != m.end() && !m["AuditLogEnabled"].empty()) {
      auditLogEnabled = make_shared<bool>(boost::any_cast<bool>(m["AuditLogEnabled"]));
    }
    if (m.find("AuditLogProject") != m.end() && !m["AuditLogProject"].empty()) {
      auditLogProject = make_shared<string>(boost::any_cast<string>(m["AuditLogProject"]));
    }
    if (m.find("AuditLogStoreTTL") != m.end() && !m["AuditLogStoreTTL"].empty()) {
      auditLogStoreTTL = make_shared<string>(boost::any_cast<string>(m["AuditLogStoreTTL"]));
    }
    if (m.find("ControlPlaneLogEnabled") != m.end() && !m["ControlPlaneLogEnabled"].empty()) {
      controlPlaneLogEnabled = make_shared<bool>(boost::any_cast<bool>(m["ControlPlaneLogEnabled"]));
    }
    if (m.find("ControlPlaneLogProject") != m.end() && !m["ControlPlaneLogProject"].empty()) {
      controlPlaneLogProject = make_shared<string>(boost::any_cast<string>(m["ControlPlaneLogProject"]));
    }
    if (m.find("ControlPlaneLogTTL") != m.end() && !m["ControlPlaneLogTTL"].empty()) {
      controlPlaneLogTTL = make_shared<string>(boost::any_cast<string>(m["ControlPlaneLogTTL"]));
    }
    if (m.find("IsEnterpriseSecurityGroup") != m.end() && !m["IsEnterpriseSecurityGroup"].empty()) {
      isEnterpriseSecurityGroup = make_shared<bool>(boost::any_cast<bool>(m["IsEnterpriseSecurityGroup"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
  shared_ptr<CreateHubClusterResponseBody> body{};

  CreateHubClusterResponse() {}

  explicit CreateHubClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
  }


  virtual ~DeleteHubClusterRequest() = default;
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
  shared_ptr<DeleteHubClusterResponseBody> body{};

  DeleteHubClusterResponse() {}

  explicit DeleteHubClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<bool> enabledPublic{};
  shared_ptr<string> loadBalancerId{};

  DescribeHubClusterDetailsResponseBodyClusterApiServer() {}

  explicit DescribeHubClusterDetailsResponseBodyClusterApiServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabledPublic) {
      res["EnabledPublic"] = boost::any(*enabledPublic);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
class DescribeHubClusterDetailsResponseBodyCluster : public Darabonba::Model {
public:
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterApiServer> apiServer{};
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterClusterInfo> clusterInfo{};
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterEndpoints> endpoints{};
  shared_ptr<DescribeHubClusterDetailsResponseBodyClusterNetwork> network{};

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
    if (endpoints) {
      res["Endpoints"] = endpoints ? boost::any(endpoints->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(map<string, boost::any>) == m["Endpoints"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterEndpoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Endpoints"]));
        endpoints = make_shared<DescribeHubClusterDetailsResponseBodyClusterEndpoints>(model1);
      }
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        DescribeHubClusterDetailsResponseBodyClusterNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<DescribeHubClusterDetailsResponseBodyClusterNetwork>(model1);
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
  shared_ptr<DescribeHubClusterDetailsResponseBody> body{};

  DescribeHubClusterDetailsResponse() {}

  explicit DescribeHubClusterDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<DescribeHubClusterKubeconfigResponseBody> body{};

  DescribeHubClusterKubeconfigResponse() {}

  explicit DescribeHubClusterKubeconfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<DescribeHubClusterLogsResponseBody> body{};

  DescribeHubClusterLogsResponse() {}

  explicit DescribeHubClusterLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHubClusterLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHubClusterLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHubClusterLogsResponse() = default;
};
class DescribeHubClustersResponseBodyClustersApiServer : public Darabonba::Model {
public:
  shared_ptr<bool> enabledPublic{};
  shared_ptr<string> loadBalancerId{};

  DescribeHubClustersResponseBodyClustersApiServer() {}

  explicit DescribeHubClustersResponseBodyClustersApiServer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabledPublic) {
      res["EnabledPublic"] = boost::any(*enabledPublic);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<DescribeHubClustersResponseBodyClustersEndpoints> endpoints{};
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
    if (endpoints) {
      res["Endpoints"] = endpoints ? boost::any(endpoints->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(map<string, boost::any>) == m["Endpoints"].type()) {
        DescribeHubClustersResponseBodyClustersEndpoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Endpoints"]));
        endpoints = make_shared<DescribeHubClustersResponseBodyClustersEndpoints>(model1);
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
  shared_ptr<DescribeHubClustersResponseBody> body{};

  DescribeHubClustersResponse() {}

  explicit DescribeHubClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<DescribeManagedClustersResponseBody> body{};

  DescribeManagedClustersResponse() {}

  explicit DescribeManagedClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeManagedClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeManagedClustersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeManagedClustersResponse() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};
  shared_ptr<string> regionVpcEndpoint{};

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
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (regionVpcEndpoint) {
      res["RegionVpcEndpoint"] = boost::any(*regionVpcEndpoint);
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
    if (m.find("RegionVpcEndpoint") != m.end() && !m["RegionVpcEndpoint"].empty()) {
      regionVpcEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionVpcEndpoint"]));
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
class DetachClusterFromHubRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterIds{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterIds") != m.end() && !m["ClusterIds"].empty()) {
      clusterIds = make_shared<string>(boost::any_cast<string>(m["ClusterIds"]));
    }
  }


  virtual ~DetachClusterFromHubRequest() = default;
};
class DetachClusterFromHubResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<vector<string>> managedClusterIds{};
  shared_ptr<string> requestId{};

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
  }


  virtual ~DetachClusterFromHubResponseBody() = default;
};
class DetachClusterFromHubResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetachClusterFromHubResponseBody> body{};

  DetachClusterFromHubResponse() {}

  explicit DetachClusterFromHubResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachClusterFromHubResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachClusterFromHubResponseBody>(model1);
      }
    }
  }


  virtual ~DetachClusterFromHubResponse() = default;
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
  DeleteHubClusterResponse deleteHubClusterWithOptions(shared_ptr<DeleteHubClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteHubClusterResponse deleteHubCluster(shared_ptr<DeleteHubClusterRequest> request);
  DescribeHubClusterDetailsResponse describeHubClusterDetailsWithOptions(shared_ptr<DescribeHubClusterDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHubClusterDetailsResponse describeHubClusterDetails(shared_ptr<DescribeHubClusterDetailsRequest> request);
  DescribeHubClusterKubeconfigResponse describeHubClusterKubeconfigWithOptions(shared_ptr<DescribeHubClusterKubeconfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHubClusterKubeconfigResponse describeHubClusterKubeconfig(shared_ptr<DescribeHubClusterKubeconfigRequest> request);
  DescribeHubClusterLogsResponse describeHubClusterLogsWithOptions(shared_ptr<DescribeHubClusterLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHubClusterLogsResponse describeHubClusterLogs(shared_ptr<DescribeHubClusterLogsRequest> request);
  DescribeHubClustersResponse describeHubClustersWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHubClustersResponse describeHubClusters();
  DescribeManagedClustersResponse describeManagedClustersWithOptions(shared_ptr<DescribeManagedClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeManagedClustersResponse describeManagedClusters(shared_ptr<DescribeManagedClustersRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DetachClusterFromHubResponse detachClusterFromHubWithOptions(shared_ptr<DetachClusterFromHubRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachClusterFromHubResponse detachClusterFromHub(shared_ptr<DetachClusterFromHubRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Adcp20220101

#endif
