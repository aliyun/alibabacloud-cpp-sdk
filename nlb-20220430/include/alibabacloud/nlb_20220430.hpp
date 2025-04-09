// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_NLB20220430_H_
#define ALIBABACLOUD_NLB20220430_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Nlb20220430 {
class AddServersToServerGroupRequestServers : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverType{};
  shared_ptr<long> weight{};

  AddServersToServerGroupRequestServers() {}

  explicit AddServersToServerGroupRequestServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~AddServersToServerGroupRequestServers() = default;
};
class AddServersToServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<vector<AddServersToServerGroupRequestServers>> servers{};

  AddServersToServerGroupRequest() {}

  explicit AddServersToServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (servers) {
      vector<boost::any> temp1;
      for(auto item1:*servers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Servers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("Servers") != m.end() && !m["Servers"].empty()) {
      if (typeid(vector<boost::any>) == m["Servers"].type()) {
        vector<AddServersToServerGroupRequestServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Servers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddServersToServerGroupRequestServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servers = make_shared<vector<AddServersToServerGroupRequestServers>>(expect1);
      }
    }
  }


  virtual ~AddServersToServerGroupRequest() = default;
};
class AddServersToServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serverGroupId{};

  AddServersToServerGroupResponseBody() {}

  explicit AddServersToServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
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
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~AddServersToServerGroupResponseBody() = default;
};
class AddServersToServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddServersToServerGroupResponseBody> body{};

  AddServersToServerGroupResponse() {}

  explicit AddServersToServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddServersToServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddServersToServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddServersToServerGroupResponse() = default;
};
class AssociateAdditionalCertificatesWithListenerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> additionalCertificateIds{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> regionId{};

  AssociateAdditionalCertificatesWithListenerRequest() {}

  explicit AssociateAdditionalCertificatesWithListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalCertificateIds) {
      res["AdditionalCertificateIds"] = boost::any(*additionalCertificateIds);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalCertificateIds") != m.end() && !m["AdditionalCertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AdditionalCertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AdditionalCertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      additionalCertificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AssociateAdditionalCertificatesWithListenerRequest() = default;
};
class AssociateAdditionalCertificatesWithListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  AssociateAdditionalCertificatesWithListenerResponseBody() {}

  explicit AssociateAdditionalCertificatesWithListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssociateAdditionalCertificatesWithListenerResponseBody() = default;
};
class AssociateAdditionalCertificatesWithListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateAdditionalCertificatesWithListenerResponseBody> body{};

  AssociateAdditionalCertificatesWithListenerResponse() {}

  explicit AssociateAdditionalCertificatesWithListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateAdditionalCertificatesWithListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateAdditionalCertificatesWithListenerResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateAdditionalCertificatesWithListenerResponse() = default;
};
class AttachCommonBandwidthPackageToLoadBalancerRequest : public Darabonba::Model {
public:
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};

  AttachCommonBandwidthPackageToLoadBalancerRequest() {}

  explicit AttachCommonBandwidthPackageToLoadBalancerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~AttachCommonBandwidthPackageToLoadBalancerRequest() = default;
};
class AttachCommonBandwidthPackageToLoadBalancerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  AttachCommonBandwidthPackageToLoadBalancerResponseBody() {}

  explicit AttachCommonBandwidthPackageToLoadBalancerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachCommonBandwidthPackageToLoadBalancerResponseBody() = default;
};
class AttachCommonBandwidthPackageToLoadBalancerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachCommonBandwidthPackageToLoadBalancerResponseBody> body{};

  AttachCommonBandwidthPackageToLoadBalancerResponse() {}

  explicit AttachCommonBandwidthPackageToLoadBalancerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachCommonBandwidthPackageToLoadBalancerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachCommonBandwidthPackageToLoadBalancerResponseBody>(model1);
      }
    }
  }


  virtual ~AttachCommonBandwidthPackageToLoadBalancerResponse() = default;
};
class CancelShiftLoadBalancerZonesRequestZoneMappings : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CancelShiftLoadBalancerZonesRequestZoneMappings() {}

  explicit CancelShiftLoadBalancerZonesRequestZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelShiftLoadBalancerZonesRequestZoneMappings() = default;
};
class CancelShiftLoadBalancerZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<CancelShiftLoadBalancerZonesRequestZoneMappings>> zoneMappings{};

  CancelShiftLoadBalancerZonesRequest() {}

  explicit CancelShiftLoadBalancerZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneMappings) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneMappings") != m.end() && !m["ZoneMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneMappings"].type()) {
        vector<CancelShiftLoadBalancerZonesRequestZoneMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CancelShiftLoadBalancerZonesRequestZoneMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMappings = make_shared<vector<CancelShiftLoadBalancerZonesRequestZoneMappings>>(expect1);
      }
    }
  }


  virtual ~CancelShiftLoadBalancerZonesRequest() = default;
};
class CancelShiftLoadBalancerZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelShiftLoadBalancerZonesResponseBody() {}

  explicit CancelShiftLoadBalancerZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelShiftLoadBalancerZonesResponseBody() = default;
};
class CancelShiftLoadBalancerZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelShiftLoadBalancerZonesResponseBody> body{};

  CancelShiftLoadBalancerZonesResponse() {}

  explicit CancelShiftLoadBalancerZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelShiftLoadBalancerZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelShiftLoadBalancerZonesResponseBody>(model1);
      }
    }
  }


  virtual ~CancelShiftLoadBalancerZonesResponse() = default;
};
class CreateListenerRequestProxyProtocolV2Config : public Darabonba::Model {
public:
  shared_ptr<bool> ppv2PrivateLinkEpIdEnabled{};
  shared_ptr<bool> ppv2PrivateLinkEpsIdEnabled{};
  shared_ptr<bool> ppv2VpcIdEnabled{};

  CreateListenerRequestProxyProtocolV2Config() {}

