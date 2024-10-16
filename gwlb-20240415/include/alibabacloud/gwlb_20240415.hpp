// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GWLB20240415_H_
#define ALIBABACLOUD_GWLB20240415_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Gwlb20240415 {
class AddServersToServerGroupRequestServers : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverType{};

  AddServersToServerGroupRequestServers() {}

  explicit AddServersToServerGroupRequestServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddServersToServerGroupRequestServers() = default;
};
class AddServersToServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
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
  shared_ptr<string> requestId{};

  AddServersToServerGroupResponseBody() {}

  explicit AddServersToServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerDescription{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<vector<CreateListenerRequestTag>> tag{};

  CreateListenerRequest() {}

  explicit CreateListenerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
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
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
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
class CreateListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> listenerId{};
  shared_ptr<string> requestId{};

  CreateListenerResponseBody() {}

  explicit CreateListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  CreateLoadBalancerRequestZoneMappings() {}

  explicit CreateLoadBalancerRequestZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateLoadBalancerRequestZoneMappings() = default;
};
class CreateLoadBalancerRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressIpVersion{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerName{};
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
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
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
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> requestId{};

  CreateLoadBalancerResponseBody() {}

  explicit CreateLoadBalancerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
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
class CreateServerGroupRequestConnectionDrainConfig : public Darabonba::Model {
public:
  shared_ptr<bool> connectionDrainEnabled{};
  shared_ptr<long> connectionDrainTimeout{};

  CreateServerGroupRequestConnectionDrainConfig() {}

  explicit CreateServerGroupRequestConnectionDrainConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionDrainEnabled) {
      res["ConnectionDrainEnabled"] = boost::any(*connectionDrainEnabled);
    }
    if (connectionDrainTimeout) {
      res["ConnectionDrainTimeout"] = boost::any(*connectionDrainTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionDrainEnabled") != m.end() && !m["ConnectionDrainEnabled"].empty()) {
      connectionDrainEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConnectionDrainEnabled"]));
    }
    if (m.find("ConnectionDrainTimeout") != m.end() && !m["ConnectionDrainTimeout"].empty()) {
      connectionDrainTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectionDrainTimeout"]));
    }
  }


  virtual ~CreateServerGroupRequestConnectionDrainConfig() = default;
};
class CreateServerGroupRequestHealthCheckConfig : public Darabonba::Model {
public:
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<bool> healthCheckEnabled{};
  shared_ptr<vector<string>> healthCheckHttpCode{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<long> healthyThreshold{};
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
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
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
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
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
  shared_ptr<string> clientToken{};
  shared_ptr<CreateServerGroupRequestConnectionDrainConfig> connectionDrainConfig{};
  shared_ptr<bool> dryRun{};
  shared_ptr<CreateServerGroupRequestHealthCheckConfig> healthCheckConfig{};
  shared_ptr<string> protocol{};
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
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (connectionDrainConfig) {
      res["ConnectionDrainConfig"] = connectionDrainConfig ? boost::any(connectionDrainConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (healthCheckConfig) {
      res["HealthCheckConfig"] = healthCheckConfig ? boost::any(healthCheckConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ConnectionDrainConfig") != m.end() && !m["ConnectionDrainConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConnectionDrainConfig"].type()) {
        CreateServerGroupRequestConnectionDrainConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConnectionDrainConfig"]));
        connectionDrainConfig = make_shared<CreateServerGroupRequestConnectionDrainConfig>(model1);
      }
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
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
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
  shared_ptr<string> requestId{};
  shared_ptr<string> serverGroupId{};

  CreateServerGroupResponseBody() {}

  explicit CreateServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  }


  virtual ~DeleteListenerRequest() = default;
};
class DeleteListenerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteListenerResponseBody() {}

  explicit DeleteListenerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeleteLoadBalancerRequest() = default;
};
class DeleteLoadBalancerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLoadBalancerResponseBody() {}

  explicit DeleteLoadBalancerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class DeleteServerGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
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
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~DeleteServerGroupRequest() = default;
};
class DeleteServerGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServerGroupResponseBody() {}

