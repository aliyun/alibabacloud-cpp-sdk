// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SERVICEMESH20200111_H_
#define ALIBABACLOUD_SERVICEMESH20200111_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Servicemesh20200111 {
class RunDiagnosisRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  RunDiagnosisRequest() {}

  explicit RunDiagnosisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~RunDiagnosisRequest() = default;
};
class RunDiagnosisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  RunDiagnosisResponseBody() {}

  explicit RunDiagnosisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~RunDiagnosisResponseBody() = default;
};
class RunDiagnosisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RunDiagnosisResponseBody> body{};

  RunDiagnosisResponse() {}

  explicit RunDiagnosisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunDiagnosisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunDiagnosisResponseBody>(model1);
      }
    }
  }


  virtual ~RunDiagnosisResponse() = default;
};
class DescribeClusterGrafanaRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> k8sClusterId{};

  DescribeClusterGrafanaRequest() {}

  explicit DescribeClusterGrafanaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (k8sClusterId) {
      res["K8sClusterId"] = boost::any(*k8sClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("K8sClusterId") != m.end() && !m["K8sClusterId"].empty()) {
      k8sClusterId = make_shared<string>(boost::any_cast<string>(m["K8sClusterId"]));
    }
  }


  virtual ~DescribeClusterGrafanaRequest() = default;
};
class DescribeClusterGrafanaResponseBodyDashboards : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> title{};

  DescribeClusterGrafanaResponseBodyDashboards() {}

  explicit DescribeClusterGrafanaResponseBodyDashboards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeClusterGrafanaResponseBodyDashboards() = default;
};
class DescribeClusterGrafanaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeClusterGrafanaResponseBodyDashboards>> dashboards{};

  DescribeClusterGrafanaResponseBody() {}

  explicit DescribeClusterGrafanaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dashboards) {
      vector<boost::any> temp1;
      for(auto item1:*dashboards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dashboards"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Dashboards") != m.end() && !m["Dashboards"].empty()) {
      if (typeid(vector<boost::any>) == m["Dashboards"].type()) {
        vector<DescribeClusterGrafanaResponseBodyDashboards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dashboards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterGrafanaResponseBodyDashboards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dashboards = make_shared<vector<DescribeClusterGrafanaResponseBodyDashboards>>(expect1);
      }
    }
  }


  virtual ~DescribeClusterGrafanaResponseBody() = default;
};
class DescribeClusterGrafanaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterGrafanaResponseBody> body{};

  DescribeClusterGrafanaResponse() {}

  explicit DescribeClusterGrafanaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterGrafanaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterGrafanaResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterGrafanaResponse() = default;
};
class DescribeGuestClusterAccessLogDashboardsRequest : public Darabonba::Model {
public:
  shared_ptr<string> k8sClusterId{};

  DescribeGuestClusterAccessLogDashboardsRequest() {}

  explicit DescribeGuestClusterAccessLogDashboardsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (k8sClusterId) {
      res["K8sClusterId"] = boost::any(*k8sClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("K8sClusterId") != m.end() && !m["K8sClusterId"].empty()) {
      k8sClusterId = make_shared<string>(boost::any_cast<string>(m["K8sClusterId"]));
    }
  }