  explicit CreateListenerRequestProxyProtocolV2Config(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ppv2PrivateLinkEpIdEnabled) {
      res["Ppv2PrivateLinkEpIdEnabled"] = boost::any(*ppv2PrivateLinkEpIdEnabled);
    }
    if (ppv2PrivateLinkEpsIdEnabled) {
      res["Ppv2PrivateLinkEpsIdEnabled"] = boost::any(*ppv2PrivateLinkEpsIdEnabled);
    }
    if (ppv2VpcIdEnabled) {
      res["Ppv2VpcIdEnabled"] = boost::any(*ppv2VpcIdEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ppv2PrivateLinkEpIdEnabled") != m.end() && !m["Ppv2PrivateLinkEpIdEnabled"].empty()) {
      ppv2PrivateLinkEpIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["Ppv2PrivateLinkEpIdEnabled"]));
    }
    if (m.find("Ppv2PrivateLinkEpsIdEnabled") != m.end() && !m["Ppv2PrivateLinkEpsIdEnabled"].empty()) {
      ppv2PrivateLinkEpsIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["Ppv2PrivateLinkEpsIdEnabled"]));
    }
    if (m.find("Ppv2VpcIdEnabled") != m.end() && !m["Ppv2VpcIdEnabled"].empty()) {
      ppv2VpcIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["Ppv2VpcIdEnabled"]));
    }
  }


  virtual ~CreateListenerRequestProxyProtocolV2Config() = default;
};
class CreateListenerRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateListenerRequestTag() {}

  explicit CreateListenerRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateListenerRequestTag() = default;
};
class CreateListenerRequest : public Darabonba::Model {
public:
  shared_ptr<bool> alpnEnabled{};
  shared_ptr<string> alpnPolicy{};
  shared_ptr<vector<string>> caCertificateIds{};
  shared_ptr<bool> caEnabled{};
  shared_ptr<vector<string>> certificateIds{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> cps{};
  shared_ptr<bool> dryRun{};
  shared_ptr<long> endPort{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<string> listenerDescription{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> mss{};
  shared_ptr<bool> proxyProtocolEnabled{};
  shared_ptr<CreateListenerRequestProxyProtocolV2Config> proxyProtocolV2Config{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> secSensorEnabled{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<long> startPort{};
  shared_ptr<vector<CreateListenerRequestTag>> tag{};

  CreateListenerRequest() {}

  explicit CreateListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpnEnabled) {
      res["AlpnEnabled"] = boost::any(*alpnEnabled);
    }
    if (alpnPolicy) {
      res["AlpnPolicy"] = boost::any(*alpnPolicy);
    }
    if (caCertificateIds) {
      res["CaCertificateIds"] = boost::any(*caCertificateIds);
    }
    if (caEnabled) {
      res["CaEnabled"] = boost::any(*caEnabled);
    }
    if (certificateIds) {
      res["CertificateIds"] = boost::any(*certificateIds);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (cps) {
      res["Cps"] = boost::any(*cps);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (endPort) {
      res["EndPort"] = boost::any(*endPort);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (mss) {
      res["Mss"] = boost::any(*mss);
    }
    if (proxyProtocolEnabled) {
      res["ProxyProtocolEnabled"] = boost::any(*proxyProtocolEnabled);
    }
    if (proxyProtocolV2Config) {
      res["ProxyProtocolV2Config"] = proxyProtocolV2Config ? boost::any(proxyProtocolV2Config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (secSensorEnabled) {
      res["SecSensorEnabled"] = boost::any(*secSensorEnabled);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (startPort) {
      res["StartPort"] = boost::any(*startPort);
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
    if (m.find("AlpnEnabled") != m.end() && !m["AlpnEnabled"].empty()) {
      alpnEnabled = make_shared<bool>(boost::any_cast<bool>(m["AlpnEnabled"]));
    }
    if (m.find("AlpnPolicy") != m.end() && !m["AlpnPolicy"].empty()) {
      alpnPolicy = make_shared<string>(boost::any_cast<string>(m["AlpnPolicy"]));
    }
    if (m.find("CaCertificateIds") != m.end() && !m["CaCertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CaCertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CaCertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      caCertificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CaEnabled") != m.end() && !m["CaEnabled"].empty()) {
      caEnabled = make_shared<bool>(boost::any_cast<bool>(m["CaEnabled"]));
    }
    if (m.find("CertificateIds") != m.end() && !m["CertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      certificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Cps") != m.end() && !m["Cps"].empty()) {
      cps = make_shared<long>(boost::any_cast<long>(m["Cps"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EndPort") != m.end() && !m["EndPort"].empty()) {
      endPort = make_shared<long>(boost::any_cast<long>(m["EndPort"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("Mss") != m.end() && !m["Mss"].empty()) {
      mss = make_shared<long>(boost::any_cast<long>(m["Mss"]));
    }
    if (m.find("ProxyProtocolEnabled") != m.end() && !m["ProxyProtocolEnabled"].empty()) {
      proxyProtocolEnabled = make_shared<bool>(boost::any_cast<bool>(m["ProxyProtocolEnabled"]));
    }
    if (m.find("ProxyProtocolV2Config") != m.end() && !m["ProxyProtocolV2Config"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProxyProtocolV2Config"].type()) {
        CreateListenerRequestProxyProtocolV2Config model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProxyProtocolV2Config"]));
        proxyProtocolV2Config = make_shared<CreateListenerRequestProxyProtocolV2Config>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecSensorEnabled") != m.end() && !m["SecSensorEnabled"].empty()) {
      secSensorEnabled = make_shared<bool>(boost::any_cast<bool>(m["SecSensorEnabled"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("StartPort") != m.end() && !m["StartPort"].empty()) {
      startPort = make_shared<long>(boost::any_cast<long>(m["StartPort"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateListenerRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateListenerRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateListenerRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreateListenerRequest() = default;
};
class CreateListenerShrinkRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateListenerShrinkRequestTag() {}

  explicit CreateListenerShrinkRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateListenerShrinkRequestTag() = default;
};
class CreateListenerShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> alpnEnabled{};
  shared_ptr<string> alpnPolicy{};
  shared_ptr<vector<string>> caCertificateIds{};
  shared_ptr<bool> caEnabled{};
  shared_ptr<vector<string>> certificateIds{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> cps{};
  shared_ptr<bool> dryRun{};
  shared_ptr<long> endPort{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<string> listenerDescription{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> mss{};
  shared_ptr<bool> proxyProtocolEnabled{};
  shared_ptr<string> proxyProtocolV2ConfigShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> secSensorEnabled{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<long> startPort{};
  shared_ptr<vector<CreateListenerShrinkRequestTag>> tag{};

  CreateListenerShrinkRequest() {}

  explicit CreateListenerShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpnEnabled) {
      res["AlpnEnabled"] = boost::any(*alpnEnabled);
    }
    if (alpnPolicy) {
      res["AlpnPolicy"] = boost::any(*alpnPolicy);
    }
    if (caCertificateIds) {
      res["CaCertificateIds"] = boost::any(*caCertificateIds);
    }
    if (caEnabled) {
      res["CaEnabled"] = boost::any(*caEnabled);
    }
    if (certificateIds) {
      res["CertificateIds"] = boost::any(*certificateIds);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (cps) {
      res["Cps"] = boost::any(*cps);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (endPort) {
      res["EndPort"] = boost::any(*endPort);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (mss) {
      res["Mss"] = boost::any(*mss);
    }
    if (proxyProtocolEnabled) {
      res["ProxyProtocolEnabled"] = boost::any(*proxyProtocolEnabled);
    }
    if (proxyProtocolV2ConfigShrink) {
      res["ProxyProtocolV2Config"] = boost::any(*proxyProtocolV2ConfigShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (secSensorEnabled) {
      res["SecSensorEnabled"] = boost::any(*secSensorEnabled);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (startPort) {
      res["StartPort"] = boost::any(*startPort);
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
    if (m.find("AlpnEnabled") != m.end() && !m["AlpnEnabled"].empty()) {
      alpnEnabled = make_shared<bool>(boost::any_cast<bool>(m["AlpnEnabled"]));
    }
    if (m.find("AlpnPolicy") != m.end() && !m["AlpnPolicy"].empty()) {
      alpnPolicy = make_shared<string>(boost::any_cast<string>(m["AlpnPolicy"]));
    }
    if (m.find("CaCertificateIds") != m.end() && !m["CaCertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CaCertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CaCertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      caCertificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CaEnabled") != m.end() && !m["CaEnabled"].empty()) {
      caEnabled = make_shared<bool>(boost::any_cast<bool>(m["CaEnabled"]));
    }
    if (m.find("CertificateIds") != m.end() && !m["CertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      certificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Cps") != m.end() && !m["Cps"].empty()) {
      cps = make_shared<long>(boost::any_cast<long>(m["Cps"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EndPort") != m.end() && !m["EndPort"].empty()) {
      endPort = make_shared<long>(boost::any_cast<long>(m["EndPort"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("Mss") != m.end() && !m["Mss"].empty()) {
      mss = make_shared<long>(boost::any_cast<long>(m["Mss"]));
    }
    if (m.find("ProxyProtocolEnabled") != m.end() && !m["ProxyProtocolEnabled"].empty()) {
      proxyProtocolEnabled = make_shared<bool>(boost::any_cast<bool>(m["ProxyProtocolEnabled"]));
    }
    if (m.find("ProxyProtocolV2Config") != m.end() && !m["ProxyProtocolV2Config"].empty()) {
      proxyProtocolV2ConfigShrink = make_shared<string>(boost::any_cast<string>(m["ProxyProtocolV2Config"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecSensorEnabled") != m.end() && !m["SecSensorEnabled"].empty()) {
      secSensorEnabled = make_shared<bool>(boost::any_cast<bool>(m["SecSensorEnabled"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("StartPort") != m.end() && !m["StartPort"].empty()) {
      startPort = make_shared<long>(boost::any_cast<long>(m["StartPort"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateListenerShrinkRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateListenerShrinkRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateListenerShrinkRequestTag>>(expect1);
      }
    }
  }


  virtual ~CreateListenerShrinkRequest() = default;
};
class CreateListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> requestId{};

  CreateListenerResponseBody() {}

  explicit CreateListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
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
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateListenerResponseBody() = default;
};
class CreateListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateListenerResponseBody> body{};

  CreateListenerResponse() {}

  explicit CreateListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateListenerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateListenerResponse() = default;
};
class CreateLoadBalancerRequestDeletionProtectionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> reason{};

  CreateLoadBalancerRequestDeletionProtectionConfig() {}

  explicit CreateLoadBalancerRequestDeletionProtectionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~CreateLoadBalancerRequestDeletionProtectionConfig() = default;
};
class CreateLoadBalancerRequestLoadBalancerBillingConfig : public Darabonba::Model {
public:
  shared_ptr<string> payType{};

  CreateLoadBalancerRequestLoadBalancerBillingConfig() {}

  explicit CreateLoadBalancerRequestLoadBalancerBillingConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
  }


  virtual ~CreateLoadBalancerRequestLoadBalancerBillingConfig() = default;
};
class CreateLoadBalancerRequestModificationProtectionConfig : public Darabonba::Model {
public:
  shared_ptr<string> reason{};
  shared_ptr<string> status{};

  CreateLoadBalancerRequestModificationProtectionConfig() {}

  explicit CreateLoadBalancerRequestModificationProtectionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateLoadBalancerRequestModificationProtectionConfig() = default;
};
class CreateLoadBalancerRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateLoadBalancerRequestTag() {}

  explicit CreateLoadBalancerRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateLoadBalancerRequestTag() = default;
};
class CreateLoadBalancerRequestZoneMappings : public Darabonba::Model {
public:
  shared_ptr<string> allocationId{};
  shared_ptr<vector<string>> ipv4LocalAddresses{};
  shared_ptr<string> ipv6Address{};
  shared_ptr<vector<string>> ipv6LocalAddresses{};
  shared_ptr<string> privateIPv4Address{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CreateLoadBalancerRequestZoneMappings() {}

  explicit CreateLoadBalancerRequestZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationId) {
      res["AllocationId"] = boost::any(*allocationId);
    }
    if (ipv4LocalAddresses) {
      res["Ipv4LocalAddresses"] = boost::any(*ipv4LocalAddresses);
    }
    if (ipv6Address) {
      res["Ipv6Address"] = boost::any(*ipv6Address);
    }
    if (ipv6LocalAddresses) {
      res["Ipv6LocalAddresses"] = boost::any(*ipv6LocalAddresses);
    }
    if (privateIPv4Address) {
      res["PrivateIPv4Address"] = boost::any(*privateIPv4Address);
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
    if (m.find("AllocationId") != m.end() && !m["AllocationId"].empty()) {
      allocationId = make_shared<string>(boost::any_cast<string>(m["AllocationId"]));
    }
    if (m.find("Ipv4LocalAddresses") != m.end() && !m["Ipv4LocalAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ipv4LocalAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ipv4LocalAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipv4LocalAddresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ipv6Address") != m.end() && !m["Ipv6Address"].empty()) {
      ipv6Address = make_shared<string>(boost::any_cast<string>(m["Ipv6Address"]));
    }
    if (m.find("Ipv6LocalAddresses") != m.end() && !m["Ipv6LocalAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ipv6LocalAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ipv6LocalAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipv6LocalAddresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PrivateIPv4Address") != m.end() && !m["PrivateIPv4Address"].empty()) {
      privateIPv4Address = make_shared<string>(boost::any_cast<string>(m["PrivateIPv4Address"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~CreateLoadBalancerRequestZoneMappings() = default;
};
class CreateLoadBalancerRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressIpVersion{};
  shared_ptr<string> addressType{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> clientToken{};
  shared_ptr<CreateLoadBalancerRequestDeletionProtectionConfig> deletionProtectionConfig{};
  shared_ptr<bool> dryRun{};
  shared_ptr<CreateLoadBalancerRequestLoadBalancerBillingConfig> loadBalancerBillingConfig{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<string> loadBalancerType{};
  shared_ptr<CreateLoadBalancerRequestModificationProtectionConfig> modificationProtectionConfig{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<CreateLoadBalancerRequestTag>> tag{};
  shared_ptr<string> vpcId{};
  shared_ptr<vector<CreateLoadBalancerRequestZoneMappings>> zoneMappings{};

  CreateLoadBalancerRequest() {}

  explicit CreateLoadBalancerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressIpVersion) {
      res["AddressIpVersion"] = boost::any(*addressIpVersion);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deletionProtectionConfig) {
      res["DeletionProtectionConfig"] = deletionProtectionConfig ? boost::any(deletionProtectionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerBillingConfig) {
      res["LoadBalancerBillingConfig"] = loadBalancerBillingConfig ? boost::any(loadBalancerBillingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (loadBalancerType) {
      res["LoadBalancerType"] = boost::any(*loadBalancerType);
    }
    if (modificationProtectionConfig) {
      res["ModificationProtectionConfig"] = modificationProtectionConfig ? boost::any(modificationProtectionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneMappings) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressIpVersion") != m.end() && !m["AddressIpVersion"].empty()) {
      addressIpVersion = make_shared<string>(boost::any_cast<string>(m["AddressIpVersion"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeletionProtectionConfig") != m.end() && !m["DeletionProtectionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeletionProtectionConfig"].type()) {
        CreateLoadBalancerRequestDeletionProtectionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeletionProtectionConfig"]));
        deletionProtectionConfig = make_shared<CreateLoadBalancerRequestDeletionProtectionConfig>(model1);
      }
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerBillingConfig") != m.end() && !m["LoadBalancerBillingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancerBillingConfig"].type()) {
        CreateLoadBalancerRequestLoadBalancerBillingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancerBillingConfig"]));
        loadBalancerBillingConfig = make_shared<CreateLoadBalancerRequestLoadBalancerBillingConfig>(model1);
      }
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("LoadBalancerType") != m.end() && !m["LoadBalancerType"].empty()) {
      loadBalancerType = make_shared<string>(boost::any_cast<string>(m["LoadBalancerType"]));
    }
    if (m.find("ModificationProtectionConfig") != m.end() && !m["ModificationProtectionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModificationProtectionConfig"].type()) {
        CreateLoadBalancerRequestModificationProtectionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModificationProtectionConfig"]));
        modificationProtectionConfig = make_shared<CreateLoadBalancerRequestModificationProtectionConfig>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateLoadBalancerRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLoadBalancerRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateLoadBalancerRequestTag>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneMappings") != m.end() && !m["ZoneMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneMappings"].type()) {
        vector<CreateLoadBalancerRequestZoneMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLoadBalancerRequestZoneMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMappings = make_shared<vector<CreateLoadBalancerRequestZoneMappings>>(expect1);
      }
    }
  }


  virtual ~CreateLoadBalancerRequest() = default;
};
class CreateLoadBalancerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> loadbalancerId{};
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  CreateLoadBalancerResponseBody() {}

  explicit CreateLoadBalancerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadbalancerId) {
      res["LoadbalancerId"] = boost::any(*loadbalancerId);
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
    if (m.find("LoadbalancerId") != m.end() && !m["LoadbalancerId"].empty()) {
      loadbalancerId = make_shared<string>(boost::any_cast<string>(m["LoadbalancerId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLoadBalancerResponseBody() = default;
};
class CreateLoadBalancerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLoadBalancerResponseBody> body{};

  CreateLoadBalancerResponse() {}

  explicit CreateLoadBalancerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLoadBalancerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLoadBalancerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLoadBalancerResponse() = default;
};
class CreateSecurityPolicyRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateSecurityPolicyRequestTag() {}

  explicit CreateSecurityPolicyRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateSecurityPolicyRequestTag() = default;
};
class CreateSecurityPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ciphers{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityPolicyName{};
  shared_ptr<vector<CreateSecurityPolicyRequestTag>> tag{};
  shared_ptr<vector<string>> tlsVersions{};

  CreateSecurityPolicyRequest() {}

  explicit CreateSecurityPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphers) {
      res["Ciphers"] = boost::any(*ciphers);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityPolicyName) {
      res["SecurityPolicyName"] = boost::any(*securityPolicyName);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (tlsVersions) {
      res["TlsVersions"] = boost::any(*tlsVersions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ciphers") != m.end() && !m["Ciphers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ciphers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ciphers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ciphers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityPolicyName") != m.end() && !m["SecurityPolicyName"].empty()) {
      securityPolicyName = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyName"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateSecurityPolicyRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSecurityPolicyRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateSecurityPolicyRequestTag>>(expect1);
      }
    }
    if (m.find("TlsVersions") != m.end() && !m["TlsVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TlsVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TlsVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tlsVersions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateSecurityPolicyRequest() = default;
};
class CreateSecurityPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> securityPolicyId{};

  CreateSecurityPolicyResponseBody() {}

  explicit CreateSecurityPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
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
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
  }


  virtual ~CreateSecurityPolicyResponseBody() = default;
};
class CreateSecurityPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSecurityPolicyResponseBody> body{};

  CreateSecurityPolicyResponse() {}

  explicit CreateSecurityPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSecurityPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSecurityPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSecurityPolicyResponse() = default;
};
class CreateServerGroupRequestHealthCheckConfig : public Darabonba::Model {
public:
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<bool> healthCheckEnabled{};
  shared_ptr<string> healthCheckExp{};
  shared_ptr<vector<string>> healthCheckHttpCode{};
  shared_ptr<string> healthCheckHttpVersion{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckReq{};
  shared_ptr<string> healthCheckType{};
  shared_ptr<string> healthCheckUrl{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> httpCheckMethod{};
  shared_ptr<long> unhealthyThreshold{};

  CreateServerGroupRequestHealthCheckConfig() {}

  explicit CreateServerGroupRequestHealthCheckConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckConnectTimeout) {
      res["HealthCheckConnectTimeout"] = boost::any(*healthCheckConnectTimeout);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    if (healthCheckExp) {
      res["HealthCheckExp"] = boost::any(*healthCheckExp);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (healthCheckHttpVersion) {
      res["HealthCheckHttpVersion"] = boost::any(*healthCheckHttpVersion);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckReq) {
      res["HealthCheckReq"] = boost::any(*healthCheckReq);
    }
    if (healthCheckType) {
      res["HealthCheckType"] = boost::any(*healthCheckType);
    }
    if (healthCheckUrl) {
      res["HealthCheckUrl"] = boost::any(*healthCheckUrl);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (httpCheckMethod) {
      res["HttpCheckMethod"] = boost::any(*httpCheckMethod);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckConnectTimeout") != m.end() && !m["HealthCheckConnectTimeout"].empty()) {
      healthCheckConnectTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectTimeout"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckEnabled"]));
    }
    if (m.find("HealthCheckExp") != m.end() && !m["HealthCheckExp"].empty()) {
      healthCheckExp = make_shared<string>(boost::any_cast<string>(m["HealthCheckExp"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckHttpCode"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckHttpCode"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckHttpCode = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckHttpVersion") != m.end() && !m["HealthCheckHttpVersion"].empty()) {
      healthCheckHttpVersion = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpVersion"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckReq") != m.end() && !m["HealthCheckReq"].empty()) {
      healthCheckReq = make_shared<string>(boost::any_cast<string>(m["HealthCheckReq"]));
    }
    if (m.find("HealthCheckType") != m.end() && !m["HealthCheckType"].empty()) {
      healthCheckType = make_shared<string>(boost::any_cast<string>(m["HealthCheckType"]));
    }
    if (m.find("HealthCheckUrl") != m.end() && !m["HealthCheckUrl"].empty()) {
      healthCheckUrl = make_shared<string>(boost::any_cast<string>(m["HealthCheckUrl"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("HttpCheckMethod") != m.end() && !m["HttpCheckMethod"].empty()) {
      httpCheckMethod = make_shared<string>(boost::any_cast<string>(m["HttpCheckMethod"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
  }


  virtual ~CreateServerGroupRequestHealthCheckConfig() = default;
};
class CreateServerGroupRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateServerGroupRequestTag() {}

  explicit CreateServerGroupRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateServerGroupRequestTag() = default;
};
class CreateServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressIPVersion{};
  shared_ptr<bool> anyPortEnabled{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> connectionDrainEnabled{};
  shared_ptr<long> connectionDrainTimeout{};
  shared_ptr<bool> dryRun{};
  shared_ptr<CreateServerGroupRequestHealthCheckConfig> healthCheckConfig{};
  shared_ptr<bool> preserveClientIpEnabled{};
  shared_ptr<string> protocol{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduler{};
  shared_ptr<string> serverGroupName{};
  shared_ptr<string> serverGroupType{};
  shared_ptr<vector<CreateServerGroupRequestTag>> tag{};
  shared_ptr<string> vpcId{};

  CreateServerGroupRequest() {}

  explicit CreateServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (anyPortEnabled) {
      res["AnyPortEnabled"] = boost::any(*anyPortEnabled);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectionDrainEnabled) {
      res["ConnectionDrainEnabled"] = boost::any(*connectionDrainEnabled);
    }
    if (connectionDrainTimeout) {
      res["ConnectionDrainTimeout"] = boost::any(*connectionDrainTimeout);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (healthCheckConfig) {
      res["HealthCheckConfig"] = healthCheckConfig ? boost::any(healthCheckConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (preserveClientIpEnabled) {
      res["PreserveClientIpEnabled"] = boost::any(*preserveClientIpEnabled);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (serverGroupName) {
      res["ServerGroupName"] = boost::any(*serverGroupName);
    }
    if (serverGroupType) {
      res["ServerGroupType"] = boost::any(*serverGroupType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("AnyPortEnabled") != m.end() && !m["AnyPortEnabled"].empty()) {
      anyPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["AnyPortEnabled"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConnectionDrainEnabled") != m.end() && !m["ConnectionDrainEnabled"].empty()) {
      connectionDrainEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConnectionDrainEnabled"]));
    }
    if (m.find("ConnectionDrainTimeout") != m.end() && !m["ConnectionDrainTimeout"].empty()) {
      connectionDrainTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectionDrainTimeout"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("HealthCheckConfig") != m.end() && !m["HealthCheckConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HealthCheckConfig"].type()) {
        CreateServerGroupRequestHealthCheckConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HealthCheckConfig"]));
        healthCheckConfig = make_shared<CreateServerGroupRequestHealthCheckConfig>(model1);
      }
    }
    if (m.find("PreserveClientIpEnabled") != m.end() && !m["PreserveClientIpEnabled"].empty()) {
      preserveClientIpEnabled = make_shared<bool>(boost::any_cast<bool>(m["PreserveClientIpEnabled"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("ServerGroupName") != m.end() && !m["ServerGroupName"].empty()) {
      serverGroupName = make_shared<string>(boost::any_cast<string>(m["ServerGroupName"]));
    }
    if (m.find("ServerGroupType") != m.end() && !m["ServerGroupType"].empty()) {
      serverGroupType = make_shared<string>(boost::any_cast<string>(m["ServerGroupType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<CreateServerGroupRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateServerGroupRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<CreateServerGroupRequestTag>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~CreateServerGroupRequest() = default;
};
class CreateServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serverGroupId{};

  CreateServerGroupResponseBody() {}

  explicit CreateServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
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
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~CreateServerGroupResponseBody() = default;
};
class CreateServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServerGroupResponseBody> body{};

  CreateServerGroupResponse() {}

  explicit CreateServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServerGroupResponse() = default;
};
class DeleteListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> regionId{};

  DeleteListenerRequest() {}

  explicit DeleteListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteListenerRequest() = default;
};
class DeleteListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DeleteListenerResponseBody() {}

  explicit DeleteListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteListenerResponseBody() = default;
};
class DeleteListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteListenerResponseBody> body{};

  DeleteListenerResponse() {}

  explicit DeleteListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteListenerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteListenerResponse() = default;
};
class DeleteLoadBalancerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};

  DeleteLoadBalancerRequest() {}

  explicit DeleteLoadBalancerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeleteLoadBalancerRequest() = default;
};
class DeleteLoadBalancerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DeleteLoadBalancerResponseBody() {}

  explicit DeleteLoadBalancerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLoadBalancerResponseBody() = default;
};
class DeleteLoadBalancerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLoadBalancerResponseBody> body{};

  DeleteLoadBalancerResponse() {}

  explicit DeleteLoadBalancerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLoadBalancerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLoadBalancerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLoadBalancerResponse() = default;
};
class DeleteSecurityPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityPolicyId{};

  DeleteSecurityPolicyRequest() {}

  explicit DeleteSecurityPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
  }


  virtual ~DeleteSecurityPolicyRequest() = default;
};
class DeleteSecurityPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSecurityPolicyResponseBody() {}

  explicit DeleteSecurityPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSecurityPolicyResponseBody() = default;
};
class DeleteSecurityPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSecurityPolicyResponseBody> body{};

  DeleteSecurityPolicyResponse() {}

  explicit DeleteSecurityPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSecurityPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSecurityPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSecurityPolicyResponse() = default;
};
class DeleteServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serverGroupId{};

  DeleteServerGroupRequest() {}

  explicit DeleteServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~DeleteServerGroupRequest() = default;
};
class DeleteServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DeleteServerGroupResponseBody() {}

  explicit DeleteServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServerGroupResponseBody() = default;
};
class DeleteServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServerGroupResponseBody> body{};

  DeleteServerGroupResponse() {}

  explicit DeleteServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServerGroupResponse() = default;
};
class DescribeHdMonitorRegionConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeHdMonitorRegionConfigRequest() {}

  explicit DescribeHdMonitorRegionConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeHdMonitorRegionConfigRequest() = default;
};
class DescribeHdMonitorRegionConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> logProject{};
  shared_ptr<string> metricStore{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};

  DescribeHdMonitorRegionConfigResponseBody() {}

  explicit DescribeHdMonitorRegionConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logProject) {
      res["LogProject"] = boost::any(*logProject);
    }
    if (metricStore) {
      res["MetricStore"] = boost::any(*metricStore);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogProject") != m.end() && !m["LogProject"].empty()) {
      logProject = make_shared<string>(boost::any_cast<string>(m["LogProject"]));
    }
    if (m.find("MetricStore") != m.end() && !m["MetricStore"].empty()) {
      metricStore = make_shared<string>(boost::any_cast<string>(m["MetricStore"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeHdMonitorRegionConfigResponseBody() = default;
};
class DescribeHdMonitorRegionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHdMonitorRegionConfigResponseBody> body{};

  DescribeHdMonitorRegionConfigResponse() {}

  explicit DescribeHdMonitorRegionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHdMonitorRegionConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHdMonitorRegionConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHdMonitorRegionConfigResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> serviceCode{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionEndpoint{};
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
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
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
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
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
class DescribeZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceCode{};

  DescribeZonesRequest() {}

  explicit DescribeZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
  }


  virtual ~DescribeZonesRequest() = default;
};
class DescribeZonesResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> zoneId{};

  DescribeZonesResponseBodyZones() {}

  explicit DescribeZonesResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeZonesResponseBodyZones() = default;
};
class DescribeZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeZonesResponseBodyZones>> zones{};

  DescribeZonesResponseBody() {}

  explicit DescribeZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (zones) {
      vector<boost::any> temp1;
      for(auto item1:*zones){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zones"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(vector<boost::any>) == m["Zones"].type()) {
        vector<DescribeZonesResponseBodyZones> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zones"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesResponseBodyZones model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zones = make_shared<vector<DescribeZonesResponseBodyZones>>(expect1);
      }
    }
  }


  virtual ~DescribeZonesResponseBody() = default;
};
class DescribeZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeZonesResponseBody> body{};

  DescribeZonesResponse() {}

  explicit DescribeZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeZonesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeZonesResponse() = default;
};
class DetachCommonBandwidthPackageFromLoadBalancerRequest : public Darabonba::Model {
public:
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};

  DetachCommonBandwidthPackageFromLoadBalancerRequest() {}

  explicit DetachCommonBandwidthPackageFromLoadBalancerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DetachCommonBandwidthPackageFromLoadBalancerRequest() = default;
};
class DetachCommonBandwidthPackageFromLoadBalancerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DetachCommonBandwidthPackageFromLoadBalancerResponseBody() {}

  explicit DetachCommonBandwidthPackageFromLoadBalancerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachCommonBandwidthPackageFromLoadBalancerResponseBody() = default;
};
class DetachCommonBandwidthPackageFromLoadBalancerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachCommonBandwidthPackageFromLoadBalancerResponseBody> body{};

  DetachCommonBandwidthPackageFromLoadBalancerResponse() {}

  explicit DetachCommonBandwidthPackageFromLoadBalancerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachCommonBandwidthPackageFromLoadBalancerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachCommonBandwidthPackageFromLoadBalancerResponseBody>(model1);
      }
    }
  }


  virtual ~DetachCommonBandwidthPackageFromLoadBalancerResponse() = default;
};
class DisableLoadBalancerIpv6InternetRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};

  DisableLoadBalancerIpv6InternetRequest() {}

  explicit DisableLoadBalancerIpv6InternetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DisableLoadBalancerIpv6InternetRequest() = default;
};
class DisableLoadBalancerIpv6InternetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableLoadBalancerIpv6InternetResponseBody() {}

  explicit DisableLoadBalancerIpv6InternetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableLoadBalancerIpv6InternetResponseBody() = default;
};
class DisableLoadBalancerIpv6InternetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableLoadBalancerIpv6InternetResponseBody> body{};

  DisableLoadBalancerIpv6InternetResponse() {}

  explicit DisableLoadBalancerIpv6InternetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableLoadBalancerIpv6InternetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableLoadBalancerIpv6InternetResponseBody>(model1);
      }
    }
  }


  virtual ~DisableLoadBalancerIpv6InternetResponse() = default;
};
class DisassociateAdditionalCertificatesWithListenerRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> additionalCertificateIds{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> regionId{};

  DisassociateAdditionalCertificatesWithListenerRequest() {}

  explicit DisassociateAdditionalCertificatesWithListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalCertificateIds) {
      res["AdditionalCertificateIds"] = boost::any(*additionalCertificateIds);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalCertificateIds") != m.end() && !m["AdditionalCertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AdditionalCertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AdditionalCertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      additionalCertificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DisassociateAdditionalCertificatesWithListenerRequest() = default;
};
class DisassociateAdditionalCertificatesWithListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DisassociateAdditionalCertificatesWithListenerResponseBody() {}

  explicit DisassociateAdditionalCertificatesWithListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisassociateAdditionalCertificatesWithListenerResponseBody() = default;
};
class DisassociateAdditionalCertificatesWithListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisassociateAdditionalCertificatesWithListenerResponseBody> body{};

  DisassociateAdditionalCertificatesWithListenerResponse() {}

  explicit DisassociateAdditionalCertificatesWithListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisassociateAdditionalCertificatesWithListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisassociateAdditionalCertificatesWithListenerResponseBody>(model1);
      }
    }
  }


  virtual ~DisassociateAdditionalCertificatesWithListenerResponse() = default;
};
class EnableLoadBalancerIpv6InternetRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};

  EnableLoadBalancerIpv6InternetRequest() {}

  explicit EnableLoadBalancerIpv6InternetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~EnableLoadBalancerIpv6InternetRequest() = default;
};
class EnableLoadBalancerIpv6InternetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableLoadBalancerIpv6InternetResponseBody() {}

  explicit EnableLoadBalancerIpv6InternetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableLoadBalancerIpv6InternetResponseBody() = default;
};
class EnableLoadBalancerIpv6InternetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableLoadBalancerIpv6InternetResponseBody> body{};

  EnableLoadBalancerIpv6InternetResponse() {}

  explicit EnableLoadBalancerIpv6InternetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableLoadBalancerIpv6InternetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableLoadBalancerIpv6InternetResponseBody>(model1);
      }
    }
  }


  virtual ~EnableLoadBalancerIpv6InternetResponse() = default;
};
class GetJobStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> jobId{};

  GetJobStatusRequest() {}

  explicit GetJobStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetJobStatusRequest() = default;
};
class GetJobStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetJobStatusResponseBody() {}

  explicit GetJobStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetJobStatusResponseBody() = default;
};
class GetJobStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetJobStatusResponseBody> body{};

  GetJobStatusResponse() {}

  explicit GetJobStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetJobStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetJobStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetJobStatusResponse() = default;
};
class GetListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> regionId{};

  GetListenerAttributeRequest() {}

  explicit GetListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetListenerAttributeRequest() = default;
};
class GetListenerAttributeResponseBodyProxyProtocolV2Config : public Darabonba::Model {
public:
  shared_ptr<bool> ppv2PrivateLinkEpIdEnabled{};
  shared_ptr<bool> ppv2PrivateLinkEpsIdEnabled{};
  shared_ptr<bool> ppv2VpcIdEnabled{};

  GetListenerAttributeResponseBodyProxyProtocolV2Config() {}

  explicit GetListenerAttributeResponseBodyProxyProtocolV2Config(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ppv2PrivateLinkEpIdEnabled) {
      res["Ppv2PrivateLinkEpIdEnabled"] = boost::any(*ppv2PrivateLinkEpIdEnabled);
    }
    if (ppv2PrivateLinkEpsIdEnabled) {
      res["Ppv2PrivateLinkEpsIdEnabled"] = boost::any(*ppv2PrivateLinkEpsIdEnabled);
    }
    if (ppv2VpcIdEnabled) {
      res["Ppv2VpcIdEnabled"] = boost::any(*ppv2VpcIdEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ppv2PrivateLinkEpIdEnabled") != m.end() && !m["Ppv2PrivateLinkEpIdEnabled"].empty()) {
      ppv2PrivateLinkEpIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["Ppv2PrivateLinkEpIdEnabled"]));
    }
    if (m.find("Ppv2PrivateLinkEpsIdEnabled") != m.end() && !m["Ppv2PrivateLinkEpsIdEnabled"].empty()) {
      ppv2PrivateLinkEpsIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["Ppv2PrivateLinkEpsIdEnabled"]));
    }
    if (m.find("Ppv2VpcIdEnabled") != m.end() && !m["Ppv2VpcIdEnabled"].empty()) {
      ppv2VpcIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["Ppv2VpcIdEnabled"]));
    }
  }


  virtual ~GetListenerAttributeResponseBodyProxyProtocolV2Config() = default;
};
class GetListenerAttributeResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetListenerAttributeResponseBodyTags() {}

  explicit GetListenerAttributeResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~GetListenerAttributeResponseBodyTags() = default;
};
class GetListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> alpnEnabled{};
  shared_ptr<string> alpnPolicy{};
  shared_ptr<vector<string>> caCertificateIds{};
  shared_ptr<bool> caEnabled{};
  shared_ptr<vector<string>> certificateIds{};
  shared_ptr<long> cps{};
  shared_ptr<string> endPort{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<string> listenerDescription{};
  shared_ptr<string> listenerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> listenerStatus{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> mss{};
  shared_ptr<bool> proxyProtocolEnabled{};
  shared_ptr<GetListenerAttributeResponseBodyProxyProtocolV2Config> proxyProtocolV2Config{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> secSensorEnabled{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<string> startPort{};
  shared_ptr<vector<GetListenerAttributeResponseBodyTags>> tags{};

  GetListenerAttributeResponseBody() {}

  explicit GetListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpnEnabled) {
      res["AlpnEnabled"] = boost::any(*alpnEnabled);
    }
    if (alpnPolicy) {
      res["AlpnPolicy"] = boost::any(*alpnPolicy);
    }
    if (caCertificateIds) {
      res["CaCertificateIds"] = boost::any(*caCertificateIds);
    }
    if (caEnabled) {
      res["CaEnabled"] = boost::any(*caEnabled);
    }
    if (certificateIds) {
      res["CertificateIds"] = boost::any(*certificateIds);
    }
    if (cps) {
      res["Cps"] = boost::any(*cps);
    }
    if (endPort) {
      res["EndPort"] = boost::any(*endPort);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (listenerStatus) {
      res["ListenerStatus"] = boost::any(*listenerStatus);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (mss) {
      res["Mss"] = boost::any(*mss);
    }
    if (proxyProtocolEnabled) {
      res["ProxyProtocolEnabled"] = boost::any(*proxyProtocolEnabled);
    }
    if (proxyProtocolV2Config) {
      res["ProxyProtocolV2Config"] = proxyProtocolV2Config ? boost::any(proxyProtocolV2Config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secSensorEnabled) {
      res["SecSensorEnabled"] = boost::any(*secSensorEnabled);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (startPort) {
      res["StartPort"] = boost::any(*startPort);
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
    if (m.find("AlpnEnabled") != m.end() && !m["AlpnEnabled"].empty()) {
      alpnEnabled = make_shared<bool>(boost::any_cast<bool>(m["AlpnEnabled"]));
    }
    if (m.find("AlpnPolicy") != m.end() && !m["AlpnPolicy"].empty()) {
      alpnPolicy = make_shared<string>(boost::any_cast<string>(m["AlpnPolicy"]));
    }
    if (m.find("CaCertificateIds") != m.end() && !m["CaCertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CaCertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CaCertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      caCertificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CaEnabled") != m.end() && !m["CaEnabled"].empty()) {
      caEnabled = make_shared<bool>(boost::any_cast<bool>(m["CaEnabled"]));
    }
    if (m.find("CertificateIds") != m.end() && !m["CertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      certificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Cps") != m.end() && !m["Cps"].empty()) {
      cps = make_shared<long>(boost::any_cast<long>(m["Cps"]));
    }
    if (m.find("EndPort") != m.end() && !m["EndPort"].empty()) {
      endPort = make_shared<string>(boost::any_cast<string>(m["EndPort"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("ListenerStatus") != m.end() && !m["ListenerStatus"].empty()) {
      listenerStatus = make_shared<string>(boost::any_cast<string>(m["ListenerStatus"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("Mss") != m.end() && !m["Mss"].empty()) {
      mss = make_shared<long>(boost::any_cast<long>(m["Mss"]));
    }
    if (m.find("ProxyProtocolEnabled") != m.end() && !m["ProxyProtocolEnabled"].empty()) {
      proxyProtocolEnabled = make_shared<bool>(boost::any_cast<bool>(m["ProxyProtocolEnabled"]));
    }
    if (m.find("ProxyProtocolV2Config") != m.end() && !m["ProxyProtocolV2Config"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProxyProtocolV2Config"].type()) {
        GetListenerAttributeResponseBodyProxyProtocolV2Config model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProxyProtocolV2Config"]));
        proxyProtocolV2Config = make_shared<GetListenerAttributeResponseBodyProxyProtocolV2Config>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecSensorEnabled") != m.end() && !m["SecSensorEnabled"].empty()) {
      secSensorEnabled = make_shared<bool>(boost::any_cast<bool>(m["SecSensorEnabled"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("StartPort") != m.end() && !m["StartPort"].empty()) {
      startPort = make_shared<string>(boost::any_cast<string>(m["StartPort"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetListenerAttributeResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerAttributeResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetListenerAttributeResponseBodyTags>>(expect1);
      }
    }
  }


  virtual ~GetListenerAttributeResponseBody() = default;
};
class GetListenerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetListenerAttributeResponseBody> body{};

  GetListenerAttributeResponse() {}

  explicit GetListenerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetListenerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetListenerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~GetListenerAttributeResponse() = default;
};
class GetListenerHealthStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> listenerId{};
  shared_ptr<string> regionId{};

  GetListenerHealthStatusRequest() {}

  explicit GetListenerHealthStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetListenerHealthStatusRequest() = default;
};
class GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason : public Darabonba::Model {
public:
  shared_ptr<string> reasonCode{};

  GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason() {}

  explicit GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reasonCode) {
      res["ReasonCode"] = boost::any(*reasonCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReasonCode") != m.end() && !m["ReasonCode"].empty()) {
      reasonCode = make_shared<string>(boost::any_cast<string>(m["ReasonCode"]));
    }
  }


  virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason() = default;
};
class GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason> reason{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> status{};

  GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers() {}

  explicit GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (reason) {
      res["Reason"] = reason ? boost::any(reason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      if (typeid(map<string, boost::any>) == m["Reason"].type()) {
        GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Reason"]));
        reason = make_shared<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason>(model1);
      }
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers() = default;
};
class GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos : public Darabonba::Model {
public:
  shared_ptr<bool> heathCheckEnabled{};
  shared_ptr<vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers>> nonNormalServers{};
  shared_ptr<string> serverGroupId{};

  GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos() {}

  explicit GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (heathCheckEnabled) {
      res["HeathCheckEnabled"] = boost::any(*heathCheckEnabled);
    }
    if (nonNormalServers) {
      vector<boost::any> temp1;
      for(auto item1:*nonNormalServers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NonNormalServers"] = boost::any(temp1);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HeathCheckEnabled") != m.end() && !m["HeathCheckEnabled"].empty()) {
      heathCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HeathCheckEnabled"]));
    }
    if (m.find("NonNormalServers") != m.end() && !m["NonNormalServers"].empty()) {
      if (typeid(vector<boost::any>) == m["NonNormalServers"].type()) {
        vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NonNormalServers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nonNormalServers = make_shared<vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers>>(expect1);
      }
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos() = default;
};
class GetListenerHealthStatusResponseBodyListenerHealthStatus : public Darabonba::Model {
public:
  shared_ptr<string> listenerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos>> serverGroupInfos{};

  GetListenerHealthStatusResponseBodyListenerHealthStatus() {}

  explicit GetListenerHealthStatusResponseBodyListenerHealthStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (serverGroupInfos) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroupInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroupInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("ServerGroupInfos") != m.end() && !m["ServerGroupInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroupInfos"].type()) {
        vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroupInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroupInfos = make_shared<vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos>>(expect1);
      }
    }
  }


  virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatus() = default;
};
class GetListenerHealthStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetListenerHealthStatusResponseBodyListenerHealthStatus>> listenerHealthStatus{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetListenerHealthStatusResponseBody() {}

  explicit GetListenerHealthStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerHealthStatus) {
      vector<boost::any> temp1;
      for(auto item1:*listenerHealthStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListenerHealthStatus"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("ListenerHealthStatus") != m.end() && !m["ListenerHealthStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["ListenerHealthStatus"].type()) {
        vector<GetListenerHealthStatusResponseBodyListenerHealthStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListenerHealthStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerHealthStatusResponseBodyListenerHealthStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listenerHealthStatus = make_shared<vector<GetListenerHealthStatusResponseBodyListenerHealthStatus>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetListenerHealthStatusResponseBody() = default;
};
class GetListenerHealthStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetListenerHealthStatusResponseBody> body{};

  GetListenerHealthStatusResponse() {}

  explicit GetListenerHealthStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetListenerHealthStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetListenerHealthStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetListenerHealthStatusResponse() = default;
};
class GetLoadBalancerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};

  GetLoadBalancerAttributeRequest() {}

  explicit GetLoadBalancerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetLoadBalancerAttributeRequest() = default;
};
class GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> enabledTime{};
  shared_ptr<string> reason{};

  GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig() {}

  explicit GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (enabledTime) {
      res["EnabledTime"] = boost::any(*enabledTime);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EnabledTime") != m.end() && !m["EnabledTime"].empty()) {
      enabledTime = make_shared<string>(boost::any_cast<string>(m["EnabledTime"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig() = default;
};
class GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig : public Darabonba::Model {
public:
  shared_ptr<string> payType{};

  GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig() {}

  explicit GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig() = default;
};
class GetLoadBalancerAttributeResponseBodyModificationProtectionConfig : public Darabonba::Model {
public:
  shared_ptr<string> enabledTime{};
  shared_ptr<string> reason{};
  shared_ptr<string> status{};

  GetLoadBalancerAttributeResponseBodyModificationProtectionConfig() {}

  explicit GetLoadBalancerAttributeResponseBodyModificationProtectionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabledTime) {
      res["EnabledTime"] = boost::any(*enabledTime);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnabledTime") != m.end() && !m["EnabledTime"].empty()) {
      enabledTime = make_shared<string>(boost::any_cast<string>(m["EnabledTime"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyModificationProtectionConfig() = default;
};
class GetLoadBalancerAttributeResponseBodyOperationLocks : public Darabonba::Model {
public:
  shared_ptr<string> lockReason{};
  shared_ptr<string> lockType{};

  GetLoadBalancerAttributeResponseBodyOperationLocks() {}

  explicit GetLoadBalancerAttributeResponseBodyOperationLocks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (lockType) {
      res["LockType"] = boost::any(*lockType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("LockType") != m.end() && !m["LockType"].empty()) {
      lockType = make_shared<string>(boost::any_cast<string>(m["LockType"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyOperationLocks() = default;
};
class GetLoadBalancerAttributeResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  GetLoadBalancerAttributeResponseBodyTags() {}

  explicit GetLoadBalancerAttributeResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyTags() = default;
};
class GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses : public Darabonba::Model {
public:
  shared_ptr<string> allocationId{};
  shared_ptr<string> eniId{};
  shared_ptr<vector<string>> ipv4LocalAddresses{};
  shared_ptr<string> ipv6Address{};
  shared_ptr<vector<string>> ipv6LocalAddresses{};
  shared_ptr<string> privateIPv4Address{};
  shared_ptr<string> privateIPv4HcStatus{};
  shared_ptr<string> privateIPv6HcStatus{};
  shared_ptr<string> publicIPv4Address{};

  GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses() {}

  explicit GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationId) {
      res["AllocationId"] = boost::any(*allocationId);
    }
    if (eniId) {
      res["EniId"] = boost::any(*eniId);
    }
    if (ipv4LocalAddresses) {
      res["Ipv4LocalAddresses"] = boost::any(*ipv4LocalAddresses);
    }
    if (ipv6Address) {
      res["Ipv6Address"] = boost::any(*ipv6Address);
    }
    if (ipv6LocalAddresses) {
      res["Ipv6LocalAddresses"] = boost::any(*ipv6LocalAddresses);
    }
    if (privateIPv4Address) {
      res["PrivateIPv4Address"] = boost::any(*privateIPv4Address);
    }
    if (privateIPv4HcStatus) {
      res["PrivateIPv4HcStatus"] = boost::any(*privateIPv4HcStatus);
    }
    if (privateIPv6HcStatus) {
      res["PrivateIPv6HcStatus"] = boost::any(*privateIPv6HcStatus);
    }
    if (publicIPv4Address) {
      res["PublicIPv4Address"] = boost::any(*publicIPv4Address);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationId") != m.end() && !m["AllocationId"].empty()) {
      allocationId = make_shared<string>(boost::any_cast<string>(m["AllocationId"]));
    }
    if (m.find("EniId") != m.end() && !m["EniId"].empty()) {
      eniId = make_shared<string>(boost::any_cast<string>(m["EniId"]));
    }
    if (m.find("Ipv4LocalAddresses") != m.end() && !m["Ipv4LocalAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ipv4LocalAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ipv4LocalAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipv4LocalAddresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Ipv6Address") != m.end() && !m["Ipv6Address"].empty()) {
      ipv6Address = make_shared<string>(boost::any_cast<string>(m["Ipv6Address"]));
    }
    if (m.find("Ipv6LocalAddresses") != m.end() && !m["Ipv6LocalAddresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ipv6LocalAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ipv6LocalAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipv6LocalAddresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PrivateIPv4Address") != m.end() && !m["PrivateIPv4Address"].empty()) {
      privateIPv4Address = make_shared<string>(boost::any_cast<string>(m["PrivateIPv4Address"]));
    }
    if (m.find("PrivateIPv4HcStatus") != m.end() && !m["PrivateIPv4HcStatus"].empty()) {
      privateIPv4HcStatus = make_shared<string>(boost::any_cast<string>(m["PrivateIPv4HcStatus"]));
    }
    if (m.find("PrivateIPv6HcStatus") != m.end() && !m["PrivateIPv6HcStatus"].empty()) {
      privateIPv6HcStatus = make_shared<string>(boost::any_cast<string>(m["PrivateIPv6HcStatus"]));
    }
    if (m.find("PublicIPv4Address") != m.end() && !m["PublicIPv4Address"].empty()) {
      publicIPv4Address = make_shared<string>(boost::any_cast<string>(m["PublicIPv4Address"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses() = default;
};
class GetLoadBalancerAttributeResponseBodyZoneMappings : public Darabonba::Model {
public:
  shared_ptr<vector<GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses>> loadBalancerAddresses{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  GetLoadBalancerAttributeResponseBodyZoneMappings() {}

  explicit GetLoadBalancerAttributeResponseBodyZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancerAddresses) {
      vector<boost::any> temp1;
      for(auto item1:*loadBalancerAddresses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LoadBalancerAddresses"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("LoadBalancerAddresses") != m.end() && !m["LoadBalancerAddresses"].empty()) {
      if (typeid(vector<boost::any>) == m["LoadBalancerAddresses"].type()) {
        vector<GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LoadBalancerAddresses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadBalancerAddresses = make_shared<vector<GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyZoneMappings() = default;
};
class GetLoadBalancerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> addressIpVersion{};
  shared_ptr<string> addressType{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<long> cps{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> crossZoneEnabled{};
  shared_ptr<string> DNSName{};
  shared_ptr<GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig> deletionProtectionConfig{};
  shared_ptr<string> ipv6AddressType{};
  shared_ptr<GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig> loadBalancerBillingConfig{};
  shared_ptr<string> loadBalancerBusinessStatus{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<string> loadBalancerStatus{};
  shared_ptr<string> loadBalancerType{};
  shared_ptr<GetLoadBalancerAttributeResponseBodyModificationProtectionConfig> modificationProtectionConfig{};
  shared_ptr<vector<GetLoadBalancerAttributeResponseBodyOperationLocks>> operationLocks{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> securityGroupIds{};
  shared_ptr<vector<GetLoadBalancerAttributeResponseBodyTags>> tags{};
  shared_ptr<string> vpcId{};
  shared_ptr<vector<GetLoadBalancerAttributeResponseBodyZoneMappings>> zoneMappings{};

  GetLoadBalancerAttributeResponseBody() {}

  explicit GetLoadBalancerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressIpVersion) {
      res["AddressIpVersion"] = boost::any(*addressIpVersion);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (cps) {
      res["Cps"] = boost::any(*cps);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (crossZoneEnabled) {
      res["CrossZoneEnabled"] = boost::any(*crossZoneEnabled);
    }
    if (DNSName) {
      res["DNSName"] = boost::any(*DNSName);
    }
    if (deletionProtectionConfig) {
      res["DeletionProtectionConfig"] = deletionProtectionConfig ? boost::any(deletionProtectionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ipv6AddressType) {
      res["Ipv6AddressType"] = boost::any(*ipv6AddressType);
    }
    if (loadBalancerBillingConfig) {
      res["LoadBalancerBillingConfig"] = loadBalancerBillingConfig ? boost::any(loadBalancerBillingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loadBalancerBusinessStatus) {
      res["LoadBalancerBusinessStatus"] = boost::any(*loadBalancerBusinessStatus);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (loadBalancerStatus) {
      res["LoadBalancerStatus"] = boost::any(*loadBalancerStatus);
    }
    if (loadBalancerType) {
      res["LoadBalancerType"] = boost::any(*loadBalancerType);
    }
    if (modificationProtectionConfig) {
      res["ModificationProtectionConfig"] = modificationProtectionConfig ? boost::any(modificationProtectionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operationLocks) {
      vector<boost::any> temp1;
      for(auto item1:*operationLocks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperationLocks"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneMappings) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressIpVersion") != m.end() && !m["AddressIpVersion"].empty()) {
      addressIpVersion = make_shared<string>(boost::any_cast<string>(m["AddressIpVersion"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("Cps") != m.end() && !m["Cps"].empty()) {
      cps = make_shared<long>(boost::any_cast<long>(m["Cps"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CrossZoneEnabled") != m.end() && !m["CrossZoneEnabled"].empty()) {
      crossZoneEnabled = make_shared<bool>(boost::any_cast<bool>(m["CrossZoneEnabled"]));
    }
    if (m.find("DNSName") != m.end() && !m["DNSName"].empty()) {
      DNSName = make_shared<string>(boost::any_cast<string>(m["DNSName"]));
    }
    if (m.find("DeletionProtectionConfig") != m.end() && !m["DeletionProtectionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeletionProtectionConfig"].type()) {
        GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeletionProtectionConfig"]));
        deletionProtectionConfig = make_shared<GetLoadBalancerAttributeResponseBodyDeletionProtectionConfig>(model1);
      }
    }
    if (m.find("Ipv6AddressType") != m.end() && !m["Ipv6AddressType"].empty()) {
      ipv6AddressType = make_shared<string>(boost::any_cast<string>(m["Ipv6AddressType"]));
    }
    if (m.find("LoadBalancerBillingConfig") != m.end() && !m["LoadBalancerBillingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancerBillingConfig"].type()) {
        GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancerBillingConfig"]));
        loadBalancerBillingConfig = make_shared<GetLoadBalancerAttributeResponseBodyLoadBalancerBillingConfig>(model1);
      }
    }
    if (m.find("LoadBalancerBusinessStatus") != m.end() && !m["LoadBalancerBusinessStatus"].empty()) {
      loadBalancerBusinessStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerBusinessStatus"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("LoadBalancerStatus") != m.end() && !m["LoadBalancerStatus"].empty()) {
      loadBalancerStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerStatus"]));
    }
    if (m.find("LoadBalancerType") != m.end() && !m["LoadBalancerType"].empty()) {
      loadBalancerType = make_shared<string>(boost::any_cast<string>(m["LoadBalancerType"]));
    }
    if (m.find("ModificationProtectionConfig") != m.end() && !m["ModificationProtectionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModificationProtectionConfig"].type()) {
        GetLoadBalancerAttributeResponseBodyModificationProtectionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModificationProtectionConfig"]));
        modificationProtectionConfig = make_shared<GetLoadBalancerAttributeResponseBodyModificationProtectionConfig>(model1);
      }
    }
    if (m.find("OperationLocks") != m.end() && !m["OperationLocks"].empty()) {
      if (typeid(vector<boost::any>) == m["OperationLocks"].type()) {
        vector<GetLoadBalancerAttributeResponseBodyOperationLocks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperationLocks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLoadBalancerAttributeResponseBodyOperationLocks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operationLocks = make_shared<vector<GetLoadBalancerAttributeResponseBodyOperationLocks>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetLoadBalancerAttributeResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLoadBalancerAttributeResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetLoadBalancerAttributeResponseBodyTags>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneMappings") != m.end() && !m["ZoneMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneMappings"].type()) {
        vector<GetLoadBalancerAttributeResponseBodyZoneMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLoadBalancerAttributeResponseBodyZoneMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMappings = make_shared<vector<GetLoadBalancerAttributeResponseBodyZoneMappings>>(expect1);
      }
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBody() = default;
};
class GetLoadBalancerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLoadBalancerAttributeResponseBody> body{};

  GetLoadBalancerAttributeResponse() {}

  explicit GetLoadBalancerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLoadBalancerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLoadBalancerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~GetLoadBalancerAttributeResponse() = default;
};
class ListListenerCertificatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> certType{};
  shared_ptr<vector<string>> certificateIds{};
  shared_ptr<string> listenerId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListListenerCertificatesRequest() {}

  explicit ListListenerCertificatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certificateIds) {
      res["CertificateIds"] = boost::any(*certificateIds);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertificateIds") != m.end() && !m["CertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      certificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListListenerCertificatesRequest() = default;
};
class ListListenerCertificatesResponseBodyCertificates : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> certificateType{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> status{};

  ListListenerCertificatesResponseBodyCertificates() {}

  explicit ListListenerCertificatesResponseBodyCertificates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (certificateType) {
      res["CertificateType"] = boost::any(*certificateType);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("CertificateType") != m.end() && !m["CertificateType"].empty()) {
      certificateType = make_shared<string>(boost::any_cast<string>(m["CertificateType"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListListenerCertificatesResponseBodyCertificates() = default;
};
class ListListenerCertificatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> certificateIds{};
  shared_ptr<vector<ListListenerCertificatesResponseBodyCertificates>> certificates{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListListenerCertificatesResponseBody() {}

  explicit ListListenerCertificatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateIds) {
      res["CertificateIds"] = boost::any(*certificateIds);
    }
    if (certificates) {
      vector<boost::any> temp1;
      for(auto item1:*certificates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Certificates"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("CertificateIds") != m.end() && !m["CertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      certificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Certificates") != m.end() && !m["Certificates"].empty()) {
      if (typeid(vector<boost::any>) == m["Certificates"].type()) {
        vector<ListListenerCertificatesResponseBodyCertificates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Certificates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenerCertificatesResponseBodyCertificates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificates = make_shared<vector<ListListenerCertificatesResponseBodyCertificates>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListListenerCertificatesResponseBody() = default;
};
class ListListenerCertificatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListListenerCertificatesResponseBody> body{};

  ListListenerCertificatesResponse() {}

  explicit ListListenerCertificatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListListenerCertificatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListListenerCertificatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListListenerCertificatesResponse() = default;
};
class ListListenersRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListListenersRequestTag() {}

  explicit ListListenersRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListListenersRequestTag() = default;
};
class ListListenersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> listenerIds{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<vector<string>> loadBalancerIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> secSensorEnabled{};
  shared_ptr<vector<ListListenersRequestTag>> tag{};

  ListListenersRequest() {}

  explicit ListListenersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerIds) {
      res["ListenerIds"] = boost::any(*listenerIds);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalancerIds) {
      res["LoadBalancerIds"] = boost::any(*loadBalancerIds);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (secSensorEnabled) {
      res["SecSensorEnabled"] = boost::any(*secSensorEnabled);
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
    if (m.find("ListenerIds") != m.end() && !m["ListenerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ListenerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ListenerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      listenerIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalancerIds") != m.end() && !m["LoadBalancerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LoadBalancerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LoadBalancerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      loadBalancerIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecSensorEnabled") != m.end() && !m["SecSensorEnabled"].empty()) {
      secSensorEnabled = make_shared<string>(boost::any_cast<string>(m["SecSensorEnabled"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListListenersRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListListenersRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListListenersRequest() = default;
};
class ListListenersResponseBodyListenersProxyProtocolV2Config : public Darabonba::Model {
public:
  shared_ptr<bool> ppv2PrivateLinkEpIdEnabled{};
  shared_ptr<bool> ppv2PrivateLinkEpsIdEnabled{};
  shared_ptr<bool> ppv2VpcIdEnabled{};

  ListListenersResponseBodyListenersProxyProtocolV2Config() {}

  explicit ListListenersResponseBodyListenersProxyProtocolV2Config(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ppv2PrivateLinkEpIdEnabled) {
      res["Ppv2PrivateLinkEpIdEnabled"] = boost::any(*ppv2PrivateLinkEpIdEnabled);
    }
    if (ppv2PrivateLinkEpsIdEnabled) {
      res["Ppv2PrivateLinkEpsIdEnabled"] = boost::any(*ppv2PrivateLinkEpsIdEnabled);
    }
    if (ppv2VpcIdEnabled) {
      res["Ppv2VpcIdEnabled"] = boost::any(*ppv2VpcIdEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ppv2PrivateLinkEpIdEnabled") != m.end() && !m["Ppv2PrivateLinkEpIdEnabled"].empty()) {
      ppv2PrivateLinkEpIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["Ppv2PrivateLinkEpIdEnabled"]));
    }
    if (m.find("Ppv2PrivateLinkEpsIdEnabled") != m.end() && !m["Ppv2PrivateLinkEpsIdEnabled"].empty()) {
      ppv2PrivateLinkEpsIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["Ppv2PrivateLinkEpsIdEnabled"]));
    }
    if (m.find("Ppv2VpcIdEnabled") != m.end() && !m["Ppv2VpcIdEnabled"].empty()) {
      ppv2VpcIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["Ppv2VpcIdEnabled"]));
    }
  }


  virtual ~ListListenersResponseBodyListenersProxyProtocolV2Config() = default;
};
class ListListenersResponseBodyListenersTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListListenersResponseBodyListenersTags() {}

  explicit ListListenersResponseBodyListenersTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListListenersResponseBodyListenersTags() = default;
};
class ListListenersResponseBodyListeners : public Darabonba::Model {
public:
  shared_ptr<bool> alpnEnabled{};
  shared_ptr<string> alpnPolicy{};
  shared_ptr<vector<string>> caCertificateIds{};
  shared_ptr<bool> caEnabled{};
  shared_ptr<vector<string>> certificateIds{};
  shared_ptr<long> cps{};
  shared_ptr<string> endPort{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<string> listenerDescription{};
  shared_ptr<string> listenerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> listenerStatus{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<long> mss{};
  shared_ptr<bool> proxyProtocolEnabled{};
  shared_ptr<ListListenersResponseBodyListenersProxyProtocolV2Config> proxyProtocolV2Config{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> secSensorEnabled{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<string> startPort{};
  shared_ptr<vector<ListListenersResponseBodyListenersTags>> tags{};

  ListListenersResponseBodyListeners() {}

  explicit ListListenersResponseBodyListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpnEnabled) {
      res["AlpnEnabled"] = boost::any(*alpnEnabled);
    }
    if (alpnPolicy) {
      res["AlpnPolicy"] = boost::any(*alpnPolicy);
    }
    if (caCertificateIds) {
      res["CaCertificateIds"] = boost::any(*caCertificateIds);
    }
    if (caEnabled) {
      res["CaEnabled"] = boost::any(*caEnabled);
    }
    if (certificateIds) {
      res["CertificateIds"] = boost::any(*certificateIds);
    }
    if (cps) {
      res["Cps"] = boost::any(*cps);
    }
    if (endPort) {
      res["EndPort"] = boost::any(*endPort);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (listenerStatus) {
      res["ListenerStatus"] = boost::any(*listenerStatus);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (mss) {
      res["Mss"] = boost::any(*mss);
    }
    if (proxyProtocolEnabled) {
      res["ProxyProtocolEnabled"] = boost::any(*proxyProtocolEnabled);
    }
    if (proxyProtocolV2Config) {
      res["ProxyProtocolV2Config"] = proxyProtocolV2Config ? boost::any(proxyProtocolV2Config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (secSensorEnabled) {
      res["SecSensorEnabled"] = boost::any(*secSensorEnabled);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (startPort) {
      res["StartPort"] = boost::any(*startPort);
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
    if (m.find("AlpnEnabled") != m.end() && !m["AlpnEnabled"].empty()) {
      alpnEnabled = make_shared<bool>(boost::any_cast<bool>(m["AlpnEnabled"]));
    }
    if (m.find("AlpnPolicy") != m.end() && !m["AlpnPolicy"].empty()) {
      alpnPolicy = make_shared<string>(boost::any_cast<string>(m["AlpnPolicy"]));
    }
    if (m.find("CaCertificateIds") != m.end() && !m["CaCertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CaCertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CaCertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      caCertificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CaEnabled") != m.end() && !m["CaEnabled"].empty()) {
      caEnabled = make_shared<bool>(boost::any_cast<bool>(m["CaEnabled"]));
    }
    if (m.find("CertificateIds") != m.end() && !m["CertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      certificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Cps") != m.end() && !m["Cps"].empty()) {
      cps = make_shared<long>(boost::any_cast<long>(m["Cps"]));
    }
    if (m.find("EndPort") != m.end() && !m["EndPort"].empty()) {
      endPort = make_shared<string>(boost::any_cast<string>(m["EndPort"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("ListenerStatus") != m.end() && !m["ListenerStatus"].empty()) {
      listenerStatus = make_shared<string>(boost::any_cast<string>(m["ListenerStatus"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("Mss") != m.end() && !m["Mss"].empty()) {
      mss = make_shared<long>(boost::any_cast<long>(m["Mss"]));
    }
    if (m.find("ProxyProtocolEnabled") != m.end() && !m["ProxyProtocolEnabled"].empty()) {
      proxyProtocolEnabled = make_shared<bool>(boost::any_cast<bool>(m["ProxyProtocolEnabled"]));
    }
    if (m.find("ProxyProtocolV2Config") != m.end() && !m["ProxyProtocolV2Config"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProxyProtocolV2Config"].type()) {
        ListListenersResponseBodyListenersProxyProtocolV2Config model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProxyProtocolV2Config"]));
        proxyProtocolV2Config = make_shared<ListListenersResponseBodyListenersProxyProtocolV2Config>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecSensorEnabled") != m.end() && !m["SecSensorEnabled"].empty()) {
      secSensorEnabled = make_shared<bool>(boost::any_cast<bool>(m["SecSensorEnabled"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("StartPort") != m.end() && !m["StartPort"].empty()) {
      startPort = make_shared<string>(boost::any_cast<string>(m["StartPort"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListListenersResponseBodyListenersTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersResponseBodyListenersTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListListenersResponseBodyListenersTags>>(expect1);
      }
    }
  }


  virtual ~ListListenersResponseBodyListeners() = default;
};
class ListListenersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListListenersResponseBodyListeners>> listeners{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListListenersResponseBody() {}

  explicit ListListenersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listeners) {
      vector<boost::any> temp1;
      for(auto item1:*listeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Listeners"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("Listeners") != m.end() && !m["Listeners"].empty()) {
      if (typeid(vector<boost::any>) == m["Listeners"].type()) {
        vector<ListListenersResponseBodyListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Listeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListListenersResponseBodyListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listeners = make_shared<vector<ListListenersResponseBodyListeners>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListListenersResponseBody() = default;
};
class ListListenersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListListenersResponseBody> body{};

  ListListenersResponse() {}

  explicit ListListenersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListListenersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListListenersResponseBody>(model1);
      }
    }
  }


  virtual ~ListListenersResponse() = default;
};
class ListLoadBalancersRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListLoadBalancersRequestTag() {}

  explicit ListLoadBalancersRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListLoadBalancersRequestTag() = default;
};
class ListLoadBalancersRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressIpVersion{};
  shared_ptr<string> addressType{};
  shared_ptr<string> DNSName{};
  shared_ptr<string> ipv6AddressType{};
  shared_ptr<string> loadBalancerBusinessStatus{};
  shared_ptr<vector<string>> loadBalancerIds{};
  shared_ptr<vector<string>> loadBalancerNames{};
  shared_ptr<string> loadBalancerStatus{};
  shared_ptr<string> loadBalancerType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListLoadBalancersRequestTag>> tag{};
  shared_ptr<vector<string>> vpcIds{};
  shared_ptr<string> zoneId{};

  ListLoadBalancersRequest() {}

  explicit ListLoadBalancersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressIpVersion) {
      res["AddressIpVersion"] = boost::any(*addressIpVersion);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (DNSName) {
      res["DNSName"] = boost::any(*DNSName);
    }
    if (ipv6AddressType) {
      res["Ipv6AddressType"] = boost::any(*ipv6AddressType);
    }
    if (loadBalancerBusinessStatus) {
      res["LoadBalancerBusinessStatus"] = boost::any(*loadBalancerBusinessStatus);
    }
    if (loadBalancerIds) {
      res["LoadBalancerIds"] = boost::any(*loadBalancerIds);
    }
    if (loadBalancerNames) {
      res["LoadBalancerNames"] = boost::any(*loadBalancerNames);
    }
    if (loadBalancerStatus) {
      res["LoadBalancerStatus"] = boost::any(*loadBalancerStatus);
    }
    if (loadBalancerType) {
      res["LoadBalancerType"] = boost::any(*loadBalancerType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (vpcIds) {
      res["VpcIds"] = boost::any(*vpcIds);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressIpVersion") != m.end() && !m["AddressIpVersion"].empty()) {
      addressIpVersion = make_shared<string>(boost::any_cast<string>(m["AddressIpVersion"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("DNSName") != m.end() && !m["DNSName"].empty()) {
      DNSName = make_shared<string>(boost::any_cast<string>(m["DNSName"]));
    }
    if (m.find("Ipv6AddressType") != m.end() && !m["Ipv6AddressType"].empty()) {
      ipv6AddressType = make_shared<string>(boost::any_cast<string>(m["Ipv6AddressType"]));
    }
    if (m.find("LoadBalancerBusinessStatus") != m.end() && !m["LoadBalancerBusinessStatus"].empty()) {
      loadBalancerBusinessStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerBusinessStatus"]));
    }
    if (m.find("LoadBalancerIds") != m.end() && !m["LoadBalancerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LoadBalancerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LoadBalancerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      loadBalancerIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LoadBalancerNames") != m.end() && !m["LoadBalancerNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LoadBalancerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LoadBalancerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      loadBalancerNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LoadBalancerStatus") != m.end() && !m["LoadBalancerStatus"].empty()) {
      loadBalancerStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerStatus"]));
    }
    if (m.find("LoadBalancerType") != m.end() && !m["LoadBalancerType"].empty()) {
      loadBalancerType = make_shared<string>(boost::any_cast<string>(m["LoadBalancerType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListLoadBalancersRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLoadBalancersRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListLoadBalancersRequestTag>>(expect1);
      }
    }
    if (m.find("VpcIds") != m.end() && !m["VpcIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VpcIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VpcIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vpcIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListLoadBalancersRequest() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> enabledTime{};
  shared_ptr<string> reason{};

  ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (enabledTime) {
      res["EnabledTime"] = boost::any(*enabledTime);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("EnabledTime") != m.end() && !m["EnabledTime"].empty()) {
      enabledTime = make_shared<string>(boost::any_cast<string>(m["EnabledTime"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig : public Darabonba::Model {
public:
  shared_ptr<string> payType{};

  ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payType) {
      res["PayType"] = boost::any(*payType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PayType") != m.end() && !m["PayType"].empty()) {
      payType = make_shared<string>(boost::any_cast<string>(m["PayType"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig : public Darabonba::Model {
public:
  shared_ptr<string> enabledTime{};
  shared_ptr<string> reason{};
  shared_ptr<string> status{};

  ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabledTime) {
      res["EnabledTime"] = boost::any(*enabledTime);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnabledTime") != m.end() && !m["EnabledTime"].empty()) {
      enabledTime = make_shared<string>(boost::any_cast<string>(m["EnabledTime"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersOperationLocks : public Darabonba::Model {
public:
  shared_ptr<string> lockReason{};
  shared_ptr<string> lockType{};

  ListLoadBalancersResponseBodyLoadBalancersOperationLocks() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersOperationLocks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lockReason) {
      res["LockReason"] = boost::any(*lockReason);
    }
    if (lockType) {
      res["LockType"] = boost::any(*lockType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LockReason") != m.end() && !m["LockReason"].empty()) {
      lockReason = make_shared<string>(boost::any_cast<string>(m["LockReason"]));
    }
    if (m.find("LockType") != m.end() && !m["LockType"].empty()) {
      lockType = make_shared<string>(boost::any_cast<string>(m["LockType"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancersOperationLocks() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListLoadBalancersResponseBodyLoadBalancersTags() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListLoadBalancersResponseBodyLoadBalancersTags() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses : public Darabonba::Model {
public:
  shared_ptr<string> allocationId{};
  shared_ptr<string> eniId{};
  shared_ptr<string> ipv6Address{};
  shared_ptr<string> privateIPv4Address{};
  shared_ptr<string> privateIPv4HcStatus{};
  shared_ptr<string> privateIPv6HcStatus{};
  shared_ptr<string> publicIPv4Address{};

  ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationId) {
      res["AllocationId"] = boost::any(*allocationId);
    }
    if (eniId) {
      res["EniId"] = boost::any(*eniId);
    }
    if (ipv6Address) {
      res["Ipv6Address"] = boost::any(*ipv6Address);
    }
    if (privateIPv4Address) {
      res["PrivateIPv4Address"] = boost::any(*privateIPv4Address);
    }
    if (privateIPv4HcStatus) {
      res["PrivateIPv4HcStatus"] = boost::any(*privateIPv4HcStatus);
    }
    if (privateIPv6HcStatus) {
      res["PrivateIPv6HcStatus"] = boost::any(*privateIPv6HcStatus);
    }
    if (publicIPv4Address) {
      res["PublicIPv4Address"] = boost::any(*publicIPv4Address);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllocationId") != m.end() && !m["AllocationId"].empty()) {
      allocationId = make_shared<string>(boost::any_cast<string>(m["AllocationId"]));
    }
    if (m.find("EniId") != m.end() && !m["EniId"].empty()) {
      eniId = make_shared<string>(boost::any_cast<string>(m["EniId"]));
    }
    if (m.find("Ipv6Address") != m.end() && !m["Ipv6Address"].empty()) {
      ipv6Address = make_shared<string>(boost::any_cast<string>(m["Ipv6Address"]));
    }
    if (m.find("PrivateIPv4Address") != m.end() && !m["PrivateIPv4Address"].empty()) {
      privateIPv4Address = make_shared<string>(boost::any_cast<string>(m["PrivateIPv4Address"]));
    }
    if (m.find("PrivateIPv4HcStatus") != m.end() && !m["PrivateIPv4HcStatus"].empty()) {
      privateIPv4HcStatus = make_shared<string>(boost::any_cast<string>(m["PrivateIPv4HcStatus"]));
    }
    if (m.find("PrivateIPv6HcStatus") != m.end() && !m["PrivateIPv6HcStatus"].empty()) {
      privateIPv6HcStatus = make_shared<string>(boost::any_cast<string>(m["PrivateIPv6HcStatus"]));
    }
    if (m.find("PublicIPv4Address") != m.end() && !m["PublicIPv4Address"].empty()) {
      publicIPv4Address = make_shared<string>(boost::any_cast<string>(m["PublicIPv4Address"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersZoneMappings : public Darabonba::Model {
public:
  shared_ptr<vector<ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses>> loadBalancerAddresses{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  ListLoadBalancersResponseBodyLoadBalancersZoneMappings() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancerAddresses) {
      vector<boost::any> temp1;
      for(auto item1:*loadBalancerAddresses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LoadBalancerAddresses"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("LoadBalancerAddresses") != m.end() && !m["LoadBalancerAddresses"].empty()) {
      if (typeid(vector<boost::any>) == m["LoadBalancerAddresses"].type()) {
        vector<ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LoadBalancerAddresses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadBalancerAddresses = make_shared<vector<ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancersZoneMappings() = default;
};
class ListLoadBalancersResponseBodyLoadBalancers : public Darabonba::Model {
public:
  shared_ptr<string> addressIpVersion{};
  shared_ptr<string> addressType{};
  shared_ptr<string> bandwidthPackageId{};
  shared_ptr<string> createTime{};
  shared_ptr<bool> crossZoneEnabled{};
  shared_ptr<string> DNSName{};
  shared_ptr<ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig> deletionProtectionConfig{};
  shared_ptr<string> ipv6AddressType{};
  shared_ptr<ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig> loadBalancerBillingConfig{};
  shared_ptr<string> loadBalancerBusinessStatus{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<string> loadBalancerStatus{};
  shared_ptr<string> loadBalancerType{};
  shared_ptr<ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig> modificationProtectionConfig{};
  shared_ptr<vector<ListLoadBalancersResponseBodyLoadBalancersOperationLocks>> operationLocks{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> securityGroupIds{};
  shared_ptr<vector<ListLoadBalancersResponseBodyLoadBalancersTags>> tags{};
  shared_ptr<string> vpcId{};
  shared_ptr<vector<ListLoadBalancersResponseBodyLoadBalancersZoneMappings>> zoneMappings{};

  ListLoadBalancersResponseBodyLoadBalancers() {}

  explicit ListLoadBalancersResponseBodyLoadBalancers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressIpVersion) {
      res["AddressIpVersion"] = boost::any(*addressIpVersion);
    }
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (bandwidthPackageId) {
      res["BandwidthPackageId"] = boost::any(*bandwidthPackageId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (crossZoneEnabled) {
      res["CrossZoneEnabled"] = boost::any(*crossZoneEnabled);
    }
    if (DNSName) {
      res["DNSName"] = boost::any(*DNSName);
    }
    if (deletionProtectionConfig) {
      res["DeletionProtectionConfig"] = deletionProtectionConfig ? boost::any(deletionProtectionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ipv6AddressType) {
      res["Ipv6AddressType"] = boost::any(*ipv6AddressType);
    }
    if (loadBalancerBillingConfig) {
      res["LoadBalancerBillingConfig"] = loadBalancerBillingConfig ? boost::any(loadBalancerBillingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (loadBalancerBusinessStatus) {
      res["LoadBalancerBusinessStatus"] = boost::any(*loadBalancerBusinessStatus);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (loadBalancerStatus) {
      res["LoadBalancerStatus"] = boost::any(*loadBalancerStatus);
    }
    if (loadBalancerType) {
      res["LoadBalancerType"] = boost::any(*loadBalancerType);
    }
    if (modificationProtectionConfig) {
      res["ModificationProtectionConfig"] = modificationProtectionConfig ? boost::any(modificationProtectionConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (operationLocks) {
      vector<boost::any> temp1;
      for(auto item1:*operationLocks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OperationLocks"] = boost::any(temp1);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (zoneMappings) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressIpVersion") != m.end() && !m["AddressIpVersion"].empty()) {
      addressIpVersion = make_shared<string>(boost::any_cast<string>(m["AddressIpVersion"]));
    }
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("BandwidthPackageId") != m.end() && !m["BandwidthPackageId"].empty()) {
      bandwidthPackageId = make_shared<string>(boost::any_cast<string>(m["BandwidthPackageId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CrossZoneEnabled") != m.end() && !m["CrossZoneEnabled"].empty()) {
      crossZoneEnabled = make_shared<bool>(boost::any_cast<bool>(m["CrossZoneEnabled"]));
    }
    if (m.find("DNSName") != m.end() && !m["DNSName"].empty()) {
      DNSName = make_shared<string>(boost::any_cast<string>(m["DNSName"]));
    }
    if (m.find("DeletionProtectionConfig") != m.end() && !m["DeletionProtectionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeletionProtectionConfig"].type()) {
        ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeletionProtectionConfig"]));
        deletionProtectionConfig = make_shared<ListLoadBalancersResponseBodyLoadBalancersDeletionProtectionConfig>(model1);
      }
    }
    if (m.find("Ipv6AddressType") != m.end() && !m["Ipv6AddressType"].empty()) {
      ipv6AddressType = make_shared<string>(boost::any_cast<string>(m["Ipv6AddressType"]));
    }
    if (m.find("LoadBalancerBillingConfig") != m.end() && !m["LoadBalancerBillingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancerBillingConfig"].type()) {
        ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancerBillingConfig"]));
        loadBalancerBillingConfig = make_shared<ListLoadBalancersResponseBodyLoadBalancersLoadBalancerBillingConfig>(model1);
      }
    }
    if (m.find("LoadBalancerBusinessStatus") != m.end() && !m["LoadBalancerBusinessStatus"].empty()) {
      loadBalancerBusinessStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerBusinessStatus"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("LoadBalancerStatus") != m.end() && !m["LoadBalancerStatus"].empty()) {
      loadBalancerStatus = make_shared<string>(boost::any_cast<string>(m["LoadBalancerStatus"]));
    }
    if (m.find("LoadBalancerType") != m.end() && !m["LoadBalancerType"].empty()) {
      loadBalancerType = make_shared<string>(boost::any_cast<string>(m["LoadBalancerType"]));
    }
    if (m.find("ModificationProtectionConfig") != m.end() && !m["ModificationProtectionConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModificationProtectionConfig"].type()) {
        ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModificationProtectionConfig"]));
        modificationProtectionConfig = make_shared<ListLoadBalancersResponseBodyLoadBalancersModificationProtectionConfig>(model1);
      }
    }
    if (m.find("OperationLocks") != m.end() && !m["OperationLocks"].empty()) {
      if (typeid(vector<boost::any>) == m["OperationLocks"].type()) {
        vector<ListLoadBalancersResponseBodyLoadBalancersOperationLocks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OperationLocks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLoadBalancersResponseBodyLoadBalancersOperationLocks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        operationLocks = make_shared<vector<ListLoadBalancersResponseBodyLoadBalancersOperationLocks>>(expect1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListLoadBalancersResponseBodyLoadBalancersTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLoadBalancersResponseBodyLoadBalancersTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListLoadBalancersResponseBodyLoadBalancersTags>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ZoneMappings") != m.end() && !m["ZoneMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneMappings"].type()) {
        vector<ListLoadBalancersResponseBodyLoadBalancersZoneMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLoadBalancersResponseBodyLoadBalancersZoneMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMappings = make_shared<vector<ListLoadBalancersResponseBodyLoadBalancersZoneMappings>>(expect1);
      }
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancers() = default;
};
class ListLoadBalancersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListLoadBalancersResponseBodyLoadBalancers>> loadBalancers{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListLoadBalancersResponseBody() {}

  explicit ListLoadBalancersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancers) {
      vector<boost::any> temp1;
      for(auto item1:*loadBalancers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LoadBalancers"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("LoadBalancers") != m.end() && !m["LoadBalancers"].empty()) {
      if (typeid(vector<boost::any>) == m["LoadBalancers"].type()) {
        vector<ListLoadBalancersResponseBodyLoadBalancers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LoadBalancers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLoadBalancersResponseBodyLoadBalancers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        loadBalancers = make_shared<vector<ListLoadBalancersResponseBodyLoadBalancers>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListLoadBalancersResponseBody() = default;
};
class ListLoadBalancersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLoadBalancersResponseBody> body{};

  ListLoadBalancersResponse() {}

  explicit ListLoadBalancersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLoadBalancersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLoadBalancersResponseBody>(model1);
      }
    }
  }


  virtual ~ListLoadBalancersResponse() = default;
};
class ListSecurityPolicyRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListSecurityPolicyRequestTag() {}

  explicit ListSecurityPolicyRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListSecurityPolicyRequestTag() = default;
};
class ListSecurityPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> securityPolicyIds{};
  shared_ptr<vector<string>> securityPolicyNames{};
  shared_ptr<vector<ListSecurityPolicyRequestTag>> tag{};

  ListSecurityPolicyRequest() {}

  explicit ListSecurityPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityPolicyIds) {
      res["SecurityPolicyIds"] = boost::any(*securityPolicyIds);
    }
    if (securityPolicyNames) {
      res["SecurityPolicyNames"] = boost::any(*securityPolicyNames);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityPolicyIds") != m.end() && !m["SecurityPolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityPolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityPolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityPolicyIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityPolicyNames") != m.end() && !m["SecurityPolicyNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityPolicyNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityPolicyNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityPolicyNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListSecurityPolicyRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecurityPolicyRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListSecurityPolicyRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListSecurityPolicyRequest() = default;
};
class ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners : public Darabonba::Model {
public:
  shared_ptr<string> listenerId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> listenerProtocol{};
  shared_ptr<string> loadBalancerId{};

  ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners() {}

  explicit ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (listenerProtocol) {
      res["ListenerProtocol"] = boost::any(*listenerProtocol);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("ListenerProtocol") != m.end() && !m["ListenerProtocol"].empty()) {
      listenerProtocol = make_shared<string>(boost::any_cast<string>(m["ListenerProtocol"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners() = default;
};
class ListSecurityPolicyResponseBodySecurityPoliciesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListSecurityPolicyResponseBodySecurityPoliciesTags() {}

  explicit ListSecurityPolicyResponseBodySecurityPoliciesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListSecurityPolicyResponseBodySecurityPoliciesTags() = default;
};
class ListSecurityPolicyResponseBodySecurityPolicies : public Darabonba::Model {
public:
  shared_ptr<string> ciphers{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners>> relatedListeners{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<string> securityPolicyName{};
  shared_ptr<string> securityPolicyStatus{};
  shared_ptr<vector<ListSecurityPolicyResponseBodySecurityPoliciesTags>> tags{};
  shared_ptr<string> tlsVersion{};

  ListSecurityPolicyResponseBodySecurityPolicies() {}

  explicit ListSecurityPolicyResponseBodySecurityPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphers) {
      res["Ciphers"] = boost::any(*ciphers);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (relatedListeners) {
      vector<boost::any> temp1;
      for(auto item1:*relatedListeners){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedListeners"] = boost::any(temp1);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (securityPolicyName) {
      res["SecurityPolicyName"] = boost::any(*securityPolicyName);
    }
    if (securityPolicyStatus) {
      res["SecurityPolicyStatus"] = boost::any(*securityPolicyStatus);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tlsVersion) {
      res["TlsVersion"] = boost::any(*tlsVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ciphers") != m.end() && !m["Ciphers"].empty()) {
      ciphers = make_shared<string>(boost::any_cast<string>(m["Ciphers"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RelatedListeners") != m.end() && !m["RelatedListeners"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedListeners"].type()) {
        vector<ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedListeners"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedListeners = make_shared<vector<ListSecurityPolicyResponseBodySecurityPoliciesRelatedListeners>>(expect1);
      }
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("SecurityPolicyName") != m.end() && !m["SecurityPolicyName"].empty()) {
      securityPolicyName = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyName"]));
    }
    if (m.find("SecurityPolicyStatus") != m.end() && !m["SecurityPolicyStatus"].empty()) {
      securityPolicyStatus = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyStatus"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListSecurityPolicyResponseBodySecurityPoliciesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecurityPolicyResponseBodySecurityPoliciesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListSecurityPolicyResponseBodySecurityPoliciesTags>>(expect1);
      }
    }
    if (m.find("TlsVersion") != m.end() && !m["TlsVersion"].empty()) {
      tlsVersion = make_shared<string>(boost::any_cast<string>(m["TlsVersion"]));
    }
  }


  virtual ~ListSecurityPolicyResponseBodySecurityPolicies() = default;
};
class ListSecurityPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSecurityPolicyResponseBodySecurityPolicies>> securityPolicies{};
  shared_ptr<long> totalCount{};

  ListSecurityPolicyResponseBody() {}

  explicit ListSecurityPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*securityPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityPolicies"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityPolicies") != m.end() && !m["SecurityPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityPolicies"].type()) {
        vector<ListSecurityPolicyResponseBodySecurityPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSecurityPolicyResponseBodySecurityPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityPolicies = make_shared<vector<ListSecurityPolicyResponseBodySecurityPolicies>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSecurityPolicyResponseBody() = default;
};
class ListSecurityPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSecurityPolicyResponseBody> body{};

  ListSecurityPolicyResponse() {}

  explicit ListSecurityPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSecurityPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSecurityPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ListSecurityPolicyResponse() = default;
};
class ListServerGroupServersRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<vector<string>> serverIds{};
  shared_ptr<vector<string>> serverIps{};

  ListServerGroupServersRequest() {}

  explicit ListServerGroupServersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (serverIds) {
      res["ServerIds"] = boost::any(*serverIds);
    }
    if (serverIps) {
      res["ServerIps"] = boost::any(*serverIps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("ServerIds") != m.end() && !m["ServerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serverIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServerIps") != m.end() && !m["ServerIps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServerIps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServerIps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serverIps = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListServerGroupServersRequest() = default;
};
class ListServerGroupServersResponseBodyServers : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverType{};
  shared_ptr<string> status{};
  shared_ptr<long> weight{};
  shared_ptr<string> zoneId{};

  ListServerGroupServersResponseBodyServers() {}

  explicit ListServerGroupServersResponseBodyServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~ListServerGroupServersResponseBodyServers() = default;
};
class ListServerGroupServersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServerGroupServersResponseBodyServers>> servers{};
  shared_ptr<long> totalCount{};

  ListServerGroupServersResponseBody() {}

  explicit ListServerGroupServersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (servers) {
      vector<boost::any> temp1;
      for(auto item1:*servers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Servers"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Servers") != m.end() && !m["Servers"].empty()) {
      if (typeid(vector<boost::any>) == m["Servers"].type()) {
        vector<ListServerGroupServersResponseBodyServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Servers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServerGroupServersResponseBodyServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servers = make_shared<vector<ListServerGroupServersResponseBodyServers>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServerGroupServersResponseBody() = default;
};
class ListServerGroupServersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServerGroupServersResponseBody> body{};

  ListServerGroupServersResponse() {}

  explicit ListServerGroupServersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServerGroupServersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServerGroupServersResponseBody>(model1);
      }
    }
  }


  virtual ~ListServerGroupServersResponse() = default;
};
class ListServerGroupsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServerGroupsRequestTag() {}

  explicit ListServerGroupsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServerGroupsRequestTag() = default;
};
class ListServerGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> serverGroupIds{};
  shared_ptr<vector<string>> serverGroupNames{};
  shared_ptr<string> serverGroupType{};
  shared_ptr<vector<ListServerGroupsRequestTag>> tag{};
  shared_ptr<string> vpcId{};

  ListServerGroupsRequest() {}

  explicit ListServerGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (serverGroupIds) {
      res["ServerGroupIds"] = boost::any(*serverGroupIds);
    }
    if (serverGroupNames) {
      res["ServerGroupNames"] = boost::any(*serverGroupNames);
    }
    if (serverGroupType) {
      res["ServerGroupType"] = boost::any(*serverGroupType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ServerGroupIds") != m.end() && !m["ServerGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServerGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServerGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serverGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServerGroupNames") != m.end() && !m["ServerGroupNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServerGroupNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServerGroupNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serverGroupNames = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServerGroupType") != m.end() && !m["ServerGroupType"].empty()) {
      serverGroupType = make_shared<string>(boost::any_cast<string>(m["ServerGroupType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListServerGroupsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServerGroupsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListServerGroupsRequestTag>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListServerGroupsRequest() = default;
};
class ListServerGroupsResponseBodyServerGroupsHealthCheck : public Darabonba::Model {
public:
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<bool> healthCheckEnabled{};
  shared_ptr<string> healthCheckExp{};
  shared_ptr<vector<string>> healthCheckHttpCode{};
  shared_ptr<string> healthCheckHttpVersion{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckReq{};
  shared_ptr<string> healthCheckType{};
  shared_ptr<string> healthCheckUrl{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> httpCheckMethod{};
  shared_ptr<long> unhealthyThreshold{};

  ListServerGroupsResponseBodyServerGroupsHealthCheck() {}

  explicit ListServerGroupsResponseBodyServerGroupsHealthCheck(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckConnectTimeout) {
      res["HealthCheckConnectTimeout"] = boost::any(*healthCheckConnectTimeout);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    if (healthCheckExp) {
      res["HealthCheckExp"] = boost::any(*healthCheckExp);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (healthCheckHttpVersion) {
      res["HealthCheckHttpVersion"] = boost::any(*healthCheckHttpVersion);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckReq) {
      res["HealthCheckReq"] = boost::any(*healthCheckReq);
    }
    if (healthCheckType) {
      res["HealthCheckType"] = boost::any(*healthCheckType);
    }
    if (healthCheckUrl) {
      res["HealthCheckUrl"] = boost::any(*healthCheckUrl);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (httpCheckMethod) {
      res["HttpCheckMethod"] = boost::any(*httpCheckMethod);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckConnectTimeout") != m.end() && !m["HealthCheckConnectTimeout"].empty()) {
      healthCheckConnectTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectTimeout"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckEnabled"]));
    }
    if (m.find("HealthCheckExp") != m.end() && !m["HealthCheckExp"].empty()) {
      healthCheckExp = make_shared<string>(boost::any_cast<string>(m["HealthCheckExp"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckHttpCode"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckHttpCode"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckHttpCode = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckHttpVersion") != m.end() && !m["HealthCheckHttpVersion"].empty()) {
      healthCheckHttpVersion = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpVersion"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckReq") != m.end() && !m["HealthCheckReq"].empty()) {
      healthCheckReq = make_shared<string>(boost::any_cast<string>(m["HealthCheckReq"]));
    }
    if (m.find("HealthCheckType") != m.end() && !m["HealthCheckType"].empty()) {
      healthCheckType = make_shared<string>(boost::any_cast<string>(m["HealthCheckType"]));
    }
    if (m.find("HealthCheckUrl") != m.end() && !m["HealthCheckUrl"].empty()) {
      healthCheckUrl = make_shared<string>(boost::any_cast<string>(m["HealthCheckUrl"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("HttpCheckMethod") != m.end() && !m["HttpCheckMethod"].empty()) {
      httpCheckMethod = make_shared<string>(boost::any_cast<string>(m["HttpCheckMethod"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
  }


  virtual ~ListServerGroupsResponseBodyServerGroupsHealthCheck() = default;
};
class ListServerGroupsResponseBodyServerGroupsTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListServerGroupsResponseBodyServerGroupsTags() {}

  explicit ListServerGroupsResponseBodyServerGroupsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListServerGroupsResponseBodyServerGroupsTags() = default;
};
class ListServerGroupsResponseBodyServerGroups : public Darabonba::Model {
public:
  shared_ptr<string> addressIPVersion{};
  shared_ptr<long> aliUid{};
  shared_ptr<bool> anyPortEnabled{};
  shared_ptr<bool> connectionDrainEnabled{};
  shared_ptr<long> connectionDrainTimeout{};
  shared_ptr<ListServerGroupsResponseBodyServerGroupsHealthCheck> healthCheck{};
  shared_ptr<bool> preserveClientIpEnabled{};
  shared_ptr<string> protocol{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> relatedLoadBalancerIds{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> scheduler{};
  shared_ptr<long> serverCount{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<string> serverGroupName{};
  shared_ptr<string> serverGroupStatus{};
  shared_ptr<string> serverGroupType{};
  shared_ptr<vector<ListServerGroupsResponseBodyServerGroupsTags>> tags{};
  shared_ptr<string> vpcId{};

  ListServerGroupsResponseBodyServerGroups() {}

  explicit ListServerGroupsResponseBodyServerGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressIPVersion) {
      res["AddressIPVersion"] = boost::any(*addressIPVersion);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (anyPortEnabled) {
      res["AnyPortEnabled"] = boost::any(*anyPortEnabled);
    }
    if (connectionDrainEnabled) {
      res["ConnectionDrainEnabled"] = boost::any(*connectionDrainEnabled);
    }
    if (connectionDrainTimeout) {
      res["ConnectionDrainTimeout"] = boost::any(*connectionDrainTimeout);
    }
    if (healthCheck) {
      res["HealthCheck"] = healthCheck ? boost::any(healthCheck->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (preserveClientIpEnabled) {
      res["PreserveClientIpEnabled"] = boost::any(*preserveClientIpEnabled);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (relatedLoadBalancerIds) {
      res["RelatedLoadBalancerIds"] = boost::any(*relatedLoadBalancerIds);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (serverCount) {
      res["ServerCount"] = boost::any(*serverCount);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (serverGroupName) {
      res["ServerGroupName"] = boost::any(*serverGroupName);
    }
    if (serverGroupStatus) {
      res["ServerGroupStatus"] = boost::any(*serverGroupStatus);
    }
    if (serverGroupType) {
      res["ServerGroupType"] = boost::any(*serverGroupType);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressIPVersion") != m.end() && !m["AddressIPVersion"].empty()) {
      addressIPVersion = make_shared<string>(boost::any_cast<string>(m["AddressIPVersion"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("AnyPortEnabled") != m.end() && !m["AnyPortEnabled"].empty()) {
      anyPortEnabled = make_shared<bool>(boost::any_cast<bool>(m["AnyPortEnabled"]));
    }
    if (m.find("ConnectionDrainEnabled") != m.end() && !m["ConnectionDrainEnabled"].empty()) {
      connectionDrainEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConnectionDrainEnabled"]));
    }
    if (m.find("ConnectionDrainTimeout") != m.end() && !m["ConnectionDrainTimeout"].empty()) {
      connectionDrainTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectionDrainTimeout"]));
    }
    if (m.find("HealthCheck") != m.end() && !m["HealthCheck"].empty()) {
      if (typeid(map<string, boost::any>) == m["HealthCheck"].type()) {
        ListServerGroupsResponseBodyServerGroupsHealthCheck model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HealthCheck"]));
        healthCheck = make_shared<ListServerGroupsResponseBodyServerGroupsHealthCheck>(model1);
      }
    }
    if (m.find("PreserveClientIpEnabled") != m.end() && !m["PreserveClientIpEnabled"].empty()) {
      preserveClientIpEnabled = make_shared<bool>(boost::any_cast<bool>(m["PreserveClientIpEnabled"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RelatedLoadBalancerIds") != m.end() && !m["RelatedLoadBalancerIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RelatedLoadBalancerIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelatedLoadBalancerIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      relatedLoadBalancerIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("ServerCount") != m.end() && !m["ServerCount"].empty()) {
      serverCount = make_shared<long>(boost::any_cast<long>(m["ServerCount"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("ServerGroupName") != m.end() && !m["ServerGroupName"].empty()) {
      serverGroupName = make_shared<string>(boost::any_cast<string>(m["ServerGroupName"]));
    }
    if (m.find("ServerGroupStatus") != m.end() && !m["ServerGroupStatus"].empty()) {
      serverGroupStatus = make_shared<string>(boost::any_cast<string>(m["ServerGroupStatus"]));
    }
    if (m.find("ServerGroupType") != m.end() && !m["ServerGroupType"].empty()) {
      serverGroupType = make_shared<string>(boost::any_cast<string>(m["ServerGroupType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListServerGroupsResponseBodyServerGroupsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServerGroupsResponseBodyServerGroupsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListServerGroupsResponseBodyServerGroupsTags>>(expect1);
      }
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~ListServerGroupsResponseBodyServerGroups() = default;
};
class ListServerGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListServerGroupsResponseBodyServerGroups>> serverGroups{};
  shared_ptr<long> totalCount{};

  ListServerGroupsResponseBody() {}

  explicit ListServerGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverGroups) {
      vector<boost::any> temp1;
      for(auto item1:*serverGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerGroups"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerGroups") != m.end() && !m["ServerGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerGroups"].type()) {
        vector<ListServerGroupsResponseBodyServerGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServerGroupsResponseBodyServerGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverGroups = make_shared<vector<ListServerGroupsResponseBodyServerGroups>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListServerGroupsResponseBody() = default;
};
class ListServerGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServerGroupsResponseBody> body{};

  ListServerGroupsResponse() {}

  explicit ListServerGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServerGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServerGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListServerGroupsResponse() = default;
};
class ListSystemSecurityPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  ListSystemSecurityPolicyRequest() {}

  explicit ListSystemSecurityPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListSystemSecurityPolicyRequest() = default;
};
class ListSystemSecurityPolicyResponseBodySecurityPolicies : public Darabonba::Model {
public:
  shared_ptr<string> ciphers{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<string> securityPolicyName{};
  shared_ptr<string> tlsVersion{};

  ListSystemSecurityPolicyResponseBodySecurityPolicies() {}

  explicit ListSystemSecurityPolicyResponseBodySecurityPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphers) {
      res["Ciphers"] = boost::any(*ciphers);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (securityPolicyName) {
      res["SecurityPolicyName"] = boost::any(*securityPolicyName);
    }
    if (tlsVersion) {
      res["TlsVersion"] = boost::any(*tlsVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ciphers") != m.end() && !m["Ciphers"].empty()) {
      ciphers = make_shared<string>(boost::any_cast<string>(m["Ciphers"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("SecurityPolicyName") != m.end() && !m["SecurityPolicyName"].empty()) {
      securityPolicyName = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyName"]));
    }
    if (m.find("TlsVersion") != m.end() && !m["TlsVersion"].empty()) {
      tlsVersion = make_shared<string>(boost::any_cast<string>(m["TlsVersion"]));
    }
  }


  virtual ~ListSystemSecurityPolicyResponseBodySecurityPolicies() = default;
};
class ListSystemSecurityPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSystemSecurityPolicyResponseBodySecurityPolicies>> securityPolicies{};

  ListSystemSecurityPolicyResponseBody() {}

  explicit ListSystemSecurityPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityPolicies) {
      vector<boost::any> temp1;
      for(auto item1:*securityPolicies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecurityPolicies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityPolicies") != m.end() && !m["SecurityPolicies"].empty()) {
      if (typeid(vector<boost::any>) == m["SecurityPolicies"].type()) {
        vector<ListSystemSecurityPolicyResponseBodySecurityPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecurityPolicies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSystemSecurityPolicyResponseBodySecurityPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        securityPolicies = make_shared<vector<ListSystemSecurityPolicyResponseBodySecurityPolicies>>(expect1);
      }
    }
  }


  virtual ~ListSystemSecurityPolicyResponseBody() = default;
};
class ListSystemSecurityPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSystemSecurityPolicyResponseBody> body{};

  ListSystemSecurityPolicyResponse() {}

  explicit ListSystemSecurityPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSystemSecurityPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSystemSecurityPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ListSystemSecurityPolicyResponse() = default;
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
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
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
  shared_ptr<long> aliUid{};
  shared_ptr<string> category{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scope{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
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
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
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
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};
  shared_ptr<long> totalCount{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
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
class LoadBalancerJoinSecurityGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> securityGroupIds{};

  LoadBalancerJoinSecurityGroupRequest() {}

  explicit LoadBalancerJoinSecurityGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  }


  virtual ~LoadBalancerJoinSecurityGroupRequest() = default;
};
class LoadBalancerJoinSecurityGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  LoadBalancerJoinSecurityGroupResponseBody() {}

  explicit LoadBalancerJoinSecurityGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LoadBalancerJoinSecurityGroupResponseBody() = default;
};
class LoadBalancerJoinSecurityGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LoadBalancerJoinSecurityGroupResponseBody> body{};

  LoadBalancerJoinSecurityGroupResponse() {}

  explicit LoadBalancerJoinSecurityGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LoadBalancerJoinSecurityGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LoadBalancerJoinSecurityGroupResponseBody>(model1);
      }
    }
  }


  virtual ~LoadBalancerJoinSecurityGroupResponse() = default;
};
class LoadBalancerLeaveSecurityGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> securityGroupIds{};

  LoadBalancerLeaveSecurityGroupRequest() {}

  explicit LoadBalancerLeaveSecurityGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
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
  }


  virtual ~LoadBalancerLeaveSecurityGroupRequest() = default;
};
class LoadBalancerLeaveSecurityGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  LoadBalancerLeaveSecurityGroupResponseBody() {}

  explicit LoadBalancerLeaveSecurityGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LoadBalancerLeaveSecurityGroupResponseBody() = default;
};
class LoadBalancerLeaveSecurityGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LoadBalancerLeaveSecurityGroupResponseBody> body{};

  LoadBalancerLeaveSecurityGroupResponse() {}

  explicit LoadBalancerLeaveSecurityGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LoadBalancerLeaveSecurityGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LoadBalancerLeaveSecurityGroupResponseBody>(model1);
      }
    }
  }


  virtual ~LoadBalancerLeaveSecurityGroupResponse() = default;
};
class MoveResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  MoveResourceGroupRequest() {}

  explicit MoveResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newResourceGroupId) {
      res["NewResourceGroupId"] = boost::any(*newResourceGroupId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~MoveResourceGroupRequest() = default;
};
class MoveResourceGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};

  MoveResourceGroupResponseBodyData() {}

  explicit MoveResourceGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
  }


  virtual ~MoveResourceGroupResponseBodyData() = default;
};
class MoveResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<MoveResourceGroupResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  MoveResourceGroupResponseBody() {}

  explicit MoveResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        MoveResourceGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<MoveResourceGroupResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~MoveResourceGroupResponseBody() = default;
};
class MoveResourceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveResourceGroupResponseBody> body{};

  MoveResourceGroupResponse() {}

  explicit MoveResourceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveResourceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourceGroupResponse() = default;
};
class RemoveServersFromServerGroupRequestServers : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverType{};

  RemoveServersFromServerGroupRequestServers() {}

  explicit RemoveServersFromServerGroupRequestServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
  }


  virtual ~RemoveServersFromServerGroupRequestServers() = default;
};
class RemoveServersFromServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<vector<RemoveServersFromServerGroupRequestServers>> servers{};

  RemoveServersFromServerGroupRequest() {}

  explicit RemoveServersFromServerGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (servers) {
      vector<boost::any> temp1;
      for(auto item1:*servers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Servers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("Servers") != m.end() && !m["Servers"].empty()) {
      if (typeid(vector<boost::any>) == m["Servers"].type()) {
        vector<RemoveServersFromServerGroupRequestServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Servers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveServersFromServerGroupRequestServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servers = make_shared<vector<RemoveServersFromServerGroupRequestServers>>(expect1);
      }
    }
  }


  virtual ~RemoveServersFromServerGroupRequest() = default;
};
class RemoveServersFromServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serverGroupId{};

  RemoveServersFromServerGroupResponseBody() {}

  explicit RemoveServersFromServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
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
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~RemoveServersFromServerGroupResponseBody() = default;
};
class RemoveServersFromServerGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveServersFromServerGroupResponseBody> body{};

  RemoveServersFromServerGroupResponse() {}

  explicit RemoveServersFromServerGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveServersFromServerGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveServersFromServerGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveServersFromServerGroupResponse() = default;
};
class SetHdMonitorRegionConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> logProject{};
  shared_ptr<string> metricStore{};
  shared_ptr<string> regionId{};

  SetHdMonitorRegionConfigRequest() {}

  explicit SetHdMonitorRegionConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logProject) {
      res["LogProject"] = boost::any(*logProject);
    }
    if (metricStore) {
      res["MetricStore"] = boost::any(*metricStore);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogProject") != m.end() && !m["LogProject"].empty()) {
      logProject = make_shared<string>(boost::any_cast<string>(m["LogProject"]));
    }
    if (m.find("MetricStore") != m.end() && !m["MetricStore"].empty()) {
      metricStore = make_shared<string>(boost::any_cast<string>(m["MetricStore"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SetHdMonitorRegionConfigRequest() = default;
};
class SetHdMonitorRegionConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> logProject{};
  shared_ptr<string> metricStore{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};

  SetHdMonitorRegionConfigResponseBody() {}

  explicit SetHdMonitorRegionConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logProject) {
      res["LogProject"] = boost::any(*logProject);
    }
    if (metricStore) {
      res["MetricStore"] = boost::any(*metricStore);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogProject") != m.end() && !m["LogProject"].empty()) {
      logProject = make_shared<string>(boost::any_cast<string>(m["LogProject"]));
    }
    if (m.find("MetricStore") != m.end() && !m["MetricStore"].empty()) {
      metricStore = make_shared<string>(boost::any_cast<string>(m["MetricStore"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetHdMonitorRegionConfigResponseBody() = default;
};
class SetHdMonitorRegionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetHdMonitorRegionConfigResponseBody> body{};

  SetHdMonitorRegionConfigResponse() {}

  explicit SetHdMonitorRegionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetHdMonitorRegionConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetHdMonitorRegionConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SetHdMonitorRegionConfigResponse() = default;
};
class StartListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> regionId{};

  StartListenerRequest() {}

  explicit StartListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StartListenerRequest() = default;
};
class StartListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  StartListenerResponseBody() {}

  explicit StartListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartListenerResponseBody() = default;
};
class StartListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartListenerResponseBody> body{};

  StartListenerResponse() {}

  explicit StartListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartListenerResponseBody>(model1);
      }
    }
  }


  virtual ~StartListenerResponse() = default;
};
class StartShiftLoadBalancerZonesRequestZoneMappings : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  StartShiftLoadBalancerZonesRequestZoneMappings() {}

  explicit StartShiftLoadBalancerZonesRequestZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartShiftLoadBalancerZonesRequestZoneMappings() = default;
};
class StartShiftLoadBalancerZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<StartShiftLoadBalancerZonesRequestZoneMappings>> zoneMappings{};

  StartShiftLoadBalancerZonesRequest() {}

  explicit StartShiftLoadBalancerZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneMappings) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneMappings") != m.end() && !m["ZoneMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneMappings"].type()) {
        vector<StartShiftLoadBalancerZonesRequestZoneMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StartShiftLoadBalancerZonesRequestZoneMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMappings = make_shared<vector<StartShiftLoadBalancerZonesRequestZoneMappings>>(expect1);
      }
    }
  }


  virtual ~StartShiftLoadBalancerZonesRequest() = default;
};
class StartShiftLoadBalancerZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartShiftLoadBalancerZonesResponseBody() {}

  explicit StartShiftLoadBalancerZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartShiftLoadBalancerZonesResponseBody() = default;
};
class StartShiftLoadBalancerZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartShiftLoadBalancerZonesResponseBody> body{};

  StartShiftLoadBalancerZonesResponse() {}

  explicit StartShiftLoadBalancerZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartShiftLoadBalancerZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartShiftLoadBalancerZonesResponseBody>(model1);
      }
    }
  }


  virtual ~StartShiftLoadBalancerZonesResponse() = default;
};
class StopListenerRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> regionId{};

  StopListenerRequest() {}

  explicit StopListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~StopListenerRequest() = default;
};
class StopListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  StopListenerResponseBody() {}

  explicit StopListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopListenerResponseBody() = default;
};
class StopListenerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopListenerResponseBody> body{};

  StopListenerResponse() {}

  explicit StopListenerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopListenerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopListenerResponseBody>(model1);
      }
    }
  }


  virtual ~StopListenerResponse() = default;
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
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
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
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
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
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
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
class UpdateListenerAttributeRequestProxyProtocolV2Config : public Darabonba::Model {
public:
  shared_ptr<bool> ppv2PrivateLinkEpIdEnabled{};
  shared_ptr<bool> ppv2PrivateLinkEpsIdEnabled{};
  shared_ptr<bool> ppv2VpcIdEnabled{};

  UpdateListenerAttributeRequestProxyProtocolV2Config() {}

  explicit UpdateListenerAttributeRequestProxyProtocolV2Config(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ppv2PrivateLinkEpIdEnabled) {
      res["Ppv2PrivateLinkEpIdEnabled"] = boost::any(*ppv2PrivateLinkEpIdEnabled);
    }
    if (ppv2PrivateLinkEpsIdEnabled) {
      res["Ppv2PrivateLinkEpsIdEnabled"] = boost::any(*ppv2PrivateLinkEpsIdEnabled);
    }
    if (ppv2VpcIdEnabled) {
      res["Ppv2VpcIdEnabled"] = boost::any(*ppv2VpcIdEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ppv2PrivateLinkEpIdEnabled") != m.end() && !m["Ppv2PrivateLinkEpIdEnabled"].empty()) {
      ppv2PrivateLinkEpIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["Ppv2PrivateLinkEpIdEnabled"]));
    }
    if (m.find("Ppv2PrivateLinkEpsIdEnabled") != m.end() && !m["Ppv2PrivateLinkEpsIdEnabled"].empty()) {
      ppv2PrivateLinkEpsIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["Ppv2PrivateLinkEpsIdEnabled"]));
    }
    if (m.find("Ppv2VpcIdEnabled") != m.end() && !m["Ppv2VpcIdEnabled"].empty()) {
      ppv2VpcIdEnabled = make_shared<bool>(boost::any_cast<bool>(m["Ppv2VpcIdEnabled"]));
    }
  }


  virtual ~UpdateListenerAttributeRequestProxyProtocolV2Config() = default;
};
class UpdateListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<bool> alpnEnabled{};
  shared_ptr<string> alpnPolicy{};
  shared_ptr<vector<string>> caCertificateIds{};
  shared_ptr<bool> caEnabled{};
  shared_ptr<vector<string>> certificateIds{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> cps{};
  shared_ptr<bool> dryRun{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<string> listenerDescription{};
  shared_ptr<string> listenerId{};
  shared_ptr<long> mss{};
  shared_ptr<bool> proxyProtocolEnabled{};
  shared_ptr<UpdateListenerAttributeRequestProxyProtocolV2Config> proxyProtocolV2Config{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> secSensorEnabled{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<string> serverGroupId{};

  UpdateListenerAttributeRequest() {}

  explicit UpdateListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpnEnabled) {
      res["AlpnEnabled"] = boost::any(*alpnEnabled);
    }
    if (alpnPolicy) {
      res["AlpnPolicy"] = boost::any(*alpnPolicy);
    }
    if (caCertificateIds) {
      res["CaCertificateIds"] = boost::any(*caCertificateIds);
    }
    if (caEnabled) {
      res["CaEnabled"] = boost::any(*caEnabled);
    }
    if (certificateIds) {
      res["CertificateIds"] = boost::any(*certificateIds);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (cps) {
      res["Cps"] = boost::any(*cps);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (mss) {
      res["Mss"] = boost::any(*mss);
    }
    if (proxyProtocolEnabled) {
      res["ProxyProtocolEnabled"] = boost::any(*proxyProtocolEnabled);
    }
    if (proxyProtocolV2Config) {
      res["ProxyProtocolV2Config"] = proxyProtocolV2Config ? boost::any(proxyProtocolV2Config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (secSensorEnabled) {
      res["SecSensorEnabled"] = boost::any(*secSensorEnabled);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlpnEnabled") != m.end() && !m["AlpnEnabled"].empty()) {
      alpnEnabled = make_shared<bool>(boost::any_cast<bool>(m["AlpnEnabled"]));
    }
    if (m.find("AlpnPolicy") != m.end() && !m["AlpnPolicy"].empty()) {
      alpnPolicy = make_shared<string>(boost::any_cast<string>(m["AlpnPolicy"]));
    }
    if (m.find("CaCertificateIds") != m.end() && !m["CaCertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CaCertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CaCertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      caCertificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CaEnabled") != m.end() && !m["CaEnabled"].empty()) {
      caEnabled = make_shared<bool>(boost::any_cast<bool>(m["CaEnabled"]));
    }
    if (m.find("CertificateIds") != m.end() && !m["CertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      certificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Cps") != m.end() && !m["Cps"].empty()) {
      cps = make_shared<long>(boost::any_cast<long>(m["Cps"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("Mss") != m.end() && !m["Mss"].empty()) {
      mss = make_shared<long>(boost::any_cast<long>(m["Mss"]));
    }
    if (m.find("ProxyProtocolEnabled") != m.end() && !m["ProxyProtocolEnabled"].empty()) {
      proxyProtocolEnabled = make_shared<bool>(boost::any_cast<bool>(m["ProxyProtocolEnabled"]));
    }
    if (m.find("ProxyProtocolV2Config") != m.end() && !m["ProxyProtocolV2Config"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProxyProtocolV2Config"].type()) {
        UpdateListenerAttributeRequestProxyProtocolV2Config model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProxyProtocolV2Config"]));
        proxyProtocolV2Config = make_shared<UpdateListenerAttributeRequestProxyProtocolV2Config>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecSensorEnabled") != m.end() && !m["SecSensorEnabled"].empty()) {
      secSensorEnabled = make_shared<bool>(boost::any_cast<bool>(m["SecSensorEnabled"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~UpdateListenerAttributeRequest() = default;
};
class UpdateListenerAttributeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> alpnEnabled{};
  shared_ptr<string> alpnPolicy{};
  shared_ptr<vector<string>> caCertificateIds{};
  shared_ptr<bool> caEnabled{};
  shared_ptr<vector<string>> certificateIds{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> cps{};
  shared_ptr<bool> dryRun{};
  shared_ptr<long> idleTimeout{};
  shared_ptr<string> listenerDescription{};
  shared_ptr<string> listenerId{};
  shared_ptr<long> mss{};
  shared_ptr<bool> proxyProtocolEnabled{};
  shared_ptr<string> proxyProtocolV2ConfigShrink{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> secSensorEnabled{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<string> serverGroupId{};

  UpdateListenerAttributeShrinkRequest() {}

  explicit UpdateListenerAttributeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alpnEnabled) {
      res["AlpnEnabled"] = boost::any(*alpnEnabled);
    }
    if (alpnPolicy) {
      res["AlpnPolicy"] = boost::any(*alpnPolicy);
    }
    if (caCertificateIds) {
      res["CaCertificateIds"] = boost::any(*caCertificateIds);
    }
    if (caEnabled) {
      res["CaEnabled"] = boost::any(*caEnabled);
    }
    if (certificateIds) {
      res["CertificateIds"] = boost::any(*certificateIds);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (cps) {
      res["Cps"] = boost::any(*cps);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (idleTimeout) {
      res["IdleTimeout"] = boost::any(*idleTimeout);
    }
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (mss) {
      res["Mss"] = boost::any(*mss);
    }
    if (proxyProtocolEnabled) {
      res["ProxyProtocolEnabled"] = boost::any(*proxyProtocolEnabled);
    }
    if (proxyProtocolV2ConfigShrink) {
      res["ProxyProtocolV2Config"] = boost::any(*proxyProtocolV2ConfigShrink);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (secSensorEnabled) {
      res["SecSensorEnabled"] = boost::any(*secSensorEnabled);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlpnEnabled") != m.end() && !m["AlpnEnabled"].empty()) {
      alpnEnabled = make_shared<bool>(boost::any_cast<bool>(m["AlpnEnabled"]));
    }
    if (m.find("AlpnPolicy") != m.end() && !m["AlpnPolicy"].empty()) {
      alpnPolicy = make_shared<string>(boost::any_cast<string>(m["AlpnPolicy"]));
    }
    if (m.find("CaCertificateIds") != m.end() && !m["CaCertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CaCertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CaCertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      caCertificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CaEnabled") != m.end() && !m["CaEnabled"].empty()) {
      caEnabled = make_shared<bool>(boost::any_cast<bool>(m["CaEnabled"]));
    }
    if (m.find("CertificateIds") != m.end() && !m["CertificateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CertificateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CertificateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      certificateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Cps") != m.end() && !m["Cps"].empty()) {
      cps = make_shared<long>(boost::any_cast<long>(m["Cps"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("IdleTimeout") != m.end() && !m["IdleTimeout"].empty()) {
      idleTimeout = make_shared<long>(boost::any_cast<long>(m["IdleTimeout"]));
    }
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("Mss") != m.end() && !m["Mss"].empty()) {
      mss = make_shared<long>(boost::any_cast<long>(m["Mss"]));
    }
    if (m.find("ProxyProtocolEnabled") != m.end() && !m["ProxyProtocolEnabled"].empty()) {
      proxyProtocolEnabled = make_shared<bool>(boost::any_cast<bool>(m["ProxyProtocolEnabled"]));
    }
    if (m.find("ProxyProtocolV2Config") != m.end() && !m["ProxyProtocolV2Config"].empty()) {
      proxyProtocolV2ConfigShrink = make_shared<string>(boost::any_cast<string>(m["ProxyProtocolV2Config"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecSensorEnabled") != m.end() && !m["SecSensorEnabled"].empty()) {
      secSensorEnabled = make_shared<bool>(boost::any_cast<bool>(m["SecSensorEnabled"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~UpdateListenerAttributeShrinkRequest() = default;
};
class UpdateListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateListenerAttributeResponseBody() {}

  explicit UpdateListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateListenerAttributeResponseBody() = default;
};
class UpdateListenerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateListenerAttributeResponseBody> body{};

  UpdateListenerAttributeResponse() {}

  explicit UpdateListenerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateListenerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateListenerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateListenerAttributeResponse() = default;
};
class UpdateLoadBalancerAddressTypeConfigRequestZoneMappings : public Darabonba::Model {
public:
  shared_ptr<string> allocationId{};
  shared_ptr<string> eipType{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  UpdateLoadBalancerAddressTypeConfigRequestZoneMappings() {}

  explicit UpdateLoadBalancerAddressTypeConfigRequestZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationId) {
      res["AllocationId"] = boost::any(*allocationId);
    }
    if (eipType) {
      res["EipType"] = boost::any(*eipType);
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
    if (m.find("AllocationId") != m.end() && !m["AllocationId"].empty()) {
      allocationId = make_shared<string>(boost::any_cast<string>(m["AllocationId"]));
    }
    if (m.find("EipType") != m.end() && !m["EipType"].empty()) {
      eipType = make_shared<string>(boost::any_cast<string>(m["EipType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~UpdateLoadBalancerAddressTypeConfigRequestZoneMappings() = default;
};
class UpdateLoadBalancerAddressTypeConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressType{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<UpdateLoadBalancerAddressTypeConfigRequestZoneMappings>> zoneMappings{};

  UpdateLoadBalancerAddressTypeConfigRequest() {}

  explicit UpdateLoadBalancerAddressTypeConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressType) {
      res["AddressType"] = boost::any(*addressType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneMappings) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressType") != m.end() && !m["AddressType"].empty()) {
      addressType = make_shared<string>(boost::any_cast<string>(m["AddressType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneMappings") != m.end() && !m["ZoneMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneMappings"].type()) {
        vector<UpdateLoadBalancerAddressTypeConfigRequestZoneMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateLoadBalancerAddressTypeConfigRequestZoneMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMappings = make_shared<vector<UpdateLoadBalancerAddressTypeConfigRequestZoneMappings>>(expect1);
      }
    }
  }


  virtual ~UpdateLoadBalancerAddressTypeConfigRequest() = default;
};
class UpdateLoadBalancerAddressTypeConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateLoadBalancerAddressTypeConfigResponseBody() {}

  explicit UpdateLoadBalancerAddressTypeConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateLoadBalancerAddressTypeConfigResponseBody() = default;
};
class UpdateLoadBalancerAddressTypeConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLoadBalancerAddressTypeConfigResponseBody> body{};

  UpdateLoadBalancerAddressTypeConfigResponse() {}

  explicit UpdateLoadBalancerAddressTypeConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLoadBalancerAddressTypeConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLoadBalancerAddressTypeConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLoadBalancerAddressTypeConfigResponse() = default;
};
class UpdateLoadBalancerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<long> cps{};
  shared_ptr<bool> crossZoneEnabled{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<string> regionId{};

  UpdateLoadBalancerAttributeRequest() {}

  explicit UpdateLoadBalancerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (cps) {
      res["Cps"] = boost::any(*cps);
    }
    if (crossZoneEnabled) {
      res["CrossZoneEnabled"] = boost::any(*crossZoneEnabled);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Cps") != m.end() && !m["Cps"].empty()) {
      cps = make_shared<long>(boost::any_cast<long>(m["Cps"]));
    }
    if (m.find("CrossZoneEnabled") != m.end() && !m["CrossZoneEnabled"].empty()) {
      crossZoneEnabled = make_shared<bool>(boost::any_cast<bool>(m["CrossZoneEnabled"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateLoadBalancerAttributeRequest() = default;
};
class UpdateLoadBalancerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateLoadBalancerAttributeResponseBody() {}

  explicit UpdateLoadBalancerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateLoadBalancerAttributeResponseBody() = default;
};
class UpdateLoadBalancerAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLoadBalancerAttributeResponseBody> body{};

  UpdateLoadBalancerAttributeResponse() {}

  explicit UpdateLoadBalancerAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLoadBalancerAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLoadBalancerAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLoadBalancerAttributeResponse() = default;
};
class UpdateLoadBalancerProtectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> deletionProtectionEnabled{};
  shared_ptr<string> deletionProtectionReason{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> modificationProtectionReason{};
  shared_ptr<string> modificationProtectionStatus{};
  shared_ptr<string> regionId{};

  UpdateLoadBalancerProtectionRequest() {}

  explicit UpdateLoadBalancerProtectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deletionProtectionEnabled) {
      res["DeletionProtectionEnabled"] = boost::any(*deletionProtectionEnabled);
    }
    if (deletionProtectionReason) {
      res["DeletionProtectionReason"] = boost::any(*deletionProtectionReason);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (modificationProtectionReason) {
      res["ModificationProtectionReason"] = boost::any(*modificationProtectionReason);
    }
    if (modificationProtectionStatus) {
      res["ModificationProtectionStatus"] = boost::any(*modificationProtectionStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeletionProtectionEnabled") != m.end() && !m["DeletionProtectionEnabled"].empty()) {
      deletionProtectionEnabled = make_shared<bool>(boost::any_cast<bool>(m["DeletionProtectionEnabled"]));
    }
    if (m.find("DeletionProtectionReason") != m.end() && !m["DeletionProtectionReason"].empty()) {
      deletionProtectionReason = make_shared<string>(boost::any_cast<string>(m["DeletionProtectionReason"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ModificationProtectionReason") != m.end() && !m["ModificationProtectionReason"].empty()) {
      modificationProtectionReason = make_shared<string>(boost::any_cast<string>(m["ModificationProtectionReason"]));
    }
    if (m.find("ModificationProtectionStatus") != m.end() && !m["ModificationProtectionStatus"].empty()) {
      modificationProtectionStatus = make_shared<string>(boost::any_cast<string>(m["ModificationProtectionStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateLoadBalancerProtectionRequest() = default;
};
class UpdateLoadBalancerProtectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateLoadBalancerProtectionResponseBody() {}

  explicit UpdateLoadBalancerProtectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateLoadBalancerProtectionResponseBody() = default;
};
class UpdateLoadBalancerProtectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLoadBalancerProtectionResponseBody> body{};

  UpdateLoadBalancerProtectionResponse() {}

  explicit UpdateLoadBalancerProtectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLoadBalancerProtectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLoadBalancerProtectionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLoadBalancerProtectionResponse() = default;
};
class UpdateLoadBalancerZonesRequestZoneMappings : public Darabonba::Model {
public:
  shared_ptr<string> allocationId{};
  shared_ptr<string> eipType{};
  shared_ptr<string> privateIPv4Address{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  UpdateLoadBalancerZonesRequestZoneMappings() {}

  explicit UpdateLoadBalancerZonesRequestZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allocationId) {
      res["AllocationId"] = boost::any(*allocationId);
    }
    if (eipType) {
      res["EipType"] = boost::any(*eipType);
    }
    if (privateIPv4Address) {
      res["PrivateIPv4Address"] = boost::any(*privateIPv4Address);
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
    if (m.find("AllocationId") != m.end() && !m["AllocationId"].empty()) {
      allocationId = make_shared<string>(boost::any_cast<string>(m["AllocationId"]));
    }
    if (m.find("EipType") != m.end() && !m["EipType"].empty()) {
      eipType = make_shared<string>(boost::any_cast<string>(m["EipType"]));
    }
    if (m.find("PrivateIPv4Address") != m.end() && !m["PrivateIPv4Address"].empty()) {
      privateIPv4Address = make_shared<string>(boost::any_cast<string>(m["PrivateIPv4Address"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~UpdateLoadBalancerZonesRequestZoneMappings() = default;
};
class UpdateLoadBalancerZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<UpdateLoadBalancerZonesRequestZoneMappings>> zoneMappings{};

  UpdateLoadBalancerZonesRequest() {}

  explicit UpdateLoadBalancerZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (zoneMappings) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ZoneMappings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ZoneMappings") != m.end() && !m["ZoneMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["ZoneMappings"].type()) {
        vector<UpdateLoadBalancerZonesRequestZoneMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ZoneMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateLoadBalancerZonesRequestZoneMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMappings = make_shared<vector<UpdateLoadBalancerZonesRequestZoneMappings>>(expect1);
      }
    }
  }


  virtual ~UpdateLoadBalancerZonesRequest() = default;
};
class UpdateLoadBalancerZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  UpdateLoadBalancerZonesResponseBody() {}

  explicit UpdateLoadBalancerZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateLoadBalancerZonesResponseBody() = default;
};
class UpdateLoadBalancerZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLoadBalancerZonesResponseBody> body{};

  UpdateLoadBalancerZonesResponse() {}

  explicit UpdateLoadBalancerZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLoadBalancerZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLoadBalancerZonesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLoadBalancerZonesResponse() = default;
};
class UpdateSecurityPolicyAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> ciphers{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityPolicyId{};
  shared_ptr<string> securityPolicyName{};
  shared_ptr<vector<string>> tlsVersions{};

  UpdateSecurityPolicyAttributeRequest() {}

  explicit UpdateSecurityPolicyAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ciphers) {
      res["Ciphers"] = boost::any(*ciphers);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
    }
    if (securityPolicyName) {
      res["SecurityPolicyName"] = boost::any(*securityPolicyName);
    }
    if (tlsVersions) {
      res["TlsVersions"] = boost::any(*tlsVersions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ciphers") != m.end() && !m["Ciphers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Ciphers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ciphers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ciphers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
    if (m.find("SecurityPolicyName") != m.end() && !m["SecurityPolicyName"].empty()) {
      securityPolicyName = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyName"]));
    }
    if (m.find("TlsVersions") != m.end() && !m["TlsVersions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TlsVersions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TlsVersions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tlsVersions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateSecurityPolicyAttributeRequest() = default;
};
class UpdateSecurityPolicyAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> securityPolicyId{};

  UpdateSecurityPolicyAttributeResponseBody() {}

  explicit UpdateSecurityPolicyAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (securityPolicyId) {
      res["SecurityPolicyId"] = boost::any(*securityPolicyId);
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
    if (m.find("SecurityPolicyId") != m.end() && !m["SecurityPolicyId"].empty()) {
      securityPolicyId = make_shared<string>(boost::any_cast<string>(m["SecurityPolicyId"]));
    }
  }


  virtual ~UpdateSecurityPolicyAttributeResponseBody() = default;
};
class UpdateSecurityPolicyAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSecurityPolicyAttributeResponseBody> body{};

  UpdateSecurityPolicyAttributeResponse() {}

  explicit UpdateSecurityPolicyAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSecurityPolicyAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSecurityPolicyAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSecurityPolicyAttributeResponse() = default;
};
class UpdateServerGroupAttributeRequestHealthCheckConfig : public Darabonba::Model {
public:
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<bool> healthCheckEnabled{};
  shared_ptr<string> healthCheckExp{};
  shared_ptr<vector<string>> healthCheckHttpCode{};
  shared_ptr<string> healthCheckHttpVersion{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckReq{};
  shared_ptr<string> healthCheckType{};
  shared_ptr<string> healthCheckUrl{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<string> httpCheckMethod{};
  shared_ptr<long> unhealthyThreshold{};

  UpdateServerGroupAttributeRequestHealthCheckConfig() {}

  explicit UpdateServerGroupAttributeRequestHealthCheckConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckConnectPort) {
      res["HealthCheckConnectPort"] = boost::any(*healthCheckConnectPort);
    }
    if (healthCheckConnectTimeout) {
      res["HealthCheckConnectTimeout"] = boost::any(*healthCheckConnectTimeout);
    }
    if (healthCheckDomain) {
      res["HealthCheckDomain"] = boost::any(*healthCheckDomain);
    }
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
    }
    if (healthCheckExp) {
      res["HealthCheckExp"] = boost::any(*healthCheckExp);
    }
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (healthCheckHttpVersion) {
      res["HealthCheckHttpVersion"] = boost::any(*healthCheckHttpVersion);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckReq) {
      res["HealthCheckReq"] = boost::any(*healthCheckReq);
    }
    if (healthCheckType) {
      res["HealthCheckType"] = boost::any(*healthCheckType);
    }
    if (healthCheckUrl) {
      res["HealthCheckUrl"] = boost::any(*healthCheckUrl);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
    }
    if (httpCheckMethod) {
      res["HttpCheckMethod"] = boost::any(*httpCheckMethod);
    }
    if (unhealthyThreshold) {
      res["UnhealthyThreshold"] = boost::any(*unhealthyThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HealthCheckConnectPort") != m.end() && !m["HealthCheckConnectPort"].empty()) {
      healthCheckConnectPort = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectPort"]));
    }
    if (m.find("HealthCheckConnectTimeout") != m.end() && !m["HealthCheckConnectTimeout"].empty()) {
      healthCheckConnectTimeout = make_shared<long>(boost::any_cast<long>(m["HealthCheckConnectTimeout"]));
    }
    if (m.find("HealthCheckDomain") != m.end() && !m["HealthCheckDomain"].empty()) {
      healthCheckDomain = make_shared<string>(boost::any_cast<string>(m["HealthCheckDomain"]));
    }
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckEnabled"]));
    }
    if (m.find("HealthCheckExp") != m.end() && !m["HealthCheckExp"].empty()) {
      healthCheckExp = make_shared<string>(boost::any_cast<string>(m["HealthCheckExp"]));
    }
    if (m.find("HealthCheckHttpCode") != m.end() && !m["HealthCheckHttpCode"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HealthCheckHttpCode"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HealthCheckHttpCode"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      healthCheckHttpCode = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HealthCheckHttpVersion") != m.end() && !m["HealthCheckHttpVersion"].empty()) {
      healthCheckHttpVersion = make_shared<string>(boost::any_cast<string>(m["HealthCheckHttpVersion"]));
    }
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckReq") != m.end() && !m["HealthCheckReq"].empty()) {
      healthCheckReq = make_shared<string>(boost::any_cast<string>(m["HealthCheckReq"]));
    }
    if (m.find("HealthCheckType") != m.end() && !m["HealthCheckType"].empty()) {
      healthCheckType = make_shared<string>(boost::any_cast<string>(m["HealthCheckType"]));
    }
    if (m.find("HealthCheckUrl") != m.end() && !m["HealthCheckUrl"].empty()) {
      healthCheckUrl = make_shared<string>(boost::any_cast<string>(m["HealthCheckUrl"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("HttpCheckMethod") != m.end() && !m["HttpCheckMethod"].empty()) {
      httpCheckMethod = make_shared<string>(boost::any_cast<string>(m["HttpCheckMethod"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
  }


  virtual ~UpdateServerGroupAttributeRequestHealthCheckConfig() = default;
};
class UpdateServerGroupAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> connectionDrainEnabled{};
  shared_ptr<long> connectionDrainTimeout{};
  shared_ptr<bool> dryRun{};
  shared_ptr<UpdateServerGroupAttributeRequestHealthCheckConfig> healthCheckConfig{};
  shared_ptr<bool> preserveClientIpEnabled{};
  shared_ptr<string> regionId{};
  shared_ptr<string> scheduler{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<string> serverGroupName{};

  UpdateServerGroupAttributeRequest() {}

  explicit UpdateServerGroupAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectionDrainEnabled) {
      res["ConnectionDrainEnabled"] = boost::any(*connectionDrainEnabled);
    }
    if (connectionDrainTimeout) {
      res["ConnectionDrainTimeout"] = boost::any(*connectionDrainTimeout);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (healthCheckConfig) {
      res["HealthCheckConfig"] = healthCheckConfig ? boost::any(healthCheckConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (preserveClientIpEnabled) {
      res["PreserveClientIpEnabled"] = boost::any(*preserveClientIpEnabled);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (scheduler) {
      res["Scheduler"] = boost::any(*scheduler);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (serverGroupName) {
      res["ServerGroupName"] = boost::any(*serverGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConnectionDrainEnabled") != m.end() && !m["ConnectionDrainEnabled"].empty()) {
      connectionDrainEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConnectionDrainEnabled"]));
    }
    if (m.find("ConnectionDrainTimeout") != m.end() && !m["ConnectionDrainTimeout"].empty()) {
      connectionDrainTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectionDrainTimeout"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("HealthCheckConfig") != m.end() && !m["HealthCheckConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HealthCheckConfig"].type()) {
        UpdateServerGroupAttributeRequestHealthCheckConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HealthCheckConfig"]));
        healthCheckConfig = make_shared<UpdateServerGroupAttributeRequestHealthCheckConfig>(model1);
      }
    }
    if (m.find("PreserveClientIpEnabled") != m.end() && !m["PreserveClientIpEnabled"].empty()) {
      preserveClientIpEnabled = make_shared<bool>(boost::any_cast<bool>(m["PreserveClientIpEnabled"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Scheduler") != m.end() && !m["Scheduler"].empty()) {
      scheduler = make_shared<string>(boost::any_cast<string>(m["Scheduler"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("ServerGroupName") != m.end() && !m["ServerGroupName"].empty()) {
      serverGroupName = make_shared<string>(boost::any_cast<string>(m["ServerGroupName"]));
    }
  }


  virtual ~UpdateServerGroupAttributeRequest() = default;
};
class UpdateServerGroupAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serverGroupId{};

  UpdateServerGroupAttributeResponseBody() {}

  explicit UpdateServerGroupAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
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
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~UpdateServerGroupAttributeResponseBody() = default;
};
class UpdateServerGroupAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServerGroupAttributeResponseBody> body{};

  UpdateServerGroupAttributeResponse() {}

  explicit UpdateServerGroupAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateServerGroupAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServerGroupAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServerGroupAttributeResponse() = default;
};
class UpdateServerGroupServersAttributeRequestServers : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverType{};
  shared_ptr<long> weight{};

  UpdateServerGroupServersAttributeRequestServers() {}

  explicit UpdateServerGroupServersAttributeRequestServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["Weight"]));
    }
  }


  virtual ~UpdateServerGroupServersAttributeRequestServers() = default;
};
class UpdateServerGroupServersAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<vector<UpdateServerGroupServersAttributeRequestServers>> servers{};

  UpdateServerGroupServersAttributeRequest() {}

  explicit UpdateServerGroupServersAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (servers) {
      vector<boost::any> temp1;
      for(auto item1:*servers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Servers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("Servers") != m.end() && !m["Servers"].empty()) {
      if (typeid(vector<boost::any>) == m["Servers"].type()) {
        vector<UpdateServerGroupServersAttributeRequestServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Servers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateServerGroupServersAttributeRequestServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servers = make_shared<vector<UpdateServerGroupServersAttributeRequestServers>>(expect1);
      }
    }
  }


  virtual ~UpdateServerGroupServersAttributeRequest() = default;
};
class UpdateServerGroupServersAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serverGroupId{};

  UpdateServerGroupServersAttributeResponseBody() {}

  explicit UpdateServerGroupServersAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
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
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~UpdateServerGroupServersAttributeResponseBody() = default;
};
class UpdateServerGroupServersAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServerGroupServersAttributeResponseBody> body{};

  UpdateServerGroupServersAttributeResponse() {}

  explicit UpdateServerGroupServersAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateServerGroupServersAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServerGroupServersAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServerGroupServersAttributeResponse() = default;
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
  AddServersToServerGroupResponse addServersToServerGroupWithOptions(shared_ptr<AddServersToServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddServersToServerGroupResponse addServersToServerGroup(shared_ptr<AddServersToServerGroupRequest> request);
  AssociateAdditionalCertificatesWithListenerResponse associateAdditionalCertificatesWithListenerWithOptions(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateAdditionalCertificatesWithListenerResponse associateAdditionalCertificatesWithListener(shared_ptr<AssociateAdditionalCertificatesWithListenerRequest> request);
  AttachCommonBandwidthPackageToLoadBalancerResponse attachCommonBandwidthPackageToLoadBalancerWithOptions(shared_ptr<AttachCommonBandwidthPackageToLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachCommonBandwidthPackageToLoadBalancerResponse attachCommonBandwidthPackageToLoadBalancer(shared_ptr<AttachCommonBandwidthPackageToLoadBalancerRequest> request);
  CancelShiftLoadBalancerZonesResponse cancelShiftLoadBalancerZonesWithOptions(shared_ptr<CancelShiftLoadBalancerZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelShiftLoadBalancerZonesResponse cancelShiftLoadBalancerZones(shared_ptr<CancelShiftLoadBalancerZonesRequest> request);
  CreateListenerResponse createListenerWithOptions(shared_ptr<CreateListenerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateListenerResponse createListener(shared_ptr<CreateListenerRequest> request);
  CreateLoadBalancerResponse createLoadBalancerWithOptions(shared_ptr<CreateLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoadBalancerResponse createLoadBalancer(shared_ptr<CreateLoadBalancerRequest> request);
  CreateSecurityPolicyResponse createSecurityPolicyWithOptions(shared_ptr<CreateSecurityPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSecurityPolicyResponse createSecurityPolicy(shared_ptr<CreateSecurityPolicyRequest> request);
  CreateServerGroupResponse createServerGroupWithOptions(shared_ptr<CreateServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServerGroupResponse createServerGroup(shared_ptr<CreateServerGroupRequest> request);
  DeleteListenerResponse deleteListenerWithOptions(shared_ptr<DeleteListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteListenerResponse deleteListener(shared_ptr<DeleteListenerRequest> request);
  DeleteLoadBalancerResponse deleteLoadBalancerWithOptions(shared_ptr<DeleteLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLoadBalancerResponse deleteLoadBalancer(shared_ptr<DeleteLoadBalancerRequest> request);
  DeleteSecurityPolicyResponse deleteSecurityPolicyWithOptions(shared_ptr<DeleteSecurityPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSecurityPolicyResponse deleteSecurityPolicy(shared_ptr<DeleteSecurityPolicyRequest> request);
  DeleteServerGroupResponse deleteServerGroupWithOptions(shared_ptr<DeleteServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServerGroupResponse deleteServerGroup(shared_ptr<DeleteServerGroupRequest> request);
  DescribeHdMonitorRegionConfigResponse describeHdMonitorRegionConfigWithOptions(shared_ptr<DescribeHdMonitorRegionConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHdMonitorRegionConfigResponse describeHdMonitorRegionConfig(shared_ptr<DescribeHdMonitorRegionConfigRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  DetachCommonBandwidthPackageFromLoadBalancerResponse detachCommonBandwidthPackageFromLoadBalancerWithOptions(shared_ptr<DetachCommonBandwidthPackageFromLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachCommonBandwidthPackageFromLoadBalancerResponse detachCommonBandwidthPackageFromLoadBalancer(shared_ptr<DetachCommonBandwidthPackageFromLoadBalancerRequest> request);
  DisableLoadBalancerIpv6InternetResponse disableLoadBalancerIpv6InternetWithOptions(shared_ptr<DisableLoadBalancerIpv6InternetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableLoadBalancerIpv6InternetResponse disableLoadBalancerIpv6Internet(shared_ptr<DisableLoadBalancerIpv6InternetRequest> request);
  DisassociateAdditionalCertificatesWithListenerResponse disassociateAdditionalCertificatesWithListenerWithOptions(shared_ptr<DisassociateAdditionalCertificatesWithListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisassociateAdditionalCertificatesWithListenerResponse disassociateAdditionalCertificatesWithListener(shared_ptr<DisassociateAdditionalCertificatesWithListenerRequest> request);
  EnableLoadBalancerIpv6InternetResponse enableLoadBalancerIpv6InternetWithOptions(shared_ptr<EnableLoadBalancerIpv6InternetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableLoadBalancerIpv6InternetResponse enableLoadBalancerIpv6Internet(shared_ptr<EnableLoadBalancerIpv6InternetRequest> request);
  GetJobStatusResponse getJobStatusWithOptions(shared_ptr<GetJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetJobStatusResponse getJobStatus(shared_ptr<GetJobStatusRequest> request);
  GetListenerAttributeResponse getListenerAttributeWithOptions(shared_ptr<GetListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetListenerAttributeResponse getListenerAttribute(shared_ptr<GetListenerAttributeRequest> request);
  GetListenerHealthStatusResponse getListenerHealthStatusWithOptions(shared_ptr<GetListenerHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetListenerHealthStatusResponse getListenerHealthStatus(shared_ptr<GetListenerHealthStatusRequest> request);
  GetLoadBalancerAttributeResponse getLoadBalancerAttributeWithOptions(shared_ptr<GetLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLoadBalancerAttributeResponse getLoadBalancerAttribute(shared_ptr<GetLoadBalancerAttributeRequest> request);
  ListListenerCertificatesResponse listListenerCertificatesWithOptions(shared_ptr<ListListenerCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListListenerCertificatesResponse listListenerCertificates(shared_ptr<ListListenerCertificatesRequest> request);
  ListListenersResponse listListenersWithOptions(shared_ptr<ListListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListListenersResponse listListeners(shared_ptr<ListListenersRequest> request);
  ListLoadBalancersResponse listLoadBalancersWithOptions(shared_ptr<ListLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLoadBalancersResponse listLoadBalancers(shared_ptr<ListLoadBalancersRequest> request);
  ListSecurityPolicyResponse listSecurityPolicyWithOptions(shared_ptr<ListSecurityPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSecurityPolicyResponse listSecurityPolicy(shared_ptr<ListSecurityPolicyRequest> request);
  ListServerGroupServersResponse listServerGroupServersWithOptions(shared_ptr<ListServerGroupServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServerGroupServersResponse listServerGroupServers(shared_ptr<ListServerGroupServersRequest> request);
  ListServerGroupsResponse listServerGroupsWithOptions(shared_ptr<ListServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServerGroupsResponse listServerGroups(shared_ptr<ListServerGroupsRequest> request);
  ListSystemSecurityPolicyResponse listSystemSecurityPolicyWithOptions(shared_ptr<ListSystemSecurityPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSystemSecurityPolicyResponse listSystemSecurityPolicy(shared_ptr<ListSystemSecurityPolicyRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  LoadBalancerJoinSecurityGroupResponse loadBalancerJoinSecurityGroupWithOptions(shared_ptr<LoadBalancerJoinSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LoadBalancerJoinSecurityGroupResponse loadBalancerJoinSecurityGroup(shared_ptr<LoadBalancerJoinSecurityGroupRequest> request);
  LoadBalancerLeaveSecurityGroupResponse loadBalancerLeaveSecurityGroupWithOptions(shared_ptr<LoadBalancerLeaveSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LoadBalancerLeaveSecurityGroupResponse loadBalancerLeaveSecurityGroup(shared_ptr<LoadBalancerLeaveSecurityGroupRequest> request);
  MoveResourceGroupResponse moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceGroupResponse moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request);
  RemoveServersFromServerGroupResponse removeServersFromServerGroupWithOptions(shared_ptr<RemoveServersFromServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveServersFromServerGroupResponse removeServersFromServerGroup(shared_ptr<RemoveServersFromServerGroupRequest> request);
  SetHdMonitorRegionConfigResponse setHdMonitorRegionConfigWithOptions(shared_ptr<SetHdMonitorRegionConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetHdMonitorRegionConfigResponse setHdMonitorRegionConfig(shared_ptr<SetHdMonitorRegionConfigRequest> request);
  StartListenerResponse startListenerWithOptions(shared_ptr<StartListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartListenerResponse startListener(shared_ptr<StartListenerRequest> request);
  StartShiftLoadBalancerZonesResponse startShiftLoadBalancerZonesWithOptions(shared_ptr<StartShiftLoadBalancerZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartShiftLoadBalancerZonesResponse startShiftLoadBalancerZones(shared_ptr<StartShiftLoadBalancerZonesRequest> request);
  StopListenerResponse stopListenerWithOptions(shared_ptr<StopListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopListenerResponse stopListener(shared_ptr<StopListenerRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateListenerAttributeResponse updateListenerAttributeWithOptions(shared_ptr<UpdateListenerAttributeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateListenerAttributeResponse updateListenerAttribute(shared_ptr<UpdateListenerAttributeRequest> request);
  UpdateLoadBalancerAddressTypeConfigResponse updateLoadBalancerAddressTypeConfigWithOptions(shared_ptr<UpdateLoadBalancerAddressTypeConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoadBalancerAddressTypeConfigResponse updateLoadBalancerAddressTypeConfig(shared_ptr<UpdateLoadBalancerAddressTypeConfigRequest> request);
  UpdateLoadBalancerAttributeResponse updateLoadBalancerAttributeWithOptions(shared_ptr<UpdateLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoadBalancerAttributeResponse updateLoadBalancerAttribute(shared_ptr<UpdateLoadBalancerAttributeRequest> request);
  UpdateLoadBalancerProtectionResponse updateLoadBalancerProtectionWithOptions(shared_ptr<UpdateLoadBalancerProtectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoadBalancerProtectionResponse updateLoadBalancerProtection(shared_ptr<UpdateLoadBalancerProtectionRequest> request);
  UpdateLoadBalancerZonesResponse updateLoadBalancerZonesWithOptions(shared_ptr<UpdateLoadBalancerZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoadBalancerZonesResponse updateLoadBalancerZones(shared_ptr<UpdateLoadBalancerZonesRequest> request);
  UpdateSecurityPolicyAttributeResponse updateSecurityPolicyAttributeWithOptions(shared_ptr<UpdateSecurityPolicyAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSecurityPolicyAttributeResponse updateSecurityPolicyAttribute(shared_ptr<UpdateSecurityPolicyAttributeRequest> request);
  UpdateServerGroupAttributeResponse updateServerGroupAttributeWithOptions(shared_ptr<UpdateServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServerGroupAttributeResponse updateServerGroupAttribute(shared_ptr<UpdateServerGroupAttributeRequest> request);
  UpdateServerGroupServersAttributeResponse updateServerGroupServersAttributeWithOptions(shared_ptr<UpdateServerGroupServersAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServerGroupServersAttributeResponse updateServerGroupServersAttribute(shared_ptr<UpdateServerGroupServersAttributeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Nlb20220430

#endif