  explicit DeleteServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
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
class GetListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> listenerId{};

  GetListenerAttributeRequest() {}

  explicit GetListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
  }


  virtual ~GetListenerAttributeRequest() = default;
};
class GetListenerAttributeResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetListenerAttributeResponseBodyTags() {}

  explicit GetListenerAttributeResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetListenerAttributeResponseBodyTags() = default;
};
class GetListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> listenerDescription{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> listenerStatus{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<vector<GetListenerAttributeResponseBodyTags>> tags{};

  GetListenerAttributeResponseBody() {}

  explicit GetListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (listenerStatus) {
      res["ListenerStatus"] = boost::any(*listenerStatus);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
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
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ListenerStatus") != m.end() && !m["ListenerStatus"].empty()) {
      listenerStatus = make_shared<string>(boost::any_cast<string>(m["ListenerStatus"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
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
class GetListenerHealthStatusRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<string>> values{};

  GetListenerHealthStatusRequestFilter() {}

  explicit GetListenerHealthStatusRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetListenerHealthStatusRequestFilter() = default;
};
class GetListenerHealthStatusRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GetListenerHealthStatusRequestFilter>> filter{};
  shared_ptr<string> listenerId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> skip{};

  GetListenerHealthStatusRequest() {}

  explicit GetListenerHealthStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
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
    if (skip) {
      res["Skip"] = boost::any(*skip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<GetListenerHealthStatusRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerHealthStatusRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<GetListenerHealthStatusRequestFilter>>(expect1);
      }
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
    if (m.find("Skip") != m.end() && !m["Skip"].empty()) {
      skip = make_shared<long>(boost::any_cast<long>(m["Skip"]));
    }
  }


  virtual ~GetListenerHealthStatusRequest() = default;
};
class GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServersReason : public Darabonba::Model {
public:
  shared_ptr<string> reasonCode{};

  GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServersReason() {}

  explicit GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServersReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServersReason() = default;
};
class GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServers : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServersReason> reason{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> status{};

  GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServers() {}

  explicit GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServersReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Reason"]));
        reason = make_shared<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServersReason>(model1);
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


  virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServers() = default;
};
class GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos : public Darabonba::Model {
public:
  shared_ptr<bool> healthCheckEnabled{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServers>> servers{};

  GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos() {}

  explicit GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (healthCheckEnabled) {
      res["HealthCheckEnabled"] = boost::any(*healthCheckEnabled);
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
    if (m.find("HealthCheckEnabled") != m.end() && !m["HealthCheckEnabled"].empty()) {
      healthCheckEnabled = make_shared<bool>(boost::any_cast<bool>(m["HealthCheckEnabled"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
    if (m.find("Servers") != m.end() && !m["Servers"].empty()) {
      if (typeid(vector<boost::any>) == m["Servers"].type()) {
        vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Servers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        servers = make_shared<vector<GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosServers>>(expect1);
      }
    }
  }


  virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos() = default;
};
class GetListenerHealthStatusResponseBodyListenerHealthStatus : public Darabonba::Model {
public:
  shared_ptr<string> listenerId{};
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
  shared_ptr<string> loadBalancerId{};

  GetLoadBalancerAttributeRequest() {}

  explicit GetLoadBalancerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
  }


  virtual ~GetLoadBalancerAttributeRequest() = default;
};
class GetLoadBalancerAttributeResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetLoadBalancerAttributeResponseBodyTags() {}

  explicit GetLoadBalancerAttributeResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetLoadBalancerAttributeResponseBodyTags() = default;
};
class GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses : public Darabonba::Model {
public:
  shared_ptr<string> eniId{};
  shared_ptr<string> privateIpv4Address{};

  GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses() {}

  explicit GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eniId) {
      res["EniId"] = boost::any(*eniId);
    }
    if (privateIpv4Address) {
      res["PrivateIpv4Address"] = boost::any(*privateIpv4Address);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EniId") != m.end() && !m["EniId"].empty()) {
      eniId = make_shared<string>(boost::any_cast<string>(m["EniId"]));
    }
    if (m.find("PrivateIpv4Address") != m.end() && !m["PrivateIpv4Address"].empty()) {
      privateIpv4Address = make_shared<string>(boost::any_cast<string>(m["PrivateIpv4Address"]));
    }
  }


  virtual ~GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses() = default;
};
class GetLoadBalancerAttributeResponseBodyZoneMappings : public Darabonba::Model {
public:
  shared_ptr<vector<GetLoadBalancerAttributeResponseBodyZoneMappingsLoadBalancerAddresses>> loadBalancerAddresses{};
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
  shared_ptr<string> createTime{};
  shared_ptr<string> loadBalancerBusinessStatus{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<string> loadBalancerStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
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
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
  shared_ptr<vector<string>> loadBalancerIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> skip{};
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
    if (loadBalancerIds) {
      res["LoadBalancerIds"] = boost::any(*loadBalancerIds);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (skip) {
      res["Skip"] = boost::any(*skip);
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
    if (m.find("Skip") != m.end() && !m["Skip"].empty()) {
      skip = make_shared<long>(boost::any_cast<long>(m["Skip"]));
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
  shared_ptr<string> listenerDescription{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> listenerStatus{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<vector<ListListenersResponseBodyListenersTags>> tags{};

  ListListenersResponseBodyListeners() {}

  explicit ListListenersResponseBodyListeners(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (listenerStatus) {
      res["ListenerStatus"] = boost::any(*listenerStatus);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
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
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ListenerStatus") != m.end() && !m["ListenerStatus"].empty()) {
      listenerStatus = make_shared<string>(boost::any_cast<string>(m["ListenerStatus"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
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
  shared_ptr<string> loadBalancerBusinessStatus{};
  shared_ptr<vector<string>> loadBalancerIds{};
  shared_ptr<vector<string>> loadBalancerNames{};
  shared_ptr<string> loadBalancerStatus{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> skip{};
  shared_ptr<vector<ListLoadBalancersRequestTag>> tag{};
  shared_ptr<vector<string>> vpcIds{};
  shared_ptr<vector<string>> zoneIds{};

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
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (skip) {
      res["Skip"] = boost::any(*skip);
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
    if (zoneIds) {
      res["ZoneIds"] = boost::any(*zoneIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressIpVersion") != m.end() && !m["AddressIpVersion"].empty()) {
      addressIpVersion = make_shared<string>(boost::any_cast<string>(m["AddressIpVersion"]));
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Skip") != m.end() && !m["Skip"].empty()) {
      skip = make_shared<long>(boost::any_cast<long>(m["Skip"]));
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
    if (m.find("ZoneIds") != m.end() && !m["ZoneIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ZoneIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ZoneIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      zoneIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListLoadBalancersRequest() = default;
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
  shared_ptr<string> eniId{};
  shared_ptr<string> privateIpv4Address{};

  ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses() {}

  explicit ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eniId) {
      res["EniId"] = boost::any(*eniId);
    }
    if (privateIpv4Address) {
      res["PrivateIpv4Address"] = boost::any(*privateIpv4Address);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EniId") != m.end() && !m["EniId"].empty()) {
      eniId = make_shared<string>(boost::any_cast<string>(m["EniId"]));
    }
    if (m.find("PrivateIpv4Address") != m.end() && !m["PrivateIpv4Address"].empty()) {
      privateIpv4Address = make_shared<string>(boost::any_cast<string>(m["PrivateIpv4Address"]));
    }
  }


  virtual ~ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses() = default;
};
class ListLoadBalancersResponseBodyLoadBalancersZoneMappings : public Darabonba::Model {
public:
  shared_ptr<vector<ListLoadBalancersResponseBodyLoadBalancersZoneMappingsLoadBalancerAddresses>> loadBalancerAddresses{};
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
  shared_ptr<string> createTime{};
  shared_ptr<string> loadBalancerBusinessStatus{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> loadBalancerName{};
  shared_ptr<string> loadBalancerStatus{};
  shared_ptr<string> resourceGroupId{};
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
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
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
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
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
class ListServerGroupServersRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<vector<string>> serverIds{};
  shared_ptr<vector<string>> serverIps{};
  shared_ptr<long> skip{};

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
    if (serverGroupId) {
      res["ServerGroupId"] = boost::any(*serverGroupId);
    }
    if (serverIds) {
      res["ServerIds"] = boost::any(*serverIds);
    }
    if (serverIps) {
      res["ServerIps"] = boost::any(*serverIps);
    }
    if (skip) {
      res["Skip"] = boost::any(*skip);
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
    if (m.find("Skip") != m.end() && !m["Skip"].empty()) {
      skip = make_shared<long>(boost::any_cast<long>(m["Skip"]));
    }
  }


  virtual ~ListServerGroupServersRequest() = default;
};
class ListServerGroupServersResponseBodyServers : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> serverGroupId{};
  shared_ptr<string> serverId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverType{};
  shared_ptr<string> status{};

  ListServerGroupServersResponseBodyServers() {}

  explicit ListServerGroupServersResponseBodyServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<string>> serverGroupIds{};
  shared_ptr<vector<string>> serverGroupNames{};
  shared_ptr<string> serverGroupType{};
  shared_ptr<long> skip{};
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
    if (skip) {
      res["Skip"] = boost::any(*skip);
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
    if (m.find("Skip") != m.end() && !m["Skip"].empty()) {
      skip = make_shared<long>(boost::any_cast<long>(m["Skip"]));
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
class ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig : public Darabonba::Model {
public:
  shared_ptr<bool> connectionDrainEnabled{};
  shared_ptr<long> connectionDrainTimeout{};

  ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig() {}

  explicit ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionDrainEnabled) {
      res["ConnectionDrainEnabled"] = boost::any(*connectionDrainEnabled);
    }
    if (connectionDrainTimeout) {
      res["ConnectionDrainTimeout"] = boost::any(*connectionDrainTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionDrainEnabled") != m.end() && !m["ConnectionDrainEnabled"].empty()) {
      connectionDrainEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConnectionDrainEnabled"]));
    }
    if (m.find("ConnectionDrainTimeout") != m.end() && !m["ConnectionDrainTimeout"].empty()) {
      connectionDrainTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectionDrainTimeout"]));
    }
  }


  virtual ~ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig() = default;
};
class ListServerGroupsResponseBodyServerGroupsHealthCheckConfig : public Darabonba::Model {
public:
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<bool> healthCheckEnabled{};
  shared_ptr<vector<string>> healthCheckHttpCode{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<long> healthyThreshold{};
  shared_ptr<long> unhealthyThreshold{};

  ListServerGroupsResponseBodyServerGroupsHealthCheckConfig() {}

  explicit ListServerGroupsResponseBodyServerGroupsHealthCheckConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
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
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
    }
    if (m.find("UnhealthyThreshold") != m.end() && !m["UnhealthyThreshold"].empty()) {
      unhealthyThreshold = make_shared<long>(boost::any_cast<long>(m["UnhealthyThreshold"]));
    }
  }


  virtual ~ListServerGroupsResponseBodyServerGroupsHealthCheckConfig() = default;
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
  shared_ptr<ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig> connectionDrainConfig{};
  shared_ptr<string> createTime{};
  shared_ptr<ListServerGroupsResponseBodyServerGroupsHealthCheckConfig> healthCheckConfig{};
  shared_ptr<string> protocol{};
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
    if (connectionDrainConfig) {
      res["ConnectionDrainConfig"] = connectionDrainConfig ? boost::any(connectionDrainConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (healthCheckConfig) {
      res["HealthCheckConfig"] = healthCheckConfig ? boost::any(healthCheckConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
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
    if (m.find("ConnectionDrainConfig") != m.end() && !m["ConnectionDrainConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConnectionDrainConfig"].type()) {
        ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConnectionDrainConfig"]));
        connectionDrainConfig = make_shared<ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("HealthCheckConfig") != m.end() && !m["HealthCheckConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["HealthCheckConfig"].type()) {
        ListServerGroupsResponseBodyServerGroupsHealthCheckConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HealthCheckConfig"]));
        healthCheckConfig = make_shared<ListServerGroupsResponseBodyServerGroupsHealthCheckConfig>(model1);
      }
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
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
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
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
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
class MoveResourceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> newResourceGroupId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};

  MoveResourceGroupRequest() {}

  explicit MoveResourceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
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


  virtual ~MoveResourceGroupRequest() = default;
};
class MoveResourceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MoveResourceGroupResponseBody() {}

  explicit MoveResourceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> requestId{};

  RemoveServersFromServerGroupResponseBody() {}

  explicit RemoveServersFromServerGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class UpdateListenerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> listenerDescription{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> serverGroupId{};

  UpdateListenerAttributeRequest() {}

  explicit UpdateListenerAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (listenerDescription) {
      res["ListenerDescription"] = boost::any(*listenerDescription);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
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
    if (m.find("ListenerDescription") != m.end() && !m["ListenerDescription"].empty()) {
      listenerDescription = make_shared<string>(boost::any_cast<string>(m["ListenerDescription"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ServerGroupId") != m.end() && !m["ServerGroupId"].empty()) {
      serverGroupId = make_shared<string>(boost::any_cast<string>(m["ServerGroupId"]));
    }
  }


  virtual ~UpdateListenerAttributeRequest() = default;
};
class UpdateListenerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateListenerAttributeResponseBody() {}

  explicit UpdateListenerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class UpdateLoadBalancerAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> loadBalancerName{};

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
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (loadBalancerName) {
      res["LoadBalancerName"] = boost::any(*loadBalancerName);
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
    if (m.find("LoadBalancerName") != m.end() && !m["LoadBalancerName"].empty()) {
      loadBalancerName = make_shared<string>(boost::any_cast<string>(m["LoadBalancerName"]));
    }
  }


  virtual ~UpdateLoadBalancerAttributeRequest() = default;
};
class UpdateLoadBalancerAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateLoadBalancerAttributeResponseBody() {}

  explicit UpdateLoadBalancerAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class UpdateLoadBalancerZonesRequestZoneMappings : public Darabonba::Model {
public:
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> zoneId{};

  UpdateLoadBalancerZonesRequestZoneMappings() {}

  explicit UpdateLoadBalancerZonesRequestZoneMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateLoadBalancerZonesRequestZoneMappings() = default;
};
class UpdateLoadBalancerZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> loadBalancerId{};
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
  shared_ptr<string> requestId{};

  UpdateLoadBalancerZonesResponseBody() {}

  explicit UpdateLoadBalancerZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class UpdateServerGroupAttributeRequestConnectionDrainConfig : public Darabonba::Model {
public:
  shared_ptr<bool> connectionDrainEnabled{};
  shared_ptr<long> connectionDrainTimeout{};

  UpdateServerGroupAttributeRequestConnectionDrainConfig() {}

  explicit UpdateServerGroupAttributeRequestConnectionDrainConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionDrainEnabled) {
      res["ConnectionDrainEnabled"] = boost::any(*connectionDrainEnabled);
    }
    if (connectionDrainTimeout) {
      res["ConnectionDrainTimeout"] = boost::any(*connectionDrainTimeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionDrainEnabled") != m.end() && !m["ConnectionDrainEnabled"].empty()) {
      connectionDrainEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConnectionDrainEnabled"]));
    }
    if (m.find("ConnectionDrainTimeout") != m.end() && !m["ConnectionDrainTimeout"].empty()) {
      connectionDrainTimeout = make_shared<long>(boost::any_cast<long>(m["ConnectionDrainTimeout"]));
    }
  }


  virtual ~UpdateServerGroupAttributeRequestConnectionDrainConfig() = default;
};
class UpdateServerGroupAttributeRequestHealthCheckConfig : public Darabonba::Model {
public:
  shared_ptr<long> healthCheckConnectPort{};
  shared_ptr<long> healthCheckConnectTimeout{};
  shared_ptr<string> healthCheckDomain{};
  shared_ptr<bool> healthCheckEnabled{};
  shared_ptr<vector<string>> healthCheckHttpCode{};
  shared_ptr<long> healthCheckInterval{};
  shared_ptr<string> healthCheckPath{};
  shared_ptr<string> healthCheckProtocol{};
  shared_ptr<long> healthyThreshold{};
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
    if (healthCheckHttpCode) {
      res["HealthCheckHttpCode"] = boost::any(*healthCheckHttpCode);
    }
    if (healthCheckInterval) {
      res["HealthCheckInterval"] = boost::any(*healthCheckInterval);
    }
    if (healthCheckPath) {
      res["HealthCheckPath"] = boost::any(*healthCheckPath);
    }
    if (healthCheckProtocol) {
      res["HealthCheckProtocol"] = boost::any(*healthCheckProtocol);
    }
    if (healthyThreshold) {
      res["HealthyThreshold"] = boost::any(*healthyThreshold);
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
    if (m.find("HealthCheckInterval") != m.end() && !m["HealthCheckInterval"].empty()) {
      healthCheckInterval = make_shared<long>(boost::any_cast<long>(m["HealthCheckInterval"]));
    }
    if (m.find("HealthCheckPath") != m.end() && !m["HealthCheckPath"].empty()) {
      healthCheckPath = make_shared<string>(boost::any_cast<string>(m["HealthCheckPath"]));
    }
    if (m.find("HealthCheckProtocol") != m.end() && !m["HealthCheckProtocol"].empty()) {
      healthCheckProtocol = make_shared<string>(boost::any_cast<string>(m["HealthCheckProtocol"]));
    }
    if (m.find("HealthyThreshold") != m.end() && !m["HealthyThreshold"].empty()) {
      healthyThreshold = make_shared<long>(boost::any_cast<long>(m["HealthyThreshold"]));
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
  shared_ptr<UpdateServerGroupAttributeRequestConnectionDrainConfig> connectionDrainConfig{};
  shared_ptr<bool> dryRun{};
  shared_ptr<UpdateServerGroupAttributeRequestHealthCheckConfig> healthCheckConfig{};
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
    if (connectionDrainConfig) {
      res["ConnectionDrainConfig"] = connectionDrainConfig ? boost::any(connectionDrainConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (healthCheckConfig) {
      res["HealthCheckConfig"] = healthCheckConfig ? boost::any(healthCheckConfig->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ConnectionDrainConfig") != m.end() && !m["ConnectionDrainConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConnectionDrainConfig"].type()) {
        UpdateServerGroupAttributeRequestConnectionDrainConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConnectionDrainConfig"]));
        connectionDrainConfig = make_shared<UpdateServerGroupAttributeRequestConnectionDrainConfig>(model1);
      }
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
  shared_ptr<string> requestId{};

  UpdateServerGroupAttributeResponseBody() {}

  explicit UpdateServerGroupAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  CreateListenerResponse createListenerWithOptions(shared_ptr<CreateListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateListenerResponse createListener(shared_ptr<CreateListenerRequest> request);
  CreateLoadBalancerResponse createLoadBalancerWithOptions(shared_ptr<CreateLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLoadBalancerResponse createLoadBalancer(shared_ptr<CreateLoadBalancerRequest> request);
  CreateServerGroupResponse createServerGroupWithOptions(shared_ptr<CreateServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServerGroupResponse createServerGroup(shared_ptr<CreateServerGroupRequest> request);
  DeleteListenerResponse deleteListenerWithOptions(shared_ptr<DeleteListenerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteListenerResponse deleteListener(shared_ptr<DeleteListenerRequest> request);
  DeleteLoadBalancerResponse deleteLoadBalancerWithOptions(shared_ptr<DeleteLoadBalancerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLoadBalancerResponse deleteLoadBalancer(shared_ptr<DeleteLoadBalancerRequest> request);
  DeleteServerGroupResponse deleteServerGroupWithOptions(shared_ptr<DeleteServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServerGroupResponse deleteServerGroup(shared_ptr<DeleteServerGroupRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  GetListenerAttributeResponse getListenerAttributeWithOptions(shared_ptr<GetListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetListenerAttributeResponse getListenerAttribute(shared_ptr<GetListenerAttributeRequest> request);
  GetListenerHealthStatusResponse getListenerHealthStatusWithOptions(shared_ptr<GetListenerHealthStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetListenerHealthStatusResponse getListenerHealthStatus(shared_ptr<GetListenerHealthStatusRequest> request);
  GetLoadBalancerAttributeResponse getLoadBalancerAttributeWithOptions(shared_ptr<GetLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLoadBalancerAttributeResponse getLoadBalancerAttribute(shared_ptr<GetLoadBalancerAttributeRequest> request);
  ListListenersResponse listListenersWithOptions(shared_ptr<ListListenersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListListenersResponse listListeners(shared_ptr<ListListenersRequest> request);
  ListLoadBalancersResponse listLoadBalancersWithOptions(shared_ptr<ListLoadBalancersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLoadBalancersResponse listLoadBalancers(shared_ptr<ListLoadBalancersRequest> request);
  ListServerGroupServersResponse listServerGroupServersWithOptions(shared_ptr<ListServerGroupServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServerGroupServersResponse listServerGroupServers(shared_ptr<ListServerGroupServersRequest> request);
  ListServerGroupsResponse listServerGroupsWithOptions(shared_ptr<ListServerGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServerGroupsResponse listServerGroups(shared_ptr<ListServerGroupsRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  MoveResourceGroupResponse moveResourceGroupWithOptions(shared_ptr<MoveResourceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceGroupResponse moveResourceGroup(shared_ptr<MoveResourceGroupRequest> request);
  RemoveServersFromServerGroupResponse removeServersFromServerGroupWithOptions(shared_ptr<RemoveServersFromServerGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveServersFromServerGroupResponse removeServersFromServerGroup(shared_ptr<RemoveServersFromServerGroupRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateListenerAttributeResponse updateListenerAttributeWithOptions(shared_ptr<UpdateListenerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateListenerAttributeResponse updateListenerAttribute(shared_ptr<UpdateListenerAttributeRequest> request);
  UpdateLoadBalancerAttributeResponse updateLoadBalancerAttributeWithOptions(shared_ptr<UpdateLoadBalancerAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoadBalancerAttributeResponse updateLoadBalancerAttribute(shared_ptr<UpdateLoadBalancerAttributeRequest> request);
  UpdateLoadBalancerZonesResponse updateLoadBalancerZonesWithOptions(shared_ptr<UpdateLoadBalancerZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLoadBalancerZonesResponse updateLoadBalancerZones(shared_ptr<UpdateLoadBalancerZonesRequest> request);
  UpdateServerGroupAttributeResponse updateServerGroupAttributeWithOptions(shared_ptr<UpdateServerGroupAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServerGroupAttributeResponse updateServerGroupAttribute(shared_ptr<UpdateServerGroupAttributeRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Gwlb20240415

#endif