  virtual ~DescribeGuestClusterAccessLogDashboardsRequest() = default;
};
class DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> title{};

  DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards() {}

  explicit DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards() = default;
};
class DescribeGuestClusterAccessLogDashboardsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards>> dashboards{};
  shared_ptr<string> k8sClusterId{};

  DescribeGuestClusterAccessLogDashboardsResponseBody() {}

  explicit DescribeGuestClusterAccessLogDashboardsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dashboards) {
      vector<boost::any> temp1;
      for(auto item1:*dashboards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dashboards"] = boost::any(temp1);
    }
    if (k8sClusterId) {
      res["K8sClusterId"] = boost::any(*k8sClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Dashboards") != m.end() && !m["Dashboards"].empty()) {
      if (typeid(vector<boost::any>) == m["Dashboards"].type()) {
        vector<DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dashboards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dashboards = make_shared<vector<DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards>>(expect1);
      }
    }
    if (m.find("K8sClusterId") != m.end() && !m["K8sClusterId"].empty()) {
      k8sClusterId = make_shared<string>(boost::any_cast<string>(m["K8sClusterId"]));
    }
  }


  virtual ~DescribeGuestClusterAccessLogDashboardsResponseBody() = default;
};
class DescribeGuestClusterAccessLogDashboardsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGuestClusterAccessLogDashboardsResponseBody> body{};

  DescribeGuestClusterAccessLogDashboardsResponse() {}

  explicit DescribeGuestClusterAccessLogDashboardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGuestClusterAccessLogDashboardsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGuestClusterAccessLogDashboardsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGuestClusterAccessLogDashboardsResponse() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> intranetPilotEndpoint{};
  shared_ptr<string> reverseTunnelEndpoint{};
  shared_ptr<string> publicPilotEndpoint{};
  shared_ptr<string> intranetApiServerEndpoint{};
  shared_ptr<string> publicApiServerEndpoint{};

  DescribeServiceMeshesResponseBodyServiceMeshesEndpoints() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intranetPilotEndpoint) {
      res["IntranetPilotEndpoint"] = boost::any(*intranetPilotEndpoint);
    }
    if (reverseTunnelEndpoint) {
      res["ReverseTunnelEndpoint"] = boost::any(*reverseTunnelEndpoint);
    }
    if (publicPilotEndpoint) {
      res["PublicPilotEndpoint"] = boost::any(*publicPilotEndpoint);
    }
    if (intranetApiServerEndpoint) {
      res["IntranetApiServerEndpoint"] = boost::any(*intranetApiServerEndpoint);
    }
    if (publicApiServerEndpoint) {
      res["PublicApiServerEndpoint"] = boost::any(*publicApiServerEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntranetPilotEndpoint") != m.end() && !m["IntranetPilotEndpoint"].empty()) {
      intranetPilotEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetPilotEndpoint"]));
    }
    if (m.find("ReverseTunnelEndpoint") != m.end() && !m["ReverseTunnelEndpoint"].empty()) {
      reverseTunnelEndpoint = make_shared<string>(boost::any_cast<string>(m["ReverseTunnelEndpoint"]));
    }
    if (m.find("PublicPilotEndpoint") != m.end() && !m["PublicPilotEndpoint"].empty()) {
      publicPilotEndpoint = make_shared<string>(boost::any_cast<string>(m["PublicPilotEndpoint"]));
    }
    if (m.find("IntranetApiServerEndpoint") != m.end() && !m["IntranetApiServerEndpoint"].empty()) {
      intranetApiServerEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetApiServerEndpoint"]));
    }
    if (m.find("PublicApiServerEndpoint") != m.end() && !m["PublicApiServerEndpoint"].empty()) {
      publicApiServerEndpoint = make_shared<string>(boost::any_cast<string>(m["PublicApiServerEndpoint"]));
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesEndpoints() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo : public Darabonba::Model {
public:
  shared_ptr<string> profile{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> version{};
  shared_ptr<string> state{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<string>> vSwitches{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
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
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer : public Darabonba::Model {
public:
  shared_ptr<bool> pilotPublicEip{};
  shared_ptr<string> pilotPublicLoadbalancerId{};
  shared_ptr<string> apiServerLoadbalancerId{};
  shared_ptr<bool> apiServerPublicEip{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pilotPublicEip) {
      res["PilotPublicEip"] = boost::any(*pilotPublicEip);
    }
    if (pilotPublicLoadbalancerId) {
      res["PilotPublicLoadbalancerId"] = boost::any(*pilotPublicLoadbalancerId);
    }
    if (apiServerLoadbalancerId) {
      res["ApiServerLoadbalancerId"] = boost::any(*apiServerLoadbalancerId);
    }
    if (apiServerPublicEip) {
      res["ApiServerPublicEip"] = boost::any(*apiServerPublicEip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PilotPublicEip") != m.end() && !m["PilotPublicEip"].empty()) {
      pilotPublicEip = make_shared<bool>(boost::any_cast<bool>(m["PilotPublicEip"]));
    }
    if (m.find("PilotPublicLoadbalancerId") != m.end() && !m["PilotPublicLoadbalancerId"].empty()) {
      pilotPublicLoadbalancerId = make_shared<string>(boost::any_cast<string>(m["PilotPublicLoadbalancerId"]));
    }
    if (m.find("ApiServerLoadbalancerId") != m.end() && !m["ApiServerLoadbalancerId"].empty()) {
      apiServerLoadbalancerId = make_shared<string>(boost::any_cast<string>(m["ApiServerLoadbalancerId"]));
    }
    if (m.find("ApiServerPublicEip") != m.end() && !m["ApiServerPublicEip"].empty()) {
      apiServerPublicEip = make_shared<bool>(boost::any_cast<bool>(m["ApiServerPublicEip"]));
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot : public Darabonba::Model {
public:
  shared_ptr<bool> http10Enabled{};
  shared_ptr<double> traceSampling{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (http10Enabled) {
      res["Http10Enabled"] = boost::any(*http10Enabled);
    }
    if (traceSampling) {
      res["TraceSampling"] = boost::any(*traceSampling);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Http10Enabled") != m.end() && !m["Http10Enabled"].empty()) {
      http10Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http10Enabled"]));
    }
    if (m.find("TraceSampling") != m.end() && !m["TraceSampling"].empty()) {
      traceSampling = make_shared<double>(boost::any_cast<double>(m["TraceSampling"]));
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> excludeNamespaces{};
  shared_ptr<bool> enabled{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeNamespaces) {
      res["ExcludeNamespaces"] = boost::any(*excludeNamespaces);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeNamespaces") != m.end() && !m["ExcludeNamespaces"].empty()) {
      excludeNamespaces = make_shared<string>(boost::any_cast<string>(m["ExcludeNamespaces"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector : public Darabonba::Model {
public:
  shared_ptr<bool> enableNamespacesByDefault{};
  shared_ptr<bool> autoInjectionPolicyEnabled{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration> initCNIConfiguration{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableNamespacesByDefault) {
      res["EnableNamespacesByDefault"] = boost::any(*enableNamespacesByDefault);
    }
    if (autoInjectionPolicyEnabled) {
      res["AutoInjectionPolicyEnabled"] = boost::any(*autoInjectionPolicyEnabled);
    }
    if (initCNIConfiguration) {
      res["InitCNIConfiguration"] = initCNIConfiguration ? boost::any(initCNIConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableNamespacesByDefault") != m.end() && !m["EnableNamespacesByDefault"].empty()) {
      enableNamespacesByDefault = make_shared<bool>(boost::any_cast<bool>(m["EnableNamespacesByDefault"]));
    }
    if (m.find("AutoInjectionPolicyEnabled") != m.end() && !m["AutoInjectionPolicyEnabled"].empty()) {
      autoInjectionPolicyEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoInjectionPolicyEnabled"]));
    }
    if (m.find("InitCNIConfiguration") != m.end() && !m["InitCNIConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["InitCNIConfiguration"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InitCNIConfiguration"]));
        initCNIConfiguration = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig : public Darabonba::Model {
public:
  shared_ptr<bool> telemetry{};
  shared_ptr<string> outboundTrafficPolicy{};
  shared_ptr<bool> tracing{};
  shared_ptr<bool> strictMtls{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot> pilot{};
  shared_ptr<bool> mtls{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector> sidecarInjector{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (telemetry) {
      res["Telemetry"] = boost::any(*telemetry);
    }
    if (outboundTrafficPolicy) {
      res["OutboundTrafficPolicy"] = boost::any(*outboundTrafficPolicy);
    }
    if (tracing) {
      res["Tracing"] = boost::any(*tracing);
    }
    if (strictMtls) {
      res["StrictMtls"] = boost::any(*strictMtls);
    }
    if (pilot) {
      res["Pilot"] = pilot ? boost::any(pilot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mtls) {
      res["Mtls"] = boost::any(*mtls);
    }
    if (sidecarInjector) {
      res["SidecarInjector"] = sidecarInjector ? boost::any(sidecarInjector->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Telemetry") != m.end() && !m["Telemetry"].empty()) {
      telemetry = make_shared<bool>(boost::any_cast<bool>(m["Telemetry"]));
    }
    if (m.find("OutboundTrafficPolicy") != m.end() && !m["OutboundTrafficPolicy"].empty()) {
      outboundTrafficPolicy = make_shared<string>(boost::any_cast<string>(m["OutboundTrafficPolicy"]));
    }
    if (m.find("Tracing") != m.end() && !m["Tracing"].empty()) {
      tracing = make_shared<bool>(boost::any_cast<bool>(m["Tracing"]));
    }
    if (m.find("StrictMtls") != m.end() && !m["StrictMtls"].empty()) {
      strictMtls = make_shared<bool>(boost::any_cast<bool>(m["StrictMtls"]));
    }
    if (m.find("Pilot") != m.end() && !m["Pilot"].empty()) {
      if (typeid(map<string, boost::any>) == m["Pilot"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Pilot"]));
        pilot = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot>(model1);
      }
    }
    if (m.find("Mtls") != m.end() && !m["Mtls"].empty()) {
      mtls = make_shared<bool>(boost::any_cast<bool>(m["Mtls"]));
    }
    if (m.find("SidecarInjector") != m.end() && !m["SidecarInjector"].empty()) {
      if (typeid(map<string, boost::any>) == m["SidecarInjector"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SidecarInjector"]));
        sidecarInjector = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpec : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork> network{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer> loadBalancer{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig> meshConfig{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpec() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loadBalancer) {
      res["LoadBalancer"] = loadBalancer ? boost::any(loadBalancer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (meshConfig) {
      res["MeshConfig"] = meshConfig ? boost::any(meshConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork>(model1);
      }
    }
    if (m.find("LoadBalancer") != m.end() && !m["LoadBalancer"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancer"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancer"]));
        loadBalancer = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer>(model1);
      }
    }
    if (m.find("MeshConfig") != m.end() && !m["MeshConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MeshConfig"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MeshConfig"]));
        meshConfig = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpec() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshes : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesEndpoints> endpoints{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo> serviceMeshInfo{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpec> spec{};
  shared_ptr<vector<string>> clusters{};

  DescribeServiceMeshesResponseBodyServiceMeshes() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoints) {
      res["Endpoints"] = endpoints ? boost::any(endpoints->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceMeshInfo) {
      res["ServiceMeshInfo"] = serviceMeshInfo ? boost::any(serviceMeshInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (spec) {
      res["Spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusters) {
      res["Clusters"] = boost::any(*clusters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(map<string, boost::any>) == m["Endpoints"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesEndpoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Endpoints"]));
        endpoints = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesEndpoints>(model1);
      }
    }
    if (m.find("ServiceMeshInfo") != m.end() && !m["ServiceMeshInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceMeshInfo"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceMeshInfo"]));
        serviceMeshInfo = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo>(model1);
      }
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Spec"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Spec"]));
        spec = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpec>(model1);
      }
    }
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Clusters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusters = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshes() = default;
};
class DescribeServiceMeshesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeServiceMeshesResponseBodyServiceMeshes>> serviceMeshes{};

  DescribeServiceMeshesResponseBody() {}

  explicit DescribeServiceMeshesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceMeshes) {
      vector<boost::any> temp1;
      for(auto item1:*serviceMeshes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceMeshes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceMeshes") != m.end() && !m["ServiceMeshes"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceMeshes"].type()) {
        vector<DescribeServiceMeshesResponseBodyServiceMeshes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceMeshes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceMeshesResponseBodyServiceMeshes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceMeshes = make_shared<vector<DescribeServiceMeshesResponseBodyServiceMeshes>>(expect1);
      }
    }
  }


  virtual ~DescribeServiceMeshesResponseBody() = default;
};
class DescribeServiceMeshesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeServiceMeshesResponseBody> body{};

  DescribeServiceMeshesResponse() {}

  explicit DescribeServiceMeshesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeServiceMeshesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceMeshesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshesResponse() = default;
};
class GetDiagnosisRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetDiagnosisRequest() {}

  explicit GetDiagnosisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetDiagnosisRequest() = default;
};
class GetDiagnosisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> requestId{};
  shared_ptr<string> runAt{};
  shared_ptr<string> result{};

  GetDiagnosisResponseBody() {}

  explicit GetDiagnosisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (runAt) {
      res["RunAt"] = boost::any(*runAt);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RunAt") != m.end() && !m["RunAt"].empty()) {
      runAt = make_shared<string>(boost::any_cast<string>(m["RunAt"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~GetDiagnosisResponseBody() = default;
};
class GetDiagnosisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDiagnosisResponseBody> body{};

  GetDiagnosisResponse() {}

  explicit GetDiagnosisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDiagnosisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDiagnosisResponseBody>(model1);
      }
    }
  }


  virtual ~GetDiagnosisResponse() = default;
};
class GetRegisteredServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> namespace_{};

  GetRegisteredServicesRequest() {}

  explicit GetRegisteredServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
  }


  virtual ~GetRegisteredServicesRequest() = default;
};
class GetRegisteredServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> services{};
  shared_ptr<string> requestId{};

  GetRegisteredServicesResponseBody() {}

  explicit GetRegisteredServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (services) {
      res["Services"] = boost::any(*services);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Services"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      services = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRegisteredServicesResponseBody() = default;
};
class GetRegisteredServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRegisteredServicesResponseBody> body{};

  GetRegisteredServicesResponse() {}

  explicit GetRegisteredServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRegisteredServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRegisteredServicesResponseBody>(model1);
      }
    }
  }


  virtual ~GetRegisteredServicesResponse() = default;
};
class DescribeIngressGatewaysRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeIngressGatewaysRequest() {}

  explicit DescribeIngressGatewaysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeIngressGatewaysRequest() = default;
};
class DescribeIngressGatewaysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> ingressGateways{};

  DescribeIngressGatewaysResponseBody() {}

  explicit DescribeIngressGatewaysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ingressGateways) {
      res["IngressGateways"] = boost::any(*ingressGateways);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IngressGateways") != m.end() && !m["IngressGateways"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["IngressGateways"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IngressGateways"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      ingressGateways = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~DescribeIngressGatewaysResponseBody() = default;
};
class DescribeIngressGatewaysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeIngressGatewaysResponseBody> body{};

  DescribeIngressGatewaysResponse() {}

  explicit DescribeIngressGatewaysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIngressGatewaysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIngressGatewaysResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIngressGatewaysResponse() = default;
};
class DescribeServiceMeshDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeServiceMeshDetailRequest() {}

  explicit DescribeServiceMeshDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeServiceMeshDetailRequest() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> intranetPilotEndpoint{};
  shared_ptr<string> publicPilotEndpoint{};
  shared_ptr<string> intranetApiServerEndpoint{};
  shared_ptr<string> publicApiServerEndpoint{};

  DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intranetPilotEndpoint) {
      res["IntranetPilotEndpoint"] = boost::any(*intranetPilotEndpoint);
    }
    if (publicPilotEndpoint) {
      res["PublicPilotEndpoint"] = boost::any(*publicPilotEndpoint);
    }
    if (intranetApiServerEndpoint) {
      res["IntranetApiServerEndpoint"] = boost::any(*intranetApiServerEndpoint);
    }
    if (publicApiServerEndpoint) {
      res["PublicApiServerEndpoint"] = boost::any(*publicApiServerEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntranetPilotEndpoint") != m.end() && !m["IntranetPilotEndpoint"].empty()) {
      intranetPilotEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetPilotEndpoint"]));
    }
    if (m.find("PublicPilotEndpoint") != m.end() && !m["PublicPilotEndpoint"].empty()) {
      publicPilotEndpoint = make_shared<string>(boost::any_cast<string>(m["PublicPilotEndpoint"]));
    }
    if (m.find("IntranetApiServerEndpoint") != m.end() && !m["IntranetApiServerEndpoint"].empty()) {
      intranetApiServerEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetApiServerEndpoint"]));
    }
    if (m.find("PublicApiServerEndpoint") != m.end() && !m["PublicApiServerEndpoint"].empty()) {
      publicApiServerEndpoint = make_shared<string>(boost::any_cast<string>(m["PublicApiServerEndpoint"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo : public Darabonba::Model {
public:
  shared_ptr<string> profile{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> version{};
  shared_ptr<string> state{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork : public Darabonba::Model {
public:
  shared_ptr<string> vpcId{};
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<string>> vSwitches{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
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
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer : public Darabonba::Model {
public:
  shared_ptr<bool> pilotPublicEip{};
  shared_ptr<string> pilotPublicLoadbalancerId{};
  shared_ptr<string> apiServerLoadbalancerId{};
  shared_ptr<bool> apiServerPublicEip{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pilotPublicEip) {
      res["PilotPublicEip"] = boost::any(*pilotPublicEip);
    }
    if (pilotPublicLoadbalancerId) {
      res["PilotPublicLoadbalancerId"] = boost::any(*pilotPublicLoadbalancerId);
    }
    if (apiServerLoadbalancerId) {
      res["ApiServerLoadbalancerId"] = boost::any(*apiServerLoadbalancerId);
    }
    if (apiServerPublicEip) {
      res["ApiServerPublicEip"] = boost::any(*apiServerPublicEip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PilotPublicEip") != m.end() && !m["PilotPublicEip"].empty()) {
      pilotPublicEip = make_shared<bool>(boost::any_cast<bool>(m["PilotPublicEip"]));
    }
    if (m.find("PilotPublicLoadbalancerId") != m.end() && !m["PilotPublicLoadbalancerId"].empty()) {
      pilotPublicLoadbalancerId = make_shared<string>(boost::any_cast<string>(m["PilotPublicLoadbalancerId"]));
    }
    if (m.find("ApiServerLoadbalancerId") != m.end() && !m["ApiServerLoadbalancerId"].empty()) {
      apiServerLoadbalancerId = make_shared<string>(boost::any_cast<string>(m["ApiServerLoadbalancerId"]));
    }
    if (m.find("ApiServerPublicEip") != m.end() && !m["ApiServerPublicEip"].empty()) {
      apiServerPublicEip = make_shared<bool>(boost::any_cast<bool>(m["ApiServerPublicEip"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA : public Darabonba::Model {
public:
  shared_ptr<string> requestMemory{};
  shared_ptr<string> logLevel{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> limitMemory{};
  shared_ptr<string> requestCPU{};
  shared_ptr<string> limitCPU{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (logLevel) {
      res["LogLevel"] = boost::any(*logLevel);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (limitMemory) {
      res["LimitMemory"] = boost::any(*limitMemory);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (limitCPU) {
      res["LimitCPU"] = boost::any(*limitCPU);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<string>(boost::any_cast<string>(m["RequestMemory"]));
    }
    if (m.find("LogLevel") != m.end() && !m["LogLevel"].empty()) {
      logLevel = make_shared<string>(boost::any_cast<string>(m["LogLevel"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("LimitMemory") != m.end() && !m["LimitMemory"].empty()) {
      limitMemory = make_shared<string>(boost::any_cast<string>(m["LimitMemory"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<string>(boost::any_cast<string>(m["RequestCPU"]));
    }
    if (m.find("LimitCPU") != m.end() && !m["LimitCPU"].empty()) {
      limitCPU = make_shared<string>(boost::any_cast<string>(m["LimitCPU"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus : public Darabonba::Model {
public:
  shared_ptr<bool> useExternal{};
  shared_ptr<string> externalUrl{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (useExternal) {
      res["UseExternal"] = boost::any(*useExternal);
    }
    if (externalUrl) {
      res["ExternalUrl"] = boost::any(*externalUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UseExternal") != m.end() && !m["UseExternal"].empty()) {
      useExternal = make_shared<bool>(boost::any_cast<bool>(m["UseExternal"]));
    }
    if (m.find("ExternalUrl") != m.end() && !m["ExternalUrl"].empty()) {
      externalUrl = make_shared<string>(boost::any_cast<string>(m["ExternalUrl"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot : public Darabonba::Model {
public:
  shared_ptr<bool> http10Enabled{};
  shared_ptr<double> traceSampling{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (http10Enabled) {
      res["Http10Enabled"] = boost::any(*http10Enabled);
    }
    if (traceSampling) {
      res["TraceSampling"] = boost::any(*traceSampling);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Http10Enabled") != m.end() && !m["Http10Enabled"].empty()) {
      http10Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http10Enabled"]));
    }
    if (m.find("TraceSampling") != m.end() && !m["TraceSampling"].empty()) {
      traceSampling = make_shared<double>(boost::any_cast<double>(m["TraceSampling"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration : public Darabonba::Model {
public:
  shared_ptr<string> excludeNamespaces{};
  shared_ptr<bool> enabled{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeNamespaces) {
      res["ExcludeNamespaces"] = boost::any(*excludeNamespaces);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeNamespaces") != m.end() && !m["ExcludeNamespaces"].empty()) {
      excludeNamespaces = make_shared<string>(boost::any_cast<string>(m["ExcludeNamespaces"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector : public Darabonba::Model {
public:
  shared_ptr<bool> enableNamespacesByDefault{};
  shared_ptr<string> requestMemory{};
  shared_ptr<string> limitMemory{};
  shared_ptr<string> requestCPU{};
  shared_ptr<bool> autoInjectionPolicyEnabled{};
  shared_ptr<string> limitCPU{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration> initCNIConfiguration{};
  shared_ptr<string> sidecarInjectorWebhookAsYaml{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableNamespacesByDefault) {
      res["EnableNamespacesByDefault"] = boost::any(*enableNamespacesByDefault);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (limitMemory) {
      res["LimitMemory"] = boost::any(*limitMemory);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (autoInjectionPolicyEnabled) {
      res["AutoInjectionPolicyEnabled"] = boost::any(*autoInjectionPolicyEnabled);
    }
    if (limitCPU) {
      res["LimitCPU"] = boost::any(*limitCPU);
    }
    if (initCNIConfiguration) {
      res["InitCNIConfiguration"] = initCNIConfiguration ? boost::any(initCNIConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sidecarInjectorWebhookAsYaml) {
      res["SidecarInjectorWebhookAsYaml"] = boost::any(*sidecarInjectorWebhookAsYaml);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableNamespacesByDefault") != m.end() && !m["EnableNamespacesByDefault"].empty()) {
      enableNamespacesByDefault = make_shared<bool>(boost::any_cast<bool>(m["EnableNamespacesByDefault"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<string>(boost::any_cast<string>(m["RequestMemory"]));
    }
    if (m.find("LimitMemory") != m.end() && !m["LimitMemory"].empty()) {
      limitMemory = make_shared<string>(boost::any_cast<string>(m["LimitMemory"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<string>(boost::any_cast<string>(m["RequestCPU"]));
    }
    if (m.find("AutoInjectionPolicyEnabled") != m.end() && !m["AutoInjectionPolicyEnabled"].empty()) {
      autoInjectionPolicyEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoInjectionPolicyEnabled"]));
    }
    if (m.find("LimitCPU") != m.end() && !m["LimitCPU"].empty()) {
      limitCPU = make_shared<string>(boost::any_cast<string>(m["LimitCPU"]));
    }
    if (m.find("InitCNIConfiguration") != m.end() && !m["InitCNIConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["InitCNIConfiguration"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InitCNIConfiguration"]));
        initCNIConfiguration = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration>(model1);
      }
    }
    if (m.find("SidecarInjectorWebhookAsYaml") != m.end() && !m["SidecarInjectorWebhookAsYaml"].empty()) {
      sidecarInjectorWebhookAsYaml = make_shared<string>(boost::any_cast<string>(m["SidecarInjectorWebhookAsYaml"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport : public Darabonba::Model {
public:
  shared_ptr<bool> mysqlFilterEnabled{};
  shared_ptr<bool> redisFilterEnabled{};
  shared_ptr<bool> thriftFilterEnabled{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mysqlFilterEnabled) {
      res["MysqlFilterEnabled"] = boost::any(*mysqlFilterEnabled);
    }
    if (redisFilterEnabled) {
      res["RedisFilterEnabled"] = boost::any(*redisFilterEnabled);
    }
    if (thriftFilterEnabled) {
      res["ThriftFilterEnabled"] = boost::any(*thriftFilterEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MysqlFilterEnabled") != m.end() && !m["MysqlFilterEnabled"].empty()) {
      mysqlFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["MysqlFilterEnabled"]));
    }
    if (m.find("RedisFilterEnabled") != m.end() && !m["RedisFilterEnabled"].empty()) {
      redisFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["RedisFilterEnabled"]));
    }
    if (m.find("ThriftFilterEnabled") != m.end() && !m["ThriftFilterEnabled"].empty()) {
      thriftFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["ThriftFilterEnabled"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> url{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> project{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy : public Darabonba::Model {
public:
  shared_ptr<string> requestMemory{};
  shared_ptr<string> clusterDomain{};
  shared_ptr<string> limitMemory{};
  shared_ptr<string> requestCPU{};
  shared_ptr<bool> enableDNSProxying{};
  shared_ptr<string> limitCPU{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (clusterDomain) {
      res["ClusterDomain"] = boost::any(*clusterDomain);
    }
    if (limitMemory) {
      res["LimitMemory"] = boost::any(*limitMemory);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (enableDNSProxying) {
      res["EnableDNSProxying"] = boost::any(*enableDNSProxying);
    }
    if (limitCPU) {
      res["LimitCPU"] = boost::any(*limitCPU);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<string>(boost::any_cast<string>(m["RequestMemory"]));
    }
    if (m.find("ClusterDomain") != m.end() && !m["ClusterDomain"].empty()) {
      clusterDomain = make_shared<string>(boost::any_cast<string>(m["ClusterDomain"]));
    }
    if (m.find("LimitMemory") != m.end() && !m["LimitMemory"].empty()) {
      limitMemory = make_shared<string>(boost::any_cast<string>(m["LimitMemory"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<string>(boost::any_cast<string>(m["RequestCPU"]));
    }
    if (m.find("EnableDNSProxying") != m.end() && !m["EnableDNSProxying"].empty()) {
      enableDNSProxying = make_shared<bool>(boost::any_cast<bool>(m["EnableDNSProxying"]));
    }
    if (m.find("LimitCPU") != m.end() && !m["LimitCPU"].empty()) {
      limitCPU = make_shared<string>(boost::any_cast<string>(m["LimitCPU"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA> OPA{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus> prometheus{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog> accessLog{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot> pilot{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE> MSE{};
  shared_ptr<bool> customizedZipkin{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector> sidecarInjector{};
  shared_ptr<string> includeIPRanges{};
  shared_ptr<bool> telemetry{};
  shared_ptr<string> edition{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport> protocolSupport{};
  shared_ptr<string> outboundTrafficPolicy{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali> kiali{};
  shared_ptr<bool> tracing{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment> webAssemblyFilterDeployment{};
  shared_ptr<bool> enableLocalityLB{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit> audit{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy> proxy{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OPA) {
      res["OPA"] = OPA ? boost::any(OPA->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (prometheus) {
      res["Prometheus"] = prometheus ? boost::any(prometheus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (accessLog) {
      res["AccessLog"] = accessLog ? boost::any(accessLog->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pilot) {
      res["Pilot"] = pilot ? boost::any(pilot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (MSE) {
      res["MSE"] = MSE ? boost::any(MSE->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customizedZipkin) {
      res["CustomizedZipkin"] = boost::any(*customizedZipkin);
    }
    if (sidecarInjector) {
      res["SidecarInjector"] = sidecarInjector ? boost::any(sidecarInjector->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (includeIPRanges) {
      res["IncludeIPRanges"] = boost::any(*includeIPRanges);
    }
    if (telemetry) {
      res["Telemetry"] = boost::any(*telemetry);
    }
    if (edition) {
      res["Edition"] = boost::any(*edition);
    }
    if (protocolSupport) {
      res["ProtocolSupport"] = protocolSupport ? boost::any(protocolSupport->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outboundTrafficPolicy) {
      res["OutboundTrafficPolicy"] = boost::any(*outboundTrafficPolicy);
    }
    if (kiali) {
      res["Kiali"] = kiali ? boost::any(kiali->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tracing) {
      res["Tracing"] = boost::any(*tracing);
    }
    if (webAssemblyFilterDeployment) {
      res["WebAssemblyFilterDeployment"] = webAssemblyFilterDeployment ? boost::any(webAssemblyFilterDeployment->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (enableLocalityLB) {
      res["EnableLocalityLB"] = boost::any(*enableLocalityLB);
    }
    if (audit) {
      res["Audit"] = audit ? boost::any(audit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (proxy) {
      res["Proxy"] = proxy ? boost::any(proxy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OPA") != m.end() && !m["OPA"].empty()) {
      if (typeid(map<string, boost::any>) == m["OPA"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OPA"]));
        OPA = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA>(model1);
      }
    }
    if (m.find("Prometheus") != m.end() && !m["Prometheus"].empty()) {
      if (typeid(map<string, boost::any>) == m["Prometheus"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Prometheus"]));
        prometheus = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus>(model1);
      }
    }
    if (m.find("AccessLog") != m.end() && !m["AccessLog"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessLog"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessLog"]));
        accessLog = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog>(model1);
      }
    }
    if (m.find("Pilot") != m.end() && !m["Pilot"].empty()) {
      if (typeid(map<string, boost::any>) == m["Pilot"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Pilot"]));
        pilot = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot>(model1);
      }
    }
    if (m.find("MSE") != m.end() && !m["MSE"].empty()) {
      if (typeid(map<string, boost::any>) == m["MSE"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MSE"]));
        MSE = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE>(model1);
      }
    }
    if (m.find("CustomizedZipkin") != m.end() && !m["CustomizedZipkin"].empty()) {
      customizedZipkin = make_shared<bool>(boost::any_cast<bool>(m["CustomizedZipkin"]));
    }
    if (m.find("SidecarInjector") != m.end() && !m["SidecarInjector"].empty()) {
      if (typeid(map<string, boost::any>) == m["SidecarInjector"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SidecarInjector"]));
        sidecarInjector = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector>(model1);
      }
    }
    if (m.find("IncludeIPRanges") != m.end() && !m["IncludeIPRanges"].empty()) {
      includeIPRanges = make_shared<string>(boost::any_cast<string>(m["IncludeIPRanges"]));
    }
    if (m.find("Telemetry") != m.end() && !m["Telemetry"].empty()) {
      telemetry = make_shared<bool>(boost::any_cast<bool>(m["Telemetry"]));
    }
    if (m.find("Edition") != m.end() && !m["Edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["Edition"]));
    }
    if (m.find("ProtocolSupport") != m.end() && !m["ProtocolSupport"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProtocolSupport"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProtocolSupport"]));
        protocolSupport = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport>(model1);
      }
    }
    if (m.find("OutboundTrafficPolicy") != m.end() && !m["OutboundTrafficPolicy"].empty()) {
      outboundTrafficPolicy = make_shared<string>(boost::any_cast<string>(m["OutboundTrafficPolicy"]));
    }
    if (m.find("Kiali") != m.end() && !m["Kiali"].empty()) {
      if (typeid(map<string, boost::any>) == m["Kiali"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Kiali"]));
        kiali = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali>(model1);
      }
    }
    if (m.find("Tracing") != m.end() && !m["Tracing"].empty()) {
      tracing = make_shared<bool>(boost::any_cast<bool>(m["Tracing"]));
    }
    if (m.find("WebAssemblyFilterDeployment") != m.end() && !m["WebAssemblyFilterDeployment"].empty()) {
      if (typeid(map<string, boost::any>) == m["WebAssemblyFilterDeployment"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WebAssemblyFilterDeployment"]));
        webAssemblyFilterDeployment = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment>(model1);
      }
    }
    if (m.find("EnableLocalityLB") != m.end() && !m["EnableLocalityLB"].empty()) {
      enableLocalityLB = make_shared<bool>(boost::any_cast<bool>(m["EnableLocalityLB"]));
    }
    if (m.find("Audit") != m.end() && !m["Audit"].empty()) {
      if (typeid(map<string, boost::any>) == m["Audit"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Audit"]));
        audit = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit>(model1);
      }
    }
    if (m.find("Proxy") != m.end() && !m["Proxy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Proxy"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Proxy"]));
        proxy = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpec : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork> network{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer> loadBalancer{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig> meshConfig{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpec() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loadBalancer) {
      res["LoadBalancer"] = loadBalancer ? boost::any(loadBalancer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (meshConfig) {
      res["MeshConfig"] = meshConfig ? boost::any(meshConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork>(model1);
      }
    }
    if (m.find("LoadBalancer") != m.end() && !m["LoadBalancer"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancer"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancer"]));
        loadBalancer = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer>(model1);
      }
    }
    if (m.find("MeshConfig") != m.end() && !m["MeshConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MeshConfig"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MeshConfig"]));
        meshConfig = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpec() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMesh : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints> endpoints{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo> serviceMeshInfo{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpec> spec{};
  shared_ptr<vector<string>> clusters{};

  DescribeServiceMeshDetailResponseBodyServiceMesh() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMesh(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoints) {
      res["Endpoints"] = endpoints ? boost::any(endpoints->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceMeshInfo) {
      res["ServiceMeshInfo"] = serviceMeshInfo ? boost::any(serviceMeshInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (spec) {
      res["Spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (clusters) {
      res["Clusters"] = boost::any(*clusters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(map<string, boost::any>) == m["Endpoints"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Endpoints"]));
        endpoints = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints>(model1);
      }
    }
    if (m.find("ServiceMeshInfo") != m.end() && !m["ServiceMeshInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceMeshInfo"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceMeshInfo"]));
        serviceMeshInfo = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo>(model1);
      }
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Spec"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Spec"]));
        spec = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpec>(model1);
      }
    }
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Clusters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusters = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMesh() = default;
};
class DescribeServiceMeshDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMesh> serviceMesh{};

  DescribeServiceMeshDetailResponseBody() {}

  explicit DescribeServiceMeshDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceMesh) {
      res["ServiceMesh"] = serviceMesh ? boost::any(serviceMesh->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceMesh") != m.end() && !m["ServiceMesh"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceMesh"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMesh model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceMesh"]));
        serviceMesh = make_shared<DescribeServiceMeshDetailResponseBodyServiceMesh>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBody() = default;
};
class DescribeServiceMeshDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeServiceMeshDetailResponseBody> body{};

  DescribeServiceMeshDetailResponse() {}

  explicit DescribeServiceMeshDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeServiceMeshDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceMeshDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshDetailResponse() = default;
};
class DescribeCensRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeCensRequest() {}

  explicit DescribeCensRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeCensRequest() = default;
};
class DescribeCensResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> clusters{};

  DescribeCensResponseBody() {}

  explicit DescribeCensResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (clusters) {
      res["Clusters"] = boost::any(*clusters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Clusters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusters = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeCensResponseBody() = default;
};
class DescribeCensResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCensResponseBody> body{};

  DescribeCensResponse() {}

  explicit DescribeCensResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCensResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCensResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCensResponse() = default;
};
class DeleteServiceMeshRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<bool> force{};

  DeleteServiceMeshRequest() {}

  explicit DeleteServiceMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (force) {
      res["Force"] = boost::any(*force);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
  }


  virtual ~DeleteServiceMeshRequest() = default;
};
class DeleteServiceMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServiceMeshResponseBody() {}

  explicit DeleteServiceMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServiceMeshResponseBody() = default;
};
class DeleteServiceMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteServiceMeshResponseBody> body{};

  DeleteServiceMeshResponse() {}

  explicit DeleteServiceMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteServiceMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceMeshResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceMeshResponse() = default;
};
class UpgradeMeshVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  UpgradeMeshVersionRequest() {}

  explicit UpgradeMeshVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~UpgradeMeshVersionRequest() = default;
};
class UpgradeMeshVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeMeshVersionResponseBody() {}

  explicit UpgradeMeshVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeMeshVersionResponseBody() = default;
};
class UpgradeMeshVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeMeshVersionResponseBody> body{};

  UpgradeMeshVersionResponse() {}

  explicit UpgradeMeshVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeMeshVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeMeshVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeMeshVersionResponse() = default;
};
class DescribeServiceMeshKubeconfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<bool> privateIpAddress{};

  DescribeServiceMeshKubeconfigRequest() {}

  explicit DescribeServiceMeshKubeconfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<bool>(boost::any_cast<bool>(m["PrivateIpAddress"]));
    }
  }


  virtual ~DescribeServiceMeshKubeconfigRequest() = default;
};
class DescribeServiceMeshKubeconfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> kubeconfig{};

  DescribeServiceMeshKubeconfigResponseBody() {}

  explicit DescribeServiceMeshKubeconfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (kubeconfig) {
      res["Kubeconfig"] = boost::any(*kubeconfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Kubeconfig") != m.end() && !m["Kubeconfig"].empty()) {
      kubeconfig = make_shared<string>(boost::any_cast<string>(m["Kubeconfig"]));
    }
  }


  virtual ~DescribeServiceMeshKubeconfigResponseBody() = default;
};
class DescribeServiceMeshKubeconfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeServiceMeshKubeconfigResponseBody> body{};

  DescribeServiceMeshKubeconfigResponse() {}

  explicit DescribeServiceMeshKubeconfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeServiceMeshKubeconfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceMeshKubeconfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshKubeconfigResponse() = default;
};
class GetVmAppMeshInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetVmAppMeshInfoRequest() {}

  explicit GetVmAppMeshInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetVmAppMeshInfoRequest() = default;
};
class GetVmAppMeshInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  GetVmAppMeshInfoResponseBody() {}

  explicit GetVmAppMeshInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~GetVmAppMeshInfoResponseBody() = default;
};
class GetVmAppMeshInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVmAppMeshInfoResponseBody> body{};

  GetVmAppMeshInfoResponse() {}

  explicit GetVmAppMeshInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVmAppMeshInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVmAppMeshInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetVmAppMeshInfoResponse() = default;
};
class RemoveClusterFromServiceMeshRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> clusterId{};

  RemoveClusterFromServiceMeshRequest() {}

  explicit RemoveClusterFromServiceMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~RemoveClusterFromServiceMeshRequest() = default;
};
class RemoveClusterFromServiceMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  RemoveClusterFromServiceMeshResponseBody() {}

  explicit RemoveClusterFromServiceMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~RemoveClusterFromServiceMeshResponseBody() = default;
};
class RemoveClusterFromServiceMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveClusterFromServiceMeshResponseBody> body{};

  RemoveClusterFromServiceMeshResponse() {}

  explicit RemoveClusterFromServiceMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveClusterFromServiceMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveClusterFromServiceMeshResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveClusterFromServiceMeshResponse() = default;
};
class SetServiceRegistrySourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<map<string, boost::any>> config{};

  SetServiceRegistrySourceRequest() {}

  explicit SetServiceRegistrySourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Config"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~SetServiceRegistrySourceRequest() = default;
};
class SetServiceRegistrySourceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> configShrink{};

  SetServiceRegistrySourceShrinkRequest() {}

  explicit SetServiceRegistrySourceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (configShrink) {
      res["Config"] = boost::any(*configShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      configShrink = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
  }


  virtual ~SetServiceRegistrySourceShrinkRequest() = default;
};
class SetServiceRegistrySourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  SetServiceRegistrySourceResponseBody() {}

  explicit SetServiceRegistrySourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~SetServiceRegistrySourceResponseBody() = default;
};
class SetServiceRegistrySourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetServiceRegistrySourceResponseBody> body{};

  SetServiceRegistrySourceResponse() {}

  explicit SetServiceRegistrySourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetServiceRegistrySourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetServiceRegistrySourceResponseBody>(model1);
      }
    }
  }


  virtual ~SetServiceRegistrySourceResponse() = default;
};
class AddClusterIntoServiceMeshRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> clusterId{};

  AddClusterIntoServiceMeshRequest() {}

  explicit AddClusterIntoServiceMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~AddClusterIntoServiceMeshRequest() = default;
};
class AddClusterIntoServiceMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};

  AddClusterIntoServiceMeshResponseBody() {}

  explicit AddClusterIntoServiceMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~AddClusterIntoServiceMeshResponseBody() = default;
};
class AddClusterIntoServiceMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddClusterIntoServiceMeshResponseBody> body{};

  AddClusterIntoServiceMeshResponse() {}

  explicit AddClusterIntoServiceMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddClusterIntoServiceMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddClusterIntoServiceMeshResponseBody>(model1);
      }
    }
  }


  virtual ~AddClusterIntoServiceMeshResponse() = default;
};
class GetServiceMeshSlbRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetServiceMeshSlbRequest() {}

  explicit GetServiceMeshSlbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetServiceMeshSlbRequest() = default;
};
class GetServiceMeshSlbResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> serverHealthStatus{};
  shared_ptr<string> loadBalancerId{};

  GetServiceMeshSlbResponseBodyData() {}

  explicit GetServiceMeshSlbResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (serverHealthStatus) {
      res["ServerHealthStatus"] = boost::any(*serverHealthStatus);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ServerHealthStatus") != m.end() && !m["ServerHealthStatus"].empty()) {
      serverHealthStatus = make_shared<string>(boost::any_cast<string>(m["ServerHealthStatus"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~GetServiceMeshSlbResponseBodyData() = default;
};
class GetServiceMeshSlbResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetServiceMeshSlbResponseBodyData>> data{};

  GetServiceMeshSlbResponseBody() {}

  explicit GetServiceMeshSlbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetServiceMeshSlbResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceMeshSlbResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetServiceMeshSlbResponseBodyData>>(expect1);
      }
    }
  }


  virtual ~GetServiceMeshSlbResponseBody() = default;
};
class GetServiceMeshSlbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetServiceMeshSlbResponseBody> body{};

  GetServiceMeshSlbResponse() {}

  explicit GetServiceMeshSlbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceMeshSlbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceMeshSlbResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceMeshSlbResponse() = default;
};
class GetRegisteredServiceEndpointsRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> name{};

  GetRegisteredServiceEndpointsRequest() {}

  explicit GetRegisteredServiceEndpointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetRegisteredServiceEndpointsRequest() = default;
};
class GetRegisteredServiceEndpointsResponseBodyServiceEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> clusterId{};

  GetRegisteredServiceEndpointsResponseBodyServiceEndpoints() {}

  explicit GetRegisteredServiceEndpointsResponseBodyServiceEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~GetRegisteredServiceEndpointsResponseBodyServiceEndpoints() = default;
};
class GetRegisteredServiceEndpointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetRegisteredServiceEndpointsResponseBodyServiceEndpoints>> serviceEndpoints{};
  shared_ptr<string> requestId{};

  GetRegisteredServiceEndpointsResponseBody() {}

  explicit GetRegisteredServiceEndpointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceEndpoints) {
      vector<boost::any> temp1;
      for(auto item1:*serviceEndpoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceEndpoints"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceEndpoints") != m.end() && !m["ServiceEndpoints"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceEndpoints"].type()) {
        vector<GetRegisteredServiceEndpointsResponseBodyServiceEndpoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceEndpoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRegisteredServiceEndpointsResponseBodyServiceEndpoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceEndpoints = make_shared<vector<GetRegisteredServiceEndpointsResponseBodyServiceEndpoints>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRegisteredServiceEndpointsResponseBody() = default;
};
class GetRegisteredServiceEndpointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRegisteredServiceEndpointsResponseBody> body{};

  GetRegisteredServiceEndpointsResponse() {}

  explicit GetRegisteredServiceEndpointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRegisteredServiceEndpointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRegisteredServiceEndpointsResponseBody>(model1);
      }
    }
  }


  virtual ~GetRegisteredServiceEndpointsResponse() = default;
};
class UpdateMeshFeatureRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<bool> tracing{};
  shared_ptr<double> traceSampling{};
  shared_ptr<bool> localityLoadBalancing{};
  shared_ptr<bool> telemetry{};
  shared_ptr<bool> openAgentPolicy{};
  shared_ptr<string> OPALogLevel{};
  shared_ptr<string> OPARequestCPU{};
  shared_ptr<string> OPARequestMemory{};
  shared_ptr<string> OPALimitCPU{};
  shared_ptr<string> OPALimitMemory{};
  shared_ptr<bool> pilotPublicEip{};
  shared_ptr<bool> enableAudit{};
  shared_ptr<string> auditProject{};
  shared_ptr<bool> CADisableSecretAutoGeneration{};
  shared_ptr<string> CAListenedNamespaces{};
  shared_ptr<string> appNamespaces{};
  shared_ptr<string> clusterDomain{};
  shared_ptr<bool> customizedZipkin{};
  shared_ptr<string> outboundTrafficPolicy{};
  shared_ptr<string> proxyRequestCPU{};
  shared_ptr<string> proxyRequestMemory{};
  shared_ptr<string> proxyLimitCPU{};
  shared_ptr<string> proxyLimitMemory{};
  shared_ptr<string> includeIPRanges{};
  shared_ptr<bool> enableNamespacesByDefault{};
  shared_ptr<bool> autoInjectionPolicyEnabled{};
  shared_ptr<string> sidecarInjectorRequestCPU{};
  shared_ptr<string> sidecarInjectorRequestMemory{};
  shared_ptr<string> sidecarInjectorLimitCPU{};
  shared_ptr<string> sidecarInjectorLimitMemory{};
  shared_ptr<string> sidecarInjectorWebhookAsYaml{};
  shared_ptr<bool> cniEnabled{};
  shared_ptr<string> cniExcludeNamespaces{};
  shared_ptr<bool> opaEnabled{};
  shared_ptr<bool> http10Enabled{};
  shared_ptr<bool> kialiEnabled{};
  shared_ptr<bool> customizedPrometheus{};
  shared_ptr<string> prometheusUrl{};
  shared_ptr<bool> accessLogEnabled{};
  shared_ptr<bool> MSEEnabled{};
  shared_ptr<bool> redisFilterEnabled{};
  shared_ptr<bool> mysqlFilterEnabled{};
  shared_ptr<bool> thriftFilterEnabled{};
  shared_ptr<bool> webAssemblyFilterEnabled{};
  shared_ptr<bool> DNSProxyingEnabled{};

  UpdateMeshFeatureRequest() {}

  explicit UpdateMeshFeatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (tracing) {
      res["Tracing"] = boost::any(*tracing);
    }
    if (traceSampling) {
      res["TraceSampling"] = boost::any(*traceSampling);
    }
    if (localityLoadBalancing) {
      res["LocalityLoadBalancing"] = boost::any(*localityLoadBalancing);
    }
    if (telemetry) {
      res["Telemetry"] = boost::any(*telemetry);
    }
    if (openAgentPolicy) {
      res["OpenAgentPolicy"] = boost::any(*openAgentPolicy);
    }
    if (OPALogLevel) {
      res["OPALogLevel"] = boost::any(*OPALogLevel);
    }
    if (OPARequestCPU) {
      res["OPARequestCPU"] = boost::any(*OPARequestCPU);
    }
    if (OPARequestMemory) {
      res["OPARequestMemory"] = boost::any(*OPARequestMemory);
    }
    if (OPALimitCPU) {
      res["OPALimitCPU"] = boost::any(*OPALimitCPU);
    }
    if (OPALimitMemory) {
      res["OPALimitMemory"] = boost::any(*OPALimitMemory);
    }
    if (pilotPublicEip) {
      res["PilotPublicEip"] = boost::any(*pilotPublicEip);
    }
    if (enableAudit) {
      res["EnableAudit"] = boost::any(*enableAudit);
    }
    if (auditProject) {
      res["AuditProject"] = boost::any(*auditProject);
    }
    if (CADisableSecretAutoGeneration) {
      res["CADisableSecretAutoGeneration"] = boost::any(*CADisableSecretAutoGeneration);
    }
    if (CAListenedNamespaces) {
      res["CAListenedNamespaces"] = boost::any(*CAListenedNamespaces);
    }
    if (appNamespaces) {
      res["AppNamespaces"] = boost::any(*appNamespaces);
    }
    if (clusterDomain) {
      res["ClusterDomain"] = boost::any(*clusterDomain);
    }
    if (customizedZipkin) {
      res["CustomizedZipkin"] = boost::any(*customizedZipkin);
    }
    if (outboundTrafficPolicy) {
      res["OutboundTrafficPolicy"] = boost::any(*outboundTrafficPolicy);
    }
    if (proxyRequestCPU) {
      res["ProxyRequestCPU"] = boost::any(*proxyRequestCPU);
    }
    if (proxyRequestMemory) {
      res["ProxyRequestMemory"] = boost::any(*proxyRequestMemory);
    }
    if (proxyLimitCPU) {
      res["ProxyLimitCPU"] = boost::any(*proxyLimitCPU);
    }
    if (proxyLimitMemory) {
      res["ProxyLimitMemory"] = boost::any(*proxyLimitMemory);
    }
    if (includeIPRanges) {
      res["IncludeIPRanges"] = boost::any(*includeIPRanges);
    }
    if (enableNamespacesByDefault) {
      res["EnableNamespacesByDefault"] = boost::any(*enableNamespacesByDefault);
    }
    if (autoInjectionPolicyEnabled) {
      res["AutoInjectionPolicyEnabled"] = boost::any(*autoInjectionPolicyEnabled);
    }
    if (sidecarInjectorRequestCPU) {
      res["SidecarInjectorRequestCPU"] = boost::any(*sidecarInjectorRequestCPU);
    }
    if (sidecarInjectorRequestMemory) {
      res["SidecarInjectorRequestMemory"] = boost::any(*sidecarInjectorRequestMemory);
    }
    if (sidecarInjectorLimitCPU) {
      res["SidecarInjectorLimitCPU"] = boost::any(*sidecarInjectorLimitCPU);
    }
    if (sidecarInjectorLimitMemory) {
      res["SidecarInjectorLimitMemory"] = boost::any(*sidecarInjectorLimitMemory);
    }
    if (sidecarInjectorWebhookAsYaml) {
      res["SidecarInjectorWebhookAsYaml"] = boost::any(*sidecarInjectorWebhookAsYaml);
    }
    if (cniEnabled) {
      res["CniEnabled"] = boost::any(*cniEnabled);
    }
    if (cniExcludeNamespaces) {
      res["CniExcludeNamespaces"] = boost::any(*cniExcludeNamespaces);
    }
    if (opaEnabled) {
      res["OpaEnabled"] = boost::any(*opaEnabled);
    }
    if (http10Enabled) {
      res["Http10Enabled"] = boost::any(*http10Enabled);
    }
    if (kialiEnabled) {
      res["KialiEnabled"] = boost::any(*kialiEnabled);
    }
    if (customizedPrometheus) {
      res["CustomizedPrometheus"] = boost::any(*customizedPrometheus);
    }
    if (prometheusUrl) {
      res["PrometheusUrl"] = boost::any(*prometheusUrl);
    }
    if (accessLogEnabled) {
      res["AccessLogEnabled"] = boost::any(*accessLogEnabled);
    }
    if (MSEEnabled) {
      res["MSEEnabled"] = boost::any(*MSEEnabled);
    }
    if (redisFilterEnabled) {
      res["RedisFilterEnabled"] = boost::any(*redisFilterEnabled);
    }
    if (mysqlFilterEnabled) {
      res["MysqlFilterEnabled"] = boost::any(*mysqlFilterEnabled);
    }
    if (thriftFilterEnabled) {
      res["ThriftFilterEnabled"] = boost::any(*thriftFilterEnabled);
    }
    if (webAssemblyFilterEnabled) {
      res["WebAssemblyFilterEnabled"] = boost::any(*webAssemblyFilterEnabled);
    }
    if (DNSProxyingEnabled) {
      res["DNSProxyingEnabled"] = boost::any(*DNSProxyingEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Tracing") != m.end() && !m["Tracing"].empty()) {
      tracing = make_shared<bool>(boost::any_cast<bool>(m["Tracing"]));
    }
    if (m.find("TraceSampling") != m.end() && !m["TraceSampling"].empty()) {
      traceSampling = make_shared<double>(boost::any_cast<double>(m["TraceSampling"]));
    }
    if (m.find("LocalityLoadBalancing") != m.end() && !m["LocalityLoadBalancing"].empty()) {
      localityLoadBalancing = make_shared<bool>(boost::any_cast<bool>(m["LocalityLoadBalancing"]));
    }
    if (m.find("Telemetry") != m.end() && !m["Telemetry"].empty()) {
      telemetry = make_shared<bool>(boost::any_cast<bool>(m["Telemetry"]));
    }
    if (m.find("OpenAgentPolicy") != m.end() && !m["OpenAgentPolicy"].empty()) {
      openAgentPolicy = make_shared<bool>(boost::any_cast<bool>(m["OpenAgentPolicy"]));
    }
    if (m.find("OPALogLevel") != m.end() && !m["OPALogLevel"].empty()) {
      OPALogLevel = make_shared<string>(boost::any_cast<string>(m["OPALogLevel"]));
    }
    if (m.find("OPARequestCPU") != m.end() && !m["OPARequestCPU"].empty()) {
      OPARequestCPU = make_shared<string>(boost::any_cast<string>(m["OPARequestCPU"]));
    }
    if (m.find("OPARequestMemory") != m.end() && !m["OPARequestMemory"].empty()) {
      OPARequestMemory = make_shared<string>(boost::any_cast<string>(m["OPARequestMemory"]));
    }
    if (m.find("OPALimitCPU") != m.end() && !m["OPALimitCPU"].empty()) {
      OPALimitCPU = make_shared<string>(boost::any_cast<string>(m["OPALimitCPU"]));
    }
    if (m.find("OPALimitMemory") != m.end() && !m["OPALimitMemory"].empty()) {
      OPALimitMemory = make_shared<string>(boost::any_cast<string>(m["OPALimitMemory"]));
    }
    if (m.find("PilotPublicEip") != m.end() && !m["PilotPublicEip"].empty()) {
      pilotPublicEip = make_shared<bool>(boost::any_cast<bool>(m["PilotPublicEip"]));
    }
    if (m.find("EnableAudit") != m.end() && !m["EnableAudit"].empty()) {
      enableAudit = make_shared<bool>(boost::any_cast<bool>(m["EnableAudit"]));
    }
    if (m.find("AuditProject") != m.end() && !m["AuditProject"].empty()) {
      auditProject = make_shared<string>(boost::any_cast<string>(m["AuditProject"]));
    }
    if (m.find("CADisableSecretAutoGeneration") != m.end() && !m["CADisableSecretAutoGeneration"].empty()) {
      CADisableSecretAutoGeneration = make_shared<bool>(boost::any_cast<bool>(m["CADisableSecretAutoGeneration"]));
    }
    if (m.find("CAListenedNamespaces") != m.end() && !m["CAListenedNamespaces"].empty()) {
      CAListenedNamespaces = make_shared<string>(boost::any_cast<string>(m["CAListenedNamespaces"]));
    }
    if (m.find("AppNamespaces") != m.end() && !m["AppNamespaces"].empty()) {
      appNamespaces = make_shared<string>(boost::any_cast<string>(m["AppNamespaces"]));
    }
    if (m.find("ClusterDomain") != m.end() && !m["ClusterDomain"].empty()) {
      clusterDomain = make_shared<string>(boost::any_cast<string>(m["ClusterDomain"]));
    }
    if (m.find("CustomizedZipkin") != m.end() && !m["CustomizedZipkin"].empty()) {
      customizedZipkin = make_shared<bool>(boost::any_cast<bool>(m["CustomizedZipkin"]));
    }
    if (m.find("OutboundTrafficPolicy") != m.end() && !m["OutboundTrafficPolicy"].empty()) {
      outboundTrafficPolicy = make_shared<string>(boost::any_cast<string>(m["OutboundTrafficPolicy"]));
    }
    if (m.find("ProxyRequestCPU") != m.end() && !m["ProxyRequestCPU"].empty()) {
      proxyRequestCPU = make_shared<string>(boost::any_cast<string>(m["ProxyRequestCPU"]));
    }
    if (m.find("ProxyRequestMemory") != m.end() && !m["ProxyRequestMemory"].empty()) {
      proxyRequestMemory = make_shared<string>(boost::any_cast<string>(m["ProxyRequestMemory"]));
    }
    if (m.find("ProxyLimitCPU") != m.end() && !m["ProxyLimitCPU"].empty()) {
      proxyLimitCPU = make_shared<string>(boost::any_cast<string>(m["ProxyLimitCPU"]));
    }
    if (m.find("ProxyLimitMemory") != m.end() && !m["ProxyLimitMemory"].empty()) {
      proxyLimitMemory = make_shared<string>(boost::any_cast<string>(m["ProxyLimitMemory"]));
    }
    if (m.find("IncludeIPRanges") != m.end() && !m["IncludeIPRanges"].empty()) {
      includeIPRanges = make_shared<string>(boost::any_cast<string>(m["IncludeIPRanges"]));
    }
    if (m.find("EnableNamespacesByDefault") != m.end() && !m["EnableNamespacesByDefault"].empty()) {
      enableNamespacesByDefault = make_shared<bool>(boost::any_cast<bool>(m["EnableNamespacesByDefault"]));
    }
    if (m.find("AutoInjectionPolicyEnabled") != m.end() && !m["AutoInjectionPolicyEnabled"].empty()) {
      autoInjectionPolicyEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoInjectionPolicyEnabled"]));
    }
    if (m.find("SidecarInjectorRequestCPU") != m.end() && !m["SidecarInjectorRequestCPU"].empty()) {
      sidecarInjectorRequestCPU = make_shared<string>(boost::any_cast<string>(m["SidecarInjectorRequestCPU"]));
    }
    if (m.find("SidecarInjectorRequestMemory") != m.end() && !m["SidecarInjectorRequestMemory"].empty()) {
      sidecarInjectorRequestMemory = make_shared<string>(boost::any_cast<string>(m["SidecarInjectorRequestMemory"]));
    }
    if (m.find("SidecarInjectorLimitCPU") != m.end() && !m["SidecarInjectorLimitCPU"].empty()) {
      sidecarInjectorLimitCPU = make_shared<string>(boost::any_cast<string>(m["SidecarInjectorLimitCPU"]));
    }
    if (m.find("SidecarInjectorLimitMemory") != m.end() && !m["SidecarInjectorLimitMemory"].empty()) {
      sidecarInjectorLimitMemory = make_shared<string>(boost::any_cast<string>(m["SidecarInjectorLimitMemory"]));
    }
    if (m.find("SidecarInjectorWebhookAsYaml") != m.end() && !m["SidecarInjectorWebhookAsYaml"].empty()) {
      sidecarInjectorWebhookAsYaml = make_shared<string>(boost::any_cast<string>(m["SidecarInjectorWebhookAsYaml"]));
    }
    if (m.find("CniEnabled") != m.end() && !m["CniEnabled"].empty()) {
      cniEnabled = make_shared<bool>(boost::any_cast<bool>(m["CniEnabled"]));
    }
    if (m.find("CniExcludeNamespaces") != m.end() && !m["CniExcludeNamespaces"].empty()) {
      cniExcludeNamespaces = make_shared<string>(boost::any_cast<string>(m["CniExcludeNamespaces"]));
    }
    if (m.find("OpaEnabled") != m.end() && !m["OpaEnabled"].empty()) {
      opaEnabled = make_shared<bool>(boost::any_cast<bool>(m["OpaEnabled"]));
    }
    if (m.find("Http10Enabled") != m.end() && !m["Http10Enabled"].empty()) {
      http10Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http10Enabled"]));
    }
    if (m.find("KialiEnabled") != m.end() && !m["KialiEnabled"].empty()) {
      kialiEnabled = make_shared<bool>(boost::any_cast<bool>(m["KialiEnabled"]));
    }
    if (m.find("CustomizedPrometheus") != m.end() && !m["CustomizedPrometheus"].empty()) {
      customizedPrometheus = make_shared<bool>(boost::any_cast<bool>(m["CustomizedPrometheus"]));
    }
    if (m.find("PrometheusUrl") != m.end() && !m["PrometheusUrl"].empty()) {
      prometheusUrl = make_shared<string>(boost::any_cast<string>(m["PrometheusUrl"]));
    }
    if (m.find("AccessLogEnabled") != m.end() && !m["AccessLogEnabled"].empty()) {
      accessLogEnabled = make_shared<bool>(boost::any_cast<bool>(m["AccessLogEnabled"]));
    }
    if (m.find("MSEEnabled") != m.end() && !m["MSEEnabled"].empty()) {
      MSEEnabled = make_shared<bool>(boost::any_cast<bool>(m["MSEEnabled"]));
    }
    if (m.find("RedisFilterEnabled") != m.end() && !m["RedisFilterEnabled"].empty()) {
      redisFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["RedisFilterEnabled"]));
    }
    if (m.find("MysqlFilterEnabled") != m.end() && !m["MysqlFilterEnabled"].empty()) {
      mysqlFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["MysqlFilterEnabled"]));
    }
    if (m.find("ThriftFilterEnabled") != m.end() && !m["ThriftFilterEnabled"].empty()) {
      thriftFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["ThriftFilterEnabled"]));
    }
    if (m.find("WebAssemblyFilterEnabled") != m.end() && !m["WebAssemblyFilterEnabled"].empty()) {
      webAssemblyFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["WebAssemblyFilterEnabled"]));
    }
    if (m.find("DNSProxyingEnabled") != m.end() && !m["DNSProxyingEnabled"].empty()) {
      DNSProxyingEnabled = make_shared<bool>(boost::any_cast<bool>(m["DNSProxyingEnabled"]));
    }
  }


  virtual ~UpdateMeshFeatureRequest() = default;
};
class UpdateMeshFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateMeshFeatureResponseBody() {}

  explicit UpdateMeshFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateMeshFeatureResponseBody() = default;
};
class UpdateMeshFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateMeshFeatureResponseBody> body{};

  UpdateMeshFeatureResponse() {}

  explicit UpdateMeshFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMeshFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMeshFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMeshFeatureResponse() = default;
};
class AddVmAppToMeshRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> ips{};
  shared_ptr<string> ports{};
  shared_ptr<string> labels{};
  shared_ptr<string> annotations{};
  shared_ptr<string> serviceAccount{};
  shared_ptr<bool> useWorkload{};
  shared_ptr<bool> force{};

  AddVmAppToMeshRequest() {}

  explicit AddVmAppToMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (ips) {
      res["Ips"] = boost::any(*ips);
    }
    if (ports) {
      res["Ports"] = boost::any(*ports);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (annotations) {
      res["Annotations"] = boost::any(*annotations);
    }
    if (serviceAccount) {
      res["ServiceAccount"] = boost::any(*serviceAccount);
    }
    if (useWorkload) {
      res["UseWorkload"] = boost::any(*useWorkload);
    }
    if (force) {
      res["Force"] = boost::any(*force);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Ips") != m.end() && !m["Ips"].empty()) {
      ips = make_shared<string>(boost::any_cast<string>(m["Ips"]));
    }
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      ports = make_shared<string>(boost::any_cast<string>(m["Ports"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["Labels"]));
    }
    if (m.find("Annotations") != m.end() && !m["Annotations"].empty()) {
      annotations = make_shared<string>(boost::any_cast<string>(m["Annotations"]));
    }
    if (m.find("ServiceAccount") != m.end() && !m["ServiceAccount"].empty()) {
      serviceAccount = make_shared<string>(boost::any_cast<string>(m["ServiceAccount"]));
    }
    if (m.find("UseWorkload") != m.end() && !m["UseWorkload"].empty()) {
      useWorkload = make_shared<bool>(boost::any_cast<bool>(m["UseWorkload"]));
    }
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
  }


  virtual ~AddVmAppToMeshRequest() = default;
};
class AddVmAppToMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  AddVmAppToMeshResponseBody() {}

  explicit AddVmAppToMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~AddVmAppToMeshResponseBody() = default;
};
class AddVmAppToMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddVmAppToMeshResponseBody> body{};

  AddVmAppToMeshResponse() {}

  explicit AddVmAppToMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddVmAppToMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddVmAppToMeshResponseBody>(model1);
      }
    }
  }


  virtual ~AddVmAppToMeshResponse() = default;
};
class CreateServiceMeshRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> istioVersion{};
  shared_ptr<string> vpcId{};
  shared_ptr<bool> apiServerPublicEip{};
  shared_ptr<bool> pilotPublicEip{};
  shared_ptr<bool> strictMTLS{};
  shared_ptr<string> outboundTrafficPolicy{};
  shared_ptr<bool> tracing{};
  shared_ptr<string> name{};
  shared_ptr<string> vSwitches{};
  shared_ptr<double> traceSampling{};
  shared_ptr<bool> localityLoadBalancing{};
  shared_ptr<bool> telemetry{};
  shared_ptr<bool> openAgentPolicy{};
  shared_ptr<string> OPALogLevel{};
  shared_ptr<string> OPARequestCPU{};
  shared_ptr<string> OPARequestMemory{};
  shared_ptr<string> OPALimitCPU{};
  shared_ptr<string> OPALimitMemory{};
  shared_ptr<bool> enableAudit{};
  shared_ptr<string> auditProject{};
  shared_ptr<bool> CADisableSecretAutoGeneration{};
  shared_ptr<string> CAListenedNamespaces{};
  shared_ptr<string> appNamespaces{};
  shared_ptr<string> clusterDomain{};
  shared_ptr<string> proxyRequestCPU{};
  shared_ptr<string> proxyRequestMemory{};
  shared_ptr<string> proxyLimitCPU{};
  shared_ptr<string> proxyLimitMemory{};
  shared_ptr<string> includeIPRanges{};
  shared_ptr<string> excludeIPRanges{};
  shared_ptr<string> excludeOutboundPorts{};
  shared_ptr<string> excludeInboundPorts{};
  shared_ptr<bool> opaEnabled{};
  shared_ptr<bool> kialiEnabled{};
  shared_ptr<bool> accessLogEnabled{};
  shared_ptr<bool> customizedPrometheus{};
  shared_ptr<string> prometheusUrl{};
  shared_ptr<bool> redisFilterEnabled{};
  shared_ptr<bool> mysqlFilterEnabled{};
  shared_ptr<bool> thriftFilterEnabled{};
  shared_ptr<bool> webAssemblyFilterEnabled{};
  shared_ptr<bool> MSEEnabled{};
  shared_ptr<bool> DNSProxyingEnabled{};
  shared_ptr<string> edition{};

  CreateServiceMeshRequest() {}

  explicit CreateServiceMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (istioVersion) {
      res["IstioVersion"] = boost::any(*istioVersion);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (apiServerPublicEip) {
      res["ApiServerPublicEip"] = boost::any(*apiServerPublicEip);
    }
    if (pilotPublicEip) {
      res["PilotPublicEip"] = boost::any(*pilotPublicEip);
    }
    if (strictMTLS) {
      res["StrictMTLS"] = boost::any(*strictMTLS);
    }
    if (outboundTrafficPolicy) {
      res["OutboundTrafficPolicy"] = boost::any(*outboundTrafficPolicy);
    }
    if (tracing) {
      res["Tracing"] = boost::any(*tracing);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    if (traceSampling) {
      res["TraceSampling"] = boost::any(*traceSampling);
    }
    if (localityLoadBalancing) {
      res["LocalityLoadBalancing"] = boost::any(*localityLoadBalancing);
    }
    if (telemetry) {
      res["Telemetry"] = boost::any(*telemetry);
    }
    if (openAgentPolicy) {
      res["OpenAgentPolicy"] = boost::any(*openAgentPolicy);
    }
    if (OPALogLevel) {
      res["OPALogLevel"] = boost::any(*OPALogLevel);
    }
    if (OPARequestCPU) {
      res["OPARequestCPU"] = boost::any(*OPARequestCPU);
    }
    if (OPARequestMemory) {
      res["OPARequestMemory"] = boost::any(*OPARequestMemory);
    }
    if (OPALimitCPU) {
      res["OPALimitCPU"] = boost::any(*OPALimitCPU);
    }
    if (OPALimitMemory) {
      res["OPALimitMemory"] = boost::any(*OPALimitMemory);
    }
    if (enableAudit) {
      res["EnableAudit"] = boost::any(*enableAudit);
    }
    if (auditProject) {
      res["AuditProject"] = boost::any(*auditProject);
    }
    if (CADisableSecretAutoGeneration) {
      res["CADisableSecretAutoGeneration"] = boost::any(*CADisableSecretAutoGeneration);
    }
    if (CAListenedNamespaces) {
      res["CAListenedNamespaces"] = boost::any(*CAListenedNamespaces);
    }
    if (appNamespaces) {
      res["AppNamespaces"] = boost::any(*appNamespaces);
    }
    if (clusterDomain) {
      res["ClusterDomain"] = boost::any(*clusterDomain);
    }
    if (proxyRequestCPU) {
      res["ProxyRequestCPU"] = boost::any(*proxyRequestCPU);
    }
    if (proxyRequestMemory) {
      res["ProxyRequestMemory"] = boost::any(*proxyRequestMemory);
    }
    if (proxyLimitCPU) {
      res["ProxyLimitCPU"] = boost::any(*proxyLimitCPU);
    }
    if (proxyLimitMemory) {
      res["ProxyLimitMemory"] = boost::any(*proxyLimitMemory);
    }
    if (includeIPRanges) {
      res["IncludeIPRanges"] = boost::any(*includeIPRanges);
    }
    if (excludeIPRanges) {
      res["ExcludeIPRanges"] = boost::any(*excludeIPRanges);
    }
    if (excludeOutboundPorts) {
      res["ExcludeOutboundPorts"] = boost::any(*excludeOutboundPorts);
    }
    if (excludeInboundPorts) {
      res["ExcludeInboundPorts"] = boost::any(*excludeInboundPorts);
    }
    if (opaEnabled) {
      res["OpaEnabled"] = boost::any(*opaEnabled);
    }
    if (kialiEnabled) {
      res["KialiEnabled"] = boost::any(*kialiEnabled);
    }
    if (accessLogEnabled) {
      res["AccessLogEnabled"] = boost::any(*accessLogEnabled);
    }
    if (customizedPrometheus) {
      res["CustomizedPrometheus"] = boost::any(*customizedPrometheus);
    }
    if (prometheusUrl) {
      res["PrometheusUrl"] = boost::any(*prometheusUrl);
    }
    if (redisFilterEnabled) {
      res["RedisFilterEnabled"] = boost::any(*redisFilterEnabled);
    }
    if (mysqlFilterEnabled) {
      res["MysqlFilterEnabled"] = boost::any(*mysqlFilterEnabled);
    }
    if (thriftFilterEnabled) {
      res["ThriftFilterEnabled"] = boost::any(*thriftFilterEnabled);
    }
    if (webAssemblyFilterEnabled) {
      res["WebAssemblyFilterEnabled"] = boost::any(*webAssemblyFilterEnabled);
    }
    if (MSEEnabled) {
      res["MSEEnabled"] = boost::any(*MSEEnabled);
    }
    if (DNSProxyingEnabled) {
      res["DNSProxyingEnabled"] = boost::any(*DNSProxyingEnabled);
    }
    if (edition) {
      res["Edition"] = boost::any(*edition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("IstioVersion") != m.end() && !m["IstioVersion"].empty()) {
      istioVersion = make_shared<string>(boost::any_cast<string>(m["IstioVersion"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ApiServerPublicEip") != m.end() && !m["ApiServerPublicEip"].empty()) {
      apiServerPublicEip = make_shared<bool>(boost::any_cast<bool>(m["ApiServerPublicEip"]));
    }
    if (m.find("PilotPublicEip") != m.end() && !m["PilotPublicEip"].empty()) {
      pilotPublicEip = make_shared<bool>(boost::any_cast<bool>(m["PilotPublicEip"]));
    }
    if (m.find("StrictMTLS") != m.end() && !m["StrictMTLS"].empty()) {
      strictMTLS = make_shared<bool>(boost::any_cast<bool>(m["StrictMTLS"]));
    }
    if (m.find("OutboundTrafficPolicy") != m.end() && !m["OutboundTrafficPolicy"].empty()) {
      outboundTrafficPolicy = make_shared<string>(boost::any_cast<string>(m["OutboundTrafficPolicy"]));
    }
    if (m.find("Tracing") != m.end() && !m["Tracing"].empty()) {
      tracing = make_shared<bool>(boost::any_cast<bool>(m["Tracing"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vSwitches = make_shared<string>(boost::any_cast<string>(m["VSwitches"]));
    }
    if (m.find("TraceSampling") != m.end() && !m["TraceSampling"].empty()) {
      traceSampling = make_shared<double>(boost::any_cast<double>(m["TraceSampling"]));
    }
    if (m.find("LocalityLoadBalancing") != m.end() && !m["LocalityLoadBalancing"].empty()) {
      localityLoadBalancing = make_shared<bool>(boost::any_cast<bool>(m["LocalityLoadBalancing"]));
    }
    if (m.find("Telemetry") != m.end() && !m["Telemetry"].empty()) {
      telemetry = make_shared<bool>(boost::any_cast<bool>(m["Telemetry"]));
    }
    if (m.find("OpenAgentPolicy") != m.end() && !m["OpenAgentPolicy"].empty()) {
      openAgentPolicy = make_shared<bool>(boost::any_cast<bool>(m["OpenAgentPolicy"]));
    }
    if (m.find("OPALogLevel") != m.end() && !m["OPALogLevel"].empty()) {
      OPALogLevel = make_shared<string>(boost::any_cast<string>(m["OPALogLevel"]));
    }
    if (m.find("OPARequestCPU") != m.end() && !m["OPARequestCPU"].empty()) {
      OPARequestCPU = make_shared<string>(boost::any_cast<string>(m["OPARequestCPU"]));
    }
    if (m.find("OPARequestMemory") != m.end() && !m["OPARequestMemory"].empty()) {
      OPARequestMemory = make_shared<string>(boost::any_cast<string>(m["OPARequestMemory"]));
    }
    if (m.find("OPALimitCPU") != m.end() && !m["OPALimitCPU"].empty()) {
      OPALimitCPU = make_shared<string>(boost::any_cast<string>(m["OPALimitCPU"]));
    }
    if (m.find("OPALimitMemory") != m.end() && !m["OPALimitMemory"].empty()) {
      OPALimitMemory = make_shared<string>(boost::any_cast<string>(m["OPALimitMemory"]));
    }
    if (m.find("EnableAudit") != m.end() && !m["EnableAudit"].empty()) {
      enableAudit = make_shared<bool>(boost::any_cast<bool>(m["EnableAudit"]));
    }
    if (m.find("AuditProject") != m.end() && !m["AuditProject"].empty()) {
      auditProject = make_shared<string>(boost::any_cast<string>(m["AuditProject"]));
    }
    if (m.find("CADisableSecretAutoGeneration") != m.end() && !m["CADisableSecretAutoGeneration"].empty()) {
      CADisableSecretAutoGeneration = make_shared<bool>(boost::any_cast<bool>(m["CADisableSecretAutoGeneration"]));
    }
    if (m.find("CAListenedNamespaces") != m.end() && !m["CAListenedNamespaces"].empty()) {
      CAListenedNamespaces = make_shared<string>(boost::any_cast<string>(m["CAListenedNamespaces"]));
    }
    if (m.find("AppNamespaces") != m.end() && !m["AppNamespaces"].empty()) {
      appNamespaces = make_shared<string>(boost::any_cast<string>(m["AppNamespaces"]));
    }
    if (m.find("ClusterDomain") != m.end() && !m["ClusterDomain"].empty()) {
      clusterDomain = make_shared<string>(boost::any_cast<string>(m["ClusterDomain"]));
    }
    if (m.find("ProxyRequestCPU") != m.end() && !m["ProxyRequestCPU"].empty()) {
      proxyRequestCPU = make_shared<string>(boost::any_cast<string>(m["ProxyRequestCPU"]));
    }
    if (m.find("ProxyRequestMemory") != m.end() && !m["ProxyRequestMemory"].empty()) {
      proxyRequestMemory = make_shared<string>(boost::any_cast<string>(m["ProxyRequestMemory"]));
    }
    if (m.find("ProxyLimitCPU") != m.end() && !m["ProxyLimitCPU"].empty()) {
      proxyLimitCPU = make_shared<string>(boost::any_cast<string>(m["ProxyLimitCPU"]));
    }
    if (m.find("ProxyLimitMemory") != m.end() && !m["ProxyLimitMemory"].empty()) {
      proxyLimitMemory = make_shared<string>(boost::any_cast<string>(m["ProxyLimitMemory"]));
    }
    if (m.find("IncludeIPRanges") != m.end() && !m["IncludeIPRanges"].empty()) {
      includeIPRanges = make_shared<string>(boost::any_cast<string>(m["IncludeIPRanges"]));
    }
    if (m.find("ExcludeIPRanges") != m.end() && !m["ExcludeIPRanges"].empty()) {
      excludeIPRanges = make_shared<string>(boost::any_cast<string>(m["ExcludeIPRanges"]));
    }
    if (m.find("ExcludeOutboundPorts") != m.end() && !m["ExcludeOutboundPorts"].empty()) {
      excludeOutboundPorts = make_shared<string>(boost::any_cast<string>(m["ExcludeOutboundPorts"]));
    }
    if (m.find("ExcludeInboundPorts") != m.end() && !m["ExcludeInboundPorts"].empty()) {
      excludeInboundPorts = make_shared<string>(boost::any_cast<string>(m["ExcludeInboundPorts"]));
    }
    if (m.find("OpaEnabled") != m.end() && !m["OpaEnabled"].empty()) {
      opaEnabled = make_shared<bool>(boost::any_cast<bool>(m["OpaEnabled"]));
    }
    if (m.find("KialiEnabled") != m.end() && !m["KialiEnabled"].empty()) {
      kialiEnabled = make_shared<bool>(boost::any_cast<bool>(m["KialiEnabled"]));
    }
    if (m.find("AccessLogEnabled") != m.end() && !m["AccessLogEnabled"].empty()) {
      accessLogEnabled = make_shared<bool>(boost::any_cast<bool>(m["AccessLogEnabled"]));
    }
    if (m.find("CustomizedPrometheus") != m.end() && !m["CustomizedPrometheus"].empty()) {
      customizedPrometheus = make_shared<bool>(boost::any_cast<bool>(m["CustomizedPrometheus"]));
    }
    if (m.find("PrometheusUrl") != m.end() && !m["PrometheusUrl"].empty()) {
      prometheusUrl = make_shared<string>(boost::any_cast<string>(m["PrometheusUrl"]));
    }
    if (m.find("RedisFilterEnabled") != m.end() && !m["RedisFilterEnabled"].empty()) {
      redisFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["RedisFilterEnabled"]));
    }
    if (m.find("MysqlFilterEnabled") != m.end() && !m["MysqlFilterEnabled"].empty()) {
      mysqlFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["MysqlFilterEnabled"]));
    }
    if (m.find("ThriftFilterEnabled") != m.end() && !m["ThriftFilterEnabled"].empty()) {
      thriftFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["ThriftFilterEnabled"]));
    }
    if (m.find("WebAssemblyFilterEnabled") != m.end() && !m["WebAssemblyFilterEnabled"].empty()) {
      webAssemblyFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["WebAssemblyFilterEnabled"]));
    }
    if (m.find("MSEEnabled") != m.end() && !m["MSEEnabled"].empty()) {
      MSEEnabled = make_shared<bool>(boost::any_cast<bool>(m["MSEEnabled"]));
    }
    if (m.find("DNSProxyingEnabled") != m.end() && !m["DNSProxyingEnabled"].empty()) {
      DNSProxyingEnabled = make_shared<bool>(boost::any_cast<bool>(m["DNSProxyingEnabled"]));
    }
    if (m.find("Edition") != m.end() && !m["Edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["Edition"]));
    }
  }


  virtual ~CreateServiceMeshRequest() = default;
};
class CreateServiceMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceMeshId{};

  CreateServiceMeshResponseBody() {}

  explicit CreateServiceMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~CreateServiceMeshResponseBody() = default;
};
class CreateServiceMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServiceMeshResponseBody> body{};

  CreateServiceMeshResponse() {}

  explicit CreateServiceMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceMeshResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceMeshResponse() = default;
};
class GetAutoInjectionLabelSyncStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetAutoInjectionLabelSyncStatusRequest() {}

  explicit GetAutoInjectionLabelSyncStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetAutoInjectionLabelSyncStatusRequest() = default;
};
class GetAutoInjectionLabelSyncStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> requestId{};

  GetAutoInjectionLabelSyncStatusResponseBody() {}

  explicit GetAutoInjectionLabelSyncStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAutoInjectionLabelSyncStatusResponseBody() = default;
};
class GetAutoInjectionLabelSyncStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAutoInjectionLabelSyncStatusResponseBody> body{};

  GetAutoInjectionLabelSyncStatusResponse() {}

  explicit GetAutoInjectionLabelSyncStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAutoInjectionLabelSyncStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAutoInjectionLabelSyncStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetAutoInjectionLabelSyncStatusResponse() = default;
};
class GetServiceRegistrySourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetServiceRegistrySourceRequest() {}

  explicit GetServiceRegistrySourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetServiceRegistrySourceRequest() = default;
};
class GetServiceRegistrySourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  GetServiceRegistrySourceResponseBody() {}

  explicit GetServiceRegistrySourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~GetServiceRegistrySourceResponseBody() = default;
};
class GetServiceRegistrySourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetServiceRegistrySourceResponseBody> body{};

  GetServiceRegistrySourceResponse() {}

  explicit GetServiceRegistrySourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceRegistrySourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceRegistrySourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceRegistrySourceResponse() = default;
};
class GetRegisteredServiceNamespacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetRegisteredServiceNamespacesRequest() {}

  explicit GetRegisteredServiceNamespacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetRegisteredServiceNamespacesRequest() = default;
};
class GetRegisteredServiceNamespacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> namespaces{};
  shared_ptr<string> requestId{};

  GetRegisteredServiceNamespacesResponseBody() {}

  explicit GetRegisteredServiceNamespacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaces) {
      res["Namespaces"] = boost::any(*namespaces);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRegisteredServiceNamespacesResponseBody() = default;
};
class GetRegisteredServiceNamespacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRegisteredServiceNamespacesResponseBody> body{};

  GetRegisteredServiceNamespacesResponse() {}

  explicit GetRegisteredServiceNamespacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRegisteredServiceNamespacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRegisteredServiceNamespacesResponseBody>(model1);
      }
    }
  }


  virtual ~GetRegisteredServiceNamespacesResponse() = default;
};
class InitializeASMRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  InitializeASMRoleResponseBody() {}

  explicit InitializeASMRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InitializeASMRoleResponseBody() = default;
};
class InitializeASMRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InitializeASMRoleResponseBody> body{};

  InitializeASMRoleResponse() {}

  explicit InitializeASMRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitializeASMRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitializeASMRoleResponseBody>(model1);
      }
    }
  }


  virtual ~InitializeASMRoleResponse() = default;
};
class RemoveVmAppFromMeshRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> serviceName{};

  RemoveVmAppFromMeshRequest() {}

  explicit RemoveVmAppFromMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~RemoveVmAppFromMeshRequest() = default;
};
class RemoveVmAppFromMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> data{};

  RemoveVmAppFromMeshResponseBody() {}

  explicit RemoveVmAppFromMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~RemoveVmAppFromMeshResponseBody() = default;
};
class RemoveVmAppFromMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveVmAppFromMeshResponseBody> body{};

  RemoveVmAppFromMeshResponse() {}

  explicit RemoveVmAppFromMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveVmAppFromMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveVmAppFromMeshResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveVmAppFromMeshResponse() = default;
};
class DescribeClusterPrometheusRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> k8sClusterId{};
  shared_ptr<string> k8sClusterRegionId{};

  DescribeClusterPrometheusRequest() {}

  explicit DescribeClusterPrometheusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (k8sClusterId) {
      res["K8sClusterId"] = boost::any(*k8sClusterId);
    }
    if (k8sClusterRegionId) {
      res["K8sClusterRegionId"] = boost::any(*k8sClusterRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("K8sClusterId") != m.end() && !m["K8sClusterId"].empty()) {
      k8sClusterId = make_shared<string>(boost::any_cast<string>(m["K8sClusterId"]));
    }
    if (m.find("K8sClusterRegionId") != m.end() && !m["K8sClusterRegionId"].empty()) {
      k8sClusterRegionId = make_shared<string>(boost::any_cast<string>(m["K8sClusterRegionId"]));
    }
  }


  virtual ~DescribeClusterPrometheusRequest() = default;
};
class DescribeClusterPrometheusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> prometheus{};

  DescribeClusterPrometheusResponseBody() {}

  explicit DescribeClusterPrometheusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (prometheus) {
      res["Prometheus"] = boost::any(*prometheus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Prometheus") != m.end() && !m["Prometheus"].empty()) {
      prometheus = make_shared<string>(boost::any_cast<string>(m["Prometheus"]));
    }
  }


  virtual ~DescribeClusterPrometheusResponseBody() = default;
};
class DescribeClusterPrometheusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterPrometheusResponseBody> body{};

  DescribeClusterPrometheusResponse() {}

  explicit DescribeClusterPrometheusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClusterPrometheusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterPrometheusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterPrometheusResponse() = default;
};
class UpdateIstioInjectionConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> namespace_{};
  shared_ptr<bool> enableIstioInjection{};

  UpdateIstioInjectionConfigRequest() {}

  explicit UpdateIstioInjectionConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (enableIstioInjection) {
      res["EnableIstioInjection"] = boost::any(*enableIstioInjection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("EnableIstioInjection") != m.end() && !m["EnableIstioInjection"].empty()) {
      enableIstioInjection = make_shared<bool>(boost::any_cast<bool>(m["EnableIstioInjection"]));
    }
  }


  virtual ~UpdateIstioInjectionConfigRequest() = default;
};
class UpdateIstioInjectionConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateIstioInjectionConfigResponseBody() {}

  explicit UpdateIstioInjectionConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateIstioInjectionConfigResponseBody() = default;
};
class UpdateIstioInjectionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateIstioInjectionConfigResponseBody> body{};

  UpdateIstioInjectionConfigResponse() {}

  explicit UpdateIstioInjectionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateIstioInjectionConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIstioInjectionConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIstioInjectionConfigResponse() = default;
};
class GetVmMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> trustDomain{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> serviceAccount{};

  GetVmMetaRequest() {}

  explicit GetVmMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (trustDomain) {
      res["TrustDomain"] = boost::any(*trustDomain);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (serviceAccount) {
      res["ServiceAccount"] = boost::any(*serviceAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("TrustDomain") != m.end() && !m["TrustDomain"].empty()) {
      trustDomain = make_shared<string>(boost::any_cast<string>(m["TrustDomain"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServiceAccount") != m.end() && !m["ServiceAccount"].empty()) {
      serviceAccount = make_shared<string>(boost::any_cast<string>(m["ServiceAccount"]));
    }
  }


  virtual ~GetVmMetaRequest() = default;
};
class GetVmMetaResponseBodyVmMetaInfo : public Darabonba::Model {
public:
  shared_ptr<string> tokenPath{};
  shared_ptr<string> hostsContent{};
  shared_ptr<string> envoyEnvPath{};
  shared_ptr<string> tokenContent{};
  shared_ptr<string> certChainPath{};
  shared_ptr<string> rootCertContent{};
  shared_ptr<string> keyContent{};
  shared_ptr<string> rootCertPath{};
  shared_ptr<string> certChainContent{};
  shared_ptr<string> hostsPath{};
  shared_ptr<string> keyPath{};
  shared_ptr<string> envoyEnvContent{};

  GetVmMetaResponseBodyVmMetaInfo() {}

  explicit GetVmMetaResponseBodyVmMetaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tokenPath) {
      res["TokenPath"] = boost::any(*tokenPath);
    }
    if (hostsContent) {
      res["HostsContent"] = boost::any(*hostsContent);
    }
    if (envoyEnvPath) {
      res["EnvoyEnvPath"] = boost::any(*envoyEnvPath);
    }
    if (tokenContent) {
      res["TokenContent"] = boost::any(*tokenContent);
    }
    if (certChainPath) {
      res["CertChainPath"] = boost::any(*certChainPath);
    }
    if (rootCertContent) {
      res["RootCertContent"] = boost::any(*rootCertContent);
    }
    if (keyContent) {
      res["KeyContent"] = boost::any(*keyContent);
    }
    if (rootCertPath) {
      res["RootCertPath"] = boost::any(*rootCertPath);
    }
    if (certChainContent) {
      res["CertChainContent"] = boost::any(*certChainContent);
    }
    if (hostsPath) {
      res["HostsPath"] = boost::any(*hostsPath);
    }
    if (keyPath) {
      res["KeyPath"] = boost::any(*keyPath);
    }
    if (envoyEnvContent) {
      res["EnvoyEnvContent"] = boost::any(*envoyEnvContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TokenPath") != m.end() && !m["TokenPath"].empty()) {
      tokenPath = make_shared<string>(boost::any_cast<string>(m["TokenPath"]));
    }
    if (m.find("HostsContent") != m.end() && !m["HostsContent"].empty()) {
      hostsContent = make_shared<string>(boost::any_cast<string>(m["HostsContent"]));
    }
    if (m.find("EnvoyEnvPath") != m.end() && !m["EnvoyEnvPath"].empty()) {
      envoyEnvPath = make_shared<string>(boost::any_cast<string>(m["EnvoyEnvPath"]));
    }
    if (m.find("TokenContent") != m.end() && !m["TokenContent"].empty()) {
      tokenContent = make_shared<string>(boost::any_cast<string>(m["TokenContent"]));
    }
    if (m.find("CertChainPath") != m.end() && !m["CertChainPath"].empty()) {
      certChainPath = make_shared<string>(boost::any_cast<string>(m["CertChainPath"]));
    }
    if (m.find("RootCertContent") != m.end() && !m["RootCertContent"].empty()) {
      rootCertContent = make_shared<string>(boost::any_cast<string>(m["RootCertContent"]));
    }
    if (m.find("KeyContent") != m.end() && !m["KeyContent"].empty()) {
      keyContent = make_shared<string>(boost::any_cast<string>(m["KeyContent"]));
    }
    if (m.find("RootCertPath") != m.end() && !m["RootCertPath"].empty()) {
      rootCertPath = make_shared<string>(boost::any_cast<string>(m["RootCertPath"]));
    }
    if (m.find("CertChainContent") != m.end() && !m["CertChainContent"].empty()) {
      certChainContent = make_shared<string>(boost::any_cast<string>(m["CertChainContent"]));
    }
    if (m.find("HostsPath") != m.end() && !m["HostsPath"].empty()) {
      hostsPath = make_shared<string>(boost::any_cast<string>(m["HostsPath"]));
    }
    if (m.find("KeyPath") != m.end() && !m["KeyPath"].empty()) {
      keyPath = make_shared<string>(boost::any_cast<string>(m["KeyPath"]));
    }
    if (m.find("EnvoyEnvContent") != m.end() && !m["EnvoyEnvContent"].empty()) {
      envoyEnvContent = make_shared<string>(boost::any_cast<string>(m["EnvoyEnvContent"]));
    }
  }


  virtual ~GetVmMetaResponseBodyVmMetaInfo() = default;
};
class GetVmMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetVmMetaResponseBodyVmMetaInfo> vmMetaInfo{};
  shared_ptr<string> requestId{};

  GetVmMetaResponseBody() {}

  explicit GetVmMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vmMetaInfo) {
      res["VmMetaInfo"] = vmMetaInfo ? boost::any(vmMetaInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VmMetaInfo") != m.end() && !m["VmMetaInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VmMetaInfo"].type()) {
        GetVmMetaResponseBodyVmMetaInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VmMetaInfo"]));
        vmMetaInfo = make_shared<GetVmMetaResponseBodyVmMetaInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetVmMetaResponseBody() = default;
};
class GetVmMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVmMetaResponseBody> body{};

  GetVmMetaResponse() {}

  explicit GetVmMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVmMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVmMetaResponseBody>(model1);
      }
    }
  }


  virtual ~GetVmMetaResponse() = default;
};
class DescribeUpgradeVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeUpgradeVersionRequest() {}

  explicit DescribeUpgradeVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeUpgradeVersionRequest() = default;
};
class DescribeUpgradeVersionResponseBodyVersion : public Darabonba::Model {
public:
  shared_ptr<string> kubernetesVersion{};
  shared_ptr<string> istioOperatorVersion{};
  shared_ptr<string> istioVersion{};

  DescribeUpgradeVersionResponseBodyVersion() {}

  explicit DescribeUpgradeVersionResponseBodyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kubernetesVersion) {
      res["KubernetesVersion"] = boost::any(*kubernetesVersion);
    }
    if (istioOperatorVersion) {
      res["IstioOperatorVersion"] = boost::any(*istioOperatorVersion);
    }
    if (istioVersion) {
      res["IstioVersion"] = boost::any(*istioVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KubernetesVersion") != m.end() && !m["KubernetesVersion"].empty()) {
      kubernetesVersion = make_shared<string>(boost::any_cast<string>(m["KubernetesVersion"]));
    }
    if (m.find("IstioOperatorVersion") != m.end() && !m["IstioOperatorVersion"].empty()) {
      istioOperatorVersion = make_shared<string>(boost::any_cast<string>(m["IstioOperatorVersion"]));
    }
    if (m.find("IstioVersion") != m.end() && !m["IstioVersion"].empty()) {
      istioVersion = make_shared<string>(boost::any_cast<string>(m["IstioVersion"]));
    }
  }


  virtual ~DescribeUpgradeVersionResponseBodyVersion() = default;
};
class DescribeUpgradeVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeUpgradeVersionResponseBodyVersion> version{};

  DescribeUpgradeVersionResponseBody() {}

  explicit DescribeUpgradeVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (version) {
      res["Version"] = version ? boost::any(version->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      if (typeid(map<string, boost::any>) == m["Version"].type()) {
        DescribeUpgradeVersionResponseBodyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Version"]));
        version = make_shared<DescribeUpgradeVersionResponseBodyVersion>(model1);
      }
    }
  }


  virtual ~DescribeUpgradeVersionResponseBody() = default;
};
class DescribeUpgradeVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeUpgradeVersionResponseBody> body{};

  DescribeUpgradeVersionResponse() {}

  explicit DescribeUpgradeVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUpgradeVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUpgradeVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUpgradeVersionResponse() = default;
};
class DescribeClustersInServiceMeshRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeClustersInServiceMeshRequest() {}

  explicit DescribeClustersInServiceMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeClustersInServiceMeshRequest() = default;
};
class DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> title{};

  DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards() {}

  explicit DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards() = default;
};
class DescribeClustersInServiceMeshResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<string> sgId{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> state{};
  shared_ptr<vector<DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards>> accessLogDashboards{};
  shared_ptr<string> regionId{};
  shared_ptr<string> clusterDomain{};
  shared_ptr<string> version{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> name{};
  shared_ptr<string> clusterId{};

  DescribeClustersInServiceMeshResponseBodyClusters() {}

  explicit DescribeClustersInServiceMeshResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sgId) {
      res["SgId"] = boost::any(*sgId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (accessLogDashboards) {
      vector<boost::any> temp1;
      for(auto item1:*accessLogDashboards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessLogDashboards"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (clusterDomain) {
      res["ClusterDomain"] = boost::any(*clusterDomain);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SgId") != m.end() && !m["SgId"].empty()) {
      sgId = make_shared<string>(boost::any_cast<string>(m["SgId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("AccessLogDashboards") != m.end() && !m["AccessLogDashboards"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessLogDashboards"].type()) {
        vector<DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessLogDashboards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessLogDashboards = make_shared<vector<DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ClusterDomain") != m.end() && !m["ClusterDomain"].empty()) {
      clusterDomain = make_shared<string>(boost::any_cast<string>(m["ClusterDomain"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~DescribeClustersInServiceMeshResponseBodyClusters() = default;
};
class DescribeClustersInServiceMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeClustersInServiceMeshResponseBodyClusters>> clusters{};

  DescribeClustersInServiceMeshResponseBody() {}

  explicit DescribeClustersInServiceMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (clusters) {
      vector<boost::any> temp1;
      for(auto item1:*clusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clusters"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<DescribeClustersInServiceMeshResponseBodyClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClustersInServiceMeshResponseBodyClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<DescribeClustersInServiceMeshResponseBodyClusters>>(expect1);
      }
    }
  }


  virtual ~DescribeClustersInServiceMeshResponseBody() = default;
};
class DescribeClustersInServiceMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClustersInServiceMeshResponseBody> body{};

  DescribeClustersInServiceMeshResponse() {}

  explicit DescribeClustersInServiceMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClustersInServiceMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClustersInServiceMeshResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClustersInServiceMeshResponse() = default;
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
  RunDiagnosisResponse runDiagnosisWithOptions(shared_ptr<RunDiagnosisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunDiagnosisResponse runDiagnosis(shared_ptr<RunDiagnosisRequest> request);
  DescribeClusterGrafanaResponse describeClusterGrafanaWithOptions(shared_ptr<DescribeClusterGrafanaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterGrafanaResponse describeClusterGrafana(shared_ptr<DescribeClusterGrafanaRequest> request);
  DescribeGuestClusterAccessLogDashboardsResponse describeGuestClusterAccessLogDashboardsWithOptions(shared_ptr<DescribeGuestClusterAccessLogDashboardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGuestClusterAccessLogDashboardsResponse describeGuestClusterAccessLogDashboards(shared_ptr<DescribeGuestClusterAccessLogDashboardsRequest> request);
  DescribeServiceMeshesResponse describeServiceMeshesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceMeshesResponse describeServiceMeshes();
  GetDiagnosisResponse getDiagnosisWithOptions(shared_ptr<GetDiagnosisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDiagnosisResponse getDiagnosis(shared_ptr<GetDiagnosisRequest> request);
  GetRegisteredServicesResponse getRegisteredServicesWithOptions(shared_ptr<GetRegisteredServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRegisteredServicesResponse getRegisteredServices(shared_ptr<GetRegisteredServicesRequest> request);
  DescribeIngressGatewaysResponse describeIngressGatewaysWithOptions(shared_ptr<DescribeIngressGatewaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIngressGatewaysResponse describeIngressGateways(shared_ptr<DescribeIngressGatewaysRequest> request);
  DescribeServiceMeshDetailResponse describeServiceMeshDetailWithOptions(shared_ptr<DescribeServiceMeshDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceMeshDetailResponse describeServiceMeshDetail(shared_ptr<DescribeServiceMeshDetailRequest> request);
  DescribeCensResponse describeCensWithOptions(shared_ptr<DescribeCensRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCensResponse describeCens(shared_ptr<DescribeCensRequest> request);
  DeleteServiceMeshResponse deleteServiceMeshWithOptions(shared_ptr<DeleteServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceMeshResponse deleteServiceMesh(shared_ptr<DeleteServiceMeshRequest> request);
  UpgradeMeshVersionResponse upgradeMeshVersionWithOptions(shared_ptr<UpgradeMeshVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeMeshVersionResponse upgradeMeshVersion(shared_ptr<UpgradeMeshVersionRequest> request);
  DescribeServiceMeshKubeconfigResponse describeServiceMeshKubeconfigWithOptions(shared_ptr<DescribeServiceMeshKubeconfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceMeshKubeconfigResponse describeServiceMeshKubeconfig(shared_ptr<DescribeServiceMeshKubeconfigRequest> request);
  GetVmAppMeshInfoResponse getVmAppMeshInfoWithOptions(shared_ptr<GetVmAppMeshInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVmAppMeshInfoResponse getVmAppMeshInfo(shared_ptr<GetVmAppMeshInfoRequest> request);
  RemoveClusterFromServiceMeshResponse removeClusterFromServiceMeshWithOptions(shared_ptr<RemoveClusterFromServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveClusterFromServiceMeshResponse removeClusterFromServiceMesh(shared_ptr<RemoveClusterFromServiceMeshRequest> request);
  SetServiceRegistrySourceResponse setServiceRegistrySourceWithOptions(shared_ptr<SetServiceRegistrySourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetServiceRegistrySourceResponse setServiceRegistrySource(shared_ptr<SetServiceRegistrySourceRequest> request);
  AddClusterIntoServiceMeshResponse addClusterIntoServiceMeshWithOptions(shared_ptr<AddClusterIntoServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddClusterIntoServiceMeshResponse addClusterIntoServiceMesh(shared_ptr<AddClusterIntoServiceMeshRequest> request);
  GetServiceMeshSlbResponse getServiceMeshSlbWithOptions(shared_ptr<GetServiceMeshSlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceMeshSlbResponse getServiceMeshSlb(shared_ptr<GetServiceMeshSlbRequest> request);
  GetRegisteredServiceEndpointsResponse getRegisteredServiceEndpointsWithOptions(shared_ptr<GetRegisteredServiceEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRegisteredServiceEndpointsResponse getRegisteredServiceEndpoints(shared_ptr<GetRegisteredServiceEndpointsRequest> request);
  UpdateMeshFeatureResponse updateMeshFeatureWithOptions(shared_ptr<UpdateMeshFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMeshFeatureResponse updateMeshFeature(shared_ptr<UpdateMeshFeatureRequest> request);
  AddVmAppToMeshResponse addVmAppToMeshWithOptions(shared_ptr<AddVmAppToMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddVmAppToMeshResponse addVmAppToMesh(shared_ptr<AddVmAppToMeshRequest> request);
  CreateServiceMeshResponse createServiceMeshWithOptions(shared_ptr<CreateServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceMeshResponse createServiceMesh(shared_ptr<CreateServiceMeshRequest> request);
  GetAutoInjectionLabelSyncStatusResponse getAutoInjectionLabelSyncStatusWithOptions(shared_ptr<GetAutoInjectionLabelSyncStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAutoInjectionLabelSyncStatusResponse getAutoInjectionLabelSyncStatus(shared_ptr<GetAutoInjectionLabelSyncStatusRequest> request);
  GetServiceRegistrySourceResponse getServiceRegistrySourceWithOptions(shared_ptr<GetServiceRegistrySourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceRegistrySourceResponse getServiceRegistrySource(shared_ptr<GetServiceRegistrySourceRequest> request);
  GetRegisteredServiceNamespacesResponse getRegisteredServiceNamespacesWithOptions(shared_ptr<GetRegisteredServiceNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRegisteredServiceNamespacesResponse getRegisteredServiceNamespaces(shared_ptr<GetRegisteredServiceNamespacesRequest> request);
  InitializeASMRoleResponse initializeASMRoleWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitializeASMRoleResponse initializeASMRole();
  RemoveVmAppFromMeshResponse removeVmAppFromMeshWithOptions(shared_ptr<RemoveVmAppFromMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveVmAppFromMeshResponse removeVmAppFromMesh(shared_ptr<RemoveVmAppFromMeshRequest> request);
  DescribeClusterPrometheusResponse describeClusterPrometheusWithOptions(shared_ptr<DescribeClusterPrometheusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterPrometheusResponse describeClusterPrometheus(shared_ptr<DescribeClusterPrometheusRequest> request);
  UpdateIstioInjectionConfigResponse updateIstioInjectionConfigWithOptions(shared_ptr<UpdateIstioInjectionConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIstioInjectionConfigResponse updateIstioInjectionConfig(shared_ptr<UpdateIstioInjectionConfigRequest> request);
  GetVmMetaResponse getVmMetaWithOptions(shared_ptr<GetVmMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVmMetaResponse getVmMeta(shared_ptr<GetVmMetaRequest> request);
  DescribeUpgradeVersionResponse describeUpgradeVersionWithOptions(shared_ptr<DescribeUpgradeVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUpgradeVersionResponse describeUpgradeVersion(shared_ptr<DescribeUpgradeVersionRequest> request);
  DescribeClustersInServiceMeshResponse describeClustersInServiceMeshWithOptions(shared_ptr<DescribeClustersInServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClustersInServiceMeshResponse describeClustersInServiceMesh(shared_ptr<DescribeClustersInServiceMeshRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Servicemesh20200111

#endif
